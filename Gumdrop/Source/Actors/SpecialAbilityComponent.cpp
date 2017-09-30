/*#include "SpecialAbilityComponent.h"

const char* SpecialAbilityComponent::g_Name = "SpecialAbilityComponent";
bool SpecialAbilityComponent::VInit(TiXmlElement* pData)
{
	return true;
}
void SpecialAbilityComponent::VApply(WeakActorPtr pActor)
{
	StrongActorPtr pStrongActor = MakeStrongPtr(pActor);
	if (pStrongActor)
	{
		cout << "Deploying Special ability... " << (string)(pStrongActor->GetId());
	}
}*/