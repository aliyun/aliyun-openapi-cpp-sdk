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
#include "model/CreateAliasRequest.h"
#include "model/CreateAliasResult.h"
#include "model/CreateKeyRequest.h"
#include "model/CreateKeyResult.h"
#include "model/CreateKeyVersionRequest.h"
#include "model/CreateKeyVersionResult.h"
#include "model/CreateSecretRequest.h"
#include "model/CreateSecretResult.h"
#include "model/DecryptRequest.h"
#include "model/DecryptResult.h"
#include "model/DeleteAliasRequest.h"
#include "model/DeleteAliasResult.h"
#include "model/DeleteKeyMaterialRequest.h"
#include "model/DeleteKeyMaterialResult.h"
#include "model/DeleteSecretRequest.h"
#include "model/DeleteSecretResult.h"
#include "model/DescribeKeyRequest.h"
#include "model/DescribeKeyResult.h"
#include "model/DescribeKeyVersionRequest.h"
#include "model/DescribeKeyVersionResult.h"
#include "model/DescribeRegionsRequest.h"
#include "model/DescribeRegionsResult.h"
#include "model/DescribeSecretRequest.h"
#include "model/DescribeSecretResult.h"
#include "model/DescribeServiceRequest.h"
#include "model/DescribeServiceResult.h"
#include "model/DisableKeyRequest.h"
#include "model/DisableKeyResult.h"
#include "model/EnableKeyRequest.h"
#include "model/EnableKeyResult.h"
#include "model/EncryptRequest.h"
#include "model/EncryptResult.h"
#include "model/GenerateDataKeyRequest.h"
#include "model/GenerateDataKeyResult.h"
#include "model/GenerateDataKeyWithoutPlaintextRequest.h"
#include "model/GenerateDataKeyWithoutPlaintextResult.h"
#include "model/GetParametersForImportRequest.h"
#include "model/GetParametersForImportResult.h"
#include "model/GetPublicKeyRequest.h"
#include "model/GetPublicKeyResult.h"
#include "model/GetRandomPasswordRequest.h"
#include "model/GetRandomPasswordResult.h"
#include "model/GetSecretValueRequest.h"
#include "model/GetSecretValueResult.h"
#include "model/ImportKeyMaterialRequest.h"
#include "model/ImportKeyMaterialResult.h"
#include "model/ListAliasesRequest.h"
#include "model/ListAliasesResult.h"
#include "model/ListAliasesByKeyIdRequest.h"
#include "model/ListAliasesByKeyIdResult.h"
#include "model/ListKeyVersionsRequest.h"
#include "model/ListKeyVersionsResult.h"
#include "model/ListKeysRequest.h"
#include "model/ListKeysResult.h"
#include "model/ListResourceTagsRequest.h"
#include "model/ListResourceTagsResult.h"
#include "model/ListSecretVersionIdsRequest.h"
#include "model/ListSecretVersionIdsResult.h"
#include "model/ListSecretsRequest.h"
#include "model/ListSecretsResult.h"
#include "model/PutSecretValueRequest.h"
#include "model/PutSecretValueResult.h"
#include "model/RestoreSecretRequest.h"
#include "model/RestoreSecretResult.h"
#include "model/ScheduleKeyDeletionRequest.h"
#include "model/ScheduleKeyDeletionResult.h"
#include "model/TagResourceRequest.h"
#include "model/TagResourceResult.h"
#include "model/UntagResourceRequest.h"
#include "model/UntagResourceResult.h"
#include "model/UpdateAliasRequest.h"
#include "model/UpdateAliasResult.h"
#include "model/UpdateKeyDescriptionRequest.h"
#include "model/UpdateKeyDescriptionResult.h"
#include "model/UpdateRotationPolicyRequest.h"
#include "model/UpdateRotationPolicyResult.h"
#include "model/UpdateSecretRequest.h"
#include "model/UpdateSecretResult.h"
#include "model/UpdateSecretVersionStageRequest.h"
#include "model/UpdateSecretVersionStageResult.h"


