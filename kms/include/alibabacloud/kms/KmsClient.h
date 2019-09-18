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
#include "model/CancelKeyDeletionRequest.h"
#include "model/CancelKeyDeletionResult.h"
#include "model/CreateAliasRequest.h"
#include "model/CreateAliasResult.h"
#include "model/CreateKeyRequest.h"
#include "model/CreateKeyResult.h"
#include "model/DecryptRequest.h"
#include "model/DecryptResult.h"
#include "model/DeleteAliasRequest.h"
#include "model/DeleteAliasResult.h"
#include "model/DeleteKeyMaterialRequest.h"
#include "model/DeleteKeyMaterialResult.h"
#include "model/DescribeKeyRequest.h"
#include "model/DescribeKeyResult.h"
#include "model/DescribeRegionsRequest.h"
#include "model/DescribeRegionsResult.h"
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
#include "model/GetParametersForImportRequest.h"
#include "model/GetParametersForImportResult.h"
#include "model/ImportKeyMaterialRequest.h"
#include "model/ImportKeyMaterialResult.h"
#include "model/ListAliasesRequest.h"
#include "model/ListAliasesResult.h"
#include "model/ListAliasesByKeyIdRequest.h"
#include "model/ListAliasesByKeyIdResult.h"
#include "model/ListKeysRequest.h"
#include "model/ListKeysResult.h"
#include "model/ListResourceTagsRequest.h"
#include "model/ListResourceTagsResult.h"
#include "model/ScheduleKeyDeletionRequest.h"
#include "model/ScheduleKeyDeletionResult.h"
#include "model/TagResourceRequest.h"
#include "model/TagResourceResult.h"
#include "model/UntagResourceRequest.h"
#include "model/UntagResourceResult.h"
#include "model/UpdateAliasRequest.h"
#include "model/UpdateAliasResult.h"


