/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *      http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef ALIBABACLOUD_KMS_KMSCLIENT_H_
#define ALIBABACLOUD_KMS_KMSCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "KmsExport.h"
#include "model/AdvanceEncryptRequest.h"
#include "model/AdvanceEncryptResult.h"
#include "model/AsymmetricDecryptRequest.h"
#include "model/AsymmetricDecryptResult.h"
#include "model/AsymmetricEncryptRequest.h"
#include "model/AsymmetricEncryptResult.h"
#include "model/AsymmetricSignRequest.h"
#include "model/AsymmetricSignResult.h"
#include "model/AsymmetricVerifyRequest.h"
#include "model/AsymmetricVerifyResult.h"
#include "model/CancelKeyDeletionRequest.h"
#include "model/CancelKeyDeletionResult.h"
#include "model/CertificatePrivateKeyDecryptRequest.h"
#include "model/CertificatePrivateKeyDecryptResult.h"
#include "model/CertificatePrivateKeySignRequest.h"
#include "model/CertificatePrivateKeySignResult.h"
#include "model/CertificatePublicKeyEncryptRequest.h"
#include "model/CertificatePublicKeyEncryptResult.h"
#include "model/CertificatePublicKeyVerifyRequest.h"
#include "model/CertificatePublicKeyVerifyResult.h"
#include "model/ConnectKmsInstanceRequest.h"
#include "model/ConnectKmsInstanceResult.h"
#include "model/CreateAliasRequest.h"
#include "model/CreateAliasResult.h"
#include "model/CreateApplicationAccessPointRequest.h"
#include "model/CreateApplicationAccessPointResult.h"
#include "model/CreateCertificateRequest.h"
#include "model/CreateCertificateResult.h"
#include "model/CreateClientKeyRequest.h"
#include "model/CreateClientKeyResult.h"
#include "model/CreateKeyRequest.h"
#include "model/CreateKeyResult.h"
#include "model/CreateKeyVersionRequest.h"
#include "model/CreateKeyVersionResult.h"
#include "model/CreateNetworkRuleRequest.h"
#include "model/CreateNetworkRuleResult.h"
#include "model/CreatePolicyRequest.h"
#include "model/CreatePolicyResult.h"
#include "model/CreateSecretRequest.h"
#include "model/CreateSecretResult.h"
#include "model/DecryptRequest.h"
#include "model/DecryptResult.h"
#include "model/DeleteAliasRequest.h"
#include "model/DeleteAliasResult.h"
#include "model/DeleteApplicationAccessPointRequest.h"
#include "model/DeleteApplicationAccessPointResult.h"
#include "model/DeleteCertificateRequest.h"
#include "model/DeleteCertificateResult.h"
#include "model/DeleteClientKeyRequest.h"
#include "model/DeleteClientKeyResult.h"
#include "model/DeleteKeyMaterialRequest.h"
#include "model/DeleteKeyMaterialResult.h"
#include "model/DeleteNetworkRuleRequest.h"
#include "model/DeleteNetworkRuleResult.h"
#include "model/DeletePolicyRequest.h"
#include "model/DeletePolicyResult.h"
#include "model/DeleteSecretRequest.h"
#include "model/DeleteSecretResult.h"
#include "model/DescribeAccountKmsStatusRequest.h"
#include "model/DescribeAccountKmsStatusResult.h"
#include "model/DescribeApplicationAccessPointRequest.h"
#include "model/DescribeApplicationAccessPointResult.h"
#include "model/DescribeCertificateRequest.h"
#include "model/DescribeCertificateResult.h"
#include "model/DescribeKeyRequest.h"
#include "model/DescribeKeyResult.h"
#include "model/DescribeKeyVersionRequest.h"
#include "model/DescribeKeyVersionResult.h"
#include "model/DescribeNetworkRuleRequest.h"
#include "model/DescribeNetworkRuleResult.h"
#include "model/DescribePolicyRequest.h"
#include "model/DescribePolicyResult.h"
#include "model/DescribeRegionsRequest.h"
#include "model/DescribeRegionsResult.h"
#include "model/DescribeSecretRequest.h"
#include "model/DescribeSecretResult.h"
#include "model/DisableKeyRequest.h"
#include "model/DisableKeyResult.h"
#include "model/EnableKeyRequest.h"
#include "model/EnableKeyResult.h"
#include "model/EncryptRequest.h"
#include "model/EncryptResult.h"
#include "model/ExportDataKeyRequest.h"
#include "model/ExportDataKeyResult.h"
#include "model/GenerateAndExportDataKeyRequest.h"
#include "model/GenerateAndExportDataKeyResult.h"
#include "model/GenerateDataKeyRequest.h"
#include "model/GenerateDataKeyResult.h"
#include "model/GenerateDataKeyWithoutPlaintextRequest.h"
#include "model/GenerateDataKeyWithoutPlaintextResult.h"
#include "model/GetCertificateRequest.h"
#include "model/GetCertificateResult.h"
#include "model/GetClientKeyRequest.h"
#include "model/GetClientKeyResult.h"
#include "model/GetKeyPolicyRequest.h"
#include "model/GetKeyPolicyResult.h"
#include "model/GetKmsInstanceRequest.h"
#include "model/GetKmsInstanceResult.h"
#include "model/GetParametersForImportRequest.h"
#include "model/GetParametersForImportResult.h"
#include "model/GetPublicKeyRequest.h"
#include "model/GetPublicKeyResult.h"
#include "model/GetRandomPasswordRequest.h"
#include "model/GetRandomPasswordResult.h"
#include "model/GetSecretPolicyRequest.h"
#include "model/GetSecretPolicyResult.h"
#include "model/GetSecretValueRequest.h"
#include "model/GetSecretValueResult.h"
#include "model/ImportKeyMaterialRequest.h"
#include "model/ImportKeyMaterialResult.h"
#include "model/ListAliasesRequest.h"
#include "model/ListAliasesResult.h"
#include "model/ListAliasesByKeyIdRequest.h"
#include "model/ListAliasesByKeyIdResult.h"
#include "model/ListApplicationAccessPointsRequest.h"
#include "model/ListApplicationAccessPointsResult.h"
#include "model/ListClientKeysRequest.h"
#include "model/ListClientKeysResult.h"
#include "model/ListKeyVersionsRequest.h"
#include "model/ListKeyVersionsResult.h"
#include "model/ListKeysRequest.h"
#include "model/ListKeysResult.h"
#include "model/ListKmsInstancesRequest.h"
#include "model/ListKmsInstancesResult.h"
#include "model/ListNetworkRulesRequest.h"
#include "model/ListNetworkRulesResult.h"
#include "model/ListPoliciesRequest.h"
#include "model/ListPoliciesResult.h"
#include "model/ListResourceTagsRequest.h"
#include "model/ListResourceTagsResult.h"
#include "model/ListSecretVersionIdsRequest.h"
#include "model/ListSecretVersionIdsResult.h"
#include "model/ListSecretsRequest.h"
#include "model/ListSecretsResult.h"
#include "model/ListTagResourcesRequest.h"
#include "model/ListTagResourcesResult.h"
#include "model/OpenKmsServiceRequest.h"
#include "model/OpenKmsServiceResult.h"
#include "model/PutSecretValueRequest.h"
#include "model/PutSecretValueResult.h"
#include "model/ReEncryptRequest.h"
#include "model/ReEncryptResult.h"
#include "model/RestoreSecretRequest.h"
#include "model/RestoreSecretResult.h"
#include "model/RotateSecretRequest.h"
#include "model/RotateSecretResult.h"
#include "model/ScheduleKeyDeletionRequest.h"
#include "model/ScheduleKeyDeletionResult.h"
#include "model/SetDeletionProtectionRequest.h"
#include "model/SetDeletionProtectionResult.h"
#include "model/SetKeyPolicyRequest.h"
#include "model/SetKeyPolicyResult.h"
#include "model/SetSecretPolicyRequest.h"
#include "model/SetSecretPolicyResult.h"
#include "model/TagResourceRequest.h"
#include "model/TagResourceResult.h"
#include "model/TagResourcesRequest.h"
#include "model/TagResourcesResult.h"
#include "model/UntagResourceRequest.h"
#include "model/UntagResourceResult.h"
#include "model/UntagResourcesRequest.h"
#include "model/UntagResourcesResult.h"
#include "model/UpdateAliasRequest.h"
#include "model/UpdateAliasResult.h"
#include "model/UpdateApplicationAccessPointRequest.h"
#include "model/UpdateApplicationAccessPointResult.h"
#include "model/UpdateCertificateStatusRequest.h"
#include "model/UpdateCertificateStatusResult.h"
#include "model/UpdateKeyDescriptionRequest.h"
#include "model/UpdateKeyDescriptionResult.h"
#include "model/UpdateKmsInstanceBindVpcRequest.h"
#include "model/UpdateKmsInstanceBindVpcResult.h"
#include "model/UpdateNetworkRuleRequest.h"
#include "model/UpdateNetworkRuleResult.h"
#include "model/UpdatePolicyRequest.h"
#include "model/UpdatePolicyResult.h"
#include "model/UpdateRotationPolicyRequest.h"
#include "model/UpdateRotationPolicyResult.h"
#include "model/UpdateSecretRequest.h"
#include "model/UpdateSecretResult.h"
#include "model/UpdateSecretRotationPolicyRequest.h"
#include "model/UpdateSecretRotationPolicyResult.h"
#include "model/UpdateSecretVersionStageRequest.h"
#include "model/UpdateSecretVersionStageResult.h"
#include "model/UploadCertificateRequest.h"
#include "model/UploadCertificateResult.h"


