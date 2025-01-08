#include <stdio.h>
#include <stdlib.h>

void dis_table(int *round, int layer, int head, int body) {
    printf("---- round %d ----\n", ++(*round));
    for(int i = layer - 1; i >= 0; i--) {
        if(i == head)           printf("|-O-|\n");
        else if(i == body)      printf("|-^-|\n"); 
        else                    printf("|---|\n");
    }
}

void cal_step(int step, int layer, int *head, int *body) {
    *head += step;
    *body += step;
    
    if(*head > layer - 1) *head = layer - 1;
    else if(*head < 1) *head = 1;

    if(*body > layer - 2) *body = layer - 2;
    else if(*body < 0) *body = 0;
}

int main() {

    int layer, step;
    int round = 0, head = 1, body = 0;

    printf("Input number of stairs: ");
    scanf("%d", &layer);
    dis_table(&round, layer, head, body);

    while(1) {

        printf("Input step command: ");
        scanf("%d", &step);
        if(step == 0) break;

        cal_step(step, layer, &head, &body);
        dis_table(&round, layer, head, body);
    }
    
    return 0;
}

/*
step command สำหรับโปรแกรมนี้ คือ

ถ้าเป็นจำนวนเต็มบวก x หมายถึง ให้ไต่บันไดขึ้นไป x ขั้น
ถ้าเป็นจำนวนเต็มลบ -x หมายถึง ให้ไต่บันไดลงมา x ขั้น
ถ้าเป็นจำนวนเต็มศูนย์ หมายถึง จบโปรแกรม
เงื่อนไขเพิ่มเติมของโปรแกรมนี้ คือ

คน ประกอบด้วย 2 ส่วน คือ ส่วนหัว (O) และส่วนขา (^)
รอบที่หนึ่ง ขาของคนจะอยู่ที่ขั้นบันไดล่างสุด
ขาของคนจะไม่อยู่ต่ำกว่าบันไดขั้นล่างสุด และหัวของคนจะไม่อยู่สูงกว่าบันไดขั้นบนสุด
*/