void adaugare(nod*&p,int x)
{
    nod*y=p,*nou;
    nou=new nod;
    nou->info=x;
    nou->urm=NULL;
    if(p==NULL)
        p=nou;
    else
    {
    while(y->urm!=NULL)
        y=y->urm;
    y->urm=nou;
    }
}