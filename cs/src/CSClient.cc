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

#include <alibabacloud/cs/CSClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::CS;
using namespace AlibabaCloud::CS::Model;

namespace
{
	const std::string SERVICE_NAME = "CS";
}

CSClient::CSClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RoaServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

CSClient::CSClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RoaServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

CSClient::CSClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RoaServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

CSClient::~CSClient()
{}

CSClient::AttachInstancesOutcome CSClient::attachInstances(const AttachInstancesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AttachInstancesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AttachInstancesOutcome(AttachInstancesResult(outcome.result()));
	else
		return AttachInstancesOutcome(outcome.error());
}

void CSClient::attachInstancesAsync(const AttachInstancesRequest& request, const AttachInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, attachInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CSClient::AttachInstancesOutcomeCallable CSClient::attachInstancesCallable(const AttachInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AttachInstancesOutcome()>>(
			[this, request]()
			{
			return this->attachInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CSClient::CancelClusterUpgradeOutcome CSClient::cancelClusterUpgrade(const CancelClusterUpgradeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CancelClusterUpgradeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CancelClusterUpgradeOutcome(CancelClusterUpgradeResult(outcome.result()));
	else
		return CancelClusterUpgradeOutcome(outcome.error());
}

void CSClient::cancelClusterUpgradeAsync(const CancelClusterUpgradeRequest& request, const CancelClusterUpgradeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, cancelClusterUpgrade(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CSClient::CancelClusterUpgradeOutcomeCallable CSClient::cancelClusterUpgradeCallable(const CancelClusterUpgradeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CancelClusterUpgradeOutcome()>>(
			[this, request]()
			{
			return this->cancelClusterUpgrade(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CSClient::CancelComponentUpgradeOutcome CSClient::cancelComponentUpgrade(const CancelComponentUpgradeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CancelComponentUpgradeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CancelComponentUpgradeOutcome(CancelComponentUpgradeResult(outcome.result()));
	else
		return CancelComponentUpgradeOutcome(outcome.error());
}

void CSClient::cancelComponentUpgradeAsync(const CancelComponentUpgradeRequest& request, const CancelComponentUpgradeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, cancelComponentUpgrade(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CSClient::CancelComponentUpgradeOutcomeCallable CSClient::cancelComponentUpgradeCallable(const CancelComponentUpgradeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CancelComponentUpgradeOutcome()>>(
			[this, request]()
			{
			return this->cancelComponentUpgrade(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CSClient::CancelWorkflowOutcome CSClient::cancelWorkflow(const CancelWorkflowRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CancelWorkflowOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CancelWorkflowOutcome(CancelWorkflowResult(outcome.result()));
	else
		return CancelWorkflowOutcome(outcome.error());
}

void CSClient::cancelWorkflowAsync(const CancelWorkflowRequest& request, const CancelWorkflowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, cancelWorkflow(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CSClient::CancelWorkflowOutcomeCallable CSClient::cancelWorkflowCallable(const CancelWorkflowRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CancelWorkflowOutcome()>>(
			[this, request]()
			{
			return this->cancelWorkflow(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CSClient::CreateClusterOutcome CSClient::createCluster(const CreateClusterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateClusterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateClusterOutcome(CreateClusterResult(outcome.result()));
	else
		return CreateClusterOutcome(outcome.error());
}

void CSClient::createClusterAsync(const CreateClusterRequest& request, const CreateClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createCluster(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CSClient::CreateClusterOutcomeCallable CSClient::createClusterCallable(const CreateClusterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateClusterOutcome()>>(
			[this, request]()
			{
			return this->createCluster(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CSClient::CreateKubernetesTriggerOutcome CSClient::createKubernetesTrigger(const CreateKubernetesTriggerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateKubernetesTriggerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateKubernetesTriggerOutcome(CreateKubernetesTriggerResult(outcome.result()));
	else
		return CreateKubernetesTriggerOutcome(outcome.error());
}

void CSClient::createKubernetesTriggerAsync(const CreateKubernetesTriggerRequest& request, const CreateKubernetesTriggerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createKubernetesTrigger(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CSClient::CreateKubernetesTriggerOutcomeCallable CSClient::createKubernetesTriggerCallable(const CreateKubernetesTriggerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateKubernetesTriggerOutcome()>>(
			[this, request]()
			{
			return this->createKubernetesTrigger(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CSClient::CreateTemplateOutcome CSClient::createTemplate(const CreateTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateTemplateOutcome(CreateTemplateResult(outcome.result()));
	else
		return CreateTemplateOutcome(outcome.error());
}

void CSClient::createTemplateAsync(const CreateTemplateRequest& request, const CreateTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CSClient::CreateTemplateOutcomeCallable CSClient::createTemplateCallable(const CreateTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateTemplateOutcome()>>(
			[this, request]()
			{
			return this->createTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CSClient::DeleteClusterOutcome CSClient::deleteCluster(const DeleteClusterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteClusterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteClusterOutcome(DeleteClusterResult(outcome.result()));
	else
		return DeleteClusterOutcome(outcome.error());
}

void CSClient::deleteClusterAsync(const DeleteClusterRequest& request, const DeleteClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteCluster(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CSClient::DeleteClusterOutcomeCallable CSClient::deleteClusterCallable(const DeleteClusterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteClusterOutcome()>>(
			[this, request]()
			{
			return this->deleteCluster(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CSClient::DeleteClusterNodesOutcome CSClient::deleteClusterNodes(const DeleteClusterNodesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteClusterNodesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteClusterNodesOutcome(DeleteClusterNodesResult(outcome.result()));
	else
		return DeleteClusterNodesOutcome(outcome.error());
}

void CSClient::deleteClusterNodesAsync(const DeleteClusterNodesRequest& request, const DeleteClusterNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteClusterNodes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CSClient::DeleteClusterNodesOutcomeCallable CSClient::deleteClusterNodesCallable(const DeleteClusterNodesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteClusterNodesOutcome()>>(
			[this, request]()
			{
			return this->deleteClusterNodes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CSClient::DeleteKubernetesTriggerOutcome CSClient::deleteKubernetesTrigger(const DeleteKubernetesTriggerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteKubernetesTriggerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteKubernetesTriggerOutcome(DeleteKubernetesTriggerResult(outcome.result()));
	else
		return DeleteKubernetesTriggerOutcome(outcome.error());
}

void CSClient::deleteKubernetesTriggerAsync(const DeleteKubernetesTriggerRequest& request, const DeleteKubernetesTriggerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteKubernetesTrigger(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CSClient::DeleteKubernetesTriggerOutcomeCallable CSClient::deleteKubernetesTriggerCallable(const DeleteKubernetesTriggerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteKubernetesTriggerOutcome()>>(
			[this, request]()
			{
			return this->deleteKubernetesTrigger(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CSClient::DeleteTemplateOutcome CSClient::deleteTemplate(const DeleteTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteTemplateOutcome(DeleteTemplateResult(outcome.result()));
	else
		return DeleteTemplateOutcome(outcome.error());
}

void CSClient::deleteTemplateAsync(const DeleteTemplateRequest& request, const DeleteTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CSClient::DeleteTemplateOutcomeCallable CSClient::deleteTemplateCallable(const DeleteTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteTemplateOutcome()>>(
			[this, request]()
			{
			return this->deleteTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CSClient::DescirbeWorkflowOutcome CSClient::descirbeWorkflow(const DescirbeWorkflowRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescirbeWorkflowOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescirbeWorkflowOutcome(DescirbeWorkflowResult(outcome.result()));
	else
		return DescirbeWorkflowOutcome(outcome.error());
}

void CSClient::descirbeWorkflowAsync(const DescirbeWorkflowRequest& request, const DescirbeWorkflowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, descirbeWorkflow(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CSClient::DescirbeWorkflowOutcomeCallable CSClient::descirbeWorkflowCallable(const DescirbeWorkflowRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescirbeWorkflowOutcome()>>(
			[this, request]()
			{
			return this->descirbeWorkflow(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CSClient::DescribeAddonsOutcome CSClient::describeAddons(const DescribeAddonsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAddonsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAddonsOutcome(DescribeAddonsResult(outcome.result()));
	else
		return DescribeAddonsOutcome(outcome.error());
}

void CSClient::describeAddonsAsync(const DescribeAddonsRequest& request, const DescribeAddonsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAddons(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CSClient::DescribeAddonsOutcomeCallable CSClient::describeAddonsCallable(const DescribeAddonsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAddonsOutcome()>>(
			[this, request]()
			{
			return this->describeAddons(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CSClient::DescribeClusterAddonUpgradeStatusOutcome CSClient::describeClusterAddonUpgradeStatus(const DescribeClusterAddonUpgradeStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeClusterAddonUpgradeStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeClusterAddonUpgradeStatusOutcome(DescribeClusterAddonUpgradeStatusResult(outcome.result()));
	else
		return DescribeClusterAddonUpgradeStatusOutcome(outcome.error());
}

void CSClient::describeClusterAddonUpgradeStatusAsync(const DescribeClusterAddonUpgradeStatusRequest& request, const DescribeClusterAddonUpgradeStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeClusterAddonUpgradeStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CSClient::DescribeClusterAddonUpgradeStatusOutcomeCallable CSClient::describeClusterAddonUpgradeStatusCallable(const DescribeClusterAddonUpgradeStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeClusterAddonUpgradeStatusOutcome()>>(
			[this, request]()
			{
			return this->describeClusterAddonUpgradeStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CSClient::DescribeClusterAddonsUpgradeStatusOutcome CSClient::describeClusterAddonsUpgradeStatus(const DescribeClusterAddonsUpgradeStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeClusterAddonsUpgradeStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeClusterAddonsUpgradeStatusOutcome(DescribeClusterAddonsUpgradeStatusResult(outcome.result()));
	else
		return DescribeClusterAddonsUpgradeStatusOutcome(outcome.error());
}

void CSClient::describeClusterAddonsUpgradeStatusAsync(const DescribeClusterAddonsUpgradeStatusRequest& request, const DescribeClusterAddonsUpgradeStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeClusterAddonsUpgradeStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CSClient::DescribeClusterAddonsUpgradeStatusOutcomeCallable CSClient::describeClusterAddonsUpgradeStatusCallable(const DescribeClusterAddonsUpgradeStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeClusterAddonsUpgradeStatusOutcome()>>(
			[this, request]()
			{
			return this->describeClusterAddonsUpgradeStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CSClient::DescribeClusterAddonsVersionOutcome CSClient::describeClusterAddonsVersion(const DescribeClusterAddonsVersionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeClusterAddonsVersionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeClusterAddonsVersionOutcome(DescribeClusterAddonsVersionResult(outcome.result()));
	else
		return DescribeClusterAddonsVersionOutcome(outcome.error());
}

void CSClient::describeClusterAddonsVersionAsync(const DescribeClusterAddonsVersionRequest& request, const DescribeClusterAddonsVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeClusterAddonsVersion(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CSClient::DescribeClusterAddonsVersionOutcomeCallable CSClient::describeClusterAddonsVersionCallable(const DescribeClusterAddonsVersionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeClusterAddonsVersionOutcome()>>(
			[this, request]()
			{
			return this->describeClusterAddonsVersion(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CSClient::DescribeClusterAttachScriptsOutcome CSClient::describeClusterAttachScripts(const DescribeClusterAttachScriptsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeClusterAttachScriptsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeClusterAttachScriptsOutcome(DescribeClusterAttachScriptsResult(outcome.result()));
	else
		return DescribeClusterAttachScriptsOutcome(outcome.error());
}

void CSClient::describeClusterAttachScriptsAsync(const DescribeClusterAttachScriptsRequest& request, const DescribeClusterAttachScriptsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeClusterAttachScripts(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CSClient::DescribeClusterAttachScriptsOutcomeCallable CSClient::describeClusterAttachScriptsCallable(const DescribeClusterAttachScriptsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeClusterAttachScriptsOutcome()>>(
			[this, request]()
			{
			return this->describeClusterAttachScripts(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CSClient::DescribeClusterDetailOutcome CSClient::describeClusterDetail(const DescribeClusterDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeClusterDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeClusterDetailOutcome(DescribeClusterDetailResult(outcome.result()));
	else
		return DescribeClusterDetailOutcome(outcome.error());
}

void CSClient::describeClusterDetailAsync(const DescribeClusterDetailRequest& request, const DescribeClusterDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeClusterDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CSClient::DescribeClusterDetailOutcomeCallable CSClient::describeClusterDetailCallable(const DescribeClusterDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeClusterDetailOutcome()>>(
			[this, request]()
			{
			return this->describeClusterDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CSClient::DescribeClusterLogsOutcome CSClient::describeClusterLogs(const DescribeClusterLogsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeClusterLogsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeClusterLogsOutcome(DescribeClusterLogsResult(outcome.result()));
	else
		return DescribeClusterLogsOutcome(outcome.error());
}

void CSClient::describeClusterLogsAsync(const DescribeClusterLogsRequest& request, const DescribeClusterLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeClusterLogs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CSClient::DescribeClusterLogsOutcomeCallable CSClient::describeClusterLogsCallable(const DescribeClusterLogsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeClusterLogsOutcome()>>(
			[this, request]()
			{
			return this->describeClusterLogs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CSClient::DescribeClusterNodesOutcome CSClient::describeClusterNodes(const DescribeClusterNodesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeClusterNodesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeClusterNodesOutcome(DescribeClusterNodesResult(outcome.result()));
	else
		return DescribeClusterNodesOutcome(outcome.error());
}

void CSClient::describeClusterNodesAsync(const DescribeClusterNodesRequest& request, const DescribeClusterNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeClusterNodes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CSClient::DescribeClusterNodesOutcomeCallable CSClient::describeClusterNodesCallable(const DescribeClusterNodesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeClusterNodesOutcome()>>(
			[this, request]()
			{
			return this->describeClusterNodes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CSClient::DescribeClusterResourcesOutcome CSClient::describeClusterResources(const DescribeClusterResourcesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeClusterResourcesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeClusterResourcesOutcome(DescribeClusterResourcesResult(outcome.result()));
	else
		return DescribeClusterResourcesOutcome(outcome.error());
}

void CSClient::describeClusterResourcesAsync(const DescribeClusterResourcesRequest& request, const DescribeClusterResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeClusterResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CSClient::DescribeClusterResourcesOutcomeCallable CSClient::describeClusterResourcesCallable(const DescribeClusterResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeClusterResourcesOutcome()>>(
			[this, request]()
			{
			return this->describeClusterResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CSClient::DescribeClusterUserKubeconfigOutcome CSClient::describeClusterUserKubeconfig(const DescribeClusterUserKubeconfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeClusterUserKubeconfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeClusterUserKubeconfigOutcome(DescribeClusterUserKubeconfigResult(outcome.result()));
	else
		return DescribeClusterUserKubeconfigOutcome(outcome.error());
}

void CSClient::describeClusterUserKubeconfigAsync(const DescribeClusterUserKubeconfigRequest& request, const DescribeClusterUserKubeconfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeClusterUserKubeconfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CSClient::DescribeClusterUserKubeconfigOutcomeCallable CSClient::describeClusterUserKubeconfigCallable(const DescribeClusterUserKubeconfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeClusterUserKubeconfigOutcome()>>(
			[this, request]()
			{
			return this->describeClusterUserKubeconfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CSClient::DescribeClusterV2UserKubeconfigOutcome CSClient::describeClusterV2UserKubeconfig(const DescribeClusterV2UserKubeconfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeClusterV2UserKubeconfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeClusterV2UserKubeconfigOutcome(DescribeClusterV2UserKubeconfigResult(outcome.result()));
	else
		return DescribeClusterV2UserKubeconfigOutcome(outcome.error());
}

void CSClient::describeClusterV2UserKubeconfigAsync(const DescribeClusterV2UserKubeconfigRequest& request, const DescribeClusterV2UserKubeconfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeClusterV2UserKubeconfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CSClient::DescribeClusterV2UserKubeconfigOutcomeCallable CSClient::describeClusterV2UserKubeconfigCallable(const DescribeClusterV2UserKubeconfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeClusterV2UserKubeconfigOutcome()>>(
			[this, request]()
			{
			return this->describeClusterV2UserKubeconfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CSClient::DescribeClustersOutcome CSClient::describeClusters(const DescribeClustersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeClustersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeClustersOutcome(DescribeClustersResult(outcome.result()));
	else
		return DescribeClustersOutcome(outcome.error());
}

void CSClient::describeClustersAsync(const DescribeClustersRequest& request, const DescribeClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeClusters(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CSClient::DescribeClustersOutcomeCallable CSClient::describeClustersCallable(const DescribeClustersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeClustersOutcome()>>(
			[this, request]()
			{
			return this->describeClusters(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CSClient::DescribeClustersV1Outcome CSClient::describeClustersV1(const DescribeClustersV1Request &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeClustersV1Outcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeClustersV1Outcome(DescribeClustersV1Result(outcome.result()));
	else
		return DescribeClustersV1Outcome(outcome.error());
}

void CSClient::describeClustersV1Async(const DescribeClustersV1Request& request, const DescribeClustersV1AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeClustersV1(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CSClient::DescribeClustersV1OutcomeCallable CSClient::describeClustersV1Callable(const DescribeClustersV1Request &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeClustersV1Outcome()>>(
			[this, request]()
			{
			return this->describeClustersV1(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CSClient::DescribeExternalAgentOutcome CSClient::describeExternalAgent(const DescribeExternalAgentRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeExternalAgentOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeExternalAgentOutcome(DescribeExternalAgentResult(outcome.result()));
	else
		return DescribeExternalAgentOutcome(outcome.error());
}

void CSClient::describeExternalAgentAsync(const DescribeExternalAgentRequest& request, const DescribeExternalAgentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeExternalAgent(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CSClient::DescribeExternalAgentOutcomeCallable CSClient::describeExternalAgentCallable(const DescribeExternalAgentRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeExternalAgentOutcome()>>(
			[this, request]()
			{
			return this->describeExternalAgent(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CSClient::DescribeTemplatesOutcome CSClient::describeTemplates(const DescribeTemplatesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeTemplatesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeTemplatesOutcome(DescribeTemplatesResult(outcome.result()));
	else
		return DescribeTemplatesOutcome(outcome.error());
}

void CSClient::describeTemplatesAsync(const DescribeTemplatesRequest& request, const DescribeTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeTemplates(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CSClient::DescribeTemplatesOutcomeCallable CSClient::describeTemplatesCallable(const DescribeTemplatesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeTemplatesOutcome()>>(
			[this, request]()
			{
			return this->describeTemplates(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CSClient::DescribeUserQuotaOutcome CSClient::describeUserQuota(const DescribeUserQuotaRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeUserQuotaOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeUserQuotaOutcome(DescribeUserQuotaResult(outcome.result()));
	else
		return DescribeUserQuotaOutcome(outcome.error());
}

void CSClient::describeUserQuotaAsync(const DescribeUserQuotaRequest& request, const DescribeUserQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeUserQuota(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CSClient::DescribeUserQuotaOutcomeCallable CSClient::describeUserQuotaCallable(const DescribeUserQuotaRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeUserQuotaOutcome()>>(
			[this, request]()
			{
			return this->describeUserQuota(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CSClient::DescribeWorkflowsOutcome CSClient::describeWorkflows(const DescribeWorkflowsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeWorkflowsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeWorkflowsOutcome(DescribeWorkflowsResult(outcome.result()));
	else
		return DescribeWorkflowsOutcome(outcome.error());
}

void CSClient::describeWorkflowsAsync(const DescribeWorkflowsRequest& request, const DescribeWorkflowsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeWorkflows(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CSClient::DescribeWorkflowsOutcomeCallable CSClient::describeWorkflowsCallable(const DescribeWorkflowsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeWorkflowsOutcome()>>(
			[this, request]()
			{
			return this->describeWorkflows(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CSClient::GetKubernetesTriggerOutcome CSClient::getKubernetesTrigger(const GetKubernetesTriggerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetKubernetesTriggerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetKubernetesTriggerOutcome(GetKubernetesTriggerResult(outcome.result()));
	else
		return GetKubernetesTriggerOutcome(outcome.error());
}

void CSClient::getKubernetesTriggerAsync(const GetKubernetesTriggerRequest& request, const GetKubernetesTriggerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getKubernetesTrigger(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CSClient::GetKubernetesTriggerOutcomeCallable CSClient::getKubernetesTriggerCallable(const GetKubernetesTriggerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetKubernetesTriggerOutcome()>>(
			[this, request]()
			{
			return this->getKubernetesTrigger(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CSClient::GetUpgradeStatusOutcome CSClient::getUpgradeStatus(const GetUpgradeStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetUpgradeStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetUpgradeStatusOutcome(GetUpgradeStatusResult(outcome.result()));
	else
		return GetUpgradeStatusOutcome(outcome.error());
}

void CSClient::getUpgradeStatusAsync(const GetUpgradeStatusRequest& request, const GetUpgradeStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getUpgradeStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CSClient::GetUpgradeStatusOutcomeCallable CSClient::getUpgradeStatusCallable(const GetUpgradeStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetUpgradeStatusOutcome()>>(
			[this, request]()
			{
			return this->getUpgradeStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CSClient::InstallClusterAddonsOutcome CSClient::installClusterAddons(const InstallClusterAddonsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return InstallClusterAddonsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return InstallClusterAddonsOutcome(InstallClusterAddonsResult(outcome.result()));
	else
		return InstallClusterAddonsOutcome(outcome.error());
}

void CSClient::installClusterAddonsAsync(const InstallClusterAddonsRequest& request, const InstallClusterAddonsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, installClusterAddons(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CSClient::InstallClusterAddonsOutcomeCallable CSClient::installClusterAddonsCallable(const InstallClusterAddonsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<InstallClusterAddonsOutcome()>>(
			[this, request]()
			{
			return this->installClusterAddons(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CSClient::ListTagResourcesOutcome CSClient::listTagResources(const ListTagResourcesRequest &request) const
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

void CSClient::listTagResourcesAsync(const ListTagResourcesRequest& request, const ListTagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CSClient::ListTagResourcesOutcomeCallable CSClient::listTagResourcesCallable(const ListTagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTagResourcesOutcome()>>(
			[this, request]()
			{
			return this->listTagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CSClient::ModifyClusterOutcome CSClient::modifyCluster(const ModifyClusterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyClusterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyClusterOutcome(ModifyClusterResult(outcome.result()));
	else
		return ModifyClusterOutcome(outcome.error());
}

void CSClient::modifyClusterAsync(const ModifyClusterRequest& request, const ModifyClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyCluster(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CSClient::ModifyClusterOutcomeCallable CSClient::modifyClusterCallable(const ModifyClusterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyClusterOutcome()>>(
			[this, request]()
			{
			return this->modifyCluster(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CSClient::ModifyClusterConfigurationOutcome CSClient::modifyClusterConfiguration(const ModifyClusterConfigurationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyClusterConfigurationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyClusterConfigurationOutcome(ModifyClusterConfigurationResult(outcome.result()));
	else
		return ModifyClusterConfigurationOutcome(outcome.error());
}

void CSClient::modifyClusterConfigurationAsync(const ModifyClusterConfigurationRequest& request, const ModifyClusterConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyClusterConfiguration(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CSClient::ModifyClusterConfigurationOutcomeCallable CSClient::modifyClusterConfigurationCallable(const ModifyClusterConfigurationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyClusterConfigurationOutcome()>>(
			[this, request]()
			{
			return this->modifyClusterConfiguration(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CSClient::ModifyClusterTagsOutcome CSClient::modifyClusterTags(const ModifyClusterTagsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyClusterTagsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyClusterTagsOutcome(ModifyClusterTagsResult(outcome.result()));
	else
		return ModifyClusterTagsOutcome(outcome.error());
}

void CSClient::modifyClusterTagsAsync(const ModifyClusterTagsRequest& request, const ModifyClusterTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyClusterTags(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CSClient::ModifyClusterTagsOutcomeCallable CSClient::modifyClusterTagsCallable(const ModifyClusterTagsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyClusterTagsOutcome()>>(
			[this, request]()
			{
			return this->modifyClusterTags(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CSClient::PauseClusterUpgradeOutcome CSClient::pauseClusterUpgrade(const PauseClusterUpgradeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PauseClusterUpgradeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PauseClusterUpgradeOutcome(PauseClusterUpgradeResult(outcome.result()));
	else
		return PauseClusterUpgradeOutcome(outcome.error());
}

void CSClient::pauseClusterUpgradeAsync(const PauseClusterUpgradeRequest& request, const PauseClusterUpgradeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, pauseClusterUpgrade(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CSClient::PauseClusterUpgradeOutcomeCallable CSClient::pauseClusterUpgradeCallable(const PauseClusterUpgradeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PauseClusterUpgradeOutcome()>>(
			[this, request]()
			{
			return this->pauseClusterUpgrade(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CSClient::PauseComponentUpgradeOutcome CSClient::pauseComponentUpgrade(const PauseComponentUpgradeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PauseComponentUpgradeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PauseComponentUpgradeOutcome(PauseComponentUpgradeResult(outcome.result()));
	else
		return PauseComponentUpgradeOutcome(outcome.error());
}

void CSClient::pauseComponentUpgradeAsync(const PauseComponentUpgradeRequest& request, const PauseComponentUpgradeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, pauseComponentUpgrade(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CSClient::PauseComponentUpgradeOutcomeCallable CSClient::pauseComponentUpgradeCallable(const PauseComponentUpgradeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PauseComponentUpgradeOutcome()>>(
			[this, request]()
			{
			return this->pauseComponentUpgrade(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CSClient::RemoveClusterNodesOutcome CSClient::removeClusterNodes(const RemoveClusterNodesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RemoveClusterNodesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RemoveClusterNodesOutcome(RemoveClusterNodesResult(outcome.result()));
	else
		return RemoveClusterNodesOutcome(outcome.error());
}

void CSClient::removeClusterNodesAsync(const RemoveClusterNodesRequest& request, const RemoveClusterNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, removeClusterNodes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CSClient::RemoveClusterNodesOutcomeCallable CSClient::removeClusterNodesCallable(const RemoveClusterNodesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RemoveClusterNodesOutcome()>>(
			[this, request]()
			{
			return this->removeClusterNodes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CSClient::RemoveWorkflowOutcome CSClient::removeWorkflow(const RemoveWorkflowRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RemoveWorkflowOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RemoveWorkflowOutcome(RemoveWorkflowResult(outcome.result()));
	else
		return RemoveWorkflowOutcome(outcome.error());
}

void CSClient::removeWorkflowAsync(const RemoveWorkflowRequest& request, const RemoveWorkflowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, removeWorkflow(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CSClient::RemoveWorkflowOutcomeCallable CSClient::removeWorkflowCallable(const RemoveWorkflowRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RemoveWorkflowOutcome()>>(
			[this, request]()
			{
			return this->removeWorkflow(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CSClient::ResumeComponentUpgradeOutcome CSClient::resumeComponentUpgrade(const ResumeComponentUpgradeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ResumeComponentUpgradeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ResumeComponentUpgradeOutcome(ResumeComponentUpgradeResult(outcome.result()));
	else
		return ResumeComponentUpgradeOutcome(outcome.error());
}

void CSClient::resumeComponentUpgradeAsync(const ResumeComponentUpgradeRequest& request, const ResumeComponentUpgradeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, resumeComponentUpgrade(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CSClient::ResumeComponentUpgradeOutcomeCallable CSClient::resumeComponentUpgradeCallable(const ResumeComponentUpgradeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ResumeComponentUpgradeOutcome()>>(
			[this, request]()
			{
			return this->resumeComponentUpgrade(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CSClient::ResumeUpgradeClusterOutcome CSClient::resumeUpgradeCluster(const ResumeUpgradeClusterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ResumeUpgradeClusterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ResumeUpgradeClusterOutcome(ResumeUpgradeClusterResult(outcome.result()));
	else
		return ResumeUpgradeClusterOutcome(outcome.error());
}

void CSClient::resumeUpgradeClusterAsync(const ResumeUpgradeClusterRequest& request, const ResumeUpgradeClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, resumeUpgradeCluster(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CSClient::ResumeUpgradeClusterOutcomeCallable CSClient::resumeUpgradeClusterCallable(const ResumeUpgradeClusterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ResumeUpgradeClusterOutcome()>>(
			[this, request]()
			{
			return this->resumeUpgradeCluster(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CSClient::ScaleClusterOutcome CSClient::scaleCluster(const ScaleClusterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ScaleClusterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ScaleClusterOutcome(ScaleClusterResult(outcome.result()));
	else
		return ScaleClusterOutcome(outcome.error());
}

void CSClient::scaleClusterAsync(const ScaleClusterRequest& request, const ScaleClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, scaleCluster(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CSClient::ScaleClusterOutcomeCallable CSClient::scaleClusterCallable(const ScaleClusterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ScaleClusterOutcome()>>(
			[this, request]()
			{
			return this->scaleCluster(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CSClient::ScaleOutClusterOutcome CSClient::scaleOutCluster(const ScaleOutClusterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ScaleOutClusterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ScaleOutClusterOutcome(ScaleOutClusterResult(outcome.result()));
	else
		return ScaleOutClusterOutcome(outcome.error());
}

void CSClient::scaleOutClusterAsync(const ScaleOutClusterRequest& request, const ScaleOutClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, scaleOutCluster(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CSClient::ScaleOutClusterOutcomeCallable CSClient::scaleOutClusterCallable(const ScaleOutClusterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ScaleOutClusterOutcome()>>(
			[this, request]()
			{
			return this->scaleOutCluster(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CSClient::StartWorkflowOutcome CSClient::startWorkflow(const StartWorkflowRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StartWorkflowOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StartWorkflowOutcome(StartWorkflowResult(outcome.result()));
	else
		return StartWorkflowOutcome(outcome.error());
}

void CSClient::startWorkflowAsync(const StartWorkflowRequest& request, const StartWorkflowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, startWorkflow(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CSClient::StartWorkflowOutcomeCallable CSClient::startWorkflowCallable(const StartWorkflowRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StartWorkflowOutcome()>>(
			[this, request]()
			{
			return this->startWorkflow(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CSClient::UnInstallClusterAddonsOutcome CSClient::unInstallClusterAddons(const UnInstallClusterAddonsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UnInstallClusterAddonsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UnInstallClusterAddonsOutcome(UnInstallClusterAddonsResult(outcome.result()));
	else
		return UnInstallClusterAddonsOutcome(outcome.error());
}

void CSClient::unInstallClusterAddonsAsync(const UnInstallClusterAddonsRequest& request, const UnInstallClusterAddonsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, unInstallClusterAddons(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CSClient::UnInstallClusterAddonsOutcomeCallable CSClient::unInstallClusterAddonsCallable(const UnInstallClusterAddonsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UnInstallClusterAddonsOutcome()>>(
			[this, request]()
			{
			return this->unInstallClusterAddons(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CSClient::UpdateK8sClusterUserConfigExpireOutcome CSClient::updateK8sClusterUserConfigExpire(const UpdateK8sClusterUserConfigExpireRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateK8sClusterUserConfigExpireOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateK8sClusterUserConfigExpireOutcome(UpdateK8sClusterUserConfigExpireResult(outcome.result()));
	else
		return UpdateK8sClusterUserConfigExpireOutcome(outcome.error());
}

void CSClient::updateK8sClusterUserConfigExpireAsync(const UpdateK8sClusterUserConfigExpireRequest& request, const UpdateK8sClusterUserConfigExpireAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateK8sClusterUserConfigExpire(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CSClient::UpdateK8sClusterUserConfigExpireOutcomeCallable CSClient::updateK8sClusterUserConfigExpireCallable(const UpdateK8sClusterUserConfigExpireRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateK8sClusterUserConfigExpireOutcome()>>(
			[this, request]()
			{
			return this->updateK8sClusterUserConfigExpire(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CSClient::UpdateTemplateOutcome CSClient::updateTemplate(const UpdateTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateTemplateOutcome(UpdateTemplateResult(outcome.result()));
	else
		return UpdateTemplateOutcome(outcome.error());
}

void CSClient::updateTemplateAsync(const UpdateTemplateRequest& request, const UpdateTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CSClient::UpdateTemplateOutcomeCallable CSClient::updateTemplateCallable(const UpdateTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateTemplateOutcome()>>(
			[this, request]()
			{
			return this->updateTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CSClient::UpgradeClusterOutcome CSClient::upgradeCluster(const UpgradeClusterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpgradeClusterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpgradeClusterOutcome(UpgradeClusterResult(outcome.result()));
	else
		return UpgradeClusterOutcome(outcome.error());
}

void CSClient::upgradeClusterAsync(const UpgradeClusterRequest& request, const UpgradeClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, upgradeCluster(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CSClient::UpgradeClusterOutcomeCallable CSClient::upgradeClusterCallable(const UpgradeClusterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpgradeClusterOutcome()>>(
			[this, request]()
			{
			return this->upgradeCluster(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CSClient::UpgradeClusterAddonsOutcome CSClient::upgradeClusterAddons(const UpgradeClusterAddonsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpgradeClusterAddonsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpgradeClusterAddonsOutcome(UpgradeClusterAddonsResult(outcome.result()));
	else
		return UpgradeClusterAddonsOutcome(outcome.error());
}

void CSClient::upgradeClusterAddonsAsync(const UpgradeClusterAddonsRequest& request, const UpgradeClusterAddonsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, upgradeClusterAddons(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CSClient::UpgradeClusterAddonsOutcomeCallable CSClient::upgradeClusterAddonsCallable(const UpgradeClusterAddonsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpgradeClusterAddonsOutcome()>>(
			[this, request]()
			{
			return this->upgradeClusterAddons(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

