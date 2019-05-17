/*
*
* @APPLE_LICENSE_HEADER_START@
*
* Copyright (c) 2017 Apple Computer, Inc.  All Rights Reserved.
*
* This file contains Original Code and/or Modifications of Original Code
* as defined in and that are subject to the Apple Public Source License
* Version 2.0 (the 'License'). You may not use this file except in
* compliance with the License. Please obtain a copy of the License at
* http://www.opensource.apple.com/apsl/ and read it before using this
* file.
*
* The Original Code and all software distributed under the License are
* distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
* EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
* INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
* FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
* Please see the License for the specific language governing rights and
* limitations under the License.
*
* @APPLE_LICENSE_HEADER_END@
*/

//
// DO NOT EDIT THIS FILE. IT IS AUTO-GENERATED
//

#ifndef _IOHIDEVENTFIELDDEFS_H
#define _IOHIDEVENTFIELDDEFS_H

#define kIOHIDEventFieldVendorDefinedBase IOHIDEventFieldBase(kIOHIDEventTypeVendorDefined)
static const IOHIDEventField kIOHIDEventFieldVendorDefinedDataLength                           =  (kIOHIDEventFieldVendorDefinedBase | 3);
static const IOHIDEventField kIOHIDEventFieldVendorDefinedVersion                              =  (kIOHIDEventFieldVendorDefinedBase | 2);
static const IOHIDEventField kIOHIDEventFieldVendorDefinedUsage                                =  (kIOHIDEventFieldVendorDefinedBase | 1);
static const IOHIDEventField kIOHIDEventFieldVendorDefinedData                                 =  (kIOHIDEventFieldVendorDefinedBase | 4);
static const IOHIDEventField kIOHIDEventFieldVendorDefinedUsagePage                            =  (kIOHIDEventFieldVendorDefinedBase | 0);

#define kIOHIDEventFieldScaleBase IOHIDEventFieldBase(kIOHIDEventTypeScale)
static const IOHIDEventField kIOHIDEventFieldScaleZ                                            =  (kIOHIDEventFieldScaleBase | 2);
static const IOHIDEventField kIOHIDEventFieldScaleX                                            =  (kIOHIDEventFieldScaleBase | 0);
static const IOHIDEventField kIOHIDEventFieldScaleY                                            =  (kIOHIDEventFieldScaleBase | 1);

#define kIOHIDEventFieldSymbolicHotKeyBase IOHIDEventFieldBase(kIOHIDEventTypeSymbolicHotKey)
static const IOHIDEventField kIOHIDEventFieldSymbolicHotKeyValue                               =  (kIOHIDEventFieldSymbolicHotKeyBase | 0);
static const IOHIDEventField kIOHIDEventFieldSymbolicHotKeyIsCGSEvent                          =  (kIOHIDEventFieldSymbolicHotKeyBase | 1);

#define kIOHIDEventFieldTemperatureBase IOHIDEventFieldBase(kIOHIDEventTypeTemperature)
static const IOHIDEventField kIOHIDEventFieldTemperatureLevel                                  =  (kIOHIDEventFieldTemperatureBase | 0);

#define kIOHIDEventFieldAccelerometerBase IOHIDEventFieldBase(kIOHIDEventTypeAccelerometer)
static const IOHIDEventField kIOHIDEventFieldAccelerometerY                                    =  (kIOHIDEventFieldAccelerometerBase | 1);
static const IOHIDEventField kIOHIDEventFieldAccelerometerX                                    =  (kIOHIDEventFieldAccelerometerBase | 0);
static const IOHIDEventField kIOHIDEventFieldAccelerometerZ                                    =  (kIOHIDEventFieldAccelerometerBase | 2);
static const IOHIDEventField kIOHIDEventFieldAccelerometerType                                 =  (kIOHIDEventFieldAccelerometerBase | 3);
static const IOHIDEventField kIOHIDEventFieldAccelerometerSubType                              =  (kIOHIDEventFieldAccelerometerBase | 4);
static const IOHIDEventField kIOHIDEventFieldAccelerometerSequence                             =  (kIOHIDEventFieldAccelerometerBase | 5);

#define kIOHIDEventFieldProgressBase IOHIDEventFieldBase(kIOHIDEventTypeProgress)
static const IOHIDEventField kIOHIDEventFieldProgressLevel                                     =  (kIOHIDEventFieldProgressBase | 1);
static const IOHIDEventField kIOHIDEventFieldProgressEventType                                 =  (kIOHIDEventFieldProgressBase | 0);

