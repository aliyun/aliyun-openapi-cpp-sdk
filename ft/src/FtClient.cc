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

#include <alibabacloud/ft/FtClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Ft;
using namespace AlibabaCloud::Ft::Model;

namespace
{
	const std::string SERVICE_NAME = "Ft";
}

FtClient::FtClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

FtClient::FtClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

FtClient::FtClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

FtClient::~FtClient()
{}

FtClient::DataRateLimitTestOutcome FtClient::dataRateLimitTest(const DataRateLimitTestRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DataRateLimitTestOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DataRateLimitTestOutcome(DataRateLimitTestResult(outcome.result()));
	else
		return DataRateLimitTestOutcome(outcome.error());
}

void FtClient::dataRateLimitTestAsync(const DataRateLimitTestRequest& request, const DataRateLimitTestAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, dataRateLimitTest(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FtClient::DataRateLimitTestOutcomeCallable FtClient::dataRateLimitTestCallable(const DataRateLimitTestRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DataRateLimitTestOutcome()>>(
			[this, request]()
			{
			return this->dataRateLimitTest(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FtClient::NormalRpcHsfApiOutcome FtClient::normalRpcHsfApi(const NormalRpcHsfApiRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return NormalRpcHsfApiOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return NormalRpcHsfApiOutcome(NormalRpcHsfApiResult(outcome.result()));
	else
		return NormalRpcHsfApiOutcome(outcome.error());
}

void FtClient::normalRpcHsfApiAsync(const NormalRpcHsfApiRequest& request, const NormalRpcHsfApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, normalRpcHsfApi(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FtClient::NormalRpcHsfApiOutcomeCallable FtClient::normalRpcHsfApiCallable(const NormalRpcHsfApiRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<NormalRpcHsfApiOutcome()>>(
			[this, request]()
			{
			return this->normalRpcHsfApi(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FtClient::NormalRpcHttpApiOutcome FtClient::normalRpcHttpApi(const NormalRpcHttpApiRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return NormalRpcHttpApiOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return NormalRpcHttpApiOutcome(NormalRpcHttpApiResult(outcome.result()));
	else
		return NormalRpcHttpApiOutcome(outcome.error());
}

void FtClient::normalRpcHttpApiAsync(const NormalRpcHttpApiRequest& request, const NormalRpcHttpApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, normalRpcHttpApi(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FtClient::NormalRpcHttpApiOutcomeCallable FtClient::normalRpcHttpApiCallable(const NormalRpcHttpApiRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<NormalRpcHttpApiOutcome()>>(
			[this, request]()
			{
			return this->normalRpcHttpApi(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FtClient::RpcDataUploadOutcome FtClient::rpcDataUpload(const RpcDataUploadRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RpcDataUploadOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RpcDataUploadOutcome(RpcDataUploadResult(outcome.result()));
	else
		return RpcDataUploadOutcome(outcome.error());
}

void FtClient::rpcDataUploadAsync(const RpcDataUploadRequest& request, const RpcDataUploadAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, rpcDataUpload(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FtClient::RpcDataUploadOutcomeCallable FtClient::rpcDataUploadCallable(const RpcDataUploadRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RpcDataUploadOutcome()>>(
			[this, request]()
			{
			return this->rpcDataUpload(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FtClient::RpcDataUploadAndDownloadOutcome FtClient::rpcDataUploadAndDownload(const RpcDataUploadAndDownloadRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RpcDataUploadAndDownloadOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RpcDataUploadAndDownloadOutcome(RpcDataUploadAndDownloadResult(outcome.result()));
	else
		return RpcDataUploadAndDownloadOutcome(outcome.error());
}

void FtClient::rpcDataUploadAndDownloadAsync(const RpcDataUploadAndDownloadRequest& request, const RpcDataUploadAndDownloadAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, rpcDataUploadAndDownload(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FtClient::RpcDataUploadAndDownloadOutcomeCallable FtClient::rpcDataUploadAndDownloadCallable(const RpcDataUploadAndDownloadRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RpcDataUploadAndDownloadOutcome()>>(
			[this, request]()
			{
			return this->rpcDataUploadAndDownload(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FtClient::RpcDataUploadTestOutcome FtClient::rpcDataUploadTest(const RpcDataUploadTestRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RpcDataUploadTestOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RpcDataUploadTestOutcome(RpcDataUploadTestResult(outcome.result()));
	else
		return RpcDataUploadTestOutcome(outcome.error());
}

void FtClient::rpcDataUploadTestAsync(const RpcDataUploadTestRequest& request, const RpcDataUploadTestAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, rpcDataUploadTest(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FtClient::RpcDataUploadTestOutcomeCallable FtClient::rpcDataUploadTestCallable(const RpcDataUploadTestRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RpcDataUploadTestOutcome()>>(
			[this, request]()
			{
			return this->rpcDataUploadTest(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

