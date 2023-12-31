#pragma once
namespace NS_Comp_Mappage
{
	ref class CLmapTB
	{
	private:
		System::String^ sSql;
		int Id;
		System::String^ nom;
		System::String^ prenom;
		System::String^ adresse;
		System::String^ ville;
		System::String^ cp;
	public:
		System::String^ Select(void);
		System::String^ Insert(void);
		System::String^ Delete(void);
		System::String^ Update(void);
		void setId(int);
		void setNom(System::String^);
		void setPrenom(System::String^);
		void setAdresse(System::String^ adresse);
		void setVille(System::String^ prenom);
		void setCp(System::String^ cp);
		int getId(void);
		System::String^ getNom(void);
		System::String^ getPrenom(void);
		System::String^ getAdresse(void);
		System::String^ getVille(void);
		System::String^ getCp(void);
	};
}
