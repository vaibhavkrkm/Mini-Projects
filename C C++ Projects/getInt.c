int getInt()
{
	int num=0, ch;
	do
	{
		ch = getch();                      // 42
		
		if(ch >= 48 && ch <= 57)
		{
			printf("%c", ch);
			
			num = num * 10 + (ch - 48);
		}
		
		if(ch == 13)
			break;
	} while(1);
	
	return(num);
}
