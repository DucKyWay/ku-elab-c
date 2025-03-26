#include <iostream>
#include <vector>
#include <memory>
#include <string>

// Component
class GameObject {
public:
    virtual void update(int indent = 0) const = 0;
    virtual void addChild(std::shared_ptr<GameObject> child) {}
    virtual ~GameObject() = default;
};

// Leaf
class Sprite : public GameObject {
    std::string name;
public:
    Sprite(const std::string& name) : name(name) {}
    void update(int indent = 0) const override {
        std::cout << std::string(indent, ' ') << "- Updating Sprite: " << name << "\n";
    }
};

// Composite
class GameEntity : public GameObject {
    std::string name;
    std::vector<std::shared_ptr<GameObject>> children;
public:
    GameEntity(const std::string& name) : name(name) {}

    void addChild(std::shared_ptr<GameObject> child) override {
        children.push_back(child);
    }

    void update(int indent = 0) const override {
        std::cout << std::string(indent, ' ') << "+ Updating Entity: " << name << "\n";
        for (const auto& child : children) {
            child->update(indent + 2);
        }
    }
};

// Example usage
int main() {
    auto head = std::make_shared<Sprite>("Enemy Head");
    auto leftArm = std::make_shared<Sprite>("Left Arm");
    auto rightArm = std::make_shared<Sprite>("Right Arm");
    auto gun = std::make_shared<Sprite>("Gun");

    auto enemy = std::make_shared<GameEntity>("Enemy");
    enemy->addChild(head);
    enemy->addChild(leftArm);
    enemy->addChild(rightArm);
    enemy->addChild(gun);

    auto scene = std::make_shared<GameEntity>("Main Scene");
    scene->addChild(enemy);

    scene->update();

    return 0;
}