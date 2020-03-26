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

#include <alibabacloud/dyvmsapi/DyvmsapiClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Dyvmsapi;
using namespace AlibabaCloud::Dyvmsapi::Model;

namespace
{
	const std::string SERVICE_NAME = "Dyvmsapi";
}

DyvmsapiClient::DyvmsapiClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "dyvms");
}

DyvmsapiClient::DyvmsapiClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "dyvms");
}

DyvmsapiClient::DyvmsapiClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "dyvms");
}

DyvmsapiClient::~DyvmsapiClient()
{}

DyvmsapiClient::AddRtcAccountOutcome DyvmsapiClient::addRtcAccount(const AddRtcAccountRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddRtcAccountOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddRtcAccountOutcome(AddRtcAccountResult(outcome.result()));
	else
		return AddRtcAccountOutcome(outcome.error());
}

void DyvmsapiClient::addRtcAccountAsync(const AddRtcAccountRequest& request, const AddRtcAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addRtcAccount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DyvmsapiClient::AddRtcAccountOutcomeCallable DyvmsapiClient::addRtcAccountCallable(const AddRtcAccountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddRtcAccountOutcome()>>(
			[this, request]()
			{
			return this->addRtcAccount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DyvmsapiClient::BatchRobotSmartCallOutcome DyvmsapiClient::batchRobotSmartCall(const BatchRobotSmartCallRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BatchRobotSmartCallOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BatchRobotSmartCallOutcome(BatchRobotSmartCallResult(outcome.result()));
	else
		return BatchRobotSmartCallOutcome(outcome.error());
}

void DyvmsapiClient::batchRobotSmartCallAsync(const BatchRobotSmartCallRequest& request, const BatchRobotSmartCallAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, batchRobotSmartCall(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DyvmsapiClient::BatchRobotSmartCallOutcomeCallable DyvmsapiClient::batchRobotSmartCallCallable(const BatchRobotSmartCallRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BatchRobotSmartCallOutcome()>>(
			[this, request]()
			{
			return this->batchRobotSmartCall(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DyvmsapiClient::BindNumberAndVoipIdOutcome DyvmsapiClient::bindNumberAndVoipId(const BindNumberAndVoipIdRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BindNumberAndVoipIdOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BindNumberAndVoipIdOutcome(BindNumberAndVoipIdResult(outcome.result()));
	else
		return BindNumberAndVoipIdOutcome(outcome.error());
}

void DyvmsapiClient::bindNumberAndVoipIdAsync(const BindNumberAndVoipIdRequest& request, const BindNumberAndVoipIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, bindNumberAndVoipId(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DyvmsapiClient::BindNumberAndVoipIdOutcomeCallable DyvmsapiClient::bindNumberAndVoipIdCallable(const BindNumberAndVoipIdRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BindNumberAndVoipIdOutcome()>>(
			[this, request]()
			{
			return this->bindNumberAndVoipId(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DyvmsapiClient::CancelCallOutcome DyvmsapiClient::cancelCall(const CancelCallRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CancelCallOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CancelCallOutcome(CancelCallResult(outcome.result()));
	else
		return CancelCallOutcome(outcome.error());
}

void DyvmsapiClient::cancelCallAsync(const CancelCallRequest& request, const CancelCallAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, cancelCall(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DyvmsapiClient::CancelCallOutcomeCallable DyvmsapiClient::cancelCallCallable(const CancelCallRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CancelCallOutcome()>>(
			[this, request]()
			{
			return this->cancelCall(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DyvmsapiClient::CancelOrderRobotTaskOutcome DyvmsapiClient::cancelOrderRobotTask(const CancelOrderRobotTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CancelOrderRobotTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CancelOrderRobotTaskOutcome(CancelOrderRobotTaskResult(outcome.result()));
	else
		return CancelOrderRobotTaskOutcome(outcome.error());
}

void DyvmsapiClient::cancelOrderRobotTaskAsync(const CancelOrderRobotTaskRequest& request, const CancelOrderRobotTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, cancelOrderRobotTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DyvmsapiClient::CancelOrderRobotTaskOutcomeCallable DyvmsapiClient::cancelOrderRobotTaskCallable(const CancelOrderRobotTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CancelOrderRobotTaskOutcome()>>(
			[this, request]()
			{
			return this->cancelOrderRobotTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DyvmsapiClient::CancelRobotTaskOutcome DyvmsapiClient::cancelRobotTask(const CancelRobotTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CancelRobotTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CancelRobotTaskOutcome(CancelRobotTaskResult(outcome.result()));
	else
		return CancelRobotTaskOutcome(outcome.error());
}

void DyvmsapiClient::cancelRobotTaskAsync(const CancelRobotTaskRequest& request, const CancelRobotTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, cancelRobotTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DyvmsapiClient::CancelRobotTaskOutcomeCallable DyvmsapiClient::cancelRobotTaskCallable(const CancelRobotTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CancelRobotTaskOutcome()>>(
			[this, request]()
			{
			return this->cancelRobotTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DyvmsapiClient::ClickToDialOutcome DyvmsapiClient::clickToDial(const ClickToDialRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ClickToDialOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ClickToDialOutcome(ClickToDialResult(outcome.result()));
	else
		return ClickToDialOutcome(outcome.error());
}

void DyvmsapiClient::clickToDialAsync(const ClickToDialRequest& request, const ClickToDialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, clickToDial(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DyvmsapiClient::ClickToDialOutcomeCallable DyvmsapiClient::clickToDialCallable(const ClickToDialRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ClickToDialOutcome()>>(
			[this, request]()
			{
			return this->clickToDial(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DyvmsapiClient::CreateRobotTaskOutcome DyvmsapiClient::createRobotTask(const CreateRobotTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateRobotTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateRobotTaskOutcome(CreateRobotTaskResult(outcome.result()));
	else
		return CreateRobotTaskOutcome(outcome.error());
}

void DyvmsapiClient::createRobotTaskAsync(const CreateRobotTaskRequest& request, const CreateRobotTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createRobotTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DyvmsapiClient::CreateRobotTaskOutcomeCallable DyvmsapiClient::createRobotTaskCallable(const CreateRobotTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateRobotTaskOutcome()>>(
			[this, request]()
			{
			return this->createRobotTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DyvmsapiClient::DeleteRobotTaskOutcome DyvmsapiClient::deleteRobotTask(const DeleteRobotTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteRobotTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteRobotTaskOutcome(DeleteRobotTaskResult(outcome.result()));
	else
		return DeleteRobotTaskOutcome(outcome.error());
}

void DyvmsapiClient::deleteRobotTaskAsync(const DeleteRobotTaskRequest& request, const DeleteRobotTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteRobotTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DyvmsapiClient::DeleteRobotTaskOutcomeCallable DyvmsapiClient::deleteRobotTaskCallable(const DeleteRobotTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteRobotTaskOutcome()>>(
			[this, request]()
			{
			return this->deleteRobotTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DyvmsapiClient::DescribeRecordDataOutcome DyvmsapiClient::describeRecordData(const DescribeRecordDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRecordDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRecordDataOutcome(DescribeRecordDataResult(outcome.result()));
	else
		return DescribeRecordDataOutcome(outcome.error());
}

void DyvmsapiClient::describeRecordDataAsync(const DescribeRecordDataRequest& request, const DescribeRecordDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRecordData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DyvmsapiClient::DescribeRecordDataOutcomeCallable DyvmsapiClient::describeRecordDataCallable(const DescribeRecordDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRecordDataOutcome()>>(
			[this, request]()
			{
			return this->describeRecordData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DyvmsapiClient::DoRtcNumberAuthOutcome DyvmsapiClient::doRtcNumberAuth(const DoRtcNumberAuthRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DoRtcNumberAuthOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DoRtcNumberAuthOutcome(DoRtcNumberAuthResult(outcome.result()));
	else
		return DoRtcNumberAuthOutcome(outcome.error());
}

void DyvmsapiClient::doRtcNumberAuthAsync(const DoRtcNumberAuthRequest& request, const DoRtcNumberAuthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, doRtcNumberAuth(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DyvmsapiClient::DoRtcNumberAuthOutcomeCallable DyvmsapiClient::doRtcNumberAuthCallable(const DoRtcNumberAuthRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DoRtcNumberAuthOutcome()>>(
			[this, request]()
			{
			return this->doRtcNumberAuth(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DyvmsapiClient::GetRtcTokenOutcome DyvmsapiClient::getRtcToken(const GetRtcTokenRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetRtcTokenOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetRtcTokenOutcome(GetRtcTokenResult(outcome.result()));
	else
		return GetRtcTokenOutcome(outcome.error());
}

void DyvmsapiClient::getRtcTokenAsync(const GetRtcTokenRequest& request, const GetRtcTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getRtcToken(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DyvmsapiClient::GetRtcTokenOutcomeCallable DyvmsapiClient::getRtcTokenCallable(const GetRtcTokenRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetRtcTokenOutcome()>>(
			[this, request]()
			{
			return this->getRtcToken(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DyvmsapiClient::IvrCallOutcome DyvmsapiClient::ivrCall(const IvrCallRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return IvrCallOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return IvrCallOutcome(IvrCallResult(outcome.result()));
	else
		return IvrCallOutcome(outcome.error());
}

void DyvmsapiClient::ivrCallAsync(const IvrCallRequest& request, const IvrCallAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, ivrCall(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DyvmsapiClient::IvrCallOutcomeCallable DyvmsapiClient::ivrCallCallable(const IvrCallRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<IvrCallOutcome()>>(
			[this, request]()
			{
			return this->ivrCall(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DyvmsapiClient::ListOrderedNumbersOutcome DyvmsapiClient::listOrderedNumbers(const ListOrderedNumbersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListOrderedNumbersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListOrderedNumbersOutcome(ListOrderedNumbersResult(outcome.result()));
	else
		return ListOrderedNumbersOutcome(outcome.error());
}

void DyvmsapiClient::listOrderedNumbersAsync(const ListOrderedNumbersRequest& request, const ListOrderedNumbersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listOrderedNumbers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DyvmsapiClient::ListOrderedNumbersOutcomeCallable DyvmsapiClient::listOrderedNumbersCallable(const ListOrderedNumbersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListOrderedNumbersOutcome()>>(
			[this, request]()
			{
			return this->listOrderedNumbers(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DyvmsapiClient::ListOutboundStrategiesOutcome DyvmsapiClient::listOutboundStrategies(const ListOutboundStrategiesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListOutboundStrategiesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListOutboundStrategiesOutcome(ListOutboundStrategiesResult(outcome.result()));
	else
		return ListOutboundStrategiesOutcome(outcome.error());
}

void DyvmsapiClient::listOutboundStrategiesAsync(const ListOutboundStrategiesRequest& request, const ListOutboundStrategiesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listOutboundStrategies(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DyvmsapiClient::ListOutboundStrategiesOutcomeCallable DyvmsapiClient::listOutboundStrategiesCallable(const ListOutboundStrategiesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListOutboundStrategiesOutcome()>>(
			[this, request]()
			{
			return this->listOutboundStrategies(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DyvmsapiClient::QueryCallDetailByCallIdOutcome DyvmsapiClient::queryCallDetailByCallId(const QueryCallDetailByCallIdRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryCallDetailByCallIdOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryCallDetailByCallIdOutcome(QueryCallDetailByCallIdResult(outcome.result()));
	else
		return QueryCallDetailByCallIdOutcome(outcome.error());
}

void DyvmsapiClient::queryCallDetailByCallIdAsync(const QueryCallDetailByCallIdRequest& request, const QueryCallDetailByCallIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryCallDetailByCallId(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DyvmsapiClient::QueryCallDetailByCallIdOutcomeCallable DyvmsapiClient::queryCallDetailByCallIdCallable(const QueryCallDetailByCallIdRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryCallDetailByCallIdOutcome()>>(
			[this, request]()
			{
			return this->queryCallDetailByCallId(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DyvmsapiClient::QueryCallDetailByTaskIdOutcome DyvmsapiClient::queryCallDetailByTaskId(const QueryCallDetailByTaskIdRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryCallDetailByTaskIdOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryCallDetailByTaskIdOutcome(QueryCallDetailByTaskIdResult(outcome.result()));
	else
		return QueryCallDetailByTaskIdOutcome(outcome.error());
}

void DyvmsapiClient::queryCallDetailByTaskIdAsync(const QueryCallDetailByTaskIdRequest& request, const QueryCallDetailByTaskIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryCallDetailByTaskId(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DyvmsapiClient::QueryCallDetailByTaskIdOutcomeCallable DyvmsapiClient::queryCallDetailByTaskIdCallable(const QueryCallDetailByTaskIdRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryCallDetailByTaskIdOutcome()>>(
			[this, request]()
			{
			return this->queryCallDetailByTaskId(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DyvmsapiClient::QueryRobotInfoListOutcome DyvmsapiClient::queryRobotInfoList(const QueryRobotInfoListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryRobotInfoListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryRobotInfoListOutcome(QueryRobotInfoListResult(outcome.result()));
	else
		return QueryRobotInfoListOutcome(outcome.error());
}

void DyvmsapiClient::queryRobotInfoListAsync(const QueryRobotInfoListRequest& request, const QueryRobotInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryRobotInfoList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DyvmsapiClient::QueryRobotInfoListOutcomeCallable DyvmsapiClient::queryRobotInfoListCallable(const QueryRobotInfoListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryRobotInfoListOutcome()>>(
			[this, request]()
			{
			return this->queryRobotInfoList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DyvmsapiClient::QueryRobotTaskCallDetailOutcome DyvmsapiClient::queryRobotTaskCallDetail(const QueryRobotTaskCallDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryRobotTaskCallDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryRobotTaskCallDetailOutcome(QueryRobotTaskCallDetailResult(outcome.result()));
	else
		return QueryRobotTaskCallDetailOutcome(outcome.error());
}

void DyvmsapiClient::queryRobotTaskCallDetailAsync(const QueryRobotTaskCallDetailRequest& request, const QueryRobotTaskCallDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryRobotTaskCallDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DyvmsapiClient::QueryRobotTaskCallDetailOutcomeCallable DyvmsapiClient::queryRobotTaskCallDetailCallable(const QueryRobotTaskCallDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryRobotTaskCallDetailOutcome()>>(
			[this, request]()
			{
			return this->queryRobotTaskCallDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DyvmsapiClient::QueryRobotTaskCallListOutcome DyvmsapiClient::queryRobotTaskCallList(const QueryRobotTaskCallListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryRobotTaskCallListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryRobotTaskCallListOutcome(QueryRobotTaskCallListResult(outcome.result()));
	else
		return QueryRobotTaskCallListOutcome(outcome.error());
}

void DyvmsapiClient::queryRobotTaskCallListAsync(const QueryRobotTaskCallListRequest& request, const QueryRobotTaskCallListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryRobotTaskCallList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DyvmsapiClient::QueryRobotTaskCallListOutcomeCallable DyvmsapiClient::queryRobotTaskCallListCallable(const QueryRobotTaskCallListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryRobotTaskCallListOutcome()>>(
			[this, request]()
			{
			return this->queryRobotTaskCallList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DyvmsapiClient::QueryRobotTaskDetailOutcome DyvmsapiClient::queryRobotTaskDetail(const QueryRobotTaskDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryRobotTaskDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryRobotTaskDetailOutcome(QueryRobotTaskDetailResult(outcome.result()));
	else
		return QueryRobotTaskDetailOutcome(outcome.error());
}

void DyvmsapiClient::queryRobotTaskDetailAsync(const QueryRobotTaskDetailRequest& request, const QueryRobotTaskDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryRobotTaskDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DyvmsapiClient::QueryRobotTaskDetailOutcomeCallable DyvmsapiClient::queryRobotTaskDetailCallable(const QueryRobotTaskDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryRobotTaskDetailOutcome()>>(
			[this, request]()
			{
			return this->queryRobotTaskDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DyvmsapiClient::QueryRobotTaskListOutcome DyvmsapiClient::queryRobotTaskList(const QueryRobotTaskListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryRobotTaskListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryRobotTaskListOutcome(QueryRobotTaskListResult(outcome.result()));
	else
		return QueryRobotTaskListOutcome(outcome.error());
}

void DyvmsapiClient::queryRobotTaskListAsync(const QueryRobotTaskListRequest& request, const QueryRobotTaskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryRobotTaskList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DyvmsapiClient::QueryRobotTaskListOutcomeCallable DyvmsapiClient::queryRobotTaskListCallable(const QueryRobotTaskListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryRobotTaskListOutcome()>>(
			[this, request]()
			{
			return this->queryRobotTaskList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DyvmsapiClient::QueryRobotv2AllListOutcome DyvmsapiClient::queryRobotv2AllList(const QueryRobotv2AllListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryRobotv2AllListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryRobotv2AllListOutcome(QueryRobotv2AllListResult(outcome.result()));
	else
		return QueryRobotv2AllListOutcome(outcome.error());
}

void DyvmsapiClient::queryRobotv2AllListAsync(const QueryRobotv2AllListRequest& request, const QueryRobotv2AllListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryRobotv2AllList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DyvmsapiClient::QueryRobotv2AllListOutcomeCallable DyvmsapiClient::queryRobotv2AllListCallable(const QueryRobotv2AllListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryRobotv2AllListOutcome()>>(
			[this, request]()
			{
			return this->queryRobotv2AllList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DyvmsapiClient::QueryRtcNumberAuthStatusOutcome DyvmsapiClient::queryRtcNumberAuthStatus(const QueryRtcNumberAuthStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryRtcNumberAuthStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryRtcNumberAuthStatusOutcome(QueryRtcNumberAuthStatusResult(outcome.result()));
	else
		return QueryRtcNumberAuthStatusOutcome(outcome.error());
}

void DyvmsapiClient::queryRtcNumberAuthStatusAsync(const QueryRtcNumberAuthStatusRequest& request, const QueryRtcNumberAuthStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryRtcNumberAuthStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DyvmsapiClient::QueryRtcNumberAuthStatusOutcomeCallable DyvmsapiClient::queryRtcNumberAuthStatusCallable(const QueryRtcNumberAuthStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryRtcNumberAuthStatusOutcome()>>(
			[this, request]()
			{
			return this->queryRtcNumberAuthStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DyvmsapiClient::QueryVoipNumberBindInfosOutcome DyvmsapiClient::queryVoipNumberBindInfos(const QueryVoipNumberBindInfosRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryVoipNumberBindInfosOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryVoipNumberBindInfosOutcome(QueryVoipNumberBindInfosResult(outcome.result()));
	else
		return QueryVoipNumberBindInfosOutcome(outcome.error());
}

void DyvmsapiClient::queryVoipNumberBindInfosAsync(const QueryVoipNumberBindInfosRequest& request, const QueryVoipNumberBindInfosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryVoipNumberBindInfos(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DyvmsapiClient::QueryVoipNumberBindInfosOutcomeCallable DyvmsapiClient::queryVoipNumberBindInfosCallable(const QueryVoipNumberBindInfosRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryVoipNumberBindInfosOutcome()>>(
			[this, request]()
			{
			return this->queryVoipNumberBindInfos(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DyvmsapiClient::ReportVoipProblemsOutcome DyvmsapiClient::reportVoipProblems(const ReportVoipProblemsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ReportVoipProblemsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ReportVoipProblemsOutcome(ReportVoipProblemsResult(outcome.result()));
	else
		return ReportVoipProblemsOutcome(outcome.error());
}

void DyvmsapiClient::reportVoipProblemsAsync(const ReportVoipProblemsRequest& request, const ReportVoipProblemsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, reportVoipProblems(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DyvmsapiClient::ReportVoipProblemsOutcomeCallable DyvmsapiClient::reportVoipProblemsCallable(const ReportVoipProblemsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ReportVoipProblemsOutcome()>>(
			[this, request]()
			{
			return this->reportVoipProblems(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DyvmsapiClient::SingleCallByTtsOutcome DyvmsapiClient::singleCallByTts(const SingleCallByTtsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SingleCallByTtsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SingleCallByTtsOutcome(SingleCallByTtsResult(outcome.result()));
	else
		return SingleCallByTtsOutcome(outcome.error());
}

void DyvmsapiClient::singleCallByTtsAsync(const SingleCallByTtsRequest& request, const SingleCallByTtsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, singleCallByTts(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DyvmsapiClient::SingleCallByTtsOutcomeCallable DyvmsapiClient::singleCallByTtsCallable(const SingleCallByTtsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SingleCallByTtsOutcome()>>(
			[this, request]()
			{
			return this->singleCallByTts(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DyvmsapiClient::SingleCallByVoiceOutcome DyvmsapiClient::singleCallByVoice(const SingleCallByVoiceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SingleCallByVoiceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SingleCallByVoiceOutcome(SingleCallByVoiceResult(outcome.result()));
	else
		return SingleCallByVoiceOutcome(outcome.error());
}

void DyvmsapiClient::singleCallByVoiceAsync(const SingleCallByVoiceRequest& request, const SingleCallByVoiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, singleCallByVoice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DyvmsapiClient::SingleCallByVoiceOutcomeCallable DyvmsapiClient::singleCallByVoiceCallable(const SingleCallByVoiceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SingleCallByVoiceOutcome()>>(
			[this, request]()
			{
			return this->singleCallByVoice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DyvmsapiClient::SmartCallOutcome DyvmsapiClient::smartCall(const SmartCallRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SmartCallOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SmartCallOutcome(SmartCallResult(outcome.result()));
	else
		return SmartCallOutcome(outcome.error());
}

void DyvmsapiClient::smartCallAsync(const SmartCallRequest& request, const SmartCallAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, smartCall(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DyvmsapiClient::SmartCallOutcomeCallable DyvmsapiClient::smartCallCallable(const SmartCallRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SmartCallOutcome()>>(
			[this, request]()
			{
			return this->smartCall(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DyvmsapiClient::SmartCallOperateOutcome DyvmsapiClient::smartCallOperate(const SmartCallOperateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SmartCallOperateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SmartCallOperateOutcome(SmartCallOperateResult(outcome.result()));
	else
		return SmartCallOperateOutcome(outcome.error());
}

void DyvmsapiClient::smartCallOperateAsync(const SmartCallOperateRequest& request, const SmartCallOperateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, smartCallOperate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DyvmsapiClient::SmartCallOperateOutcomeCallable DyvmsapiClient::smartCallOperateCallable(const SmartCallOperateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SmartCallOperateOutcome()>>(
			[this, request]()
			{
			return this->smartCallOperate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DyvmsapiClient::StartMicroOutboundOutcome DyvmsapiClient::startMicroOutbound(const StartMicroOutboundRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StartMicroOutboundOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StartMicroOutboundOutcome(StartMicroOutboundResult(outcome.result()));
	else
		return StartMicroOutboundOutcome(outcome.error());
}

void DyvmsapiClient::startMicroOutboundAsync(const StartMicroOutboundRequest& request, const StartMicroOutboundAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, startMicroOutbound(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DyvmsapiClient::StartMicroOutboundOutcomeCallable DyvmsapiClient::startMicroOutboundCallable(const StartMicroOutboundRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StartMicroOutboundOutcome()>>(
			[this, request]()
			{
			return this->startMicroOutbound(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DyvmsapiClient::StartRobotTaskOutcome DyvmsapiClient::startRobotTask(const StartRobotTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StartRobotTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StartRobotTaskOutcome(StartRobotTaskResult(outcome.result()));
	else
		return StartRobotTaskOutcome(outcome.error());
}

void DyvmsapiClient::startRobotTaskAsync(const StartRobotTaskRequest& request, const StartRobotTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, startRobotTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DyvmsapiClient::StartRobotTaskOutcomeCallable DyvmsapiClient::startRobotTaskCallable(const StartRobotTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StartRobotTaskOutcome()>>(
			[this, request]()
			{
			return this->startRobotTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DyvmsapiClient::StopRobotTaskOutcome DyvmsapiClient::stopRobotTask(const StopRobotTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StopRobotTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StopRobotTaskOutcome(StopRobotTaskResult(outcome.result()));
	else
		return StopRobotTaskOutcome(outcome.error());
}

void DyvmsapiClient::stopRobotTaskAsync(const StopRobotTaskRequest& request, const StopRobotTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, stopRobotTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DyvmsapiClient::StopRobotTaskOutcomeCallable DyvmsapiClient::stopRobotTaskCallable(const StopRobotTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StopRobotTaskOutcome()>>(
			[this, request]()
			{
			return this->stopRobotTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DyvmsapiClient::UnbindNumberAndVoipIdOutcome DyvmsapiClient::unbindNumberAndVoipId(const UnbindNumberAndVoipIdRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UnbindNumberAndVoipIdOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UnbindNumberAndVoipIdOutcome(UnbindNumberAndVoipIdResult(outcome.result()));
	else
		return UnbindNumberAndVoipIdOutcome(outcome.error());
}

void DyvmsapiClient::unbindNumberAndVoipIdAsync(const UnbindNumberAndVoipIdRequest& request, const UnbindNumberAndVoipIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, unbindNumberAndVoipId(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DyvmsapiClient::UnbindNumberAndVoipIdOutcomeCallable DyvmsapiClient::unbindNumberAndVoipIdCallable(const UnbindNumberAndVoipIdRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UnbindNumberAndVoipIdOutcome()>>(
			[this, request]()
			{
			return this->unbindNumberAndVoipId(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DyvmsapiClient::UndoRtcNumberAuthOutcome DyvmsapiClient::undoRtcNumberAuth(const UndoRtcNumberAuthRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UndoRtcNumberAuthOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UndoRtcNumberAuthOutcome(UndoRtcNumberAuthResult(outcome.result()));
	else
		return UndoRtcNumberAuthOutcome(outcome.error());
}

void DyvmsapiClient::undoRtcNumberAuthAsync(const UndoRtcNumberAuthRequest& request, const UndoRtcNumberAuthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, undoRtcNumberAuth(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DyvmsapiClient::UndoRtcNumberAuthOutcomeCallable DyvmsapiClient::undoRtcNumberAuthCallable(const UndoRtcNumberAuthRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UndoRtcNumberAuthOutcome()>>(
			[this, request]()
			{
			return this->undoRtcNumberAuth(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DyvmsapiClient::UploadRobotTaskCalledFileOutcome DyvmsapiClient::uploadRobotTaskCalledFile(const UploadRobotTaskCalledFileRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UploadRobotTaskCalledFileOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UploadRobotTaskCalledFileOutcome(UploadRobotTaskCalledFileResult(outcome.result()));
	else
		return UploadRobotTaskCalledFileOutcome(outcome.error());
}

void DyvmsapiClient::uploadRobotTaskCalledFileAsync(const UploadRobotTaskCalledFileRequest& request, const UploadRobotTaskCalledFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, uploadRobotTaskCalledFile(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DyvmsapiClient::UploadRobotTaskCalledFileOutcomeCallable DyvmsapiClient::uploadRobotTaskCalledFileCallable(const UploadRobotTaskCalledFileRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UploadRobotTaskCalledFileOutcome()>>(
			[this, request]()
			{
			return this->uploadRobotTaskCalledFile(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DyvmsapiClient::VoipAddAccountOutcome DyvmsapiClient::voipAddAccount(const VoipAddAccountRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return VoipAddAccountOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return VoipAddAccountOutcome(VoipAddAccountResult(outcome.result()));
	else
		return VoipAddAccountOutcome(outcome.error());
}

void DyvmsapiClient::voipAddAccountAsync(const VoipAddAccountRequest& request, const VoipAddAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, voipAddAccount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DyvmsapiClient::VoipAddAccountOutcomeCallable DyvmsapiClient::voipAddAccountCallable(const VoipAddAccountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<VoipAddAccountOutcome()>>(
			[this, request]()
			{
			return this->voipAddAccount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DyvmsapiClient::VoipGetTokenOutcome DyvmsapiClient::voipGetToken(const VoipGetTokenRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return VoipGetTokenOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return VoipGetTokenOutcome(VoipGetTokenResult(outcome.result()));
	else
		return VoipGetTokenOutcome(outcome.error());
}

void DyvmsapiClient::voipGetTokenAsync(const VoipGetTokenRequest& request, const VoipGetTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, voipGetToken(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DyvmsapiClient::VoipGetTokenOutcomeCallable DyvmsapiClient::voipGetTokenCallable(const VoipGetTokenRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<VoipGetTokenOutcome()>>(
			[this, request]()
			{
			return this->voipGetToken(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

