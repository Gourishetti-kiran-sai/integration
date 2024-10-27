#include<stdio.h>
#include<math.h>
int main()
{
    int trigo,lower_value,upper_value;
    float upper,lower;
    float PI=3.141592,e=2.718;
    printf("choose the trignometry from given list:\n1.sine\n2.cosine\n3.tangent\n4.secant\n5.cosecant\n6.cot:\n");
    scanf("%d",&trigo);
    if(trigo>=1&&trigo<=6)
    {  
       printf("enter the upper_value:");
       scanf("%d",&upper_value);
       printf("enter the lower_value:");
       scanf("%d",&lower_value);
       upper=upper_value*(PI/180);
       lower=lower_value*(PI/180);
     switch(trigo)
    {   case (1):
        printf("integration of sine is -cosine\n");
        printf("%f",(float)(((cos(lower))-(cos(upper)))));
        break;
        case (2):
        printf("integration of cosine is sine\n");
        printf("%f",(float)(sin(upper)-sin(lower)));
        break;
        case (3):
        printf("integration of tangent is ln(|sec|)\n%f",(float)((log(1/(cos(upper)))/log(e))-(log(1/(cos(lower)))/log(e))));
        break;
        case (4):
        printf("integration of secant is ln(|tan((x/2)+(PI/4)))\n%f",(float)((log(tan((upper/2)+(PI/4)))/log(e))-(log(tan(lower/2)+(PI/2)))/(log(e))));
        break;
        case (5):
        printf("integration of cosecant is ln(|tan((x/2)+(PI/4)))\n%f",(float)((log(tan((upper/2)))/log(e))-(log(tan(lower/2)))/(log(e))));
        break;
        case (6):
        printf("integration of cot is ln(|cosec|)\n%f",(float)((log(1/sin(upper))/log(e))-((log(1/sin(lower)))/log(e))));
        break;
    }
    }
    else
    {
       printf("choose the trigo value from 1 to 6");
    }
}
