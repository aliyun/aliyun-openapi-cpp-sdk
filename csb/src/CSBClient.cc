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

#include <alibabacloud/csb/CSBClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::CSB;
using namespace AlibabaCloud::CSB::Model;

namespace
{
	const std::string SERVICE_NAME = "CSB";
}

CSBClient::CSBClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

CSBClient::CSBClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

CSBClient::CSBClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

CSBClient::~CSBClient()
{}

CSBClient::ApproveOrderListOutcome CSBClient::approveOrderList(const ApproveOrderListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ApproveOrderListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ApproveOrderListOutcome(ApproveOrderListResult(outcome.result()));
	else
		return ApproveOrderListOutcome(outcome.error());
}

void CSBClient::approveOrderListAsync(const ApproveOrderListRequest& request, const ApproveOrderListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, approveOrderList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CSBClient::ApproveOrderListOutcomeCallable CSBClient::approveOrderListCallable(const ApproveOrderListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ApproveOrderListOutcome()>>(
			[this, request]()
			{
			return this->approveOrderList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CSBClient::CheckSLRDeleteOutcome CSBClient::checkSLRDelete(const CheckSLRDeleteRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CheckSLRDeleteOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CheckSLRDeleteOutcome(CheckSLRDeleteResult(outcome.result()));
	else
		return CheckSLRDeleteOutcome(outcome.error());
}

void CSBClient::checkSLRDeleteAsync(const CheckSLRDeleteRequest& request, const CheckSLRDeleteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, checkSLRDelete(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CSBClient::CheckSLRDeleteOutcomeCallable CSBClient::checkSLRDeleteCallable(const CheckSLRDeleteRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CheckSLRDeleteOutcome()>>(
			[this, request]()
			{
			return this->checkSLRDelete(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CSBClient::CheckServiceExistOutcome CSBClient::checkServiceExist(const CheckServiceExistRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CheckServiceExistOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CheckServiceExistOutcome(CheckServiceExistResult(outcome.result()));
	else
		return CheckServiceExistOutcome(outcome.error());
}

void CSBClient::checkServiceExistAsync(const CheckServiceExistRequest& request, const CheckServiceExistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, checkServiceExist(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CSBClient::CheckServiceExistOutcomeCallable CSBClient::checkServiceExistCallable(const CheckServiceExistRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CheckServiceExistOutcome()>>(
			[this, request]()
			{
			return this->checkServiceExist(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CSBClient::CommitSuccessedServicesOutcome CSBClient::commitSuccessedServices(const CommitSuccessedServicesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CommitSuccessedServicesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CommitSuccessedServicesOutcome(CommitSuccessedServicesResult(outcome.result()));
	else
		return CommitSuccessedServicesOutcome(outcome.error());
}

void CSBClient::commitSuccessedServicesAsync(const CommitSuccessedServicesRequest& request, const CommitSuccessedServicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, commitSuccessedServices(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CSBClient::CommitSuccessedServicesOutcomeCallable CSBClient::commitSuccessedServicesCallable(const CommitSuccessedServicesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CommitSuccessedServicesOutcome()>>(
			[this, request]()
			{
			return this->commitSuccessedServices(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CSBClient::CreateCredentialsOutcome CSBClient::createCredentials(const CreateCredentialsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateCredentialsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateCredentialsOutcome(CreateCredentialsResult(outcome.result()));
	else
		return CreateCredentialsOutcome(outcome.error());
}

void CSBClient::createCredentialsAsync(const CreateCredentialsRequest& request, const CreateCredentialsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createCredentials(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CSBClient::CreateCredentialsOutcomeCallable CSBClient::createCredentialsCallable(const CreateCredentialsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateCredentialsOutcome()>>(
			[this, request]()
			{
			return this->createCredentials(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CSBClient::CreateOrderOutcome CSBClient::createOrder(const CreateOrderRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateOrderOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateOrderOutcome(CreateOrderResult(outcome.result()));
	else
		return CreateOrderOutcome(outcome.error());
}

void CSBClient::createOrderAsync(const CreateOrderRequest& request, const CreateOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createOrder(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CSBClient::CreateOrderOutcomeCallable CSBClient::createOrderCallable(const CreateOrderRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateOrderOutcome()>>(
			[this, request]()
			{
			return this->createOrder(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CSBClient::CreateProjectOutcome CSBClient::createProject(const CreateProjectRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateProjectOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateProjectOutcome(CreateProjectResult(outcome.result()));
	else
		return CreateProjectOutcome(outcome.error());
}

void CSBClient::createProjectAsync(const CreateProjectRequest& request, const CreateProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createProject(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CSBClient::CreateProjectOutcomeCallable CSBClient::createProjectCallable(const CreateProjectRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateProjectOutcome()>>(
			[this, request]()
			{
			return this->createProject(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CSBClient::CreateServiceOutcome CSBClient::createService(const CreateServiceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateServiceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateServiceOutcome(CreateServiceResult(outcome.result()));
	else
		return CreateServiceOutcome(outcome.error());
}

void CSBClient::createServiceAsync(const CreateServiceRequest& request, const CreateServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createService(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CSBClient::CreateServiceOutcomeCallable CSBClient::createServiceCallable(const CreateServiceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateServiceOutcome()>>(
			[this, request]()
			{
			return this->createService(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CSBClient::DeleteCasServiceOutcome CSBClient::deleteCasService(const DeleteCasServiceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteCasServiceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteCasServiceOutcome(DeleteCasServiceResult(outcome.result()));
	else
		return DeleteCasServiceOutcome(outcome.error());
}

void CSBClient::deleteCasServiceAsync(const DeleteCasServiceRequest& request, const DeleteCasServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteCasService(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CSBClient::DeleteCasServiceOutcomeCallable CSBClient::deleteCasServiceCallable(const DeleteCasServiceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteCasServiceOutcome()>>(
			[this, request]()
			{
			return this->deleteCasService(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CSBClient::DeleteCredentialsListOutcome CSBClient::deleteCredentialsList(const DeleteCredentialsListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteCredentialsListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteCredentialsListOutcome(DeleteCredentialsListResult(outcome.result()));
	else
		return DeleteCredentialsListOutcome(outcome.error());
}

void CSBClient::deleteCredentialsListAsync(const DeleteCredentialsListRequest& request, const DeleteCredentialsListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteCredentialsList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CSBClient::DeleteCredentialsListOutcomeCallable CSBClient::deleteCredentialsListCallable(const DeleteCredentialsListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteCredentialsListOutcome()>>(
			[this, request]()
			{
			return this->deleteCredentialsList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CSBClient::DeleteOrderListOutcome CSBClient::deleteOrderList(const DeleteOrderListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteOrderListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteOrderListOutcome(DeleteOrderListResult(outcome.result()));
	else
		return DeleteOrderListOutcome(outcome.error());
}

void CSBClient::deleteOrderListAsync(const DeleteOrderListRequest& request, const DeleteOrderListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteOrderList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CSBClient::DeleteOrderListOutcomeCallable CSBClient::deleteOrderListCallable(const DeleteOrderListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteOrderListOutcome()>>(
			[this, request]()
			{
			return this->deleteOrderList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CSBClient::DeleteProjectOutcome CSBClient::deleteProject(const DeleteProjectRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteProjectOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteProjectOutcome(DeleteProjectResult(outcome.result()));
	else
		return DeleteProjectOutcome(outcome.error());
}

void CSBClient::deleteProjectAsync(const DeleteProjectRequest& request, const DeleteProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteProject(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CSBClient::DeleteProjectOutcomeCallable CSBClient::deleteProjectCallable(const DeleteProjectRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteProjectOutcome()>>(
			[this, request]()
			{
			return this->deleteProject(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CSBClient::DeleteProjectListOutcome CSBClient::deleteProjectList(const DeleteProjectListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteProjectListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteProjectListOutcome(DeleteProjectListResult(outcome.result()));
	else
		return DeleteProjectListOutcome(outcome.error());
}

void CSBClient::deleteProjectListAsync(const DeleteProjectListRequest& request, const DeleteProjectListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteProjectList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CSBClient::DeleteProjectListOutcomeCallable CSBClient::deleteProjectListCallable(const DeleteProjectListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteProjectListOutcome()>>(
			[this, request]()
			{
			return this->deleteProjectList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CSBClient::DeleteServiceOutcome CSBClient::deleteService(const DeleteServiceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteServiceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteServiceOutcome(DeleteServiceResult(outcome.result()));
	else
		return DeleteServiceOutcome(outcome.error());
}

void CSBClient::deleteServiceAsync(const DeleteServiceRequest& request, const DeleteServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteService(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CSBClient::DeleteServiceOutcomeCallable CSBClient::deleteServiceCallable(const DeleteServiceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteServiceOutcome()>>(
			[this, request]()
			{
			return this->deleteService(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CSBClient::DeleteServiceListOutcome CSBClient::deleteServiceList(const DeleteServiceListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteServiceListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteServiceListOutcome(DeleteServiceListResult(outcome.result()));
	else
		return DeleteServiceListOutcome(outcome.error());
}

void CSBClient::deleteServiceListAsync(const DeleteServiceListRequest& request, const DeleteServiceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteServiceList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CSBClient::DeleteServiceListOutcomeCallable CSBClient::deleteServiceListCallable(const DeleteServiceListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteServiceListOutcome()>>(
			[this, request]()
			{
			return this->deleteServiceList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CSBClient::DeleteUnionCasServiceOutcome CSBClient::deleteUnionCasService(const DeleteUnionCasServiceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteUnionCasServiceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteUnionCasServiceOutcome(DeleteUnionCasServiceResult(outcome.result()));
	else
		return DeleteUnionCasServiceOutcome(outcome.error());
}

void CSBClient::deleteUnionCasServiceAsync(const DeleteUnionCasServiceRequest& request, const DeleteUnionCasServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteUnionCasService(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CSBClient::DeleteUnionCasServiceOutcomeCallable CSBClient::deleteUnionCasServiceCallable(const DeleteUnionCasServiceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteUnionCasServiceOutcome()>>(
			[this, request]()
			{
			return this->deleteUnionCasService(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CSBClient::DescribeRegionsOutcome CSBClient::describeRegions(const DescribeRegionsRequest &request) const
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

void CSBClient::describeRegionsAsync(const DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRegions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CSBClient::DescribeRegionsOutcomeCallable CSBClient::describeRegionsCallable(const DescribeRegionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRegionsOutcome()>>(
			[this, request]()
			{
			return this->describeRegions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CSBClient::FindAllLinkRuleOutcome CSBClient::findAllLinkRule(const FindAllLinkRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return FindAllLinkRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return FindAllLinkRuleOutcome(FindAllLinkRuleResult(outcome.result()));
	else
		return FindAllLinkRuleOutcome(outcome.error());
}

void CSBClient::findAllLinkRuleAsync(const FindAllLinkRuleRequest& request, const FindAllLinkRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, findAllLinkRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CSBClient::FindAllLinkRuleOutcomeCallable CSBClient::findAllLinkRuleCallable(const FindAllLinkRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<FindAllLinkRuleOutcome()>>(
			[this, request]()
			{
			return this->findAllLinkRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CSBClient::FindApprovalOrderListOutcome CSBClient::findApprovalOrderList(const FindApprovalOrderListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return FindApprovalOrderListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return FindApprovalOrderListOutcome(FindApprovalOrderListResult(outcome.result()));
	else
		return FindApprovalOrderListOutcome(outcome.error());
}

void CSBClient::findApprovalOrderListAsync(const FindApprovalOrderListRequest& request, const FindApprovalOrderListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, findApprovalOrderList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CSBClient::FindApprovalOrderListOutcomeCallable CSBClient::findApprovalOrderListCallable(const FindApprovalOrderListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<FindApprovalOrderListOutcome()>>(
			[this, request]()
			{
			return this->findApprovalOrderList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CSBClient::FindApproveServiceListOutcome CSBClient::findApproveServiceList(const FindApproveServiceListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return FindApproveServiceListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return FindApproveServiceListOutcome(FindApproveServiceListResult(outcome.result()));
	else
		return FindApproveServiceListOutcome(outcome.error());
}

void CSBClient::findApproveServiceListAsync(const FindApproveServiceListRequest& request, const FindApproveServiceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, findApproveServiceList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CSBClient::FindApproveServiceListOutcomeCallable CSBClient::findApproveServiceListCallable(const FindApproveServiceListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<FindApproveServiceListOutcome()>>(
			[this, request]()
			{
			return this->findApproveServiceList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CSBClient::FindBrokerSLOHisListOutcome CSBClient::findBrokerSLOHisList(const FindBrokerSLOHisListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return FindBrokerSLOHisListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return FindBrokerSLOHisListOutcome(FindBrokerSLOHisListResult(outcome.result()));
	else
		return FindBrokerSLOHisListOutcome(outcome.error());
}

void CSBClient::findBrokerSLOHisListAsync(const FindBrokerSLOHisListRequest& request, const FindBrokerSLOHisListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, findBrokerSLOHisList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CSBClient::FindBrokerSLOHisListOutcomeCallable CSBClient::findBrokerSLOHisListCallable(const FindBrokerSLOHisListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<FindBrokerSLOHisListOutcome()>>(
			[this, request]()
			{
			return this->findBrokerSLOHisList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CSBClient::FindBrokerSLOListOutcome CSBClient::findBrokerSLOList(const FindBrokerSLOListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return FindBrokerSLOListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return FindBrokerSLOListOutcome(FindBrokerSLOListResult(outcome.result()));
	else
		return FindBrokerSLOListOutcome(outcome.error());
}

void CSBClient::findBrokerSLOListAsync(const FindBrokerSLOListRequest& request, const FindBrokerSLOListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, findBrokerSLOList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CSBClient::FindBrokerSLOListOutcomeCallable CSBClient::findBrokerSLOListCallable(const FindBrokerSLOListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<FindBrokerSLOListOutcome()>>(
			[this, request]()
			{
			return this->findBrokerSLOList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CSBClient::FindCredentialStatisticalDataOutcome CSBClient::findCredentialStatisticalData(const FindCredentialStatisticalDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return FindCredentialStatisticalDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return FindCredentialStatisticalDataOutcome(FindCredentialStatisticalDataResult(outcome.result()));
	else
		return FindCredentialStatisticalDataOutcome(outcome.error());
}

void CSBClient::findCredentialStatisticalDataAsync(const FindCredentialStatisticalDataRequest& request, const FindCredentialStatisticalDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, findCredentialStatisticalData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CSBClient::FindCredentialStatisticalDataOutcomeCallable CSBClient::findCredentialStatisticalDataCallable(const FindCredentialStatisticalDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<FindCredentialStatisticalDataOutcome()>>(
			[this, request]()
			{
			return this->findCredentialStatisticalData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CSBClient::FindCredentialsListOutcome CSBClient::findCredentialsList(const FindCredentialsListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return FindCredentialsListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return FindCredentialsListOutcome(FindCredentialsListResult(outcome.result()));
	else
		return FindCredentialsListOutcome(outcome.error());
}

void CSBClient::findCredentialsListAsync(const FindCredentialsListRequest& request, const FindCredentialsListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, findCredentialsList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CSBClient::FindCredentialsListOutcomeCallable CSBClient::findCredentialsListCallable(const FindCredentialsListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<FindCredentialsListOutcome()>>(
			[this, request]()
			{
			return this->findCredentialsList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CSBClient::FindInstanceListOutcome CSBClient::findInstanceList(const FindInstanceListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return FindInstanceListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return FindInstanceListOutcome(FindInstanceListResult(outcome.result()));
	else
		return FindInstanceListOutcome(outcome.error());
}

void CSBClient::findInstanceListAsync(const FindInstanceListRequest& request, const FindInstanceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, findInstanceList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CSBClient::FindInstanceListOutcomeCallable CSBClient::findInstanceListCallable(const FindInstanceListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<FindInstanceListOutcome()>>(
			[this, request]()
			{
			return this->findInstanceList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CSBClient::FindInstanceNodeListOutcome CSBClient::findInstanceNodeList(const FindInstanceNodeListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return FindInstanceNodeListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return FindInstanceNodeListOutcome(FindInstanceNodeListResult(outcome.result()));
	else
		return FindInstanceNodeListOutcome(outcome.error());
}

void CSBClient::findInstanceNodeListAsync(const FindInstanceNodeListRequest& request, const FindInstanceNodeListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, findInstanceNodeList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CSBClient::FindInstanceNodeListOutcomeCallable CSBClient::findInstanceNodeListCallable(const FindInstanceNodeListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<FindInstanceNodeListOutcome()>>(
			[this, request]()
			{
			return this->findInstanceNodeList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CSBClient::FindOrderableListOutcome CSBClient::findOrderableList(const FindOrderableListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return FindOrderableListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return FindOrderableListOutcome(FindOrderableListResult(outcome.result()));
	else
		return FindOrderableListOutcome(outcome.error());
}

void CSBClient::findOrderableListAsync(const FindOrderableListRequest& request, const FindOrderableListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, findOrderableList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CSBClient::FindOrderableListOutcomeCallable CSBClient::findOrderableListCallable(const FindOrderableListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<FindOrderableListOutcome()>>(
			[this, request]()
			{
			return this->findOrderableList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CSBClient::FindOrderedListOutcome CSBClient::findOrderedList(const FindOrderedListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return FindOrderedListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return FindOrderedListOutcome(FindOrderedListResult(outcome.result()));
	else
		return FindOrderedListOutcome(outcome.error());
}

void CSBClient::findOrderedListAsync(const FindOrderedListRequest& request, const FindOrderedListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, findOrderedList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CSBClient::FindOrderedListOutcomeCallable CSBClient::findOrderedListCallable(const FindOrderedListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<FindOrderedListOutcome()>>(
			[this, request]()
			{
			return this->findOrderedList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CSBClient::FindOrderedServiceListOutcome CSBClient::findOrderedServiceList(const FindOrderedServiceListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return FindOrderedServiceListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return FindOrderedServiceListOutcome(FindOrderedServiceListResult(outcome.result()));
	else
		return FindOrderedServiceListOutcome(outcome.error());
}

void CSBClient::findOrderedServiceListAsync(const FindOrderedServiceListRequest& request, const FindOrderedServiceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, findOrderedServiceList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CSBClient::FindOrderedServiceListOutcomeCallable CSBClient::findOrderedServiceListCallable(const FindOrderedServiceListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<FindOrderedServiceListOutcome()>>(
			[this, request]()
			{
			return this->findOrderedServiceList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CSBClient::FindOtherInstanceListOutcome CSBClient::findOtherInstanceList(const FindOtherInstanceListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return FindOtherInstanceListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return FindOtherInstanceListOutcome(FindOtherInstanceListResult(outcome.result()));
	else
		return FindOtherInstanceListOutcome(outcome.error());
}

void CSBClient::findOtherInstanceListAsync(const FindOtherInstanceListRequest& request, const FindOtherInstanceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, findOtherInstanceList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CSBClient::FindOtherInstanceListOutcomeCallable CSBClient::findOtherInstanceListCallable(const FindOtherInstanceListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<FindOtherInstanceListOutcome()>>(
			[this, request]()
			{
			return this->findOtherInstanceList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CSBClient::FindProjectListOutcome CSBClient::findProjectList(const FindProjectListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return FindProjectListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return FindProjectListOutcome(FindProjectListResult(outcome.result()));
	else
		return FindProjectListOutcome(outcome.error());
}

void CSBClient::findProjectListAsync(const FindProjectListRequest& request, const FindProjectListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, findProjectList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CSBClient::FindProjectListOutcomeCallable CSBClient::findProjectListCallable(const FindProjectListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<FindProjectListOutcome()>>(
			[this, request]()
			{
			return this->findProjectList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CSBClient::FindProjectStatisticalDataOutcome CSBClient::findProjectStatisticalData(const FindProjectStatisticalDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return FindProjectStatisticalDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return FindProjectStatisticalDataOutcome(FindProjectStatisticalDataResult(outcome.result()));
	else
		return FindProjectStatisticalDataOutcome(outcome.error());
}

void CSBClient::findProjectStatisticalDataAsync(const FindProjectStatisticalDataRequest& request, const FindProjectStatisticalDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, findProjectStatisticalData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CSBClient::FindProjectStatisticalDataOutcomeCallable CSBClient::findProjectStatisticalDataCallable(const FindProjectStatisticalDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<FindProjectStatisticalDataOutcome()>>(
			[this, request]()
			{
			return this->findProjectStatisticalData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CSBClient::FindProjectsNameListOutcome CSBClient::findProjectsNameList(const FindProjectsNameListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return FindProjectsNameListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return FindProjectsNameListOutcome(FindProjectsNameListResult(outcome.result()));
	else
		return FindProjectsNameListOutcome(outcome.error());
}

void CSBClient::findProjectsNameListAsync(const FindProjectsNameListRequest& request, const FindProjectsNameListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, findProjectsNameList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CSBClient::FindProjectsNameListOutcomeCallable CSBClient::findProjectsNameListCallable(const FindProjectsNameListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<FindProjectsNameListOutcome()>>(
			[this, request]()
			{
			return this->findProjectsNameList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CSBClient::FindServiceCredentialStatisticalDataOutcome CSBClient::findServiceCredentialStatisticalData(const FindServiceCredentialStatisticalDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return FindServiceCredentialStatisticalDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return FindServiceCredentialStatisticalDataOutcome(FindServiceCredentialStatisticalDataResult(outcome.result()));
	else
		return FindServiceCredentialStatisticalDataOutcome(outcome.error());
}

void CSBClient::findServiceCredentialStatisticalDataAsync(const FindServiceCredentialStatisticalDataRequest& request, const FindServiceCredentialStatisticalDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, findServiceCredentialStatisticalData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CSBClient::FindServiceCredentialStatisticalDataOutcomeCallable CSBClient::findServiceCredentialStatisticalDataCallable(const FindServiceCredentialStatisticalDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<FindServiceCredentialStatisticalDataOutcome()>>(
			[this, request]()
			{
			return this->findServiceCredentialStatisticalData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CSBClient::FindServiceListOutcome CSBClient::findServiceList(const FindServiceListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return FindServiceListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return FindServiceListOutcome(FindServiceListResult(outcome.result()));
	else
		return FindServiceListOutcome(outcome.error());
}

void CSBClient::findServiceListAsync(const FindServiceListRequest& request, const FindServiceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, findServiceList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CSBClient::FindServiceListOutcomeCallable CSBClient::findServiceListCallable(const FindServiceListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<FindServiceListOutcome()>>(
			[this, request]()
			{
			return this->findServiceList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CSBClient::FindServiceStatisticalDataOutcome CSBClient::findServiceStatisticalData(const FindServiceStatisticalDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return FindServiceStatisticalDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return FindServiceStatisticalDataOutcome(FindServiceStatisticalDataResult(outcome.result()));
	else
		return FindServiceStatisticalDataOutcome(outcome.error());
}

void CSBClient::findServiceStatisticalDataAsync(const FindServiceStatisticalDataRequest& request, const FindServiceStatisticalDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, findServiceStatisticalData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CSBClient::FindServiceStatisticalDataOutcomeCallable CSBClient::findServiceStatisticalDataCallable(const FindServiceStatisticalDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<FindServiceStatisticalDataOutcome()>>(
			[this, request]()
			{
			return this->findServiceStatisticalData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CSBClient::GetConsoleSLOOutcome CSBClient::getConsoleSLO(const GetConsoleSLORequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetConsoleSLOOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetConsoleSLOOutcome(GetConsoleSLOResult(outcome.result()));
	else
		return GetConsoleSLOOutcome(outcome.error());
}

void CSBClient::getConsoleSLOAsync(const GetConsoleSLORequest& request, const GetConsoleSLOAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getConsoleSLO(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CSBClient::GetConsoleSLOOutcomeCallable CSBClient::getConsoleSLOCallable(const GetConsoleSLORequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetConsoleSLOOutcome()>>(
			[this, request]()
			{
			return this->getConsoleSLO(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CSBClient::GetInstanceOutcome CSBClient::getInstance(const GetInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetInstanceOutcome(GetInstanceResult(outcome.result()));
	else
		return GetInstanceOutcome(outcome.error());
}

void CSBClient::getInstanceAsync(const GetInstanceRequest& request, const GetInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CSBClient::GetInstanceOutcomeCallable CSBClient::getInstanceCallable(const GetInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetInstanceOutcome()>>(
			[this, request]()
			{
			return this->getInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CSBClient::GetMetaServerSLOOutcome CSBClient::getMetaServerSLO(const GetMetaServerSLORequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetMetaServerSLOOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetMetaServerSLOOutcome(GetMetaServerSLOResult(outcome.result()));
	else
		return GetMetaServerSLOOutcome(outcome.error());
}

void CSBClient::getMetaServerSLOAsync(const GetMetaServerSLORequest& request, const GetMetaServerSLOAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getMetaServerSLO(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CSBClient::GetMetaServerSLOOutcomeCallable CSBClient::getMetaServerSLOCallable(const GetMetaServerSLORequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetMetaServerSLOOutcome()>>(
			[this, request]()
			{
			return this->getMetaServerSLO(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CSBClient::GetOrderOutcome CSBClient::getOrder(const GetOrderRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetOrderOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetOrderOutcome(GetOrderResult(outcome.result()));
	else
		return GetOrderOutcome(outcome.error());
}

void CSBClient::getOrderAsync(const GetOrderRequest& request, const GetOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getOrder(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CSBClient::GetOrderOutcomeCallable CSBClient::getOrderCallable(const GetOrderRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetOrderOutcome()>>(
			[this, request]()
			{
			return this->getOrder(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CSBClient::GetProjectOutcome CSBClient::getProject(const GetProjectRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetProjectOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetProjectOutcome(GetProjectResult(outcome.result()));
	else
		return GetProjectOutcome(outcome.error());
}

void CSBClient::getProjectAsync(const GetProjectRequest& request, const GetProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getProject(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CSBClient::GetProjectOutcomeCallable CSBClient::getProjectCallable(const GetProjectRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetProjectOutcome()>>(
			[this, request]()
			{
			return this->getProject(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CSBClient::GetServiceOutcome CSBClient::getService(const GetServiceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetServiceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetServiceOutcome(GetServiceResult(outcome.result()));
	else
		return GetServiceOutcome(outcome.error());
}

void CSBClient::getServiceAsync(const GetServiceRequest& request, const GetServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getService(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CSBClient::GetServiceOutcomeCallable CSBClient::getServiceCallable(const GetServiceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetServiceOutcome()>>(
			[this, request]()
			{
			return this->getService(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CSBClient::ImportCredentialsOutcome CSBClient::importCredentials(const ImportCredentialsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ImportCredentialsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ImportCredentialsOutcome(ImportCredentialsResult(outcome.result()));
	else
		return ImportCredentialsOutcome(outcome.error());
}

void CSBClient::importCredentialsAsync(const ImportCredentialsRequest& request, const ImportCredentialsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, importCredentials(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CSBClient::ImportCredentialsOutcomeCallable CSBClient::importCredentialsCallable(const ImportCredentialsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ImportCredentialsOutcome()>>(
			[this, request]()
			{
			return this->importCredentials(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CSBClient::PublishCasServiceOutcome CSBClient::publishCasService(const PublishCasServiceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PublishCasServiceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PublishCasServiceOutcome(PublishCasServiceResult(outcome.result()));
	else
		return PublishCasServiceOutcome(outcome.error());
}

void CSBClient::publishCasServiceAsync(const PublishCasServiceRequest& request, const PublishCasServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, publishCasService(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CSBClient::PublishCasServiceOutcomeCallable CSBClient::publishCasServiceCallable(const PublishCasServiceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PublishCasServiceOutcome()>>(
			[this, request]()
			{
			return this->publishCasService(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CSBClient::PublishUnionCasServiceOutcome CSBClient::publishUnionCasService(const PublishUnionCasServiceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PublishUnionCasServiceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PublishUnionCasServiceOutcome(PublishUnionCasServiceResult(outcome.result()));
	else
		return PublishUnionCasServiceOutcome(outcome.error());
}

void CSBClient::publishUnionCasServiceAsync(const PublishUnionCasServiceRequest& request, const PublishUnionCasServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, publishUnionCasService(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CSBClient::PublishUnionCasServiceOutcomeCallable CSBClient::publishUnionCasServiceCallable(const PublishUnionCasServiceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PublishUnionCasServiceOutcome()>>(
			[this, request]()
			{
			return this->publishUnionCasService(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CSBClient::RenewCredentialsOutcome CSBClient::renewCredentials(const RenewCredentialsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RenewCredentialsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RenewCredentialsOutcome(RenewCredentialsResult(outcome.result()));
	else
		return RenewCredentialsOutcome(outcome.error());
}

void CSBClient::renewCredentialsAsync(const RenewCredentialsRequest& request, const RenewCredentialsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, renewCredentials(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CSBClient::RenewCredentialsOutcomeCallable CSBClient::renewCredentialsCallable(const RenewCredentialsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RenewCredentialsOutcome()>>(
			[this, request]()
			{
			return this->renewCredentials(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CSBClient::ReplaceCredentialOutcome CSBClient::replaceCredential(const ReplaceCredentialRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ReplaceCredentialOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ReplaceCredentialOutcome(ReplaceCredentialResult(outcome.result()));
	else
		return ReplaceCredentialOutcome(outcome.error());
}

void CSBClient::replaceCredentialAsync(const ReplaceCredentialRequest& request, const ReplaceCredentialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, replaceCredential(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CSBClient::ReplaceCredentialOutcomeCallable CSBClient::replaceCredentialCallable(const ReplaceCredentialRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ReplaceCredentialOutcome()>>(
			[this, request]()
			{
			return this->replaceCredential(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CSBClient::UpdateOrderOutcome CSBClient::updateOrder(const UpdateOrderRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateOrderOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateOrderOutcome(UpdateOrderResult(outcome.result()));
	else
		return UpdateOrderOutcome(outcome.error());
}

void CSBClient::updateOrderAsync(const UpdateOrderRequest& request, const UpdateOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateOrder(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CSBClient::UpdateOrderOutcomeCallable CSBClient::updateOrderCallable(const UpdateOrderRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateOrderOutcome()>>(
			[this, request]()
			{
			return this->updateOrder(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CSBClient::UpdateOrderListOutcome CSBClient::updateOrderList(const UpdateOrderListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateOrderListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateOrderListOutcome(UpdateOrderListResult(outcome.result()));
	else
		return UpdateOrderListOutcome(outcome.error());
}

void CSBClient::updateOrderListAsync(const UpdateOrderListRequest& request, const UpdateOrderListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateOrderList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CSBClient::UpdateOrderListOutcomeCallable CSBClient::updateOrderListCallable(const UpdateOrderListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateOrderListOutcome()>>(
			[this, request]()
			{
			return this->updateOrderList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CSBClient::UpdateProjectOutcome CSBClient::updateProject(const UpdateProjectRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateProjectOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateProjectOutcome(UpdateProjectResult(outcome.result()));
	else
		return UpdateProjectOutcome(outcome.error());
}

void CSBClient::updateProjectAsync(const UpdateProjectRequest& request, const UpdateProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateProject(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CSBClient::UpdateProjectOutcomeCallable CSBClient::updateProjectCallable(const UpdateProjectRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateProjectOutcome()>>(
			[this, request]()
			{
			return this->updateProject(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CSBClient::UpdateProjectListStatusOutcome CSBClient::updateProjectListStatus(const UpdateProjectListStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateProjectListStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateProjectListStatusOutcome(UpdateProjectListStatusResult(outcome.result()));
	else
		return UpdateProjectListStatusOutcome(outcome.error());
}

void CSBClient::updateProjectListStatusAsync(const UpdateProjectListStatusRequest& request, const UpdateProjectListStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateProjectListStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CSBClient::UpdateProjectListStatusOutcomeCallable CSBClient::updateProjectListStatusCallable(const UpdateProjectListStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateProjectListStatusOutcome()>>(
			[this, request]()
			{
			return this->updateProjectListStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CSBClient::UpdateServiceOutcome CSBClient::updateService(const UpdateServiceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateServiceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateServiceOutcome(UpdateServiceResult(outcome.result()));
	else
		return UpdateServiceOutcome(outcome.error());
}

void CSBClient::updateServiceAsync(const UpdateServiceRequest& request, const UpdateServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateService(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CSBClient::UpdateServiceOutcomeCallable CSBClient::updateServiceCallable(const UpdateServiceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateServiceOutcome()>>(
			[this, request]()
			{
			return this->updateService(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CSBClient::UpdateServiceListStatusOutcome CSBClient::updateServiceListStatus(const UpdateServiceListStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateServiceListStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateServiceListStatusOutcome(UpdateServiceListStatusResult(outcome.result()));
	else
		return UpdateServiceListStatusOutcome(outcome.error());
}

void CSBClient::updateServiceListStatusAsync(const UpdateServiceListStatusRequest& request, const UpdateServiceListStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateServiceListStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CSBClient::UpdateServiceListStatusOutcomeCallable CSBClient::updateServiceListStatusCallable(const UpdateServiceListStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateServiceListStatusOutcome()>>(
			[this, request]()
			{
			return this->updateServiceListStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CSBClient::UpdateServiceQPSOutcome CSBClient::updateServiceQPS(const UpdateServiceQPSRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateServiceQPSOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateServiceQPSOutcome(UpdateServiceQPSResult(outcome.result()));
	else
		return UpdateServiceQPSOutcome(outcome.error());
}

void CSBClient::updateServiceQPSAsync(const UpdateServiceQPSRequest& request, const UpdateServiceQPSAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateServiceQPS(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CSBClient::UpdateServiceQPSOutcomeCallable CSBClient::updateServiceQPSCallable(const UpdateServiceQPSRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateServiceQPSOutcome()>>(
			[this, request]()
			{
			return this->updateServiceQPS(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

