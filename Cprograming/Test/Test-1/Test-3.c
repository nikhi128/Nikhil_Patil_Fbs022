void main() 
{
	int hh=1,min=2,sec=120;
	// hours
	  int hour=hh*60*60;
	//  printf(" %d",hour);
	  
	  //  minuts
     int res=min*60;
    // printf(" res %d",res);
     
     // seconds
     int seconds=sec/60;
     int tot=hour+res+seconds;
     
     printf(" The total number of seconds will be %d  ",tot);
     
     
	
}