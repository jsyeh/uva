#include <stdio.h>
#include <string.h>
int team[1000][1000];///team members
int teamN[1000];///member number per team
int q[1000][1000];///queue of team t
int qBack[1000], qFront[1000];///zero
///int command[200000];
int teamSeq[1000];///ex. teamSeq[0]排最前面的隊
int teamSeqN=0;
int ans[200000];///最後要印出來的答案,dequeue
int ansN;
int T;
void initialize()
{
    ansN=0;   teamSeqN=0;
    for(int t=0;t<T;t++){
        teamN[t]=0; qBack[t]=0; qFront[t]=0;
        teamSeq[t]=-1;
    }
}
void findAndAdd(int now)
{
    for(int t=0;t<T;t++){
        for(int k=0;k<teamN[t];k++){
            if(team[t][k]==now){///found
///printf("got it! %d\n", now);
                int findInSeq=-1;
                for(int i=0;i<teamSeqN;i++){
                    if(teamSeq[i]==t){
                        findInSeq=i;
                    }
                }
                if(findInSeq==-1){///之前沒排隊
                    teamSeq[teamSeqN]=t;
                    teamSeqN++;
                }
///printf("findInSeq: %d\n", findInSeq);
///printf("t:%d k:%d\n", t,k);
                int queueLast=qBack[t];
                q[t][queueLast]=now;///add
                qBack[t]++;///add
            }
        }
    }
}
int main()
{
    int sceneN=1;
    while(scanf("%d", &T)==1){
        if(T==0)break;
        initialize();///for each team
        if(sceneN>1)printf("\n");
        printf("Scenario #%d\n", sceneN);
        for(int t=0;t<T;t++){
            scanf("%d", &teamN[t]);
            for(int k=0;k<teamN[t];k++){
                scanf("%d", &team[t][k]);
            }
        }
        char cmd[100];
        while( scanf("%s", cmd)==1){
///printf("%s \n", cmd);
            if(strcmp(cmd, "ENQUEUE")==0){
                int now;
                scanf("%d", &now );
                findAndAdd(now);
            }else if(strcmp(cmd, "DEQUEUE")==0){
                for(int i=0;i<teamSeqN;i++){
                    int t = teamSeq[i];
///printf("seqi: %d front:%d back:%d\n", t, qFront[t], qBack[t]);
                    if(qFront[t] < qBack[t]){
                        int Front=qFront[t];
                        ans[ansN]=q[t][Front];
                        printf("%d\n", ans[ansN]);
                        ansN++;
                        qFront[t]++;
                        break;
                    }
                }
            }else if(strcmp(cmd, "STOP")==0){
                break;
            }
        }
        sceneN++;
    }
}
