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

#include <alibabacloud/websitebuild/WebsiteBuildClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::WebsiteBuild;
using namespace AlibabaCloud::WebsiteBuild::Model;

namespace
{
	const std::string SERVICE_NAME = "WebsiteBuild";
}

WebsiteBuildClient::WebsiteBuildClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

WebsiteBuildClient::WebsiteBuildClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

WebsiteBuildClient::WebsiteBuildClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

WebsiteBuildClient::~WebsiteBuildClient()
{}

WebsiteBuildClient::CreateLogoTaskOutcome WebsiteBuildClient::createLogoTask(const CreateLogoTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateLogoTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateLogoTaskOutcome(CreateLogoTaskResult(outcome.result()));
	else
		return CreateLogoTaskOutcome(outcome.error());
}

void WebsiteBuildClient::createLogoTaskAsync(const CreateLogoTaskRequest& request, const CreateLogoTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createLogoTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

WebsiteBuildClient::CreateLogoTaskOutcomeCallable WebsiteBuildClient::createLogoTaskCallable(const CreateLogoTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateLogoTaskOutcome()>>(
			[this, request]()
			{
			return this->createLogoTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

WebsiteBuildClient::GetCreateLogoTaskOutcome WebsiteBuildClient::getCreateLogoTask(const GetCreateLogoTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetCreateLogoTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetCreateLogoTaskOutcome(GetCreateLogoTaskResult(outcome.result()));
	else
		return GetCreateLogoTaskOutcome(outcome.error());
}

void WebsiteBuildClient::getCreateLogoTaskAsync(const GetCreateLogoTaskRequest& request, const GetCreateLogoTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getCreateLogoTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

WebsiteBuildClient::GetCreateLogoTaskOutcomeCallable WebsiteBuildClient::getCreateLogoTaskCallable(const GetCreateLogoTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetCreateLogoTaskOutcome()>>(
			[this, request]()
			{
			return this->getCreateLogoTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

WebsiteBuildClient::OperateAppInstanceForPartnerOutcome WebsiteBuildClient::operateAppInstanceForPartner(const OperateAppInstanceForPartnerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OperateAppInstanceForPartnerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OperateAppInstanceForPartnerOutcome(OperateAppInstanceForPartnerResult(outcome.result()));
	else
		return OperateAppInstanceForPartnerOutcome(outcome.error());
}

void WebsiteBuildClient::operateAppInstanceForPartnerAsync(const OperateAppInstanceForPartnerRequest& request, const OperateAppInstanceForPartnerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, operateAppInstanceForPartner(request), context);
	};

	asyncExecute(new Runnable(fn));
}

WebsiteBuildClient::OperateAppInstanceForPartnerOutcomeCallable WebsiteBuildClient::operateAppInstanceForPartnerCallable(const OperateAppInstanceForPartnerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OperateAppInstanceForPartnerOutcome()>>(
			[this, request]()
			{
			return this->operateAppInstanceForPartner(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

WebsiteBuildClient::OperateAppServiceForPartnerOutcome WebsiteBuildClient::operateAppServiceForPartner(const OperateAppServiceForPartnerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OperateAppServiceForPartnerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OperateAppServiceForPartnerOutcome(OperateAppServiceForPartnerResult(outcome.result()));
	else
		return OperateAppServiceForPartnerOutcome(outcome.error());
}

void WebsiteBuildClient::operateAppServiceForPartnerAsync(const OperateAppServiceForPartnerRequest& request, const OperateAppServiceForPartnerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, operateAppServiceForPartner(request), context);
	};

	asyncExecute(new Runnable(fn));
}

WebsiteBuildClient::OperateAppServiceForPartnerOutcomeCallable WebsiteBuildClient::operateAppServiceForPartnerCallable(const OperateAppServiceForPartnerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OperateAppServiceForPartnerOutcome()>>(
			[this, request]()
			{
			return this->operateAppServiceForPartner(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

WebsiteBuildClient::SearchImageOutcome WebsiteBuildClient::searchImage(const SearchImageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SearchImageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SearchImageOutcome(SearchImageResult(outcome.result()));
	else
		return SearchImageOutcome(outcome.error());
}

void WebsiteBuildClient::searchImageAsync(const SearchImageRequest& request, const SearchImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, searchImage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

WebsiteBuildClient::SearchImageOutcomeCallable WebsiteBuildClient::searchImageCallable(const SearchImageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SearchImageOutcome()>>(
			[this, request]()
			{
			return this->searchImage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

WebsiteBuildClient::SyncAppInstanceForPartnerOutcome WebsiteBuildClient::syncAppInstanceForPartner(const SyncAppInstanceForPartnerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SyncAppInstanceForPartnerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SyncAppInstanceForPartnerOutcome(SyncAppInstanceForPartnerResult(outcome.result()));
	else
		return SyncAppInstanceForPartnerOutcome(outcome.error());
}

void WebsiteBuildClient::syncAppInstanceForPartnerAsync(const SyncAppInstanceForPartnerRequest& request, const SyncAppInstanceForPartnerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, syncAppInstanceForPartner(request), context);
	};

	asyncExecute(new Runnable(fn));
}

WebsiteBuildClient::SyncAppInstanceForPartnerOutcomeCallable WebsiteBuildClient::syncAppInstanceForPartnerCallable(const SyncAppInstanceForPartnerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SyncAppInstanceForPartnerOutcome()>>(
			[this, request]()
			{
			return this->syncAppInstanceForPartner(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

