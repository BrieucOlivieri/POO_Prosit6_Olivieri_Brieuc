// #include "pch.h"
#include "CLservices.h"

NS_Comp_Svc::CLservices::CLservices(void)
{
	this->oCad = gcnew NS_Comp_Data::CLcad();
	this->oMappTB = gcnew NS_Comp_Mappage::CLmapTB();
}
System::Data::DataSet^ NS_Comp_Svc::CLservices::selectionnerToutesLesPersonnes(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oMappTB->Select();
	return this->oCad->getRows(sql, dataTableName);
}
void NS_Comp_Svc::CLservices::ajouterUnePersonne(System::String^ nom, System::String^ prenom, System::String^ adresse, System::String^ ville, System::String^ cp)
{
	System::String^ sql;

	this->oMappTB->setNom(nom);
	this->oMappTB->setPrenom(prenom);
	this->oMappTB->setAdresse(adresse);
	this->oMappTB->setVille(ville);
	this->oMappTB->setCp(cp);
	sql = this->oMappTB->Insert();

	this->oCad->actionRows(sql);
}
void NS_Comp_Svc::CLservices::supprimerUnePersonne(System::String^ nom, System::String^ prenom, System::String^ adresse, System::String^ ville, System::String^ cp)
{
	System::String^ sql;

	this->oMappTB->setNom(nom);	
	this->oMappTB->setPrenom(prenom);
	this->oMappTB->setAdresse(adresse);
	this->oMappTB->setVille(ville);
	this->oMappTB->setCp(cp);
	sql = this->oMappTB->Delete();

	this->oCad->actionRows(sql);
}

//void NS_Comp_Svc::CLservices::ajouterUneAdresse(System::String^ adresse, System::String^ ville, System::String^ cp)
//{
//	System::String^ sql;
//
//	this->oMappTB->setAdresse(adresse);
//	this->oMappTB->setVille(ville);
//	this->oMappTB->setCp(cp);
//	sql = this->oMappTB->Insert();
//
//	this->oCad->actionRows(sql);
//}

//void NS_Comp_Svc::CLservices::supprimerUneAdresse(System::String^ adresse, System::String^ ville, System::String^ cp)
//{
//	System::String^ sql;
//
//	this->oMappTB->setAdresse(adresse);
//	this->oMappTB->setVille(ville);
//	this->oMappTB->setCp(cp);
//	sql = this->oMappTB->Delete();
//
//	this->oCad->actionRows(sql);
//}

