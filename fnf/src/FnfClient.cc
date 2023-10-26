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

#include <alibabacloud/fnf/FnfClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Fnf;
using namespace AlibabaCloud::Fnf::Model;

namespace
{
	const std::string SERVICE_NAME = "fnf";
}

FnfClient::FnfClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "fnf");
}

FnfClient::FnfClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "fnf");
}

FnfClient::FnfClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "fnf");
}

FnfClient::~FnfClient()
{}

FnfClient::CreateFlowOutcome FnfClient::createFlow(const CreateFlowRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateFlowOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateFlowOutcome(CreateFlowResult(outcome.result()));
	else
		return CreateFlowOutcome(outcome.error());
}

void FnfClient::createFlowAsync(const CreateFlowRequest& request, const CreateFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createFlow(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FnfClient::CreateFlowOutcomeCallable FnfClient::createFlowCallable(const CreateFlowRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateFlowOutcome()>>(
			[this, request]()
			{
			return this->createFlow(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FnfClient::CreateScheduleOutcome FnfClient::createSchedule(const CreateScheduleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateScheduleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateScheduleOutcome(CreateScheduleResult(outcome.result()));
	else
		return CreateScheduleOutcome(outcome.error());
}

void FnfClient::createScheduleAsync(const CreateScheduleRequest& request, const CreateScheduleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createSchedule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FnfClient::CreateScheduleOutcomeCallable FnfClient::createScheduleCallable(const CreateScheduleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateScheduleOutcome()>>(
			[this, request]()
			{
			return this->createSchedule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FnfClient::DeleteFlowOutcome FnfClient::deleteFlow(const DeleteFlowRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteFlowOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteFlowOutcome(DeleteFlowResult(outcome.result()));
	else
		return DeleteFlowOutcome(outcome.error());
}

void FnfClient::deleteFlowAsync(const DeleteFlowRequest& request, const DeleteFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteFlow(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FnfClient::DeleteFlowOutcomeCallable FnfClient::deleteFlowCallable(const DeleteFlowRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteFlowOutcome()>>(
			[this, request]()
			{
			return this->deleteFlow(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FnfClient::DeleteScheduleOutcome FnfClient::deleteSchedule(const DeleteScheduleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteScheduleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteScheduleOutcome(DeleteScheduleResult(outcome.result()));
	else
		return DeleteScheduleOutcome(outcome.error());
}

void FnfClient::deleteScheduleAsync(const DeleteScheduleRequest& request, const DeleteScheduleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteSchedule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FnfClient::DeleteScheduleOutcomeCallable FnfClient::deleteScheduleCallable(const DeleteScheduleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteScheduleOutcome()>>(
			[this, request]()
			{
			return this->deleteSchedule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FnfClient::DescribeExecutionOutcome FnfClient::describeExecution(const DescribeExecutionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeExecutionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeExecutionOutcome(DescribeExecutionResult(outcome.result()));
	else
		return DescribeExecutionOutcome(outcome.error());
}

void FnfClient::describeExecutionAsync(const DescribeExecutionRequest& request, const DescribeExecutionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeExecution(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FnfClient::DescribeExecutionOutcomeCallable FnfClient::describeExecutionCallable(const DescribeExecutionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeExecutionOutcome()>>(
			[this, request]()
			{
			return this->describeExecution(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FnfClient::DescribeFlowOutcome FnfClient::describeFlow(const DescribeFlowRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeFlowOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeFlowOutcome(DescribeFlowResult(outcome.result()));
	else
		return DescribeFlowOutcome(outcome.error());
}

void FnfClient::describeFlowAsync(const DescribeFlowRequest& request, const DescribeFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeFlow(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FnfClient::DescribeFlowOutcomeCallable FnfClient::describeFlowCallable(const DescribeFlowRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeFlowOutcome()>>(
			[this, request]()
			{
			return this->describeFlow(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FnfClient::DescribeScheduleOutcome FnfClient::describeSchedule(const DescribeScheduleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeScheduleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeScheduleOutcome(DescribeScheduleResult(outcome.result()));
	else
		return DescribeScheduleOutcome(outcome.error());
}

void FnfClient::describeScheduleAsync(const DescribeScheduleRequest& request, const DescribeScheduleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSchedule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FnfClient::DescribeScheduleOutcomeCallable FnfClient::describeScheduleCallable(const DescribeScheduleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeScheduleOutcome()>>(
			[this, request]()
			{
			return this->describeSchedule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FnfClient::GetExecutionHistoryOutcome FnfClient::getExecutionHistory(const GetExecutionHistoryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetExecutionHistoryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetExecutionHistoryOutcome(GetExecutionHistoryResult(outcome.result()));
	else
		return GetExecutionHistoryOutcome(outcome.error());
}

void FnfClient::getExecutionHistoryAsync(const GetExecutionHistoryRequest& request, const GetExecutionHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getExecutionHistory(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FnfClient::GetExecutionHistoryOutcomeCallable FnfClient::getExecutionHistoryCallable(const GetExecutionHistoryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetExecutionHistoryOutcome()>>(
			[this, request]()
			{
			return this->getExecutionHistory(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FnfClient::ListExecutionsOutcome FnfClient::listExecutions(const ListExecutionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListExecutionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListExecutionsOutcome(ListExecutionsResult(outcome.result()));
	else
		return ListExecutionsOutcome(outcome.error());
}

void FnfClient::listExecutionsAsync(const ListExecutionsRequest& request, const ListExecutionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listExecutions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FnfClient::ListExecutionsOutcomeCallable FnfClient::listExecutionsCallable(const ListExecutionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListExecutionsOutcome()>>(
			[this, request]()
			{
			return this->listExecutions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FnfClient::ListFlowsOutcome FnfClient::listFlows(const ListFlowsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListFlowsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListFlowsOutcome(ListFlowsResult(outcome.result()));
	else
		return ListFlowsOutcome(outcome.error());
}

void FnfClient::listFlowsAsync(const ListFlowsRequest& request, const ListFlowsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listFlows(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FnfClient::ListFlowsOutcomeCallable FnfClient::listFlowsCallable(const ListFlowsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListFlowsOutcome()>>(
			[this, request]()
			{
			return this->listFlows(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FnfClient::ListSchedulesOutcome FnfClient::listSchedules(const ListSchedulesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListSchedulesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListSchedulesOutcome(ListSchedulesResult(outcome.result()));
	else
		return ListSchedulesOutcome(outcome.error());
}

void FnfClient::listSchedulesAsync(const ListSchedulesRequest& request, const ListSchedulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listSchedules(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FnfClient::ListSchedulesOutcomeCallable FnfClient::listSchedulesCallable(const ListSchedulesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListSchedulesOutcome()>>(
			[this, request]()
			{
			return this->listSchedules(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FnfClient::ReportTaskFailedOutcome FnfClient::reportTaskFailed(const ReportTaskFailedRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ReportTaskFailedOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ReportTaskFailedOutcome(ReportTaskFailedResult(outcome.result()));
	else
		return ReportTaskFailedOutcome(outcome.error());
}

void FnfClient::reportTaskFailedAsync(const ReportTaskFailedRequest& request, const ReportTaskFailedAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, reportTaskFailed(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FnfClient::ReportTaskFailedOutcomeCallable FnfClient::reportTaskFailedCallable(const ReportTaskFailedRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ReportTaskFailedOutcome()>>(
			[this, request]()
			{
			return this->reportTaskFailed(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FnfClient::ReportTaskSucceededOutcome FnfClient::reportTaskSucceeded(const ReportTaskSucceededRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ReportTaskSucceededOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ReportTaskSucceededOutcome(ReportTaskSucceededResult(outcome.result()));
	else
		return ReportTaskSucceededOutcome(outcome.error());
}

void FnfClient::reportTaskSucceededAsync(const ReportTaskSucceededRequest& request, const ReportTaskSucceededAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, reportTaskSucceeded(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FnfClient::ReportTaskSucceededOutcomeCallable FnfClient::reportTaskSucceededCallable(const ReportTaskSucceededRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ReportTaskSucceededOutcome()>>(
			[this, request]()
			{
			return this->reportTaskSucceeded(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FnfClient::StartExecutionOutcome FnfClient::startExecution(const StartExecutionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StartExecutionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StartExecutionOutcome(StartExecutionResult(outcome.result()));
	else
		return StartExecutionOutcome(outcome.error());
}

void FnfClient::startExecutionAsync(const StartExecutionRequest& request, const StartExecutionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, startExecution(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FnfClient::StartExecutionOutcomeCallable FnfClient::startExecutionCallable(const StartExecutionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StartExecutionOutcome()>>(
			[this, request]()
			{
			return this->startExecution(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FnfClient::StartSyncExecutionOutcome FnfClient::startSyncExecution(const StartSyncExecutionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StartSyncExecutionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StartSyncExecutionOutcome(StartSyncExecutionResult(outcome.result()));
	else
		return StartSyncExecutionOutcome(outcome.error());
}

void FnfClient::startSyncExecutionAsync(const StartSyncExecutionRequest& request, const StartSyncExecutionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, startSyncExecution(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FnfClient::StartSyncExecutionOutcomeCallable FnfClient::startSyncExecutionCallable(const StartSyncExecutionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StartSyncExecutionOutcome()>>(
			[this, request]()
			{
			return this->startSyncExecution(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FnfClient::StopExecutionOutcome FnfClient::stopExecution(const StopExecutionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StopExecutionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StopExecutionOutcome(StopExecutionResult(outcome.result()));
	else
		return StopExecutionOutcome(outcome.error());
}

void FnfClient::stopExecutionAsync(const StopExecutionRequest& request, const StopExecutionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, stopExecution(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FnfClient::StopExecutionOutcomeCallable FnfClient::stopExecutionCallable(const StopExecutionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StopExecutionOutcome()>>(
			[this, request]()
			{
			return this->stopExecution(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FnfClient::UpdateFlowOutcome FnfClient::updateFlow(const UpdateFlowRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateFlowOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateFlowOutcome(UpdateFlowResult(outcome.result()));
	else
		return UpdateFlowOutcome(outcome.error());
}

void FnfClient::updateFlowAsync(const UpdateFlowRequest& request, const UpdateFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateFlow(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FnfClient::UpdateFlowOutcomeCallable FnfClient::updateFlowCallable(const UpdateFlowRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateFlowOutcome()>>(
			[this, request]()
			{
			return this->updateFlow(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FnfClient::UpdateScheduleOutcome FnfClient::updateSchedule(const UpdateScheduleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateScheduleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateScheduleOutcome(UpdateScheduleResult(outcome.result()));
	else
		return UpdateScheduleOutcome(outcome.error());
}

void FnfClient::updateScheduleAsync(const UpdateScheduleRequest& request, const UpdateScheduleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateSchedule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FnfClient::UpdateScheduleOutcomeCallable FnfClient::updateScheduleCallable(const UpdateScheduleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateScheduleOutcome()>>(
			[this, request]()
			{
			return this->updateSchedule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

