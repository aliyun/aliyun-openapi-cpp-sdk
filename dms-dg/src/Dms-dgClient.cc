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

#include <alibabacloud/dms-dg/Dms_dgClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Dms_dg;
using namespace AlibabaCloud::Dms_dg::Model;

namespace
{
	const std::string SERVICE_NAME = "dms-dg";
}

Dms_dgClient::Dms_dgClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

Dms_dgClient::Dms_dgClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

Dms_dgClient::Dms_dgClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

Dms_dgClient::~Dms_dgClient()
{}

Dms_dgClient::AddDatabaseOutcome Dms_dgClient::addDatabase(const AddDatabaseRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddDatabaseOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddDatabaseOutcome(AddDatabaseResult(outcome.result()));
	else
		return AddDatabaseOutcome(outcome.error());
}

void Dms_dgClient::addDatabaseAsync(const AddDatabaseRequest& request, const AddDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addDatabase(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_dgClient::AddDatabaseOutcomeCallable Dms_dgClient::addDatabaseCallable(const AddDatabaseRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddDatabaseOutcome()>>(
			[this, request]()
			{
			return this->addDatabase(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_dgClient::AddDatabaseListOutcome Dms_dgClient::addDatabaseList(const AddDatabaseListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddDatabaseListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddDatabaseListOutcome(AddDatabaseListResult(outcome.result()));
	else
		return AddDatabaseListOutcome(outcome.error());
}

void Dms_dgClient::addDatabaseListAsync(const AddDatabaseListRequest& request, const AddDatabaseListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addDatabaseList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_dgClient::AddDatabaseListOutcomeCallable Dms_dgClient::addDatabaseListCallable(const AddDatabaseListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddDatabaseListOutcome()>>(
			[this, request]()
			{
			return this->addDatabaseList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_dgClient::CheckDGEnabledOutcome Dms_dgClient::checkDGEnabled(const CheckDGEnabledRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CheckDGEnabledOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CheckDGEnabledOutcome(CheckDGEnabledResult(outcome.result()));
	else
		return CheckDGEnabledOutcome(outcome.error());
}

void Dms_dgClient::checkDGEnabledAsync(const CheckDGEnabledRequest& request, const CheckDGEnabledAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, checkDGEnabled(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_dgClient::CheckDGEnabledOutcomeCallable Dms_dgClient::checkDGEnabledCallable(const CheckDGEnabledRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CheckDGEnabledOutcome()>>(
			[this, request]()
			{
			return this->checkDGEnabled(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_dgClient::ConnectDatabaseOutcome Dms_dgClient::connectDatabase(const ConnectDatabaseRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ConnectDatabaseOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ConnectDatabaseOutcome(ConnectDatabaseResult(outcome.result()));
	else
		return ConnectDatabaseOutcome(outcome.error());
}

void Dms_dgClient::connectDatabaseAsync(const ConnectDatabaseRequest& request, const ConnectDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, connectDatabase(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_dgClient::ConnectDatabaseOutcomeCallable Dms_dgClient::connectDatabaseCallable(const ConnectDatabaseRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ConnectDatabaseOutcome()>>(
			[this, request]()
			{
			return this->connectDatabase(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_dgClient::CreateGatewayOutcome Dms_dgClient::createGateway(const CreateGatewayRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateGatewayOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateGatewayOutcome(CreateGatewayResult(outcome.result()));
	else
		return CreateGatewayOutcome(outcome.error());
}

void Dms_dgClient::createGatewayAsync(const CreateGatewayRequest& request, const CreateGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createGateway(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_dgClient::CreateGatewayOutcomeCallable Dms_dgClient::createGatewayCallable(const CreateGatewayRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateGatewayOutcome()>>(
			[this, request]()
			{
			return this->createGateway(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_dgClient::CreateGatewayVerifyCodeOutcome Dms_dgClient::createGatewayVerifyCode(const CreateGatewayVerifyCodeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateGatewayVerifyCodeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateGatewayVerifyCodeOutcome(CreateGatewayVerifyCodeResult(outcome.result()));
	else
		return CreateGatewayVerifyCodeOutcome(outcome.error());
}

void Dms_dgClient::createGatewayVerifyCodeAsync(const CreateGatewayVerifyCodeRequest& request, const CreateGatewayVerifyCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createGatewayVerifyCode(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_dgClient::CreateGatewayVerifyCodeOutcomeCallable Dms_dgClient::createGatewayVerifyCodeCallable(const CreateGatewayVerifyCodeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateGatewayVerifyCodeOutcome()>>(
			[this, request]()
			{
			return this->createGatewayVerifyCode(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_dgClient::DeleteDatabaseOutcome Dms_dgClient::deleteDatabase(const DeleteDatabaseRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteDatabaseOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteDatabaseOutcome(DeleteDatabaseResult(outcome.result()));
	else
		return DeleteDatabaseOutcome(outcome.error());
}

void Dms_dgClient::deleteDatabaseAsync(const DeleteDatabaseRequest& request, const DeleteDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteDatabase(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_dgClient::DeleteDatabaseOutcomeCallable Dms_dgClient::deleteDatabaseCallable(const DeleteDatabaseRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteDatabaseOutcome()>>(
			[this, request]()
			{
			return this->deleteDatabase(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_dgClient::DeleteGatewayOutcome Dms_dgClient::deleteGateway(const DeleteGatewayRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteGatewayOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteGatewayOutcome(DeleteGatewayResult(outcome.result()));
	else
		return DeleteGatewayOutcome(outcome.error());
}

void Dms_dgClient::deleteGatewayAsync(const DeleteGatewayRequest& request, const DeleteGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteGateway(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_dgClient::DeleteGatewayOutcomeCallable Dms_dgClient::deleteGatewayCallable(const DeleteGatewayRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteGatewayOutcome()>>(
			[this, request]()
			{
			return this->deleteGateway(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_dgClient::DeleteGatewayInstanceOutcome Dms_dgClient::deleteGatewayInstance(const DeleteGatewayInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteGatewayInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteGatewayInstanceOutcome(DeleteGatewayInstanceResult(outcome.result()));
	else
		return DeleteGatewayInstanceOutcome(outcome.error());
}

void Dms_dgClient::deleteGatewayInstanceAsync(const DeleteGatewayInstanceRequest& request, const DeleteGatewayInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteGatewayInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_dgClient::DeleteGatewayInstanceOutcomeCallable Dms_dgClient::deleteGatewayInstanceCallable(const DeleteGatewayInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteGatewayInstanceOutcome()>>(
			[this, request]()
			{
			return this->deleteGatewayInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_dgClient::DescribeRegionsOutcome Dms_dgClient::describeRegions(const DescribeRegionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRegionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRegionsOutcome(DescribeRegionsResult(outcome.result()));
	else
		return DescribeRegionsOutcome(outcome.error());
}

void Dms_dgClient::describeRegionsAsync(const DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRegions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_dgClient::DescribeRegionsOutcomeCallable Dms_dgClient::describeRegionsCallable(const DescribeRegionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRegionsOutcome()>>(
			[this, request]()
			{
			return this->describeRegions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_dgClient::DownloadGatewayProgramOutcome Dms_dgClient::downloadGatewayProgram(const DownloadGatewayProgramRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DownloadGatewayProgramOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DownloadGatewayProgramOutcome(DownloadGatewayProgramResult(outcome.result()));
	else
		return DownloadGatewayProgramOutcome(outcome.error());
}

void Dms_dgClient::downloadGatewayProgramAsync(const DownloadGatewayProgramRequest& request, const DownloadGatewayProgramAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, downloadGatewayProgram(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_dgClient::DownloadGatewayProgramOutcomeCallable Dms_dgClient::downloadGatewayProgramCallable(const DownloadGatewayProgramRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DownloadGatewayProgramOutcome()>>(
			[this, request]()
			{
			return this->downloadGatewayProgram(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_dgClient::FindUserGatewayByIdOutcome Dms_dgClient::findUserGatewayById(const FindUserGatewayByIdRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return FindUserGatewayByIdOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return FindUserGatewayByIdOutcome(FindUserGatewayByIdResult(outcome.result()));
	else
		return FindUserGatewayByIdOutcome(outcome.error());
}

void Dms_dgClient::findUserGatewayByIdAsync(const FindUserGatewayByIdRequest& request, const FindUserGatewayByIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, findUserGatewayById(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_dgClient::FindUserGatewayByIdOutcomeCallable Dms_dgClient::findUserGatewayByIdCallable(const FindUserGatewayByIdRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<FindUserGatewayByIdOutcome()>>(
			[this, request]()
			{
			return this->findUserGatewayById(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_dgClient::GetUserDatabasesOutcome Dms_dgClient::getUserDatabases(const GetUserDatabasesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetUserDatabasesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetUserDatabasesOutcome(GetUserDatabasesResult(outcome.result()));
	else
		return GetUserDatabasesOutcome(outcome.error());
}

void Dms_dgClient::getUserDatabasesAsync(const GetUserDatabasesRequest& request, const GetUserDatabasesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getUserDatabases(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_dgClient::GetUserDatabasesOutcomeCallable Dms_dgClient::getUserDatabasesCallable(const GetUserDatabasesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetUserDatabasesOutcome()>>(
			[this, request]()
			{
			return this->getUserDatabases(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_dgClient::GetUserGatewayInstancesOutcome Dms_dgClient::getUserGatewayInstances(const GetUserGatewayInstancesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetUserGatewayInstancesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetUserGatewayInstancesOutcome(GetUserGatewayInstancesResult(outcome.result()));
	else
		return GetUserGatewayInstancesOutcome(outcome.error());
}

void Dms_dgClient::getUserGatewayInstancesAsync(const GetUserGatewayInstancesRequest& request, const GetUserGatewayInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getUserGatewayInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_dgClient::GetUserGatewayInstancesOutcomeCallable Dms_dgClient::getUserGatewayInstancesCallable(const GetUserGatewayInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetUserGatewayInstancesOutcome()>>(
			[this, request]()
			{
			return this->getUserGatewayInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_dgClient::GetUserGatewaysOutcome Dms_dgClient::getUserGateways(const GetUserGatewaysRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetUserGatewaysOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetUserGatewaysOutcome(GetUserGatewaysResult(outcome.result()));
	else
		return GetUserGatewaysOutcome(outcome.error());
}

void Dms_dgClient::getUserGatewaysAsync(const GetUserGatewaysRequest& request, const GetUserGatewaysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getUserGateways(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_dgClient::GetUserGatewaysOutcomeCallable Dms_dgClient::getUserGatewaysCallable(const GetUserGatewaysRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetUserGatewaysOutcome()>>(
			[this, request]()
			{
			return this->getUserGateways(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_dgClient::ListDatabaseAccessPointOutcome Dms_dgClient::listDatabaseAccessPoint(const ListDatabaseAccessPointRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDatabaseAccessPointOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDatabaseAccessPointOutcome(ListDatabaseAccessPointResult(outcome.result()));
	else
		return ListDatabaseAccessPointOutcome(outcome.error());
}

void Dms_dgClient::listDatabaseAccessPointAsync(const ListDatabaseAccessPointRequest& request, const ListDatabaseAccessPointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDatabaseAccessPoint(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_dgClient::ListDatabaseAccessPointOutcomeCallable Dms_dgClient::listDatabaseAccessPointCallable(const ListDatabaseAccessPointRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDatabaseAccessPointOutcome()>>(
			[this, request]()
			{
			return this->listDatabaseAccessPoint(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_dgClient::ModifyDatabaseOutcome Dms_dgClient::modifyDatabase(const ModifyDatabaseRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDatabaseOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDatabaseOutcome(ModifyDatabaseResult(outcome.result()));
	else
		return ModifyDatabaseOutcome(outcome.error());
}

void Dms_dgClient::modifyDatabaseAsync(const ModifyDatabaseRequest& request, const ModifyDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDatabase(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_dgClient::ModifyDatabaseOutcomeCallable Dms_dgClient::modifyDatabaseCallable(const ModifyDatabaseRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDatabaseOutcome()>>(
			[this, request]()
			{
			return this->modifyDatabase(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_dgClient::ModifyGatewayOutcome Dms_dgClient::modifyGateway(const ModifyGatewayRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyGatewayOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyGatewayOutcome(ModifyGatewayResult(outcome.result()));
	else
		return ModifyGatewayOutcome(outcome.error());
}

void Dms_dgClient::modifyGatewayAsync(const ModifyGatewayRequest& request, const ModifyGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyGateway(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_dgClient::ModifyGatewayOutcomeCallable Dms_dgClient::modifyGatewayCallable(const ModifyGatewayRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyGatewayOutcome()>>(
			[this, request]()
			{
			return this->modifyGateway(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_dgClient::RetryDatabaseOutcome Dms_dgClient::retryDatabase(const RetryDatabaseRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RetryDatabaseOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RetryDatabaseOutcome(RetryDatabaseResult(outcome.result()));
	else
		return RetryDatabaseOutcome(outcome.error());
}

void Dms_dgClient::retryDatabaseAsync(const RetryDatabaseRequest& request, const RetryDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, retryDatabase(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_dgClient::RetryDatabaseOutcomeCallable Dms_dgClient::retryDatabaseCallable(const RetryDatabaseRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RetryDatabaseOutcome()>>(
			[this, request]()
			{
			return this->retryDatabase(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dms_dgClient::StopGatewayOutcome Dms_dgClient::stopGateway(const StopGatewayRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StopGatewayOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StopGatewayOutcome(StopGatewayResult(outcome.result()));
	else
		return StopGatewayOutcome(outcome.error());
}

void Dms_dgClient::stopGatewayAsync(const StopGatewayRequest& request, const StopGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, stopGateway(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dms_dgClient::StopGatewayOutcomeCallable Dms_dgClient::stopGatewayCallable(const StopGatewayRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StopGatewayOutcome()>>(
			[this, request]()
			{
			return this->stopGateway(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

