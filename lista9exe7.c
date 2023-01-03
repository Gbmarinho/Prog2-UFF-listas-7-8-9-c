void ordena(int n, Prova** v)
{
int fim,i;
for(fim=n-1; fim>0; fim--)
for(i=0; i<fim; i++)
if(compara(v[i],v[i+1]))
troca(&v[i],&v[i+1]);
}

int compara(Prova* x,Prova* y){
    int i, notasx=0, notasy=0;
    notasx = x.q1 + x.q2 + x.q3 + x.q4;  
    notasy = y.q1 + y.q2 + y.q3 + y.q4;  
    if (notasx<=notasy){
        if(x.a.nome[0]>y.a.nome[0]{ 
            return 0;
        }
        else{
            return 1;
        }
    }
    else {
        return 1;
    }        
}
void troca(Prova* x, Prova* y){
    Prova* temp = x;
    x = y;
    y = temp;
}