#define kIOHIDEventFieldGenericGestureBase IOHIDEventFieldBase(kIOHIDEventTypeGenericGesture)
static const IOHIDEventField kIOHIDEventFieldGenericGestureTypeTapCount                        =  (kIOHIDEventFieldGenericGestureBase | 1);
static const IOHIDEventField kIOHIDEventFieldGenericGestureType                                =  (kIOHIDEventFieldGenericGestureBase | 0);
static const IOHIDEventField kIOHIDEventFieldGenericGestureTypeSwipeProgress                   =  (kIOHIDEventFieldGenericGestureBase | 2);

#define kIOHIDEventFieldNULLBase IOHIDEventFieldBase(kIOHIDEventTypeNULL)
static const IOHIDEventField kIOHIDEventFieldIsRelative                                        =  (kIOHIDEventFieldNULLBase | 0);
static const IOHIDEventField kIOHIDEventFieldIsCenterOrigin                                    =  (kIOHIDEventFieldNULLBase | 3);
static const IOHIDEventField kIOHIDEventFieldIsBuiltIn                                         =  (kIOHIDEventFieldNULLBase | 4);
static const IOHIDEventField kIOHIDEventFieldIsPixelUnits                                      =  (kIOHIDEventFieldNULLBase | 2);
static const IOHIDEventField kIOHIDEventFieldIsCollection                                      =  (kIOHIDEventFieldNULLBase | 1);

#define kIOHIDEventFieldAmbientLightSensorBase IOHIDEventFieldBase(kIOHIDEventTypeAmbientLightSensor)
static const IOHIDEventField kIOHIDEventFieldAmbientLightColorSpace                            =  (kIOHIDEventFieldAmbientLightSensorBase | 6);
static const IOHIDEventField kIOHIDEventFieldAmbientLightColorComponent2                       =  (kIOHIDEventFieldAmbientLightSensorBase | 9);
static const IOHIDEventField kIOHIDEventFieldAmbientLightColorComponent1                       =  (kIOHIDEventFieldAmbientLightSensorBase | 8);
static const IOHIDEventField kIOHIDEventFieldAmbientLightColorComponent0                       =  (kIOHIDEventFieldAmbientLightSensorBase | 7);
static const IOHIDEventField kIOHIDEventFieldAmbientLightSensorRawChannel0                     =  (kIOHIDEventFieldAmbientLightSensorBase | 1);
static const IOHIDEventField kIOHIDEventFieldAmbientLightSensorRawChannel1                     =  (kIOHIDEventFieldAmbientLightSensorBase | 2);
static const IOHIDEventField kIOHIDEventFieldAmbientLightSensorRawChannel2                     =  (kIOHIDEventFieldAmbientLightSensorBase | 3);
static const IOHIDEventField kIOHIDEventFieldAmbientLightSensorRawChannel3                     =  (kIOHIDEventFieldAmbientLightSensorBase | 4);
static const IOHIDEventField kIOHIDEventFieldAmbientLightSensorLevel                           =  (kIOHIDEventFieldAmbientLightSensorBase | 0);
static const IOHIDEventField kIOHIDEventFieldAmbientLightSensorIlluminance                     =  (kIOHIDEventFieldAmbientLightSensorBase | 11);
static const IOHIDEventField kIOHIDEventFieldAmbientLightDisplayBrightnessChanged              =  (kIOHIDEventFieldAmbientLightSensorBase | 5);
static const IOHIDEventField kIOHIDEventFieldAmbientLightSensorColorTemperature                =  (kIOHIDEventFieldAmbientLightSensorBase | 10);

#define kIOHIDEventFieldPowerBase IOHIDEventFieldBase(kIOHIDEventTypePower)
static const IOHIDEventField kIOHIDEventFieldPowerType                                         =  (kIOHIDEventFieldPowerBase | 1);
static const IOHIDEventField kIOHIDEventFieldPowerSubType                                      =  (kIOHIDEventFieldPowerBase | 2);
static const IOHIDEventField kIOHIDEventFieldPowerMeasurement                                  =  (kIOHIDEventFieldPowerBase | 0);

#define kIOHIDEventFieldForceBase IOHIDEventFieldBase(kIOHIDEventTypeForce)
static const IOHIDEventField kIOHIDEventFieldForceStagePressure                                =  (kIOHIDEventFieldForceBase | 3);
static const IOHIDEventField kIOHIDEventFieldForceStage                                        =  (kIOHIDEventFieldForceBase | 2);
static const IOHIDEventField kIOHIDEventFieldForceProgress                                     =  (kIOHIDEventFieldForceBase | 1);
static const IOHIDEventField kIOHIDEventFieldForceBehavior                                     =  (kIOHIDEventFieldForceBase | 0);

