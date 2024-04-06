#include<stdio.h>
#include<conio.h>

int main(){
	
	int packet_size=2000;
	int minPacket=64;
	int maxPacket=1518;
	bool jamboPacket=false;
	
	//Checking packet size
	if(packet_size>=minPacket && packet_size<=maxPacket && jamboPacket==false)	{	printf("Packet Enter");	}
	
	else if(packet_size>=minPacket && packet_size<=maxPacket && jamboPacket==true)	{	printf("Attention! JamboPacket is enabled \n Packet Enter");	}
	
	else{	printf("Packet Discarded");}
	
	
	
}
