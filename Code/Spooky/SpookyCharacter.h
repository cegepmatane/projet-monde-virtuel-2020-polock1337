// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Components/SphereComponent.h"
#include "ObjetRecuperable.h"
#include "SpookyCharacter.generated.h"


UCLASS(config=Game)
class ASpookyCharacter : public ACharacter
{
	GENERATED_BODY()

	/** Side view camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* SideViewCameraComponent;

	/** Camera boom positioning the camera beside the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;

	FORCEINLINE class USphereComponent* getAttrapeur() const { return this->attrapeur; }

protected:


	/** Called for side to side input */
	void MoveRight(float Val);

	/** Handle touch inputs. */
	void TouchStarted(const ETouchIndex::Type FingerIndex, const FVector Location);

	/** Handle touch stop event. */
	void TouchStopped(const ETouchIndex::Type FingerIndex, const FVector Location);

	// APawn interface
	virtual void SetupPlayerInputComponent(class UInputComponent* InputComponent) override;
	// End of APawn interface

private:
	UPROPERTY(visibleAnywhere, BlueprintReadOnly, Category = "Bonus", meta = (AllowPrivateAccess = "true"))
	float bonus=1000.0f;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly,category ="Attrapeur" , meta = (AllowPrivateAccess = "true"))
	class USphereComponent* attrapeur;
	void attraperObjetRecuperable();

public:
	ASpookyCharacter();
	/** Returns SideViewCameraComponent subobject **/
	FORCEINLINE class UCameraComponent* GetSideViewCameraComponent() const { return SideViewCameraComponent; }
	
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
};
