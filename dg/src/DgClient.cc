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

#include <alibabacloud/dg/DgClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Dg;
using namespace AlibabaCloud::Dg::Model;

namespace
{
	const std::string SERVICE_NAME = "dg";
}

DgClient::DgClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "dg");
}

DgClient::DgClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "dg");
}

DgClient::DgClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "dg");
}

DgClient::~DgClient()
{}

DgClient::AddDatabaseOutcome DgClient::addDatabase(const AddDatabaseRequest &request) const
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

void DgClient::addDatabaseAsync(const AddDatabaseRequest& request, const AddDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addDatabase(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DgClient::AddDatabaseOutcomeCallable DgClient::addDatabaseCallable(const AddDatabaseRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddDatabaseOutcome()>>(
			[this, request]()
			{
			return this->addDatabase(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DgClient::AddDatabaseListOutcome DgClient::addDatabaseList(const AddDatabaseListRequest &request) const
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

void DgClient::addDatabaseListAsync(const AddDatabaseListRequest& request, const AddDatabaseListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addDatabaseList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DgClient::AddDatabaseListOutcomeCallable DgClient::addDatabaseListCallable(const AddDatabaseListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddDatabaseListOutcome()>>(
			[this, request]()
			{
			return this->addDatabaseList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DgClient::ConnectDatabaseOutcome DgClient::connectDatabase(const ConnectDatabaseRequest &request) const
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

void DgClient::connectDatabaseAsync(const ConnectDatabaseRequest& request, const ConnectDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, connectDatabase(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DgClient::ConnectDatabaseOutcomeCallable DgClient::connectDatabaseCallable(const ConnectDatabaseRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ConnectDatabaseOutcome()>>(
			[this, request]()
			{
			return this->connectDatabase(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DgClient::CreateDatabaseAccessPointOutcome DgClient::createDatabaseAccessPoint(const CreateDatabaseAccessPointRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateDatabaseAccessPointOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateDatabaseAccessPointOutcome(CreateDatabaseAccessPointResult(outcome.result()));
	else
		return CreateDatabaseAccessPointOutcome(outcome.error());
}

void DgClient::createDatabaseAccessPointAsync(const CreateDatabaseAccessPointRequest& request, const CreateDatabaseAccessPointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createDatabaseAccessPoint(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DgClient::CreateDatabaseAccessPointOutcomeCallable DgClient::createDatabaseAccessPointCallable(const CreateDatabaseAccessPointRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateDatabaseAccessPointOutcome()>>(
			[this, request]()
			{
			return this->createDatabaseAccessPoint(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DgClient::CreateGatewayOutcome DgClient::createGateway(const CreateGatewayRequest &request) const
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

void DgClient::createGatewayAsync(const CreateGatewayRequest& request, const CreateGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createGateway(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DgClient::CreateGatewayOutcomeCallable DgClient::createGatewayCallable(const CreateGatewayRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateGatewayOutcome()>>(
			[this, request]()
			{
			return this->createGateway(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DgClient::CreateGatewayVerifyCodeOutcome DgClient::createGatewayVerifyCode(const CreateGatewayVerifyCodeRequest &request) const
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

void DgClient::createGatewayVerifyCodeAsync(const CreateGatewayVerifyCodeRequest& request, const CreateGatewayVerifyCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createGatewayVerifyCode(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DgClient::CreateGatewayVerifyCodeOutcomeCallable DgClient::createGatewayVerifyCodeCallable(const CreateGatewayVerifyCodeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateGatewayVerifyCodeOutcome()>>(
			[this, request]()
			{
			return this->createGatewayVerifyCode(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DgClient::DeleteDatabaseOutcome DgClient::deleteDatabase(const DeleteDatabaseRequest &request) const
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

void DgClient::deleteDatabaseAsync(const DeleteDatabaseRequest& request, const DeleteDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteDatabase(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DgClient::DeleteDatabaseOutcomeCallable DgClient::deleteDatabaseCallable(const DeleteDatabaseRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteDatabaseOutcome()>>(
			[this, request]()
			{
			return this->deleteDatabase(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DgClient::DeleteDatabaseAccessPointOutcome DgClient::deleteDatabaseAccessPoint(const DeleteDatabaseAccessPointRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteDatabaseAccessPointOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteDatabaseAccessPointOutcome(DeleteDatabaseAccessPointResult(outcome.result()));
	else
		return DeleteDatabaseAccessPointOutcome(outcome.error());
}

void DgClient::deleteDatabaseAccessPointAsync(const DeleteDatabaseAccessPointRequest& request, const DeleteDatabaseAccessPointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteDatabaseAccessPoint(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DgClient::DeleteDatabaseAccessPointOutcomeCallable DgClient::deleteDatabaseAccessPointCallable(const DeleteDatabaseAccessPointRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteDatabaseAccessPointOutcome()>>(
			[this, request]()
			{
			return this->deleteDatabaseAccessPoint(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DgClient::DeleteGatewayOutcome DgClient::deleteGateway(const DeleteGatewayRequest &request) const
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

void DgClient::deleteGatewayAsync(const DeleteGatewayRequest& request, const DeleteGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteGateway(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DgClient::DeleteGatewayOutcomeCallable DgClient::deleteGatewayCallable(const DeleteGatewayRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteGatewayOutcome()>>(
			[this, request]()
			{
			return this->deleteGateway(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DgClient::DeleteGatewayInstanceOutcome DgClient::deleteGatewayInstance(const DeleteGatewayInstanceRequest &request) const
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

void DgClient::deleteGatewayInstanceAsync(const DeleteGatewayInstanceRequest& request, const DeleteGatewayInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteGatewayInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DgClient::DeleteGatewayInstanceOutcomeCallable DgClient::deleteGatewayInstanceCallable(const DeleteGatewayInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteGatewayInstanceOutcome()>>(
			[this, request]()
			{
			return this->deleteGatewayInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DgClient::DescribeRegionsOutcome DgClient::describeRegions(const DescribeRegionsRequest &request) const
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

void DgClient::describeRegionsAsync(const DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRegions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DgClient::DescribeRegionsOutcomeCallable DgClient::describeRegionsCallable(const DescribeRegionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRegionsOutcome()>>(
			[this, request]()
			{
			return this->describeRegions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DgClient::DownloadGatewayProgramOutcome DgClient::downloadGatewayProgram(const DownloadGatewayProgramRequest &request) const
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

void DgClient::downloadGatewayProgramAsync(const DownloadGatewayProgramRequest& request, const DownloadGatewayProgramAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, downloadGatewayProgram(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DgClient::DownloadGatewayProgramOutcomeCallable DgClient::downloadGatewayProgramCallable(const DownloadGatewayProgramRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DownloadGatewayProgramOutcome()>>(
			[this, request]()
			{
			return this->downloadGatewayProgram(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DgClient::FindUserGatewayByIdOutcome DgClient::findUserGatewayById(const FindUserGatewayByIdRequest &request) const
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

void DgClient::findUserGatewayByIdAsync(const FindUserGatewayByIdRequest& request, const FindUserGatewayByIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, findUserGatewayById(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DgClient::FindUserGatewayByIdOutcomeCallable DgClient::findUserGatewayByIdCallable(const FindUserGatewayByIdRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<FindUserGatewayByIdOutcome()>>(
			[this, request]()
			{
			return this->findUserGatewayById(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DgClient::GetUserDatabasesOutcome DgClient::getUserDatabases(const GetUserDatabasesRequest &request) const
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

void DgClient::getUserDatabasesAsync(const GetUserDatabasesRequest& request, const GetUserDatabasesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getUserDatabases(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DgClient::GetUserDatabasesOutcomeCallable DgClient::getUserDatabasesCallable(const GetUserDatabasesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetUserDatabasesOutcome()>>(
			[this, request]()
			{
			return this->getUserDatabases(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DgClient::GetUserGatewayInstancesOutcome DgClient::getUserGatewayInstances(const GetUserGatewayInstancesRequest &request) const
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

void DgClient::getUserGatewayInstancesAsync(const GetUserGatewayInstancesRequest& request, const GetUserGatewayInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getUserGatewayInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DgClient::GetUserGatewayInstancesOutcomeCallable DgClient::getUserGatewayInstancesCallable(const GetUserGatewayInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetUserGatewayInstancesOutcome()>>(
			[this, request]()
			{
			return this->getUserGatewayInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DgClient::GetUserGatewaysOutcome DgClient::getUserGateways(const GetUserGatewaysRequest &request) const
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

void DgClient::getUserGatewaysAsync(const GetUserGatewaysRequest& request, const GetUserGatewaysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getUserGateways(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DgClient::GetUserGatewaysOutcomeCallable DgClient::getUserGatewaysCallable(const GetUserGatewaysRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetUserGatewaysOutcome()>>(
			[this, request]()
			{
			return this->getUserGateways(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DgClient::ListDatabaseAccessPointOutcome DgClient::listDatabaseAccessPoint(const ListDatabaseAccessPointRequest &request) const
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

void DgClient::listDatabaseAccessPointAsync(const ListDatabaseAccessPointRequest& request, const ListDatabaseAccessPointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDatabaseAccessPoint(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DgClient::ListDatabaseAccessPointOutcomeCallable DgClient::listDatabaseAccessPointCallable(const ListDatabaseAccessPointRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDatabaseAccessPointOutcome()>>(
			[this, request]()
			{
			return this->listDatabaseAccessPoint(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DgClient::ModifyDatabaseOutcome DgClient::modifyDatabase(const ModifyDatabaseRequest &request) const
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

void DgClient::modifyDatabaseAsync(const ModifyDatabaseRequest& request, const ModifyDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDatabase(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DgClient::ModifyDatabaseOutcomeCallable DgClient::modifyDatabaseCallable(const ModifyDatabaseRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDatabaseOutcome()>>(
			[this, request]()
			{
			return this->modifyDatabase(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DgClient::ModifyGatewayOutcome DgClient::modifyGateway(const ModifyGatewayRequest &request) const
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

void DgClient::modifyGatewayAsync(const ModifyGatewayRequest& request, const ModifyGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyGateway(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DgClient::ModifyGatewayOutcomeCallable DgClient::modifyGatewayCallable(const ModifyGatewayRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyGatewayOutcome()>>(
			[this, request]()
			{
			return this->modifyGateway(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DgClient::RetryDatabaseOutcome DgClient::retryDatabase(const RetryDatabaseRequest &request) const
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

void DgClient::retryDatabaseAsync(const RetryDatabaseRequest& request, const RetryDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, retryDatabase(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DgClient::RetryDatabaseOutcomeCallable DgClient::retryDatabaseCallable(const RetryDatabaseRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RetryDatabaseOutcome()>>(
			[this, request]()
			{
			return this->retryDatabase(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DgClient::StopGatewayOutcome DgClient::stopGateway(const StopGatewayRequest &request) const
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

void DgClient::stopGatewayAsync(const StopGatewayRequest& request, const StopGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, stopGateway(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DgClient::StopGatewayOutcomeCallable DgClient::stopGatewayCallable(const StopGatewayRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StopGatewayOutcome()>>(
			[this, request]()
			{
			return this->stopGateway(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

