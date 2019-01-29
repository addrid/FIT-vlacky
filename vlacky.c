int main(int argc, char *argv[])
{
  int phodA, pminA, ohodA, ominA;
  int phodB, pminB, ohodB, ominB;
  int phodC, pminC, ohodC, ominC; 
  
  printf("Zadejte cas prijezdu vlaku A:\n");
  if(scanf("%d:%d", &phodA, &pminA)!=2 || phodA<0 || phodA>23 || pminA<0 || pminA > 59)
  {
        printf("Nespravny vstup.\n");  
        return 1;               
  }
  printf("Zadejte cas odjezdu vlaku A:\n");                
  if(scanf("%d:%d", &ohodA, &ominA)!=2 || ohodA<0 || ohodA>23 || ominA<0 || ominA > 59)
  {
        printf("Nespravny vstup.\n");  
        return 1;               
  }
  
  
  
  printf("Zadejte cas prijezdu vlaku B:\n");
  if(scanf("%d:%d", &phodB, &pminB)!=2 || phodB<0 || phodB>23 || pminB<0 || pminB > 59)
  {
        printf("Nespravny vstup.\n");  
        return 1;               
  }
  
  
  
  printf("Zadejte cas odjezdu vlaku B:\n");            
   if(scanf("%d:%d", &ohodB, &ominB)!=2 || ohodB<0 || ohodB>23 || ominB<0 || ominB > 59)
  {
        printf("Nespravny vstup.\n");  
        return 1;               
  }
  
  printf("Zadejte cas prijezdu vlaku C:\n");
  if(scanf("%d:%d", &phodC, &pminC)!=2 || phodC<0 || phodC>23 || pminC<0 || pminC > 59)
  {
        printf("Nespravny vstup.\n");  
        return 1;               
  }
  
  
  
  printf("Zadejte cas odjezdu vlaku C:\n");            
   if(scanf("%d:%d", &ohodC, &ominC)!=2 || ohodC<0 || ohodC>23 || ominC<0 || ominC > 59)
  {
        printf("Nespravny vstup.\n");  
        return 1;               
  }
  
  
  
     int pcasA = (phodA*60)+pminA;
     int pcasC = (phodC*60)+pminC;
     int pcasB = (phodB*60)+pminB;
     
     int ocasA = (ohodA*60)+ominA;
     int ocasB = (ohodB*60)+ominB;
     int ocasC = (ohodC*60)+ominC;
     
     
     
     if(pcasA<ocasB)
         if(pcasA-ocasB>-5)
                 printf("Z A nemuzu na B\n");
         else
             if(pcasA<pcasB)
                 if(pcasA-pcasB>=-180)
                 printf("Z A muzu na B\n");
                 else
                 printf("Z A nemuzu na B\n");
             else
                 printf("Z A muzu na B\n");
     else
         if(pcasA<pcasB)
                 if((pcasA-pcasB)>=-180)
                       printf("Z A muzu na B\n");
                 else{
                       if(pcasA-ocasB>-5)
                       printf("Z A nemuzu na B\n");
                       else
                       printf("Z A muzu na B\n");
                     }
     
     
     
    /* if(pcasA>ocasC && (!pcasA>pcasC || ocasC<181))
                    ocasC+=1440;
     if(pcasA>ocasB && (!pcasA>pcasB || ocasB<181))
                    ocasB+=1440;
     */
     
     /*  if((pcasA-ocasB <= -5)&&(pcasA>pcasB || pcasA-ocasB==-5 || (pcasA<181 && ocasB<181) || ((pcasA<pcasB) && (pcasA-pcasB > -181))))
       {  
                 if(pcasA-ocasC <= -5 && (pcasA>pcasC || pcasA-ocasC==-5 || (pcasA<181 && ocasC<181) || ((pcasA<pcasC) && (pcasA-pcasC > -181))))
                         printf("Z vlaku A lze prestoupit na vlaky B a C.\n");
                 else
                         printf("Z vlaku A lze prestoupit na vlak B.\n");
       }
       else
       {  
                 if((pcasA-ocasC <= -5)&&(pcasA>pcasC || pcasA-ocasC==-5 || (pcasA<181 && ocasC<181) || ((pcasA<pcasC) && (pcasA-pcasC > -181))))
                 {
                         printf("Z vlaku A lze prestoupit na vlak C.\n");              
                 }
                 else
                 {
                 printf("Z vlaku A nelze prestupovat.\n");
                 }
       }*/
     
     
    
     
    
     pcasA = (phodA*60)+pminA;
     pcasC = (phodC*60)+pminC;
     pcasB = (phodB*60)+pminB;
     
     ocasA = (ohodA*60)+ominA;
     ocasB = (ohodB*60)+ominB;
     ocasC = (ohodC*60)+ominC;
     
     if(pcasB>ocasA && (!pcasB>pcasA || ocasA<181))
                    ocasA+=1440;
     if(pcasB>ocasC && (!pcasB>pcasC || ocasC<181))
                    ocasC+=1440;

  
       if((pcasB-ocasA <= -5)&&(pcasB>pcasA || pcasB-ocasA==-5 || (pcasB<181 && ocasA<181) || ((pcasB<pcasA) && (pcasB-pcasA > -181))))  /* z B na A muzu */  
       { /* vyhovuje pro minuty A (vyhovuje pro hodiny nebo pro hodiny */
                 if(pcasB-ocasC <= -5 && (pcasB>pcasC || pcasB-ocasC==-5 || (pcasB<181 && ocasC<181) || ((pcasB<pcasC) && (pcasB-pcasC > -181))))      /*             && pcasB-pcasC>=-180)  LZE PRESTOUPIT Z B NA C, ODJEZD VYHOVUJE*/
                         printf("Z vlaku B lze prestoupit na vlaky A a C.\n");
                 else
                         printf("Z vlaku B lze prestoupit na vlak A.\n"); /* NELZE PRESTOUPIT NA C, TUDIZ MUZU JENOM NA A */
       }
       else
       {  
                 if((pcasB-ocasC <= -5)&&(pcasB>pcasC || pcasB-ocasC==-5 || (pcasB<181 && ocasC<181) || ((pcasB<pcasC) && (pcasB-pcasC > -181))))  /* z B na C muzu */  
                 {
                         printf("Z vlaku B lze prestoupit na vlak C.\n");              
                 }
                 else
                 {
                 printf("Z vlaku B nelze prestupovat.\n");
                 }
       }
                    
                    
     pcasA = (phodA*60)+pminA;
     pcasC = (phodC*60)+pminC;
     pcasB = (phodB*60)+pminB;
     
     ocasA = (ohodA*60)+ominA;
     ocasB = (ohodB*60)+ominB;
     ocasC = (ohodC*60)+ominC;
  
     if(pcasC>ocasA && ocasA<181)
                    ocasA+=1440;
     if(pcasC>ocasB && ocasB<181)
                    ocasB+=1440;
     
     
       if((pcasC-ocasA <= -5)&&(pcasC>pcasA || pcasC-ocasA==-5 || (pcasC<181 && ocasA<181) || ((pcasC<pcasA) && (pcasC-pcasA > -181))))  /* z C na A muzu */  
       { /* vyhovuje pro minuty A (vyhovuje pro hodiny nebo pro hodiny */
                 if(pcasC-ocasB <= -5 && (pcasC>pcasB || pcasC-ocasB==-5 || (pcasC<181 && ocasB<181) || ((pcasC<pcasB) && (pcasC-pcasB > -181))))
                         printf("Z vlaku C lze prestoupit na vlaky A a B.\n");
                 else
                         printf("Z vlaku C lze prestoupit na vlak A.\n");
       }
       else
       {  
                 if((pcasC-ocasB <= -5)&&(pcasC>pcasB || pcasC-ocasB==-5 || (pcasC<181 && ocasB<181) ||((pcasC<pcasB) && (pcasC-pcasB > -181))))  /* z C na B muzu */  
                 {
                         printf("Z vlaku C lze prestoupit na vlak B.\n");              
                 }
                 else
                 {
                 printf("Z vlaku C nelze prestupovat.\n");
                 }
       }
      
      
      
      
      
      
      
      
        
      
  
  
  #ifndef __PROGTEST__
  system ( "pause" ); /* toto progtest "nevidi" */
  #endif /* __PROGTEST__ */
  return 0;
}

