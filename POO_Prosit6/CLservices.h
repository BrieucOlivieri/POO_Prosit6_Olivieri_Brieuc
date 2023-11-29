#pragma once
#include "CLmapTB.h"
#include "CLcad.h"

namespace NS_Comp_Svc
{
	ref class CLservices
	{
	private:
		NS_Comp_Data::CLcad^ oCad;
		NS_Comp_Mappage::CLmapTB^ oMappTB;
	public:
		CLservices(void);
		System::Data::DataSet^ selectionnerToutesLesPersonnes(System::String^);
		void ajouterUnePersonne(System::String^, System::String^, System::String^, System::String^, System::String^);
		void supprimerUnePersonne(System::String^, System::String^, System::String^, System::String^, System::String^);
		//void ajouterUneAdresse(System::String^, System::String^, System::String^);
		//void supprimerUneAdresse(System::String^, System::String^, System::String^);
	};
}