#define kIOHIDEventFieldMotionGestureBase IOHIDEventFieldBase(kIOHIDEventTypeMotionGesture)
static const IOHIDEventField kIOHIDEventFieldMotionGestureProgress                             =  (kIOHIDEventFieldMotionGestureBase | 1);
static const IOHIDEventField kIOHIDEventFieldMotionGestureGestureType                          =  (kIOHIDEventFieldMotionGestureBase | 0);

#define kIOHIDEventFieldGameControllerBase IOHIDEventFieldBase(kIOHIDEventTypeGameController)
static const IOHIDEventField kIOHIDEventFieldGameControllerJoyStickAxisX                       =  (kIOHIDEventFieldGameControllerBase | 13);
static const IOHIDEventField kIOHIDEventFieldGameControllerJoyStickAxisY                       =  (kIOHIDEventFieldGameControllerBase | 14);
static const IOHIDEventField kIOHIDEventFieldGameControllerType                                =  (kIOHIDEventFieldGameControllerBase | 0);
static const IOHIDEventField kIOHIDEventFieldGameControllerDirectionPadRight                   =  (kIOHIDEventFieldGameControllerBase | 4);
static const IOHIDEventField kIOHIDEventFieldGameControllerShoulderButtonR1                    =  (kIOHIDEventFieldGameControllerBase | 10);
static const IOHIDEventField kIOHIDEventFieldGameControllerFaceButtonA                         =  (kIOHIDEventFieldGameControllerBase | 5);
static const IOHIDEventField kIOHIDEventFieldGameControllerFaceButtonB                         =  (kIOHIDEventFieldGameControllerBase | 6);
static const IOHIDEventField kIOHIDEventFieldGameControllerDirectionPadLeft                    =  (kIOHIDEventFieldGameControllerBase | 3);
static const IOHIDEventField kIOHIDEventFieldGameControllerThumbstickButtonRight               =  (kIOHIDEventFieldGameControllerBase | 18);
static const IOHIDEventField kIOHIDEventFieldGameControllerDirectionPadDown                    =  (kIOHIDEventFieldGameControllerBase | 2);
static const IOHIDEventField kIOHIDEventFieldGameControllerThumbstickButtonLeft                =  (kIOHIDEventFieldGameControllerBase | 17);
static const IOHIDEventField kIOHIDEventFieldGameControllerJoyStickAxisZ                       =  (kIOHIDEventFieldGameControllerBase | 15);
static const IOHIDEventField kIOHIDEventFieldGameControllerShoulderButtonR2                    =  (kIOHIDEventFieldGameControllerBase | 12);
static const IOHIDEventField kIOHIDEventFieldGameControllerFaceButtonY                         =  (kIOHIDEventFieldGameControllerBase | 8);
static const IOHIDEventField kIOHIDEventFieldGameControllerShoulderButtonL2                    =  (kIOHIDEventFieldGameControllerBase | 11);
static const IOHIDEventField kIOHIDEventFieldGameControllerJoyStickAxisRz                      =  (kIOHIDEventFieldGameControllerBase | 16);
static const IOHIDEventField kIOHIDEventFieldGameControllerShoulderButtonL1                    =  (kIOHIDEventFieldGameControllerBase | 9);
static const IOHIDEventField kIOHIDEventFieldGameControllerFaceButtonX                         =  (kIOHIDEventFieldGameControllerBase | 7);
static const IOHIDEventField kIOHIDEventFieldGameControllerDirectionPadUp                      =  (kIOHIDEventFieldGameControllerBase | 1);

#define kIOHIDEventFieldTranslationBase IOHIDEventFieldBase(kIOHIDEventTypeTranslation)
static const IOHIDEventField kIOHIDEventFieldTranslationY                                      =  (kIOHIDEventFieldTranslationBase | 1);
static const IOHIDEventField kIOHIDEventFieldTranslationX                                      =  (kIOHIDEventFieldTranslationBase | 0);
static const IOHIDEventField kIOHIDEventFieldTranslationZ                                      =  (kIOHIDEventFieldTranslationBase | 2);

