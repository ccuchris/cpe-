#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    char temp;
    char alphabet[26]={0};
    int max=0, count=-1, idx;
    while(count<n){
        temp=getchar();     //getchar()一次只能讀一個字元
        if(temp=='\n'){
            count++;    //如果讀到換行則count++
        }
        else{   //將字母轉換成陣列索引
            if(temp>='A' && temp<='Z'){
                idx=temp-'A';
            }
            else if(temp>='a' && temp<='z') idx=temp-'a';
            else continue;
            //針對指定索引進行計數
            alphabet[idx]+=1;
            if(alphabet[idx]>=max) max=alphabet[idx];
        }
    }
    for(int i=max;i>0;i--){
        for(int j=0;j<26;j++){
            if(alphabet[j]==i) printf("%c %d\n",('A'+j), i);
        }
    }
    return 0;
}