// #include "pch.h"
#include "CLmapTB.h"

System::String^ NS_Comp_Mappage::CLmapTB::Select(void)
{
	return "SELECT [POO_Prosit6].[dbo].[Adresses].[Id_adresse], [POO_Prosit6].[dbo].[Clients].[Id_personne], [nom], [prenom], [adresse], [ville], [cp] \
                FROM [POO_Prosit6].[dbo].[Clients] \
                FULL JOIN [POO_Prosit6].[dbo].[Adresses] \
                ON [POO_Prosit6].[dbo].[Clients].[Id_personne] = [POO_Prosit6].[dbo].[Adresses].[Id_adresse]";
}
System::String^ NS_Comp_Mappage::CLmapTB::Insert(void)
{
	return "INSERT INTO Clients (nom, prenom) VALUES('" + this->nom + "','" + this->prenom + "');\
			INSERT INTO Adresses (adresse, ville, cp) VALUES(' " + this->adresse + "',' " + this->ville + "',' " + this->cp + "'); ";
}
System::String^ NS_Comp_Mappage::CLmapTB::Delete(void)
{
	return "DELETE FROM Clients WHERE nom = '" + this->nom + "' AND prenom = '" + this->prenom + "';\
			DELETE FROM Adresses WHERE adresse = '" + this->adresse + "' AND ville = '" + this->ville + "' AND cp = '" + this->cp + "' ;";
}
System::String^ NS_Comp_Mappage::CLmapTB::Update(void)
{
	return "";
}
void NS_Comp_Mappage::CLmapTB::setId(int Id)
{
	this->Id = Id;
}
void NS_Comp_Mappage::CLmapTB::setNom(System::String^ nom)
{
	this->nom = nom;
}
void NS_Comp_Mappage::CLmapTB::setPrenom(System::String^ prenom)
{
	this->prenom = prenom;
}
void NS_Comp_Mappage::CLmapTB::setAdresse(System::String^ adresse)
{
	this->adresse = adresse;
}
void NS_Comp_Mappage::CLmapTB::setVille(System::String^ ville)
{
	this->ville = ville;
}
void NS_Comp_Mappage::CLmapTB::setCp(System::String^ cp)
{
	this->cp = cp;
}
int NS_Comp_Mappage::CLmapTB::getId(void) { return this->Id; }
System::String^ NS_Comp_Mappage::CLmapTB::getNom(void) { return this->nom; }
System::String^ NS_Comp_Mappage::CLmapTB::getPrenom(void) { return this->prenom; }
System::String^ NS_Comp_Mappage::CLmapTB::getAdresse(void) { return this->adresse; }
System::String^ NS_Comp_Mappage::CLmapTB::getVille(void) { return this->ville; }
System::String^ NS_Comp_Mappage::CLmapTB::getCp(void) { return this->cp; }