#define kIOHIDEventFieldDigitizerBase IOHIDEventFieldBase(kIOHIDEventTypeDigitizer)
static const IOHIDEventField kIOHIDEventFieldDigitizerType                                     =  (kIOHIDEventFieldDigitizerBase | 4);
static const IOHIDEventField kIOHIDEventFieldDigitizerChildEventMask                           =  (kIOHIDEventFieldDigitizerBase | 24);
static const IOHIDEventField kIOHIDEventFieldDigitizerAuxiliaryPressure                        =  (kIOHIDEventFieldDigitizerBase | 11);
static const IOHIDEventField kIOHIDEventFieldDigitizerQualityRadiiAccuracy                     =  (kIOHIDEventFieldDigitizerBase | 26);
static const IOHIDEventField kIOHIDEventFieldDigitizerQuality                                  =  (kIOHIDEventFieldDigitizerBase | 17);
static const IOHIDEventField kIOHIDEventFieldDigitizerMinorRadius                              =  (kIOHIDEventFieldDigitizerBase | 21);
static const IOHIDEventField kIOHIDEventFieldDigitizerEventMask                                =  (kIOHIDEventFieldDigitizerBase | 7);
static const IOHIDEventField kIOHIDEventFieldDigitizerGenerationCount                          =  (kIOHIDEventFieldDigitizerBase | 27);
static const IOHIDEventField kIOHIDEventFieldDigitizerIndex                                    =  (kIOHIDEventFieldDigitizerBase | 5);
static const IOHIDEventField kIOHIDEventFieldDigitizerTouch                                    =  (kIOHIDEventFieldDigitizerBase | 9);
static const IOHIDEventField kIOHIDEventFieldDigitizerAzimuth                                  =  (kIOHIDEventFieldDigitizerBase | 16);
static const IOHIDEventField kIOHIDEventFieldDigitizerTiltX                                    =  (kIOHIDEventFieldDigitizerBase | 13);
static const IOHIDEventField kIOHIDEventFieldDigitizerTiltY                                    =  (kIOHIDEventFieldDigitizerBase | 14);
static const IOHIDEventField kIOHIDEventFieldDigitizerRange                                    =  (kIOHIDEventFieldDigitizerBase | 8);
static const IOHIDEventField kIOHIDEventFieldDigitizerPressure                                 =  (kIOHIDEventFieldDigitizerBase | 10);
static const IOHIDEventField kIOHIDEventFieldDigitizerCollection                               =  (kIOHIDEventFieldDigitizerBase | 22);
static const IOHIDEventField kIOHIDEventFieldDigitizerAltitude                                 =  (kIOHIDEventFieldDigitizerBase | 15);
static const IOHIDEventField kIOHIDEventFieldDigitizerDensity                                  =  (kIOHIDEventFieldDigitizerBase | 18);
static const IOHIDEventField kIOHIDEventFieldDigitizerOrientationType                          =  (kIOHIDEventFieldDigitizerBase | 31);
static const IOHIDEventField kIOHIDEventFieldDigitizerY                                        =  (kIOHIDEventFieldDigitizerBase | 1);
static const IOHIDEventField kIOHIDEventFieldDigitizerWillUpdateMask                           =  (kIOHIDEventFieldDigitizerBase | 28);
static const IOHIDEventField kIOHIDEventFieldDigitizerIdentity                                 =  (kIOHIDEventFieldDigitizerBase | 6);
static const IOHIDEventField kIOHIDEventFieldDigitizerTwist                                    =  (kIOHIDEventFieldDigitizerBase | 12);
static const IOHIDEventField kIOHIDEventFieldDigitizerX                                        =  (kIOHIDEventFieldDigitizerBase | 0);
static const IOHIDEventField kIOHIDEventFieldDigitizerIsDisplayIntegrated                      =  (kIOHIDEventFieldDigitizerBase | 25);
static const IOHIDEventField kIOHIDEventFieldDigitizerZ                                        =  (kIOHIDEventFieldDigitizerBase | 2);
static const IOHIDEventField kIOHIDEventFieldDigitizerMajorRadius                              =  (kIOHIDEventFieldDigitizerBase | 20);
static const IOHIDEventField kIOHIDEventFieldDigitizerButtonMask                               =  (kIOHIDEventFieldDigitizerBase | 3);
static const IOHIDEventField kIOHIDEventFieldDigitizerIrregularity                             =  (kIOHIDEventFieldDigitizerBase | 19);
static const IOHIDEventField kIOHIDEventFieldDigitizerDidUpdateMask                            =  (kIOHIDEventFieldDigitizerBase | 29);

