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

#include <alibabacloud/qianzhou/QianzhouClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Qianzhou;
using namespace AlibabaCloud::Qianzhou::Model;

namespace
{
	const std::string SERVICE_NAME = "qianzhou";
}

QianzhouClient::QianzhouClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RoaServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

QianzhouClient::QianzhouClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RoaServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

QianzhouClient::QianzhouClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RoaServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

QianzhouClient::~QianzhouClient()
{}

QianzhouClient::AICreateSessionMessageOutcome QianzhouClient::aICreateSessionMessage(const AICreateSessionMessageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AICreateSessionMessageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AICreateSessionMessageOutcome(AICreateSessionMessageResult(outcome.result()));
	else
		return AICreateSessionMessageOutcome(outcome.error());
}

void QianzhouClient::aICreateSessionMessageAsync(const AICreateSessionMessageRequest& request, const AICreateSessionMessageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, aICreateSessionMessage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

QianzhouClient::AICreateSessionMessageOutcomeCallable QianzhouClient::aICreateSessionMessageCallable(const AICreateSessionMessageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AICreateSessionMessageOutcome()>>(
			[this, request]()
			{
			return this->aICreateSessionMessage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

QianzhouClient::CreateDiagnosisOutcome QianzhouClient::createDiagnosis(const CreateDiagnosisRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateDiagnosisOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateDiagnosisOutcome(CreateDiagnosisResult(outcome.result()));
	else
		return CreateDiagnosisOutcome(outcome.error());
}

void QianzhouClient::createDiagnosisAsync(const CreateDiagnosisRequest& request, const CreateDiagnosisAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createDiagnosis(request), context);
	};

	asyncExecute(new Runnable(fn));
}

QianzhouClient::CreateDiagnosisOutcomeCallable QianzhouClient::createDiagnosisCallable(const CreateDiagnosisRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateDiagnosisOutcome()>>(
			[this, request]()
			{
			return this->createDiagnosis(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

QianzhouClient::GetClusterOutcome QianzhouClient::getCluster(const GetClusterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetClusterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetClusterOutcome(GetClusterResult(outcome.result()));
	else
		return GetClusterOutcome(outcome.error());
}

void QianzhouClient::getClusterAsync(const GetClusterRequest& request, const GetClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getCluster(request), context);
	};

	asyncExecute(new Runnable(fn));
}

QianzhouClient::GetClusterOutcomeCallable QianzhouClient::getClusterCallable(const GetClusterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetClusterOutcome()>>(
			[this, request]()
			{
			return this->getCluster(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

QianzhouClient::GetClusterWarningOutcome QianzhouClient::getClusterWarning(const GetClusterWarningRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetClusterWarningOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetClusterWarningOutcome(GetClusterWarningResult(outcome.result()));
	else
		return GetClusterWarningOutcome(outcome.error());
}

void QianzhouClient::getClusterWarningAsync(const GetClusterWarningRequest& request, const GetClusterWarningAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getClusterWarning(request), context);
	};

	asyncExecute(new Runnable(fn));
}

QianzhouClient::GetClusterWarningOutcomeCallable QianzhouClient::getClusterWarningCallable(const GetClusterWarningRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetClusterWarningOutcome()>>(
			[this, request]()
			{
			return this->getClusterWarning(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

QianzhouClient::GetDiagnosisResultOutcome QianzhouClient::getDiagnosisResult(const GetDiagnosisResultRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetDiagnosisResultOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetDiagnosisResultOutcome(GetDiagnosisResultResult(outcome.result()));
	else
		return GetDiagnosisResultOutcome(outcome.error());
}

void QianzhouClient::getDiagnosisResultAsync(const GetDiagnosisResultRequest& request, const GetDiagnosisResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getDiagnosisResult(request), context);
	};

	asyncExecute(new Runnable(fn));
}

QianzhouClient::GetDiagnosisResultOutcomeCallable QianzhouClient::getDiagnosisResultCallable(const GetDiagnosisResultRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetDiagnosisResultOutcome()>>(
			[this, request]()
			{
			return this->getDiagnosisResult(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

QianzhouClient::GetUserClusterWarningOutcome QianzhouClient::getUserClusterWarning(const GetUserClusterWarningRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetUserClusterWarningOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetUserClusterWarningOutcome(GetUserClusterWarningResult(outcome.result()));
	else
		return GetUserClusterWarningOutcome(outcome.error());
}

void QianzhouClient::getUserClusterWarningAsync(const GetUserClusterWarningRequest& request, const GetUserClusterWarningAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getUserClusterWarning(request), context);
	};

	asyncExecute(new Runnable(fn));
}

QianzhouClient::GetUserClusterWarningOutcomeCallable QianzhouClient::getUserClusterWarningCallable(const GetUserClusterWarningRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetUserClusterWarningOutcome()>>(
			[this, request]()
			{
			return this->getUserClusterWarning(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

QianzhouClient::GetWebshellTokenOutcome QianzhouClient::getWebshellToken(const GetWebshellTokenRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetWebshellTokenOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetWebshellTokenOutcome(GetWebshellTokenResult(outcome.result()));
	else
		return GetWebshellTokenOutcome(outcome.error());
}

void QianzhouClient::getWebshellTokenAsync(const GetWebshellTokenRequest& request, const GetWebshellTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getWebshellToken(request), context);
	};

	asyncExecute(new Runnable(fn));
}

QianzhouClient::GetWebshellTokenOutcomeCallable QianzhouClient::getWebshellTokenCallable(const GetWebshellTokenRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetWebshellTokenOutcome()>>(
			[this, request]()
			{
			return this->getWebshellToken(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

QianzhouClient::HelloOutcome QianzhouClient::hello(const HelloRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return HelloOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return HelloOutcome(HelloResult(outcome.result()));
	else
		return HelloOutcome(outcome.error());
}

void QianzhouClient::helloAsync(const HelloRequest& request, const HelloAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, hello(request), context);
	};

	asyncExecute(new Runnable(fn));
}

QianzhouClient::HelloOutcomeCallable QianzhouClient::helloCallable(const HelloRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<HelloOutcome()>>(
			[this, request]()
			{
			return this->hello(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

QianzhouClient::ListClusterDeprecatedAPIOutcome QianzhouClient::listClusterDeprecatedAPI(const ListClusterDeprecatedAPIRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListClusterDeprecatedAPIOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListClusterDeprecatedAPIOutcome(ListClusterDeprecatedAPIResult(outcome.result()));
	else
		return ListClusterDeprecatedAPIOutcome(outcome.error());
}

void QianzhouClient::listClusterDeprecatedAPIAsync(const ListClusterDeprecatedAPIRequest& request, const ListClusterDeprecatedAPIAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listClusterDeprecatedAPI(request), context);
	};

	asyncExecute(new Runnable(fn));
}

QianzhouClient::ListClusterDeprecatedAPIOutcomeCallable QianzhouClient::listClusterDeprecatedAPICallable(const ListClusterDeprecatedAPIRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListClusterDeprecatedAPIOutcome()>>(
			[this, request]()
			{
			return this->listClusterDeprecatedAPI(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

QianzhouClient::ListClusterImagesOutcome QianzhouClient::listClusterImages(const ListClusterImagesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListClusterImagesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListClusterImagesOutcome(ListClusterImagesResult(outcome.result()));
	else
		return ListClusterImagesOutcome(outcome.error());
}

void QianzhouClient::listClusterImagesAsync(const ListClusterImagesRequest& request, const ListClusterImagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listClusterImages(request), context);
	};

	asyncExecute(new Runnable(fn));
}

QianzhouClient::ListClusterImagesOutcomeCallable QianzhouClient::listClusterImagesCallable(const ListClusterImagesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListClusterImagesOutcome()>>(
			[this, request]()
			{
			return this->listClusterImages(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

QianzhouClient::ListUserClustersOutcome QianzhouClient::listUserClusters(const ListUserClustersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListUserClustersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListUserClustersOutcome(ListUserClustersResult(outcome.result()));
	else
		return ListUserClustersOutcome(outcome.error());
}

void QianzhouClient::listUserClustersAsync(const ListUserClustersRequest& request, const ListUserClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listUserClusters(request), context);
	};

	asyncExecute(new Runnable(fn));
}

QianzhouClient::ListUserClustersOutcomeCallable QianzhouClient::listUserClustersCallable(const ListUserClustersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListUserClustersOutcome()>>(
			[this, request]()
			{
			return this->listUserClusters(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

QianzhouClient::QueryByInstanceInfoOutcome QianzhouClient::queryByInstanceInfo(const QueryByInstanceInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryByInstanceInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryByInstanceInfoOutcome(QueryByInstanceInfoResult(outcome.result()));
	else
		return QueryByInstanceInfoOutcome(outcome.error());
}

void QianzhouClient::queryByInstanceInfoAsync(const QueryByInstanceInfoRequest& request, const QueryByInstanceInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryByInstanceInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

QianzhouClient::QueryByInstanceInfoOutcomeCallable QianzhouClient::queryByInstanceInfoCallable(const QueryByInstanceInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryByInstanceInfoOutcome()>>(
			[this, request]()
			{
			return this->queryByInstanceInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

QianzhouClient::QueryNodeInfoOutcome QianzhouClient::queryNodeInfo(const QueryNodeInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryNodeInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryNodeInfoOutcome(QueryNodeInfoResult(outcome.result()));
	else
		return QueryNodeInfoOutcome(outcome.error());
}

void QianzhouClient::queryNodeInfoAsync(const QueryNodeInfoRequest& request, const QueryNodeInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryNodeInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

QianzhouClient::QueryNodeInfoOutcomeCallable QianzhouClient::queryNodeInfoCallable(const QueryNodeInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryNodeInfoOutcome()>>(
			[this, request]()
			{
			return this->queryNodeInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