namespace AlibabaCloud
{
	namespace Kms
	{
		class ALIBABACLOUD_KMS_EXPORT KmsClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::CancelKeyDeletionResult> CancelKeyDeletionOutcome;
			typedef std::future<CancelKeyDeletionOutcome> CancelKeyDeletionOutcomeCallable;
			typedef std::function<void(const KmsClient*, const Model::CancelKeyDeletionRequest&, const CancelKeyDeletionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CancelKeyDeletionAsyncHandler;
			typedef Outcome<Error, Model::CreateAliasResult> CreateAliasOutcome;
			typedef std::future<CreateAliasOutcome> CreateAliasOutcomeCallable;
			typedef std::function<void(const KmsClient*, const Model::CreateAliasRequest&, const CreateAliasOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateAliasAsyncHandler;
			typedef Outcome<Error, Model::CreateKeyResult> CreateKeyOutcome;
			typedef std::future<CreateKeyOutcome> CreateKeyOutcomeCallable;
			typedef std::function<void(const KmsClient*, const Model::CreateKeyRequest&, const CreateKeyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateKeyAsyncHandler;
			typedef Outcome<Error, Model::DecryptResult> DecryptOutcome;
			typedef std::future<DecryptOutcome> DecryptOutcomeCallable;
			typedef std::function<void(const KmsClient*, const Model::DecryptRequest&, const DecryptOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DecryptAsyncHandler;
			typedef Outcome<Error, Model::DeleteAliasResult> DeleteAliasOutcome;
			typedef std::future<DeleteAliasOutcome> DeleteAliasOutcomeCallable;
			typedef std::function<void(const KmsClient*, const Model::DeleteAliasRequest&, const DeleteAliasOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAliasAsyncHandler;
			typedef Outcome<Error, Model::DeleteKeyMaterialResult> DeleteKeyMaterialOutcome;
			typedef std::future<DeleteKeyMaterialOutcome> DeleteKeyMaterialOutcomeCallable;
			typedef std::function<void(const KmsClient*, const Model::DeleteKeyMaterialRequest&, const DeleteKeyMaterialOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteKeyMaterialAsyncHandler;
			typedef Outcome<Error, Model::DescribeKeyResult> DescribeKeyOutcome;
			typedef std::future<DescribeKeyOutcome> DescribeKeyOutcomeCallable;
			typedef std::function<void(const KmsClient*, const Model::DescribeKeyRequest&, const DescribeKeyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeKeyAsyncHandler;
			typedef Outcome<Error, Model::DescribeRegionsResult> DescribeRegionsOutcome;
			typedef std::future<DescribeRegionsOutcome> DescribeRegionsOutcomeCallable;
			typedef std::function<void(const KmsClient*, const Model::DescribeRegionsRequest&, const DescribeRegionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRegionsAsyncHandler;
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
			typedef Outcome<Error, Model::GetParametersForImportResult> GetParametersForImportOutcome;
			typedef std::future<GetParametersForImportOutcome> GetParametersForImportOutcomeCallable;
			typedef std::function<void(const KmsClient*, const Model::GetParametersForImportRequest&, const GetParametersForImportOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetParametersForImportAsyncHandler;
			typedef Outcome<Error, Model::ImportKeyMaterialResult> ImportKeyMaterialOutcome;
			typedef std::future<ImportKeyMaterialOutcome> ImportKeyMaterialOutcomeCallable;
			typedef std::function<void(const KmsClient*, const Model::ImportKeyMaterialRequest&, const ImportKeyMaterialOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ImportKeyMaterialAsyncHandler;
			typedef Outcome<Error, Model::ListAliasesResult> ListAliasesOutcome;
			typedef std::future<ListAliasesOutcome> ListAliasesOutcomeCallable;
			typedef std::function<void(const KmsClient*, const Model::ListAliasesRequest&, const ListAliasesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAliasesAsyncHandler;
			typedef Outcome<Error, Model::ListAliasesByKeyIdResult> ListAliasesByKeyIdOutcome;
			typedef std::future<ListAliasesByKeyIdOutcome> ListAliasesByKeyIdOutcomeCallable;
			typedef std::function<void(const KmsClient*, const Model::ListAliasesByKeyIdRequest&, const ListAliasesByKeyIdOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAliasesByKeyIdAsyncHandler;
			typedef Outcome<Error, Model::ListKeysResult> ListKeysOutcome;
			typedef std::future<ListKeysOutcome> ListKeysOutcomeCallable;
			typedef std::function<void(const KmsClient*, const Model::ListKeysRequest&, const ListKeysOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListKeysAsyncHandler;
			typedef Outcome<Error, Model::ListResourceTagsResult> ListResourceTagsOutcome;
			typedef std::future<ListResourceTagsOutcome> ListResourceTagsOutcomeCallable;
			typedef std::function<void(const KmsClient*, const Model::ListResourceTagsRequest&, const ListResourceTagsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListResourceTagsAsyncHandler;
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

			KmsClient(const Credentials &credentials, const ClientConfiguration &configuration);
			KmsClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			KmsClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~KmsClient();
			CancelKeyDeletionOutcome cancelKeyDeletion(const Model::CancelKeyDeletionRequest &request)const;
			void cancelKeyDeletionAsync(const Model::CancelKeyDeletionRequest& request, const CancelKeyDeletionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CancelKeyDeletionOutcomeCallable cancelKeyDeletionCallable(const Model::CancelKeyDeletionRequest& request) const;
			CreateAliasOutcome createAlias(const Model::CreateAliasRequest &request)const;
			void createAliasAsync(const Model::CreateAliasRequest& request, const CreateAliasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateAliasOutcomeCallable createAliasCallable(const Model::CreateAliasRequest& request) const;
			CreateKeyOutcome createKey(const Model::CreateKeyRequest &request)const;
			void createKeyAsync(const Model::CreateKeyRequest& request, const CreateKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateKeyOutcomeCallable createKeyCallable(const Model::CreateKeyRequest& request) const;
			DecryptOutcome decrypt(const Model::DecryptRequest &request)const;
			void decryptAsync(const Model::DecryptRequest& request, const DecryptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DecryptOutcomeCallable decryptCallable(const Model::DecryptRequest& request) const;
			DeleteAliasOutcome deleteAlias(const Model::DeleteAliasRequest &request)const;
			void deleteAliasAsync(const Model::DeleteAliasRequest& request, const DeleteAliasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteAliasOutcomeCallable deleteAliasCallable(const Model::DeleteAliasRequest& request) const;
			DeleteKeyMaterialOutcome deleteKeyMaterial(const Model::DeleteKeyMaterialRequest &request)const;
			void deleteKeyMaterialAsync(const Model::DeleteKeyMaterialRequest& request, const DeleteKeyMaterialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteKeyMaterialOutcomeCallable deleteKeyMaterialCallable(const Model::DeleteKeyMaterialRequest& request) const;
			DescribeKeyOutcome describeKey(const Model::DescribeKeyRequest &request)const;
			void describeKeyAsync(const Model::DescribeKeyRequest& request, const DescribeKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeKeyOutcomeCallable describeKeyCallable(const Model::DescribeKeyRequest& request) const;
			DescribeRegionsOutcome describeRegions(const Model::DescribeRegionsRequest &request)const;
			void describeRegionsAsync(const Model::DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRegionsOutcomeCallable describeRegionsCallable(const Model::DescribeRegionsRequest& request) const;
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
			GetParametersForImportOutcome getParametersForImport(const Model::GetParametersForImportRequest &request)const;
			void getParametersForImportAsync(const Model::GetParametersForImportRequest& request, const GetParametersForImportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetParametersForImportOutcomeCallable getParametersForImportCallable(const Model::GetParametersForImportRequest& request) const;
			ImportKeyMaterialOutcome importKeyMaterial(const Model::ImportKeyMaterialRequest &request)const;
			void importKeyMaterialAsync(const Model::ImportKeyMaterialRequest& request, const ImportKeyMaterialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ImportKeyMaterialOutcomeCallable importKeyMaterialCallable(const Model::ImportKeyMaterialRequest& request) const;
			ListAliasesOutcome listAliases(const Model::ListAliasesRequest &request)const;
			void listAliasesAsync(const Model::ListAliasesRequest& request, const ListAliasesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAliasesOutcomeCallable listAliasesCallable(const Model::ListAliasesRequest& request) const;
			ListAliasesByKeyIdOutcome listAliasesByKeyId(const Model::ListAliasesByKeyIdRequest &request)const;
			void listAliasesByKeyIdAsync(const Model::ListAliasesByKeyIdRequest& request, const ListAliasesByKeyIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAliasesByKeyIdOutcomeCallable listAliasesByKeyIdCallable(const Model::ListAliasesByKeyIdRequest& request) const;
			ListKeysOutcome listKeys(const Model::ListKeysRequest &request)const;
			void listKeysAsync(const Model::ListKeysRequest& request, const ListKeysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListKeysOutcomeCallable listKeysCallable(const Model::ListKeysRequest& request) const;
			ListResourceTagsOutcome listResourceTags(const Model::ListResourceTagsRequest &request)const;
			void listResourceTagsAsync(const Model::ListResourceTagsRequest& request, const ListResourceTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListResourceTagsOutcomeCallable listResourceTagsCallable(const Model::ListResourceTagsRequest& request) const;
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
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_KMS_KMSCLIENT_H_