#define kIOHIDEventFieldCompassBase IOHIDEventFieldBase(kIOHIDEventTypeCompass)
static const IOHIDEventField kIOHIDEventFieldCompassType                                       =  (kIOHIDEventFieldCompassBase | 3);
static const IOHIDEventField kIOHIDEventFieldCompassZ                                          =  (kIOHIDEventFieldCompassBase | 2);
static const IOHIDEventField kIOHIDEventFieldCompassX                                          =  (kIOHIDEventFieldCompassBase | 0);
static const IOHIDEventField kIOHIDEventFieldCompassY                                          =  (kIOHIDEventFieldCompassBase | 1);
static const IOHIDEventField kIOHIDEventFieldCompassSubType                                    =  (kIOHIDEventFieldCompassBase | 4);
static const IOHIDEventField kIOHIDEventFieldCompassSequence                                   =  (kIOHIDEventFieldCompassBase | 5);

#define kIOHIDEventFieldRotationBase IOHIDEventFieldBase(kIOHIDEventTypeRotation)
static const IOHIDEventField kIOHIDEventFieldRotationY                                         =  (kIOHIDEventFieldRotationBase | 1);
static const IOHIDEventField kIOHIDEventFieldRotationX                                         =  (kIOHIDEventFieldRotationBase | 0);
static const IOHIDEventField kIOHIDEventFieldRotationZ                                         =  (kIOHIDEventFieldRotationBase | 2);

#define kIOHIDEventFieldMotionActivityBase IOHIDEventFieldBase(kIOHIDEventTypeMotionActivity)
static const IOHIDEventField kIOHIDEventFieldMotionActivityConfidence                          =  (kIOHIDEventFieldMotionActivityBase | 1);
static const IOHIDEventField kIOHIDEventFieldMotionActivityActivityType                        =  (kIOHIDEventFieldMotionActivityBase | 0);

#define kIOHIDEventFieldMultiAxisPointerBase IOHIDEventFieldBase(kIOHIDEventTypeMultiAxisPointer)
static const IOHIDEventField kIOHIDEventFieldMultiAxisPointerRy                                =  (kIOHIDEventFieldMultiAxisPointerBase | 4);
static const IOHIDEventField kIOHIDEventFieldMultiAxisPointerRx                                =  (kIOHIDEventFieldMultiAxisPointerBase | 3);
static const IOHIDEventField kIOHIDEventFieldMultiAxisPointerRz                                =  (kIOHIDEventFieldMultiAxisPointerBase | 5);
static const IOHIDEventField kIOHIDEventFieldMultiAxisPointerButtonMask                        =  (kIOHIDEventFieldMultiAxisPointerBase | 6);
static const IOHIDEventField kIOHIDEventFieldMultiAxisPointerZ                                 =  (kIOHIDEventFieldMultiAxisPointerBase | 2);
static const IOHIDEventField kIOHIDEventFieldMultiAxisPointerX                                 =  (kIOHIDEventFieldMultiAxisPointerBase | 0);
static const IOHIDEventField kIOHIDEventFieldMultiAxisPointerY                                 =  (kIOHIDEventFieldMultiAxisPointerBase | 1);

#define kIOHIDEventFieldBrightnessBase IOHIDEventFieldBase(kIOHIDEventTypeBrightness)
static const IOHIDEventField kIOHIDEventFieldTargetBrightness                                  =  (kIOHIDEventFieldBrightnessBase | 1);
static const IOHIDEventField kIOHIDEventFieldCurrentBrightness                                 =  (kIOHIDEventFieldBrightnessBase | 0);
static const IOHIDEventField kIOHIDEventFieldTransitionTime                                    =  (kIOHIDEventFieldBrightnessBase | 2);

#define kIOHIDEventFieldGyroBase IOHIDEventFieldBase(kIOHIDEventTypeGyro)
static const IOHIDEventField kIOHIDEventFieldGyroX                                             =  (kIOHIDEventFieldGyroBase | 0);
static const IOHIDEventField kIOHIDEventFieldGyroY                                             =  (kIOHIDEventFieldGyroBase | 1);
static const IOHIDEventField kIOHIDEventFieldGyroZ                                             =  (kIOHIDEventFieldGyroBase | 2);
static const IOHIDEventField kIOHIDEventFieldGyroSubType                                       =  (kIOHIDEventFieldGyroBase | 4);
static const IOHIDEventField kIOHIDEventFieldGyroSequence                                      =  (kIOHIDEventFieldGyroBase | 5);
static const IOHIDEventField kIOHIDEventFieldGyroType                                          =  (kIOHIDEventFieldGyroBase | 3);

