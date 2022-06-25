// Objective-C API for talking to github.com/sonr-io/sonr/bind/motor-mobile Go package.
//   gobind -lang=objc github.com/sonr-io/sonr/bind/motor-mobile
//
// File is generated by gobind. Do not edit.

#ifndef __Motor_H__
#define __Motor_H__

@import Foundation;
#include "ref.h"
#include "Universe.objc.h"


/**
 * Address returns the address of the wallet.
 */
FOUNDATION_EXPORT NSString* _Nonnull MotorAddress(void);

/**
 * Broadcast broadcasts rawTx to the specified address
 */
FOUNDATION_EXPORT NSData* _Nullable MotorBroadcast(NSData* _Nullable buf, NSError* _Nullable* _Nullable error);

/**
 * DidDoc returns the DID document as JSON
 */
FOUNDATION_EXPORT NSString* _Nonnull MotorDidDoc(void);

/**
 * ImportCredentials imports the given credentials into the wallet.
 */
FOUNDATION_EXPORT NSData* _Nullable MotorImportCredential(NSData* _Nullable buf, NSError* _Nullable* _Nullable error);

/**
 * LoadWallet unmarshals the given JSON into the wallet.
 */
FOUNDATION_EXPORT NSData* _Nullable MotorLoadWallet(NSData* _Nullable buf, NSError* _Nullable* _Nullable error);

/**
 * MarshalWallet returns the JSON representation of the wallet.
 */
FOUNDATION_EXPORT NSData* _Nullable MotorMarshalWallet(void);

/**
 * NewWallet creates a new mpc based wallet.
 */
FOUNDATION_EXPORT NSData* _Nullable MotorNewWallet(NSData* _Nullable buf, NSError* _Nullable* _Nullable error);

/**
 * Sign returns the signature of the given message.
 */
FOUNDATION_EXPORT NSData* _Nullable MotorSign(NSData* _Nullable buf, NSError* _Nullable* _Nullable error);

/**
 * Verify returns true if the given signature is valid for the given message.
 */
FOUNDATION_EXPORT BOOL MotorVerify(NSData* _Nullable buf);

#endif