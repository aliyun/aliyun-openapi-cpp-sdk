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

#include <alibabacloud/nis/NisClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Nis;
using namespace AlibabaCloud::Nis::Model;

namespace
{
	const std::string SERVICE_NAME = "nis";
}

NisClient::NisClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "networkana");
}

NisClient::NisClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "networkana");
}

NisClient::NisClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "networkana");
}

NisClient::~NisClient()
{}

NisClient::CreateAndAnalyzeNetworkPathOutcome NisClient::createAndAnalyzeNetworkPath(const CreateAndAnalyzeNetworkPathRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateAndAnalyzeNetworkPathOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateAndAnalyzeNetworkPathOutcome(CreateAndAnalyzeNetworkPathResult(outcome.result()));
	else
		return CreateAndAnalyzeNetworkPathOutcome(outcome.error());
}

void NisClient::createAndAnalyzeNetworkPathAsync(const CreateAndAnalyzeNetworkPathRequest& request, const CreateAndAnalyzeNetworkPathAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createAndAnalyzeNetworkPath(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NisClient::CreateAndAnalyzeNetworkPathOutcomeCallable NisClient::createAndAnalyzeNetworkPathCallable(const CreateAndAnalyzeNetworkPathRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateAndAnalyzeNetworkPathOutcome()>>(
			[this, request]()
			{
			return this->createAndAnalyzeNetworkPath(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NisClient::CreateNetworkPathOutcome NisClient::createNetworkPath(const CreateNetworkPathRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateNetworkPathOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateNetworkPathOutcome(CreateNetworkPathResult(outcome.result()));
	else
		return CreateNetworkPathOutcome(outcome.error());
}

void NisClient::createNetworkPathAsync(const CreateNetworkPathRequest& request, const CreateNetworkPathAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createNetworkPath(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NisClient::CreateNetworkPathOutcomeCallable NisClient::createNetworkPathCallable(const CreateNetworkPathRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateNetworkPathOutcome()>>(
			[this, request]()
			{
			return this->createNetworkPath(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NisClient::CreateNetworkReachableAnalysisOutcome NisClient::createNetworkReachableAnalysis(const CreateNetworkReachableAnalysisRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateNetworkReachableAnalysisOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateNetworkReachableAnalysisOutcome(CreateNetworkReachableAnalysisResult(outcome.result()));
	else
		return CreateNetworkReachableAnalysisOutcome(outcome.error());
}

void NisClient::createNetworkReachableAnalysisAsync(const CreateNetworkReachableAnalysisRequest& request, const CreateNetworkReachableAnalysisAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createNetworkReachableAnalysis(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NisClient::CreateNetworkReachableAnalysisOutcomeCallable NisClient::createNetworkReachableAnalysisCallable(const CreateNetworkReachableAnalysisRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateNetworkReachableAnalysisOutcome()>>(
			[this, request]()
			{
			return this->createNetworkReachableAnalysis(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NisClient::DeleteNetworkPathOutcome NisClient::deleteNetworkPath(const DeleteNetworkPathRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteNetworkPathOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteNetworkPathOutcome(DeleteNetworkPathResult(outcome.result()));
	else
		return DeleteNetworkPathOutcome(outcome.error());
}

void NisClient::deleteNetworkPathAsync(const DeleteNetworkPathRequest& request, const DeleteNetworkPathAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteNetworkPath(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NisClient::DeleteNetworkPathOutcomeCallable NisClient::deleteNetworkPathCallable(const DeleteNetworkPathRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteNetworkPathOutcome()>>(
			[this, request]()
			{
			return this->deleteNetworkPath(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NisClient::DeleteNetworkReachableAnalysisOutcome NisClient::deleteNetworkReachableAnalysis(const DeleteNetworkReachableAnalysisRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteNetworkReachableAnalysisOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteNetworkReachableAnalysisOutcome(DeleteNetworkReachableAnalysisResult(outcome.result()));
	else
		return DeleteNetworkReachableAnalysisOutcome(outcome.error());
}

void NisClient::deleteNetworkReachableAnalysisAsync(const DeleteNetworkReachableAnalysisRequest& request, const DeleteNetworkReachableAnalysisAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteNetworkReachableAnalysis(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NisClient::DeleteNetworkReachableAnalysisOutcomeCallable NisClient::deleteNetworkReachableAnalysisCallable(const DeleteNetworkReachableAnalysisRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteNetworkReachableAnalysisOutcome()>>(
			[this, request]()
			{
			return this->deleteNetworkReachableAnalysis(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NisClient::GetInternetTupleOutcome NisClient::getInternetTuple(const GetInternetTupleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetInternetTupleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetInternetTupleOutcome(GetInternetTupleResult(outcome.result()));
	else
		return GetInternetTupleOutcome(outcome.error());
}

void NisClient::getInternetTupleAsync(const GetInternetTupleRequest& request, const GetInternetTupleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getInternetTuple(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NisClient::GetInternetTupleOutcomeCallable NisClient::getInternetTupleCallable(const GetInternetTupleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetInternetTupleOutcome()>>(
			[this, request]()
			{
			return this->getInternetTuple(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NisClient::GetNatTopNOutcome NisClient::getNatTopN(const GetNatTopNRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetNatTopNOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetNatTopNOutcome(GetNatTopNResult(outcome.result()));
	else
		return GetNatTopNOutcome(outcome.error());
}

void NisClient::getNatTopNAsync(const GetNatTopNRequest& request, const GetNatTopNAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getNatTopN(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NisClient::GetNatTopNOutcomeCallable NisClient::getNatTopNCallable(const GetNatTopNRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetNatTopNOutcome()>>(
			[this, request]()
			{
			return this->getNatTopN(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NisClient::GetNetworkReachableAnalysisOutcome NisClient::getNetworkReachableAnalysis(const GetNetworkReachableAnalysisRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetNetworkReachableAnalysisOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetNetworkReachableAnalysisOutcome(GetNetworkReachableAnalysisResult(outcome.result()));
	else
		return GetNetworkReachableAnalysisOutcome(outcome.error());
}

void NisClient::getNetworkReachableAnalysisAsync(const GetNetworkReachableAnalysisRequest& request, const GetNetworkReachableAnalysisAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getNetworkReachableAnalysis(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NisClient::GetNetworkReachableAnalysisOutcomeCallable NisClient::getNetworkReachableAnalysisCallable(const GetNetworkReachableAnalysisRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetNetworkReachableAnalysisOutcome()>>(
			[this, request]()
			{
			return this->getNetworkReachableAnalysis(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NisClient::GetNisNetworkMetricsOutcome NisClient::getNisNetworkMetrics(const GetNisNetworkMetricsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetNisNetworkMetricsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetNisNetworkMetricsOutcome(GetNisNetworkMetricsResult(outcome.result()));
	else
		return GetNisNetworkMetricsOutcome(outcome.error());
}

void NisClient::getNisNetworkMetricsAsync(const GetNisNetworkMetricsRequest& request, const GetNisNetworkMetricsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getNisNetworkMetrics(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NisClient::GetNisNetworkMetricsOutcomeCallable NisClient::getNisNetworkMetricsCallable(const GetNisNetworkMetricsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetNisNetworkMetricsOutcome()>>(
			[this, request]()
			{
			return this->getNisNetworkMetrics(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NisClient::GetNisNetworkRankingOutcome NisClient::getNisNetworkRanking(const GetNisNetworkRankingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetNisNetworkRankingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetNisNetworkRankingOutcome(GetNisNetworkRankingResult(outcome.result()));
	else
		return GetNisNetworkRankingOutcome(outcome.error());
}

void NisClient::getNisNetworkRankingAsync(const GetNisNetworkRankingRequest& request, const GetNisNetworkRankingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getNisNetworkRanking(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NisClient::GetNisNetworkRankingOutcomeCallable NisClient::getNisNetworkRankingCallable(const GetNisNetworkRankingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetNisNetworkRankingOutcome()>>(
			[this, request]()
			{
			return this->getNisNetworkRanking(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NisClient::GetTransitRouterFlowTopNOutcome NisClient::getTransitRouterFlowTopN(const GetTransitRouterFlowTopNRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetTransitRouterFlowTopNOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetTransitRouterFlowTopNOutcome(GetTransitRouterFlowTopNResult(outcome.result()));
	else
		return GetTransitRouterFlowTopNOutcome(outcome.error());
}

void NisClient::getTransitRouterFlowTopNAsync(const GetTransitRouterFlowTopNRequest& request, const GetTransitRouterFlowTopNAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getTransitRouterFlowTopN(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NisClient::GetTransitRouterFlowTopNOutcomeCallable NisClient::getTransitRouterFlowTopNCallable(const GetTransitRouterFlowTopNRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetTransitRouterFlowTopNOutcome()>>(
			[this, request]()
			{
			return this->getTransitRouterFlowTopN(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NisClient::GetVbrFlowTopNOutcome NisClient::getVbrFlowTopN(const GetVbrFlowTopNRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetVbrFlowTopNOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetVbrFlowTopNOutcome(GetVbrFlowTopNResult(outcome.result()));
	else
		return GetVbrFlowTopNOutcome(outcome.error());
}

void NisClient::getVbrFlowTopNAsync(const GetVbrFlowTopNRequest& request, const GetVbrFlowTopNAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getVbrFlowTopN(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NisClient::GetVbrFlowTopNOutcomeCallable NisClient::getVbrFlowTopNCallable(const GetVbrFlowTopNRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetVbrFlowTopNOutcome()>>(
			[this, request]()
			{
			return this->getVbrFlowTopN(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