#define kIOHIDEventFieldButtonBase IOHIDEventFieldBase(kIOHIDEventTypeButton)
static const IOHIDEventField kIOHIDEventFieldButtonPressure                                    =  (kIOHIDEventFieldButtonBase | 3);
static const IOHIDEventField kIOHIDEventFieldButtonClickCount                                  =  (kIOHIDEventFieldButtonBase | 2);
static const IOHIDEventField kIOHIDEventFieldButtonMask                                        =  (kIOHIDEventFieldButtonBase | 0);
static const IOHIDEventField kIOHIDEventFieldButtonState                                       =  (kIOHIDEventFieldButtonBase | 4);
static const IOHIDEventField kIOHIDEventFieldButtonNumber                                      =  (kIOHIDEventFieldButtonBase | 1);

#define kIOHIDEventFieldNavigationSwipeBase IOHIDEventFieldBase(kIOHIDEventTypeNavigationSwipe)
static const IOHIDEventField kIOHIDEventFieldNavigationSwipeFlavor                             =  (kIOHIDEventFieldNavigationSwipeBase | 5);
static const IOHIDEventField kIOHIDEventFieldNavigationSwipeProgress                           =  (kIOHIDEventFieldNavigationSwipeBase | 2);
static const IOHIDEventField kIOHIDEventFieldNavigationSwipeMask                               =  (kIOHIDEventFieldNavigationSwipeBase | 0);
static const IOHIDEventField kIOHIDEventFieldNavigationSwipeMotion                             =  (kIOHIDEventFieldNavigationSwipeBase | 1);
static const IOHIDEventField kIOHIDEventFieldNavigationSwipePositionY                          =  (kIOHIDEventFieldNavigationSwipeBase | 4);
static const IOHIDEventField kIOHIDEventFieldNavigationSwipePositionX                          =  (kIOHIDEventFieldNavigationSwipeBase | 3);
static const IOHIDEventField kIOHIDEventFieldNavigationSwipePositionZ                          =  (kIOHIDEventFieldNavigationSwipeBase | 6);

#define kIOHIDEventFieldAtmosphericPressureBase IOHIDEventFieldBase(kIOHIDEventTypeAtmosphericPressure)
static const IOHIDEventField kIOHIDEventFieldAtmosphericPressureLevel                          =  (kIOHIDEventFieldAtmosphericPressureBase | 0);
static const IOHIDEventField kIOHIDEventFieldAtmosphericSequence                               =  (kIOHIDEventFieldAtmosphericPressureBase | 1);

#define kIOHIDEventFieldHumidityBase IOHIDEventFieldBase(kIOHIDEventTypeHumidity)
static const IOHIDEventField kIOHIDEventFieldHumiditySequence                                  =  (kIOHIDEventFieldHumidityBase | 1);
static const IOHIDEventField kIOHIDEventFieldHumidityRH                                        =  (kIOHIDEventFieldHumidityBase | 0);

#define kIOHIDEventFieldVelocityBase IOHIDEventFieldBase(kIOHIDEventTypeVelocity)
static const IOHIDEventField kIOHIDEventFieldVelocityX                                         =  (kIOHIDEventFieldVelocityBase | 0);
static const IOHIDEventField kIOHIDEventFieldVelocityY                                         =  (kIOHIDEventFieldVelocityBase | 1);
static const IOHIDEventField kIOHIDEventFieldVelocityZ                                         =  (kIOHIDEventFieldVelocityBase | 2);

#define kIOHIDEventFieldScrollBase IOHIDEventFieldBase(kIOHIDEventTypeScroll)
static const IOHIDEventField kIOHIDEventFieldScrollIsPixels                                    =  (kIOHIDEventFieldScrollBase | 3);
static const IOHIDEventField kIOHIDEventFieldScrollX                                           =  (kIOHIDEventFieldScrollBase | 0);
static const IOHIDEventField kIOHIDEventFieldScrollY                                           =  (kIOHIDEventFieldScrollBase | 1);
static const IOHIDEventField kIOHIDEventFieldScrollZ                                           =  (kIOHIDEventFieldScrollBase | 2);

