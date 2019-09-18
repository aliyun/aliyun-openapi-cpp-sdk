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

#include <alibabacloud/arms4finance/ARMS4FINANCEClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::ARMS4FINANCE;
using namespace AlibabaCloud::ARMS4FINANCE::Model;

namespace
{
	const std::string SERVICE_NAME = "ARMS4FINANCE";
}

ARMS4FINANCEClient::ARMS4FINANCEClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "arms4finance");
}

ARMS4FINANCEClient::ARMS4FINANCEClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "arms4finance");
}

ARMS4FINANCEClient::ARMS4FINANCEClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "arms4finance");
}

ARMS4FINANCEClient::~ARMS4FINANCEClient()
{}

ARMS4FINANCEClient::ARMSQueryDataSetOutcome ARMS4FINANCEClient::aRMSQueryDataSet(const ARMSQueryDataSetRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ARMSQueryDataSetOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ARMSQueryDataSetOutcome(ARMSQueryDataSetResult(outcome.result()));
	else
		return ARMSQueryDataSetOutcome(outcome.error());
}

void ARMS4FINANCEClient::aRMSQueryDataSetAsync(const ARMSQueryDataSetRequest& request, const ARMSQueryDataSetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, aRMSQueryDataSet(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMS4FINANCEClient::ARMSQueryDataSetOutcomeCallable ARMS4FINANCEClient::aRMSQueryDataSetCallable(const ARMSQueryDataSetRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ARMSQueryDataSetOutcome()>>(
			[this, request]()
			{
			return this->aRMSQueryDataSet(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMS4FINANCEClient::WhereInDimQueryOutcome ARMS4FINANCEClient::whereInDimQuery(const WhereInDimQueryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return WhereInDimQueryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return WhereInDimQueryOutcome(WhereInDimQueryResult(outcome.result()));
	else
		return WhereInDimQueryOutcome(outcome.error());
}

void ARMS4FINANCEClient::whereInDimQueryAsync(const WhereInDimQueryRequest& request, const WhereInDimQueryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, whereInDimQuery(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMS4FINANCEClient::WhereInDimQueryOutcomeCallable ARMS4FINANCEClient::whereInDimQueryCallable(const WhereInDimQueryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<WhereInDimQueryOutcome()>>(
			[this, request]()
			{
			return this->whereInDimQuery(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

