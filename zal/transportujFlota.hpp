#pragma once

#include "Stocznia.hpp"

unsigned int transportujFlota(unsigned int towar)
{
  unsigned int transit = 0;
  unsigned int liczba_zaglowcow = 0;

    while (transit < towar)
  {
    Stocznia Kuat{};
    Statek* ISD = Kuat();
    transit += ISD.transportuj();
    
    Zaglowiec* wsk_zaglowca = dynamic_cast<Zaglowiec*>(ISD);
    if(wsk_zaglowca !=0)
      liczba_zaglowcow +=1;

    delete ISD;

  }
  
    return liczba_zaglowcow;
}