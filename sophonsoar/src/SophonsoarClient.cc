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

#include <alibabacloud/sophonsoar/SophonsoarClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Sophonsoar;
using namespace AlibabaCloud::Sophonsoar::Model;

namespace
{
	const std::string SERVICE_NAME = "sophonsoar";
}

SophonsoarClient::SophonsoarClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

SophonsoarClient::SophonsoarClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

SophonsoarClient::SophonsoarClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

SophonsoarClient::~SophonsoarClient()
{}

SophonsoarClient::BatchModifyInstanceStatusOutcome SophonsoarClient::batchModifyInstanceStatus(const BatchModifyInstanceStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BatchModifyInstanceStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BatchModifyInstanceStatusOutcome(BatchModifyInstanceStatusResult(outcome.result()));
	else
		return BatchModifyInstanceStatusOutcome(outcome.error());
}

void SophonsoarClient::batchModifyInstanceStatusAsync(const BatchModifyInstanceStatusRequest& request, const BatchModifyInstanceStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, batchModifyInstanceStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SophonsoarClient::BatchModifyInstanceStatusOutcomeCallable SophonsoarClient::batchModifyInstanceStatusCallable(const BatchModifyInstanceStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BatchModifyInstanceStatusOutcome()>>(
			[this, request]()
			{
			return this->batchModifyInstanceStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SophonsoarClient::ComparePlaybooksOutcome SophonsoarClient::comparePlaybooks(const ComparePlaybooksRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ComparePlaybooksOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ComparePlaybooksOutcome(ComparePlaybooksResult(outcome.result()));
	else
		return ComparePlaybooksOutcome(outcome.error());
}

void SophonsoarClient::comparePlaybooksAsync(const ComparePlaybooksRequest& request, const ComparePlaybooksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, comparePlaybooks(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SophonsoarClient::ComparePlaybooksOutcomeCallable SophonsoarClient::comparePlaybooksCallable(const ComparePlaybooksRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ComparePlaybooksOutcome()>>(
			[this, request]()
			{
			return this->comparePlaybooks(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SophonsoarClient::ConvertPlaybookOutcome SophonsoarClient::convertPlaybook(const ConvertPlaybookRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ConvertPlaybookOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ConvertPlaybookOutcome(ConvertPlaybookResult(outcome.result()));
	else
		return ConvertPlaybookOutcome(outcome.error());
}

void SophonsoarClient::convertPlaybookAsync(const ConvertPlaybookRequest& request, const ConvertPlaybookAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, convertPlaybook(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SophonsoarClient::ConvertPlaybookOutcomeCallable SophonsoarClient::convertPlaybookCallable(const ConvertPlaybookRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ConvertPlaybookOutcome()>>(
			[this, request]()
			{
			return this->convertPlaybook(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SophonsoarClient::CreatePlaybookOutcome SophonsoarClient::createPlaybook(const CreatePlaybookRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreatePlaybookOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreatePlaybookOutcome(CreatePlaybookResult(outcome.result()));
	else
		return CreatePlaybookOutcome(outcome.error());
}

void SophonsoarClient::createPlaybookAsync(const CreatePlaybookRequest& request, const CreatePlaybookAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createPlaybook(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SophonsoarClient::CreatePlaybookOutcomeCallable SophonsoarClient::createPlaybookCallable(const CreatePlaybookRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreatePlaybookOutcome()>>(
			[this, request]()
			{
			return this->createPlaybook(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SophonsoarClient::DebugPlaybookOutcome SophonsoarClient::debugPlaybook(const DebugPlaybookRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DebugPlaybookOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DebugPlaybookOutcome(DebugPlaybookResult(outcome.result()));
	else
		return DebugPlaybookOutcome(outcome.error());
}

void SophonsoarClient::debugPlaybookAsync(const DebugPlaybookRequest& request, const DebugPlaybookAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, debugPlaybook(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SophonsoarClient::DebugPlaybookOutcomeCallable SophonsoarClient::debugPlaybookCallable(const DebugPlaybookRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DebugPlaybookOutcome()>>(
			[this, request]()
			{
			return this->debugPlaybook(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SophonsoarClient::DeleteComponentAssetOutcome SophonsoarClient::deleteComponentAsset(const DeleteComponentAssetRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteComponentAssetOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteComponentAssetOutcome(DeleteComponentAssetResult(outcome.result()));
	else
		return DeleteComponentAssetOutcome(outcome.error());
}

void SophonsoarClient::deleteComponentAssetAsync(const DeleteComponentAssetRequest& request, const DeleteComponentAssetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteComponentAsset(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SophonsoarClient::DeleteComponentAssetOutcomeCallable SophonsoarClient::deleteComponentAssetCallable(const DeleteComponentAssetRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteComponentAssetOutcome()>>(
			[this, request]()
			{
			return this->deleteComponentAsset(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SophonsoarClient::DeletePlaybookOutcome SophonsoarClient::deletePlaybook(const DeletePlaybookRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeletePlaybookOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeletePlaybookOutcome(DeletePlaybookResult(outcome.result()));
	else
		return DeletePlaybookOutcome(outcome.error());
}

void SophonsoarClient::deletePlaybookAsync(const DeletePlaybookRequest& request, const DeletePlaybookAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deletePlaybook(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SophonsoarClient::DeletePlaybookOutcomeCallable SophonsoarClient::deletePlaybookCallable(const DeletePlaybookRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeletePlaybookOutcome()>>(
			[this, request]()
			{
			return this->deletePlaybook(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SophonsoarClient::DescribeComponentAssetFormOutcome SophonsoarClient::describeComponentAssetForm(const DescribeComponentAssetFormRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeComponentAssetFormOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeComponentAssetFormOutcome(DescribeComponentAssetFormResult(outcome.result()));
	else
		return DescribeComponentAssetFormOutcome(outcome.error());
}

void SophonsoarClient::describeComponentAssetFormAsync(const DescribeComponentAssetFormRequest& request, const DescribeComponentAssetFormAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeComponentAssetForm(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SophonsoarClient::DescribeComponentAssetFormOutcomeCallable SophonsoarClient::describeComponentAssetFormCallable(const DescribeComponentAssetFormRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeComponentAssetFormOutcome()>>(
			[this, request]()
			{
			return this->describeComponentAssetForm(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SophonsoarClient::DescribeComponentAssetsOutcome SophonsoarClient::describeComponentAssets(const DescribeComponentAssetsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeComponentAssetsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeComponentAssetsOutcome(DescribeComponentAssetsResult(outcome.result()));
	else
		return DescribeComponentAssetsOutcome(outcome.error());
}

void SophonsoarClient::describeComponentAssetsAsync(const DescribeComponentAssetsRequest& request, const DescribeComponentAssetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeComponentAssets(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SophonsoarClient::DescribeComponentAssetsOutcomeCallable SophonsoarClient::describeComponentAssetsCallable(const DescribeComponentAssetsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeComponentAssetsOutcome()>>(
			[this, request]()
			{
			return this->describeComponentAssets(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SophonsoarClient::DescribeComponentListOutcome SophonsoarClient::describeComponentList(const DescribeComponentListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeComponentListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeComponentListOutcome(DescribeComponentListResult(outcome.result()));
	else
		return DescribeComponentListOutcome(outcome.error());
}

void SophonsoarClient::describeComponentListAsync(const DescribeComponentListRequest& request, const DescribeComponentListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeComponentList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SophonsoarClient::DescribeComponentListOutcomeCallable SophonsoarClient::describeComponentListCallable(const DescribeComponentListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeComponentListOutcome()>>(
			[this, request]()
			{
			return this->describeComponentList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SophonsoarClient::DescribeComponentPlaybookOutcome SophonsoarClient::describeComponentPlaybook(const DescribeComponentPlaybookRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeComponentPlaybookOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeComponentPlaybookOutcome(DescribeComponentPlaybookResult(outcome.result()));
	else
		return DescribeComponentPlaybookOutcome(outcome.error());
}

void SophonsoarClient::describeComponentPlaybookAsync(const DescribeComponentPlaybookRequest& request, const DescribeComponentPlaybookAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeComponentPlaybook(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SophonsoarClient::DescribeComponentPlaybookOutcomeCallable SophonsoarClient::describeComponentPlaybookCallable(const DescribeComponentPlaybookRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeComponentPlaybookOutcome()>>(
			[this, request]()
			{
			return this->describeComponentPlaybook(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SophonsoarClient::DescribeComponentsJsOutcome SophonsoarClient::describeComponentsJs(const DescribeComponentsJsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeComponentsJsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeComponentsJsOutcome(DescribeComponentsJsResult(outcome.result()));
	else
		return DescribeComponentsJsOutcome(outcome.error());
}

void SophonsoarClient::describeComponentsJsAsync(const DescribeComponentsJsRequest& request, const DescribeComponentsJsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeComponentsJs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SophonsoarClient::DescribeComponentsJsOutcomeCallable SophonsoarClient::describeComponentsJsCallable(const DescribeComponentsJsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeComponentsJsOutcome()>>(
			[this, request]()
			{
			return this->describeComponentsJs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SophonsoarClient::DescribeDistinctReleasesOutcome SophonsoarClient::describeDistinctReleases(const DescribeDistinctReleasesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDistinctReleasesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDistinctReleasesOutcome(DescribeDistinctReleasesResult(outcome.result()));
	else
		return DescribeDistinctReleasesOutcome(outcome.error());
}

void SophonsoarClient::describeDistinctReleasesAsync(const DescribeDistinctReleasesRequest& request, const DescribeDistinctReleasesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDistinctReleases(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SophonsoarClient::DescribeDistinctReleasesOutcomeCallable SophonsoarClient::describeDistinctReleasesCallable(const DescribeDistinctReleasesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDistinctReleasesOutcome()>>(
			[this, request]()
			{
			return this->describeDistinctReleases(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SophonsoarClient::DescribeEnumItemsOutcome SophonsoarClient::describeEnumItems(const DescribeEnumItemsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeEnumItemsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeEnumItemsOutcome(DescribeEnumItemsResult(outcome.result()));
	else
		return DescribeEnumItemsOutcome(outcome.error());
}

void SophonsoarClient::describeEnumItemsAsync(const DescribeEnumItemsRequest& request, const DescribeEnumItemsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeEnumItems(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SophonsoarClient::DescribeEnumItemsOutcomeCallable SophonsoarClient::describeEnumItemsCallable(const DescribeEnumItemsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeEnumItemsOutcome()>>(
			[this, request]()
			{
			return this->describeEnumItems(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SophonsoarClient::DescribeExecutePlaybooksOutcome SophonsoarClient::describeExecutePlaybooks(const DescribeExecutePlaybooksRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeExecutePlaybooksOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeExecutePlaybooksOutcome(DescribeExecutePlaybooksResult(outcome.result()));
	else
		return DescribeExecutePlaybooksOutcome(outcome.error());
}

void SophonsoarClient::describeExecutePlaybooksAsync(const DescribeExecutePlaybooksRequest& request, const DescribeExecutePlaybooksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeExecutePlaybooks(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SophonsoarClient::DescribeExecutePlaybooksOutcomeCallable SophonsoarClient::describeExecutePlaybooksCallable(const DescribeExecutePlaybooksRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeExecutePlaybooksOutcome()>>(
			[this, request]()
			{
			return this->describeExecutePlaybooks(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SophonsoarClient::DescribeFieldOutcome SophonsoarClient::describeField(const DescribeFieldRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeFieldOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeFieldOutcome(DescribeFieldResult(outcome.result()));
	else
		return DescribeFieldOutcome(outcome.error());
}

void SophonsoarClient::describeFieldAsync(const DescribeFieldRequest& request, const DescribeFieldAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeField(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SophonsoarClient::DescribeFieldOutcomeCallable SophonsoarClient::describeFieldCallable(const DescribeFieldRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeFieldOutcome()>>(
			[this, request]()
			{
			return this->describeField(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SophonsoarClient::DescribeLatestRecordSchemaOutcome SophonsoarClient::describeLatestRecordSchema(const DescribeLatestRecordSchemaRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLatestRecordSchemaOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLatestRecordSchemaOutcome(DescribeLatestRecordSchemaResult(outcome.result()));
	else
		return DescribeLatestRecordSchemaOutcome(outcome.error());
}

void SophonsoarClient::describeLatestRecordSchemaAsync(const DescribeLatestRecordSchemaRequest& request, const DescribeLatestRecordSchemaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLatestRecordSchema(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SophonsoarClient::DescribeLatestRecordSchemaOutcomeCallable SophonsoarClient::describeLatestRecordSchemaCallable(const DescribeLatestRecordSchemaRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLatestRecordSchemaOutcome()>>(
			[this, request]()
			{
			return this->describeLatestRecordSchema(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SophonsoarClient::DescribeNodeParamTagsOutcome SophonsoarClient::describeNodeParamTags(const DescribeNodeParamTagsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeNodeParamTagsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeNodeParamTagsOutcome(DescribeNodeParamTagsResult(outcome.result()));
	else
		return DescribeNodeParamTagsOutcome(outcome.error());
}

void SophonsoarClient::describeNodeParamTagsAsync(const DescribeNodeParamTagsRequest& request, const DescribeNodeParamTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeNodeParamTags(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SophonsoarClient::DescribeNodeParamTagsOutcomeCallable SophonsoarClient::describeNodeParamTagsCallable(const DescribeNodeParamTagsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeNodeParamTagsOutcome()>>(
			[this, request]()
			{
			return this->describeNodeParamTags(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SophonsoarClient::DescribeNodeUsedInfosOutcome SophonsoarClient::describeNodeUsedInfos(const DescribeNodeUsedInfosRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeNodeUsedInfosOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeNodeUsedInfosOutcome(DescribeNodeUsedInfosResult(outcome.result()));
	else
		return DescribeNodeUsedInfosOutcome(outcome.error());
}

void SophonsoarClient::describeNodeUsedInfosAsync(const DescribeNodeUsedInfosRequest& request, const DescribeNodeUsedInfosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeNodeUsedInfos(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SophonsoarClient::DescribeNodeUsedInfosOutcomeCallable SophonsoarClient::describeNodeUsedInfosCallable(const DescribeNodeUsedInfosRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeNodeUsedInfosOutcome()>>(
			[this, request]()
			{
			return this->describeNodeUsedInfos(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SophonsoarClient::DescribePlaybookOutcome SophonsoarClient::describePlaybook(const DescribePlaybookRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribePlaybookOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribePlaybookOutcome(DescribePlaybookResult(outcome.result()));
	else
		return DescribePlaybookOutcome(outcome.error());
}

void SophonsoarClient::describePlaybookAsync(const DescribePlaybookRequest& request, const DescribePlaybookAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describePlaybook(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SophonsoarClient::DescribePlaybookOutcomeCallable SophonsoarClient::describePlaybookCallable(const DescribePlaybookRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribePlaybookOutcome()>>(
			[this, request]()
			{
			return this->describePlaybook(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SophonsoarClient::DescribePlaybookInputOutputOutcome SophonsoarClient::describePlaybookInputOutput(const DescribePlaybookInputOutputRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribePlaybookInputOutputOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribePlaybookInputOutputOutcome(DescribePlaybookInputOutputResult(outcome.result()));
	else
		return DescribePlaybookInputOutputOutcome(outcome.error());
}

void SophonsoarClient::describePlaybookInputOutputAsync(const DescribePlaybookInputOutputRequest& request, const DescribePlaybookInputOutputAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describePlaybookInputOutput(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SophonsoarClient::DescribePlaybookInputOutputOutcomeCallable SophonsoarClient::describePlaybookInputOutputCallable(const DescribePlaybookInputOutputRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribePlaybookInputOutputOutcome()>>(
			[this, request]()
			{
			return this->describePlaybookInputOutput(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SophonsoarClient::DescribePlaybookMetricsOutcome SophonsoarClient::describePlaybookMetrics(const DescribePlaybookMetricsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribePlaybookMetricsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribePlaybookMetricsOutcome(DescribePlaybookMetricsResult(outcome.result()));
	else
		return DescribePlaybookMetricsOutcome(outcome.error());
}

void SophonsoarClient::describePlaybookMetricsAsync(const DescribePlaybookMetricsRequest& request, const DescribePlaybookMetricsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describePlaybookMetrics(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SophonsoarClient::DescribePlaybookMetricsOutcomeCallable SophonsoarClient::describePlaybookMetricsCallable(const DescribePlaybookMetricsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribePlaybookMetricsOutcome()>>(
			[this, request]()
			{
			return this->describePlaybookMetrics(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SophonsoarClient::DescribePlaybookNodesOutputOutcome SophonsoarClient::describePlaybookNodesOutput(const DescribePlaybookNodesOutputRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribePlaybookNodesOutputOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribePlaybookNodesOutputOutcome(DescribePlaybookNodesOutputResult(outcome.result()));
	else
		return DescribePlaybookNodesOutputOutcome(outcome.error());
}

void SophonsoarClient::describePlaybookNodesOutputAsync(const DescribePlaybookNodesOutputRequest& request, const DescribePlaybookNodesOutputAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describePlaybookNodesOutput(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SophonsoarClient::DescribePlaybookNodesOutputOutcomeCallable SophonsoarClient::describePlaybookNodesOutputCallable(const DescribePlaybookNodesOutputRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribePlaybookNodesOutputOutcome()>>(
			[this, request]()
			{
			return this->describePlaybookNodesOutput(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SophonsoarClient::DescribePlaybookNumberMetricsOutcome SophonsoarClient::describePlaybookNumberMetrics(const DescribePlaybookNumberMetricsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribePlaybookNumberMetricsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribePlaybookNumberMetricsOutcome(DescribePlaybookNumberMetricsResult(outcome.result()));
	else
		return DescribePlaybookNumberMetricsOutcome(outcome.error());
}

void SophonsoarClient::describePlaybookNumberMetricsAsync(const DescribePlaybookNumberMetricsRequest& request, const DescribePlaybookNumberMetricsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describePlaybookNumberMetrics(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SophonsoarClient::DescribePlaybookNumberMetricsOutcomeCallable SophonsoarClient::describePlaybookNumberMetricsCallable(const DescribePlaybookNumberMetricsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribePlaybookNumberMetricsOutcome()>>(
			[this, request]()
			{
			return this->describePlaybookNumberMetrics(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SophonsoarClient::DescribePlaybookReleasesOutcome SophonsoarClient::describePlaybookReleases(const DescribePlaybookReleasesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribePlaybookReleasesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribePlaybookReleasesOutcome(DescribePlaybookReleasesResult(outcome.result()));
	else
		return DescribePlaybookReleasesOutcome(outcome.error());
}

void SophonsoarClient::describePlaybookReleasesAsync(const DescribePlaybookReleasesRequest& request, const DescribePlaybookReleasesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describePlaybookReleases(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SophonsoarClient::DescribePlaybookReleasesOutcomeCallable SophonsoarClient::describePlaybookReleasesCallable(const DescribePlaybookReleasesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribePlaybookReleasesOutcome()>>(
			[this, request]()
			{
			return this->describePlaybookReleases(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SophonsoarClient::DescribePlaybooksOutcome SophonsoarClient::describePlaybooks(const DescribePlaybooksRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribePlaybooksOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribePlaybooksOutcome(DescribePlaybooksResult(outcome.result()));
	else
		return DescribePlaybooksOutcome(outcome.error());
}

void SophonsoarClient::describePlaybooksAsync(const DescribePlaybooksRequest& request, const DescribePlaybooksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describePlaybooks(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SophonsoarClient::DescribePlaybooksOutcomeCallable SophonsoarClient::describePlaybooksCallable(const DescribePlaybooksRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribePlaybooksOutcome()>>(
			[this, request]()
			{
			return this->describePlaybooks(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SophonsoarClient::DescribePopApiOutcome SophonsoarClient::describePopApi(const DescribePopApiRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribePopApiOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribePopApiOutcome(DescribePopApiResult(outcome.result()));
	else
		return DescribePopApiOutcome(outcome.error());
}

void SophonsoarClient::describePopApiAsync(const DescribePopApiRequest& request, const DescribePopApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describePopApi(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SophonsoarClient::DescribePopApiOutcomeCallable SophonsoarClient::describePopApiCallable(const DescribePopApiRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribePopApiOutcome()>>(
			[this, request]()
			{
			return this->describePopApi(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SophonsoarClient::DescribeProcessTaskCountOutcome SophonsoarClient::describeProcessTaskCount(const DescribeProcessTaskCountRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeProcessTaskCountOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeProcessTaskCountOutcome(DescribeProcessTaskCountResult(outcome.result()));
	else
		return DescribeProcessTaskCountOutcome(outcome.error());
}

void SophonsoarClient::describeProcessTaskCountAsync(const DescribeProcessTaskCountRequest& request, const DescribeProcessTaskCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeProcessTaskCount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SophonsoarClient::DescribeProcessTaskCountOutcomeCallable SophonsoarClient::describeProcessTaskCountCallable(const DescribeProcessTaskCountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeProcessTaskCountOutcome()>>(
			[this, request]()
			{
			return this->describeProcessTaskCount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SophonsoarClient::DescribeProcessTasksOutcome SophonsoarClient::describeProcessTasks(const DescribeProcessTasksRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeProcessTasksOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeProcessTasksOutcome(DescribeProcessTasksResult(outcome.result()));
	else
		return DescribeProcessTasksOutcome(outcome.error());
}

void SophonsoarClient::describeProcessTasksAsync(const DescribeProcessTasksRequest& request, const DescribeProcessTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeProcessTasks(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SophonsoarClient::DescribeProcessTasksOutcomeCallable SophonsoarClient::describeProcessTasksCallable(const DescribeProcessTasksRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeProcessTasksOutcome()>>(
			[this, request]()
			{
			return this->describeProcessTasks(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SophonsoarClient::DescribeSoarRecordActionOutputListOutcome SophonsoarClient::describeSoarRecordActionOutputList(const DescribeSoarRecordActionOutputListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSoarRecordActionOutputListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSoarRecordActionOutputListOutcome(DescribeSoarRecordActionOutputListResult(outcome.result()));
	else
		return DescribeSoarRecordActionOutputListOutcome(outcome.error());
}

void SophonsoarClient::describeSoarRecordActionOutputListAsync(const DescribeSoarRecordActionOutputListRequest& request, const DescribeSoarRecordActionOutputListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSoarRecordActionOutputList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SophonsoarClient::DescribeSoarRecordActionOutputListOutcomeCallable SophonsoarClient::describeSoarRecordActionOutputListCallable(const DescribeSoarRecordActionOutputListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSoarRecordActionOutputListOutcome()>>(
			[this, request]()
			{
			return this->describeSoarRecordActionOutputList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SophonsoarClient::DescribeSoarRecordInOutputOutcome SophonsoarClient::describeSoarRecordInOutput(const DescribeSoarRecordInOutputRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSoarRecordInOutputOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSoarRecordInOutputOutcome(DescribeSoarRecordInOutputResult(outcome.result()));
	else
		return DescribeSoarRecordInOutputOutcome(outcome.error());
}

void SophonsoarClient::describeSoarRecordInOutputAsync(const DescribeSoarRecordInOutputRequest& request, const DescribeSoarRecordInOutputAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSoarRecordInOutput(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SophonsoarClient::DescribeSoarRecordInOutputOutcomeCallable SophonsoarClient::describeSoarRecordInOutputCallable(const DescribeSoarRecordInOutputRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSoarRecordInOutputOutcome()>>(
			[this, request]()
			{
			return this->describeSoarRecordInOutput(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SophonsoarClient::DescribeSoarRecordsOutcome SophonsoarClient::describeSoarRecords(const DescribeSoarRecordsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSoarRecordsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSoarRecordsOutcome(DescribeSoarRecordsResult(outcome.result()));
	else
		return DescribeSoarRecordsOutcome(outcome.error());
}

void SophonsoarClient::describeSoarRecordsAsync(const DescribeSoarRecordsRequest& request, const DescribeSoarRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSoarRecords(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SophonsoarClient::DescribeSoarRecordsOutcomeCallable SophonsoarClient::describeSoarRecordsCallable(const DescribeSoarRecordsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSoarRecordsOutcome()>>(
			[this, request]()
			{
			return this->describeSoarRecords(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SophonsoarClient::DescribeSoarTaskAndActionsOutcome SophonsoarClient::describeSoarTaskAndActions(const DescribeSoarTaskAndActionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSoarTaskAndActionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSoarTaskAndActionsOutcome(DescribeSoarTaskAndActionsResult(outcome.result()));
	else
		return DescribeSoarTaskAndActionsOutcome(outcome.error());
}

void SophonsoarClient::describeSoarTaskAndActionsAsync(const DescribeSoarTaskAndActionsRequest& request, const DescribeSoarTaskAndActionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSoarTaskAndActions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SophonsoarClient::DescribeSoarTaskAndActionsOutcomeCallable SophonsoarClient::describeSoarTaskAndActionsCallable(const DescribeSoarTaskAndActionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSoarTaskAndActionsOutcome()>>(
			[this, request]()
			{
			return this->describeSoarTaskAndActions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SophonsoarClient::DescribeSophonCommandsOutcome SophonsoarClient::describeSophonCommands(const DescribeSophonCommandsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSophonCommandsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSophonCommandsOutcome(DescribeSophonCommandsResult(outcome.result()));
	else
		return DescribeSophonCommandsOutcome(outcome.error());
}

void SophonsoarClient::describeSophonCommandsAsync(const DescribeSophonCommandsRequest& request, const DescribeSophonCommandsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSophonCommands(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SophonsoarClient::DescribeSophonCommandsOutcomeCallable SophonsoarClient::describeSophonCommandsCallable(const DescribeSophonCommandsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSophonCommandsOutcome()>>(
			[this, request]()
			{
			return this->describeSophonCommands(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SophonsoarClient::DescriberPython3ScriptLogsOutcome SophonsoarClient::describerPython3ScriptLogs(const DescriberPython3ScriptLogsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescriberPython3ScriptLogsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescriberPython3ScriptLogsOutcome(DescriberPython3ScriptLogsResult(outcome.result()));
	else
		return DescriberPython3ScriptLogsOutcome(outcome.error());
}

void SophonsoarClient::describerPython3ScriptLogsAsync(const DescriberPython3ScriptLogsRequest& request, const DescriberPython3ScriptLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describerPython3ScriptLogs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SophonsoarClient::DescriberPython3ScriptLogsOutcomeCallable SophonsoarClient::describerPython3ScriptLogsCallable(const DescriberPython3ScriptLogsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescriberPython3ScriptLogsOutcome()>>(
			[this, request]()
			{
			return this->describerPython3ScriptLogs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SophonsoarClient::ModifyComponentAssetOutcome SophonsoarClient::modifyComponentAsset(const ModifyComponentAssetRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyComponentAssetOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyComponentAssetOutcome(ModifyComponentAssetResult(outcome.result()));
	else
		return ModifyComponentAssetOutcome(outcome.error());
}

void SophonsoarClient::modifyComponentAssetAsync(const ModifyComponentAssetRequest& request, const ModifyComponentAssetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyComponentAsset(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SophonsoarClient::ModifyComponentAssetOutcomeCallable SophonsoarClient::modifyComponentAssetCallable(const ModifyComponentAssetRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyComponentAssetOutcome()>>(
			[this, request]()
			{
			return this->modifyComponentAsset(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SophonsoarClient::ModifyPlaybookOutcome SophonsoarClient::modifyPlaybook(const ModifyPlaybookRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyPlaybookOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyPlaybookOutcome(ModifyPlaybookResult(outcome.result()));
	else
		return ModifyPlaybookOutcome(outcome.error());
}

void SophonsoarClient::modifyPlaybookAsync(const ModifyPlaybookRequest& request, const ModifyPlaybookAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyPlaybook(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SophonsoarClient::ModifyPlaybookOutcomeCallable SophonsoarClient::modifyPlaybookCallable(const ModifyPlaybookRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyPlaybookOutcome()>>(
			[this, request]()
			{
			return this->modifyPlaybook(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SophonsoarClient::ModifyPlaybookInputOutputOutcome SophonsoarClient::modifyPlaybookInputOutput(const ModifyPlaybookInputOutputRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyPlaybookInputOutputOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyPlaybookInputOutputOutcome(ModifyPlaybookInputOutputResult(outcome.result()));
	else
		return ModifyPlaybookInputOutputOutcome(outcome.error());
}

void SophonsoarClient::modifyPlaybookInputOutputAsync(const ModifyPlaybookInputOutputRequest& request, const ModifyPlaybookInputOutputAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyPlaybookInputOutput(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SophonsoarClient::ModifyPlaybookInputOutputOutcomeCallable SophonsoarClient::modifyPlaybookInputOutputCallable(const ModifyPlaybookInputOutputRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyPlaybookInputOutputOutcome()>>(
			[this, request]()
			{
			return this->modifyPlaybookInputOutput(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SophonsoarClient::ModifyPlaybookInstanceStatusOutcome SophonsoarClient::modifyPlaybookInstanceStatus(const ModifyPlaybookInstanceStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyPlaybookInstanceStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyPlaybookInstanceStatusOutcome(ModifyPlaybookInstanceStatusResult(outcome.result()));
	else
		return ModifyPlaybookInstanceStatusOutcome(outcome.error());
}

void SophonsoarClient::modifyPlaybookInstanceStatusAsync(const ModifyPlaybookInstanceStatusRequest& request, const ModifyPlaybookInstanceStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyPlaybookInstanceStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SophonsoarClient::ModifyPlaybookInstanceStatusOutcomeCallable SophonsoarClient::modifyPlaybookInstanceStatusCallable(const ModifyPlaybookInstanceStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyPlaybookInstanceStatusOutcome()>>(
			[this, request]()
			{
			return this->modifyPlaybookInstanceStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SophonsoarClient::PublishPlaybookOutcome SophonsoarClient::publishPlaybook(const PublishPlaybookRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PublishPlaybookOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PublishPlaybookOutcome(PublishPlaybookResult(outcome.result()));
	else
		return PublishPlaybookOutcome(outcome.error());
}

void SophonsoarClient::publishPlaybookAsync(const PublishPlaybookRequest& request, const PublishPlaybookAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, publishPlaybook(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SophonsoarClient::PublishPlaybookOutcomeCallable SophonsoarClient::publishPlaybookCallable(const PublishPlaybookRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PublishPlaybookOutcome()>>(
			[this, request]()
			{
			return this->publishPlaybook(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SophonsoarClient::QueryTreeDataOutcome SophonsoarClient::queryTreeData(const QueryTreeDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryTreeDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryTreeDataOutcome(QueryTreeDataResult(outcome.result()));
	else
		return QueryTreeDataOutcome(outcome.error());
}

void SophonsoarClient::queryTreeDataAsync(const QueryTreeDataRequest& request, const QueryTreeDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryTreeData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SophonsoarClient::QueryTreeDataOutcomeCallable SophonsoarClient::queryTreeDataCallable(const QueryTreeDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryTreeDataOutcome()>>(
			[this, request]()
			{
			return this->queryTreeData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SophonsoarClient::RenamePlaybookNodeOutcome SophonsoarClient::renamePlaybookNode(const RenamePlaybookNodeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RenamePlaybookNodeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RenamePlaybookNodeOutcome(RenamePlaybookNodeResult(outcome.result()));
	else
		return RenamePlaybookNodeOutcome(outcome.error());
}

void SophonsoarClient::renamePlaybookNodeAsync(const RenamePlaybookNodeRequest& request, const RenamePlaybookNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, renamePlaybookNode(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SophonsoarClient::RenamePlaybookNodeOutcomeCallable SophonsoarClient::renamePlaybookNodeCallable(const RenamePlaybookNodeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RenamePlaybookNodeOutcome()>>(
			[this, request]()
			{
			return this->renamePlaybookNode(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SophonsoarClient::RevertPlaybookReleaseOutcome SophonsoarClient::revertPlaybookRelease(const RevertPlaybookReleaseRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RevertPlaybookReleaseOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RevertPlaybookReleaseOutcome(RevertPlaybookReleaseResult(outcome.result()));
	else
		return RevertPlaybookReleaseOutcome(outcome.error());
}

void SophonsoarClient::revertPlaybookReleaseAsync(const RevertPlaybookReleaseRequest& request, const RevertPlaybookReleaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, revertPlaybookRelease(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SophonsoarClient::RevertPlaybookReleaseOutcomeCallable SophonsoarClient::revertPlaybookReleaseCallable(const RevertPlaybookReleaseRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RevertPlaybookReleaseOutcome()>>(
			[this, request]()
			{
			return this->revertPlaybookRelease(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SophonsoarClient::RunPython3ScriptOutcome SophonsoarClient::runPython3Script(const RunPython3ScriptRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RunPython3ScriptOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RunPython3ScriptOutcome(RunPython3ScriptResult(outcome.result()));
	else
		return RunPython3ScriptOutcome(outcome.error());
}

void SophonsoarClient::runPython3ScriptAsync(const RunPython3ScriptRequest& request, const RunPython3ScriptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, runPython3Script(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SophonsoarClient::RunPython3ScriptOutcomeCallable SophonsoarClient::runPython3ScriptCallable(const RunPython3ScriptRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RunPython3ScriptOutcome()>>(
			[this, request]()
			{
			return this->runPython3Script(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SophonsoarClient::TriggerPlaybookOutcome SophonsoarClient::triggerPlaybook(const TriggerPlaybookRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return TriggerPlaybookOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return TriggerPlaybookOutcome(TriggerPlaybookResult(outcome.result()));
	else
		return TriggerPlaybookOutcome(outcome.error());
}

void SophonsoarClient::triggerPlaybookAsync(const TriggerPlaybookRequest& request, const TriggerPlaybookAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, triggerPlaybook(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SophonsoarClient::TriggerPlaybookOutcomeCallable SophonsoarClient::triggerPlaybookCallable(const TriggerPlaybookRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TriggerPlaybookOutcome()>>(
			[this, request]()
			{
			return this->triggerPlaybook(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SophonsoarClient::TriggerProcessTaskOutcome SophonsoarClient::triggerProcessTask(const TriggerProcessTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return TriggerProcessTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return TriggerProcessTaskOutcome(TriggerProcessTaskResult(outcome.result()));
	else
		return TriggerProcessTaskOutcome(outcome.error());
}

void SophonsoarClient::triggerProcessTaskAsync(const TriggerProcessTaskRequest& request, const TriggerProcessTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, triggerProcessTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SophonsoarClient::TriggerProcessTaskOutcomeCallable SophonsoarClient::triggerProcessTaskCallable(const TriggerProcessTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TriggerProcessTaskOutcome()>>(
			[this, request]()
			{
			return this->triggerProcessTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SophonsoarClient::TriggerSophonPlaybookOutcome SophonsoarClient::triggerSophonPlaybook(const TriggerSophonPlaybookRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return TriggerSophonPlaybookOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return TriggerSophonPlaybookOutcome(TriggerSophonPlaybookResult(outcome.result()));
	else
		return TriggerSophonPlaybookOutcome(outcome.error());
}

void SophonsoarClient::triggerSophonPlaybookAsync(const TriggerSophonPlaybookRequest& request, const TriggerSophonPlaybookAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, triggerSophonPlaybook(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SophonsoarClient::TriggerSophonPlaybookOutcomeCallable SophonsoarClient::triggerSophonPlaybookCallable(const TriggerSophonPlaybookRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TriggerSophonPlaybookOutcome()>>(
			[this, request]()
			{
			return this->triggerSophonPlaybook(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SophonsoarClient::VerifyPlaybookOutcome SophonsoarClient::verifyPlaybook(const VerifyPlaybookRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return VerifyPlaybookOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return VerifyPlaybookOutcome(VerifyPlaybookResult(outcome.result()));
	else
		return VerifyPlaybookOutcome(outcome.error());
}

void SophonsoarClient::verifyPlaybookAsync(const VerifyPlaybookRequest& request, const VerifyPlaybookAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, verifyPlaybook(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SophonsoarClient::VerifyPlaybookOutcomeCallable SophonsoarClient::verifyPlaybookCallable(const VerifyPlaybookRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<VerifyPlaybookOutcome()>>(
			[this, request]()
			{
			return this->verifyPlaybook(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SophonsoarClient::VerifyPythonFileOutcome SophonsoarClient::verifyPythonFile(const VerifyPythonFileRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return VerifyPythonFileOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return VerifyPythonFileOutcome(VerifyPythonFileResult(outcome.result()));
	else
		return VerifyPythonFileOutcome(outcome.error());
}

void SophonsoarClient::verifyPythonFileAsync(const VerifyPythonFileRequest& request, const VerifyPythonFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, verifyPythonFile(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SophonsoarClient::VerifyPythonFileOutcomeCallable SophonsoarClient::verifyPythonFileCallable(const VerifyPythonFileRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<VerifyPythonFileOutcome()>>(
			[this, request]()
			{
			return this->verifyPythonFile(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

