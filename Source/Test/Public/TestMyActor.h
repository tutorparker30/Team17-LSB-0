

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TestMyActor.generated.h"

UCLASS()
class TEST_API ATestMyActor : public AActor
{
	GENERATED_BODY()
	
public:	
	ATestMyActor();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

};
