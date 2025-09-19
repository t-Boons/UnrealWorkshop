#include "GameFramework/Actor.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"

#include "CameraRig.generated.h"

UCLASS()
class ACameraRig : public AActor
{
	GENERATED_BODY()

public:
	ACameraRig();

protected:
	UPROPERTY(VisibleAnywhere, Category = "Camera Rig")
	TObjectPtr<USpringArmComponent> SpringArm;

	UPROPERTY(VisibleAnywhere, Category = "Camera Rig")
	TObjectPtr<UCameraComponent> Camera;
};