#define kIOHIDEventFieldBiometricBase IOHIDEventFieldBase(kIOHIDEventTypeBiometric)
static const IOHIDEventField kIOHIDEventFieldBiometricEventType                                =  (kIOHIDEventFieldBiometricBase | 0);
static const IOHIDEventField kIOHIDEventFieldBiometricUsage                                    =  (kIOHIDEventFieldBiometricBase | 3);
static const IOHIDEventField kIOHIDEventFieldBiometricLevel                                    =  (kIOHIDEventFieldBiometricBase | 1);
static const IOHIDEventField kIOHIDEventFieldBiometricTapCount                                 =  (kIOHIDEventFieldBiometricBase | 4);
static const IOHIDEventField kIOHIDEventFieldBiometricUsagePage                                =  (kIOHIDEventFieldBiometricBase | 2);

#define kIOHIDEventFieldBoundaryScrollBase IOHIDEventFieldBase(kIOHIDEventTypeBoundaryScroll)
static const IOHIDEventField kIOHIDEventFieldBoundaryScrollProgress                            =  (kIOHIDEventFieldBoundaryScrollBase | 2);
static const IOHIDEventField kIOHIDEventFieldBoundaryScrollFlavor                              =  (kIOHIDEventFieldBoundaryScrollBase | 5);
static const IOHIDEventField kIOHIDEventFieldBoundaryScrollPositionY                           =  (kIOHIDEventFieldBoundaryScrollBase | 4);
static const IOHIDEventField kIOHIDEventFieldBoundaryScrollPositionX                           =  (kIOHIDEventFieldBoundaryScrollBase | 3);
static const IOHIDEventField kIOHIDEventFieldBoundaryScrollMask                                =  (kIOHIDEventFieldBoundaryScrollBase | 0);
static const IOHIDEventField kIOHIDEventFieldBoundaryScrollMotion                              =  (kIOHIDEventFieldBoundaryScrollBase | 1);

#define kIOHIDEventFieldLEDBase IOHIDEventFieldBase(kIOHIDEventTypeLED)
static const IOHIDEventField kIOHIDEventFieldLEDMask                                           =  (kIOHIDEventFieldLEDBase | 0);
static const IOHIDEventField kIOHIDEventFieldLEDState                                          =  (kIOHIDEventFieldLEDBase | 2);
static const IOHIDEventField kIOHIDEventFieldLEDNumber                                         =  (kIOHIDEventFieldLEDBase | 1);

#define kIOHIDEventFieldOrientationBase IOHIDEventFieldBase(kIOHIDEventTypeOrientation)
static const IOHIDEventField kIOHIDEventFieldOrientationOrientationType                        =  (kIOHIDEventFieldOrientationBase | 3);
static const IOHIDEventField kIOHIDEventFieldOrientationDeviceOrientationUsage                 =  (kIOHIDEventFieldOrientationBase | 4);
static const IOHIDEventField kIOHIDEventFieldOrientationAltitude                               =  (kIOHIDEventFieldOrientationBase | 2);
static const IOHIDEventField kIOHIDEventFieldOrientationAzimuth                                =  (kIOHIDEventFieldOrientationBase | 1);
static const IOHIDEventField kIOHIDEventFieldOrientationRadius                                 =  (kIOHIDEventFieldOrientationBase | 0);

#define kIOHIDEventFieldProximityBase IOHIDEventFieldBase(kIOHIDEventTypeProximity)
static const IOHIDEventField kIOHIDEventFieldProximityLevel                                    =  (kIOHIDEventFieldProximityBase | 1);
static const IOHIDEventField kIOHIDEventFieldProximityDetectionMask                            =  (kIOHIDEventFieldProximityBase | 0);

#define kIOHIDEventFieldFluidTouchGestureBase IOHIDEventFieldBase(kIOHIDEventTypeFluidTouchGesture)
static const IOHIDEventField kIOHIDEventFieldFluidTouchGesturePositionY                        =  (kIOHIDEventFieldFluidTouchGestureBase | 4);
static const IOHIDEventField kIOHIDEventFieldFluidTouchGesturePositionX                        =  (kIOHIDEventFieldFluidTouchGestureBase | 3);
static const IOHIDEventField kIOHIDEventFieldFluidTouchGestureMask                             =  (kIOHIDEventFieldFluidTouchGestureBase | 0);
static const IOHIDEventField kIOHIDEventFieldFluidTouchGestureProgress                         =  (kIOHIDEventFieldFluidTouchGestureBase | 2);
static const IOHIDEventField kIOHIDEventFieldFluidTouchGestureMotion                           =  (kIOHIDEventFieldFluidTouchGestureBase | 1);
static const IOHIDEventField kIOHIDEventFieldFluidTouchGestureFlavor                           =  (kIOHIDEventFieldFluidTouchGestureBase | 5);

