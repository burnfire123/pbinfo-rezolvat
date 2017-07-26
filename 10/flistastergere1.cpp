void sterge(nod*&p,nod*q)
{
    if(q==p)
    {
        p=p->urm;
    }
    else
    {
        nod*i;
        for(i=p; i->urm!=q; i++)
        {

        }
        i->urm=q->urm;
        delete q;
    }
}