/*Problem Statement:
Create a program that calculates the final grade of a student based on multiple criteria, including attendance, assignment scores, and exam results, using nested decision structures. */

#include<stdio.h>
int main(){
    int atten,assign,exam,score;
    printf("Attendence (In percentile): ");
    scanf("%d",&atten);
    printf("Assignment scores (In percentage): ");
    scanf("%d",&assign);
    printf("Exam scores (In percentage): ");
    scanf("%d",&exam);
    if(atten>70){      
            score=exam*0.75+assign*0.25; /* Taking 25% of assignment and 75% of exam scores for final score*/
            if(score<90){
                if(score<80)
                    {
                        if (score<70)
                        {
                            if (score<60)
                        {
                               if (score<50)
                            {
                                printf("Grade: F (Fail)");
                            }
                            else
                            printf("Grade: E");
                        }
                        else
                        printf("Grade: D");
                        }
                        else
                        printf("Grade: C");
                    }
                else 
                printf("Grade: B");    
            }
            else
            printf("Grade: A");       
    } 
    else
    printf("80%% of attendence is necessary for passing ");
    return 0;
} 