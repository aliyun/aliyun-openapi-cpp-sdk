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

#include <alibabacloud/nas/NASClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::NAS;
using namespace AlibabaCloud::NAS::Model;

namespace
{
	const std::string SERVICE_NAME = "NAS";
}

NASClient::NASClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "nas");
}

NASClient::NASClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "nas");
}

NASClient::NASClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "nas");
}

NASClient::~NASClient()
{}

NASClient::AddClientToBlackListOutcome NASClient::addClientToBlackList(const AddClientToBlackListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddClientToBlackListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddClientToBlackListOutcome(AddClientToBlackListResult(outcome.result()));
	else
		return AddClientToBlackListOutcome(outcome.error());
}

void NASClient::addClientToBlackListAsync(const AddClientToBlackListRequest& request, const AddClientToBlackListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addClientToBlackList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NASClient::AddClientToBlackListOutcomeCallable NASClient::addClientToBlackListCallable(const AddClientToBlackListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddClientToBlackListOutcome()>>(
			[this, request]()
			{
			return this->addClientToBlackList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NASClient::AddTagsOutcome NASClient::addTags(const AddTagsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddTagsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddTagsOutcome(AddTagsResult(outcome.result()));
	else
		return AddTagsOutcome(outcome.error());
}

void NASClient::addTagsAsync(const AddTagsRequest& request, const AddTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addTags(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NASClient::AddTagsOutcomeCallable NASClient::addTagsCallable(const AddTagsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddTagsOutcome()>>(
			[this, request]()
			{
			return this->addTags(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NASClient::ApplyAutoSnapshotPolicyOutcome NASClient::applyAutoSnapshotPolicy(const ApplyAutoSnapshotPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ApplyAutoSnapshotPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ApplyAutoSnapshotPolicyOutcome(ApplyAutoSnapshotPolicyResult(outcome.result()));
	else
		return ApplyAutoSnapshotPolicyOutcome(outcome.error());
}

void NASClient::applyAutoSnapshotPolicyAsync(const ApplyAutoSnapshotPolicyRequest& request, const ApplyAutoSnapshotPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, applyAutoSnapshotPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NASClient::ApplyAutoSnapshotPolicyOutcomeCallable NASClient::applyAutoSnapshotPolicyCallable(const ApplyAutoSnapshotPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ApplyAutoSnapshotPolicyOutcome()>>(
			[this, request]()
			{
			return this->applyAutoSnapshotPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NASClient::ApplyDataFlowAutoRefreshOutcome NASClient::applyDataFlowAutoRefresh(const ApplyDataFlowAutoRefreshRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ApplyDataFlowAutoRefreshOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ApplyDataFlowAutoRefreshOutcome(ApplyDataFlowAutoRefreshResult(outcome.result()));
	else
		return ApplyDataFlowAutoRefreshOutcome(outcome.error());
}

void NASClient::applyDataFlowAutoRefreshAsync(const ApplyDataFlowAutoRefreshRequest& request, const ApplyDataFlowAutoRefreshAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, applyDataFlowAutoRefresh(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NASClient::ApplyDataFlowAutoRefreshOutcomeCallable NASClient::applyDataFlowAutoRefreshCallable(const ApplyDataFlowAutoRefreshRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ApplyDataFlowAutoRefreshOutcome()>>(
			[this, request]()
			{
			return this->applyDataFlowAutoRefresh(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NASClient::CancelAutoSnapshotPolicyOutcome NASClient::cancelAutoSnapshotPolicy(const CancelAutoSnapshotPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CancelAutoSnapshotPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CancelAutoSnapshotPolicyOutcome(CancelAutoSnapshotPolicyResult(outcome.result()));
	else
		return CancelAutoSnapshotPolicyOutcome(outcome.error());
}

void NASClient::cancelAutoSnapshotPolicyAsync(const CancelAutoSnapshotPolicyRequest& request, const CancelAutoSnapshotPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, cancelAutoSnapshotPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NASClient::CancelAutoSnapshotPolicyOutcomeCallable NASClient::cancelAutoSnapshotPolicyCallable(const CancelAutoSnapshotPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CancelAutoSnapshotPolicyOutcome()>>(
			[this, request]()
			{
			return this->cancelAutoSnapshotPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NASClient::CancelDataFlowAutoRefreshOutcome NASClient::cancelDataFlowAutoRefresh(const CancelDataFlowAutoRefreshRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CancelDataFlowAutoRefreshOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CancelDataFlowAutoRefreshOutcome(CancelDataFlowAutoRefreshResult(outcome.result()));
	else
		return CancelDataFlowAutoRefreshOutcome(outcome.error());
}

void NASClient::cancelDataFlowAutoRefreshAsync(const CancelDataFlowAutoRefreshRequest& request, const CancelDataFlowAutoRefreshAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, cancelDataFlowAutoRefresh(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NASClient::CancelDataFlowAutoRefreshOutcomeCallable NASClient::cancelDataFlowAutoRefreshCallable(const CancelDataFlowAutoRefreshRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CancelDataFlowAutoRefreshOutcome()>>(
			[this, request]()
			{
			return this->cancelDataFlowAutoRefresh(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NASClient::CancelDataFlowSubTaskOutcome NASClient::cancelDataFlowSubTask(const CancelDataFlowSubTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CancelDataFlowSubTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CancelDataFlowSubTaskOutcome(CancelDataFlowSubTaskResult(outcome.result()));
	else
		return CancelDataFlowSubTaskOutcome(outcome.error());
}

void NASClient::cancelDataFlowSubTaskAsync(const CancelDataFlowSubTaskRequest& request, const CancelDataFlowSubTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, cancelDataFlowSubTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NASClient::CancelDataFlowSubTaskOutcomeCallable NASClient::cancelDataFlowSubTaskCallable(const CancelDataFlowSubTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CancelDataFlowSubTaskOutcome()>>(
			[this, request]()
			{
			return this->cancelDataFlowSubTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NASClient::CancelDataFlowTaskOutcome NASClient::cancelDataFlowTask(const CancelDataFlowTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CancelDataFlowTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CancelDataFlowTaskOutcome(CancelDataFlowTaskResult(outcome.result()));
	else
		return CancelDataFlowTaskOutcome(outcome.error());
}

void NASClient::cancelDataFlowTaskAsync(const CancelDataFlowTaskRequest& request, const CancelDataFlowTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, cancelDataFlowTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NASClient::CancelDataFlowTaskOutcomeCallable NASClient::cancelDataFlowTaskCallable(const CancelDataFlowTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CancelDataFlowTaskOutcome()>>(
			[this, request]()
			{
			return this->cancelDataFlowTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NASClient::CancelDirQuotaOutcome NASClient::cancelDirQuota(const CancelDirQuotaRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CancelDirQuotaOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CancelDirQuotaOutcome(CancelDirQuotaResult(outcome.result()));
	else
		return CancelDirQuotaOutcome(outcome.error());
}

void NASClient::cancelDirQuotaAsync(const CancelDirQuotaRequest& request, const CancelDirQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, cancelDirQuota(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NASClient::CancelDirQuotaOutcomeCallable NASClient::cancelDirQuotaCallable(const CancelDirQuotaRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CancelDirQuotaOutcome()>>(
			[this, request]()
			{
			return this->cancelDirQuota(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NASClient::CancelFilesetQuotaOutcome NASClient::cancelFilesetQuota(const CancelFilesetQuotaRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CancelFilesetQuotaOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CancelFilesetQuotaOutcome(CancelFilesetQuotaResult(outcome.result()));
	else
		return CancelFilesetQuotaOutcome(outcome.error());
}

void NASClient::cancelFilesetQuotaAsync(const CancelFilesetQuotaRequest& request, const CancelFilesetQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, cancelFilesetQuota(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NASClient::CancelFilesetQuotaOutcomeCallable NASClient::cancelFilesetQuotaCallable(const CancelFilesetQuotaRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CancelFilesetQuotaOutcome()>>(
			[this, request]()
			{
			return this->cancelFilesetQuota(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NASClient::CancelLifecycleRetrieveJobOutcome NASClient::cancelLifecycleRetrieveJob(const CancelLifecycleRetrieveJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CancelLifecycleRetrieveJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CancelLifecycleRetrieveJobOutcome(CancelLifecycleRetrieveJobResult(outcome.result()));
	else
		return CancelLifecycleRetrieveJobOutcome(outcome.error());
}

void NASClient::cancelLifecycleRetrieveJobAsync(const CancelLifecycleRetrieveJobRequest& request, const CancelLifecycleRetrieveJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, cancelLifecycleRetrieveJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NASClient::CancelLifecycleRetrieveJobOutcomeCallable NASClient::cancelLifecycleRetrieveJobCallable(const CancelLifecycleRetrieveJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CancelLifecycleRetrieveJobOutcome()>>(
			[this, request]()
			{
			return this->cancelLifecycleRetrieveJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NASClient::CancelRecycleBinJobOutcome NASClient::cancelRecycleBinJob(const CancelRecycleBinJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CancelRecycleBinJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CancelRecycleBinJobOutcome(CancelRecycleBinJobResult(outcome.result()));
	else
		return CancelRecycleBinJobOutcome(outcome.error());
}

void NASClient::cancelRecycleBinJobAsync(const CancelRecycleBinJobRequest& request, const CancelRecycleBinJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, cancelRecycleBinJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NASClient::CancelRecycleBinJobOutcomeCallable NASClient::cancelRecycleBinJobCallable(const CancelRecycleBinJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CancelRecycleBinJobOutcome()>>(
			[this, request]()
			{
			return this->cancelRecycleBinJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NASClient::ChangeResourceGroupOutcome NASClient::changeResourceGroup(const ChangeResourceGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ChangeResourceGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ChangeResourceGroupOutcome(ChangeResourceGroupResult(outcome.result()));
	else
		return ChangeResourceGroupOutcome(outcome.error());
}

void NASClient::changeResourceGroupAsync(const ChangeResourceGroupRequest& request, const ChangeResourceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, changeResourceGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NASClient::ChangeResourceGroupOutcomeCallable NASClient::changeResourceGroupCallable(const ChangeResourceGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ChangeResourceGroupOutcome()>>(
			[this, request]()
			{
			return this->changeResourceGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NASClient::CreateAccessGroupOutcome NASClient::createAccessGroup(const CreateAccessGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateAccessGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateAccessGroupOutcome(CreateAccessGroupResult(outcome.result()));
	else
		return CreateAccessGroupOutcome(outcome.error());
}

void NASClient::createAccessGroupAsync(const CreateAccessGroupRequest& request, const CreateAccessGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createAccessGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NASClient::CreateAccessGroupOutcomeCallable NASClient::createAccessGroupCallable(const CreateAccessGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateAccessGroupOutcome()>>(
			[this, request]()
			{
			return this->createAccessGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NASClient::CreateAccessPointOutcome NASClient::createAccessPoint(const CreateAccessPointRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateAccessPointOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateAccessPointOutcome(CreateAccessPointResult(outcome.result()));
	else
		return CreateAccessPointOutcome(outcome.error());
}

void NASClient::createAccessPointAsync(const CreateAccessPointRequest& request, const CreateAccessPointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createAccessPoint(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NASClient::CreateAccessPointOutcomeCallable NASClient::createAccessPointCallable(const CreateAccessPointRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateAccessPointOutcome()>>(
			[this, request]()
			{
			return this->createAccessPoint(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NASClient::CreateAccessRuleOutcome NASClient::createAccessRule(const CreateAccessRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateAccessRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateAccessRuleOutcome(CreateAccessRuleResult(outcome.result()));
	else
		return CreateAccessRuleOutcome(outcome.error());
}

void NASClient::createAccessRuleAsync(const CreateAccessRuleRequest& request, const CreateAccessRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createAccessRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NASClient::CreateAccessRuleOutcomeCallable NASClient::createAccessRuleCallable(const CreateAccessRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateAccessRuleOutcome()>>(
			[this, request]()
			{
			return this->createAccessRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NASClient::CreateAutoSnapshotPolicyOutcome NASClient::createAutoSnapshotPolicy(const CreateAutoSnapshotPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateAutoSnapshotPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateAutoSnapshotPolicyOutcome(CreateAutoSnapshotPolicyResult(outcome.result()));
	else
		return CreateAutoSnapshotPolicyOutcome(outcome.error());
}

void NASClient::createAutoSnapshotPolicyAsync(const CreateAutoSnapshotPolicyRequest& request, const CreateAutoSnapshotPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createAutoSnapshotPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NASClient::CreateAutoSnapshotPolicyOutcomeCallable NASClient::createAutoSnapshotPolicyCallable(const CreateAutoSnapshotPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateAutoSnapshotPolicyOutcome()>>(
			[this, request]()
			{
			return this->createAutoSnapshotPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NASClient::CreateDataFlowOutcome NASClient::createDataFlow(const CreateDataFlowRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateDataFlowOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateDataFlowOutcome(CreateDataFlowResult(outcome.result()));
	else
		return CreateDataFlowOutcome(outcome.error());
}

void NASClient::createDataFlowAsync(const CreateDataFlowRequest& request, const CreateDataFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createDataFlow(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NASClient::CreateDataFlowOutcomeCallable NASClient::createDataFlowCallable(const CreateDataFlowRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateDataFlowOutcome()>>(
			[this, request]()
			{
			return this->createDataFlow(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NASClient::CreateDataFlowSubTaskOutcome NASClient::createDataFlowSubTask(const CreateDataFlowSubTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateDataFlowSubTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateDataFlowSubTaskOutcome(CreateDataFlowSubTaskResult(outcome.result()));
	else
		return CreateDataFlowSubTaskOutcome(outcome.error());
}

void NASClient::createDataFlowSubTaskAsync(const CreateDataFlowSubTaskRequest& request, const CreateDataFlowSubTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createDataFlowSubTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NASClient::CreateDataFlowSubTaskOutcomeCallable NASClient::createDataFlowSubTaskCallable(const CreateDataFlowSubTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateDataFlowSubTaskOutcome()>>(
			[this, request]()
			{
			return this->createDataFlowSubTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NASClient::CreateDataFlowTaskOutcome NASClient::createDataFlowTask(const CreateDataFlowTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateDataFlowTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateDataFlowTaskOutcome(CreateDataFlowTaskResult(outcome.result()));
	else
		return CreateDataFlowTaskOutcome(outcome.error());
}

void NASClient::createDataFlowTaskAsync(const CreateDataFlowTaskRequest& request, const CreateDataFlowTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createDataFlowTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NASClient::CreateDataFlowTaskOutcomeCallable NASClient::createDataFlowTaskCallable(const CreateDataFlowTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateDataFlowTaskOutcome()>>(
			[this, request]()
			{
			return this->createDataFlowTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NASClient::CreateDirOutcome NASClient::createDir(const CreateDirRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateDirOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateDirOutcome(CreateDirResult(outcome.result()));
	else
		return CreateDirOutcome(outcome.error());
}

void NASClient::createDirAsync(const CreateDirRequest& request, const CreateDirAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createDir(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NASClient::CreateDirOutcomeCallable NASClient::createDirCallable(const CreateDirRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateDirOutcome()>>(
			[this, request]()
			{
			return this->createDir(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NASClient::CreateFileOutcome NASClient::createFile(const CreateFileRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateFileOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateFileOutcome(CreateFileResult(outcome.result()));
	else
		return CreateFileOutcome(outcome.error());
}

void NASClient::createFileAsync(const CreateFileRequest& request, const CreateFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createFile(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NASClient::CreateFileOutcomeCallable NASClient::createFileCallable(const CreateFileRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateFileOutcome()>>(
			[this, request]()
			{
			return this->createFile(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NASClient::CreateFileSystemOutcome NASClient::createFileSystem(const CreateFileSystemRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateFileSystemOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateFileSystemOutcome(CreateFileSystemResult(outcome.result()));
	else
		return CreateFileSystemOutcome(outcome.error());
}

void NASClient::createFileSystemAsync(const CreateFileSystemRequest& request, const CreateFileSystemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createFileSystem(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NASClient::CreateFileSystemOutcomeCallable NASClient::createFileSystemCallable(const CreateFileSystemRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateFileSystemOutcome()>>(
			[this, request]()
			{
			return this->createFileSystem(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NASClient::CreateFilesetOutcome NASClient::createFileset(const CreateFilesetRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateFilesetOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateFilesetOutcome(CreateFilesetResult(outcome.result()));
	else
		return CreateFilesetOutcome(outcome.error());
}

void NASClient::createFilesetAsync(const CreateFilesetRequest& request, const CreateFilesetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createFileset(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NASClient::CreateFilesetOutcomeCallable NASClient::createFilesetCallable(const CreateFilesetRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateFilesetOutcome()>>(
			[this, request]()
			{
			return this->createFileset(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NASClient::CreateLDAPConfigOutcome NASClient::createLDAPConfig(const CreateLDAPConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateLDAPConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateLDAPConfigOutcome(CreateLDAPConfigResult(outcome.result()));
	else
		return CreateLDAPConfigOutcome(outcome.error());
}

void NASClient::createLDAPConfigAsync(const CreateLDAPConfigRequest& request, const CreateLDAPConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createLDAPConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NASClient::CreateLDAPConfigOutcomeCallable NASClient::createLDAPConfigCallable(const CreateLDAPConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateLDAPConfigOutcome()>>(
			[this, request]()
			{
			return this->createLDAPConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NASClient::CreateLifecyclePolicyOutcome NASClient::createLifecyclePolicy(const CreateLifecyclePolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateLifecyclePolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateLifecyclePolicyOutcome(CreateLifecyclePolicyResult(outcome.result()));
	else
		return CreateLifecyclePolicyOutcome(outcome.error());
}

void NASClient::createLifecyclePolicyAsync(const CreateLifecyclePolicyRequest& request, const CreateLifecyclePolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createLifecyclePolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NASClient::CreateLifecyclePolicyOutcomeCallable NASClient::createLifecyclePolicyCallable(const CreateLifecyclePolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateLifecyclePolicyOutcome()>>(
			[this, request]()
			{
			return this->createLifecyclePolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NASClient::CreateLifecycleRetrieveJobOutcome NASClient::createLifecycleRetrieveJob(const CreateLifecycleRetrieveJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateLifecycleRetrieveJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateLifecycleRetrieveJobOutcome(CreateLifecycleRetrieveJobResult(outcome.result()));
	else
		return CreateLifecycleRetrieveJobOutcome(outcome.error());
}

void NASClient::createLifecycleRetrieveJobAsync(const CreateLifecycleRetrieveJobRequest& request, const CreateLifecycleRetrieveJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createLifecycleRetrieveJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NASClient::CreateLifecycleRetrieveJobOutcomeCallable NASClient::createLifecycleRetrieveJobCallable(const CreateLifecycleRetrieveJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateLifecycleRetrieveJobOutcome()>>(
			[this, request]()
			{
			return this->createLifecycleRetrieveJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NASClient::CreateLogAnalysisOutcome NASClient::createLogAnalysis(const CreateLogAnalysisRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateLogAnalysisOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateLogAnalysisOutcome(CreateLogAnalysisResult(outcome.result()));
	else
		return CreateLogAnalysisOutcome(outcome.error());
}

void NASClient::createLogAnalysisAsync(const CreateLogAnalysisRequest& request, const CreateLogAnalysisAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createLogAnalysis(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NASClient::CreateLogAnalysisOutcomeCallable NASClient::createLogAnalysisCallable(const CreateLogAnalysisRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateLogAnalysisOutcome()>>(
			[this, request]()
			{
			return this->createLogAnalysis(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NASClient::CreateMountTargetOutcome NASClient::createMountTarget(const CreateMountTargetRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateMountTargetOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateMountTargetOutcome(CreateMountTargetResult(outcome.result()));
	else
		return CreateMountTargetOutcome(outcome.error());
}

void NASClient::createMountTargetAsync(const CreateMountTargetRequest& request, const CreateMountTargetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createMountTarget(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NASClient::CreateMountTargetOutcomeCallable NASClient::createMountTargetCallable(const CreateMountTargetRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateMountTargetOutcome()>>(
			[this, request]()
			{
			return this->createMountTarget(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NASClient::CreateProtocolMountTargetOutcome NASClient::createProtocolMountTarget(const CreateProtocolMountTargetRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateProtocolMountTargetOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateProtocolMountTargetOutcome(CreateProtocolMountTargetResult(outcome.result()));
	else
		return CreateProtocolMountTargetOutcome(outcome.error());
}

void NASClient::createProtocolMountTargetAsync(const CreateProtocolMountTargetRequest& request, const CreateProtocolMountTargetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createProtocolMountTarget(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NASClient::CreateProtocolMountTargetOutcomeCallable NASClient::createProtocolMountTargetCallable(const CreateProtocolMountTargetRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateProtocolMountTargetOutcome()>>(
			[this, request]()
			{
			return this->createProtocolMountTarget(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NASClient::CreateProtocolServiceOutcome NASClient::createProtocolService(const CreateProtocolServiceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateProtocolServiceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateProtocolServiceOutcome(CreateProtocolServiceResult(outcome.result()));
	else
		return CreateProtocolServiceOutcome(outcome.error());
}

void NASClient::createProtocolServiceAsync(const CreateProtocolServiceRequest& request, const CreateProtocolServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createProtocolService(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NASClient::CreateProtocolServiceOutcomeCallable NASClient::createProtocolServiceCallable(const CreateProtocolServiceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateProtocolServiceOutcome()>>(
			[this, request]()
			{
			return this->createProtocolService(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NASClient::CreateRecycleBinDeleteJobOutcome NASClient::createRecycleBinDeleteJob(const CreateRecycleBinDeleteJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateRecycleBinDeleteJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateRecycleBinDeleteJobOutcome(CreateRecycleBinDeleteJobResult(outcome.result()));
	else
		return CreateRecycleBinDeleteJobOutcome(outcome.error());
}

void NASClient::createRecycleBinDeleteJobAsync(const CreateRecycleBinDeleteJobRequest& request, const CreateRecycleBinDeleteJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createRecycleBinDeleteJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NASClient::CreateRecycleBinDeleteJobOutcomeCallable NASClient::createRecycleBinDeleteJobCallable(const CreateRecycleBinDeleteJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateRecycleBinDeleteJobOutcome()>>(
			[this, request]()
			{
			return this->createRecycleBinDeleteJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NASClient::CreateRecycleBinRestoreJobOutcome NASClient::createRecycleBinRestoreJob(const CreateRecycleBinRestoreJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateRecycleBinRestoreJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateRecycleBinRestoreJobOutcome(CreateRecycleBinRestoreJobResult(outcome.result()));
	else
		return CreateRecycleBinRestoreJobOutcome(outcome.error());
}

void NASClient::createRecycleBinRestoreJobAsync(const CreateRecycleBinRestoreJobRequest& request, const CreateRecycleBinRestoreJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createRecycleBinRestoreJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NASClient::CreateRecycleBinRestoreJobOutcomeCallable NASClient::createRecycleBinRestoreJobCallable(const CreateRecycleBinRestoreJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateRecycleBinRestoreJobOutcome()>>(
			[this, request]()
			{
			return this->createRecycleBinRestoreJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NASClient::CreateSnapshotOutcome NASClient::createSnapshot(const CreateSnapshotRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateSnapshotOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateSnapshotOutcome(CreateSnapshotResult(outcome.result()));
	else
		return CreateSnapshotOutcome(outcome.error());
}

void NASClient::createSnapshotAsync(const CreateSnapshotRequest& request, const CreateSnapshotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createSnapshot(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NASClient::CreateSnapshotOutcomeCallable NASClient::createSnapshotCallable(const CreateSnapshotRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateSnapshotOutcome()>>(
			[this, request]()
			{
			return this->createSnapshot(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NASClient::DeleteAccessGroupOutcome NASClient::deleteAccessGroup(const DeleteAccessGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteAccessGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteAccessGroupOutcome(DeleteAccessGroupResult(outcome.result()));
	else
		return DeleteAccessGroupOutcome(outcome.error());
}

void NASClient::deleteAccessGroupAsync(const DeleteAccessGroupRequest& request, const DeleteAccessGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteAccessGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NASClient::DeleteAccessGroupOutcomeCallable NASClient::deleteAccessGroupCallable(const DeleteAccessGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteAccessGroupOutcome()>>(
			[this, request]()
			{
			return this->deleteAccessGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NASClient::DeleteAccessPointOutcome NASClient::deleteAccessPoint(const DeleteAccessPointRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteAccessPointOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteAccessPointOutcome(DeleteAccessPointResult(outcome.result()));
	else
		return DeleteAccessPointOutcome(outcome.error());
}

void NASClient::deleteAccessPointAsync(const DeleteAccessPointRequest& request, const DeleteAccessPointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteAccessPoint(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NASClient::DeleteAccessPointOutcomeCallable NASClient::deleteAccessPointCallable(const DeleteAccessPointRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteAccessPointOutcome()>>(
			[this, request]()
			{
			return this->deleteAccessPoint(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NASClient::DeleteAccessRuleOutcome NASClient::deleteAccessRule(const DeleteAccessRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteAccessRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteAccessRuleOutcome(DeleteAccessRuleResult(outcome.result()));
	else
		return DeleteAccessRuleOutcome(outcome.error());
}

void NASClient::deleteAccessRuleAsync(const DeleteAccessRuleRequest& request, const DeleteAccessRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteAccessRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NASClient::DeleteAccessRuleOutcomeCallable NASClient::deleteAccessRuleCallable(const DeleteAccessRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteAccessRuleOutcome()>>(
			[this, request]()
			{
			return this->deleteAccessRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NASClient::DeleteAutoSnapshotPolicyOutcome NASClient::deleteAutoSnapshotPolicy(const DeleteAutoSnapshotPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteAutoSnapshotPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteAutoSnapshotPolicyOutcome(DeleteAutoSnapshotPolicyResult(outcome.result()));
	else
		return DeleteAutoSnapshotPolicyOutcome(outcome.error());
}

void NASClient::deleteAutoSnapshotPolicyAsync(const DeleteAutoSnapshotPolicyRequest& request, const DeleteAutoSnapshotPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteAutoSnapshotPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NASClient::DeleteAutoSnapshotPolicyOutcomeCallable NASClient::deleteAutoSnapshotPolicyCallable(const DeleteAutoSnapshotPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteAutoSnapshotPolicyOutcome()>>(
			[this, request]()
			{
			return this->deleteAutoSnapshotPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NASClient::DeleteDataFlowOutcome NASClient::deleteDataFlow(const DeleteDataFlowRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteDataFlowOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteDataFlowOutcome(DeleteDataFlowResult(outcome.result()));
	else
		return DeleteDataFlowOutcome(outcome.error());
}

void NASClient::deleteDataFlowAsync(const DeleteDataFlowRequest& request, const DeleteDataFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteDataFlow(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NASClient::DeleteDataFlowOutcomeCallable NASClient::deleteDataFlowCallable(const DeleteDataFlowRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteDataFlowOutcome()>>(
			[this, request]()
			{
			return this->deleteDataFlow(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NASClient::DeleteFileSystemOutcome NASClient::deleteFileSystem(const DeleteFileSystemRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteFileSystemOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteFileSystemOutcome(DeleteFileSystemResult(outcome.result()));
	else
		return DeleteFileSystemOutcome(outcome.error());
}

void NASClient::deleteFileSystemAsync(const DeleteFileSystemRequest& request, const DeleteFileSystemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteFileSystem(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NASClient::DeleteFileSystemOutcomeCallable NASClient::deleteFileSystemCallable(const DeleteFileSystemRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteFileSystemOutcome()>>(
			[this, request]()
			{
			return this->deleteFileSystem(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NASClient::DeleteFilesetOutcome NASClient::deleteFileset(const DeleteFilesetRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteFilesetOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteFilesetOutcome(DeleteFilesetResult(outcome.result()));
	else
		return DeleteFilesetOutcome(outcome.error());
}

void NASClient::deleteFilesetAsync(const DeleteFilesetRequest& request, const DeleteFilesetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteFileset(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NASClient::DeleteFilesetOutcomeCallable NASClient::deleteFilesetCallable(const DeleteFilesetRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteFilesetOutcome()>>(
			[this, request]()
			{
			return this->deleteFileset(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NASClient::DeleteLDAPConfigOutcome NASClient::deleteLDAPConfig(const DeleteLDAPConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteLDAPConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteLDAPConfigOutcome(DeleteLDAPConfigResult(outcome.result()));
	else
		return DeleteLDAPConfigOutcome(outcome.error());
}

void NASClient::deleteLDAPConfigAsync(const DeleteLDAPConfigRequest& request, const DeleteLDAPConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteLDAPConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NASClient::DeleteLDAPConfigOutcomeCallable NASClient::deleteLDAPConfigCallable(const DeleteLDAPConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteLDAPConfigOutcome()>>(
			[this, request]()
			{
			return this->deleteLDAPConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NASClient::DeleteLifecyclePolicyOutcome NASClient::deleteLifecyclePolicy(const DeleteLifecyclePolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteLifecyclePolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteLifecyclePolicyOutcome(DeleteLifecyclePolicyResult(outcome.result()));
	else
		return DeleteLifecyclePolicyOutcome(outcome.error());
}

void NASClient::deleteLifecyclePolicyAsync(const DeleteLifecyclePolicyRequest& request, const DeleteLifecyclePolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteLifecyclePolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NASClient::DeleteLifecyclePolicyOutcomeCallable NASClient::deleteLifecyclePolicyCallable(const DeleteLifecyclePolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteLifecyclePolicyOutcome()>>(
			[this, request]()
			{
			return this->deleteLifecyclePolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NASClient::DeleteLogAnalysisOutcome NASClient::deleteLogAnalysis(const DeleteLogAnalysisRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteLogAnalysisOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteLogAnalysisOutcome(DeleteLogAnalysisResult(outcome.result()));
	else
		return DeleteLogAnalysisOutcome(outcome.error());
}

void NASClient::deleteLogAnalysisAsync(const DeleteLogAnalysisRequest& request, const DeleteLogAnalysisAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteLogAnalysis(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NASClient::DeleteLogAnalysisOutcomeCallable NASClient::deleteLogAnalysisCallable(const DeleteLogAnalysisRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteLogAnalysisOutcome()>>(
			[this, request]()
			{
			return this->deleteLogAnalysis(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NASClient::DeleteMountTargetOutcome NASClient::deleteMountTarget(const DeleteMountTargetRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteMountTargetOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteMountTargetOutcome(DeleteMountTargetResult(outcome.result()));
	else
		return DeleteMountTargetOutcome(outcome.error());
}

void NASClient::deleteMountTargetAsync(const DeleteMountTargetRequest& request, const DeleteMountTargetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteMountTarget(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NASClient::DeleteMountTargetOutcomeCallable NASClient::deleteMountTargetCallable(const DeleteMountTargetRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteMountTargetOutcome()>>(
			[this, request]()
			{
			return this->deleteMountTarget(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NASClient::DeleteProtocolMountTargetOutcome NASClient::deleteProtocolMountTarget(const DeleteProtocolMountTargetRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteProtocolMountTargetOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteProtocolMountTargetOutcome(DeleteProtocolMountTargetResult(outcome.result()));
	else
		return DeleteProtocolMountTargetOutcome(outcome.error());
}

void NASClient::deleteProtocolMountTargetAsync(const DeleteProtocolMountTargetRequest& request, const DeleteProtocolMountTargetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteProtocolMountTarget(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NASClient::DeleteProtocolMountTargetOutcomeCallable NASClient::deleteProtocolMountTargetCallable(const DeleteProtocolMountTargetRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteProtocolMountTargetOutcome()>>(
			[this, request]()
			{
			return this->deleteProtocolMountTarget(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NASClient::DeleteProtocolServiceOutcome NASClient::deleteProtocolService(const DeleteProtocolServiceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteProtocolServiceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteProtocolServiceOutcome(DeleteProtocolServiceResult(outcome.result()));
	else
		return DeleteProtocolServiceOutcome(outcome.error());
}

void NASClient::deleteProtocolServiceAsync(const DeleteProtocolServiceRequest& request, const DeleteProtocolServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteProtocolService(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NASClient::DeleteProtocolServiceOutcomeCallable NASClient::deleteProtocolServiceCallable(const DeleteProtocolServiceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteProtocolServiceOutcome()>>(
			[this, request]()
			{
			return this->deleteProtocolService(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NASClient::DeleteSnapshotOutcome NASClient::deleteSnapshot(const DeleteSnapshotRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteSnapshotOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteSnapshotOutcome(DeleteSnapshotResult(outcome.result()));
	else
		return DeleteSnapshotOutcome(outcome.error());
}

void NASClient::deleteSnapshotAsync(const DeleteSnapshotRequest& request, const DeleteSnapshotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteSnapshot(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NASClient::DeleteSnapshotOutcomeCallable NASClient::deleteSnapshotCallable(const DeleteSnapshotRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteSnapshotOutcome()>>(
			[this, request]()
			{
			return this->deleteSnapshot(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NASClient::DescribeAccessGroupsOutcome NASClient::describeAccessGroups(const DescribeAccessGroupsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAccessGroupsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAccessGroupsOutcome(DescribeAccessGroupsResult(outcome.result()));
	else
		return DescribeAccessGroupsOutcome(outcome.error());
}

void NASClient::describeAccessGroupsAsync(const DescribeAccessGroupsRequest& request, const DescribeAccessGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAccessGroups(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NASClient::DescribeAccessGroupsOutcomeCallable NASClient::describeAccessGroupsCallable(const DescribeAccessGroupsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAccessGroupsOutcome()>>(
			[this, request]()
			{
			return this->describeAccessGroups(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NASClient::DescribeAccessPointOutcome NASClient::describeAccessPoint(const DescribeAccessPointRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAccessPointOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAccessPointOutcome(DescribeAccessPointResult(outcome.result()));
	else
		return DescribeAccessPointOutcome(outcome.error());
}

void NASClient::describeAccessPointAsync(const DescribeAccessPointRequest& request, const DescribeAccessPointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAccessPoint(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NASClient::DescribeAccessPointOutcomeCallable NASClient::describeAccessPointCallable(const DescribeAccessPointRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAccessPointOutcome()>>(
			[this, request]()
			{
			return this->describeAccessPoint(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NASClient::DescribeAccessPointsOutcome NASClient::describeAccessPoints(const DescribeAccessPointsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAccessPointsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAccessPointsOutcome(DescribeAccessPointsResult(outcome.result()));
	else
		return DescribeAccessPointsOutcome(outcome.error());
}

void NASClient::describeAccessPointsAsync(const DescribeAccessPointsRequest& request, const DescribeAccessPointsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAccessPoints(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NASClient::DescribeAccessPointsOutcomeCallable NASClient::describeAccessPointsCallable(const DescribeAccessPointsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAccessPointsOutcome()>>(
			[this, request]()
			{
			return this->describeAccessPoints(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NASClient::DescribeAccessRulesOutcome NASClient::describeAccessRules(const DescribeAccessRulesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAccessRulesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAccessRulesOutcome(DescribeAccessRulesResult(outcome.result()));
	else
		return DescribeAccessRulesOutcome(outcome.error());
}

void NASClient::describeAccessRulesAsync(const DescribeAccessRulesRequest& request, const DescribeAccessRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAccessRules(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NASClient::DescribeAccessRulesOutcomeCallable NASClient::describeAccessRulesCallable(const DescribeAccessRulesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAccessRulesOutcome()>>(
			[this, request]()
			{
			return this->describeAccessRules(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NASClient::DescribeAutoSnapshotPoliciesOutcome NASClient::describeAutoSnapshotPolicies(const DescribeAutoSnapshotPoliciesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAutoSnapshotPoliciesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAutoSnapshotPoliciesOutcome(DescribeAutoSnapshotPoliciesResult(outcome.result()));
	else
		return DescribeAutoSnapshotPoliciesOutcome(outcome.error());
}

void NASClient::describeAutoSnapshotPoliciesAsync(const DescribeAutoSnapshotPoliciesRequest& request, const DescribeAutoSnapshotPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAutoSnapshotPolicies(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NASClient::DescribeAutoSnapshotPoliciesOutcomeCallable NASClient::describeAutoSnapshotPoliciesCallable(const DescribeAutoSnapshotPoliciesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAutoSnapshotPoliciesOutcome()>>(
			[this, request]()
			{
			return this->describeAutoSnapshotPolicies(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NASClient::DescribeAutoSnapshotTasksOutcome NASClient::describeAutoSnapshotTasks(const DescribeAutoSnapshotTasksRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAutoSnapshotTasksOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAutoSnapshotTasksOutcome(DescribeAutoSnapshotTasksResult(outcome.result()));
	else
		return DescribeAutoSnapshotTasksOutcome(outcome.error());
}

void NASClient::describeAutoSnapshotTasksAsync(const DescribeAutoSnapshotTasksRequest& request, const DescribeAutoSnapshotTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAutoSnapshotTasks(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NASClient::DescribeAutoSnapshotTasksOutcomeCallable NASClient::describeAutoSnapshotTasksCallable(const DescribeAutoSnapshotTasksRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAutoSnapshotTasksOutcome()>>(
			[this, request]()
			{
			return this->describeAutoSnapshotTasks(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NASClient::DescribeBlackListClientsOutcome NASClient::describeBlackListClients(const DescribeBlackListClientsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeBlackListClientsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeBlackListClientsOutcome(DescribeBlackListClientsResult(outcome.result()));
	else
		return DescribeBlackListClientsOutcome(outcome.error());
}

void NASClient::describeBlackListClientsAsync(const DescribeBlackListClientsRequest& request, const DescribeBlackListClientsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeBlackListClients(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NASClient::DescribeBlackListClientsOutcomeCallable NASClient::describeBlackListClientsCallable(const DescribeBlackListClientsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeBlackListClientsOutcome()>>(
			[this, request]()
			{
			return this->describeBlackListClients(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NASClient::DescribeDataFlowSubTasksOutcome NASClient::describeDataFlowSubTasks(const DescribeDataFlowSubTasksRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDataFlowSubTasksOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDataFlowSubTasksOutcome(DescribeDataFlowSubTasksResult(outcome.result()));
	else
		return DescribeDataFlowSubTasksOutcome(outcome.error());
}

void NASClient::describeDataFlowSubTasksAsync(const DescribeDataFlowSubTasksRequest& request, const DescribeDataFlowSubTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDataFlowSubTasks(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NASClient::DescribeDataFlowSubTasksOutcomeCallable NASClient::describeDataFlowSubTasksCallable(const DescribeDataFlowSubTasksRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDataFlowSubTasksOutcome()>>(
			[this, request]()
			{
			return this->describeDataFlowSubTasks(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NASClient::DescribeDataFlowTasksOutcome NASClient::describeDataFlowTasks(const DescribeDataFlowTasksRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDataFlowTasksOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDataFlowTasksOutcome(DescribeDataFlowTasksResult(outcome.result()));
	else
		return DescribeDataFlowTasksOutcome(outcome.error());
}

void NASClient::describeDataFlowTasksAsync(const DescribeDataFlowTasksRequest& request, const DescribeDataFlowTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDataFlowTasks(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NASClient::DescribeDataFlowTasksOutcomeCallable NASClient::describeDataFlowTasksCallable(const DescribeDataFlowTasksRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDataFlowTasksOutcome()>>(
			[this, request]()
			{
			return this->describeDataFlowTasks(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NASClient::DescribeDataFlowsOutcome NASClient::describeDataFlows(const DescribeDataFlowsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDataFlowsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDataFlowsOutcome(DescribeDataFlowsResult(outcome.result()));
	else
		return DescribeDataFlowsOutcome(outcome.error());
}

void NASClient::describeDataFlowsAsync(const DescribeDataFlowsRequest& request, const DescribeDataFlowsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDataFlows(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NASClient::DescribeDataFlowsOutcomeCallable NASClient::describeDataFlowsCallable(const DescribeDataFlowsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDataFlowsOutcome()>>(
			[this, request]()
			{
			return this->describeDataFlows(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NASClient::DescribeDirQuotasOutcome NASClient::describeDirQuotas(const DescribeDirQuotasRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDirQuotasOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDirQuotasOutcome(DescribeDirQuotasResult(outcome.result()));
	else
		return DescribeDirQuotasOutcome(outcome.error());
}

void NASClient::describeDirQuotasAsync(const DescribeDirQuotasRequest& request, const DescribeDirQuotasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDirQuotas(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NASClient::DescribeDirQuotasOutcomeCallable NASClient::describeDirQuotasCallable(const DescribeDirQuotasRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDirQuotasOutcome()>>(
			[this, request]()
			{
			return this->describeDirQuotas(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NASClient::DescribeFileSystemStatisticsOutcome NASClient::describeFileSystemStatistics(const DescribeFileSystemStatisticsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeFileSystemStatisticsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeFileSystemStatisticsOutcome(DescribeFileSystemStatisticsResult(outcome.result()));
	else
		return DescribeFileSystemStatisticsOutcome(outcome.error());
}

void NASClient::describeFileSystemStatisticsAsync(const DescribeFileSystemStatisticsRequest& request, const DescribeFileSystemStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeFileSystemStatistics(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NASClient::DescribeFileSystemStatisticsOutcomeCallable NASClient::describeFileSystemStatisticsCallable(const DescribeFileSystemStatisticsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeFileSystemStatisticsOutcome()>>(
			[this, request]()
			{
			return this->describeFileSystemStatistics(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NASClient::DescribeFileSystemsOutcome NASClient::describeFileSystems(const DescribeFileSystemsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeFileSystemsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeFileSystemsOutcome(DescribeFileSystemsResult(outcome.result()));
	else
		return DescribeFileSystemsOutcome(outcome.error());
}

void NASClient::describeFileSystemsAsync(const DescribeFileSystemsRequest& request, const DescribeFileSystemsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeFileSystems(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NASClient::DescribeFileSystemsOutcomeCallable NASClient::describeFileSystemsCallable(const DescribeFileSystemsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeFileSystemsOutcome()>>(
			[this, request]()
			{
			return this->describeFileSystems(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NASClient::DescribeFilesetsOutcome NASClient::describeFilesets(const DescribeFilesetsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeFilesetsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeFilesetsOutcome(DescribeFilesetsResult(outcome.result()));
	else
		return DescribeFilesetsOutcome(outcome.error());
}

void NASClient::describeFilesetsAsync(const DescribeFilesetsRequest& request, const DescribeFilesetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeFilesets(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NASClient::DescribeFilesetsOutcomeCallable NASClient::describeFilesetsCallable(const DescribeFilesetsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeFilesetsOutcome()>>(
			[this, request]()
			{
			return this->describeFilesets(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NASClient::DescribeLifecyclePoliciesOutcome NASClient::describeLifecyclePolicies(const DescribeLifecyclePoliciesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLifecyclePoliciesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLifecyclePoliciesOutcome(DescribeLifecyclePoliciesResult(outcome.result()));
	else
		return DescribeLifecyclePoliciesOutcome(outcome.error());
}

void NASClient::describeLifecyclePoliciesAsync(const DescribeLifecyclePoliciesRequest& request, const DescribeLifecyclePoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLifecyclePolicies(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NASClient::DescribeLifecyclePoliciesOutcomeCallable NASClient::describeLifecyclePoliciesCallable(const DescribeLifecyclePoliciesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLifecyclePoliciesOutcome()>>(
			[this, request]()
			{
			return this->describeLifecyclePolicies(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NASClient::DescribeLogAnalysisOutcome NASClient::describeLogAnalysis(const DescribeLogAnalysisRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLogAnalysisOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLogAnalysisOutcome(DescribeLogAnalysisResult(outcome.result()));
	else
		return DescribeLogAnalysisOutcome(outcome.error());
}

void NASClient::describeLogAnalysisAsync(const DescribeLogAnalysisRequest& request, const DescribeLogAnalysisAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLogAnalysis(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NASClient::DescribeLogAnalysisOutcomeCallable NASClient::describeLogAnalysisCallable(const DescribeLogAnalysisRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLogAnalysisOutcome()>>(
			[this, request]()
			{
			return this->describeLogAnalysis(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NASClient::DescribeMountTargetsOutcome NASClient::describeMountTargets(const DescribeMountTargetsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeMountTargetsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeMountTargetsOutcome(DescribeMountTargetsResult(outcome.result()));
	else
		return DescribeMountTargetsOutcome(outcome.error());
}

void NASClient::describeMountTargetsAsync(const DescribeMountTargetsRequest& request, const DescribeMountTargetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeMountTargets(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NASClient::DescribeMountTargetsOutcomeCallable NASClient::describeMountTargetsCallable(const DescribeMountTargetsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeMountTargetsOutcome()>>(
			[this, request]()
			{
			return this->describeMountTargets(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NASClient::DescribeMountedClientsOutcome NASClient::describeMountedClients(const DescribeMountedClientsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeMountedClientsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeMountedClientsOutcome(DescribeMountedClientsResult(outcome.result()));
	else
		return DescribeMountedClientsOutcome(outcome.error());
}

void NASClient::describeMountedClientsAsync(const DescribeMountedClientsRequest& request, const DescribeMountedClientsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeMountedClients(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NASClient::DescribeMountedClientsOutcomeCallable NASClient::describeMountedClientsCallable(const DescribeMountedClientsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeMountedClientsOutcome()>>(
			[this, request]()
			{
			return this->describeMountedClients(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NASClient::DescribeNfsAclOutcome NASClient::describeNfsAcl(const DescribeNfsAclRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeNfsAclOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeNfsAclOutcome(DescribeNfsAclResult(outcome.result()));
	else
		return DescribeNfsAclOutcome(outcome.error());
}

void NASClient::describeNfsAclAsync(const DescribeNfsAclRequest& request, const DescribeNfsAclAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeNfsAcl(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NASClient::DescribeNfsAclOutcomeCallable NASClient::describeNfsAclCallable(const DescribeNfsAclRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeNfsAclOutcome()>>(
			[this, request]()
			{
			return this->describeNfsAcl(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NASClient::DescribeProtocolMountTargetOutcome NASClient::describeProtocolMountTarget(const DescribeProtocolMountTargetRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeProtocolMountTargetOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeProtocolMountTargetOutcome(DescribeProtocolMountTargetResult(outcome.result()));
	else
		return DescribeProtocolMountTargetOutcome(outcome.error());
}

void NASClient::describeProtocolMountTargetAsync(const DescribeProtocolMountTargetRequest& request, const DescribeProtocolMountTargetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeProtocolMountTarget(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NASClient::DescribeProtocolMountTargetOutcomeCallable NASClient::describeProtocolMountTargetCallable(const DescribeProtocolMountTargetRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeProtocolMountTargetOutcome()>>(
			[this, request]()
			{
			return this->describeProtocolMountTarget(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NASClient::DescribeProtocolServiceOutcome NASClient::describeProtocolService(const DescribeProtocolServiceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeProtocolServiceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeProtocolServiceOutcome(DescribeProtocolServiceResult(outcome.result()));
	else
		return DescribeProtocolServiceOutcome(outcome.error());
}

void NASClient::describeProtocolServiceAsync(const DescribeProtocolServiceRequest& request, const DescribeProtocolServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeProtocolService(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NASClient::DescribeProtocolServiceOutcomeCallable NASClient::describeProtocolServiceCallable(const DescribeProtocolServiceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeProtocolServiceOutcome()>>(
			[this, request]()
			{
			return this->describeProtocolService(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NASClient::DescribeRegionsOutcome NASClient::describeRegions(const DescribeRegionsRequest &request) const
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

void NASClient::describeRegionsAsync(const DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRegions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NASClient::DescribeRegionsOutcomeCallable NASClient::describeRegionsCallable(const DescribeRegionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRegionsOutcome()>>(
			[this, request]()
			{
			return this->describeRegions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NASClient::DescribeSmbAclOutcome NASClient::describeSmbAcl(const DescribeSmbAclRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSmbAclOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSmbAclOutcome(DescribeSmbAclResult(outcome.result()));
	else
		return DescribeSmbAclOutcome(outcome.error());
}

void NASClient::describeSmbAclAsync(const DescribeSmbAclRequest& request, const DescribeSmbAclAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSmbAcl(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NASClient::DescribeSmbAclOutcomeCallable NASClient::describeSmbAclCallable(const DescribeSmbAclRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSmbAclOutcome()>>(
			[this, request]()
			{
			return this->describeSmbAcl(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NASClient::DescribeSnapshotsOutcome NASClient::describeSnapshots(const DescribeSnapshotsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSnapshotsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSnapshotsOutcome(DescribeSnapshotsResult(outcome.result()));
	else
		return DescribeSnapshotsOutcome(outcome.error());
}

void NASClient::describeSnapshotsAsync(const DescribeSnapshotsRequest& request, const DescribeSnapshotsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSnapshots(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NASClient::DescribeSnapshotsOutcomeCallable NASClient::describeSnapshotsCallable(const DescribeSnapshotsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSnapshotsOutcome()>>(
			[this, request]()
			{
			return this->describeSnapshots(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NASClient::DescribeStoragePackagesOutcome NASClient::describeStoragePackages(const DescribeStoragePackagesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeStoragePackagesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeStoragePackagesOutcome(DescribeStoragePackagesResult(outcome.result()));
	else
		return DescribeStoragePackagesOutcome(outcome.error());
}

void NASClient::describeStoragePackagesAsync(const DescribeStoragePackagesRequest& request, const DescribeStoragePackagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeStoragePackages(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NASClient::DescribeStoragePackagesOutcomeCallable NASClient::describeStoragePackagesCallable(const DescribeStoragePackagesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeStoragePackagesOutcome()>>(
			[this, request]()
			{
			return this->describeStoragePackages(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NASClient::DescribeZonesOutcome NASClient::describeZones(const DescribeZonesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeZonesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeZonesOutcome(DescribeZonesResult(outcome.result()));
	else
		return DescribeZonesOutcome(outcome.error());
}

void NASClient::describeZonesAsync(const DescribeZonesRequest& request, const DescribeZonesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeZones(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NASClient::DescribeZonesOutcomeCallable NASClient::describeZonesCallable(const DescribeZonesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeZonesOutcome()>>(
			[this, request]()
			{
			return this->describeZones(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NASClient::DisableAndCleanRecycleBinOutcome NASClient::disableAndCleanRecycleBin(const DisableAndCleanRecycleBinRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DisableAndCleanRecycleBinOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DisableAndCleanRecycleBinOutcome(DisableAndCleanRecycleBinResult(outcome.result()));
	else
		return DisableAndCleanRecycleBinOutcome(outcome.error());
}

void NASClient::disableAndCleanRecycleBinAsync(const DisableAndCleanRecycleBinRequest& request, const DisableAndCleanRecycleBinAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, disableAndCleanRecycleBin(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NASClient::DisableAndCleanRecycleBinOutcomeCallable NASClient::disableAndCleanRecycleBinCallable(const DisableAndCleanRecycleBinRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DisableAndCleanRecycleBinOutcome()>>(
			[this, request]()
			{
			return this->disableAndCleanRecycleBin(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NASClient::DisableNfsAclOutcome NASClient::disableNfsAcl(const DisableNfsAclRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DisableNfsAclOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DisableNfsAclOutcome(DisableNfsAclResult(outcome.result()));
	else
		return DisableNfsAclOutcome(outcome.error());
}

void NASClient::disableNfsAclAsync(const DisableNfsAclRequest& request, const DisableNfsAclAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, disableNfsAcl(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NASClient::DisableNfsAclOutcomeCallable NASClient::disableNfsAclCallable(const DisableNfsAclRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DisableNfsAclOutcome()>>(
			[this, request]()
			{
			return this->disableNfsAcl(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NASClient::DisableSmbAclOutcome NASClient::disableSmbAcl(const DisableSmbAclRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DisableSmbAclOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DisableSmbAclOutcome(DisableSmbAclResult(outcome.result()));
	else
		return DisableSmbAclOutcome(outcome.error());
}

void NASClient::disableSmbAclAsync(const DisableSmbAclRequest& request, const DisableSmbAclAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, disableSmbAcl(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NASClient::DisableSmbAclOutcomeCallable NASClient::disableSmbAclCallable(const DisableSmbAclRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DisableSmbAclOutcome()>>(
			[this, request]()
			{
			return this->disableSmbAcl(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NASClient::EnableNfsAclOutcome NASClient::enableNfsAcl(const EnableNfsAclRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EnableNfsAclOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EnableNfsAclOutcome(EnableNfsAclResult(outcome.result()));
	else
		return EnableNfsAclOutcome(outcome.error());
}

void NASClient::enableNfsAclAsync(const EnableNfsAclRequest& request, const EnableNfsAclAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, enableNfsAcl(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NASClient::EnableNfsAclOutcomeCallable NASClient::enableNfsAclCallable(const EnableNfsAclRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EnableNfsAclOutcome()>>(
			[this, request]()
			{
			return this->enableNfsAcl(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NASClient::EnableRecycleBinOutcome NASClient::enableRecycleBin(const EnableRecycleBinRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EnableRecycleBinOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EnableRecycleBinOutcome(EnableRecycleBinResult(outcome.result()));
	else
		return EnableRecycleBinOutcome(outcome.error());
}

void NASClient::enableRecycleBinAsync(const EnableRecycleBinRequest& request, const EnableRecycleBinAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, enableRecycleBin(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NASClient::EnableRecycleBinOutcomeCallable NASClient::enableRecycleBinCallable(const EnableRecycleBinRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EnableRecycleBinOutcome()>>(
			[this, request]()
			{
			return this->enableRecycleBin(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NASClient::EnableSmbAclOutcome NASClient::enableSmbAcl(const EnableSmbAclRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EnableSmbAclOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EnableSmbAclOutcome(EnableSmbAclResult(outcome.result()));
	else
		return EnableSmbAclOutcome(outcome.error());
}

void NASClient::enableSmbAclAsync(const EnableSmbAclRequest& request, const EnableSmbAclAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, enableSmbAcl(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NASClient::EnableSmbAclOutcomeCallable NASClient::enableSmbAclCallable(const EnableSmbAclRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EnableSmbAclOutcome()>>(
			[this, request]()
			{
			return this->enableSmbAcl(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NASClient::GetDirectoryOrFilePropertiesOutcome NASClient::getDirectoryOrFileProperties(const GetDirectoryOrFilePropertiesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetDirectoryOrFilePropertiesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetDirectoryOrFilePropertiesOutcome(GetDirectoryOrFilePropertiesResult(outcome.result()));
	else
		return GetDirectoryOrFilePropertiesOutcome(outcome.error());
}

void NASClient::getDirectoryOrFilePropertiesAsync(const GetDirectoryOrFilePropertiesRequest& request, const GetDirectoryOrFilePropertiesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getDirectoryOrFileProperties(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NASClient::GetDirectoryOrFilePropertiesOutcomeCallable NASClient::getDirectoryOrFilePropertiesCallable(const GetDirectoryOrFilePropertiesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetDirectoryOrFilePropertiesOutcome()>>(
			[this, request]()
			{
			return this->getDirectoryOrFileProperties(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NASClient::GetRecycleBinAttributeOutcome NASClient::getRecycleBinAttribute(const GetRecycleBinAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetRecycleBinAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetRecycleBinAttributeOutcome(GetRecycleBinAttributeResult(outcome.result()));
	else
		return GetRecycleBinAttributeOutcome(outcome.error());
}

void NASClient::getRecycleBinAttributeAsync(const GetRecycleBinAttributeRequest& request, const GetRecycleBinAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getRecycleBinAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NASClient::GetRecycleBinAttributeOutcomeCallable NASClient::getRecycleBinAttributeCallable(const GetRecycleBinAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetRecycleBinAttributeOutcome()>>(
			[this, request]()
			{
			return this->getRecycleBinAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NASClient::ListDirectoriesAndFilesOutcome NASClient::listDirectoriesAndFiles(const ListDirectoriesAndFilesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDirectoriesAndFilesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDirectoriesAndFilesOutcome(ListDirectoriesAndFilesResult(outcome.result()));
	else
		return ListDirectoriesAndFilesOutcome(outcome.error());
}

void NASClient::listDirectoriesAndFilesAsync(const ListDirectoriesAndFilesRequest& request, const ListDirectoriesAndFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDirectoriesAndFiles(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NASClient::ListDirectoriesAndFilesOutcomeCallable NASClient::listDirectoriesAndFilesCallable(const ListDirectoriesAndFilesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDirectoriesAndFilesOutcome()>>(
			[this, request]()
			{
			return this->listDirectoriesAndFiles(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NASClient::ListLifecycleRetrieveJobsOutcome NASClient::listLifecycleRetrieveJobs(const ListLifecycleRetrieveJobsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListLifecycleRetrieveJobsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListLifecycleRetrieveJobsOutcome(ListLifecycleRetrieveJobsResult(outcome.result()));
	else
		return ListLifecycleRetrieveJobsOutcome(outcome.error());
}

void NASClient::listLifecycleRetrieveJobsAsync(const ListLifecycleRetrieveJobsRequest& request, const ListLifecycleRetrieveJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listLifecycleRetrieveJobs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NASClient::ListLifecycleRetrieveJobsOutcomeCallable NASClient::listLifecycleRetrieveJobsCallable(const ListLifecycleRetrieveJobsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListLifecycleRetrieveJobsOutcome()>>(
			[this, request]()
			{
			return this->listLifecycleRetrieveJobs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NASClient::ListRecentlyRecycledDirectoriesOutcome NASClient::listRecentlyRecycledDirectories(const ListRecentlyRecycledDirectoriesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListRecentlyRecycledDirectoriesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListRecentlyRecycledDirectoriesOutcome(ListRecentlyRecycledDirectoriesResult(outcome.result()));
	else
		return ListRecentlyRecycledDirectoriesOutcome(outcome.error());
}

void NASClient::listRecentlyRecycledDirectoriesAsync(const ListRecentlyRecycledDirectoriesRequest& request, const ListRecentlyRecycledDirectoriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listRecentlyRecycledDirectories(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NASClient::ListRecentlyRecycledDirectoriesOutcomeCallable NASClient::listRecentlyRecycledDirectoriesCallable(const ListRecentlyRecycledDirectoriesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListRecentlyRecycledDirectoriesOutcome()>>(
			[this, request]()
			{
			return this->listRecentlyRecycledDirectories(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NASClient::ListRecycleBinJobsOutcome NASClient::listRecycleBinJobs(const ListRecycleBinJobsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListRecycleBinJobsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListRecycleBinJobsOutcome(ListRecycleBinJobsResult(outcome.result()));
	else
		return ListRecycleBinJobsOutcome(outcome.error());
}

void NASClient::listRecycleBinJobsAsync(const ListRecycleBinJobsRequest& request, const ListRecycleBinJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listRecycleBinJobs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NASClient::ListRecycleBinJobsOutcomeCallable NASClient::listRecycleBinJobsCallable(const ListRecycleBinJobsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListRecycleBinJobsOutcome()>>(
			[this, request]()
			{
			return this->listRecycleBinJobs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NASClient::ListRecycledDirectoriesAndFilesOutcome NASClient::listRecycledDirectoriesAndFiles(const ListRecycledDirectoriesAndFilesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListRecycledDirectoriesAndFilesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListRecycledDirectoriesAndFilesOutcome(ListRecycledDirectoriesAndFilesResult(outcome.result()));
	else
		return ListRecycledDirectoriesAndFilesOutcome(outcome.error());
}

void NASClient::listRecycledDirectoriesAndFilesAsync(const ListRecycledDirectoriesAndFilesRequest& request, const ListRecycledDirectoriesAndFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listRecycledDirectoriesAndFiles(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NASClient::ListRecycledDirectoriesAndFilesOutcomeCallable NASClient::listRecycledDirectoriesAndFilesCallable(const ListRecycledDirectoriesAndFilesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListRecycledDirectoriesAndFilesOutcome()>>(
			[this, request]()
			{
			return this->listRecycledDirectoriesAndFiles(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NASClient::ListTagResourcesOutcome NASClient::listTagResources(const ListTagResourcesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListTagResourcesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListTagResourcesOutcome(ListTagResourcesResult(outcome.result()));
	else
		return ListTagResourcesOutcome(outcome.error());
}

void NASClient::listTagResourcesAsync(const ListTagResourcesRequest& request, const ListTagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NASClient::ListTagResourcesOutcomeCallable NASClient::listTagResourcesCallable(const ListTagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTagResourcesOutcome()>>(
			[this, request]()
			{
			return this->listTagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NASClient::ModifyAccessGroupOutcome NASClient::modifyAccessGroup(const ModifyAccessGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyAccessGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyAccessGroupOutcome(ModifyAccessGroupResult(outcome.result()));
	else
		return ModifyAccessGroupOutcome(outcome.error());
}

void NASClient::modifyAccessGroupAsync(const ModifyAccessGroupRequest& request, const ModifyAccessGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyAccessGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NASClient::ModifyAccessGroupOutcomeCallable NASClient::modifyAccessGroupCallable(const ModifyAccessGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyAccessGroupOutcome()>>(
			[this, request]()
			{
			return this->modifyAccessGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NASClient::ModifyAccessPointOutcome NASClient::modifyAccessPoint(const ModifyAccessPointRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyAccessPointOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyAccessPointOutcome(ModifyAccessPointResult(outcome.result()));
	else
		return ModifyAccessPointOutcome(outcome.error());
}

void NASClient::modifyAccessPointAsync(const ModifyAccessPointRequest& request, const ModifyAccessPointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyAccessPoint(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NASClient::ModifyAccessPointOutcomeCallable NASClient::modifyAccessPointCallable(const ModifyAccessPointRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyAccessPointOutcome()>>(
			[this, request]()
			{
			return this->modifyAccessPoint(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NASClient::ModifyAccessRuleOutcome NASClient::modifyAccessRule(const ModifyAccessRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyAccessRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyAccessRuleOutcome(ModifyAccessRuleResult(outcome.result()));
	else
		return ModifyAccessRuleOutcome(outcome.error());
}

void NASClient::modifyAccessRuleAsync(const ModifyAccessRuleRequest& request, const ModifyAccessRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyAccessRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NASClient::ModifyAccessRuleOutcomeCallable NASClient::modifyAccessRuleCallable(const ModifyAccessRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyAccessRuleOutcome()>>(
			[this, request]()
			{
			return this->modifyAccessRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NASClient::ModifyAutoSnapshotPolicyOutcome NASClient::modifyAutoSnapshotPolicy(const ModifyAutoSnapshotPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyAutoSnapshotPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyAutoSnapshotPolicyOutcome(ModifyAutoSnapshotPolicyResult(outcome.result()));
	else
		return ModifyAutoSnapshotPolicyOutcome(outcome.error());
}

void NASClient::modifyAutoSnapshotPolicyAsync(const ModifyAutoSnapshotPolicyRequest& request, const ModifyAutoSnapshotPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyAutoSnapshotPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NASClient::ModifyAutoSnapshotPolicyOutcomeCallable NASClient::modifyAutoSnapshotPolicyCallable(const ModifyAutoSnapshotPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyAutoSnapshotPolicyOutcome()>>(
			[this, request]()
			{
			return this->modifyAutoSnapshotPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NASClient::ModifyDataFlowOutcome NASClient::modifyDataFlow(const ModifyDataFlowRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDataFlowOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDataFlowOutcome(ModifyDataFlowResult(outcome.result()));
	else
		return ModifyDataFlowOutcome(outcome.error());
}

void NASClient::modifyDataFlowAsync(const ModifyDataFlowRequest& request, const ModifyDataFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDataFlow(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NASClient::ModifyDataFlowOutcomeCallable NASClient::modifyDataFlowCallable(const ModifyDataFlowRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDataFlowOutcome()>>(
			[this, request]()
			{
			return this->modifyDataFlow(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NASClient::ModifyDataFlowAutoRefreshOutcome NASClient::modifyDataFlowAutoRefresh(const ModifyDataFlowAutoRefreshRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDataFlowAutoRefreshOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDataFlowAutoRefreshOutcome(ModifyDataFlowAutoRefreshResult(outcome.result()));
	else
		return ModifyDataFlowAutoRefreshOutcome(outcome.error());
}

void NASClient::modifyDataFlowAutoRefreshAsync(const ModifyDataFlowAutoRefreshRequest& request, const ModifyDataFlowAutoRefreshAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDataFlowAutoRefresh(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NASClient::ModifyDataFlowAutoRefreshOutcomeCallable NASClient::modifyDataFlowAutoRefreshCallable(const ModifyDataFlowAutoRefreshRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDataFlowAutoRefreshOutcome()>>(
			[this, request]()
			{
			return this->modifyDataFlowAutoRefresh(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NASClient::ModifyFileSystemOutcome NASClient::modifyFileSystem(const ModifyFileSystemRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyFileSystemOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyFileSystemOutcome(ModifyFileSystemResult(outcome.result()));
	else
		return ModifyFileSystemOutcome(outcome.error());
}

void NASClient::modifyFileSystemAsync(const ModifyFileSystemRequest& request, const ModifyFileSystemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyFileSystem(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NASClient::ModifyFileSystemOutcomeCallable NASClient::modifyFileSystemCallable(const ModifyFileSystemRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyFileSystemOutcome()>>(
			[this, request]()
			{
			return this->modifyFileSystem(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NASClient::ModifyFilesetOutcome NASClient::modifyFileset(const ModifyFilesetRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyFilesetOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyFilesetOutcome(ModifyFilesetResult(outcome.result()));
	else
		return ModifyFilesetOutcome(outcome.error());
}

void NASClient::modifyFilesetAsync(const ModifyFilesetRequest& request, const ModifyFilesetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyFileset(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NASClient::ModifyFilesetOutcomeCallable NASClient::modifyFilesetCallable(const ModifyFilesetRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyFilesetOutcome()>>(
			[this, request]()
			{
			return this->modifyFileset(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NASClient::ModifyLDAPConfigOutcome NASClient::modifyLDAPConfig(const ModifyLDAPConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyLDAPConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyLDAPConfigOutcome(ModifyLDAPConfigResult(outcome.result()));
	else
		return ModifyLDAPConfigOutcome(outcome.error());
}

void NASClient::modifyLDAPConfigAsync(const ModifyLDAPConfigRequest& request, const ModifyLDAPConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyLDAPConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NASClient::ModifyLDAPConfigOutcomeCallable NASClient::modifyLDAPConfigCallable(const ModifyLDAPConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyLDAPConfigOutcome()>>(
			[this, request]()
			{
			return this->modifyLDAPConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NASClient::ModifyLifecyclePolicyOutcome NASClient::modifyLifecyclePolicy(const ModifyLifecyclePolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyLifecyclePolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyLifecyclePolicyOutcome(ModifyLifecyclePolicyResult(outcome.result()));
	else
		return ModifyLifecyclePolicyOutcome(outcome.error());
}

void NASClient::modifyLifecyclePolicyAsync(const ModifyLifecyclePolicyRequest& request, const ModifyLifecyclePolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyLifecyclePolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NASClient::ModifyLifecyclePolicyOutcomeCallable NASClient::modifyLifecyclePolicyCallable(const ModifyLifecyclePolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyLifecyclePolicyOutcome()>>(
			[this, request]()
			{
			return this->modifyLifecyclePolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NASClient::ModifyMountTargetOutcome NASClient::modifyMountTarget(const ModifyMountTargetRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyMountTargetOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyMountTargetOutcome(ModifyMountTargetResult(outcome.result()));
	else
		return ModifyMountTargetOutcome(outcome.error());
}

void NASClient::modifyMountTargetAsync(const ModifyMountTargetRequest& request, const ModifyMountTargetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyMountTarget(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NASClient::ModifyMountTargetOutcomeCallable NASClient::modifyMountTargetCallable(const ModifyMountTargetRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyMountTargetOutcome()>>(
			[this, request]()
			{
			return this->modifyMountTarget(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NASClient::ModifyProtocolMountTargetOutcome NASClient::modifyProtocolMountTarget(const ModifyProtocolMountTargetRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyProtocolMountTargetOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyProtocolMountTargetOutcome(ModifyProtocolMountTargetResult(outcome.result()));
	else
		return ModifyProtocolMountTargetOutcome(outcome.error());
}

void NASClient::modifyProtocolMountTargetAsync(const ModifyProtocolMountTargetRequest& request, const ModifyProtocolMountTargetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyProtocolMountTarget(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NASClient::ModifyProtocolMountTargetOutcomeCallable NASClient::modifyProtocolMountTargetCallable(const ModifyProtocolMountTargetRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyProtocolMountTargetOutcome()>>(
			[this, request]()
			{
			return this->modifyProtocolMountTarget(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NASClient::ModifyProtocolServiceOutcome NASClient::modifyProtocolService(const ModifyProtocolServiceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyProtocolServiceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyProtocolServiceOutcome(ModifyProtocolServiceResult(outcome.result()));
	else
		return ModifyProtocolServiceOutcome(outcome.error());
}

void NASClient::modifyProtocolServiceAsync(const ModifyProtocolServiceRequest& request, const ModifyProtocolServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyProtocolService(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NASClient::ModifyProtocolServiceOutcomeCallable NASClient::modifyProtocolServiceCallable(const ModifyProtocolServiceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyProtocolServiceOutcome()>>(
			[this, request]()
			{
			return this->modifyProtocolService(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NASClient::ModifySmbAclOutcome NASClient::modifySmbAcl(const ModifySmbAclRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifySmbAclOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifySmbAclOutcome(ModifySmbAclResult(outcome.result()));
	else
		return ModifySmbAclOutcome(outcome.error());
}

void NASClient::modifySmbAclAsync(const ModifySmbAclRequest& request, const ModifySmbAclAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifySmbAcl(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NASClient::ModifySmbAclOutcomeCallable NASClient::modifySmbAclCallable(const ModifySmbAclRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifySmbAclOutcome()>>(
			[this, request]()
			{
			return this->modifySmbAcl(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NASClient::OpenNASServiceOutcome NASClient::openNASService(const OpenNASServiceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OpenNASServiceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OpenNASServiceOutcome(OpenNASServiceResult(outcome.result()));
	else
		return OpenNASServiceOutcome(outcome.error());
}

void NASClient::openNASServiceAsync(const OpenNASServiceRequest& request, const OpenNASServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, openNASService(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NASClient::OpenNASServiceOutcomeCallable NASClient::openNASServiceCallable(const OpenNASServiceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OpenNASServiceOutcome()>>(
			[this, request]()
			{
			return this->openNASService(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NASClient::RemoveClientFromBlackListOutcome NASClient::removeClientFromBlackList(const RemoveClientFromBlackListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RemoveClientFromBlackListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RemoveClientFromBlackListOutcome(RemoveClientFromBlackListResult(outcome.result()));
	else
		return RemoveClientFromBlackListOutcome(outcome.error());
}

void NASClient::removeClientFromBlackListAsync(const RemoveClientFromBlackListRequest& request, const RemoveClientFromBlackListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, removeClientFromBlackList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NASClient::RemoveClientFromBlackListOutcomeCallable NASClient::removeClientFromBlackListCallable(const RemoveClientFromBlackListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RemoveClientFromBlackListOutcome()>>(
			[this, request]()
			{
			return this->removeClientFromBlackList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NASClient::RemoveTagsOutcome NASClient::removeTags(const RemoveTagsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RemoveTagsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RemoveTagsOutcome(RemoveTagsResult(outcome.result()));
	else
		return RemoveTagsOutcome(outcome.error());
}

void NASClient::removeTagsAsync(const RemoveTagsRequest& request, const RemoveTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, removeTags(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NASClient::RemoveTagsOutcomeCallable NASClient::removeTagsCallable(const RemoveTagsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RemoveTagsOutcome()>>(
			[this, request]()
			{
			return this->removeTags(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NASClient::ResetFileSystemOutcome NASClient::resetFileSystem(const ResetFileSystemRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ResetFileSystemOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ResetFileSystemOutcome(ResetFileSystemResult(outcome.result()));
	else
		return ResetFileSystemOutcome(outcome.error());
}

void NASClient::resetFileSystemAsync(const ResetFileSystemRequest& request, const ResetFileSystemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, resetFileSystem(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NASClient::ResetFileSystemOutcomeCallable NASClient::resetFileSystemCallable(const ResetFileSystemRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ResetFileSystemOutcome()>>(
			[this, request]()
			{
			return this->resetFileSystem(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NASClient::RetryLifecycleRetrieveJobOutcome NASClient::retryLifecycleRetrieveJob(const RetryLifecycleRetrieveJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RetryLifecycleRetrieveJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RetryLifecycleRetrieveJobOutcome(RetryLifecycleRetrieveJobResult(outcome.result()));
	else
		return RetryLifecycleRetrieveJobOutcome(outcome.error());
}

void NASClient::retryLifecycleRetrieveJobAsync(const RetryLifecycleRetrieveJobRequest& request, const RetryLifecycleRetrieveJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, retryLifecycleRetrieveJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NASClient::RetryLifecycleRetrieveJobOutcomeCallable NASClient::retryLifecycleRetrieveJobCallable(const RetryLifecycleRetrieveJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RetryLifecycleRetrieveJobOutcome()>>(
			[this, request]()
			{
			return this->retryLifecycleRetrieveJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NASClient::SetDirQuotaOutcome NASClient::setDirQuota(const SetDirQuotaRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetDirQuotaOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetDirQuotaOutcome(SetDirQuotaResult(outcome.result()));
	else
		return SetDirQuotaOutcome(outcome.error());
}

void NASClient::setDirQuotaAsync(const SetDirQuotaRequest& request, const SetDirQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setDirQuota(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NASClient::SetDirQuotaOutcomeCallable NASClient::setDirQuotaCallable(const SetDirQuotaRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetDirQuotaOutcome()>>(
			[this, request]()
			{
			return this->setDirQuota(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NASClient::SetFilesetQuotaOutcome NASClient::setFilesetQuota(const SetFilesetQuotaRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetFilesetQuotaOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetFilesetQuotaOutcome(SetFilesetQuotaResult(outcome.result()));
	else
		return SetFilesetQuotaOutcome(outcome.error());
}

void NASClient::setFilesetQuotaAsync(const SetFilesetQuotaRequest& request, const SetFilesetQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setFilesetQuota(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NASClient::SetFilesetQuotaOutcomeCallable NASClient::setFilesetQuotaCallable(const SetFilesetQuotaRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetFilesetQuotaOutcome()>>(
			[this, request]()
			{
			return this->setFilesetQuota(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NASClient::StartDataFlowOutcome NASClient::startDataFlow(const StartDataFlowRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StartDataFlowOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StartDataFlowOutcome(StartDataFlowResult(outcome.result()));
	else
		return StartDataFlowOutcome(outcome.error());
}

void NASClient::startDataFlowAsync(const StartDataFlowRequest& request, const StartDataFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, startDataFlow(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NASClient::StartDataFlowOutcomeCallable NASClient::startDataFlowCallable(const StartDataFlowRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StartDataFlowOutcome()>>(
			[this, request]()
			{
			return this->startDataFlow(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NASClient::StopDataFlowOutcome NASClient::stopDataFlow(const StopDataFlowRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StopDataFlowOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StopDataFlowOutcome(StopDataFlowResult(outcome.result()));
	else
		return StopDataFlowOutcome(outcome.error());
}

void NASClient::stopDataFlowAsync(const StopDataFlowRequest& request, const StopDataFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, stopDataFlow(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NASClient::StopDataFlowOutcomeCallable NASClient::stopDataFlowCallable(const StopDataFlowRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StopDataFlowOutcome()>>(
			[this, request]()
			{
			return this->stopDataFlow(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NASClient::TagResourcesOutcome NASClient::tagResources(const TagResourcesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return TagResourcesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return TagResourcesOutcome(TagResourcesResult(outcome.result()));
	else
		return TagResourcesOutcome(outcome.error());
}

void NASClient::tagResourcesAsync(const TagResourcesRequest& request, const TagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, tagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NASClient::TagResourcesOutcomeCallable NASClient::tagResourcesCallable(const TagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TagResourcesOutcome()>>(
			[this, request]()
			{
			return this->tagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NASClient::UntagResourcesOutcome NASClient::untagResources(const UntagResourcesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UntagResourcesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UntagResourcesOutcome(UntagResourcesResult(outcome.result()));
	else
		return UntagResourcesOutcome(outcome.error());
}

void NASClient::untagResourcesAsync(const UntagResourcesRequest& request, const UntagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, untagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NASClient::UntagResourcesOutcomeCallable NASClient::untagResourcesCallable(const UntagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UntagResourcesOutcome()>>(
			[this, request]()
			{
			return this->untagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NASClient::UpdateRecycleBinAttributeOutcome NASClient::updateRecycleBinAttribute(const UpdateRecycleBinAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateRecycleBinAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateRecycleBinAttributeOutcome(UpdateRecycleBinAttributeResult(outcome.result()));
	else
		return UpdateRecycleBinAttributeOutcome(outcome.error());
}

void NASClient::updateRecycleBinAttributeAsync(const UpdateRecycleBinAttributeRequest& request, const UpdateRecycleBinAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateRecycleBinAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NASClient::UpdateRecycleBinAttributeOutcomeCallable NASClient::updateRecycleBinAttributeCallable(const UpdateRecycleBinAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateRecycleBinAttributeOutcome()>>(
			[this, request]()
			{
			return this->updateRecycleBinAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

NASClient::UpgradeFileSystemOutcome NASClient::upgradeFileSystem(const UpgradeFileSystemRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpgradeFileSystemOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpgradeFileSystemOutcome(UpgradeFileSystemResult(outcome.result()));
	else
		return UpgradeFileSystemOutcome(outcome.error());
}

void NASClient::upgradeFileSystemAsync(const UpgradeFileSystemRequest& request, const UpgradeFileSystemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, upgradeFileSystem(request), context);
	};

	asyncExecute(new Runnable(fn));
}

NASClient::UpgradeFileSystemOutcomeCallable NASClient::upgradeFileSystemCallable(const UpgradeFileSystemRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpgradeFileSystemOutcome()>>(
			[this, request]()
			{
			return this->upgradeFileSystem(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