#define kIOHIDEventFieldDockSwipeBase IOHIDEventFieldBase(kIOHIDEventTypeDockSwipe)
static const IOHIDEventField kIOHIDEventFieldDockSwipeProgress                                 =  (kIOHIDEventFieldDockSwipeBase | 2);
static const IOHIDEventField kIOHIDEventFieldDockSwipeMask                                     =  (kIOHIDEventFieldDockSwipeBase | 0);
static const IOHIDEventField kIOHIDEventFieldDockSwipeMotion                                   =  (kIOHIDEventFieldDockSwipeBase | 1);
static const IOHIDEventField kIOHIDEventFieldDockSwipeFlavor                                   =  (kIOHIDEventFieldDockSwipeBase | 5);
static const IOHIDEventField kIOHIDEventFieldDockSwipePositionX                                =  (kIOHIDEventFieldDockSwipeBase | 3);
static const IOHIDEventField kIOHIDEventFieldDockSwipePositionY                                =  (kIOHIDEventFieldDockSwipeBase | 4);
static const IOHIDEventField kIOHIDEventFieldDockSwipePositionZ                                =  (kIOHIDEventFieldDockSwipeBase | 6);

#define kIOHIDEventFieldUnicodeBase IOHIDEventFieldBase(kIOHIDEventTypeUnicode)
static const IOHIDEventField kIOHIDEventFieldUnicodePayload                                    =  (kIOHIDEventFieldUnicodeBase | 3);
static const IOHIDEventField kIOHIDEventFieldUnicodeLength                                     =  (kIOHIDEventFieldUnicodeBase | 2);
static const IOHIDEventField kIOHIDEventFieldUnicodeQuality                                    =  (kIOHIDEventFieldUnicodeBase | 1);
static const IOHIDEventField kIOHIDEventFieldUnicodeEncoding                                   =  (kIOHIDEventFieldUnicodeBase | 0);

#define kIOHIDEventFieldKeyboardBase IOHIDEventFieldBase(kIOHIDEventTypeKeyboard)
static const IOHIDEventField kIOHIDEventFieldKeyboardStickyKeyPhase                            =  (kIOHIDEventFieldKeyboardBase | 9);
static const IOHIDEventField kIOHIDEventFieldKeyboardStickyKeyToggle                           =  (kIOHIDEventFieldKeyboardBase | 10);
static const IOHIDEventField kIOHIDEventFieldKeyboardMouseKeyToggle                            =  (kIOHIDEventFieldKeyboardBase | 8);
static const IOHIDEventField kIOHIDEventFieldKeyboardClickSpeed                                =  (kIOHIDEventFieldKeyboardBase | 6);
static const IOHIDEventField kIOHIDEventFieldKeyboardPressCount                                =  (kIOHIDEventFieldKeyboardBase | 4);
static const IOHIDEventField kIOHIDEventFieldKeyboardLongPress                                 =  (kIOHIDEventFieldKeyboardBase | 5);
static const IOHIDEventField kIOHIDEventFieldKeyboardUsagePage                                 =  (kIOHIDEventFieldKeyboardBase | 0);
static const IOHIDEventField kIOHIDEventFieldKeyboardSlowKeyPhase                              =  (kIOHIDEventFieldKeyboardBase | 7);
static const IOHIDEventField kIOHIDEventFieldKeyboardDown                                      =  (kIOHIDEventFieldKeyboardBase | 2);
static const IOHIDEventField kIOHIDEventFieldKeyboardRepeat                                    =  (kIOHIDEventFieldKeyboardBase | 3);
static const IOHIDEventField kIOHIDEventFieldKeyboardUsage                                     =  (kIOHIDEventFieldKeyboardBase | 1);

#define kIOHIDEventFieldPointerBase IOHIDEventFieldBase(kIOHIDEventTypePointer)
static const IOHIDEventField kIOHIDEventFieldPointerZ                                          =  (kIOHIDEventFieldPointerBase | 2);
static const IOHIDEventField kIOHIDEventFieldPointerY                                          =  (kIOHIDEventFieldPointerBase | 1);
static const IOHIDEventField kIOHIDEventFieldPointerX                                          =  (kIOHIDEventFieldPointerBase | 0);
static const IOHIDEventField kIOHIDEventFieldPointerButtonMask                                 =  (kIOHIDEventFieldPointerBase | 3);

#endif
