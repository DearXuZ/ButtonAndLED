#include <REG52.H>
#include <STDIO.H>
sbit P3_4 = P3 ^ 4;
sbit P2_0 = P2 ^ 0;
void main()
{
	while (1)
	{
		if(P2_0 == 0)
		{
			P3_4 = 0;
			
		}else if(P2_0 == 1){
			P3_4 = 1;
		}
	}
	
}