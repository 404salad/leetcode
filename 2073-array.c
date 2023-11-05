int timeRequiredToBuy(int* tickets, int ticketsSize, int k) {
    int current =0;    
    int count = 0;
    while(tickets[k]!=0) {
        for(int i = 0; i<ticketsSize; i++){
            if(tickets[k]==0) break;
            if(tickets[i]==0) continue;
            tickets[i]--;
            count++;
        }
    }
    return count; 
}