namespace AlibabaCloud
{
	namespace Kms
	{
		class ALIBABACLOUD_KMS_EXPORT KmsClient : public RpcServiceClient
		{
		public:
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
			typedef Outcome<Error, Model::CreateAliasResult> CreateAliasOutcome;
			typedef std::future<CreateAliasOutcome> CreateAliasOutcomeCallable;
			typedef std::function<void(const KmsClient*, const Model::CreateAliasRequest&, const CreateAliasOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateAliasAsyncHandler;
			typedef Outcome<Error, Model::CreateKeyResult> CreateKeyOutcome;
			typedef std::future<CreateKeyOutcome> CreateKeyOutcomeCallable;
			typedef std::function<void(const KmsClient*, const Model::CreateKeyRequest&, const CreateKeyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateKeyAsyncHandler;
			typedef Outcome<Error, Model::CreateKeyVersionResult> CreateKeyVersionOutcome;
			typedef std::future<CreateKeyVersionOutcome> CreateKeyVersionOutcomeCallable;
			typedef std::function<void(const KmsClient*, const Model::CreateKeyVersionRequest&, const CreateKeyVersionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateKeyVersionAsyncHandler;
			typedef Outcome<Error, Model::CreateSecretResult> CreateSecretOutcome;
			typedef std::future<CreateSecretOutcome> CreateSecretOutcomeCallable;
			typedef std::function<void(const KmsClient*, const Model::CreateSecretRequest&, const CreateSecretOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateSecretAsyncHandler;
			typedef Outcome<Error, Model::DecryptResult> DecryptOutcome;
			typedef std::future<DecryptOutcome> DecryptOutcomeCallable;
			typedef std::function<void(const KmsClient*, const Model::DecryptRequest&, const DecryptOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DecryptAsyncHandler;
			typedef Outcome<Error, Model::DeleteAliasResult> DeleteAliasOutcome;
			typedef std::future<DeleteAliasOutcome> DeleteAliasOutcomeCallable;
			typedef std::function<void(const KmsClient*, const Model::DeleteAliasRequest&, const DeleteAliasOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAliasAsyncHandler;
			typedef Outcome<Error, Model::DeleteKeyMaterialResult> DeleteKeyMaterialOutcome;
			typedef std::future<DeleteKeyMaterialOutcome> DeleteKeyMaterialOutcomeCallable;
			typedef std::function<void(const KmsClient*, const Model::DeleteKeyMaterialRequest&, const DeleteKeyMaterialOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteKeyMaterialAsyncHandler;
			typedef Outcome<Error, Model::DeleteSecretResult> DeleteSecretOutcome;
			typedef std::future<DeleteSecretOutcome> DeleteSecretOutcomeCallable;
			typedef std::function<void(const KmsClient*, const Model::DeleteSecretRequest&, const DeleteSecretOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSecretAsyncHandler;
			typedef Outcome<Error, Model::DescribeKeyResult> DescribeKeyOutcome;
			typedef std::future<DescribeKeyOutcome> DescribeKeyOutcomeCallable;
			typedef std::function<void(const KmsClient*, const Model::DescribeKeyRequest&, const DescribeKeyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeKeyAsyncHandler;
			typedef Outcome<Error, Model::DescribeKeyVersionResult> DescribeKeyVersionOutcome;
			typedef std::future<DescribeKeyVersionOutcome> DescribeKeyVersionOutcomeCallable;
			typedef std::function<void(const KmsClient*, const Model::DescribeKeyVersionRequest&, const DescribeKeyVersionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeKeyVersionAsyncHandler;
			typedef Outcome<Error, Model::DescribeRegionsResult> DescribeRegionsOutcome;
			typedef std::future<DescribeRegionsOutcome> DescribeRegionsOutcomeCallable;
			typedef std::function<void(const KmsClient*, const Model::DescribeRegionsRequest&, const DescribeRegionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRegionsAsyncHandler;
			typedef Outcome<Error, Model::DescribeSecretResult> DescribeSecretOutcome;
			typedef std::future<DescribeSecretOutcome> DescribeSecretOutcomeCallable;
			typedef std::function<void(const KmsClient*, const Model::DescribeSecretRequest&, const DescribeSecretOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSecretAsyncHandler;
			typedef Outcome<Error, Model::DescribeServiceResult> DescribeServiceOutcome;
			typedef std::future<DescribeServiceOutcome> DescribeServiceOutcomeCallable;
			typedef std::function<void(const KmsClient*, const Model::DescribeServiceRequest&, const DescribeServiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeServiceAsyncHandler;
			typedef Outcome<Error, Model::DisableKeyResult> DisableKeyOutcome;
			typedef std::future<DisableKeyOutcome> DisableKeyOutcomeCallable;
			typedef std::function<void(const KmsClient*, const Model::DisableKeyRequest&, const DisableKeyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DisableKeyAsyncHandler;
			typedef Outcome<Error, Model::EnableKeyResult> EnableKeyOutcome;
			typedef std::future<EnableKeyOutcome> EnableKeyOutcomeCallable;
			typedef std::function<void(const KmsClient*, const Model::EnableKeyRequest&, const EnableKeyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EnableKeyAsyncHandler;
			typedef Outcome<Error, Model::EncryptResult> EncryptOutcome;
			typedef std::future<EncryptOutcome> EncryptOutcomeCallable;
			typedef std::function<void(const KmsClient*, const Model::EncryptRequest&, const EncryptOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EncryptAsyncHandler;
			typedef Outcome<Error, Model::GenerateDataKeyResult> GenerateDataKeyOutcome;
			typedef std::future<GenerateDataKeyOutcome> GenerateDataKeyOutcomeCallable;
			typedef std::function<void(const KmsClient*, const Model::GenerateDataKeyRequest&, const GenerateDataKeyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GenerateDataKeyAsyncHandler;
			typedef Outcome<Error, Model::GenerateDataKeyWithoutPlaintextResult> GenerateDataKeyWithoutPlaintextOutcome;
			typedef std::future<GenerateDataKeyWithoutPlaintextOutcome> GenerateDataKeyWithoutPlaintextOutcomeCallable;
			typedef std::function<void(const KmsClient*, const Model::GenerateDataKeyWithoutPlaintextRequest&, const GenerateDataKeyWithoutPlaintextOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GenerateDataKeyWithoutPlaintextAsyncHandler;
			typedef Outcome<Error, Model::GetParametersForImportResult> GetParametersForImportOutcome;
			typedef std::future<GetParametersForImportOutcome> GetParametersForImportOutcomeCallable;
			typedef std::function<void(const KmsClient*, const Model::GetParametersForImportRequest&, const GetParametersForImportOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetParametersForImportAsyncHandler;
			typedef Outcome<Error, Model::GetPublicKeyResult> GetPublicKeyOutcome;
			typedef std::future<GetPublicKeyOutcome> GetPublicKeyOutcomeCallable;
			typedef std::function<void(const KmsClient*, const Model::GetPublicKeyRequest&, const GetPublicKeyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetPublicKeyAsyncHandler;
			typedef Outcome<Error, Model::GetRandomPasswordResult> GetRandomPasswordOutcome;
			typedef std::future<GetRandomPasswordOutcome> GetRandomPasswordOutcomeCallable;
			typedef std::function<void(const KmsClient*, const Model::GetRandomPasswordRequest&, const GetRandomPasswordOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetRandomPasswordAsyncHandler;
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
			typedef Outcome<Error, Model::ListKeyVersionsResult> ListKeyVersionsOutcome;
			typedef std::future<ListKeyVersionsOutcome> ListKeyVersionsOutcomeCallable;
			typedef std::function<void(const KmsClient*, const Model::ListKeyVersionsRequest&, const ListKeyVersionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListKeyVersionsAsyncHandler;
			typedef Outcome<Error, Model::ListKeysResult> ListKeysOutcome;
			typedef std::future<ListKeysOutcome> ListKeysOutcomeCallable;
			typedef std::function<void(const KmsClient*, const Model::ListKeysRequest&, const ListKeysOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListKeysAsyncHandler;
			typedef Outcome<Error, Model::ListResourceTagsResult> ListResourceTagsOutcome;
			typedef std::future<ListResourceTagsOutcome> ListResourceTagsOutcomeCallable;
			typedef std::function<void(const KmsClient*, const Model::ListResourceTagsRequest&, const ListResourceTagsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListResourceTagsAsyncHandler;
			typedef Outcome<Error, Model::ListSecretVersionIdsResult> ListSecretVersionIdsOutcome;
			typedef std::future<ListSecretVersionIdsOutcome> ListSecretVersionIdsOutcomeCallable;
			typedef std::function<void(const KmsClient*, const Model::ListSecretVersionIdsRequest&, const ListSecretVersionIdsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListSecretVersionIdsAsyncHandler;
			typedef Outcome<Error, Model::ListSecretsResult> ListSecretsOutcome;
			typedef std::future<ListSecretsOutcome> ListSecretsOutcomeCallable;
			typedef std::function<void(const KmsClient*, const Model::ListSecretsRequest&, const ListSecretsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListSecretsAsyncHandler;
			typedef Outcome<Error, Model::PutSecretValueResult> PutSecretValueOutcome;
			typedef std::future<PutSecretValueOutcome> PutSecretValueOutcomeCallable;
			typedef std::function<void(const KmsClient*, const Model::PutSecretValueRequest&, const PutSecretValueOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PutSecretValueAsyncHandler;
			typedef Outcome<Error, Model::RestoreSecretResult> RestoreSecretOutcome;
			typedef std::future<RestoreSecretOutcome> RestoreSecretOutcomeCallable;
			typedef std::function<void(const KmsClient*, const Model::RestoreSecretRequest&, const RestoreSecretOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RestoreSecretAsyncHandler;
			typedef Outcome<Error, Model::ScheduleKeyDeletionResult> ScheduleKeyDeletionOutcome;
			typedef std::future<ScheduleKeyDeletionOutcome> ScheduleKeyDeletionOutcomeCallable;
			typedef std::function<void(const KmsClient*, const Model::ScheduleKeyDeletionRequest&, const ScheduleKeyDeletionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ScheduleKeyDeletionAsyncHandler;
			typedef Outcome<Error, Model::TagResourceResult> TagResourceOutcome;
			typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
			typedef std::function<void(const KmsClient*, const Model::TagResourceRequest&, const TagResourceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TagResourceAsyncHandler;
			typedef Outcome<Error, Model::UntagResourceResult> UntagResourceOutcome;
			typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
			typedef std::function<void(const KmsClient*, const Model::UntagResourceRequest&, const UntagResourceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UntagResourceAsyncHandler;
			typedef Outcome<Error, Model::UpdateAliasResult> UpdateAliasOutcome;
			typedef std::future<UpdateAliasOutcome> UpdateAliasOutcomeCallable;
			typedef std::function<void(const KmsClient*, const Model::UpdateAliasRequest&, const UpdateAliasOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateAliasAsyncHandler;
			typedef Outcome<Error, Model::UpdateKeyDescriptionResult> UpdateKeyDescriptionOutcome;
			typedef std::future<UpdateKeyDescriptionOutcome> UpdateKeyDescriptionOutcomeCallable;
			typedef std::function<void(const KmsClient*, const Model::UpdateKeyDescriptionRequest&, const UpdateKeyDescriptionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateKeyDescriptionAsyncHandler;
			typedef Outcome<Error, Model::UpdateRotationPolicyResult> UpdateRotationPolicyOutcome;
			typedef std::future<UpdateRotationPolicyOutcome> UpdateRotationPolicyOutcomeCallable;
			typedef std::function<void(const KmsClient*, const Model::UpdateRotationPolicyRequest&, const UpdateRotationPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateRotationPolicyAsyncHandler;
			typedef Outcome<Error, Model::UpdateSecretResult> UpdateSecretOutcome;
			typedef std::future<UpdateSecretOutcome> UpdateSecretOutcomeCallable;
			typedef std::function<void(const KmsClient*, const Model::UpdateSecretRequest&, const UpdateSecretOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateSecretAsyncHandler;
			typedef Outcome<Error, Model::UpdateSecretVersionStageResult> UpdateSecretVersionStageOutcome;
			typedef std::future<UpdateSecretVersionStageOutcome> UpdateSecretVersionStageOutcomeCallable;
			typedef std::function<void(const KmsClient*, const Model::UpdateSecretVersionStageRequest&, const UpdateSecretVersionStageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateSecretVersionStageAsyncHandler;

			KmsClient(const Credentials &credentials, const ClientConfiguration &configuration);
			KmsClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			KmsClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~KmsClient();
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
			CreateAliasOutcome createAlias(const Model::CreateAliasRequest &request)const;
			void createAliasAsync(const Model::CreateAliasRequest& request, const CreateAliasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateAliasOutcomeCallable createAliasCallable(const Model::CreateAliasRequest& request) const;
			CreateKeyOutcome createKey(const Model::CreateKeyRequest &request)const;
			void createKeyAsync(const Model::CreateKeyRequest& request, const CreateKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateKeyOutcomeCallable createKeyCallable(const Model::CreateKeyRequest& request) const;
			CreateKeyVersionOutcome createKeyVersion(const Model::CreateKeyVersionRequest &request)const;
			void createKeyVersionAsync(const Model::CreateKeyVersionRequest& request, const CreateKeyVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateKeyVersionOutcomeCallable createKeyVersionCallable(const Model::CreateKeyVersionRequest& request) const;
			CreateSecretOutcome createSecret(const Model::CreateSecretRequest &request)const;
			void createSecretAsync(const Model::CreateSecretRequest& request, const CreateSecretAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateSecretOutcomeCallable createSecretCallable(const Model::CreateSecretRequest& request) const;
			DecryptOutcome decrypt(const Model::DecryptRequest &request)const;
			void decryptAsync(const Model::DecryptRequest& request, const DecryptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DecryptOutcomeCallable decryptCallable(const Model::DecryptRequest& request) const;
			DeleteAliasOutcome deleteAlias(const Model::DeleteAliasRequest &request)const;
			void deleteAliasAsync(const Model::DeleteAliasRequest& request, const DeleteAliasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteAliasOutcomeCallable deleteAliasCallable(const Model::DeleteAliasRequest& request) const;
			DeleteKeyMaterialOutcome deleteKeyMaterial(const Model::DeleteKeyMaterialRequest &request)const;
			void deleteKeyMaterialAsync(const Model::DeleteKeyMaterialRequest& request, const DeleteKeyMaterialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteKeyMaterialOutcomeCallable deleteKeyMaterialCallable(const Model::DeleteKeyMaterialRequest& request) const;
			DeleteSecretOutcome deleteSecret(const Model::DeleteSecretRequest &request)const;
			void deleteSecretAsync(const Model::DeleteSecretRequest& request, const DeleteSecretAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteSecretOutcomeCallable deleteSecretCallable(const Model::DeleteSecretRequest& request) const;
			DescribeKeyOutcome describeKey(const Model::DescribeKeyRequest &request)const;
			void describeKeyAsync(const Model::DescribeKeyRequest& request, const DescribeKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeKeyOutcomeCallable describeKeyCallable(const Model::DescribeKeyRequest& request) const;
			DescribeKeyVersionOutcome describeKeyVersion(const Model::DescribeKeyVersionRequest &request)const;
			void describeKeyVersionAsync(const Model::DescribeKeyVersionRequest& request, const DescribeKeyVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeKeyVersionOutcomeCallable describeKeyVersionCallable(const Model::DescribeKeyVersionRequest& request) const;
			DescribeRegionsOutcome describeRegions(const Model::DescribeRegionsRequest &request)const;
			void describeRegionsAsync(const Model::DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRegionsOutcomeCallable describeRegionsCallable(const Model::DescribeRegionsRequest& request) const;
			DescribeSecretOutcome describeSecret(const Model::DescribeSecretRequest &request)const;
			void describeSecretAsync(const Model::DescribeSecretRequest& request, const DescribeSecretAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSecretOutcomeCallable describeSecretCallable(const Model::DescribeSecretRequest& request) const;
			DescribeServiceOutcome describeService(const Model::DescribeServiceRequest &request)const;
			void describeServiceAsync(const Model::DescribeServiceRequest& request, const DescribeServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeServiceOutcomeCallable describeServiceCallable(const Model::DescribeServiceRequest& request) const;
			DisableKeyOutcome disableKey(const Model::DisableKeyRequest &request)const;
			void disableKeyAsync(const Model::DisableKeyRequest& request, const DisableKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DisableKeyOutcomeCallable disableKeyCallable(const Model::DisableKeyRequest& request) const;
			EnableKeyOutcome enableKey(const Model::EnableKeyRequest &request)const;
			void enableKeyAsync(const Model::EnableKeyRequest& request, const EnableKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EnableKeyOutcomeCallable enableKeyCallable(const Model::EnableKeyRequest& request) const;
			EncryptOutcome encrypt(const Model::EncryptRequest &request)const;
			void encryptAsync(const Model::EncryptRequest& request, const EncryptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EncryptOutcomeCallable encryptCallable(const Model::EncryptRequest& request) const;
			GenerateDataKeyOutcome generateDataKey(const Model::GenerateDataKeyRequest &request)const;
			void generateDataKeyAsync(const Model::GenerateDataKeyRequest& request, const GenerateDataKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GenerateDataKeyOutcomeCallable generateDataKeyCallable(const Model::GenerateDataKeyRequest& request) const;
			GenerateDataKeyWithoutPlaintextOutcome generateDataKeyWithoutPlaintext(const Model::GenerateDataKeyWithoutPlaintextRequest &request)const;
			void generateDataKeyWithoutPlaintextAsync(const Model::GenerateDataKeyWithoutPlaintextRequest& request, const GenerateDataKeyWithoutPlaintextAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GenerateDataKeyWithoutPlaintextOutcomeCallable generateDataKeyWithoutPlaintextCallable(const Model::GenerateDataKeyWithoutPlaintextRequest& request) const;
			GetParametersForImportOutcome getParametersForImport(const Model::GetParametersForImportRequest &request)const;
			void getParametersForImportAsync(const Model::GetParametersForImportRequest& request, const GetParametersForImportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetParametersForImportOutcomeCallable getParametersForImportCallable(const Model::GetParametersForImportRequest& request) const;
			GetPublicKeyOutcome getPublicKey(const Model::GetPublicKeyRequest &request)const;
			void getPublicKeyAsync(const Model::GetPublicKeyRequest& request, const GetPublicKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetPublicKeyOutcomeCallable getPublicKeyCallable(const Model::GetPublicKeyRequest& request) const;
			GetRandomPasswordOutcome getRandomPassword(const Model::GetRandomPasswordRequest &request)const;
			void getRandomPasswordAsync(const Model::GetRandomPasswordRequest& request, const GetRandomPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetRandomPasswordOutcomeCallable getRandomPasswordCallable(const Model::GetRandomPasswordRequest& request) const;
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
			ListKeyVersionsOutcome listKeyVersions(const Model::ListKeyVersionsRequest &request)const;
			void listKeyVersionsAsync(const Model::ListKeyVersionsRequest& request, const ListKeyVersionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListKeyVersionsOutcomeCallable listKeyVersionsCallable(const Model::ListKeyVersionsRequest& request) const;
			ListKeysOutcome listKeys(const Model::ListKeysRequest &request)const;
			void listKeysAsync(const Model::ListKeysRequest& request, const ListKeysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListKeysOutcomeCallable listKeysCallable(const Model::ListKeysRequest& request) const;
			ListResourceTagsOutcome listResourceTags(const Model::ListResourceTagsRequest &request)const;
			void listResourceTagsAsync(const Model::ListResourceTagsRequest& request, const ListResourceTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListResourceTagsOutcomeCallable listResourceTagsCallable(const Model::ListResourceTagsRequest& request) const;
			ListSecretVersionIdsOutcome listSecretVersionIds(const Model::ListSecretVersionIdsRequest &request)const;
			void listSecretVersionIdsAsync(const Model::ListSecretVersionIdsRequest& request, const ListSecretVersionIdsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListSecretVersionIdsOutcomeCallable listSecretVersionIdsCallable(const Model::ListSecretVersionIdsRequest& request) const;
			ListSecretsOutcome listSecrets(const Model::ListSecretsRequest &request)const;
			void listSecretsAsync(const Model::ListSecretsRequest& request, const ListSecretsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListSecretsOutcomeCallable listSecretsCallable(const Model::ListSecretsRequest& request) const;
			PutSecretValueOutcome putSecretValue(const Model::PutSecretValueRequest &request)const;
			void putSecretValueAsync(const Model::PutSecretValueRequest& request, const PutSecretValueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PutSecretValueOutcomeCallable putSecretValueCallable(const Model::PutSecretValueRequest& request) const;
			RestoreSecretOutcome restoreSecret(const Model::RestoreSecretRequest &request)const;
			void restoreSecretAsync(const Model::RestoreSecretRequest& request, const RestoreSecretAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RestoreSecretOutcomeCallable restoreSecretCallable(const Model::RestoreSecretRequest& request) const;
			ScheduleKeyDeletionOutcome scheduleKeyDeletion(const Model::ScheduleKeyDeletionRequest &request)const;
			void scheduleKeyDeletionAsync(const Model::ScheduleKeyDeletionRequest& request, const ScheduleKeyDeletionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ScheduleKeyDeletionOutcomeCallable scheduleKeyDeletionCallable(const Model::ScheduleKeyDeletionRequest& request) const;
			TagResourceOutcome tagResource(const Model::TagResourceRequest &request)const;
			void tagResourceAsync(const Model::TagResourceRequest& request, const TagResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TagResourceOutcomeCallable tagResourceCallable(const Model::TagResourceRequest& request) const;
			UntagResourceOutcome untagResource(const Model::UntagResourceRequest &request)const;
			void untagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UntagResourceOutcomeCallable untagResourceCallable(const Model::UntagResourceRequest& request) const;
			UpdateAliasOutcome updateAlias(const Model::UpdateAliasRequest &request)const;
			void updateAliasAsync(const Model::UpdateAliasRequest& request, const UpdateAliasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateAliasOutcomeCallable updateAliasCallable(const Model::UpdateAliasRequest& request) const;
			UpdateKeyDescriptionOutcome updateKeyDescription(const Model::UpdateKeyDescriptionRequest &request)const;
			void updateKeyDescriptionAsync(const Model::UpdateKeyDescriptionRequest& request, const UpdateKeyDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateKeyDescriptionOutcomeCallable updateKeyDescriptionCallable(const Model::UpdateKeyDescriptionRequest& request) const;
			UpdateRotationPolicyOutcome updateRotationPolicy(const Model::UpdateRotationPolicyRequest &request)const;
			void updateRotationPolicyAsync(const Model::UpdateRotationPolicyRequest& request, const UpdateRotationPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateRotationPolicyOutcomeCallable updateRotationPolicyCallable(const Model::UpdateRotationPolicyRequest& request) const;
			UpdateSecretOutcome updateSecret(const Model::UpdateSecretRequest &request)const;
			void updateSecretAsync(const Model::UpdateSecretRequest& request, const UpdateSecretAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateSecretOutcomeCallable updateSecretCallable(const Model::UpdateSecretRequest& request) const;
			UpdateSecretVersionStageOutcome updateSecretVersionStage(const Model::UpdateSecretVersionStageRequest &request)const;
			void updateSecretVersionStageAsync(const Model::UpdateSecretVersionStageRequest& request, const UpdateSecretVersionStageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateSecretVersionStageOutcomeCallable updateSecretVersionStageCallable(const Model::UpdateSecretVersionStageRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_KMS_KMSCLIENT_H_
