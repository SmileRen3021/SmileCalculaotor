//  main.c
//  Calculator (build 09)
//  Created by 不靠谱xy on 16/3/23.
//  last change by 不靠谱xy on 16/4/18. 
//  Copyleft 2016年 Smile_Ren_3021. All lefts reserved.
/*此程序是一个多功能计算器,
 可以执行四则运算，开平方，
 质数判断，正弦余弦，正切余切，
 倍数因数计算，面积计算，
 公倍数公因数计算，阶乘，
 生成随机字符串，猜数游戏， 
 便捷关机,单位换算,基数转换 
 等功能*/
//yooooooooo\(°▽°)/
//统计：880columns 
#include "smilelib.h"
int main(int argc, const char * argv[])
{
    double sqr,sqrtout,sine,cosine,tangent,cotangent,sino,coso,tano,coto,sa,sb,h,d,u,rad,areaoutput,convn,convo;
    double pi=acos(-1);
    int isodd,timesi,timesn,timeso,timesc,timest,factori,factorc,cf1,cf2,cfs,lcm1,lcm2,lcmc,lcms,strtemp,strop,strcount,guess1,guess2,guess3,tabcount;
    int factt,factc,facti;
    double powerx,xpower,powero;
    int test = 2;
    int final = 0;
    char op[15],exit[2],areainput[5],exi[2],shutdown[2],stdnchk[2],convu[3],conva[12];
    char na;
    char opc;
    const char basedigits[16] ={
	'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
	int convertednumber[64];
	long int numbertoconvert;
	int nextdigit,base,index=0;
    double n2=0;
    double n1=0;
    printf ("|----|    |--|   |     |----|  |    |   |      |--|  ------  |----|  |----|\n");
    printf ("|        |    |  |     |       |    |   |     |    |   ||    |    |  |____|\n");
    printf ("|        |____|  |     |       |    |   |     |____|   ||    |    |  |   | \n");
    printf ("|____|   |    |  |____ |____|  |____|   |____ |    |   ||    |____|  |    |"
			"__By SmileRen3021\n");
    printf ("-----------------------------------------\n"
			"Welcome to use Calculator(build 09)\n"
		  	"Please enter\n"
		  	"If you don't know the commands,please enter |?|...\n"
		  	"|-----calc||--convert||------sqr||----ispri|\n"
		  	"|-----*num||-----/num||-------cf||------lcm|\n"
		  	"|-----area||--------!||--randstr||-minigame|\n"
		  	"|--credits||----about||changelog||-asciitab|\n"
		  	"|-shuotown||--------?||--------x||--basecon|\n"
			"|-------------------deg/rad-sin/cos/tan/cot|\n"
			"Enter |x| to exit...\n" 
			"...");
    scanf ("%s",op);//检测输入的功能 
    while (1)
    {
    	printf ("Loading");
    	Sleep (500);
    	printf (".");
    	Sleep (500);
    	printf (".");
    	Sleep (500); 
		printf (".");
    	Sleep (500);
    	printf ("\n");
    	if (!strcmp(op,"calc"))
    	{
    		while (1)
		    {
		        printf ("Please enter [opreator(+,-,*,/,S,E) number]\n");
		        scanf ("%c %lf",&opc,&n1);
		        switch (opc)
		        {
		            case '+':
		                n2=n2+n1;
		                printf ("= %lf\n",n2);
		                break;
		            
		            case '-':
		                n2=n2-n1;
		                printf ("= %lf\n",n2);
		                break;
		            
		            case '*':
		                n2=n2*n1;
		                printf ("= %lf\n",n2);
		                break;
		            
		            case '/':
		                if (n1>0)
		                {
		                    n2=n2/n1;
		                    printf ("= %lf\n",n2);
		                }
		                else
		                {
		                    printf ("Division <= 0.\n");
		                }
		                break;
		                
		            case 'S':
		                n2=n1;
		                printf ("= %lf\n",n2);
		                break;
		                
		            case 'E':
		                break;
		                
		            default:
		                printf ("Unknown opreator.\n");
		                break;
		        }
		        if (opc == 'E')
		        {
		            printf ("Exit...");
		            break;
		        }
		        fflush(stdin);
		    }
		}
        if (!strcmp(op, "sqr"))
        {
            printf ("Please enter the number...\n");
            scanf ("%lf",&sqr);
            sqrtout = sqrt(sqr);
            printf ("sqrt %lf = %lf\n",sqr,sqrtout);
        }//开平方计算 
        if (!strcmp(op, "ispri"))
        {
            printf ("Please enter a number you want to check...\n");
            scanf ("%d",&isodd);
            if (isodd<=1)
            {
                printf ("You shoudn't enter a number less than 2!\n");
            }
            else
            {
                for (test=2;test<isodd;test++)
                {
                    if (isodd%test == 0)
                    {
                        final = 1;
                    }
                }
                if (final == 0)
                {
                    printf ("%d is an odd number.\n",isodd);
                }
                else
                {
                    printf ("%d is an even number.\n",isodd);
                }
            }
        }//质数判断 
        if (!strcmp(op,"degsin"))
        {
            printf ("Please enter the number(Tips:The calculator will only calculate in DEG)..\n");
            scanf ("%lf",&sine);
            sine = sine;
            sino = sin(sine*pi/180);
            printf ("sine(DEG) %lf = %lf\n",sine,sino);
        }//角度正弦 
        if (!strcmp(op,"degcos"))
        {
            printf ("Please enter the number(Tips:The calculator will only calculate in DEG)..\n");
            scanf ("%lf",&cosine);
            cosine = cosine;
            coso = cos(cosine*pi/180);
            printf ("cosine(DEG) %lf = %lf\n",cosine,coso);
        }//角度余弦 
        if (!strcmp(op,"degtan"))
        {
            printf ("Please enter the number(Tips:The calculator will only calculate in DEG)..\n");
            scanf ("%lf",&tangent);
            tangent = tangent;
            tano = tan(tangent*pi/180);
            printf ("tangent(DEG) %lf = %lf\n",tangent,tano);
        }//角度正切 
        if (!strcmp(op,"degcot"))
        {
            printf ("Please enter the number(Tips:The calculator will only calculate in DEG)..\n");
            scanf ("%lf",&cotangent);
            cotangent = cotangent;
            coto = 1/tan(cotangent*pi/180);
            printf ("cotangent(DEG) %lf = %lf\n",cotangent,coto);
        }//角度余切 
        if (!strcmp(op,"radsin"))
        {
            printf ("Please enter the number(Tips:The calculator will only calculate in RAD)..\n");
            scanf ("%lf",&sine);
            sino = sin(sine);
            printf ("sine(RAD) %lf = %lf\n",sine,sino);
        }//弧度正弦 
        if (!strcmp(op,"radcos"))
        {
            printf ("Please enter the number(Tips:The calculator will only calculate in RAD)..\n");
            scanf ("%lf",&cosine);
            coso = cos(cosine);
            printf ("cosine(RAD) %lf = %lf\n",cosine,coso);
        }//弧度余弦 
        if (!strcmp(op,"radtan"))
        {
            printf ("Please enter the number(Tips:The calculator will only calculate in RAD)..\n");
            scanf ("%lf",&tangent);
            tano = tan(tangent);
            printf ("tangent(RAD %lf = %lf\n",tangent,tano);
        }//弧度正切 
        if (!strcmp(op,"radcot"))
        {
            printf ("Please enter the number(Tips:The calculator will only calculate in RAD)..\n");
            scanf ("%lf",&cotangent);
            coto = 1/tan(cotangent);
            printf ("cotangent(RAD) %lf = %lf\n",cotangent,coto);
        }//弧度余切 
        if (!strcmp(op,"pow"))
        {
            printf ("Please enter the first number...\n");
            scanf ("%lf",&powerx);
            printf ("Please enter the second number...\n");
            scanf ("%lf",&xpower);
            powero=pow (powerx,xpower);
            printf ("%lf^%lf=%lf\n",powerx,xpower,powero);
        }//次方 
        if (!strcmp (op,"*num"))
        {
            printf ("Please enter the number...\n");
            scanf ("%d",&timesi);
            printf ("How many numbers do you want to output?...\n");
            scanf ("%d",&timesn);
            timest=0;
            timesc=0;
            while (1)
            {
                timest=timest+1;
                timeso=timesi*timest;
                printf("%d is %d times of %d.\n",timeso,timest,timesi);
                timesc=timesc+1;
                if (timesc==timesn)
                {
                    break;
                }
            }
        }//倍数计算 
        if (!strcmp(op,"/num"))
        {
            printf ("Please enter the number...\n");
            scanf ("%d",&factori);
            for (factorc=1;factorc<=factori;factorc++)
            {
                if (factori%factorc==0)
                {
                    printf("%d is a factor of %d.\n",factorc,factori);
                }
            }
        }//因数计算 
        if (!strcmp(op,"cf"))
        {
        	while (1)
        	{
            	printf ("Please enter the first number...\n");
            	scanf ("%d",&cf1);
            	if (cf1<=0)
            	{
            		printf ("Please enter a number bigger than 0!\n");
				}
				else
				{
					break;	
				}
        	}
            while (1)
        	{
            	printf ("Please enter the second number...\n");
            	scanf ("%d",&cf2);
            	if (cf2<=0)
            	{
            		printf ("Please enter a number bigger than 0!\n");
				}
				else
				{
					break;	
				}
        	}
        	if (cf1==cf2)
            {
                cfs=cf1;
            }
            if (cf1>cf2)
            {
                for (cfs=1;cfs<=cf2;cfs++)
                {
                    if (cf2%cfs==0)
                    {
                        if (cf1%cfs==0)
                        {
                            printf ("%d is a common factor of %d and %d.\n",cfs,cf2,cf1);
                        }
                    }
                }
            }
            if (cf1<cf2)
            {
                for (cfs=1;cfs<=cf1;cfs++)
                {
                    if (cf1%cfs==0)
                    {
                        if (cf2%cfs==0)
                        {
                            printf ("%d is a common factor of %d and %d.\n",cfs,cf1,cf2);
                        }
                    }
                }
            }
            printf("The greatest common factor of %d and %d is ",cf1,cf2);
        	while (cf2!=0)
            {
            	cfs = cf1%cf2;
            	cf1 = cf2;
            	cf2 = cfs;	
			}
			printf ("%d.\n",cf1);//来自欧几里得的gcf算法 
		}//最大公因数 
		if (!strcmp (op,"lcm"))
		{
		
            printf ("Please enter the first number.\n");
            scanf ("%d",&lcm1);
            printf ("Please enter the second number.\n");
            scanf ("%d",&lcm2);
            if (lcm1 == lcm2)
            {
                printf ("You can't enter two same numbers!\n");
            }
            if (lcm1>lcm2)
            {
                for (lcmc=1;lcmc<=lcm1;lcmc++)
                {
                    lcms = lcm2*lcmc;
                    if (lcms%lcm1==0)
                    {
                        printf ("%d is the lowest common multiply of %d and %d.\n",lcms,lcm2,lcm1);
                        break;
                    }
                }
            }
            if (lcm1<lcm2)
            {
                for (lcmc=1;lcmc<=lcm2;lcmc++)
                {
                    lcms = lcm1*lcmc;
                    if (lcms%lcm2==0)
                    {
                        printf ("%d is the lowest common multiply of %d and %d.\n",lcms,lcm1,lcm2);
                        break;
                    }
                }
            }
        }//最小公倍数 
        if (!strcmp(op,"area"))
        {
            printf ("Please enter the name of the graph.[rect,tri,cir,tr]\n");
            scanf ("%s",areainput);
            if (!strcmp(areainput,"rect"))
            {
                printf ("Please enter the length of side a(cm)...\n");
                scanf ("%lf",&sa);
                printf ("Please enter the length of side b(cm)...\n");
                scanf ("%lf",&sb);
                areaoutput = sa*sb;
                printf ("The area of the rectangle is %lf sq.cm.\n",areaoutput);
            }
            if (!strcmp(areainput,"tri"))
            {
                printf ("Please enter the height(cm)...\n");
                scanf ("%lf",&h);
                printf ("Please enter the length of bottom(cm)...\n");
                scanf ("%lf",&d);
                areaoutput = h*d/2;
                printf ("The area of the triangle is %lf sq.cm.\n",areaoutput);
            }
            if (!strcmp(areainput,"cir"))
            {
                printf ("Please enter the radius(cm)...\n");
                scanf ("%lf",&rad);
                areaoutput = pow(rad,2)*(acos(-1));
                printf ("The area of the circle is %lf sq.cm.\n",areaoutput);
            }
            if (!strcmp(areainput,"tr"))
            {
                printf ("Please enter the length of the top(cm)...\n");
                scanf ("%lf",&u);
                printf ("Please enter the length of the bottom(cm)...\n");
                scanf ("%lf",&d);
                printf ("Please enter the height(cm)...\n");
                scanf ("%lf",&h);
                areaoutput = (u+d)*h/2;
                printf ("The area of the trapezoid is %lf sq.cm.\n",areaoutput);
            }
        }//面积计算 
        if (!strcmp(op,"!"))
        {
        	printf ("Please enter the number...\n");
        	scanf ("%d",&facti);
        	printf ("%d factorial = ",facti);
        	factt = 1;
        	for (factc=1;factc<=facti;factc++)
        	{
        		factt = factt * factc;
			}
			printf ("%d\n",factt);
		}//阶乘 
		if (!strcmp(op,"randstr"))
		{
			srand ((unsigned)time(NULL));
    		while (1)
    		{
    		    printf ("How many characters do you want to print?...");
    		    scanf ("%d",&strop);
			    strtemp = rand()%26+1;
        		if (strop>0)
    			{
            		printf ("%c",strtemp+64);
            		for (strcount=0;strcount<strop-1;strcount++)
            		{
            		    strtemp = rand()%26+1;
            		    printf ("%c",strtemp+96);
            		}
            		printf ("\n");
            		printf ("Do you want to exit[y/n]?...");
            		scanf ("%s",exi);
            		if (!strcmp (exi,"n"))
            		{
            		}
            		else if (!strcmp (exi,"y"))
            		{
            		    break;
            		}
        		}
        		else
        		{
        	    	printf ("You have enter a number less than 1.Do you want to retry[y/n]?...");
        	    	scanf ("%s",exi);
        	    	if (!strcmp (exi,"y"))
        	    	{
        	    	}
        	    	else if (!strcmp (exi,"n"))
        	    	{
        	    	    break;
        	    	}
        		}
        	}
    	}//随机字符串
		if (!strcmp(op,"minigame"))
		{
			srand((unsigned)time(NULL));
			guess1 = rand()%100+1;
		    guess2 = 6;	
			while(1)
			{
				printf ("Please guess a number in 1-100...");
				scanf ("%d",&guess3);
				if (guess3 == guess1)
				{
					printf("Right answer.\n");
					printf("|----| |----| ||   | |----| |----|  |--|  ------ |    | |       |--|  ------ --- |----| ||   | |\n"
						   "|      |    | | |  | |      |----| |-  -|   ||   |    | |      |-  -|   ||    |  |    | | |  | |\n"
						   "|      |    | |  | | |   __ |   |  |----|   ||   |    | |      |----|   ||    |  |    | |  | | |\n"
						   "|----| |----| |   || |----| |    | |    |   ||   |----| |----| |    |   ||   --- |----| |   || o\n"); 
					break;	
				}	
				if (guess3 > guess1)
				{
					printf ("Too big!");
				}
				if (guess3 < guess1)
				{
					printf ("Too small!");
				}
				guess2 = guess2-1;
				if (guess2>0)
				{
					printf ("\n%d tries left.\n",guess2);
				}
				else
				{
					printf ("\nNo tries left!\n");
					printf ("The right number is %d",guess1);
					break;
				}
			}			
		} //猜数游戏 
		if (!strcmp(op,"shutdown"))
		{
			printf ("Do you want to shutdown<s> or restart<r>...");
			scanf ("%s",shutdown);
			if (!strcmp(shutdown,"s"))
			{
				printf ("Are you sure[y/n]?");
				scanf ("%s",stdnchk);
				if (!strcmp(stdnchk,"y"))
				{
					system ("shutdown -s -t 10");
				}
				else
				{
				}
			}
			if (!strcmp(shutdown,"r"))
			{
				printf ("Are you sure[y/n]?");
				scanf ("%s",stdnchk);
				if (!strcmp(stdnchk,"y"))
				{
					system ("shutdown -r -t 10");
				}
				else
				{
				}
			}
		}//关机
		if (!strcmp(op,"asciitab"))
		{
			printf ("ASCII TABLE\n");
			printf ("Number  Character\n");
			printf ("------  -----------\n");
			for	(tabcount=0;tabcount<100;++tabcount)
			{
				printf ("%i       %c\n",tabcount,tabcount);
			}
			for	(tabcount=100;tabcount<129;++tabcount)
			{
				printf ("%i      %c\n",tabcount,tabcount);
			}
		}//ascii表 
		if (!strcmp(op,"convert"))
		{
			printf ("Please enter 英制转公制<fm> or 公制转英制<mf>");
			scanf ("%s",convu);
			if (!strcmp(convu,"fm"))
			{
				printf ("\nPlease enter"
					    "\n(length) <km_mi> <m_ft> <cm_in>"
						"\n(area) <km_mi2> <m_ft2> <cm_in2>"
						"\n(volume) <l_pt3> <m_yd3>"
						"\n(weight) <kg_lb> <g_oz>"
						"\n(tempreature) <centi_faren>\n...");
				scanf ("%s",conva);
				if (!strcmp(conva,"km_mi"))
				{
					printf ("\nPlease print the number...");
					scanf ("%lf",&convn);
					convo = convn*kmpmi;
					printf ("%lf mi = %lf km",convn,convo);	
				}
				if (!strcmp(conva,"m_ft"))
				{
					printf ("\nPlease print the number...");
					scanf ("%lf",&convn);
					convo = convn*mpft;
					printf ("%lf ft = %lf m",convn,convo);	
				}
				if (!strcmp(conva,"cm_in"))
				{
					printf ("\nPlease print the number...");
					scanf ("%lf",&convn);
					convo = convn*cmpin;
					printf ("%lf in = %lf cm",convn,convo);	
				}
				if (!strcmp(conva,"km_mi2"))
				{
					printf ("\nPlease print the number...");
					scanf ("%lf",&convn);
					convo = convn*sqkmpsqmi;
					printf ("%lf sq.mi = %lf sq.km",convn,convo);
				}
				if (!strcmp(conva,"m_ft2"))
				{
					printf ("\nPlease print the number...");
					scanf ("%lf",&convn);
					convo = convn*sqmpsqft;
					printf ("%lf sq.ft = %lf sq.m",convn,convo);	
				}
				if (!strcmp(conva,"cm_in2"))
				{
					printf ("\nPlease print the number...");
					scanf ("%lf",&convn);
					convo = convn*sqcmpsqin;
					printf ("%lf sq.cm = %lf sq.in",convn,convo);	
				}
				if (!strcmp(conva,"l_pt3"))
				{
					printf ("\nPlease print the number...");
					scanf ("%lf",&convn);
					convo = convn*lpuspt;
					printf ("%lf USpt = %lf L",convn,convo);	
				}
				if (!strcmp(conva,"m_yd3"))
				{
					printf ("\nPlease print the number...");
					scanf ("%lf",&convn);
					convo = convn*cumpcuyd;
					printf ("%lf cu.yd = %lf cu.m",convn,convo);	
				}
				if (!strcmp(conva,"kg_lb"))
				{
					printf ("\nPlease print the number...");
					scanf ("%lf",&convn);
					convo = convn*kgplb;
					printf ("%lf lb = %lf kg",convn,convo);	
				}
				if (!strcmp(conva,"g_oz"))
				{
					printf ("\nPlease print the number...");
					scanf ("%lf",&convn);
					convo = convn*gpoz;
					printf ("%lf oz = %lf g",convn,convo);	
				}
				if (!strcmp(conva,"centi_faren"))
				{
					printf ("\nPlease print the number...");
					scanf ("%lf",&convn);
					convo = convn*cpf;
					printf ("%lf farenheit degree = %lf centigrad degree",convn,convo);	
				}
			}
			if (!strcmp(convu,"mf"))
			{
				printf ("\nPlease enter"
					    "\n(length) <km_mi> <m_ft> <cm_in>"
						"\n(area) <km_mi2> <m_ft2> <cm_in2>"
						"\n(volume) <l_pt3> <m_yd3>"
						"\n(weight) <kg_lb> <g_oz>"
						"\n(tempreature) <centi_faren>\n...");
				scanf ("%s",conva);
				if (!strcmp(conva,"km_mi"))
				{
					printf ("\nPlease print the number...");
					scanf ("%lf",&convn);
					convo = convn*mipkm;
					printf ("%lf km = %lf mi",convn,convo);	
				}
				if (!strcmp(conva,"m_ft"))
				{
					printf ("\nPlease print the number...");
					scanf ("%lf",&convn);
					convo = convn*ftpm;
					printf ("%lf m = %lf ft",convn,convo);	
				}
				if (!strcmp(conva,"cm_in"))
				{
					printf ("\nPlease print the number...");
					scanf ("%lf",&convn);
					convo = convn*inpcm;
					printf ("%lf cm = %lf in",convn,convo);	
				}
				if (!strcmp(conva,"km_mi2"))
				{
					printf ("\nPlease print the number...");
					scanf ("%lf",&convn);
					convo = convn*sqmipsqkm;
					printf ("%lf sq.km = %lf sq.mi",convn,convo);	
				}
				if (!strcmp(conva,"m_ft2"))
				{
					printf ("\nPlease print the number...");
					scanf ("%lf",&convn);
					convo = convn*sqftpsqm;
					printf ("%lf sq.m = %lf sq.ft",convn,convo);	
				}
				if (!strcmp(conva,"cm_in2"))
				{
					printf ("\nPlease print the number...");
					scanf ("%lf",&convn);
					convo = convn*sqinpsqcm;
					printf ("%lf sq.cm = %lf sq.in",convn,convo);	
				}
				if (!strcmp(conva,"l_pt3"))
				{
					printf ("\nPlease print the number...");
					scanf ("%lf",&convn);
					convo = convn*usptpl;
					printf ("%lf L = %lf USpt",convn,convo);	
				}
				if (!strcmp(conva,"cm_yd3"))
				{
					printf ("\nPlease print the number...");
					scanf ("%lf",&convn);
					convo = convn*cuydpcum;
					printf ("%lf cu.m = %lf cu.yd",convn,convo);	
				}
				if (!strcmp(conva,"kg_lb"))
				{
					printf ("\nPlease print the number...");
					scanf ("%lf",&convn);
					convo = convn*lbpkg;
					printf ("%lf kg = %lf lb",convn,convo);	
				}
				if (!strcmp(conva,"g_oz"))
				{
					printf ("\nPlease print the number...");
					scanf ("%lf",&convn);
					convo = convn*ozpg;
					printf ("%lf g = %lf oz",convn,convo);	
				}
				if (!strcmp(conva,"centi_faren"))
				{
					printf ("\nPlease print the number...");
					scanf ("%lf",&convn);
					convo = convn*fpc;
					printf ("%lf centigrad degree = %lf farenheit degree",convn,convo);	
				}
			}
		}
		if (!strcmp(op,"basecon"))
		{
				printf ("Number to converted...");
				scanf ("%ld",&numbertoconvert);
				printf ("Base...");
				scanf ("%d",&base);
				do
				{
					convertednumber[index] = numbertoconvert%base;
					++index;
					numbertoconvert = numbertoconvert/base;
				}
				while (numbertoconvert != 0);
				printf ("Converted number == ");
				for (--index;index>=0;--index)
				{
					nextdigit = convertednumber[index];
					printf ("%c",basedigits[nextdigit]);
				}
				printf ("\n");
		} 
        if (!strcmp(op,"?"))
        {
            printf("－－－－－\n");
            printf("帮助\n");
            printf("－－－－－\n");
            printf("calc:四则运算\n");
            printf("sqr:输入一个数并将其开平方\n");
            printf("ispri:输入一个数并输出它是否是质数\n");
            printf("degsin:在角度制下计算正弦\n");
            printf("degcos:在角度制下计算余弦\n");
            printf("degtan:在角度制下计算正切\n");
            printf("degcot:在角度制下计算余切\n");
            printf("radsin在弧度制下计算正弦\n");
            printf("radcos:在弧度制下计算余弦\n");
            printf("radtan:在弧度制下计算正切\n");
            printf("radcot:在弧度制下计算余切\n");
            printf("pow:输入两个数并计算(第一个数^第二个数)\n");
            printf("?:打开帮助\n");
            printf("*num:输入a,b两个数并且输出b个a的倍数\n");
            printf("/num:输入一个数并输出它的因数\n");
            printf("credits:制作人员名单\n");
            printf("changelog:更新日志\n");
            printf("about:关于软件\n");
            printf("cf:输入两个数并输出它们的公因数\n");
            printf("lcm:输入两个数并输出它们的最小公倍数\n");
            printf("area:输入数据并输出图形的面积\n     rect:长方形\n     tri:三角形\n     cir:圆形\n     tr:梯形\n");
            printf("!:输入一个数并输出阶乘的结果\n");
            printf("randstr:输出一个随机字符串\n");
            printf("minigame:猜数游戏\n");
            printf("shutdown:快速关机/重启\n");
            printf("asciitab:ASCII表格\n");
            printf("convert:单位换算\n");
            printf("x:退出\n");
            printf("basecon:讲一个十进制数转换至另一基数\n");
        }//帮助 
        if (!strcmp(op,"credits"))
        {
            printf ("SmileCalculator\n-----\n创意:SmileRen3021\n编程:SmileRen3021\nDebug:SmileRen3021\n      Leo_ren\n编译器:Xcode3.7 on Macbook Pro\n       DevC++ on Windows 10\n");
        }//制作人员 
        if (!strcmp(op,"about"))
        {
        	printf ("|----|    |--|   |     |----|  |    |   |      |--|  ------  |----|  |----|\n");
        	printf ("|        |    |  |     |       |    |   |     |    |   ||    |    |  |____|\n");
        	printf ("|        |____|  |     |       |    |   |     |____|   ||    |    |  |   | \n");
        	printf ("|____|   |    |  |____ |____|  |____|   |____ |    |   ||    |____|  |    |\n");
			printf ("SmileCalculator\n");
            printf ("-----------------\n");
            printf ("build 09\n");
            printf ("by SmileRen3021 & Leo_Ren\n");
            printf ("|--加法--||--减法--||--乘法--||--除法--|\n"
					"|-开平方-||质数判断||--正弦--||--余弦--|\n"
					"|--正切--||--余切--||--次方--||--因数--|\n"
					"|--倍数--||-公因数-||-公倍数-||面积计算|\n"
					"|--阶乘--||随机字符||猜数游戏||便捷关机|\n"
					"|-ASCII表||单位换算||基数转换|\n");
        }//关于 
        if (!strcmp(op,"changelog"))
        {
        	printf("--------\n-changelog-\n--------\n");
        	printf("build1\n*开始开发\n-增加四则运算\n-增加开平方\n-增加质数判断\n");
        	printf("---\nbuild2\n*修复若干bugs\n-增加弧度制正弦余弦正切余切\n-增加幂的计算\n");
        	printf("---\nbuild3\n*修复若干bugs\n-增加角度制正弦余弦正切余切\n-增加因数与倍数的计算\n-增加帮助、开发人员列表以及关于软件\n");
        	printf("---\nbuild4\n*修复若干bugs\n*更新了帮助以及关于软件\n-增加了公因数公倍数计算\n-增加了面积的计算\n");
        	printf("---\nbuild5\n*修复若干bugs\n*更新了帮助以及关于软件\n-增加了阶乘\n");
			printf("---\nbuild6\n*修复若干bugs\n*更新了帮助以及关于软件\n-增加了随机字符串\n-改动了计算完毕后的退出判断\n");
			printf("---\nbuild7\n*修复若干bugs\n*更新了帮助以及关于软件\n-改动了计算完毕后的退出判断\n-增加了小游戏<猜数游戏>\n-增加了便捷关机/重启功能\n");
			printf("---\nbuild8\n*修复若干bugs\n*更新了帮助以及关于软件\n-增加了伪加载机制\n-增加了ascii表\n-增加了单位换算\n"); 
			printf("---\nbuild9\n*修复若干bugs\n*更新了帮助以及关于软件\n-更改了四则运算机制\n-更改了ui\n-增加了基数转换\n");
		}//更新日志 
		if (!strcmp(op,"x"))
		{
			break;
		}//退出判断 
        if (   strcmp (op,"calc")
            && strcmp (op,"sqr")
            && strcmp (op,"ispri")
            && strcmp (op,"radsin")
            && strcmp (op,"radcos")
            && strcmp (op,"radtan")
            && strcmp (op,"radcot")
            && strcmp (op,"degsin")
            && strcmp (op,"degcos")
            && strcmp (op,"degtan")
            && strcmp (op,"degcot")
            && strcmp (op,"pow")
            && strcmp (op,"?")
            && strcmp (op,"*num")
            && strcmp (op,"/num")
            && strcmp (op,"credits")
            && strcmp (op,"changelog")
            && strcmp (op,"about")
            && strcmp (op,"cf")
            && strcmp (op,"lcm")
			&& strcmp (op,"area")
			&& strcmp (op,"x")
			&& strcmp (op,"!")
			&& strcmp (op,"randstr")
			&& strcmp (op,"minigame")
			&& strcmp (op,"shutdown")
			&& strcmp (op,"asciitab")
			&& strcmp (op,"convert")
			&& strcmp (op,"basecon"))
        {
            printf ("You have enter the worong key word.If you don't konw what are the key words,please enter 'help' when the program starting.\n");
        }//关键字错误

    	printf ("\n");
        printf ("\a"); 
		printf ("\nPress any key to next...");
		na = getch(); 
		printf ("\nLoading");
    	Sleep (500);
    	printf (".");
    	Sleep (500);
    	printf (".");
    	Sleep (500); 
		printf (".");
    	Sleep (500);
    	printf ("\n");
		printf ("|----|    |--|   |     |----|  |    |   |      |--|  ------  |----|  |----|\n");
	    printf ("|        |    |  |     |       |    |   |     |    |   ||    |    |  |____|\n");
	    printf ("|        |____|  |     |       |    |   |     |____|   ||    |    |  |   | \n");
	    printf ("|____|   |    |  |____ |____|  |____|   |____ |    |   ||    |____|  |    |"
				"__By SmileRen3021\n");
	    printf ("-----------------------------------------\n"
				"Welcome to use Calculator(build 09)\n"
			  	"Please enter\n"
			  	"If you don't know the commands,please enter |?|...\n"
			  	"|-----calc||--convert||------sqr||----ispri|\n"
			  	"|-----*num||-----/num||-------cf||------lcm|\n"
			  	"|-----area||--------!||--randstr||-minigame|\n"
			  	"|--credits||----about||changelog||-asciitab|\n"
			  	"|-shuotown||--------?||--------x||--basecon|\n"
				"|-------------------deg/rad-sin/cos/tan/cot|\n"
				"Enter |x| to exit...\n" 
				"...");
		scanf ("%s",op);
		//退出判断 
    }
    return 0;
}
//结束