namespace AlibabaCloud
{
	namespace Kms
	{
		class ALIBABACLOUD_KMS_EXPORT KmsClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::AdvanceEncryptResult> AdvanceEncryptOutcome;
			typedef std::future<AdvanceEncryptOutcome> AdvanceEncryptOutcomeCallable;
			typedef std::function<void(const KmsClient*, const Model::AdvanceEncryptRequest&, const AdvanceEncryptOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AdvanceEncryptAsyncHandler;
			typedef Outcome<Error, Model::AsymmetricDecryptResult> AsymmetricDecryptOutcome;
			typedef std::future<AsymmetricDecryptOutcome> AsymmetricDecryptOutcomeCallable;
			typedef std::function<void(const KmsClient*, const Model::AsymmetricDecryptRequest&, const AsymmetricDecryptOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AsymmetricDecryptAsyncHandler;
			typedef Outcome<Error, Model::AsymmetricEncryptResult> AsymmetricEncryptOutcome;
			typedef std::future<AsymmetricEncryptOutcome> AsymmetricEncryptOutcomeCallable;
			typedef std::function<void(const KmsClient*, const Model::AsymmetricEncryptRequest&, const AsymmetricEncryptOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AsymmetricEncryptAsyncHandler;
			typedef Outcome<Error, Model::AsymmetricSignResult> AsymmetricSignOutcome;
			typedef std::future<AsymmetricSignOutcome> AsymmetricSignOutcomeCallable;
			typedef std::function<void(const KmsClient*, const Model::AsymmetricSignRequest&, const AsymmetricSignOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AsymmetricSignAsyncHandler;
			typedef Outcome<Error, Model::AsymmetricVerifyResult> AsymmetricVerifyOutcome;
			typedef std::future<AsymmetricVerifyOutcome> AsymmetricVerifyOutcomeCallable;
			typedef std::function<void(const KmsClient*, const Model::AsymmetricVerifyRequest&, const AsymmetricVerifyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AsymmetricVerifyAsyncHandler;
			typedef Outcome<Error, Model::CancelKeyDeletionResult> CancelKeyDeletionOutcome;
			typedef std::future<CancelKeyDeletionOutcome> CancelKeyDeletionOutcomeCallable;
			typedef std::function<void(const KmsClient*, const Model::CancelKeyDeletionRequest&, const CancelKeyDeletionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CancelKeyDeletionAsyncHandler;
			typedef Outcome<Error, Model::CertificatePrivateKeyDecryptResult> CertificatePrivateKeyDecryptOutcome;
			typedef std::future<CertificatePrivateKeyDecryptOutcome> CertificatePrivateKeyDecryptOutcomeCallable;
			typedef std::function<void(const KmsClient*, const Model::CertificatePrivateKeyDecryptRequest&, const CertificatePrivateKeyDecryptOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CertificatePrivateKeyDecryptAsyncHandler;
			typedef Outcome<Error, Model::CertificatePrivateKeySignResult> CertificatePrivateKeySignOutcome;
			typedef std::future<CertificatePrivateKeySignOutcome> CertificatePrivateKeySignOutcomeCallable;
			typedef std::function<void(const KmsClient*, const Model::CertificatePrivateKeySignRequest&, const CertificatePrivateKeySignOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CertificatePrivateKeySignAsyncHandler;
			typedef Outcome<Error, Model::CertificatePublicKeyEncryptResult> CertificatePublicKeyEncryptOutcome;
			typedef std::future<CertificatePublicKeyEncryptOutcome> CertificatePublicKeyEncryptOutcomeCallable;
			typedef std::function<void(const KmsClient*, const Model::CertificatePublicKeyEncryptRequest&, const CertificatePublicKeyEncryptOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CertificatePublicKeyEncryptAsyncHandler;
			typedef Outcome<Error, Model::CertificatePublicKeyVerifyResult> CertificatePublicKeyVerifyOutcome;
			typedef std::future<CertificatePublicKeyVerifyOutcome> CertificatePublicKeyVerifyOutcomeCallable;
			typedef std::function<void(const KmsClient*, const Model::CertificatePublicKeyVerifyRequest&, const CertificatePublicKeyVerifyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CertificatePublicKeyVerifyAsyncHandler;
			typedef Outcome<Error, Model::ConnectKmsInstanceResult> ConnectKmsInstanceOutcome;
			typedef std::future<ConnectKmsInstanceOutcome> ConnectKmsInstanceOutcomeCallable;
			typedef std::function<void(const KmsClient*, const Model::ConnectKmsInstanceRequest&, const ConnectKmsInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ConnectKmsInstanceAsyncHandler;
			typedef Outcome<Error, Model::CreateAliasResult> CreateAliasOutcome;
			typedef std::future<CreateAliasOutcome> CreateAliasOutcomeCallable;
			typedef std::function<void(const KmsClient*, const Model::CreateAliasRequest&, const CreateAliasOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateAliasAsyncHandler;
			typedef Outcome<Error, Model::CreateApplicationAccessPointResult> CreateApplicationAccessPointOutcome;
			typedef std::future<CreateApplicationAccessPointOutcome> CreateApplicationAccessPointOutcomeCallable;
			typedef std::function<void(const KmsClient*, const Model::CreateApplicationAccessPointRequest&, const CreateApplicationAccessPointOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateApplicationAccessPointAsyncHandler;
			typedef Outcome<Error, Model::CreateCertificateResult> CreateCertificateOutcome;
			typedef std::future<CreateCertificateOutcome> CreateCertificateOutcomeCallable;
			typedef std::function<void(const KmsClient*, const Model::CreateCertificateRequest&, const CreateCertificateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateCertificateAsyncHandler;
			typedef Outcome<Error, Model::CreateClientKeyResult> CreateClientKeyOutcome;
			typedef std::future<CreateClientKeyOutcome> CreateClientKeyOutcomeCallable;
			typedef std::function<void(const KmsClient*, const Model::CreateClientKeyRequest&, const CreateClientKeyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateClientKeyAsyncHandler;
			typedef Outcome<Error, Model::CreateKeyResult> CreateKeyOutcome;
			typedef std::future<CreateKeyOutcome> CreateKeyOutcomeCallable;
			typedef std::function<void(const KmsClient*, const Model::CreateKeyRequest&, const CreateKeyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateKeyAsyncHandler;
			typedef Outcome<Error, Model::CreateKeyVersionResult> CreateKeyVersionOutcome;
			typedef std::future<CreateKeyVersionOutcome> CreateKeyVersionOutcomeCallable;
			typedef std::function<void(const KmsClient*, const Model::CreateKeyVersionRequest&, const CreateKeyVersionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateKeyVersionAsyncHandler;
			typedef Outcome<Error, Model::CreateNetworkRuleResult> CreateNetworkRuleOutcome;
			typedef std::future<CreateNetworkRuleOutcome> CreateNetworkRuleOutcomeCallable;
			typedef std::function<void(const KmsClient*, const Model::CreateNetworkRuleRequest&, const CreateNetworkRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateNetworkRuleAsyncHandler;
			typedef Outcome<Error, Model::CreatePolicyResult> CreatePolicyOutcome;
			typedef std::future<CreatePolicyOutcome> CreatePolicyOutcomeCallable;
			typedef std::function<void(const KmsClient*, const Model::CreatePolicyRequest&, const CreatePolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreatePolicyAsyncHandler;
			typedef Outcome<Error, Model::CreateSecretResult> CreateSecretOutcome;
			typedef std::future<CreateSecretOutcome> CreateSecretOutcomeCallable;
			typedef std::function<void(const KmsClient*, const Model::CreateSecretRequest&, const CreateSecretOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateSecretAsyncHandler;
			typedef Outcome<Error, Model::DecryptResult> DecryptOutcome;
			typedef std::future<DecryptOutcome> DecryptOutcomeCallable;
			typedef std::function<void(const KmsClient*, const Model::DecryptRequest&, const DecryptOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DecryptAsyncHandler;
			typedef Outcome<Error, Model::DeleteAliasResult> DeleteAliasOutcome;
			typedef std::future<DeleteAliasOutcome> DeleteAliasOutcomeCallable;
			typedef std::function<void(const KmsClient*, const Model::DeleteAliasRequest&, const DeleteAliasOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAliasAsyncHandler;
			typedef Outcome<Error, Model::DeleteApplicationAccessPointResult> DeleteApplicationAccessPointOutcome;
			typedef std::future<DeleteApplicationAccessPointOutcome> DeleteApplicationAccessPointOutcomeCallable;
			typedef std::function<void(const KmsClient*, const Model::DeleteApplicationAccessPointRequest&, const DeleteApplicationAccessPointOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteApplicationAccessPointAsyncHandler;
			typedef Outcome<Error, Model::DeleteCertificateResult> DeleteCertificateOutcome;
			typedef std::future<DeleteCertificateOutcome> DeleteCertificateOutcomeCallable;
			typedef std::function<void(const KmsClient*, const Model::DeleteCertificateRequest&, const DeleteCertificateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCertificateAsyncHandler;
			typedef Outcome<Error, Model::DeleteClientKeyResult> DeleteClientKeyOutcome;
			typedef std::future<DeleteClientKeyOutcome> DeleteClientKeyOutcomeCallable;
			typedef std::function<void(const KmsClient*, const Model::DeleteClientKeyRequest&, const DeleteClientKeyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteClientKeyAsyncHandler;
			typedef Outcome<Error, Model::DeleteKeyMaterialResult> DeleteKeyMaterialOutcome;
			typedef std::future<DeleteKeyMaterialOutcome> DeleteKeyMaterialOutcomeCallable;
			typedef std::function<void(const KmsClient*, const Model::DeleteKeyMaterialRequest&, const DeleteKeyMaterialOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteKeyMaterialAsyncHandler;
			typedef Outcome<Error, Model::DeleteNetworkRuleResult> DeleteNetworkRuleOutcome;
			typedef std::future<DeleteNetworkRuleOutcome> DeleteNetworkRuleOutcomeCallable;
			typedef std::function<void(const KmsClient*, const Model::DeleteNetworkRuleRequest&, const DeleteNetworkRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteNetworkRuleAsyncHandler;
			typedef Outcome<Error, Model::DeletePolicyResult> DeletePolicyOutcome;
			typedef std::future<DeletePolicyOutcome> DeletePolicyOutcomeCallable;
			typedef std::function<void(const KmsClient*, const Model::DeletePolicyRequest&, const DeletePolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeletePolicyAsyncHandler;
			typedef Outcome<Error, Model::DeleteSecretResult> DeleteSecretOutcome;
			typedef std::future<DeleteSecretOutcome> DeleteSecretOutcomeCallable;
			typedef std::function<void(const KmsClient*, const Model::DeleteSecretRequest&, const DeleteSecretOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSecretAsyncHandler;
			typedef Outcome<Error, Model::DescribeAccountKmsStatusResult> DescribeAccountKmsStatusOutcome;
			typedef std::future<DescribeAccountKmsStatusOutcome> DescribeAccountKmsStatusOutcomeCallable;
			typedef std::function<void(const KmsClient*, const Model::DescribeAccountKmsStatusRequest&, const DescribeAccountKmsStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccountKmsStatusAsyncHandler;
			typedef Outcome<Error, Model::DescribeApplicationAccessPointResult> DescribeApplicationAccessPointOutcome;
			typedef std::future<DescribeApplicationAccessPointOutcome> DescribeApplicationAccessPointOutcomeCallable;
			typedef std::function<void(const KmsClient*, const Model::DescribeApplicationAccessPointRequest&, const DescribeApplicationAccessPointOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApplicationAccessPointAsyncHandler;
			typedef Outcome<Error, Model::DescribeCertificateResult> DescribeCertificateOutcome;
			typedef std::future<DescribeCertificateOutcome> DescribeCertificateOutcomeCallable;
			typedef std::function<void(const KmsClient*, const Model::DescribeCertificateRequest&, const DescribeCertificateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCertificateAsyncHandler;
			typedef Outcome<Error, Model::DescribeKeyResult> DescribeKeyOutcome;
			typedef std::future<DescribeKeyOutcome> DescribeKeyOutcomeCallable;
			typedef std::function<void(const KmsClient*, const Model::DescribeKeyRequest&, const DescribeKeyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeKeyAsyncHandler;
			typedef Outcome<Error, Model::DescribeKeyVersionResult> DescribeKeyVersionOutcome;
			typedef std::future<DescribeKeyVersionOutcome> DescribeKeyVersionOutcomeCallable;
			typedef std::function<void(const KmsClient*, const Model::DescribeKeyVersionRequest&, const DescribeKeyVersionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeKeyVersionAsyncHandler;
			typedef Outcome<Error, Model::DescribeNetworkRuleResult> DescribeNetworkRuleOutcome;
			typedef std::future<DescribeNetworkRuleOutcome> DescribeNetworkRuleOutcomeCallable;
			typedef std::function<void(const KmsClient*, const Model::DescribeNetworkRuleRequest&, const DescribeNetworkRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNetworkRuleAsyncHandler;
			typedef Outcome<Error, Model::DescribePolicyResult> DescribePolicyOutcome;
			typedef std::future<DescribePolicyOutcome> DescribePolicyOutcomeCallable;
			typedef std::function<void(const KmsClient*, const Model::DescribePolicyRequest&, const DescribePolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribePolicyAsyncHandler;
			typedef Outcome<Error, Model::DescribeRegionsResult> DescribeRegionsOutcome;
			typedef std::future<DescribeRegionsOutcome> DescribeRegionsOutcomeCallable;
			typedef std::function<void(const KmsClient*, const Model::DescribeRegionsRequest&, const DescribeRegionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRegionsAsyncHandler;
			typedef Outcome<Error, Model::DescribeSecretResult> DescribeSecretOutcome;
			typedef std::future<DescribeSecretOutcome> DescribeSecretOutcomeCallable;
			typedef std::function<void(const KmsClient*, const Model::DescribeSecretRequest&, const DescribeSecretOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSecretAsyncHandler;
			typedef Outcome<Error, Model::DisableKeyResult> DisableKeyOutcome;
			typedef std::future<DisableKeyOutcome> DisableKeyOutcomeCallable;
			typedef std::function<void(const KmsClient*, const Model::DisableKeyRequest&, const DisableKeyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DisableKeyAsyncHandler;
			typedef Outcome<Error, Model::EnableKeyResult> EnableKeyOutcome;
			typedef std::future<EnableKeyOutcome> EnableKeyOutcomeCallable;
			typedef std::function<void(const KmsClient*, const Model::EnableKeyRequest&, const EnableKeyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EnableKeyAsyncHandler;
			typedef Outcome<Error, Model::EncryptResult> EncryptOutcome;
			typedef std::future<EncryptOutcome> EncryptOutcomeCallable;
			typedef std::function<void(const KmsClient*, const Model::EncryptRequest&, const EncryptOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EncryptAsyncHandler;
			typedef Outcome<Error, Model::ExportDataKeyResult> ExportDataKeyOutcome;
			typedef std::future<ExportDataKeyOutcome> ExportDataKeyOutcomeCallable;
			typedef std::function<void(const KmsClient*, const Model::ExportDataKeyRequest&, const ExportDataKeyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ExportDataKeyAsyncHandler;
			typedef Outcome<Error, Model::GenerateAndExportDataKeyResult> GenerateAndExportDataKeyOutcome;
			typedef std::future<GenerateAndExportDataKeyOutcome> GenerateAndExportDataKeyOutcomeCallable;
			typedef std::function<void(const KmsClient*, const Model::GenerateAndExportDataKeyRequest&, const GenerateAndExportDataKeyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GenerateAndExportDataKeyAsyncHandler;
			typedef Outcome<Error, Model::GenerateDataKeyResult> GenerateDataKeyOutcome;
			typedef std::future<GenerateDataKeyOutcome> GenerateDataKeyOutcomeCallable;
			typedef std::function<void(const KmsClient*, const Model::GenerateDataKeyRequest&, const GenerateDataKeyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GenerateDataKeyAsyncHandler;
			typedef Outcome<Error, Model::GenerateDataKeyWithoutPlaintextResult> GenerateDataKeyWithoutPlaintextOutcome;
			typedef std::future<GenerateDataKeyWithoutPlaintextOutcome> GenerateDataKeyWithoutPlaintextOutcomeCallable;
			typedef std::function<void(const KmsClient*, const Model::GenerateDataKeyWithoutPlaintextRequest&, const GenerateDataKeyWithoutPlaintextOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GenerateDataKeyWithoutPlaintextAsyncHandler;
			typedef Outcome<Error, Model::GetCertificateResult> GetCertificateOutcome;
			typedef std::future<GetCertificateOutcome> GetCertificateOutcomeCallable;
			typedef std::function<void(const KmsClient*, const Model::GetCertificateRequest&, const GetCertificateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetCertificateAsyncHandler;
			typedef Outcome<Error, Model::GetClientKeyResult> GetClientKeyOutcome;
			typedef std::future<GetClientKeyOutcome> GetClientKeyOutcomeCallable;
			typedef std::function<void(const KmsClient*, const Model::GetClientKeyRequest&, const GetClientKeyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetClientKeyAsyncHandler;
			typedef Outcome<Error, Model::GetKeyPolicyResult> GetKeyPolicyOutcome;
			typedef std::future<GetKeyPolicyOutcome> GetKeyPolicyOutcomeCallable;
			typedef std::function<void(const KmsClient*, const Model::GetKeyPolicyRequest&, const GetKeyPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetKeyPolicyAsyncHandler;
			typedef Outcome<Error, Model::GetKmsInstanceResult> GetKmsInstanceOutcome;
			typedef std::future<GetKmsInstanceOutcome> GetKmsInstanceOutcomeCallable;
			typedef std::function<void(const KmsClient*, const Model::GetKmsInstanceRequest&, const GetKmsInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetKmsInstanceAsyncHandler;
			typedef Outcome<Error, Model::GetParametersForImportResult> GetParametersForImportOutcome;
			typedef std::future<GetParametersForImportOutcome> GetParametersForImportOutcomeCallable;
			typedef std::function<void(const KmsClient*, const Model::GetParametersForImportRequest&, const GetParametersForImportOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetParametersForImportAsyncHandler;
			typedef Outcome<Error, Model::GetPublicKeyResult> GetPublicKeyOutcome;
			typedef std::future<GetPublicKeyOutcome> GetPublicKeyOutcomeCallable;
			typedef std::function<void(const KmsClient*, const Model::GetPublicKeyRequest&, const GetPublicKeyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetPublicKeyAsyncHandler;
			typedef Outcome<Error, Model::GetRandomPasswordResult> GetRandomPasswordOutcome;
			typedef std::future<GetRandomPasswordOutcome> GetRandomPasswordOutcomeCallable;
			typedef std::function<void(const KmsClient*, const Model::GetRandomPasswordRequest&, const GetRandomPasswordOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetRandomPasswordAsyncHandler;
			typedef Outcome<Error, Model::GetSecretPolicyResult> GetSecretPolicyOutcome;
			typedef std::future<GetSecretPolicyOutcome> GetSecretPolicyOutcomeCallable;
			typedef std::function<void(const KmsClient*, const Model::GetSecretPolicyRequest&, const GetSecretPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetSecretPolicyAsyncHandler;
			typedef Outcome<Error, Model::GetSecretValueResult> GetSecretValueOutcome;
			typedef std::future<GetSecretValueOutcome> GetSecretValueOutcomeCallable;
			typedef std::function<void(const KmsClient*, const Model::GetSecretValueRequest&, const GetSecretValueOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetSecretValueAsyncHandler;
			typedef Outcome<Error, Model::ImportKeyMaterialResult> ImportKeyMaterialOutcome;
			typedef std::future<ImportKeyMaterialOutcome> ImportKeyMaterialOutcomeCallable;
			typedef std::function<void(const KmsClient*, const Model::ImportKeyMaterialRequest&, const ImportKeyMaterialOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ImportKeyMaterialAsyncHandler;
			typedef Outcome<Error, Model::ListAliasesResult> ListAliasesOutcome;
			typedef std::future<ListAliasesOutcome> ListAliasesOutcomeCallable;
			typedef std::function<void(const KmsClient*, const Model::ListAliasesRequest&, const ListAliasesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAliasesAsyncHandler;
			typedef Outcome<Error, Model::ListAliasesByKeyIdResult> ListAliasesByKeyIdOutcome;
			typedef std::future<ListAliasesByKeyIdOutcome> ListAliasesByKeyIdOutcomeCallable;
			typedef std::function<void(const KmsClient*, const Model::ListAliasesByKeyIdRequest&, const ListAliasesByKeyIdOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAliasesByKeyIdAsyncHandler;
			typedef Outcome<Error, Model::ListApplicationAccessPointsResult> ListApplicationAccessPointsOutcome;
			typedef std::future<ListApplicationAccessPointsOutcome> ListApplicationAccessPointsOutcomeCallable;
			typedef std::function<void(const KmsClient*, const Model::ListApplicationAccessPointsRequest&, const ListApplicationAccessPointsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListApplicationAccessPointsAsyncHandler;
			typedef Outcome<Error, Model::ListClientKeysResult> ListClientKeysOutcome;
			typedef std::future<ListClientKeysOutcome> ListClientKeysOutcomeCallable;
			typedef std::function<void(const KmsClient*, const Model::ListClientKeysRequest&, const ListClientKeysOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListClientKeysAsyncHandler;
			typedef Outcome<Error, Model::ListKeyVersionsResult> ListKeyVersionsOutcome;
			typedef std::future<ListKeyVersionsOutcome> ListKeyVersionsOutcomeCallable;
			typedef std::function<void(const KmsClient*, const Model::ListKeyVersionsRequest&, const ListKeyVersionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListKeyVersionsAsyncHandler;
			typedef Outcome<Error, Model::ListKeysResult> ListKeysOutcome;
			typedef std::future<ListKeysOutcome> ListKeysOutcomeCallable;
			typedef std::function<void(const KmsClient*, const Model::ListKeysRequest&, const ListKeysOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListKeysAsyncHandler;
			typedef Outcome<Error, Model::ListKmsInstancesResult> ListKmsInstancesOutcome;
			typedef std::future<ListKmsInstancesOutcome> ListKmsInstancesOutcomeCallable;
			typedef std::function<void(const KmsClient*, const Model::ListKmsInstancesRequest&, const ListKmsInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListKmsInstancesAsyncHandler;
			typedef Outcome<Error, Model::ListNetworkRulesResult> ListNetworkRulesOutcome;
			typedef std::future<ListNetworkRulesOutcome> ListNetworkRulesOutcomeCallable;
			typedef std::function<void(const KmsClient*, const Model::ListNetworkRulesRequest&, const ListNetworkRulesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListNetworkRulesAsyncHandler;
			typedef Outcome<Error, Model::ListPoliciesResult> ListPoliciesOutcome;
			typedef std::future<ListPoliciesOutcome> ListPoliciesOutcomeCallable;
			typedef std::function<void(const KmsClient*, const Model::ListPoliciesRequest&, const ListPoliciesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListPoliciesAsyncHandler;
			typedef Outcome<Error, Model::ListResourceTagsResult> ListResourceTagsOutcome;
			typedef std::future<ListResourceTagsOutcome> ListResourceTagsOutcomeCallable;
			typedef std::function<void(const KmsClient*, const Model::ListResourceTagsRequest&, const ListResourceTagsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListResourceTagsAsyncHandler;
			typedef Outcome<Error, Model::ListSecretVersionIdsResult> ListSecretVersionIdsOutcome;
			typedef std::future<ListSecretVersionIdsOutcome> ListSecretVersionIdsOutcomeCallable;
			typedef std::function<void(const KmsClient*, const Model::ListSecretVersionIdsRequest&, const ListSecretVersionIdsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListSecretVersionIdsAsyncHandler;
			typedef Outcome<Error, Model::ListSecretsResult> ListSecretsOutcome;
			typedef std::future<ListSecretsOutcome> ListSecretsOutcomeCallable;
			typedef std::function<void(const KmsClient*, const Model::ListSecretsRequest&, const ListSecretsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListSecretsAsyncHandler;
			typedef Outcome<Error, Model::ListTagResourcesResult> ListTagResourcesOutcome;
			typedef std::future<ListTagResourcesOutcome> ListTagResourcesOutcomeCallable;
			typedef std::function<void(const KmsClient*, const Model::ListTagResourcesRequest&, const ListTagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTagResourcesAsyncHandler;
			typedef Outcome<Error, Model::OpenKmsServiceResult> OpenKmsServiceOutcome;
			typedef std::future<OpenKmsServiceOutcome> OpenKmsServiceOutcomeCallable;
			typedef std::function<void(const KmsClient*, const Model::OpenKmsServiceRequest&, const OpenKmsServiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OpenKmsServiceAsyncHandler;
			typedef Outcome<Error, Model::PutSecretValueResult> PutSecretValueOutcome;
			typedef std::future<PutSecretValueOutcome> PutSecretValueOutcomeCallable;
			typedef std::function<void(const KmsClient*, const Model::PutSecretValueRequest&, const PutSecretValueOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PutSecretValueAsyncHandler;
			typedef Outcome<Error, Model::ReEncryptResult> ReEncryptOutcome;
			typedef std::future<ReEncryptOutcome> ReEncryptOutcomeCallable;
			typedef std::function<void(const KmsClient*, const Model::ReEncryptRequest&, const ReEncryptOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ReEncryptAsyncHandler;
			typedef Outcome<Error, Model::RestoreSecretResult> RestoreSecretOutcome;
			typedef std::future<RestoreSecretOutcome> RestoreSecretOutcomeCallable;
			typedef std::function<void(const KmsClient*, const Model::RestoreSecretRequest&, const RestoreSecretOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RestoreSecretAsyncHandler;
			typedef Outcome<Error, Model::RotateSecretResult> RotateSecretOutcome;
			typedef std::future<RotateSecretOutcome> RotateSecretOutcomeCallable;
			typedef std::function<void(const KmsClient*, const Model::RotateSecretRequest&, const RotateSecretOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RotateSecretAsyncHandler;
			typedef Outcome<Error, Model::ScheduleKeyDeletionResult> ScheduleKeyDeletionOutcome;
			typedef std::future<ScheduleKeyDeletionOutcome> ScheduleKeyDeletionOutcomeCallable;
			typedef std::function<void(const KmsClient*, const Model::ScheduleKeyDeletionRequest&, const ScheduleKeyDeletionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ScheduleKeyDeletionAsyncHandler;
			typedef Outcome<Error, Model::SetDeletionProtectionResult> SetDeletionProtectionOutcome;
			typedef std::future<SetDeletionProtectionOutcome> SetDeletionProtectionOutcomeCallable;
			typedef std::function<void(const KmsClient*, const Model::SetDeletionProtectionRequest&, const SetDeletionProtectionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetDeletionProtectionAsyncHandler;
			typedef Outcome<Error, Model::SetKeyPolicyResult> SetKeyPolicyOutcome;
			typedef std::future<SetKeyPolicyOutcome> SetKeyPolicyOutcomeCallable;
			typedef std::function<void(const KmsClient*, const Model::SetKeyPolicyRequest&, const SetKeyPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetKeyPolicyAsyncHandler;
			typedef Outcome<Error, Model::SetSecretPolicyResult> SetSecretPolicyOutcome;
			typedef std::future<SetSecretPolicyOutcome> SetSecretPolicyOutcomeCallable;
			typedef std::function<void(const KmsClient*, const Model::SetSecretPolicyRequest&, const SetSecretPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetSecretPolicyAsyncHandler;
			typedef Outcome<Error, Model::TagResourceResult> TagResourceOutcome;
			typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
			typedef std::function<void(const KmsClient*, const Model::TagResourceRequest&, const TagResourceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TagResourceAsyncHandler;
			typedef Outcome<Error, Model::TagResourcesResult> TagResourcesOutcome;
			typedef std::future<TagResourcesOutcome> TagResourcesOutcomeCallable;
			typedef std::function<void(const KmsClient*, const Model::TagResourcesRequest&, const TagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TagResourcesAsyncHandler;
			typedef Outcome<Error, Model::UntagResourceResult> UntagResourceOutcome;
			typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
			typedef std::function<void(const KmsClient*, const Model::UntagResourceRequest&, const UntagResourceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UntagResourceAsyncHandler;
			typedef Outcome<Error, Model::UntagResourcesResult> UntagResourcesOutcome;
			typedef std::future<UntagResourcesOutcome> UntagResourcesOutcomeCallable;
			typedef std::function<void(const KmsClient*, const Model::UntagResourcesRequest&, const UntagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UntagResourcesAsyncHandler;
			typedef Outcome<Error, Model::UpdateAliasResult> UpdateAliasOutcome;
			typedef std::future<UpdateAliasOutcome> UpdateAliasOutcomeCallable;
			typedef std::function<void(const KmsClient*, const Model::UpdateAliasRequest&, const UpdateAliasOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateAliasAsyncHandler;
			typedef Outcome<Error, Model::UpdateApplicationAccessPointResult> UpdateApplicationAccessPointOutcome;
			typedef std::future<UpdateApplicationAccessPointOutcome> UpdateApplicationAccessPointOutcomeCallable;
			typedef std::function<void(const KmsClient*, const Model::UpdateApplicationAccessPointRequest&, const UpdateApplicationAccessPointOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateApplicationAccessPointAsyncHandler;
			typedef Outcome<Error, Model::UpdateCertificateStatusResult> UpdateCertificateStatusOutcome;
			typedef std::future<UpdateCertificateStatusOutcome> UpdateCertificateStatusOutcomeCallable;
			typedef std::function<void(const KmsClient*, const Model::UpdateCertificateStatusRequest&, const UpdateCertificateStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateCertificateStatusAsyncHandler;
			typedef Outcome<Error, Model::UpdateKeyDescriptionResult> UpdateKeyDescriptionOutcome;
			typedef std::future<UpdateKeyDescriptionOutcome> UpdateKeyDescriptionOutcomeCallable;
			typedef std::function<void(const KmsClient*, const Model::UpdateKeyDescriptionRequest&, const UpdateKeyDescriptionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateKeyDescriptionAsyncHandler;
			typedef Outcome<Error, Model::UpdateKmsInstanceBindVpcResult> UpdateKmsInstanceBindVpcOutcome;
			typedef std::future<UpdateKmsInstanceBindVpcOutcome> UpdateKmsInstanceBindVpcOutcomeCallable;
			typedef std::function<void(const KmsClient*, const Model::UpdateKmsInstanceBindVpcRequest&, const UpdateKmsInstanceBindVpcOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateKmsInstanceBindVpcAsyncHandler;
			typedef Outcome<Error, Model::UpdateNetworkRuleResult> UpdateNetworkRuleOutcome;
			typedef std::future<UpdateNetworkRuleOutcome> UpdateNetworkRuleOutcomeCallable;
			typedef std::function<void(const KmsClient*, const Model::UpdateNetworkRuleRequest&, const UpdateNetworkRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateNetworkRuleAsyncHandler;
			typedef Outcome<Error, Model::UpdatePolicyResult> UpdatePolicyOutcome;
			typedef std::future<UpdatePolicyOutcome> UpdatePolicyOutcomeCallable;
			typedef std::function<void(const KmsClient*, const Model::UpdatePolicyRequest&, const UpdatePolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdatePolicyAsyncHandler;
			typedef Outcome<Error, Model::UpdateRotationPolicyResult> UpdateRotationPolicyOutcome;
			typedef std::future<UpdateRotationPolicyOutcome> UpdateRotationPolicyOutcomeCallable;
			typedef std::function<void(const KmsClient*, const Model::UpdateRotationPolicyRequest&, const UpdateRotationPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateRotationPolicyAsyncHandler;
			typedef Outcome<Error, Model::UpdateSecretResult> UpdateSecretOutcome;
			typedef std::future<UpdateSecretOutcome> UpdateSecretOutcomeCallable;
			typedef std::function<void(const KmsClient*, const Model::UpdateSecretRequest&, const UpdateSecretOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateSecretAsyncHandler;
			typedef Outcome<Error, Model::UpdateSecretRotationPolicyResult> UpdateSecretRotationPolicyOutcome;
			typedef std::future<UpdateSecretRotationPolicyOutcome> UpdateSecretRotationPolicyOutcomeCallable;
			typedef std::function<void(const KmsClient*, const Model::UpdateSecretRotationPolicyRequest&, const UpdateSecretRotationPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateSecretRotationPolicyAsyncHandler;
			typedef Outcome<Error, Model::UpdateSecretVersionStageResult> UpdateSecretVersionStageOutcome;
			typedef std::future<UpdateSecretVersionStageOutcome> UpdateSecretVersionStageOutcomeCallable;
			typedef std::function<void(const KmsClient*, const Model::UpdateSecretVersionStageRequest&, const UpdateSecretVersionStageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateSecretVersionStageAsyncHandler;
			typedef Outcome<Error, Model::UploadCertificateResult> UploadCertificateOutcome;
			typedef std::future<UploadCertificateOutcome> UploadCertificateOutcomeCallable;
			typedef std::function<void(const KmsClient*, const Model::UploadCertificateRequest&, const UploadCertificateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UploadCertificateAsyncHandler;

			KmsClient(const Credentials &credentials, const ClientConfiguration &configuration);
			KmsClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			KmsClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~KmsClient();
			AdvanceEncryptOutcome advanceEncrypt(const Model::AdvanceEncryptRequest &request)const;
			void advanceEncryptAsync(const Model::AdvanceEncryptRequest& request, const AdvanceEncryptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AdvanceEncryptOutcomeCallable advanceEncryptCallable(const Model::AdvanceEncryptRequest& request) const;
			AsymmetricDecryptOutcome asymmetricDecrypt(const Model::AsymmetricDecryptRequest &request)const;
			void asymmetricDecryptAsync(const Model::AsymmetricDecryptRequest& request, const AsymmetricDecryptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AsymmetricDecryptOutcomeCallable asymmetricDecryptCallable(const Model::AsymmetricDecryptRequest& request) const;
			AsymmetricEncryptOutcome asymmetricEncrypt(const Model::AsymmetricEncryptRequest &request)const;
			void asymmetricEncryptAsync(const Model::AsymmetricEncryptRequest& request, const AsymmetricEncryptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AsymmetricEncryptOutcomeCallable asymmetricEncryptCallable(const Model::AsymmetricEncryptRequest& request) const;
			AsymmetricSignOutcome asymmetricSign(const Model::AsymmetricSignRequest &request)const;
			void asymmetricSignAsync(const Model::AsymmetricSignRequest& request, const AsymmetricSignAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AsymmetricSignOutcomeCallable asymmetricSignCallable(const Model::AsymmetricSignRequest& request) const;
			AsymmetricVerifyOutcome asymmetricVerify(const Model::AsymmetricVerifyRequest &request)const;
			void asymmetricVerifyAsync(const Model::AsymmetricVerifyRequest& request, const AsymmetricVerifyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AsymmetricVerifyOutcomeCallable asymmetricVerifyCallable(const Model::AsymmetricVerifyRequest& request) const;
			CancelKeyDeletionOutcome cancelKeyDeletion(const Model::CancelKeyDeletionRequest &request)const;
			void cancelKeyDeletionAsync(const Model::CancelKeyDeletionRequest& request, const CancelKeyDeletionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CancelKeyDeletionOutcomeCallable cancelKeyDeletionCallable(const Model::CancelKeyDeletionRequest& request) const;
			CertificatePrivateKeyDecryptOutcome certificatePrivateKeyDecrypt(const Model::CertificatePrivateKeyDecryptRequest &request)const;
			void certificatePrivateKeyDecryptAsync(const Model::CertificatePrivateKeyDecryptRequest& request, const CertificatePrivateKeyDecryptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CertificatePrivateKeyDecryptOutcomeCallable certificatePrivateKeyDecryptCallable(const Model::CertificatePrivateKeyDecryptRequest& request) const;
			CertificatePrivateKeySignOutcome certificatePrivateKeySign(const Model::CertificatePrivateKeySignRequest &request)const;
			void certificatePrivateKeySignAsync(const Model::CertificatePrivateKeySignRequest& request, const CertificatePrivateKeySignAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CertificatePrivateKeySignOutcomeCallable certificatePrivateKeySignCallable(const Model::CertificatePrivateKeySignRequest& request) const;
			CertificatePublicKeyEncryptOutcome certificatePublicKeyEncrypt(const Model::CertificatePublicKeyEncryptRequest &request)const;
			void certificatePublicKeyEncryptAsync(const Model::CertificatePublicKeyEncryptRequest& request, const CertificatePublicKeyEncryptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CertificatePublicKeyEncryptOutcomeCallable certificatePublicKeyEncryptCallable(const Model::CertificatePublicKeyEncryptRequest& request) const;
			CertificatePublicKeyVerifyOutcome certificatePublicKeyVerify(const Model::CertificatePublicKeyVerifyRequest &request)const;
			void certificatePublicKeyVerifyAsync(const Model::CertificatePublicKeyVerifyRequest& request, const CertificatePublicKeyVerifyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CertificatePublicKeyVerifyOutcomeCallable certificatePublicKeyVerifyCallable(const Model::CertificatePublicKeyVerifyRequest& request) const;
			ConnectKmsInstanceOutcome connectKmsInstance(const Model::ConnectKmsInstanceRequest &request)const;
			void connectKmsInstanceAsync(const Model::ConnectKmsInstanceRequest& request, const ConnectKmsInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ConnectKmsInstanceOutcomeCallable connectKmsInstanceCallable(const Model::ConnectKmsInstanceRequest& request) const;
			CreateAliasOutcome createAlias(const Model::CreateAliasRequest &request)const;
			void createAliasAsync(const Model::CreateAliasRequest& request, const CreateAliasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateAliasOutcomeCallable createAliasCallable(const Model::CreateAliasRequest& request) const;
			CreateApplicationAccessPointOutcome createApplicationAccessPoint(const Model::CreateApplicationAccessPointRequest &request)const;
			void createApplicationAccessPointAsync(const Model::CreateApplicationAccessPointRequest& request, const CreateApplicationAccessPointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateApplicationAccessPointOutcomeCallable createApplicationAccessPointCallable(const Model::CreateApplicationAccessPointRequest& request) const;
			CreateCertificateOutcome createCertificate(const Model::CreateCertificateRequest &request)const;
			void createCertificateAsync(const Model::CreateCertificateRequest& request, const CreateCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateCertificateOutcomeCallable createCertificateCallable(const Model::CreateCertificateRequest& request) const;
			CreateClientKeyOutcome createClientKey(const Model::CreateClientKeyRequest &request)const;
			void createClientKeyAsync(const Model::CreateClientKeyRequest& request, const CreateClientKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateClientKeyOutcomeCallable createClientKeyCallable(const Model::CreateClientKeyRequest& request) const;
			CreateKeyOutcome createKey(const Model::CreateKeyRequest &request)const;
			void createKeyAsync(const Model::CreateKeyRequest& request, const CreateKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateKeyOutcomeCallable createKeyCallable(const Model::CreateKeyRequest& request) const;
			CreateKeyVersionOutcome createKeyVersion(const Model::CreateKeyVersionRequest &request)const;
			void createKeyVersionAsync(const Model::CreateKeyVersionRequest& request, const CreateKeyVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateKeyVersionOutcomeCallable createKeyVersionCallable(const Model::CreateKeyVersionRequest& request) const;
			CreateNetworkRuleOutcome createNetworkRule(const Model::CreateNetworkRuleRequest &request)const;
			void createNetworkRuleAsync(const Model::CreateNetworkRuleRequest& request, const CreateNetworkRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateNetworkRuleOutcomeCallable createNetworkRuleCallable(const Model::CreateNetworkRuleRequest& request) const;
			CreatePolicyOutcome createPolicy(const Model::CreatePolicyRequest &request)const;
			void createPolicyAsync(const Model::CreatePolicyRequest& request, const CreatePolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreatePolicyOutcomeCallable createPolicyCallable(const Model::CreatePolicyRequest& request) const;
			CreateSecretOutcome createSecret(const Model::CreateSecretRequest &request)const;
			void createSecretAsync(const Model::CreateSecretRequest& request, const CreateSecretAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateSecretOutcomeCallable createSecretCallable(const Model::CreateSecretRequest& request) const;
			DecryptOutcome decrypt(const Model::DecryptRequest &request)const;
			void decryptAsync(const Model::DecryptRequest& request, const DecryptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DecryptOutcomeCallable decryptCallable(const Model::DecryptRequest& request) const;
			DeleteAliasOutcome deleteAlias(const Model::DeleteAliasRequest &request)const;
			void deleteAliasAsync(const Model::DeleteAliasRequest& request, const DeleteAliasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteAliasOutcomeCallable deleteAliasCallable(const Model::DeleteAliasRequest& request) const;
			DeleteApplicationAccessPointOutcome deleteApplicationAccessPoint(const Model::DeleteApplicationAccessPointRequest &request)const;
			void deleteApplicationAccessPointAsync(const Model::DeleteApplicationAccessPointRequest& request, const DeleteApplicationAccessPointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteApplicationAccessPointOutcomeCallable deleteApplicationAccessPointCallable(const Model::DeleteApplicationAccessPointRequest& request) const;
			DeleteCertificateOutcome deleteCertificate(const Model::DeleteCertificateRequest &request)const;
			void deleteCertificateAsync(const Model::DeleteCertificateRequest& request, const DeleteCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteCertificateOutcomeCallable deleteCertificateCallable(const Model::DeleteCertificateRequest& request) const;
			DeleteClientKeyOutcome deleteClientKey(const Model::DeleteClientKeyRequest &request)const;
			void deleteClientKeyAsync(const Model::DeleteClientKeyRequest& request, const DeleteClientKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteClientKeyOutcomeCallable deleteClientKeyCallable(const Model::DeleteClientKeyRequest& request) const;
			DeleteKeyMaterialOutcome deleteKeyMaterial(const Model::DeleteKeyMaterialRequest &request)const;
			void deleteKeyMaterialAsync(const Model::DeleteKeyMaterialRequest& request, const DeleteKeyMaterialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteKeyMaterialOutcomeCallable deleteKeyMaterialCallable(const Model::DeleteKeyMaterialRequest& request) const;
			DeleteNetworkRuleOutcome deleteNetworkRule(const Model::DeleteNetworkRuleRequest &request)const;
			void deleteNetworkRuleAsync(const Model::DeleteNetworkRuleRequest& request, const DeleteNetworkRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteNetworkRuleOutcomeCallable deleteNetworkRuleCallable(const Model::DeleteNetworkRuleRequest& request) const;
			DeletePolicyOutcome deletePolicy(const Model::DeletePolicyRequest &request)const;
			void deletePolicyAsync(const Model::DeletePolicyRequest& request, const DeletePolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeletePolicyOutcomeCallable deletePolicyCallable(const Model::DeletePolicyRequest& request) const;
			DeleteSecretOutcome deleteSecret(const Model::DeleteSecretRequest &request)const;
			void deleteSecretAsync(const Model::DeleteSecretRequest& request, const DeleteSecretAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteSecretOutcomeCallable deleteSecretCallable(const Model::DeleteSecretRequest& request) const;
			DescribeAccountKmsStatusOutcome describeAccountKmsStatus(const Model::DescribeAccountKmsStatusRequest &request)const;
			void describeAccountKmsStatusAsync(const Model::DescribeAccountKmsStatusRequest& request, const DescribeAccountKmsStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAccountKmsStatusOutcomeCallable describeAccountKmsStatusCallable(const Model::DescribeAccountKmsStatusRequest& request) const;
			DescribeApplicationAccessPointOutcome describeApplicationAccessPoint(const Model::DescribeApplicationAccessPointRequest &request)const;
			void describeApplicationAccessPointAsync(const Model::DescribeApplicationAccessPointRequest& request, const DescribeApplicationAccessPointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeApplicationAccessPointOutcomeCallable describeApplicationAccessPointCallable(const Model::DescribeApplicationAccessPointRequest& request) const;
			DescribeCertificateOutcome describeCertificate(const Model::DescribeCertificateRequest &request)const;
			void describeCertificateAsync(const Model::DescribeCertificateRequest& request, const DescribeCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCertificateOutcomeCallable describeCertificateCallable(const Model::DescribeCertificateRequest& request) const;
			DescribeKeyOutcome describeKey(const Model::DescribeKeyRequest &request)const;
			void describeKeyAsync(const Model::DescribeKeyRequest& request, const DescribeKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeKeyOutcomeCallable describeKeyCallable(const Model::DescribeKeyRequest& request) const;
			DescribeKeyVersionOutcome describeKeyVersion(const Model::DescribeKeyVersionRequest &request)const;
			void describeKeyVersionAsync(const Model::DescribeKeyVersionRequest& request, const DescribeKeyVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeKeyVersionOutcomeCallable describeKeyVersionCallable(const Model::DescribeKeyVersionRequest& request) const;
			DescribeNetworkRuleOutcome describeNetworkRule(const Model::DescribeNetworkRuleRequest &request)const;
			void describeNetworkRuleAsync(const Model::DescribeNetworkRuleRequest& request, const DescribeNetworkRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeNetworkRuleOutcomeCallable describeNetworkRuleCallable(const Model::DescribeNetworkRuleRequest& request) const;
			DescribePolicyOutcome describePolicy(const Model::DescribePolicyRequest &request)const;
			void describePolicyAsync(const Model::DescribePolicyRequest& request, const DescribePolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribePolicyOutcomeCallable describePolicyCallable(const Model::DescribePolicyRequest& request) const;
			DescribeRegionsOutcome describeRegions(const Model::DescribeRegionsRequest &request)const;
			void describeRegionsAsync(const Model::DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRegionsOutcomeCallable describeRegionsCallable(const Model::DescribeRegionsRequest& request) const;
			DescribeSecretOutcome describeSecret(const Model::DescribeSecretRequest &request)const;
			void describeSecretAsync(const Model::DescribeSecretRequest& request, const DescribeSecretAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSecretOutcomeCallable describeSecretCallable(const Model::DescribeSecretRequest& request) const;
			DisableKeyOutcome disableKey(const Model::DisableKeyRequest &request)const;
			void disableKeyAsync(const Model::DisableKeyRequest& request, const DisableKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DisableKeyOutcomeCallable disableKeyCallable(const Model::DisableKeyRequest& request) const;
			EnableKeyOutcome enableKey(const Model::EnableKeyRequest &request)const;
			void enableKeyAsync(const Model::EnableKeyRequest& request, const EnableKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EnableKeyOutcomeCallable enableKeyCallable(const Model::EnableKeyRequest& request) const;
			EncryptOutcome encrypt(const Model::EncryptRequest &request)const;
			void encryptAsync(const Model::EncryptRequest& request, const EncryptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EncryptOutcomeCallable encryptCallable(const Model::EncryptRequest& request) const;
			ExportDataKeyOutcome exportDataKey(const Model::ExportDataKeyRequest &request)const;
			void exportDataKeyAsync(const Model::ExportDataKeyRequest& request, const ExportDataKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ExportDataKeyOutcomeCallable exportDataKeyCallable(const Model::ExportDataKeyRequest& request) const;
			GenerateAndExportDataKeyOutcome generateAndExportDataKey(const Model::GenerateAndExportDataKeyRequest &request)const;
			void generateAndExportDataKeyAsync(const Model::GenerateAndExportDataKeyRequest& request, const GenerateAndExportDataKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GenerateAndExportDataKeyOutcomeCallable generateAndExportDataKeyCallable(const Model::GenerateAndExportDataKeyRequest& request) const;
			GenerateDataKeyOutcome generateDataKey(const Model::GenerateDataKeyRequest &request)const;
			void generateDataKeyAsync(const Model::GenerateDataKeyRequest& request, const GenerateDataKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GenerateDataKeyOutcomeCallable generateDataKeyCallable(const Model::GenerateDataKeyRequest& request) const;
			GenerateDataKeyWithoutPlaintextOutcome generateDataKeyWithoutPlaintext(const Model::GenerateDataKeyWithoutPlaintextRequest &request)const;
			void generateDataKeyWithoutPlaintextAsync(const Model::GenerateDataKeyWithoutPlaintextRequest& request, const GenerateDataKeyWithoutPlaintextAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GenerateDataKeyWithoutPlaintextOutcomeCallable generateDataKeyWithoutPlaintextCallable(const Model::GenerateDataKeyWithoutPlaintextRequest& request) const;
			GetCertificateOutcome getCertificate(const Model::GetCertificateRequest &request)const;
			void getCertificateAsync(const Model::GetCertificateRequest& request, const GetCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetCertificateOutcomeCallable getCertificateCallable(const Model::GetCertificateRequest& request) const;
			GetClientKeyOutcome getClientKey(const Model::GetClientKeyRequest &request)const;
			void getClientKeyAsync(const Model::GetClientKeyRequest& request, const GetClientKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetClientKeyOutcomeCallable getClientKeyCallable(const Model::GetClientKeyRequest& request) const;
			GetKeyPolicyOutcome getKeyPolicy(const Model::GetKeyPolicyRequest &request)const;
			void getKeyPolicyAsync(const Model::GetKeyPolicyRequest& request, const GetKeyPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetKeyPolicyOutcomeCallable getKeyPolicyCallable(const Model::GetKeyPolicyRequest& request) const;
			GetKmsInstanceOutcome getKmsInstance(const Model::GetKmsInstanceRequest &request)const;
			void getKmsInstanceAsync(const Model::GetKmsInstanceRequest& request, const GetKmsInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetKmsInstanceOutcomeCallable getKmsInstanceCallable(const Model::GetKmsInstanceRequest& request) const;
			GetParametersForImportOutcome getParametersForImport(const Model::GetParametersForImportRequest &request)const;
			void getParametersForImportAsync(const Model::GetParametersForImportRequest& request, const GetParametersForImportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetParametersForImportOutcomeCallable getParametersForImportCallable(const Model::GetParametersForImportRequest& request) const;
			GetPublicKeyOutcome getPublicKey(const Model::GetPublicKeyRequest &request)const;
			void getPublicKeyAsync(const Model::GetPublicKeyRequest& request, const GetPublicKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetPublicKeyOutcomeCallable getPublicKeyCallable(const Model::GetPublicKeyRequest& request) const;
			GetRandomPasswordOutcome getRandomPassword(const Model::GetRandomPasswordRequest &request)const;
			void getRandomPasswordAsync(const Model::GetRandomPasswordRequest& request, const GetRandomPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetRandomPasswordOutcomeCallable getRandomPasswordCallable(const Model::GetRandomPasswordRequest& request) const;
			GetSecretPolicyOutcome getSecretPolicy(const Model::GetSecretPolicyRequest &request)const;
			void getSecretPolicyAsync(const Model::GetSecretPolicyRequest& request, const GetSecretPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetSecretPolicyOutcomeCallable getSecretPolicyCallable(const Model::GetSecretPolicyRequest& request) const;
			GetSecretValueOutcome getSecretValue(const Model::GetSecretValueRequest &request)const;
			void getSecretValueAsync(const Model::GetSecretValueRequest& request, const GetSecretValueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetSecretValueOutcomeCallable getSecretValueCallable(const Model::GetSecretValueRequest& request) const;
			ImportKeyMaterialOutcome importKeyMaterial(const Model::ImportKeyMaterialRequest &request)const;
			void importKeyMaterialAsync(const Model::ImportKeyMaterialRequest& request, const ImportKeyMaterialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ImportKeyMaterialOutcomeCallable importKeyMaterialCallable(const Model::ImportKeyMaterialRequest& request) const;
			ListAliasesOutcome listAliases(const Model::ListAliasesRequest &request)const;
			void listAliasesAsync(const Model::ListAliasesRequest& request, const ListAliasesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAliasesOutcomeCallable listAliasesCallable(const Model::ListAliasesRequest& request) const;
			ListAliasesByKeyIdOutcome listAliasesByKeyId(const Model::ListAliasesByKeyIdRequest &request)const;
			void listAliasesByKeyIdAsync(const Model::ListAliasesByKeyIdRequest& request, const ListAliasesByKeyIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAliasesByKeyIdOutcomeCallable listAliasesByKeyIdCallable(const Model::ListAliasesByKeyIdRequest& request) const;
			ListApplicationAccessPointsOutcome listApplicationAccessPoints(const Model::ListApplicationAccessPointsRequest &request)const;
			void listApplicationAccessPointsAsync(const Model::ListApplicationAccessPointsRequest& request, const ListApplicationAccessPointsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListApplicationAccessPointsOutcomeCallable listApplicationAccessPointsCallable(const Model::ListApplicationAccessPointsRequest& request) const;
			ListClientKeysOutcome listClientKeys(const Model::ListClientKeysRequest &request)const;
			void listClientKeysAsync(const Model::ListClientKeysRequest& request, const ListClientKeysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListClientKeysOutcomeCallable listClientKeysCallable(const Model::ListClientKeysRequest& request) const;
			ListKeyVersionsOutcome listKeyVersions(const Model::ListKeyVersionsRequest &request)const;
			void listKeyVersionsAsync(const Model::ListKeyVersionsRequest& request, const ListKeyVersionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListKeyVersionsOutcomeCallable listKeyVersionsCallable(const Model::ListKeyVersionsRequest& request) const;
			ListKeysOutcome listKeys(const Model::ListKeysRequest &request)const;
			void listKeysAsync(const Model::ListKeysRequest& request, const ListKeysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListKeysOutcomeCallable listKeysCallable(const Model::ListKeysRequest& request) const;
			ListKmsInstancesOutcome listKmsInstances(const Model::ListKmsInstancesRequest &request)const;
			void listKmsInstancesAsync(const Model::ListKmsInstancesRequest& request, const ListKmsInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListKmsInstancesOutcomeCallable listKmsInstancesCallable(const Model::ListKmsInstancesRequest& request) const;
			ListNetworkRulesOutcome listNetworkRules(const Model::ListNetworkRulesRequest &request)const;
			void listNetworkRulesAsync(const Model::ListNetworkRulesRequest& request, const ListNetworkRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListNetworkRulesOutcomeCallable listNetworkRulesCallable(const Model::ListNetworkRulesRequest& request) const;
			ListPoliciesOutcome listPolicies(const Model::ListPoliciesRequest &request)const;
			void listPoliciesAsync(const Model::ListPoliciesRequest& request, const ListPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListPoliciesOutcomeCallable listPoliciesCallable(const Model::ListPoliciesRequest& request) const;
			ListResourceTagsOutcome listResourceTags(const Model::ListResourceTagsRequest &request)const;
			void listResourceTagsAsync(const Model::ListResourceTagsRequest& request, const ListResourceTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListResourceTagsOutcomeCallable listResourceTagsCallable(const Model::ListResourceTagsRequest& request) const;
			ListSecretVersionIdsOutcome listSecretVersionIds(const Model::ListSecretVersionIdsRequest &request)const;
			void listSecretVersionIdsAsync(const Model::ListSecretVersionIdsRequest& request, const ListSecretVersionIdsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListSecretVersionIdsOutcomeCallable listSecretVersionIdsCallable(const Model::ListSecretVersionIdsRequest& request) const;
			ListSecretsOutcome listSecrets(const Model::ListSecretsRequest &request)const;
			void listSecretsAsync(const Model::ListSecretsRequest& request, const ListSecretsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListSecretsOutcomeCallable listSecretsCallable(const Model::ListSecretsRequest& request) const;
			ListTagResourcesOutcome listTagResources(const Model::ListTagResourcesRequest &request)const;
			void listTagResourcesAsync(const Model::ListTagResourcesRequest& request, const ListTagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTagResourcesOutcomeCallable listTagResourcesCallable(const Model::ListTagResourcesRequest& request) const;
			OpenKmsServiceOutcome openKmsService(const Model::OpenKmsServiceRequest &request)const;
			void openKmsServiceAsync(const Model::OpenKmsServiceRequest& request, const OpenKmsServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OpenKmsServiceOutcomeCallable openKmsServiceCallable(const Model::OpenKmsServiceRequest& request) const;
			PutSecretValueOutcome putSecretValue(const Model::PutSecretValueRequest &request)const;
			void putSecretValueAsync(const Model::PutSecretValueRequest& request, const PutSecretValueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PutSecretValueOutcomeCallable putSecretValueCallable(const Model::PutSecretValueRequest& request) const;
			ReEncryptOutcome reEncrypt(const Model::ReEncryptRequest &request)const;
			void reEncryptAsync(const Model::ReEncryptRequest& request, const ReEncryptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ReEncryptOutcomeCallable reEncryptCallable(const Model::ReEncryptRequest& request) const;
			RestoreSecretOutcome restoreSecret(const Model::RestoreSecretRequest &request)const;
			void restoreSecretAsync(const Model::RestoreSecretRequest& request, const RestoreSecretAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RestoreSecretOutcomeCallable restoreSecretCallable(const Model::RestoreSecretRequest& request) const;
			RotateSecretOutcome rotateSecret(const Model::RotateSecretRequest &request)const;
			void rotateSecretAsync(const Model::RotateSecretRequest& request, const RotateSecretAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RotateSecretOutcomeCallable rotateSecretCallable(const Model::RotateSecretRequest& request) const;
			ScheduleKeyDeletionOutcome scheduleKeyDeletion(const Model::ScheduleKeyDeletionRequest &request)const;
			void scheduleKeyDeletionAsync(const Model::ScheduleKeyDeletionRequest& request, const ScheduleKeyDeletionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ScheduleKeyDeletionOutcomeCallable scheduleKeyDeletionCallable(const Model::ScheduleKeyDeletionRequest& request) const;
			SetDeletionProtectionOutcome setDeletionProtection(const Model::SetDeletionProtectionRequest &request)const;
			void setDeletionProtectionAsync(const Model::SetDeletionProtectionRequest& request, const SetDeletionProtectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetDeletionProtectionOutcomeCallable setDeletionProtectionCallable(const Model::SetDeletionProtectionRequest& request) const;
			SetKeyPolicyOutcome setKeyPolicy(const Model::SetKeyPolicyRequest &request)const;
			void setKeyPolicyAsync(const Model::SetKeyPolicyRequest& request, const SetKeyPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetKeyPolicyOutcomeCallable setKeyPolicyCallable(const Model::SetKeyPolicyRequest& request) const;
			SetSecretPolicyOutcome setSecretPolicy(const Model::SetSecretPolicyRequest &request)const;
			void setSecretPolicyAsync(const Model::SetSecretPolicyRequest& request, const SetSecretPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetSecretPolicyOutcomeCallable setSecretPolicyCallable(const Model::SetSecretPolicyRequest& request) const;
			TagResourceOutcome tagResource(const Model::TagResourceRequest &request)const;
			void tagResourceAsync(const Model::TagResourceRequest& request, const TagResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TagResourceOutcomeCallable tagResourceCallable(const Model::TagResourceRequest& request) const;
			TagResourcesOutcome tagResources(const Model::TagResourcesRequest &request)const;
			void tagResourcesAsync(const Model::TagResourcesRequest& request, const TagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TagResourcesOutcomeCallable tagResourcesCallable(const Model::TagResourcesRequest& request) const;
			UntagResourceOutcome untagResource(const Model::UntagResourceRequest &request)const;
			void untagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UntagResourceOutcomeCallable untagResourceCallable(const Model::UntagResourceRequest& request) const;
			UntagResourcesOutcome untagResources(const Model::UntagResourcesRequest &request)const;
			void untagResourcesAsync(const Model::UntagResourcesRequest& request, const UntagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UntagResourcesOutcomeCallable untagResourcesCallable(const Model::UntagResourcesRequest& request) const;
			UpdateAliasOutcome updateAlias(const Model::UpdateAliasRequest &request)const;
			void updateAliasAsync(const Model::UpdateAliasRequest& request, const UpdateAliasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateAliasOutcomeCallable updateAliasCallable(const Model::UpdateAliasRequest& request) const;
			UpdateApplicationAccessPointOutcome updateApplicationAccessPoint(const Model::UpdateApplicationAccessPointRequest &request)const;
			void updateApplicationAccessPointAsync(const Model::UpdateApplicationAccessPointRequest& request, const UpdateApplicationAccessPointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateApplicationAccessPointOutcomeCallable updateApplicationAccessPointCallable(const Model::UpdateApplicationAccessPointRequest& request) const;
			UpdateCertificateStatusOutcome updateCertificateStatus(const Model::UpdateCertificateStatusRequest &request)const;
			void updateCertificateStatusAsync(const Model::UpdateCertificateStatusRequest& request, const UpdateCertificateStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateCertificateStatusOutcomeCallable updateCertificateStatusCallable(const Model::UpdateCertificateStatusRequest& request) const;
			UpdateKeyDescriptionOutcome updateKeyDescription(const Model::UpdateKeyDescriptionRequest &request)const;
			void updateKeyDescriptionAsync(const Model::UpdateKeyDescriptionRequest& request, const UpdateKeyDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateKeyDescriptionOutcomeCallable updateKeyDescriptionCallable(const Model::UpdateKeyDescriptionRequest& request) const;
			UpdateKmsInstanceBindVpcOutcome updateKmsInstanceBindVpc(const Model::UpdateKmsInstanceBindVpcRequest &request)const;
			void updateKmsInstanceBindVpcAsync(const Model::UpdateKmsInstanceBindVpcRequest& request, const UpdateKmsInstanceBindVpcAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateKmsInstanceBindVpcOutcomeCallable updateKmsInstanceBindVpcCallable(const Model::UpdateKmsInstanceBindVpcRequest& request) const;
			UpdateNetworkRuleOutcome updateNetworkRule(const Model::UpdateNetworkRuleRequest &request)const;
			void updateNetworkRuleAsync(const Model::UpdateNetworkRuleRequest& request, const UpdateNetworkRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateNetworkRuleOutcomeCallable updateNetworkRuleCallable(const Model::UpdateNetworkRuleRequest& request) const;
			UpdatePolicyOutcome updatePolicy(const Model::UpdatePolicyRequest &request)const;
			void updatePolicyAsync(const Model::UpdatePolicyRequest& request, const UpdatePolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdatePolicyOutcomeCallable updatePolicyCallable(const Model::UpdatePolicyRequest& request) const;
			UpdateRotationPolicyOutcome updateRotationPolicy(const Model::UpdateRotationPolicyRequest &request)const;
			void updateRotationPolicyAsync(const Model::UpdateRotationPolicyRequest& request, const UpdateRotationPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateRotationPolicyOutcomeCallable updateRotationPolicyCallable(const Model::UpdateRotationPolicyRequest& request) const;
			UpdateSecretOutcome updateSecret(const Model::UpdateSecretRequest &request)const;
			void updateSecretAsync(const Model::UpdateSecretRequest& request, const UpdateSecretAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateSecretOutcomeCallable updateSecretCallable(const Model::UpdateSecretRequest& request) const;
			UpdateSecretRotationPolicyOutcome updateSecretRotationPolicy(const Model::UpdateSecretRotationPolicyRequest &request)const;
			void updateSecretRotationPolicyAsync(const Model::UpdateSecretRotationPolicyRequest& request, const UpdateSecretRotationPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateSecretRotationPolicyOutcomeCallable updateSecretRotationPolicyCallable(const Model::UpdateSecretRotationPolicyRequest& request) const;
			UpdateSecretVersionStageOutcome updateSecretVersionStage(const Model::UpdateSecretVersionStageRequest &request)const;
			void updateSecretVersionStageAsync(const Model::UpdateSecretVersionStageRequest& request, const UpdateSecretVersionStageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateSecretVersionStageOutcomeCallable updateSecretVersionStageCallable(const Model::UpdateSecretVersionStageRequest& request) const;
			UploadCertificateOutcome uploadCertificate(const Model::UploadCertificateRequest &request)const;
			void uploadCertificateAsync(const Model::UploadCertificateRequest& request, const UploadCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UploadCertificateOutcomeCallable uploadCertificateCallable(const Model::UploadCertificateRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_KMS_KMSCLIENT_H_
