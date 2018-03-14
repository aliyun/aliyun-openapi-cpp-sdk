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

CSClient::CallbackClusterTokenOutcome CSClient::callbackClusterToken(const CallbackClusterTokenRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CallbackClusterTokenOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CallbackClusterTokenOutcome(CallbackClusterTokenResult(outcome.result()));
	else
		return CallbackClusterTokenOutcome(outcome.error());
}

void CSClient::callbackClusterTokenAsync(const CallbackClusterTokenRequest& request, const CallbackClusterTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, callbackClusterToken(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CSClient::CallbackClusterTokenOutcomeCallable CSClient::callbackClusterTokenCallable(const CallbackClusterTokenRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CallbackClusterTokenOutcome()>>(
			[this, request]()
			{
			return this->callbackClusterToken(request);
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

CSClient::GetProjectEventsOutcome CSClient::getProjectEvents(const GetProjectEventsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetProjectEventsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetProjectEventsOutcome(GetProjectEventsResult(outcome.result()));
	else
		return GetProjectEventsOutcome(outcome.error());
}

void CSClient::getProjectEventsAsync(const GetProjectEventsRequest& request, const GetProjectEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getProjectEvents(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CSClient::GetProjectEventsOutcomeCallable CSClient::getProjectEventsCallable(const GetProjectEventsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetProjectEventsOutcome()>>(
			[this, request]()
			{
			return this->getProjectEvents(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CSClient::CheckAliyunCSServiceRoleOutcome CSClient::checkAliyunCSServiceRole(const CheckAliyunCSServiceRoleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CheckAliyunCSServiceRoleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CheckAliyunCSServiceRoleOutcome(CheckAliyunCSServiceRoleResult(outcome.result()));
	else
		return CheckAliyunCSServiceRoleOutcome(outcome.error());
}

void CSClient::checkAliyunCSServiceRoleAsync(const CheckAliyunCSServiceRoleRequest& request, const CheckAliyunCSServiceRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, checkAliyunCSServiceRole(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CSClient::CheckAliyunCSServiceRoleOutcomeCallable CSClient::checkAliyunCSServiceRoleCallable(const CheckAliyunCSServiceRoleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CheckAliyunCSServiceRoleOutcome()>>(
			[this, request]()
			{
			return this->checkAliyunCSServiceRole(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CSClient::DescribeTemplateAttributeOutcome CSClient::describeTemplateAttribute(const DescribeTemplateAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeTemplateAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeTemplateAttributeOutcome(DescribeTemplateAttributeResult(outcome.result()));
	else
		return DescribeTemplateAttributeOutcome(outcome.error());
}

void CSClient::describeTemplateAttributeAsync(const DescribeTemplateAttributeRequest& request, const DescribeTemplateAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeTemplateAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CSClient::DescribeTemplateAttributeOutcomeCallable CSClient::describeTemplateAttributeCallable(const DescribeTemplateAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeTemplateAttributeOutcome()>>(
			[this, request]()
			{
			return this->describeTemplateAttribute(request);
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

CSClient::DescribeClusterCertsOutcome CSClient::describeClusterCerts(const DescribeClusterCertsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeClusterCertsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeClusterCertsOutcome(DescribeClusterCertsResult(outcome.result()));
	else
		return DescribeClusterCertsOutcome(outcome.error());
}

void CSClient::describeClusterCertsAsync(const DescribeClusterCertsRequest& request, const DescribeClusterCertsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeClusterCerts(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CSClient::DescribeClusterCertsOutcomeCallable CSClient::describeClusterCertsCallable(const DescribeClusterCertsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeClusterCertsOutcome()>>(
			[this, request]()
			{
			return this->describeClusterCerts(request);
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

CSClient::CallBackAgilityClusterOutcome CSClient::callBackAgilityCluster(const CallBackAgilityClusterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CallBackAgilityClusterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CallBackAgilityClusterOutcome(CallBackAgilityClusterResult(outcome.result()));
	else
		return CallBackAgilityClusterOutcome(outcome.error());
}

void CSClient::callBackAgilityClusterAsync(const CallBackAgilityClusterRequest& request, const CallBackAgilityClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, callBackAgilityCluster(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CSClient::CallBackAgilityClusterOutcomeCallable CSClient::callBackAgilityClusterCallable(const CallBackAgilityClusterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CallBackAgilityClusterOutcome()>>(
			[this, request]()
			{
			return this->callBackAgilityCluster(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CSClient::DescribeClusterScaledNodeOutcome CSClient::describeClusterScaledNode(const DescribeClusterScaledNodeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeClusterScaledNodeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeClusterScaledNodeOutcome(DescribeClusterScaledNodeResult(outcome.result()));
	else
		return DescribeClusterScaledNodeOutcome(outcome.error());
}

void CSClient::describeClusterScaledNodeAsync(const DescribeClusterScaledNodeRequest& request, const DescribeClusterScaledNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeClusterScaledNode(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CSClient::DescribeClusterScaledNodeOutcomeCallable CSClient::describeClusterScaledNodeCallable(const DescribeClusterScaledNodeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeClusterScaledNodeOutcome()>>(
			[this, request]()
			{
			return this->describeClusterScaledNode(request);
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

CSClient::ResetClusterNodeOutcome CSClient::resetClusterNode(const ResetClusterNodeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ResetClusterNodeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ResetClusterNodeOutcome(ResetClusterNodeResult(outcome.result()));
	else
		return ResetClusterNodeOutcome(outcome.error());
}

void CSClient::resetClusterNodeAsync(const ResetClusterNodeRequest& request, const ResetClusterNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, resetClusterNode(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CSClient::ResetClusterNodeOutcomeCallable CSClient::resetClusterNodeCallable(const ResetClusterNodeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ResetClusterNodeOutcome()>>(
			[this, request]()
			{
			return this->resetClusterNode(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CSClient::DescribeServiceContainersOutcome CSClient::describeServiceContainers(const DescribeServiceContainersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeServiceContainersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeServiceContainersOutcome(DescribeServiceContainersResult(outcome.result()));
	else
		return DescribeServiceContainersOutcome(outcome.error());
}

void CSClient::describeServiceContainersAsync(const DescribeServiceContainersRequest& request, const DescribeServiceContainersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeServiceContainers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CSClient::DescribeServiceContainersOutcomeCallable CSClient::describeServiceContainersCallable(const DescribeServiceContainersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeServiceContainersOutcome()>>(
			[this, request]()
			{
			return this->describeServiceContainers(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CSClient::DescribeTaskInfoOutcome CSClient::describeTaskInfo(const DescribeTaskInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeTaskInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeTaskInfoOutcome(DescribeTaskInfoResult(outcome.result()));
	else
		return DescribeTaskInfoOutcome(outcome.error());
}

void CSClient::describeTaskInfoAsync(const DescribeTaskInfoRequest& request, const DescribeTaskInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeTaskInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CSClient::DescribeTaskInfoOutcomeCallable CSClient::describeTaskInfoCallable(const DescribeTaskInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeTaskInfoOutcome()>>(
			[this, request]()
			{
			return this->describeTaskInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CSClient::GetClusterProjectsOutcome CSClient::getClusterProjects(const GetClusterProjectsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetClusterProjectsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetClusterProjectsOutcome(GetClusterProjectsResult(outcome.result()));
	else
		return GetClusterProjectsOutcome(outcome.error());
}

void CSClient::getClusterProjectsAsync(const GetClusterProjectsRequest& request, const GetClusterProjectsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getClusterProjects(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CSClient::GetClusterProjectsOutcomeCallable CSClient::getClusterProjectsCallable(const GetClusterProjectsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetClusterProjectsOutcome()>>(
			[this, request]()
			{
			return this->getClusterProjects(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CSClient::DescribeClusterServicesOutcome CSClient::describeClusterServices(const DescribeClusterServicesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeClusterServicesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeClusterServicesOutcome(DescribeClusterServicesResult(outcome.result()));
	else
		return DescribeClusterServicesOutcome(outcome.error());
}

void CSClient::describeClusterServicesAsync(const DescribeClusterServicesRequest& request, const DescribeClusterServicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeClusterServices(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CSClient::DescribeClusterServicesOutcomeCallable CSClient::describeClusterServicesCallable(const DescribeClusterServicesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeClusterServicesOutcome()>>(
			[this, request]()
			{
			return this->describeClusterServices(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CSClient::ScaleInClusterOutcome CSClient::scaleInCluster(const ScaleInClusterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ScaleInClusterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ScaleInClusterOutcome(ScaleInClusterResult(outcome.result()));
	else
		return ScaleInClusterOutcome(outcome.error());
}

void CSClient::scaleInClusterAsync(const ScaleInClusterRequest& request, const ScaleInClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, scaleInCluster(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CSClient::ScaleInClusterOutcomeCallable CSClient::scaleInClusterCallable(const ScaleInClusterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ScaleInClusterOutcome()>>(
			[this, request]()
			{
			return this->scaleInCluster(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CSClient::DeleteClusterNodeOutcome CSClient::deleteClusterNode(const DeleteClusterNodeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteClusterNodeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteClusterNodeOutcome(DeleteClusterNodeResult(outcome.result()));
	else
		return DeleteClusterNodeOutcome(outcome.error());
}

void CSClient::deleteClusterNodeAsync(const DeleteClusterNodeRequest& request, const DeleteClusterNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteClusterNode(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CSClient::DeleteClusterNodeOutcomeCallable CSClient::deleteClusterNodeCallable(const DeleteClusterNodeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteClusterNodeOutcome()>>(
			[this, request]()
			{
			return this->deleteClusterNode(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CSClient::RevokeClusterTokenOutcome CSClient::revokeClusterToken(const RevokeClusterTokenRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RevokeClusterTokenOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RevokeClusterTokenOutcome(RevokeClusterTokenResult(outcome.result()));
	else
		return RevokeClusterTokenOutcome(outcome.error());
}

void CSClient::revokeClusterTokenAsync(const RevokeClusterTokenRequest& request, const RevokeClusterTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, revokeClusterToken(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CSClient::RevokeClusterTokenOutcomeCallable CSClient::revokeClusterTokenCallable(const RevokeClusterTokenRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RevokeClusterTokenOutcome()>>(
			[this, request]()
			{
			return this->revokeClusterToken(request);
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

CSClient::AddAgilityClusterOutcome CSClient::addAgilityCluster(const AddAgilityClusterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddAgilityClusterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddAgilityClusterOutcome(AddAgilityClusterResult(outcome.result()));
	else
		return AddAgilityClusterOutcome(outcome.error());
}

void CSClient::addAgilityClusterAsync(const AddAgilityClusterRequest& request, const AddAgilityClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addAgilityCluster(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CSClient::AddAgilityClusterOutcomeCallable CSClient::addAgilityClusterCallable(const AddAgilityClusterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddAgilityClusterOutcome()>>(
			[this, request]()
			{
			return this->addAgilityCluster(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CSClient::DescribeImagesOutcome CSClient::describeImages(const DescribeImagesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeImagesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeImagesOutcome(DescribeImagesResult(outcome.result()));
	else
		return DescribeImagesOutcome(outcome.error());
}

void CSClient::describeImagesAsync(const DescribeImagesRequest& request, const DescribeImagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeImages(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CSClient::DescribeImagesOutcomeCallable CSClient::describeImagesCallable(const DescribeImagesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeImagesOutcome()>>(
			[this, request]()
			{
			return this->describeImages(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CSClient::GetTriggerHookOutcome CSClient::getTriggerHook(const GetTriggerHookRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetTriggerHookOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetTriggerHookOutcome(GetTriggerHookResult(outcome.result()));
	else
		return GetTriggerHookOutcome(outcome.error());
}

void CSClient::getTriggerHookAsync(const GetTriggerHookRequest& request, const GetTriggerHookAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getTriggerHook(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CSClient::GetTriggerHookOutcomeCallable CSClient::getTriggerHookCallable(const GetTriggerHookRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetTriggerHookOutcome()>>(
			[this, request]()
			{
			return this->getTriggerHook(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CSClient::DescribeClusterTokensOutcome CSClient::describeClusterTokens(const DescribeClusterTokensRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeClusterTokensOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeClusterTokensOutcome(DescribeClusterTokensResult(outcome.result()));
	else
		return DescribeClusterTokensOutcome(outcome.error());
}

void CSClient::describeClusterTokensAsync(const DescribeClusterTokensRequest& request, const DescribeClusterTokensAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeClusterTokens(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CSClient::DescribeClusterTokensOutcomeCallable CSClient::describeClusterTokensCallable(const DescribeClusterTokensRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeClusterTokensOutcome()>>(
			[this, request]()
			{
			return this->describeClusterTokens(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CSClient::UpdateSubUserResoucesOutcome CSClient::updateSubUserResouces(const UpdateSubUserResoucesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateSubUserResoucesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateSubUserResoucesOutcome(UpdateSubUserResoucesResult(outcome.result()));
	else
		return UpdateSubUserResoucesOutcome(outcome.error());
}

void CSClient::updateSubUserResoucesAsync(const UpdateSubUserResoucesRequest& request, const UpdateSubUserResoucesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateSubUserResouces(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CSClient::UpdateSubUserResoucesOutcomeCallable CSClient::updateSubUserResoucesCallable(const UpdateSubUserResoucesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateSubUserResoucesOutcome()>>(
			[this, request]()
			{
			return this->updateSubUserResouces(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CSClient::ModifyClusterNameOutcome CSClient::modifyClusterName(const ModifyClusterNameRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyClusterNameOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyClusterNameOutcome(ModifyClusterNameResult(outcome.result()));
	else
		return ModifyClusterNameOutcome(outcome.error());
}

void CSClient::modifyClusterNameAsync(const ModifyClusterNameRequest& request, const ModifyClusterNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyClusterName(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CSClient::ModifyClusterNameOutcomeCallable CSClient::modifyClusterNameCallable(const ModifyClusterNameRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyClusterNameOutcome()>>(
			[this, request]()
			{
			return this->modifyClusterName(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CSClient::DescribeClusterHostsOutcome CSClient::describeClusterHosts(const DescribeClusterHostsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeClusterHostsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeClusterHostsOutcome(DescribeClusterHostsResult(outcome.result()));
	else
		return DescribeClusterHostsOutcome(outcome.error());
}

void CSClient::describeClusterHostsAsync(const DescribeClusterHostsRequest& request, const DescribeClusterHostsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeClusterHosts(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CSClient::DescribeClusterHostsOutcomeCallable CSClient::describeClusterHostsCallable(const DescribeClusterHostsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeClusterHostsOutcome()>>(
			[this, request]()
			{
			return this->describeClusterHosts(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CSClient::DescribeApiVersionOutcome CSClient::describeApiVersion(const DescribeApiVersionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeApiVersionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeApiVersionOutcome(DescribeApiVersionResult(outcome.result()));
	else
		return DescribeApiVersionOutcome(outcome.error());
}

void CSClient::describeApiVersionAsync(const DescribeApiVersionRequest& request, const DescribeApiVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeApiVersion(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CSClient::DescribeApiVersionOutcomeCallable CSClient::describeApiVersionCallable(const DescribeApiVersionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeApiVersionOutcome()>>(
			[this, request]()
			{
			return this->describeApiVersion(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CSClient::GatherLogsTokenOutcome CSClient::gatherLogsToken(const GatherLogsTokenRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GatherLogsTokenOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GatherLogsTokenOutcome(GatherLogsTokenResult(outcome.result()));
	else
		return GatherLogsTokenOutcome(outcome.error());
}

void CSClient::gatherLogsTokenAsync(const GatherLogsTokenRequest& request, const GatherLogsTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, gatherLogsToken(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CSClient::GatherLogsTokenOutcomeCallable CSClient::gatherLogsTokenCallable(const GatherLogsTokenRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GatherLogsTokenOutcome()>>(
			[this, request]()
			{
			return this->gatherLogsToken(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CSClient::CreateClusterTokenOutcome CSClient::createClusterToken(const CreateClusterTokenRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateClusterTokenOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateClusterTokenOutcome(CreateClusterTokenResult(outcome.result()));
	else
		return CreateClusterTokenOutcome(outcome.error());
}

void CSClient::createClusterTokenAsync(const CreateClusterTokenRequest& request, const CreateClusterTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createClusterToken(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CSClient::CreateClusterTokenOutcomeCallable CSClient::createClusterTokenCallable(const CreateClusterTokenRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateClusterTokenOutcome()>>(
			[this, request]()
			{
			return this->createClusterToken(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CSClient::DescribeUserContainersOutcome CSClient::describeUserContainers(const DescribeUserContainersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeUserContainersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeUserContainersOutcome(DescribeUserContainersResult(outcome.result()));
	else
		return DescribeUserContainersOutcome(outcome.error());
}

void CSClient::describeUserContainersAsync(const DescribeUserContainersRequest& request, const DescribeUserContainersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeUserContainers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CSClient::DescribeUserContainersOutcomeCallable CSClient::describeUserContainersCallable(const DescribeUserContainersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeUserContainersOutcome()>>(
			[this, request]()
			{
			return this->describeUserContainers(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CSClient::DescribeAgilityTunnelAgentInfoOutcome CSClient::describeAgilityTunnelAgentInfo(const DescribeAgilityTunnelAgentInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAgilityTunnelAgentInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAgilityTunnelAgentInfoOutcome(DescribeAgilityTunnelAgentInfoResult(outcome.result()));
	else
		return DescribeAgilityTunnelAgentInfoOutcome(outcome.error());
}

void CSClient::describeAgilityTunnelAgentInfoAsync(const DescribeAgilityTunnelAgentInfoRequest& request, const DescribeAgilityTunnelAgentInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAgilityTunnelAgentInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CSClient::DescribeAgilityTunnelAgentInfoOutcomeCallable CSClient::describeAgilityTunnelAgentInfoCallable(const DescribeAgilityTunnelAgentInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAgilityTunnelAgentInfoOutcome()>>(
			[this, request]()
			{
			return this->describeAgilityTunnelAgentInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CSClient::DescribeClusterNodeInfoOutcome CSClient::describeClusterNodeInfo(const DescribeClusterNodeInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeClusterNodeInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeClusterNodeInfoOutcome(DescribeClusterNodeInfoResult(outcome.result()));
	else
		return DescribeClusterNodeInfoOutcome(outcome.error());
}

void CSClient::describeClusterNodeInfoAsync(const DescribeClusterNodeInfoRequest& request, const DescribeClusterNodeInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeClusterNodeInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CSClient::DescribeClusterNodeInfoOutcomeCallable CSClient::describeClusterNodeInfoCallable(const DescribeClusterNodeInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeClusterNodeInfoOutcome()>>(
			[this, request]()
			{
			return this->describeClusterNodeInfo(request);
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

CSClient::DescribeAgilityTunnelCertsOutcome CSClient::describeAgilityTunnelCerts(const DescribeAgilityTunnelCertsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAgilityTunnelCertsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAgilityTunnelCertsOutcome(DescribeAgilityTunnelCertsResult(outcome.result()));
	else
		return DescribeAgilityTunnelCertsOutcome(outcome.error());
}

void CSClient::describeAgilityTunnelCertsAsync(const DescribeAgilityTunnelCertsRequest& request, const DescribeAgilityTunnelCertsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAgilityTunnelCerts(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CSClient::DescribeAgilityTunnelCertsOutcomeCallable CSClient::describeAgilityTunnelCertsCallable(const DescribeAgilityTunnelCertsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAgilityTunnelCertsOutcome()>>(
			[this, request]()
			{
			return this->describeAgilityTunnelCerts(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CSClient::DescribeClusterNodeInfoWithInstanceOutcome CSClient::describeClusterNodeInfoWithInstance(const DescribeClusterNodeInfoWithInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeClusterNodeInfoWithInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeClusterNodeInfoWithInstanceOutcome(DescribeClusterNodeInfoWithInstanceResult(outcome.result()));
	else
		return DescribeClusterNodeInfoWithInstanceOutcome(outcome.error());
}

void CSClient::describeClusterNodeInfoWithInstanceAsync(const DescribeClusterNodeInfoWithInstanceRequest& request, const DescribeClusterNodeInfoWithInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeClusterNodeInfoWithInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CSClient::DescribeClusterNodeInfoWithInstanceOutcomeCallable CSClient::describeClusterNodeInfoWithInstanceCallable(const DescribeClusterNodeInfoWithInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeClusterNodeInfoWithInstanceOutcome()>>(
			[this, request]()
			{
			return this->describeClusterNodeInfoWithInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CSClient::UpgradeClusterComponentsOutcome CSClient::upgradeClusterComponents(const UpgradeClusterComponentsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpgradeClusterComponentsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpgradeClusterComponentsOutcome(UpgradeClusterComponentsResult(outcome.result()));
	else
		return UpgradeClusterComponentsOutcome(outcome.error());
}

void CSClient::upgradeClusterComponentsAsync(const UpgradeClusterComponentsRequest& request, const UpgradeClusterComponentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, upgradeClusterComponents(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CSClient::UpgradeClusterComponentsOutcomeCallable CSClient::upgradeClusterComponentsCallable(const UpgradeClusterComponentsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpgradeClusterComponentsOutcome()>>(
			[this, request]()
			{
			return this->upgradeClusterComponents(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CSClient::DownloadClusterNodeCertsOutcome CSClient::downloadClusterNodeCerts(const DownloadClusterNodeCertsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DownloadClusterNodeCertsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DownloadClusterNodeCertsOutcome(DownloadClusterNodeCertsResult(outcome.result()));
	else
		return DownloadClusterNodeCertsOutcome(outcome.error());
}

void CSClient::downloadClusterNodeCertsAsync(const DownloadClusterNodeCertsRequest& request, const DownloadClusterNodeCertsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, downloadClusterNodeCerts(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CSClient::DownloadClusterNodeCertsOutcomeCallable CSClient::downloadClusterNodeCertsCallable(const DownloadClusterNodeCertsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DownloadClusterNodeCertsOutcome()>>(
			[this, request]()
			{
			return this->downloadClusterNodeCerts(request);
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

