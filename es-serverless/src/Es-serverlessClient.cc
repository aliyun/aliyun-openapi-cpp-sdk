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

#include <alibabacloud/es-serverless/Es_serverlessClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Es_serverless;
using namespace AlibabaCloud::Es_serverless::Model;

namespace
{
	const std::string SERVICE_NAME = "es-serverless";
}

Es_serverlessClient::Es_serverlessClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RoaServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "elkxops");
}

Es_serverlessClient::Es_serverlessClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RoaServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "elkxops");
}

Es_serverlessClient::Es_serverlessClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RoaServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "elkxops");
}

Es_serverlessClient::~Es_serverlessClient()
{}

Es_serverlessClient::CreateAppOutcome Es_serverlessClient::createApp(const CreateAppRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateAppOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateAppOutcome(CreateAppResult(outcome.result()));
	else
		return CreateAppOutcome(outcome.error());
}

void Es_serverlessClient::createAppAsync(const CreateAppRequest& request, const CreateAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createApp(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Es_serverlessClient::CreateAppOutcomeCallable Es_serverlessClient::createAppCallable(const CreateAppRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateAppOutcome()>>(
			[this, request]()
			{
			return this->createApp(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Es_serverlessClient::CreateDataStreamOutcome Es_serverlessClient::createDataStream(const CreateDataStreamRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateDataStreamOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateDataStreamOutcome(CreateDataStreamResult(outcome.result()));
	else
		return CreateDataStreamOutcome(outcome.error());
}

void Es_serverlessClient::createDataStreamAsync(const CreateDataStreamRequest& request, const CreateDataStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createDataStream(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Es_serverlessClient::CreateDataStreamOutcomeCallable Es_serverlessClient::createDataStreamCallable(const CreateDataStreamRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateDataStreamOutcome()>>(
			[this, request]()
			{
			return this->createDataStream(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Es_serverlessClient::DeleteAccessTokenOutcome Es_serverlessClient::deleteAccessToken(const DeleteAccessTokenRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteAccessTokenOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteAccessTokenOutcome(DeleteAccessTokenResult(outcome.result()));
	else
		return DeleteAccessTokenOutcome(outcome.error());
}

void Es_serverlessClient::deleteAccessTokenAsync(const DeleteAccessTokenRequest& request, const DeleteAccessTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteAccessToken(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Es_serverlessClient::DeleteAccessTokenOutcomeCallable Es_serverlessClient::deleteAccessTokenCallable(const DeleteAccessTokenRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteAccessTokenOutcome()>>(
			[this, request]()
			{
			return this->deleteAccessToken(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Es_serverlessClient::DeleteAppOutcome Es_serverlessClient::deleteApp(const DeleteAppRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteAppOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteAppOutcome(DeleteAppResult(outcome.result()));
	else
		return DeleteAppOutcome(outcome.error());
}

void Es_serverlessClient::deleteAppAsync(const DeleteAppRequest& request, const DeleteAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteApp(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Es_serverlessClient::DeleteAppOutcomeCallable Es_serverlessClient::deleteAppCallable(const DeleteAppRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteAppOutcome()>>(
			[this, request]()
			{
			return this->deleteApp(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Es_serverlessClient::DeleteDataStreamOutcome Es_serverlessClient::deleteDataStream(const DeleteDataStreamRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteDataStreamOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteDataStreamOutcome(DeleteDataStreamResult(outcome.result()));
	else
		return DeleteDataStreamOutcome(outcome.error());
}

void Es_serverlessClient::deleteDataStreamAsync(const DeleteDataStreamRequest& request, const DeleteDataStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteDataStream(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Es_serverlessClient::DeleteDataStreamOutcomeCallable Es_serverlessClient::deleteDataStreamCallable(const DeleteDataStreamRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteDataStreamOutcome()>>(
			[this, request]()
			{
			return this->deleteDataStream(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Es_serverlessClient::DescibeRegionsOutcome Es_serverlessClient::descibeRegions(const DescibeRegionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescibeRegionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescibeRegionsOutcome(DescibeRegionsResult(outcome.result()));
	else
		return DescibeRegionsOutcome(outcome.error());
}

void Es_serverlessClient::descibeRegionsAsync(const DescibeRegionsRequest& request, const DescibeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, descibeRegions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Es_serverlessClient::DescibeRegionsOutcomeCallable Es_serverlessClient::descibeRegionsCallable(const DescibeRegionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescibeRegionsOutcome()>>(
			[this, request]()
			{
			return this->descibeRegions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Es_serverlessClient::DisableAccessTokenOutcome Es_serverlessClient::disableAccessToken(const DisableAccessTokenRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DisableAccessTokenOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DisableAccessTokenOutcome(DisableAccessTokenResult(outcome.result()));
	else
		return DisableAccessTokenOutcome(outcome.error());
}

void Es_serverlessClient::disableAccessTokenAsync(const DisableAccessTokenRequest& request, const DisableAccessTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, disableAccessToken(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Es_serverlessClient::DisableAccessTokenOutcomeCallable Es_serverlessClient::disableAccessTokenCallable(const DisableAccessTokenRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DisableAccessTokenOutcome()>>(
			[this, request]()
			{
			return this->disableAccessToken(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Es_serverlessClient::EnableAccessTokenOutcome Es_serverlessClient::enableAccessToken(const EnableAccessTokenRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EnableAccessTokenOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EnableAccessTokenOutcome(EnableAccessTokenResult(outcome.result()));
	else
		return EnableAccessTokenOutcome(outcome.error());
}

void Es_serverlessClient::enableAccessTokenAsync(const EnableAccessTokenRequest& request, const EnableAccessTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, enableAccessToken(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Es_serverlessClient::EnableAccessTokenOutcomeCallable Es_serverlessClient::enableAccessTokenCallable(const EnableAccessTokenRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EnableAccessTokenOutcome()>>(
			[this, request]()
			{
			return this->enableAccessToken(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Es_serverlessClient::GenerateAcccessTokenOutcome Es_serverlessClient::generateAcccessToken(const GenerateAcccessTokenRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GenerateAcccessTokenOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GenerateAcccessTokenOutcome(GenerateAcccessTokenResult(outcome.result()));
	else
		return GenerateAcccessTokenOutcome(outcome.error());
}

void Es_serverlessClient::generateAcccessTokenAsync(const GenerateAcccessTokenRequest& request, const GenerateAcccessTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, generateAcccessToken(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Es_serverlessClient::GenerateAcccessTokenOutcomeCallable Es_serverlessClient::generateAcccessTokenCallable(const GenerateAcccessTokenRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GenerateAcccessTokenOutcome()>>(
			[this, request]()
			{
			return this->generateAcccessToken(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Es_serverlessClient::GetAppOutcome Es_serverlessClient::getApp(const GetAppRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetAppOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetAppOutcome(GetAppResult(outcome.result()));
	else
		return GetAppOutcome(outcome.error());
}

void Es_serverlessClient::getAppAsync(const GetAppRequest& request, const GetAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getApp(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Es_serverlessClient::GetAppOutcomeCallable Es_serverlessClient::getAppCallable(const GetAppRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetAppOutcome()>>(
			[this, request]()
			{
			return this->getApp(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Es_serverlessClient::GetDataStreamOutcome Es_serverlessClient::getDataStream(const GetDataStreamRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetDataStreamOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetDataStreamOutcome(GetDataStreamResult(outcome.result()));
	else
		return GetDataStreamOutcome(outcome.error());
}

void Es_serverlessClient::getDataStreamAsync(const GetDataStreamRequest& request, const GetDataStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getDataStream(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Es_serverlessClient::GetDataStreamOutcomeCallable Es_serverlessClient::getDataStreamCallable(const GetDataStreamRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetDataStreamOutcome()>>(
			[this, request]()
			{
			return this->getDataStream(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Es_serverlessClient::GetRegionInfoOutcome Es_serverlessClient::getRegionInfo(const GetRegionInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetRegionInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetRegionInfoOutcome(GetRegionInfoResult(outcome.result()));
	else
		return GetRegionInfoOutcome(outcome.error());
}

void Es_serverlessClient::getRegionInfoAsync(const GetRegionInfoRequest& request, const GetRegionInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getRegionInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Es_serverlessClient::GetRegionInfoOutcomeCallable Es_serverlessClient::getRegionInfoCallable(const GetRegionInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetRegionInfoOutcome()>>(
			[this, request]()
			{
			return this->getRegionInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Es_serverlessClient::ListAccessTokensOutcome Es_serverlessClient::listAccessTokens(const ListAccessTokensRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAccessTokensOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAccessTokensOutcome(ListAccessTokensResult(outcome.result()));
	else
		return ListAccessTokensOutcome(outcome.error());
}

void Es_serverlessClient::listAccessTokensAsync(const ListAccessTokensRequest& request, const ListAccessTokensAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAccessTokens(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Es_serverlessClient::ListAccessTokensOutcomeCallable Es_serverlessClient::listAccessTokensCallable(const ListAccessTokensRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAccessTokensOutcome()>>(
			[this, request]()
			{
			return this->listAccessTokens(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Es_serverlessClient::ListAppsOutcome Es_serverlessClient::listApps(const ListAppsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAppsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAppsOutcome(ListAppsResult(outcome.result()));
	else
		return ListAppsOutcome(outcome.error());
}

void Es_serverlessClient::listAppsAsync(const ListAppsRequest& request, const ListAppsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listApps(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Es_serverlessClient::ListAppsOutcomeCallable Es_serverlessClient::listAppsCallable(const ListAppsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAppsOutcome()>>(
			[this, request]()
			{
			return this->listApps(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Es_serverlessClient::ListDataStreamsOutcome Es_serverlessClient::listDataStreams(const ListDataStreamsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDataStreamsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDataStreamsOutcome(ListDataStreamsResult(outcome.result()));
	else
		return ListDataStreamsOutcome(outcome.error());
}

void Es_serverlessClient::listDataStreamsAsync(const ListDataStreamsRequest& request, const ListDataStreamsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDataStreams(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Es_serverlessClient::ListDataStreamsOutcomeCallable Es_serverlessClient::listDataStreamsCallable(const ListDataStreamsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDataStreamsOutcome()>>(
			[this, request]()
			{
			return this->listDataStreams(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Es_serverlessClient::UpdateAppOutcome Es_serverlessClient::updateApp(const UpdateAppRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateAppOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateAppOutcome(UpdateAppResult(outcome.result()));
	else
		return UpdateAppOutcome(outcome.error());
}

void Es_serverlessClient::updateAppAsync(const UpdateAppRequest& request, const UpdateAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateApp(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Es_serverlessClient::UpdateAppOutcomeCallable Es_serverlessClient::updateAppCallable(const UpdateAppRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateAppOutcome()>>(
			[this, request]()
			{
			return this->updateApp(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Es_serverlessClient::UpdateDataStreamOutcome Es_serverlessClient::updateDataStream(const UpdateDataStreamRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateDataStreamOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateDataStreamOutcome(UpdateDataStreamResult(outcome.result()));
	else
		return UpdateDataStreamOutcome(outcome.error());
}

void Es_serverlessClient::updateDataStreamAsync(const UpdateDataStreamRequest& request, const UpdateDataStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateDataStream(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Es_serverlessClient::UpdateDataStreamOutcomeCallable Es_serverlessClient::updateDataStreamCallable(const UpdateDataStreamRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateDataStreamOutcome()>>(
			[this, request]()
			{
			return this->updateDataStream(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

