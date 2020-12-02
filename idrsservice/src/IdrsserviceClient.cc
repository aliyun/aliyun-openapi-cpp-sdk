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

#include <alibabacloud/idrsservice/IdrsserviceClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Idrsservice;
using namespace AlibabaCloud::Idrsservice::Model;

namespace
{
	const std::string SERVICE_NAME = "idrsservice";
}

IdrsserviceClient::IdrsserviceClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "idrsservice");
}

IdrsserviceClient::IdrsserviceClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "idrsservice");
}

IdrsserviceClient::IdrsserviceClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "idrsservice");
}

IdrsserviceClient::~IdrsserviceClient()
{}

IdrsserviceClient::CheckServiceLinkedRoleOutcome IdrsserviceClient::checkServiceLinkedRole(const CheckServiceLinkedRoleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CheckServiceLinkedRoleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CheckServiceLinkedRoleOutcome(CheckServiceLinkedRoleResult(outcome.result()));
	else
		return CheckServiceLinkedRoleOutcome(outcome.error());
}

void IdrsserviceClient::checkServiceLinkedRoleAsync(const CheckServiceLinkedRoleRequest& request, const CheckServiceLinkedRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, checkServiceLinkedRole(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IdrsserviceClient::CheckServiceLinkedRoleOutcomeCallable IdrsserviceClient::checkServiceLinkedRoleCallable(const CheckServiceLinkedRoleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CheckServiceLinkedRoleOutcome()>>(
			[this, request]()
			{
			return this->checkServiceLinkedRole(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IdrsserviceClient::CreateAppOutcome IdrsserviceClient::createApp(const CreateAppRequest &request) const
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

void IdrsserviceClient::createAppAsync(const CreateAppRequest& request, const CreateAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createApp(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IdrsserviceClient::CreateAppOutcomeCallable IdrsserviceClient::createAppCallable(const CreateAppRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateAppOutcome()>>(
			[this, request]()
			{
			return this->createApp(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IdrsserviceClient::CreateDepartmentOutcome IdrsserviceClient::createDepartment(const CreateDepartmentRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateDepartmentOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateDepartmentOutcome(CreateDepartmentResult(outcome.result()));
	else
		return CreateDepartmentOutcome(outcome.error());
}

void IdrsserviceClient::createDepartmentAsync(const CreateDepartmentRequest& request, const CreateDepartmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createDepartment(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IdrsserviceClient::CreateDepartmentOutcomeCallable IdrsserviceClient::createDepartmentCallable(const CreateDepartmentRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateDepartmentOutcome()>>(
			[this, request]()
			{
			return this->createDepartment(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IdrsserviceClient::CreateLiveOutcome IdrsserviceClient::createLive(const CreateLiveRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateLiveOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateLiveOutcome(CreateLiveResult(outcome.result()));
	else
		return CreateLiveOutcome(outcome.error());
}

void IdrsserviceClient::createLiveAsync(const CreateLiveRequest& request, const CreateLiveAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createLive(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IdrsserviceClient::CreateLiveOutcomeCallable IdrsserviceClient::createLiveCallable(const CreateLiveRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateLiveOutcome()>>(
			[this, request]()
			{
			return this->createLive(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IdrsserviceClient::CreateLiveDetectionOutcome IdrsserviceClient::createLiveDetection(const CreateLiveDetectionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateLiveDetectionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateLiveDetectionOutcome(CreateLiveDetectionResult(outcome.result()));
	else
		return CreateLiveDetectionOutcome(outcome.error());
}

void IdrsserviceClient::createLiveDetectionAsync(const CreateLiveDetectionRequest& request, const CreateLiveDetectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createLiveDetection(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IdrsserviceClient::CreateLiveDetectionOutcomeCallable IdrsserviceClient::createLiveDetectionCallable(const CreateLiveDetectionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateLiveDetectionOutcome()>>(
			[this, request]()
			{
			return this->createLiveDetection(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IdrsserviceClient::CreateRuleOutcome IdrsserviceClient::createRule(const CreateRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateRuleOutcome(CreateRuleResult(outcome.result()));
	else
		return CreateRuleOutcome(outcome.error());
}

void IdrsserviceClient::createRuleAsync(const CreateRuleRequest& request, const CreateRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IdrsserviceClient::CreateRuleOutcomeCallable IdrsserviceClient::createRuleCallable(const CreateRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateRuleOutcome()>>(
			[this, request]()
			{
			return this->createRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IdrsserviceClient::CreateStatisticsRecordOutcome IdrsserviceClient::createStatisticsRecord(const CreateStatisticsRecordRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateStatisticsRecordOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateStatisticsRecordOutcome(CreateStatisticsRecordResult(outcome.result()));
	else
		return CreateStatisticsRecordOutcome(outcome.error());
}

void IdrsserviceClient::createStatisticsRecordAsync(const CreateStatisticsRecordRequest& request, const CreateStatisticsRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createStatisticsRecord(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IdrsserviceClient::CreateStatisticsRecordOutcomeCallable IdrsserviceClient::createStatisticsRecordCallable(const CreateStatisticsRecordRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateStatisticsRecordOutcome()>>(
			[this, request]()
			{
			return this->createStatisticsRecord(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IdrsserviceClient::CreateStatisticsTaskOutcome IdrsserviceClient::createStatisticsTask(const CreateStatisticsTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateStatisticsTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateStatisticsTaskOutcome(CreateStatisticsTaskResult(outcome.result()));
	else
		return CreateStatisticsTaskOutcome(outcome.error());
}

void IdrsserviceClient::createStatisticsTaskAsync(const CreateStatisticsTaskRequest& request, const CreateStatisticsTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createStatisticsTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IdrsserviceClient::CreateStatisticsTaskOutcomeCallable IdrsserviceClient::createStatisticsTaskCallable(const CreateStatisticsTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateStatisticsTaskOutcome()>>(
			[this, request]()
			{
			return this->createStatisticsTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IdrsserviceClient::CreateTaskGroupOutcome IdrsserviceClient::createTaskGroup(const CreateTaskGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateTaskGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateTaskGroupOutcome(CreateTaskGroupResult(outcome.result()));
	else
		return CreateTaskGroupOutcome(outcome.error());
}

void IdrsserviceClient::createTaskGroupAsync(const CreateTaskGroupRequest& request, const CreateTaskGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createTaskGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IdrsserviceClient::CreateTaskGroupOutcomeCallable IdrsserviceClient::createTaskGroupCallable(const CreateTaskGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateTaskGroupOutcome()>>(
			[this, request]()
			{
			return this->createTaskGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IdrsserviceClient::CreateUserDepartmentsOutcome IdrsserviceClient::createUserDepartments(const CreateUserDepartmentsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateUserDepartmentsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateUserDepartmentsOutcome(CreateUserDepartmentsResult(outcome.result()));
	else
		return CreateUserDepartmentsOutcome(outcome.error());
}

void IdrsserviceClient::createUserDepartmentsAsync(const CreateUserDepartmentsRequest& request, const CreateUserDepartmentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createUserDepartments(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IdrsserviceClient::CreateUserDepartmentsOutcomeCallable IdrsserviceClient::createUserDepartmentsCallable(const CreateUserDepartmentsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateUserDepartmentsOutcome()>>(
			[this, request]()
			{
			return this->createUserDepartments(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IdrsserviceClient::DeleteAppOutcome IdrsserviceClient::deleteApp(const DeleteAppRequest &request) const
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

void IdrsserviceClient::deleteAppAsync(const DeleteAppRequest& request, const DeleteAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteApp(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IdrsserviceClient::DeleteAppOutcomeCallable IdrsserviceClient::deleteAppCallable(const DeleteAppRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteAppOutcome()>>(
			[this, request]()
			{
			return this->deleteApp(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IdrsserviceClient::DeleteDepartmentOutcome IdrsserviceClient::deleteDepartment(const DeleteDepartmentRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteDepartmentOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteDepartmentOutcome(DeleteDepartmentResult(outcome.result()));
	else
		return DeleteDepartmentOutcome(outcome.error());
}

void IdrsserviceClient::deleteDepartmentAsync(const DeleteDepartmentRequest& request, const DeleteDepartmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteDepartment(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IdrsserviceClient::DeleteDepartmentOutcomeCallable IdrsserviceClient::deleteDepartmentCallable(const DeleteDepartmentRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteDepartmentOutcome()>>(
			[this, request]()
			{
			return this->deleteDepartment(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IdrsserviceClient::DeleteRuleOutcome IdrsserviceClient::deleteRule(const DeleteRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteRuleOutcome(DeleteRuleResult(outcome.result()));
	else
		return DeleteRuleOutcome(outcome.error());
}

void IdrsserviceClient::deleteRuleAsync(const DeleteRuleRequest& request, const DeleteRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IdrsserviceClient::DeleteRuleOutcomeCallable IdrsserviceClient::deleteRuleCallable(const DeleteRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteRuleOutcome()>>(
			[this, request]()
			{
			return this->deleteRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IdrsserviceClient::DeleteUserOutcome IdrsserviceClient::deleteUser(const DeleteUserRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteUserOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteUserOutcome(DeleteUserResult(outcome.result()));
	else
		return DeleteUserOutcome(outcome.error());
}

void IdrsserviceClient::deleteUserAsync(const DeleteUserRequest& request, const DeleteUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteUser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IdrsserviceClient::DeleteUserOutcomeCallable IdrsserviceClient::deleteUserCallable(const DeleteUserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteUserOutcome()>>(
			[this, request]()
			{
			return this->deleteUser(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IdrsserviceClient::DeleteUserDepartmentsOutcome IdrsserviceClient::deleteUserDepartments(const DeleteUserDepartmentsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteUserDepartmentsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteUserDepartmentsOutcome(DeleteUserDepartmentsResult(outcome.result()));
	else
		return DeleteUserDepartmentsOutcome(outcome.error());
}

void IdrsserviceClient::deleteUserDepartmentsAsync(const DeleteUserDepartmentsRequest& request, const DeleteUserDepartmentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteUserDepartments(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IdrsserviceClient::DeleteUserDepartmentsOutcomeCallable IdrsserviceClient::deleteUserDepartmentsCallable(const DeleteUserDepartmentsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteUserDepartmentsOutcome()>>(
			[this, request]()
			{
			return this->deleteUserDepartments(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IdrsserviceClient::ExitLiveOutcome IdrsserviceClient::exitLive(const ExitLiveRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ExitLiveOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ExitLiveOutcome(ExitLiveResult(outcome.result()));
	else
		return ExitLiveOutcome(outcome.error());
}

void IdrsserviceClient::exitLiveAsync(const ExitLiveRequest& request, const ExitLiveAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, exitLive(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IdrsserviceClient::ExitLiveOutcomeCallable IdrsserviceClient::exitLiveCallable(const ExitLiveRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ExitLiveOutcome()>>(
			[this, request]()
			{
			return this->exitLive(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IdrsserviceClient::GetAppOutcome IdrsserviceClient::getApp(const GetAppRequest &request) const
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

void IdrsserviceClient::getAppAsync(const GetAppRequest& request, const GetAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getApp(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IdrsserviceClient::GetAppOutcomeCallable IdrsserviceClient::getAppCallable(const GetAppRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetAppOutcome()>>(
			[this, request]()
			{
			return this->getApp(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IdrsserviceClient::GetDepartmentOutcome IdrsserviceClient::getDepartment(const GetDepartmentRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetDepartmentOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetDepartmentOutcome(GetDepartmentResult(outcome.result()));
	else
		return GetDepartmentOutcome(outcome.error());
}

void IdrsserviceClient::getDepartmentAsync(const GetDepartmentRequest& request, const GetDepartmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getDepartment(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IdrsserviceClient::GetDepartmentOutcomeCallable IdrsserviceClient::getDepartmentCallable(const GetDepartmentRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetDepartmentOutcome()>>(
			[this, request]()
			{
			return this->getDepartment(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IdrsserviceClient::GetDetectEvaluationOutcome IdrsserviceClient::getDetectEvaluation(const GetDetectEvaluationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetDetectEvaluationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetDetectEvaluationOutcome(GetDetectEvaluationResult(outcome.result()));
	else
		return GetDetectEvaluationOutcome(outcome.error());
}

void IdrsserviceClient::getDetectEvaluationAsync(const GetDetectEvaluationRequest& request, const GetDetectEvaluationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getDetectEvaluation(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IdrsserviceClient::GetDetectEvaluationOutcomeCallable IdrsserviceClient::getDetectEvaluationCallable(const GetDetectEvaluationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetDetectEvaluationOutcome()>>(
			[this, request]()
			{
			return this->getDetectEvaluation(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IdrsserviceClient::GetDetectionOutcome IdrsserviceClient::getDetection(const GetDetectionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetDetectionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetDetectionOutcome(GetDetectionResult(outcome.result()));
	else
		return GetDetectionOutcome(outcome.error());
}

void IdrsserviceClient::getDetectionAsync(const GetDetectionRequest& request, const GetDetectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getDetection(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IdrsserviceClient::GetDetectionOutcomeCallable IdrsserviceClient::getDetectionCallable(const GetDetectionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetDetectionOutcome()>>(
			[this, request]()
			{
			return this->getDetection(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IdrsserviceClient::GetModelSignedUrlOutcome IdrsserviceClient::getModelSignedUrl(const GetModelSignedUrlRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetModelSignedUrlOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetModelSignedUrlOutcome(GetModelSignedUrlResult(outcome.result()));
	else
		return GetModelSignedUrlOutcome(outcome.error());
}

void IdrsserviceClient::getModelSignedUrlAsync(const GetModelSignedUrlRequest& request, const GetModelSignedUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getModelSignedUrl(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IdrsserviceClient::GetModelSignedUrlOutcomeCallable IdrsserviceClient::getModelSignedUrlCallable(const GetModelSignedUrlRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetModelSignedUrlOutcome()>>(
			[this, request]()
			{
			return this->getModelSignedUrl(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IdrsserviceClient::GetPreSignedUrlOutcome IdrsserviceClient::getPreSignedUrl(const GetPreSignedUrlRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetPreSignedUrlOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetPreSignedUrlOutcome(GetPreSignedUrlResult(outcome.result()));
	else
		return GetPreSignedUrlOutcome(outcome.error());
}

void IdrsserviceClient::getPreSignedUrlAsync(const GetPreSignedUrlRequest& request, const GetPreSignedUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getPreSignedUrl(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IdrsserviceClient::GetPreSignedUrlOutcomeCallable IdrsserviceClient::getPreSignedUrlCallable(const GetPreSignedUrlRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetPreSignedUrlOutcome()>>(
			[this, request]()
			{
			return this->getPreSignedUrl(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IdrsserviceClient::GetRuleOutcome IdrsserviceClient::getRule(const GetRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetRuleOutcome(GetRuleResult(outcome.result()));
	else
		return GetRuleOutcome(outcome.error());
}

void IdrsserviceClient::getRuleAsync(const GetRuleRequest& request, const GetRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IdrsserviceClient::GetRuleOutcomeCallable IdrsserviceClient::getRuleCallable(const GetRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetRuleOutcome()>>(
			[this, request]()
			{
			return this->getRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IdrsserviceClient::GetServiceConfigurationOutcome IdrsserviceClient::getServiceConfiguration(const GetServiceConfigurationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetServiceConfigurationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetServiceConfigurationOutcome(GetServiceConfigurationResult(outcome.result()));
	else
		return GetServiceConfigurationOutcome(outcome.error());
}

void IdrsserviceClient::getServiceConfigurationAsync(const GetServiceConfigurationRequest& request, const GetServiceConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getServiceConfiguration(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IdrsserviceClient::GetServiceConfigurationOutcomeCallable IdrsserviceClient::getServiceConfigurationCallable(const GetServiceConfigurationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetServiceConfigurationOutcome()>>(
			[this, request]()
			{
			return this->getServiceConfiguration(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IdrsserviceClient::GetSignedUrlOutcome IdrsserviceClient::getSignedUrl(const GetSignedUrlRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetSignedUrlOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetSignedUrlOutcome(GetSignedUrlResult(outcome.result()));
	else
		return GetSignedUrlOutcome(outcome.error());
}

void IdrsserviceClient::getSignedUrlAsync(const GetSignedUrlRequest& request, const GetSignedUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getSignedUrl(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IdrsserviceClient::GetSignedUrlOutcomeCallable IdrsserviceClient::getSignedUrlCallable(const GetSignedUrlRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetSignedUrlOutcome()>>(
			[this, request]()
			{
			return this->getSignedUrl(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IdrsserviceClient::GetSlrConfigurationOutcome IdrsserviceClient::getSlrConfiguration(const GetSlrConfigurationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetSlrConfigurationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetSlrConfigurationOutcome(GetSlrConfigurationResult(outcome.result()));
	else
		return GetSlrConfigurationOutcome(outcome.error());
}

void IdrsserviceClient::getSlrConfigurationAsync(const GetSlrConfigurationRequest& request, const GetSlrConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getSlrConfiguration(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IdrsserviceClient::GetSlrConfigurationOutcomeCallable IdrsserviceClient::getSlrConfigurationCallable(const GetSlrConfigurationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetSlrConfigurationOutcome()>>(
			[this, request]()
			{
			return this->getSlrConfiguration(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IdrsserviceClient::GetStatisticsOutcome IdrsserviceClient::getStatistics(const GetStatisticsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetStatisticsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetStatisticsOutcome(GetStatisticsResult(outcome.result()));
	else
		return GetStatisticsOutcome(outcome.error());
}

void IdrsserviceClient::getStatisticsAsync(const GetStatisticsRequest& request, const GetStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getStatistics(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IdrsserviceClient::GetStatisticsOutcomeCallable IdrsserviceClient::getStatisticsCallable(const GetStatisticsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetStatisticsOutcome()>>(
			[this, request]()
			{
			return this->getStatistics(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IdrsserviceClient::GetTaskOutcome IdrsserviceClient::getTask(const GetTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetTaskOutcome(GetTaskResult(outcome.result()));
	else
		return GetTaskOutcome(outcome.error());
}

void IdrsserviceClient::getTaskAsync(const GetTaskRequest& request, const GetTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IdrsserviceClient::GetTaskOutcomeCallable IdrsserviceClient::getTaskCallable(const GetTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetTaskOutcome()>>(
			[this, request]()
			{
			return this->getTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IdrsserviceClient::GetTaskGroupOutcome IdrsserviceClient::getTaskGroup(const GetTaskGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetTaskGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetTaskGroupOutcome(GetTaskGroupResult(outcome.result()));
	else
		return GetTaskGroupOutcome(outcome.error());
}

void IdrsserviceClient::getTaskGroupAsync(const GetTaskGroupRequest& request, const GetTaskGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getTaskGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IdrsserviceClient::GetTaskGroupOutcomeCallable IdrsserviceClient::getTaskGroupCallable(const GetTaskGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetTaskGroupOutcome()>>(
			[this, request]()
			{
			return this->getTaskGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IdrsserviceClient::GetUserOutcome IdrsserviceClient::getUser(const GetUserRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetUserOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetUserOutcome(GetUserResult(outcome.result()));
	else
		return GetUserOutcome(outcome.error());
}

void IdrsserviceClient::getUserAsync(const GetUserRequest& request, const GetUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getUser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IdrsserviceClient::GetUserOutcomeCallable IdrsserviceClient::getUserCallable(const GetUserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetUserOutcome()>>(
			[this, request]()
			{
			return this->getUser(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IdrsserviceClient::InitializeServiceLinkedRoleOutcome IdrsserviceClient::initializeServiceLinkedRole(const InitializeServiceLinkedRoleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return InitializeServiceLinkedRoleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return InitializeServiceLinkedRoleOutcome(InitializeServiceLinkedRoleResult(outcome.result()));
	else
		return InitializeServiceLinkedRoleOutcome(outcome.error());
}

void IdrsserviceClient::initializeServiceLinkedRoleAsync(const InitializeServiceLinkedRoleRequest& request, const InitializeServiceLinkedRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, initializeServiceLinkedRole(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IdrsserviceClient::InitializeServiceLinkedRoleOutcomeCallable IdrsserviceClient::initializeServiceLinkedRoleCallable(const InitializeServiceLinkedRoleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<InitializeServiceLinkedRoleOutcome()>>(
			[this, request]()
			{
			return this->initializeServiceLinkedRole(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IdrsserviceClient::JoinLiveOutcome IdrsserviceClient::joinLive(const JoinLiveRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return JoinLiveOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return JoinLiveOutcome(JoinLiveResult(outcome.result()));
	else
		return JoinLiveOutcome(outcome.error());
}

void IdrsserviceClient::joinLiveAsync(const JoinLiveRequest& request, const JoinLiveAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, joinLive(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IdrsserviceClient::JoinLiveOutcomeCallable IdrsserviceClient::joinLiveCallable(const JoinLiveRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<JoinLiveOutcome()>>(
			[this, request]()
			{
			return this->joinLive(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IdrsserviceClient::ListAppsOutcome IdrsserviceClient::listApps(const ListAppsRequest &request) const
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

void IdrsserviceClient::listAppsAsync(const ListAppsRequest& request, const ListAppsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listApps(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IdrsserviceClient::ListAppsOutcomeCallable IdrsserviceClient::listAppsCallable(const ListAppsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAppsOutcome()>>(
			[this, request]()
			{
			return this->listApps(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IdrsserviceClient::ListDepartmentsOutcome IdrsserviceClient::listDepartments(const ListDepartmentsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDepartmentsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDepartmentsOutcome(ListDepartmentsResult(outcome.result()));
	else
		return ListDepartmentsOutcome(outcome.error());
}

void IdrsserviceClient::listDepartmentsAsync(const ListDepartmentsRequest& request, const ListDepartmentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDepartments(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IdrsserviceClient::ListDepartmentsOutcomeCallable IdrsserviceClient::listDepartmentsCallable(const ListDepartmentsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDepartmentsOutcome()>>(
			[this, request]()
			{
			return this->listDepartments(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IdrsserviceClient::ListDetectionsOutcome IdrsserviceClient::listDetections(const ListDetectionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDetectionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDetectionsOutcome(ListDetectionsResult(outcome.result()));
	else
		return ListDetectionsOutcome(outcome.error());
}

void IdrsserviceClient::listDetectionsAsync(const ListDetectionsRequest& request, const ListDetectionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDetections(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IdrsserviceClient::ListDetectionsOutcomeCallable IdrsserviceClient::listDetectionsCallable(const ListDetectionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDetectionsOutcome()>>(
			[this, request]()
			{
			return this->listDetections(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IdrsserviceClient::ListFilesOutcome IdrsserviceClient::listFiles(const ListFilesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListFilesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListFilesOutcome(ListFilesResult(outcome.result()));
	else
		return ListFilesOutcome(outcome.error());
}

void IdrsserviceClient::listFilesAsync(const ListFilesRequest& request, const ListFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listFiles(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IdrsserviceClient::ListFilesOutcomeCallable IdrsserviceClient::listFilesCallable(const ListFilesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListFilesOutcome()>>(
			[this, request]()
			{
			return this->listFiles(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IdrsserviceClient::ListLivesOutcome IdrsserviceClient::listLives(const ListLivesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListLivesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListLivesOutcome(ListLivesResult(outcome.result()));
	else
		return ListLivesOutcome(outcome.error());
}

void IdrsserviceClient::listLivesAsync(const ListLivesRequest& request, const ListLivesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listLives(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IdrsserviceClient::ListLivesOutcomeCallable IdrsserviceClient::listLivesCallable(const ListLivesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListLivesOutcome()>>(
			[this, request]()
			{
			return this->listLives(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IdrsserviceClient::ListRolesOutcome IdrsserviceClient::listRoles(const ListRolesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListRolesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListRolesOutcome(ListRolesResult(outcome.result()));
	else
		return ListRolesOutcome(outcome.error());
}

void IdrsserviceClient::listRolesAsync(const ListRolesRequest& request, const ListRolesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listRoles(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IdrsserviceClient::ListRolesOutcomeCallable IdrsserviceClient::listRolesCallable(const ListRolesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListRolesOutcome()>>(
			[this, request]()
			{
			return this->listRoles(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IdrsserviceClient::ListRulesOutcome IdrsserviceClient::listRules(const ListRulesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListRulesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListRulesOutcome(ListRulesResult(outcome.result()));
	else
		return ListRulesOutcome(outcome.error());
}

void IdrsserviceClient::listRulesAsync(const ListRulesRequest& request, const ListRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listRules(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IdrsserviceClient::ListRulesOutcomeCallable IdrsserviceClient::listRulesCallable(const ListRulesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListRulesOutcome()>>(
			[this, request]()
			{
			return this->listRules(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IdrsserviceClient::ListStatisticsTaskOutcome IdrsserviceClient::listStatisticsTask(const ListStatisticsTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListStatisticsTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListStatisticsTaskOutcome(ListStatisticsTaskResult(outcome.result()));
	else
		return ListStatisticsTaskOutcome(outcome.error());
}

void IdrsserviceClient::listStatisticsTaskAsync(const ListStatisticsTaskRequest& request, const ListStatisticsTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listStatisticsTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IdrsserviceClient::ListStatisticsTaskOutcomeCallable IdrsserviceClient::listStatisticsTaskCallable(const ListStatisticsTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListStatisticsTaskOutcome()>>(
			[this, request]()
			{
			return this->listStatisticsTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IdrsserviceClient::ListTaskGroupsOutcome IdrsserviceClient::listTaskGroups(const ListTaskGroupsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListTaskGroupsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListTaskGroupsOutcome(ListTaskGroupsResult(outcome.result()));
	else
		return ListTaskGroupsOutcome(outcome.error());
}

void IdrsserviceClient::listTaskGroupsAsync(const ListTaskGroupsRequest& request, const ListTaskGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTaskGroups(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IdrsserviceClient::ListTaskGroupsOutcomeCallable IdrsserviceClient::listTaskGroupsCallable(const ListTaskGroupsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTaskGroupsOutcome()>>(
			[this, request]()
			{
			return this->listTaskGroups(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IdrsserviceClient::ListTaskItemsOutcome IdrsserviceClient::listTaskItems(const ListTaskItemsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListTaskItemsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListTaskItemsOutcome(ListTaskItemsResult(outcome.result()));
	else
		return ListTaskItemsOutcome(outcome.error());
}

void IdrsserviceClient::listTaskItemsAsync(const ListTaskItemsRequest& request, const ListTaskItemsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTaskItems(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IdrsserviceClient::ListTaskItemsOutcomeCallable IdrsserviceClient::listTaskItemsCallable(const ListTaskItemsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTaskItemsOutcome()>>(
			[this, request]()
			{
			return this->listTaskItems(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IdrsserviceClient::ListTasksOutcome IdrsserviceClient::listTasks(const ListTasksRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListTasksOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListTasksOutcome(ListTasksResult(outcome.result()));
	else
		return ListTasksOutcome(outcome.error());
}

void IdrsserviceClient::listTasksAsync(const ListTasksRequest& request, const ListTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTasks(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IdrsserviceClient::ListTasksOutcomeCallable IdrsserviceClient::listTasksCallable(const ListTasksRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTasksOutcome()>>(
			[this, request]()
			{
			return this->listTasks(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IdrsserviceClient::ListUsersOutcome IdrsserviceClient::listUsers(const ListUsersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListUsersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListUsersOutcome(ListUsersResult(outcome.result()));
	else
		return ListUsersOutcome(outcome.error());
}

void IdrsserviceClient::listUsersAsync(const ListUsersRequest& request, const ListUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listUsers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IdrsserviceClient::ListUsersOutcomeCallable IdrsserviceClient::listUsersCallable(const ListUsersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListUsersOutcome()>>(
			[this, request]()
			{
			return this->listUsers(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IdrsserviceClient::UpdateAppOutcome IdrsserviceClient::updateApp(const UpdateAppRequest &request) const
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

void IdrsserviceClient::updateAppAsync(const UpdateAppRequest& request, const UpdateAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateApp(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IdrsserviceClient::UpdateAppOutcomeCallable IdrsserviceClient::updateAppCallable(const UpdateAppRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateAppOutcome()>>(
			[this, request]()
			{
			return this->updateApp(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IdrsserviceClient::UpdateDepartmentOutcome IdrsserviceClient::updateDepartment(const UpdateDepartmentRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateDepartmentOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateDepartmentOutcome(UpdateDepartmentResult(outcome.result()));
	else
		return UpdateDepartmentOutcome(outcome.error());
}

void IdrsserviceClient::updateDepartmentAsync(const UpdateDepartmentRequest& request, const UpdateDepartmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateDepartment(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IdrsserviceClient::UpdateDepartmentOutcomeCallable IdrsserviceClient::updateDepartmentCallable(const UpdateDepartmentRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateDepartmentOutcome()>>(
			[this, request]()
			{
			return this->updateDepartment(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IdrsserviceClient::UpdateLiveOutcome IdrsserviceClient::updateLive(const UpdateLiveRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateLiveOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateLiveOutcome(UpdateLiveResult(outcome.result()));
	else
		return UpdateLiveOutcome(outcome.error());
}

void IdrsserviceClient::updateLiveAsync(const UpdateLiveRequest& request, const UpdateLiveAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateLive(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IdrsserviceClient::UpdateLiveOutcomeCallable IdrsserviceClient::updateLiveCallable(const UpdateLiveRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateLiveOutcome()>>(
			[this, request]()
			{
			return this->updateLive(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IdrsserviceClient::UpdateRuleOutcome IdrsserviceClient::updateRule(const UpdateRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateRuleOutcome(UpdateRuleResult(outcome.result()));
	else
		return UpdateRuleOutcome(outcome.error());
}

void IdrsserviceClient::updateRuleAsync(const UpdateRuleRequest& request, const UpdateRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IdrsserviceClient::UpdateRuleOutcomeCallable IdrsserviceClient::updateRuleCallable(const UpdateRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateRuleOutcome()>>(
			[this, request]()
			{
			return this->updateRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IdrsserviceClient::UpdateServiceConfigurationOutcome IdrsserviceClient::updateServiceConfiguration(const UpdateServiceConfigurationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateServiceConfigurationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateServiceConfigurationOutcome(UpdateServiceConfigurationResult(outcome.result()));
	else
		return UpdateServiceConfigurationOutcome(outcome.error());
}

void IdrsserviceClient::updateServiceConfigurationAsync(const UpdateServiceConfigurationRequest& request, const UpdateServiceConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateServiceConfiguration(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IdrsserviceClient::UpdateServiceConfigurationOutcomeCallable IdrsserviceClient::updateServiceConfigurationCallable(const UpdateServiceConfigurationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateServiceConfigurationOutcome()>>(
			[this, request]()
			{
			return this->updateServiceConfiguration(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IdrsserviceClient::UpdateSlrConfigurationOutcome IdrsserviceClient::updateSlrConfiguration(const UpdateSlrConfigurationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateSlrConfigurationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateSlrConfigurationOutcome(UpdateSlrConfigurationResult(outcome.result()));
	else
		return UpdateSlrConfigurationOutcome(outcome.error());
}

void IdrsserviceClient::updateSlrConfigurationAsync(const UpdateSlrConfigurationRequest& request, const UpdateSlrConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateSlrConfiguration(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IdrsserviceClient::UpdateSlrConfigurationOutcomeCallable IdrsserviceClient::updateSlrConfigurationCallable(const UpdateSlrConfigurationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateSlrConfigurationOutcome()>>(
			[this, request]()
			{
			return this->updateSlrConfiguration(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IdrsserviceClient::UpdateUserOutcome IdrsserviceClient::updateUser(const UpdateUserRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateUserOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateUserOutcome(UpdateUserResult(outcome.result()));
	else
		return UpdateUserOutcome(outcome.error());
}

void IdrsserviceClient::updateUserAsync(const UpdateUserRequest& request, const UpdateUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateUser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IdrsserviceClient::UpdateUserOutcomeCallable IdrsserviceClient::updateUserCallable(const UpdateUserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateUserOutcome()>>(
			[this, request]()
			{
			return this->updateUser(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

