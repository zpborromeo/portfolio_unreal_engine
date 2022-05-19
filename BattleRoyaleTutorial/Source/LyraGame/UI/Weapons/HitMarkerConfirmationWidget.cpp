// Copyright Epic Games, Inc. All Rights Reserved.

#include "HitMarkerConfirmationWidget.h"
#include "SHitMarkerConfirmationWidget.h"
#include "Blueprint/UserWidget.h"

UHitMarkerConfirmationWidget::UHitMarkerConfirmationWidget(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	Visibility = ESlateVisibility::HitTestInvisible;
	bIsVolatile = true;
	AnyHitsMarkerImage.DrawAs = ESlateBrushDrawType::NoDrawType;
}

void UHitMarkerConfirmationWidget::ReleaseSlateResources(bool bReleaseChildren)
{
	Super::ReleaseSlateResources(bReleaseChildren);

	MyMarkerWidget.Reset();
}

TSharedRef<SWidget> UHitMarkerConfirmationWidget::RebuildWidget()
{
	UUserWidget* OuterUserWidget = GetTypedOuter<UUserWidget>();
	FLocalPlayerContext DummyContext;
	const FLocalPlayerContext& PlayerContextRef = (OuterUserWidget != nullptr) ? OuterUserWidget->GetPlayerContext() : DummyContext;

	MyMarkerWidget = SNew(SHitMarkerConfirmationWidget, PlayerContextRef, PerHitMarkerZoneOverrideImages)
		.PerHitMarkerImage(&(this->PerHitMarkerImage))
		.AnyHitsMarkerImage(&(this->AnyHitsMarkerImage))
		.HitNotifyDuration(this->HitNotifyDuration);

	return MyMarkerWidget.ToSharedRef();
}
