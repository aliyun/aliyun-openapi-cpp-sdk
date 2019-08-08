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

#include <alibabacloud/kms/KmsClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Kms;
using namespace AlibabaCloud::Kms::Model;

namespace
{
	const std::string SERVICE_NAME = "Kms";
}

KmsClient::KmsClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "kms");
}

KmsClient::KmsClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "kms");
}

KmsClient::KmsClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "kms");
}

KmsClient::~KmsClient()
{}

KmsClient::ListAliasesOutcome KmsClient::listAliases(const ListAliasesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAliasesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAliasesOutcome(ListAliasesResult(outcome.result()));
	else
		return ListAliasesOutcome(outcome.error());
}

void KmsClient::listAliasesAsync(const ListAliasesRequest& request, const ListAliasesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAliases(request), context);
	};

	asyncExecute(new Runnable(fn));
}

KmsClient::ListAliasesOutcomeCallable KmsClient::listAliasesCallable(const ListAliasesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAliasesOutcome()>>(
			[this, request]()
			{
			return this->listAliases(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

KmsClient::GenerateDataKeyOutcome KmsClient::generateDataKey(const GenerateDataKeyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GenerateDataKeyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GenerateDataKeyOutcome(GenerateDataKeyResult(outcome.result()));
	else
		return GenerateDataKeyOutcome(outcome.error());
}

void KmsClient::generateDataKeyAsync(const GenerateDataKeyRequest& request, const GenerateDataKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, generateDataKey(request), context);
	};

	asyncExecute(new Runnable(fn));
}

KmsClient::GenerateDataKeyOutcomeCallable KmsClient::generateDataKeyCallable(const GenerateDataKeyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GenerateDataKeyOutcome()>>(
			[this, request]()
			{
			return this->generateDataKey(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

KmsClient::CancelKeyDeletionOutcome KmsClient::cancelKeyDeletion(const CancelKeyDeletionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CancelKeyDeletionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CancelKeyDeletionOutcome(CancelKeyDeletionResult(outcome.result()));
	else
		return CancelKeyDeletionOutcome(outcome.error());
}

void KmsClient::cancelKeyDeletionAsync(const CancelKeyDeletionRequest& request, const CancelKeyDeletionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, cancelKeyDeletion(request), context);
	};

	asyncExecute(new Runnable(fn));
}

KmsClient::CancelKeyDeletionOutcomeCallable KmsClient::cancelKeyDeletionCallable(const CancelKeyDeletionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CancelKeyDeletionOutcome()>>(
			[this, request]()
			{
			return this->cancelKeyDeletion(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

KmsClient::DisableKeyOutcome KmsClient::disableKey(const DisableKeyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DisableKeyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DisableKeyOutcome(DisableKeyResult(outcome.result()));
	else
		return DisableKeyOutcome(outcome.error());
}

void KmsClient::disableKeyAsync(const DisableKeyRequest& request, const DisableKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, disableKey(request), context);
	};

	asyncExecute(new Runnable(fn));
}

KmsClient::DisableKeyOutcomeCallable KmsClient::disableKeyCallable(const DisableKeyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DisableKeyOutcome()>>(
			[this, request]()
			{
			return this->disableKey(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

KmsClient::DecryptOutcome KmsClient::decrypt(const DecryptRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DecryptOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DecryptOutcome(DecryptResult(outcome.result()));
	else
		return DecryptOutcome(outcome.error());
}

void KmsClient::decryptAsync(const DecryptRequest& request, const DecryptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, decrypt(request), context);
	};

	asyncExecute(new Runnable(fn));
}

KmsClient::DecryptOutcomeCallable KmsClient::decryptCallable(const DecryptRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DecryptOutcome()>>(
			[this, request]()
			{
			return this->decrypt(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

KmsClient::DeleteAliasOutcome KmsClient::deleteAlias(const DeleteAliasRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteAliasOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteAliasOutcome(DeleteAliasResult(outcome.result()));
	else
		return DeleteAliasOutcome(outcome.error());
}

void KmsClient::deleteAliasAsync(const DeleteAliasRequest& request, const DeleteAliasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteAlias(request), context);
	};

	asyncExecute(new Runnable(fn));
}

KmsClient::DeleteAliasOutcomeCallable KmsClient::deleteAliasCallable(const DeleteAliasRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteAliasOutcome()>>(
			[this, request]()
			{
			return this->deleteAlias(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

KmsClient::TagResourceOutcome KmsClient::tagResource(const TagResourceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return TagResourceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return TagResourceOutcome(TagResourceResult(outcome.result()));
	else
		return TagResourceOutcome(outcome.error());
}

void KmsClient::tagResourceAsync(const TagResourceRequest& request, const TagResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, tagResource(request), context);
	};

	asyncExecute(new Runnable(fn));
}

KmsClient::TagResourceOutcomeCallable KmsClient::tagResourceCallable(const TagResourceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TagResourceOutcome()>>(
			[this, request]()
			{
			return this->tagResource(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

KmsClient::DescribeKeyOutcome KmsClient::describeKey(const DescribeKeyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeKeyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeKeyOutcome(DescribeKeyResult(outcome.result()));
	else
		return DescribeKeyOutcome(outcome.error());
}

void KmsClient::describeKeyAsync(const DescribeKeyRequest& request, const DescribeKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeKey(request), context);
	};

	asyncExecute(new Runnable(fn));
}

KmsClient::DescribeKeyOutcomeCallable KmsClient::describeKeyCallable(const DescribeKeyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeKeyOutcome()>>(
			[this, request]()
			{
			return this->describeKey(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

KmsClient::CreateAliasOutcome KmsClient::createAlias(const CreateAliasRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateAliasOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateAliasOutcome(CreateAliasResult(outcome.result()));
	else
		return CreateAliasOutcome(outcome.error());
}

void KmsClient::createAliasAsync(const CreateAliasRequest& request, const CreateAliasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createAlias(request), context);
	};

	asyncExecute(new Runnable(fn));
}

KmsClient::CreateAliasOutcomeCallable KmsClient::createAliasCallable(const CreateAliasRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateAliasOutcome()>>(
			[this, request]()
			{
			return this->createAlias(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

KmsClient::DeleteKeyMaterialOutcome KmsClient::deleteKeyMaterial(const DeleteKeyMaterialRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteKeyMaterialOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteKeyMaterialOutcome(DeleteKeyMaterialResult(outcome.result()));
	else
		return DeleteKeyMaterialOutcome(outcome.error());
}

void KmsClient::deleteKeyMaterialAsync(const DeleteKeyMaterialRequest& request, const DeleteKeyMaterialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteKeyMaterial(request), context);
	};

	asyncExecute(new Runnable(fn));
}

KmsClient::DeleteKeyMaterialOutcomeCallable KmsClient::deleteKeyMaterialCallable(const DeleteKeyMaterialRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteKeyMaterialOutcome()>>(
			[this, request]()
			{
			return this->deleteKeyMaterial(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

KmsClient::ListResourceTagsOutcome KmsClient::listResourceTags(const ListResourceTagsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListResourceTagsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListResourceTagsOutcome(ListResourceTagsResult(outcome.result()));
	else
		return ListResourceTagsOutcome(outcome.error());
}

void KmsClient::listResourceTagsAsync(const ListResourceTagsRequest& request, const ListResourceTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listResourceTags(request), context);
	};

	asyncExecute(new Runnable(fn));
}

KmsClient::ListResourceTagsOutcomeCallable KmsClient::listResourceTagsCallable(const ListResourceTagsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListResourceTagsOutcome()>>(
			[this, request]()
			{
			return this->listResourceTags(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

KmsClient::ImportKeyMaterialOutcome KmsClient::importKeyMaterial(const ImportKeyMaterialRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ImportKeyMaterialOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ImportKeyMaterialOutcome(ImportKeyMaterialResult(outcome.result()));
	else
		return ImportKeyMaterialOutcome(outcome.error());
}

void KmsClient::importKeyMaterialAsync(const ImportKeyMaterialRequest& request, const ImportKeyMaterialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, importKeyMaterial(request), context);
	};

	asyncExecute(new Runnable(fn));
}

KmsClient::ImportKeyMaterialOutcomeCallable KmsClient::importKeyMaterialCallable(const ImportKeyMaterialRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ImportKeyMaterialOutcome()>>(
			[this, request]()
			{
			return this->importKeyMaterial(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

KmsClient::EncryptOutcome KmsClient::encrypt(const EncryptRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EncryptOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EncryptOutcome(EncryptResult(outcome.result()));
	else
		return EncryptOutcome(outcome.error());
}

void KmsClient::encryptAsync(const EncryptRequest& request, const EncryptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, encrypt(request), context);
	};

	asyncExecute(new Runnable(fn));
}

KmsClient::EncryptOutcomeCallable KmsClient::encryptCallable(const EncryptRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EncryptOutcome()>>(
			[this, request]()
			{
			return this->encrypt(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

KmsClient::UpdateAliasOutcome KmsClient::updateAlias(const UpdateAliasRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateAliasOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateAliasOutcome(UpdateAliasResult(outcome.result()));
	else
		return UpdateAliasOutcome(outcome.error());
}

void KmsClient::updateAliasAsync(const UpdateAliasRequest& request, const UpdateAliasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateAlias(request), context);
	};

	asyncExecute(new Runnable(fn));
}

KmsClient::UpdateAliasOutcomeCallable KmsClient::updateAliasCallable(const UpdateAliasRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateAliasOutcome()>>(
			[this, request]()
			{
			return this->updateAlias(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

KmsClient::UntagResourceOutcome KmsClient::untagResource(const UntagResourceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UntagResourceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UntagResourceOutcome(UntagResourceResult(outcome.result()));
	else
		return UntagResourceOutcome(outcome.error());
}

void KmsClient::untagResourceAsync(const UntagResourceRequest& request, const UntagResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, untagResource(request), context);
	};

	asyncExecute(new Runnable(fn));
}

KmsClient::UntagResourceOutcomeCallable KmsClient::untagResourceCallable(const UntagResourceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UntagResourceOutcome()>>(
			[this, request]()
			{
			return this->untagResource(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

KmsClient::ListAliasesByKeyIdOutcome KmsClient::listAliasesByKeyId(const ListAliasesByKeyIdRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAliasesByKeyIdOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAliasesByKeyIdOutcome(ListAliasesByKeyIdResult(outcome.result()));
	else
		return ListAliasesByKeyIdOutcome(outcome.error());
}

void KmsClient::listAliasesByKeyIdAsync(const ListAliasesByKeyIdRequest& request, const ListAliasesByKeyIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAliasesByKeyId(request), context);
	};

	asyncExecute(new Runnable(fn));
}

KmsClient::ListAliasesByKeyIdOutcomeCallable KmsClient::listAliasesByKeyIdCallable(const ListAliasesByKeyIdRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAliasesByKeyIdOutcome()>>(
			[this, request]()
			{
			return this->listAliasesByKeyId(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

KmsClient::EnableKeyOutcome KmsClient::enableKey(const EnableKeyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EnableKeyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EnableKeyOutcome(EnableKeyResult(outcome.result()));
	else
		return EnableKeyOutcome(outcome.error());
}

void KmsClient::enableKeyAsync(const EnableKeyRequest& request, const EnableKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, enableKey(request), context);
	};

	asyncExecute(new Runnable(fn));
}

KmsClient::EnableKeyOutcomeCallable KmsClient::enableKeyCallable(const EnableKeyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EnableKeyOutcome()>>(
			[this, request]()
			{
			return this->enableKey(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

KmsClient::DescribeRegionsOutcome KmsClient::describeRegions(const DescribeRegionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRegionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRegionsOutcome(DescribeRegionsResult(outcome.result()));
	else
		return DescribeRegionsOutcome(outcome.error());
}

void KmsClient::describeRegionsAsync(const DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRegions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

KmsClient::DescribeRegionsOutcomeCallable KmsClient::describeRegionsCallable(const DescribeRegionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRegionsOutcome()>>(
			[this, request]()
			{
			return this->describeRegions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

KmsClient::ScheduleKeyDeletionOutcome KmsClient::scheduleKeyDeletion(const ScheduleKeyDeletionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ScheduleKeyDeletionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ScheduleKeyDeletionOutcome(ScheduleKeyDeletionResult(outcome.result()));
	else
		return ScheduleKeyDeletionOutcome(outcome.error());
}

void KmsClient::scheduleKeyDeletionAsync(const ScheduleKeyDeletionRequest& request, const ScheduleKeyDeletionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, scheduleKeyDeletion(request), context);
	};

	asyncExecute(new Runnable(fn));
}

KmsClient::ScheduleKeyDeletionOutcomeCallable KmsClient::scheduleKeyDeletionCallable(const ScheduleKeyDeletionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ScheduleKeyDeletionOutcome()>>(
			[this, request]()
			{
			return this->scheduleKeyDeletion(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

KmsClient::ListKeysOutcome KmsClient::listKeys(const ListKeysRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListKeysOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListKeysOutcome(ListKeysResult(outcome.result()));
	else
		return ListKeysOutcome(outcome.error());
}

void KmsClient::listKeysAsync(const ListKeysRequest& request, const ListKeysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listKeys(request), context);
	};

	asyncExecute(new Runnable(fn));
}

KmsClient::ListKeysOutcomeCallable KmsClient::listKeysCallable(const ListKeysRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListKeysOutcome()>>(
			[this, request]()
			{
			return this->listKeys(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

KmsClient::DescribeServiceOutcome KmsClient::describeService(const DescribeServiceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeServiceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeServiceOutcome(DescribeServiceResult(outcome.result()));
	else
		return DescribeServiceOutcome(outcome.error());
}

void KmsClient::describeServiceAsync(const DescribeServiceRequest& request, const DescribeServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeService(request), context);
	};

	asyncExecute(new Runnable(fn));
}

KmsClient::DescribeServiceOutcomeCallable KmsClient::describeServiceCallable(const DescribeServiceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeServiceOutcome()>>(
			[this, request]()
			{
			return this->describeService(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

KmsClient::GetParametersForImportOutcome KmsClient::getParametersForImport(const GetParametersForImportRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetParametersForImportOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetParametersForImportOutcome(GetParametersForImportResult(outcome.result()));
	else
		return GetParametersForImportOutcome(outcome.error());
}

void KmsClient::getParametersForImportAsync(const GetParametersForImportRequest& request, const GetParametersForImportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getParametersForImport(request), context);
	};

	asyncExecute(new Runnable(fn));
}

KmsClient::GetParametersForImportOutcomeCallable KmsClient::getParametersForImportCallable(const GetParametersForImportRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetParametersForImportOutcome()>>(
			[this, request]()
			{
			return this->getParametersForImport(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

KmsClient::CreateKeyOutcome KmsClient::createKey(const CreateKeyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateKeyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateKeyOutcome(CreateKeyResult(outcome.result()));
	else
		return CreateKeyOutcome(outcome.error());
}

void KmsClient::createKeyAsync(const CreateKeyRequest& request, const CreateKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createKey(request), context);
	};

	asyncExecute(new Runnable(fn));
}

KmsClient::CreateKeyOutcomeCallable KmsClient::createKeyCallable(const CreateKeyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateKeyOutcome()>>(
			[this, request]()
			{
			return this->createKey(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

