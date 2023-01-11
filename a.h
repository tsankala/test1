
/**
 * \file reference.h
 * \brief Prototype des fonctions de la classe reference.
 * \author Thomas-Sankala
 * \version 0.1
 * \date 2022-10-22
 */
thomas sankala shkiro nyt
#ifndef REFERENCE_H
#define REFERENCE_H
#include <string>
namespace biblio
{
hi
  /**
   * \class reference
   * \brief Classe modélisant l'interface d'une reference.
   */
  class reference
  {
  public:
    reference (std::string p_auteur, std::string p_titre, int p_annee, std::string p_identifiant); //constructeur avec paramètre
    std::string m_auteurs ()const;
    std::string m_titre ()const;
    int m_annee ()const;
    std::string m_identifiant ()const;
    std::string reqReferenceFormate ()const; // affichage en chaîne de caractère
    void modification_annee (int m_annee); //modification de l'annee
  private:
    std::string auteur;
    std::string titre;
    int annee;
    std::string identifiant;



  };
} /* namespace biblio */

#endif /* REFERENCE_H */

