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

#include <alibabacloud/sae/SaeClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Sae;
using namespace AlibabaCloud::Sae::Model;

namespace
{
	const std::string SERVICE_NAME = "sae";
}

SaeClient::SaeClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RoaServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "serverless");
}

SaeClient::SaeClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RoaServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "serverless");
}

SaeClient::SaeClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RoaServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "serverless");
}

SaeClient::~SaeClient()
{}

SaeClient::AbortAndRollbackChangeOrderOutcome SaeClient::abortAndRollbackChangeOrder(const AbortAndRollbackChangeOrderRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AbortAndRollbackChangeOrderOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AbortAndRollbackChangeOrderOutcome(AbortAndRollbackChangeOrderResult(outcome.result()));
	else
		return AbortAndRollbackChangeOrderOutcome(outcome.error());
}

void SaeClient::abortAndRollbackChangeOrderAsync(const AbortAndRollbackChangeOrderRequest& request, const AbortAndRollbackChangeOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, abortAndRollbackChangeOrder(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SaeClient::AbortAndRollbackChangeOrderOutcomeCallable SaeClient::abortAndRollbackChangeOrderCallable(const AbortAndRollbackChangeOrderRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AbortAndRollbackChangeOrderOutcome()>>(
			[this, request]()
			{
			return this->abortAndRollbackChangeOrder(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SaeClient::AbortChangeOrderOutcome SaeClient::abortChangeOrder(const AbortChangeOrderRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AbortChangeOrderOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AbortChangeOrderOutcome(AbortChangeOrderResult(outcome.result()));
	else
		return AbortChangeOrderOutcome(outcome.error());
}

void SaeClient::abortChangeOrderAsync(const AbortChangeOrderRequest& request, const AbortChangeOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, abortChangeOrder(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SaeClient::AbortChangeOrderOutcomeCallable SaeClient::abortChangeOrderCallable(const AbortChangeOrderRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AbortChangeOrderOutcome()>>(
			[this, request]()
			{
			return this->abortChangeOrder(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SaeClient::BatchStartApplicationsOutcome SaeClient::batchStartApplications(const BatchStartApplicationsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BatchStartApplicationsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BatchStartApplicationsOutcome(BatchStartApplicationsResult(outcome.result()));
	else
		return BatchStartApplicationsOutcome(outcome.error());
}

void SaeClient::batchStartApplicationsAsync(const BatchStartApplicationsRequest& request, const BatchStartApplicationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, batchStartApplications(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SaeClient::BatchStartApplicationsOutcomeCallable SaeClient::batchStartApplicationsCallable(const BatchStartApplicationsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BatchStartApplicationsOutcome()>>(
			[this, request]()
			{
			return this->batchStartApplications(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SaeClient::BatchStopApplicationsOutcome SaeClient::batchStopApplications(const BatchStopApplicationsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BatchStopApplicationsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BatchStopApplicationsOutcome(BatchStopApplicationsResult(outcome.result()));
	else
		return BatchStopApplicationsOutcome(outcome.error());
}

void SaeClient::batchStopApplicationsAsync(const BatchStopApplicationsRequest& request, const BatchStopApplicationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, batchStopApplications(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SaeClient::BatchStopApplicationsOutcomeCallable SaeClient::batchStopApplicationsCallable(const BatchStopApplicationsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BatchStopApplicationsOutcome()>>(
			[this, request]()
			{
			return this->batchStopApplications(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SaeClient::BindSlbOutcome SaeClient::bindSlb(const BindSlbRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BindSlbOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BindSlbOutcome(BindSlbResult(outcome.result()));
	else
		return BindSlbOutcome(outcome.error());
}

void SaeClient::bindSlbAsync(const BindSlbRequest& request, const BindSlbAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, bindSlb(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SaeClient::BindSlbOutcomeCallable SaeClient::bindSlbCallable(const BindSlbRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BindSlbOutcome()>>(
			[this, request]()
			{
			return this->bindSlb(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SaeClient::ConfirmPipelineBatchOutcome SaeClient::confirmPipelineBatch(const ConfirmPipelineBatchRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ConfirmPipelineBatchOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ConfirmPipelineBatchOutcome(ConfirmPipelineBatchResult(outcome.result()));
	else
		return ConfirmPipelineBatchOutcome(outcome.error());
}

void SaeClient::confirmPipelineBatchAsync(const ConfirmPipelineBatchRequest& request, const ConfirmPipelineBatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, confirmPipelineBatch(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SaeClient::ConfirmPipelineBatchOutcomeCallable SaeClient::confirmPipelineBatchCallable(const ConfirmPipelineBatchRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ConfirmPipelineBatchOutcome()>>(
			[this, request]()
			{
			return this->confirmPipelineBatch(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SaeClient::CreateApplicationOutcome SaeClient::createApplication(const CreateApplicationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateApplicationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateApplicationOutcome(CreateApplicationResult(outcome.result()));
	else
		return CreateApplicationOutcome(outcome.error());
}

void SaeClient::createApplicationAsync(const CreateApplicationRequest& request, const CreateApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createApplication(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SaeClient::CreateApplicationOutcomeCallable SaeClient::createApplicationCallable(const CreateApplicationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateApplicationOutcome()>>(
			[this, request]()
			{
			return this->createApplication(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SaeClient::CreateApplicationScalingRuleOutcome SaeClient::createApplicationScalingRule(const CreateApplicationScalingRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateApplicationScalingRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateApplicationScalingRuleOutcome(CreateApplicationScalingRuleResult(outcome.result()));
	else
		return CreateApplicationScalingRuleOutcome(outcome.error());
}

void SaeClient::createApplicationScalingRuleAsync(const CreateApplicationScalingRuleRequest& request, const CreateApplicationScalingRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createApplicationScalingRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SaeClient::CreateApplicationScalingRuleOutcomeCallable SaeClient::createApplicationScalingRuleCallable(const CreateApplicationScalingRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateApplicationScalingRuleOutcome()>>(
			[this, request]()
			{
			return this->createApplicationScalingRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SaeClient::CreateConfigMapOutcome SaeClient::createConfigMap(const CreateConfigMapRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateConfigMapOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateConfigMapOutcome(CreateConfigMapResult(outcome.result()));
	else
		return CreateConfigMapOutcome(outcome.error());
}

void SaeClient::createConfigMapAsync(const CreateConfigMapRequest& request, const CreateConfigMapAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createConfigMap(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SaeClient::CreateConfigMapOutcomeCallable SaeClient::createConfigMapCallable(const CreateConfigMapRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateConfigMapOutcome()>>(
			[this, request]()
			{
			return this->createConfigMap(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SaeClient::CreateGreyTagRouteOutcome SaeClient::createGreyTagRoute(const CreateGreyTagRouteRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateGreyTagRouteOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateGreyTagRouteOutcome(CreateGreyTagRouteResult(outcome.result()));
	else
		return CreateGreyTagRouteOutcome(outcome.error());
}

void SaeClient::createGreyTagRouteAsync(const CreateGreyTagRouteRequest& request, const CreateGreyTagRouteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createGreyTagRoute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SaeClient::CreateGreyTagRouteOutcomeCallable SaeClient::createGreyTagRouteCallable(const CreateGreyTagRouteRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateGreyTagRouteOutcome()>>(
			[this, request]()
			{
			return this->createGreyTagRoute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SaeClient::CreateIngressOutcome SaeClient::createIngress(const CreateIngressRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateIngressOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateIngressOutcome(CreateIngressResult(outcome.result()));
	else
		return CreateIngressOutcome(outcome.error());
}

void SaeClient::createIngressAsync(const CreateIngressRequest& request, const CreateIngressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createIngress(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SaeClient::CreateIngressOutcomeCallable SaeClient::createIngressCallable(const CreateIngressRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateIngressOutcome()>>(
			[this, request]()
			{
			return this->createIngress(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SaeClient::CreateJobOutcome SaeClient::createJob(const CreateJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateJobOutcome(CreateJobResult(outcome.result()));
	else
		return CreateJobOutcome(outcome.error());
}

void SaeClient::createJobAsync(const CreateJobRequest& request, const CreateJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SaeClient::CreateJobOutcomeCallable SaeClient::createJobCallable(const CreateJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateJobOutcome()>>(
			[this, request]()
			{
			return this->createJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SaeClient::CreateNamespaceOutcome SaeClient::createNamespace(const CreateNamespaceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateNamespaceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateNamespaceOutcome(CreateNamespaceResult(outcome.result()));
	else
		return CreateNamespaceOutcome(outcome.error());
}

void SaeClient::createNamespaceAsync(const CreateNamespaceRequest& request, const CreateNamespaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createNamespace(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SaeClient::CreateNamespaceOutcomeCallable SaeClient::createNamespaceCallable(const CreateNamespaceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateNamespaceOutcome()>>(
			[this, request]()
			{
			return this->createNamespace(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SaeClient::CreateSecretOutcome SaeClient::createSecret(const CreateSecretRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateSecretOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateSecretOutcome(CreateSecretResult(outcome.result()));
	else
		return CreateSecretOutcome(outcome.error());
}

void SaeClient::createSecretAsync(const CreateSecretRequest& request, const CreateSecretAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createSecret(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SaeClient::CreateSecretOutcomeCallable SaeClient::createSecretCallable(const CreateSecretRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateSecretOutcome()>>(
			[this, request]()
			{
			return this->createSecret(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SaeClient::DeleteApplicationOutcome SaeClient::deleteApplication(const DeleteApplicationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteApplicationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteApplicationOutcome(DeleteApplicationResult(outcome.result()));
	else
		return DeleteApplicationOutcome(outcome.error());
}

void SaeClient::deleteApplicationAsync(const DeleteApplicationRequest& request, const DeleteApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteApplication(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SaeClient::DeleteApplicationOutcomeCallable SaeClient::deleteApplicationCallable(const DeleteApplicationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteApplicationOutcome()>>(
			[this, request]()
			{
			return this->deleteApplication(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SaeClient::DeleteApplicationScalingRuleOutcome SaeClient::deleteApplicationScalingRule(const DeleteApplicationScalingRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteApplicationScalingRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteApplicationScalingRuleOutcome(DeleteApplicationScalingRuleResult(outcome.result()));
	else
		return DeleteApplicationScalingRuleOutcome(outcome.error());
}

void SaeClient::deleteApplicationScalingRuleAsync(const DeleteApplicationScalingRuleRequest& request, const DeleteApplicationScalingRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteApplicationScalingRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SaeClient::DeleteApplicationScalingRuleOutcomeCallable SaeClient::deleteApplicationScalingRuleCallable(const DeleteApplicationScalingRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteApplicationScalingRuleOutcome()>>(
			[this, request]()
			{
			return this->deleteApplicationScalingRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SaeClient::DeleteConfigMapOutcome SaeClient::deleteConfigMap(const DeleteConfigMapRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteConfigMapOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteConfigMapOutcome(DeleteConfigMapResult(outcome.result()));
	else
		return DeleteConfigMapOutcome(outcome.error());
}

void SaeClient::deleteConfigMapAsync(const DeleteConfigMapRequest& request, const DeleteConfigMapAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteConfigMap(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SaeClient::DeleteConfigMapOutcomeCallable SaeClient::deleteConfigMapCallable(const DeleteConfigMapRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteConfigMapOutcome()>>(
			[this, request]()
			{
			return this->deleteConfigMap(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SaeClient::DeleteGreyTagRouteOutcome SaeClient::deleteGreyTagRoute(const DeleteGreyTagRouteRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteGreyTagRouteOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteGreyTagRouteOutcome(DeleteGreyTagRouteResult(outcome.result()));
	else
		return DeleteGreyTagRouteOutcome(outcome.error());
}

void SaeClient::deleteGreyTagRouteAsync(const DeleteGreyTagRouteRequest& request, const DeleteGreyTagRouteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteGreyTagRoute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SaeClient::DeleteGreyTagRouteOutcomeCallable SaeClient::deleteGreyTagRouteCallable(const DeleteGreyTagRouteRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteGreyTagRouteOutcome()>>(
			[this, request]()
			{
			return this->deleteGreyTagRoute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SaeClient::DeleteHistoryJobOutcome SaeClient::deleteHistoryJob(const DeleteHistoryJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteHistoryJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteHistoryJobOutcome(DeleteHistoryJobResult(outcome.result()));
	else
		return DeleteHistoryJobOutcome(outcome.error());
}

void SaeClient::deleteHistoryJobAsync(const DeleteHistoryJobRequest& request, const DeleteHistoryJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteHistoryJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SaeClient::DeleteHistoryJobOutcomeCallable SaeClient::deleteHistoryJobCallable(const DeleteHistoryJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteHistoryJobOutcome()>>(
			[this, request]()
			{
			return this->deleteHistoryJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SaeClient::DeleteIngressOutcome SaeClient::deleteIngress(const DeleteIngressRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteIngressOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteIngressOutcome(DeleteIngressResult(outcome.result()));
	else
		return DeleteIngressOutcome(outcome.error());
}

void SaeClient::deleteIngressAsync(const DeleteIngressRequest& request, const DeleteIngressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteIngress(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SaeClient::DeleteIngressOutcomeCallable SaeClient::deleteIngressCallable(const DeleteIngressRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteIngressOutcome()>>(
			[this, request]()
			{
			return this->deleteIngress(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SaeClient::DeleteJobOutcome SaeClient::deleteJob(const DeleteJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteJobOutcome(DeleteJobResult(outcome.result()));
	else
		return DeleteJobOutcome(outcome.error());
}

void SaeClient::deleteJobAsync(const DeleteJobRequest& request, const DeleteJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SaeClient::DeleteJobOutcomeCallable SaeClient::deleteJobCallable(const DeleteJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteJobOutcome()>>(
			[this, request]()
			{
			return this->deleteJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SaeClient::DeleteNamespaceOutcome SaeClient::deleteNamespace(const DeleteNamespaceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteNamespaceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteNamespaceOutcome(DeleteNamespaceResult(outcome.result()));
	else
		return DeleteNamespaceOutcome(outcome.error());
}

void SaeClient::deleteNamespaceAsync(const DeleteNamespaceRequest& request, const DeleteNamespaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteNamespace(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SaeClient::DeleteNamespaceOutcomeCallable SaeClient::deleteNamespaceCallable(const DeleteNamespaceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteNamespaceOutcome()>>(
			[this, request]()
			{
			return this->deleteNamespace(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SaeClient::DeleteSecretOutcome SaeClient::deleteSecret(const DeleteSecretRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteSecretOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteSecretOutcome(DeleteSecretResult(outcome.result()));
	else
		return DeleteSecretOutcome(outcome.error());
}

void SaeClient::deleteSecretAsync(const DeleteSecretRequest& request, const DeleteSecretAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteSecret(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SaeClient::DeleteSecretOutcomeCallable SaeClient::deleteSecretCallable(const DeleteSecretRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteSecretOutcome()>>(
			[this, request]()
			{
			return this->deleteSecret(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SaeClient::DeployApplicationOutcome SaeClient::deployApplication(const DeployApplicationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeployApplicationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeployApplicationOutcome(DeployApplicationResult(outcome.result()));
	else
		return DeployApplicationOutcome(outcome.error());
}

void SaeClient::deployApplicationAsync(const DeployApplicationRequest& request, const DeployApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deployApplication(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SaeClient::DeployApplicationOutcomeCallable SaeClient::deployApplicationCallable(const DeployApplicationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeployApplicationOutcome()>>(
			[this, request]()
			{
			return this->deployApplication(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SaeClient::DescribeAppServiceDetailOutcome SaeClient::describeAppServiceDetail(const DescribeAppServiceDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAppServiceDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAppServiceDetailOutcome(DescribeAppServiceDetailResult(outcome.result()));
	else
		return DescribeAppServiceDetailOutcome(outcome.error());
}

void SaeClient::describeAppServiceDetailAsync(const DescribeAppServiceDetailRequest& request, const DescribeAppServiceDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAppServiceDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SaeClient::DescribeAppServiceDetailOutcomeCallable SaeClient::describeAppServiceDetailCallable(const DescribeAppServiceDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAppServiceDetailOutcome()>>(
			[this, request]()
			{
			return this->describeAppServiceDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SaeClient::DescribeApplicationConfigOutcome SaeClient::describeApplicationConfig(const DescribeApplicationConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeApplicationConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeApplicationConfigOutcome(DescribeApplicationConfigResult(outcome.result()));
	else
		return DescribeApplicationConfigOutcome(outcome.error());
}

void SaeClient::describeApplicationConfigAsync(const DescribeApplicationConfigRequest& request, const DescribeApplicationConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeApplicationConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SaeClient::DescribeApplicationConfigOutcomeCallable SaeClient::describeApplicationConfigCallable(const DescribeApplicationConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeApplicationConfigOutcome()>>(
			[this, request]()
			{
			return this->describeApplicationConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SaeClient::DescribeApplicationGroupsOutcome SaeClient::describeApplicationGroups(const DescribeApplicationGroupsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeApplicationGroupsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeApplicationGroupsOutcome(DescribeApplicationGroupsResult(outcome.result()));
	else
		return DescribeApplicationGroupsOutcome(outcome.error());
}

void SaeClient::describeApplicationGroupsAsync(const DescribeApplicationGroupsRequest& request, const DescribeApplicationGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeApplicationGroups(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SaeClient::DescribeApplicationGroupsOutcomeCallable SaeClient::describeApplicationGroupsCallable(const DescribeApplicationGroupsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeApplicationGroupsOutcome()>>(
			[this, request]()
			{
			return this->describeApplicationGroups(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SaeClient::DescribeApplicationImageOutcome SaeClient::describeApplicationImage(const DescribeApplicationImageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeApplicationImageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeApplicationImageOutcome(DescribeApplicationImageResult(outcome.result()));
	else
		return DescribeApplicationImageOutcome(outcome.error());
}

void SaeClient::describeApplicationImageAsync(const DescribeApplicationImageRequest& request, const DescribeApplicationImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeApplicationImage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SaeClient::DescribeApplicationImageOutcomeCallable SaeClient::describeApplicationImageCallable(const DescribeApplicationImageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeApplicationImageOutcome()>>(
			[this, request]()
			{
			return this->describeApplicationImage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SaeClient::DescribeApplicationInstancesOutcome SaeClient::describeApplicationInstances(const DescribeApplicationInstancesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeApplicationInstancesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeApplicationInstancesOutcome(DescribeApplicationInstancesResult(outcome.result()));
	else
		return DescribeApplicationInstancesOutcome(outcome.error());
}

void SaeClient::describeApplicationInstancesAsync(const DescribeApplicationInstancesRequest& request, const DescribeApplicationInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeApplicationInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SaeClient::DescribeApplicationInstancesOutcomeCallable SaeClient::describeApplicationInstancesCallable(const DescribeApplicationInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeApplicationInstancesOutcome()>>(
			[this, request]()
			{
			return this->describeApplicationInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SaeClient::DescribeApplicationScalingRuleOutcome SaeClient::describeApplicationScalingRule(const DescribeApplicationScalingRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeApplicationScalingRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeApplicationScalingRuleOutcome(DescribeApplicationScalingRuleResult(outcome.result()));
	else
		return DescribeApplicationScalingRuleOutcome(outcome.error());
}

void SaeClient::describeApplicationScalingRuleAsync(const DescribeApplicationScalingRuleRequest& request, const DescribeApplicationScalingRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeApplicationScalingRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SaeClient::DescribeApplicationScalingRuleOutcomeCallable SaeClient::describeApplicationScalingRuleCallable(const DescribeApplicationScalingRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeApplicationScalingRuleOutcome()>>(
			[this, request]()
			{
			return this->describeApplicationScalingRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SaeClient::DescribeApplicationScalingRulesOutcome SaeClient::describeApplicationScalingRules(const DescribeApplicationScalingRulesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeApplicationScalingRulesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeApplicationScalingRulesOutcome(DescribeApplicationScalingRulesResult(outcome.result()));
	else
		return DescribeApplicationScalingRulesOutcome(outcome.error());
}

void SaeClient::describeApplicationScalingRulesAsync(const DescribeApplicationScalingRulesRequest& request, const DescribeApplicationScalingRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeApplicationScalingRules(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SaeClient::DescribeApplicationScalingRulesOutcomeCallable SaeClient::describeApplicationScalingRulesCallable(const DescribeApplicationScalingRulesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeApplicationScalingRulesOutcome()>>(
			[this, request]()
			{
			return this->describeApplicationScalingRules(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SaeClient::DescribeApplicationSlbsOutcome SaeClient::describeApplicationSlbs(const DescribeApplicationSlbsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeApplicationSlbsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeApplicationSlbsOutcome(DescribeApplicationSlbsResult(outcome.result()));
	else
		return DescribeApplicationSlbsOutcome(outcome.error());
}

void SaeClient::describeApplicationSlbsAsync(const DescribeApplicationSlbsRequest& request, const DescribeApplicationSlbsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeApplicationSlbs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SaeClient::DescribeApplicationSlbsOutcomeCallable SaeClient::describeApplicationSlbsCallable(const DescribeApplicationSlbsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeApplicationSlbsOutcome()>>(
			[this, request]()
			{
			return this->describeApplicationSlbs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SaeClient::DescribeApplicationStatusOutcome SaeClient::describeApplicationStatus(const DescribeApplicationStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeApplicationStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeApplicationStatusOutcome(DescribeApplicationStatusResult(outcome.result()));
	else
		return DescribeApplicationStatusOutcome(outcome.error());
}

void SaeClient::describeApplicationStatusAsync(const DescribeApplicationStatusRequest& request, const DescribeApplicationStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeApplicationStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SaeClient::DescribeApplicationStatusOutcomeCallable SaeClient::describeApplicationStatusCallable(const DescribeApplicationStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeApplicationStatusOutcome()>>(
			[this, request]()
			{
			return this->describeApplicationStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SaeClient::DescribeChangeOrderOutcome SaeClient::describeChangeOrder(const DescribeChangeOrderRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeChangeOrderOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeChangeOrderOutcome(DescribeChangeOrderResult(outcome.result()));
	else
		return DescribeChangeOrderOutcome(outcome.error());
}

void SaeClient::describeChangeOrderAsync(const DescribeChangeOrderRequest& request, const DescribeChangeOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeChangeOrder(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SaeClient::DescribeChangeOrderOutcomeCallable SaeClient::describeChangeOrderCallable(const DescribeChangeOrderRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeChangeOrderOutcome()>>(
			[this, request]()
			{
			return this->describeChangeOrder(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SaeClient::DescribeComponentsOutcome SaeClient::describeComponents(const DescribeComponentsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeComponentsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeComponentsOutcome(DescribeComponentsResult(outcome.result()));
	else
		return DescribeComponentsOutcome(outcome.error());
}

void SaeClient::describeComponentsAsync(const DescribeComponentsRequest& request, const DescribeComponentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeComponents(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SaeClient::DescribeComponentsOutcomeCallable SaeClient::describeComponentsCallable(const DescribeComponentsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeComponentsOutcome()>>(
			[this, request]()
			{
			return this->describeComponents(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SaeClient::DescribeConfigMapOutcome SaeClient::describeConfigMap(const DescribeConfigMapRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeConfigMapOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeConfigMapOutcome(DescribeConfigMapResult(outcome.result()));
	else
		return DescribeConfigMapOutcome(outcome.error());
}

void SaeClient::describeConfigMapAsync(const DescribeConfigMapRequest& request, const DescribeConfigMapAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeConfigMap(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SaeClient::DescribeConfigMapOutcomeCallable SaeClient::describeConfigMapCallable(const DescribeConfigMapRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeConfigMapOutcome()>>(
			[this, request]()
			{
			return this->describeConfigMap(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SaeClient::DescribeConfigurationPriceOutcome SaeClient::describeConfigurationPrice(const DescribeConfigurationPriceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeConfigurationPriceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeConfigurationPriceOutcome(DescribeConfigurationPriceResult(outcome.result()));
	else
		return DescribeConfigurationPriceOutcome(outcome.error());
}

void SaeClient::describeConfigurationPriceAsync(const DescribeConfigurationPriceRequest& request, const DescribeConfigurationPriceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeConfigurationPrice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SaeClient::DescribeConfigurationPriceOutcomeCallable SaeClient::describeConfigurationPriceCallable(const DescribeConfigurationPriceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeConfigurationPriceOutcome()>>(
			[this, request]()
			{
			return this->describeConfigurationPrice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SaeClient::DescribeEdasContainersOutcome SaeClient::describeEdasContainers(const DescribeEdasContainersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeEdasContainersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeEdasContainersOutcome(DescribeEdasContainersResult(outcome.result()));
	else
		return DescribeEdasContainersOutcome(outcome.error());
}

void SaeClient::describeEdasContainersAsync(const DescribeEdasContainersRequest& request, const DescribeEdasContainersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeEdasContainers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SaeClient::DescribeEdasContainersOutcomeCallable SaeClient::describeEdasContainersCallable(const DescribeEdasContainersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeEdasContainersOutcome()>>(
			[this, request]()
			{
			return this->describeEdasContainers(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SaeClient::DescribeGreyTagRouteOutcome SaeClient::describeGreyTagRoute(const DescribeGreyTagRouteRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeGreyTagRouteOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeGreyTagRouteOutcome(DescribeGreyTagRouteResult(outcome.result()));
	else
		return DescribeGreyTagRouteOutcome(outcome.error());
}

void SaeClient::describeGreyTagRouteAsync(const DescribeGreyTagRouteRequest& request, const DescribeGreyTagRouteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeGreyTagRoute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SaeClient::DescribeGreyTagRouteOutcomeCallable SaeClient::describeGreyTagRouteCallable(const DescribeGreyTagRouteRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeGreyTagRouteOutcome()>>(
			[this, request]()
			{
			return this->describeGreyTagRoute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SaeClient::DescribeIngressOutcome SaeClient::describeIngress(const DescribeIngressRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeIngressOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeIngressOutcome(DescribeIngressResult(outcome.result()));
	else
		return DescribeIngressOutcome(outcome.error());
}

void SaeClient::describeIngressAsync(const DescribeIngressRequest& request, const DescribeIngressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeIngress(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SaeClient::DescribeIngressOutcomeCallable SaeClient::describeIngressCallable(const DescribeIngressRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeIngressOutcome()>>(
			[this, request]()
			{
			return this->describeIngress(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SaeClient::DescribeInstanceLogOutcome SaeClient::describeInstanceLog(const DescribeInstanceLogRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeInstanceLogOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeInstanceLogOutcome(DescribeInstanceLogResult(outcome.result()));
	else
		return DescribeInstanceLogOutcome(outcome.error());
}

void SaeClient::describeInstanceLogAsync(const DescribeInstanceLogRequest& request, const DescribeInstanceLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeInstanceLog(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SaeClient::DescribeInstanceLogOutcomeCallable SaeClient::describeInstanceLogCallable(const DescribeInstanceLogRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeInstanceLogOutcome()>>(
			[this, request]()
			{
			return this->describeInstanceLog(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SaeClient::DescribeInstanceSpecificationsOutcome SaeClient::describeInstanceSpecifications(const DescribeInstanceSpecificationsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeInstanceSpecificationsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeInstanceSpecificationsOutcome(DescribeInstanceSpecificationsResult(outcome.result()));
	else
		return DescribeInstanceSpecificationsOutcome(outcome.error());
}

void SaeClient::describeInstanceSpecificationsAsync(const DescribeInstanceSpecificationsRequest& request, const DescribeInstanceSpecificationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeInstanceSpecifications(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SaeClient::DescribeInstanceSpecificationsOutcomeCallable SaeClient::describeInstanceSpecificationsCallable(const DescribeInstanceSpecificationsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeInstanceSpecificationsOutcome()>>(
			[this, request]()
			{
			return this->describeInstanceSpecifications(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SaeClient::DescribeJobOutcome SaeClient::describeJob(const DescribeJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeJobOutcome(DescribeJobResult(outcome.result()));
	else
		return DescribeJobOutcome(outcome.error());
}

void SaeClient::describeJobAsync(const DescribeJobRequest& request, const DescribeJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SaeClient::DescribeJobOutcomeCallable SaeClient::describeJobCallable(const DescribeJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeJobOutcome()>>(
			[this, request]()
			{
			return this->describeJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SaeClient::DescribeJobHistoryOutcome SaeClient::describeJobHistory(const DescribeJobHistoryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeJobHistoryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeJobHistoryOutcome(DescribeJobHistoryResult(outcome.result()));
	else
		return DescribeJobHistoryOutcome(outcome.error());
}

void SaeClient::describeJobHistoryAsync(const DescribeJobHistoryRequest& request, const DescribeJobHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeJobHistory(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SaeClient::DescribeJobHistoryOutcomeCallable SaeClient::describeJobHistoryCallable(const DescribeJobHistoryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeJobHistoryOutcome()>>(
			[this, request]()
			{
			return this->describeJobHistory(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SaeClient::DescribeJobStatusOutcome SaeClient::describeJobStatus(const DescribeJobStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeJobStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeJobStatusOutcome(DescribeJobStatusResult(outcome.result()));
	else
		return DescribeJobStatusOutcome(outcome.error());
}

void SaeClient::describeJobStatusAsync(const DescribeJobStatusRequest& request, const DescribeJobStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeJobStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SaeClient::DescribeJobStatusOutcomeCallable SaeClient::describeJobStatusCallable(const DescribeJobStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeJobStatusOutcome()>>(
			[this, request]()
			{
			return this->describeJobStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SaeClient::DescribeNamespaceOutcome SaeClient::describeNamespace(const DescribeNamespaceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeNamespaceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeNamespaceOutcome(DescribeNamespaceResult(outcome.result()));
	else
		return DescribeNamespaceOutcome(outcome.error());
}

void SaeClient::describeNamespaceAsync(const DescribeNamespaceRequest& request, const DescribeNamespaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeNamespace(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SaeClient::DescribeNamespaceOutcomeCallable SaeClient::describeNamespaceCallable(const DescribeNamespaceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeNamespaceOutcome()>>(
			[this, request]()
			{
			return this->describeNamespace(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SaeClient::DescribeNamespaceListOutcome SaeClient::describeNamespaceList(const DescribeNamespaceListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeNamespaceListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeNamespaceListOutcome(DescribeNamespaceListResult(outcome.result()));
	else
		return DescribeNamespaceListOutcome(outcome.error());
}

void SaeClient::describeNamespaceListAsync(const DescribeNamespaceListRequest& request, const DescribeNamespaceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeNamespaceList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SaeClient::DescribeNamespaceListOutcomeCallable SaeClient::describeNamespaceListCallable(const DescribeNamespaceListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeNamespaceListOutcome()>>(
			[this, request]()
			{
			return this->describeNamespaceList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SaeClient::DescribeNamespaceResourcesOutcome SaeClient::describeNamespaceResources(const DescribeNamespaceResourcesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeNamespaceResourcesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeNamespaceResourcesOutcome(DescribeNamespaceResourcesResult(outcome.result()));
	else
		return DescribeNamespaceResourcesOutcome(outcome.error());
}

void SaeClient::describeNamespaceResourcesAsync(const DescribeNamespaceResourcesRequest& request, const DescribeNamespaceResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeNamespaceResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SaeClient::DescribeNamespaceResourcesOutcomeCallable SaeClient::describeNamespaceResourcesCallable(const DescribeNamespaceResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeNamespaceResourcesOutcome()>>(
			[this, request]()
			{
			return this->describeNamespaceResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SaeClient::DescribeNamespacesOutcome SaeClient::describeNamespaces(const DescribeNamespacesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeNamespacesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeNamespacesOutcome(DescribeNamespacesResult(outcome.result()));
	else
		return DescribeNamespacesOutcome(outcome.error());
}

void SaeClient::describeNamespacesAsync(const DescribeNamespacesRequest& request, const DescribeNamespacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeNamespaces(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SaeClient::DescribeNamespacesOutcomeCallable SaeClient::describeNamespacesCallable(const DescribeNamespacesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeNamespacesOutcome()>>(
			[this, request]()
			{
			return this->describeNamespaces(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SaeClient::DescribePipelineOutcome SaeClient::describePipeline(const DescribePipelineRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribePipelineOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribePipelineOutcome(DescribePipelineResult(outcome.result()));
	else
		return DescribePipelineOutcome(outcome.error());
}

void SaeClient::describePipelineAsync(const DescribePipelineRequest& request, const DescribePipelineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describePipeline(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SaeClient::DescribePipelineOutcomeCallable SaeClient::describePipelineCallable(const DescribePipelineRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribePipelineOutcome()>>(
			[this, request]()
			{
			return this->describePipeline(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SaeClient::DescribeRegionsOutcome SaeClient::describeRegions(const DescribeRegionsRequest &request) const
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

void SaeClient::describeRegionsAsync(const DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRegions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SaeClient::DescribeRegionsOutcomeCallable SaeClient::describeRegionsCallable(const DescribeRegionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRegionsOutcome()>>(
			[this, request]()
			{
			return this->describeRegions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SaeClient::DescribeSecretOutcome SaeClient::describeSecret(const DescribeSecretRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSecretOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSecretOutcome(DescribeSecretResult(outcome.result()));
	else
		return DescribeSecretOutcome(outcome.error());
}

void SaeClient::describeSecretAsync(const DescribeSecretRequest& request, const DescribeSecretAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSecret(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SaeClient::DescribeSecretOutcomeCallable SaeClient::describeSecretCallable(const DescribeSecretRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSecretOutcome()>>(
			[this, request]()
			{
			return this->describeSecret(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SaeClient::DisableApplicationScalingRuleOutcome SaeClient::disableApplicationScalingRule(const DisableApplicationScalingRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DisableApplicationScalingRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DisableApplicationScalingRuleOutcome(DisableApplicationScalingRuleResult(outcome.result()));
	else
		return DisableApplicationScalingRuleOutcome(outcome.error());
}

void SaeClient::disableApplicationScalingRuleAsync(const DisableApplicationScalingRuleRequest& request, const DisableApplicationScalingRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, disableApplicationScalingRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SaeClient::DisableApplicationScalingRuleOutcomeCallable SaeClient::disableApplicationScalingRuleCallable(const DisableApplicationScalingRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DisableApplicationScalingRuleOutcome()>>(
			[this, request]()
			{
			return this->disableApplicationScalingRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SaeClient::EnableApplicationScalingRuleOutcome SaeClient::enableApplicationScalingRule(const EnableApplicationScalingRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EnableApplicationScalingRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EnableApplicationScalingRuleOutcome(EnableApplicationScalingRuleResult(outcome.result()));
	else
		return EnableApplicationScalingRuleOutcome(outcome.error());
}

void SaeClient::enableApplicationScalingRuleAsync(const EnableApplicationScalingRuleRequest& request, const EnableApplicationScalingRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, enableApplicationScalingRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SaeClient::EnableApplicationScalingRuleOutcomeCallable SaeClient::enableApplicationScalingRuleCallable(const EnableApplicationScalingRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EnableApplicationScalingRuleOutcome()>>(
			[this, request]()
			{
			return this->enableApplicationScalingRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SaeClient::ExecJobOutcome SaeClient::execJob(const ExecJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ExecJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ExecJobOutcome(ExecJobResult(outcome.result()));
	else
		return ExecJobOutcome(outcome.error());
}

void SaeClient::execJobAsync(const ExecJobRequest& request, const ExecJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, execJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SaeClient::ExecJobOutcomeCallable SaeClient::execJobCallable(const ExecJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ExecJobOutcome()>>(
			[this, request]()
			{
			return this->execJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SaeClient::GetArmsTopNMetricOutcome SaeClient::getArmsTopNMetric(const GetArmsTopNMetricRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetArmsTopNMetricOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetArmsTopNMetricOutcome(GetArmsTopNMetricResult(outcome.result()));
	else
		return GetArmsTopNMetricOutcome(outcome.error());
}

void SaeClient::getArmsTopNMetricAsync(const GetArmsTopNMetricRequest& request, const GetArmsTopNMetricAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getArmsTopNMetric(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SaeClient::GetArmsTopNMetricOutcomeCallable SaeClient::getArmsTopNMetricCallable(const GetArmsTopNMetricRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetArmsTopNMetricOutcome()>>(
			[this, request]()
			{
			return this->getArmsTopNMetric(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SaeClient::GetAvailabilityMetricOutcome SaeClient::getAvailabilityMetric(const GetAvailabilityMetricRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetAvailabilityMetricOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetAvailabilityMetricOutcome(GetAvailabilityMetricResult(outcome.result()));
	else
		return GetAvailabilityMetricOutcome(outcome.error());
}

void SaeClient::getAvailabilityMetricAsync(const GetAvailabilityMetricRequest& request, const GetAvailabilityMetricAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getAvailabilityMetric(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SaeClient::GetAvailabilityMetricOutcomeCallable SaeClient::getAvailabilityMetricCallable(const GetAvailabilityMetricRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetAvailabilityMetricOutcome()>>(
			[this, request]()
			{
			return this->getAvailabilityMetric(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SaeClient::GetChangeOrderMetricOutcome SaeClient::getChangeOrderMetric(const GetChangeOrderMetricRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetChangeOrderMetricOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetChangeOrderMetricOutcome(GetChangeOrderMetricResult(outcome.result()));
	else
		return GetChangeOrderMetricOutcome(outcome.error());
}

void SaeClient::getChangeOrderMetricAsync(const GetChangeOrderMetricRequest& request, const GetChangeOrderMetricAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getChangeOrderMetric(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SaeClient::GetChangeOrderMetricOutcomeCallable SaeClient::getChangeOrderMetricCallable(const GetChangeOrderMetricRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetChangeOrderMetricOutcome()>>(
			[this, request]()
			{
			return this->getChangeOrderMetric(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SaeClient::GetScaleAppMetricOutcome SaeClient::getScaleAppMetric(const GetScaleAppMetricRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetScaleAppMetricOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetScaleAppMetricOutcome(GetScaleAppMetricResult(outcome.result()));
	else
		return GetScaleAppMetricOutcome(outcome.error());
}

void SaeClient::getScaleAppMetricAsync(const GetScaleAppMetricRequest& request, const GetScaleAppMetricAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getScaleAppMetric(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SaeClient::GetScaleAppMetricOutcomeCallable SaeClient::getScaleAppMetricCallable(const GetScaleAppMetricRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetScaleAppMetricOutcome()>>(
			[this, request]()
			{
			return this->getScaleAppMetric(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SaeClient::GetWarningEventMetricOutcome SaeClient::getWarningEventMetric(const GetWarningEventMetricRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetWarningEventMetricOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetWarningEventMetricOutcome(GetWarningEventMetricResult(outcome.result()));
	else
		return GetWarningEventMetricOutcome(outcome.error());
}

void SaeClient::getWarningEventMetricAsync(const GetWarningEventMetricRequest& request, const GetWarningEventMetricAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getWarningEventMetric(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SaeClient::GetWarningEventMetricOutcomeCallable SaeClient::getWarningEventMetricCallable(const GetWarningEventMetricRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetWarningEventMetricOutcome()>>(
			[this, request]()
			{
			return this->getWarningEventMetric(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SaeClient::ListAppEventsOutcome SaeClient::listAppEvents(const ListAppEventsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAppEventsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAppEventsOutcome(ListAppEventsResult(outcome.result()));
	else
		return ListAppEventsOutcome(outcome.error());
}

void SaeClient::listAppEventsAsync(const ListAppEventsRequest& request, const ListAppEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAppEvents(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SaeClient::ListAppEventsOutcomeCallable SaeClient::listAppEventsCallable(const ListAppEventsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAppEventsOutcome()>>(
			[this, request]()
			{
			return this->listAppEvents(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SaeClient::ListAppServicesPageOutcome SaeClient::listAppServicesPage(const ListAppServicesPageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAppServicesPageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAppServicesPageOutcome(ListAppServicesPageResult(outcome.result()));
	else
		return ListAppServicesPageOutcome(outcome.error());
}

void SaeClient::listAppServicesPageAsync(const ListAppServicesPageRequest& request, const ListAppServicesPageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAppServicesPage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SaeClient::ListAppServicesPageOutcomeCallable SaeClient::listAppServicesPageCallable(const ListAppServicesPageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAppServicesPageOutcome()>>(
			[this, request]()
			{
			return this->listAppServicesPage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SaeClient::ListAppVersionsOutcome SaeClient::listAppVersions(const ListAppVersionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAppVersionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAppVersionsOutcome(ListAppVersionsResult(outcome.result()));
	else
		return ListAppVersionsOutcome(outcome.error());
}

void SaeClient::listAppVersionsAsync(const ListAppVersionsRequest& request, const ListAppVersionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAppVersions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SaeClient::ListAppVersionsOutcomeCallable SaeClient::listAppVersionsCallable(const ListAppVersionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAppVersionsOutcome()>>(
			[this, request]()
			{
			return this->listAppVersions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SaeClient::ListApplicationsOutcome SaeClient::listApplications(const ListApplicationsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListApplicationsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListApplicationsOutcome(ListApplicationsResult(outcome.result()));
	else
		return ListApplicationsOutcome(outcome.error());
}

void SaeClient::listApplicationsAsync(const ListApplicationsRequest& request, const ListApplicationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listApplications(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SaeClient::ListApplicationsOutcomeCallable SaeClient::listApplicationsCallable(const ListApplicationsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListApplicationsOutcome()>>(
			[this, request]()
			{
			return this->listApplications(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SaeClient::ListChangeOrdersOutcome SaeClient::listChangeOrders(const ListChangeOrdersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListChangeOrdersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListChangeOrdersOutcome(ListChangeOrdersResult(outcome.result()));
	else
		return ListChangeOrdersOutcome(outcome.error());
}

void SaeClient::listChangeOrdersAsync(const ListChangeOrdersRequest& request, const ListChangeOrdersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listChangeOrders(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SaeClient::ListChangeOrdersOutcomeCallable SaeClient::listChangeOrdersCallable(const ListChangeOrdersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListChangeOrdersOutcome()>>(
			[this, request]()
			{
			return this->listChangeOrders(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SaeClient::ListConsumedServicesOutcome SaeClient::listConsumedServices(const ListConsumedServicesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListConsumedServicesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListConsumedServicesOutcome(ListConsumedServicesResult(outcome.result()));
	else
		return ListConsumedServicesOutcome(outcome.error());
}

void SaeClient::listConsumedServicesAsync(const ListConsumedServicesRequest& request, const ListConsumedServicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listConsumedServices(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SaeClient::ListConsumedServicesOutcomeCallable SaeClient::listConsumedServicesCallable(const ListConsumedServicesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListConsumedServicesOutcome()>>(
			[this, request]()
			{
			return this->listConsumedServices(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SaeClient::ListGreyTagRouteOutcome SaeClient::listGreyTagRoute(const ListGreyTagRouteRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListGreyTagRouteOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListGreyTagRouteOutcome(ListGreyTagRouteResult(outcome.result()));
	else
		return ListGreyTagRouteOutcome(outcome.error());
}

void SaeClient::listGreyTagRouteAsync(const ListGreyTagRouteRequest& request, const ListGreyTagRouteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listGreyTagRoute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SaeClient::ListGreyTagRouteOutcomeCallable SaeClient::listGreyTagRouteCallable(const ListGreyTagRouteRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListGreyTagRouteOutcome()>>(
			[this, request]()
			{
			return this->listGreyTagRoute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SaeClient::ListIngressesOutcome SaeClient::listIngresses(const ListIngressesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListIngressesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListIngressesOutcome(ListIngressesResult(outcome.result()));
	else
		return ListIngressesOutcome(outcome.error());
}

void SaeClient::listIngressesAsync(const ListIngressesRequest& request, const ListIngressesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listIngresses(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SaeClient::ListIngressesOutcomeCallable SaeClient::listIngressesCallable(const ListIngressesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListIngressesOutcome()>>(
			[this, request]()
			{
			return this->listIngresses(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SaeClient::ListJobsOutcome SaeClient::listJobs(const ListJobsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListJobsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListJobsOutcome(ListJobsResult(outcome.result()));
	else
		return ListJobsOutcome(outcome.error());
}

void SaeClient::listJobsAsync(const ListJobsRequest& request, const ListJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listJobs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SaeClient::ListJobsOutcomeCallable SaeClient::listJobsCallable(const ListJobsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListJobsOutcome()>>(
			[this, request]()
			{
			return this->listJobs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SaeClient::ListLogConfigsOutcome SaeClient::listLogConfigs(const ListLogConfigsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListLogConfigsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListLogConfigsOutcome(ListLogConfigsResult(outcome.result()));
	else
		return ListLogConfigsOutcome(outcome.error());
}

void SaeClient::listLogConfigsAsync(const ListLogConfigsRequest& request, const ListLogConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listLogConfigs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SaeClient::ListLogConfigsOutcomeCallable SaeClient::listLogConfigsCallable(const ListLogConfigsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListLogConfigsOutcome()>>(
			[this, request]()
			{
			return this->listLogConfigs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SaeClient::ListNamespaceChangeOrdersOutcome SaeClient::listNamespaceChangeOrders(const ListNamespaceChangeOrdersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListNamespaceChangeOrdersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListNamespaceChangeOrdersOutcome(ListNamespaceChangeOrdersResult(outcome.result()));
	else
		return ListNamespaceChangeOrdersOutcome(outcome.error());
}

void SaeClient::listNamespaceChangeOrdersAsync(const ListNamespaceChangeOrdersRequest& request, const ListNamespaceChangeOrdersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listNamespaceChangeOrders(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SaeClient::ListNamespaceChangeOrdersOutcomeCallable SaeClient::listNamespaceChangeOrdersCallable(const ListNamespaceChangeOrdersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListNamespaceChangeOrdersOutcome()>>(
			[this, request]()
			{
			return this->listNamespaceChangeOrders(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SaeClient::ListNamespacedConfigMapsOutcome SaeClient::listNamespacedConfigMaps(const ListNamespacedConfigMapsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListNamespacedConfigMapsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListNamespacedConfigMapsOutcome(ListNamespacedConfigMapsResult(outcome.result()));
	else
		return ListNamespacedConfigMapsOutcome(outcome.error());
}

void SaeClient::listNamespacedConfigMapsAsync(const ListNamespacedConfigMapsRequest& request, const ListNamespacedConfigMapsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listNamespacedConfigMaps(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SaeClient::ListNamespacedConfigMapsOutcomeCallable SaeClient::listNamespacedConfigMapsCallable(const ListNamespacedConfigMapsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListNamespacedConfigMapsOutcome()>>(
			[this, request]()
			{
			return this->listNamespacedConfigMaps(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SaeClient::ListPublishedServicesOutcome SaeClient::listPublishedServices(const ListPublishedServicesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListPublishedServicesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListPublishedServicesOutcome(ListPublishedServicesResult(outcome.result()));
	else
		return ListPublishedServicesOutcome(outcome.error());
}

void SaeClient::listPublishedServicesAsync(const ListPublishedServicesRequest& request, const ListPublishedServicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listPublishedServices(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SaeClient::ListPublishedServicesOutcomeCallable SaeClient::listPublishedServicesCallable(const ListPublishedServicesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListPublishedServicesOutcome()>>(
			[this, request]()
			{
			return this->listPublishedServices(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SaeClient::ListSecretsOutcome SaeClient::listSecrets(const ListSecretsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListSecretsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListSecretsOutcome(ListSecretsResult(outcome.result()));
	else
		return ListSecretsOutcome(outcome.error());
}

void SaeClient::listSecretsAsync(const ListSecretsRequest& request, const ListSecretsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listSecrets(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SaeClient::ListSecretsOutcomeCallable SaeClient::listSecretsCallable(const ListSecretsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListSecretsOutcome()>>(
			[this, request]()
			{
			return this->listSecrets(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SaeClient::ListTagResourcesOutcome SaeClient::listTagResources(const ListTagResourcesRequest &request) const
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

void SaeClient::listTagResourcesAsync(const ListTagResourcesRequest& request, const ListTagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SaeClient::ListTagResourcesOutcomeCallable SaeClient::listTagResourcesCallable(const ListTagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTagResourcesOutcome()>>(
			[this, request]()
			{
			return this->listTagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SaeClient::OpenSaeServiceOutcome SaeClient::openSaeService(const OpenSaeServiceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OpenSaeServiceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OpenSaeServiceOutcome(OpenSaeServiceResult(outcome.result()));
	else
		return OpenSaeServiceOutcome(outcome.error());
}

void SaeClient::openSaeServiceAsync(const OpenSaeServiceRequest& request, const OpenSaeServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, openSaeService(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SaeClient::OpenSaeServiceOutcomeCallable SaeClient::openSaeServiceCallable(const OpenSaeServiceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OpenSaeServiceOutcome()>>(
			[this, request]()
			{
			return this->openSaeService(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SaeClient::QueryResourceStaticsOutcome SaeClient::queryResourceStatics(const QueryResourceStaticsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryResourceStaticsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryResourceStaticsOutcome(QueryResourceStaticsResult(outcome.result()));
	else
		return QueryResourceStaticsOutcome(outcome.error());
}

void SaeClient::queryResourceStaticsAsync(const QueryResourceStaticsRequest& request, const QueryResourceStaticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryResourceStatics(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SaeClient::QueryResourceStaticsOutcomeCallable SaeClient::queryResourceStaticsCallable(const QueryResourceStaticsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryResourceStaticsOutcome()>>(
			[this, request]()
			{
			return this->queryResourceStatics(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SaeClient::ReduceApplicationCapacityByInstanceIdsOutcome SaeClient::reduceApplicationCapacityByInstanceIds(const ReduceApplicationCapacityByInstanceIdsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ReduceApplicationCapacityByInstanceIdsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ReduceApplicationCapacityByInstanceIdsOutcome(ReduceApplicationCapacityByInstanceIdsResult(outcome.result()));
	else
		return ReduceApplicationCapacityByInstanceIdsOutcome(outcome.error());
}

void SaeClient::reduceApplicationCapacityByInstanceIdsAsync(const ReduceApplicationCapacityByInstanceIdsRequest& request, const ReduceApplicationCapacityByInstanceIdsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, reduceApplicationCapacityByInstanceIds(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SaeClient::ReduceApplicationCapacityByInstanceIdsOutcomeCallable SaeClient::reduceApplicationCapacityByInstanceIdsCallable(const ReduceApplicationCapacityByInstanceIdsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ReduceApplicationCapacityByInstanceIdsOutcome()>>(
			[this, request]()
			{
			return this->reduceApplicationCapacityByInstanceIds(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SaeClient::RescaleApplicationOutcome SaeClient::rescaleApplication(const RescaleApplicationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RescaleApplicationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RescaleApplicationOutcome(RescaleApplicationResult(outcome.result()));
	else
		return RescaleApplicationOutcome(outcome.error());
}

void SaeClient::rescaleApplicationAsync(const RescaleApplicationRequest& request, const RescaleApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, rescaleApplication(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SaeClient::RescaleApplicationOutcomeCallable SaeClient::rescaleApplicationCallable(const RescaleApplicationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RescaleApplicationOutcome()>>(
			[this, request]()
			{
			return this->rescaleApplication(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SaeClient::RescaleApplicationVerticallyOutcome SaeClient::rescaleApplicationVertically(const RescaleApplicationVerticallyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RescaleApplicationVerticallyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RescaleApplicationVerticallyOutcome(RescaleApplicationVerticallyResult(outcome.result()));
	else
		return RescaleApplicationVerticallyOutcome(outcome.error());
}

void SaeClient::rescaleApplicationVerticallyAsync(const RescaleApplicationVerticallyRequest& request, const RescaleApplicationVerticallyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, rescaleApplicationVertically(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SaeClient::RescaleApplicationVerticallyOutcomeCallable SaeClient::rescaleApplicationVerticallyCallable(const RescaleApplicationVerticallyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RescaleApplicationVerticallyOutcome()>>(
			[this, request]()
			{
			return this->rescaleApplicationVertically(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SaeClient::RestartApplicationOutcome SaeClient::restartApplication(const RestartApplicationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RestartApplicationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RestartApplicationOutcome(RestartApplicationResult(outcome.result()));
	else
		return RestartApplicationOutcome(outcome.error());
}

void SaeClient::restartApplicationAsync(const RestartApplicationRequest& request, const RestartApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, restartApplication(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SaeClient::RestartApplicationOutcomeCallable SaeClient::restartApplicationCallable(const RestartApplicationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RestartApplicationOutcome()>>(
			[this, request]()
			{
			return this->restartApplication(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SaeClient::RestartInstancesOutcome SaeClient::restartInstances(const RestartInstancesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RestartInstancesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RestartInstancesOutcome(RestartInstancesResult(outcome.result()));
	else
		return RestartInstancesOutcome(outcome.error());
}

void SaeClient::restartInstancesAsync(const RestartInstancesRequest& request, const RestartInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, restartInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SaeClient::RestartInstancesOutcomeCallable SaeClient::restartInstancesCallable(const RestartInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RestartInstancesOutcome()>>(
			[this, request]()
			{
			return this->restartInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SaeClient::RollbackApplicationOutcome SaeClient::rollbackApplication(const RollbackApplicationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RollbackApplicationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RollbackApplicationOutcome(RollbackApplicationResult(outcome.result()));
	else
		return RollbackApplicationOutcome(outcome.error());
}

void SaeClient::rollbackApplicationAsync(const RollbackApplicationRequest& request, const RollbackApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, rollbackApplication(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SaeClient::RollbackApplicationOutcomeCallable SaeClient::rollbackApplicationCallable(const RollbackApplicationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RollbackApplicationOutcome()>>(
			[this, request]()
			{
			return this->rollbackApplication(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SaeClient::StartApplicationOutcome SaeClient::startApplication(const StartApplicationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StartApplicationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StartApplicationOutcome(StartApplicationResult(outcome.result()));
	else
		return StartApplicationOutcome(outcome.error());
}

void SaeClient::startApplicationAsync(const StartApplicationRequest& request, const StartApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, startApplication(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SaeClient::StartApplicationOutcomeCallable SaeClient::startApplicationCallable(const StartApplicationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StartApplicationOutcome()>>(
			[this, request]()
			{
			return this->startApplication(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SaeClient::StopApplicationOutcome SaeClient::stopApplication(const StopApplicationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StopApplicationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StopApplicationOutcome(StopApplicationResult(outcome.result()));
	else
		return StopApplicationOutcome(outcome.error());
}

void SaeClient::stopApplicationAsync(const StopApplicationRequest& request, const StopApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, stopApplication(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SaeClient::StopApplicationOutcomeCallable SaeClient::stopApplicationCallable(const StopApplicationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StopApplicationOutcome()>>(
			[this, request]()
			{
			return this->stopApplication(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SaeClient::SuspendJobOutcome SaeClient::suspendJob(const SuspendJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SuspendJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SuspendJobOutcome(SuspendJobResult(outcome.result()));
	else
		return SuspendJobOutcome(outcome.error());
}

void SaeClient::suspendJobAsync(const SuspendJobRequest& request, const SuspendJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, suspendJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SaeClient::SuspendJobOutcomeCallable SaeClient::suspendJobCallable(const SuspendJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SuspendJobOutcome()>>(
			[this, request]()
			{
			return this->suspendJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SaeClient::TagResourcesOutcome SaeClient::tagResources(const TagResourcesRequest &request) const
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

void SaeClient::tagResourcesAsync(const TagResourcesRequest& request, const TagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, tagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SaeClient::TagResourcesOutcomeCallable SaeClient::tagResourcesCallable(const TagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TagResourcesOutcome()>>(
			[this, request]()
			{
			return this->tagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SaeClient::UnbindSlbOutcome SaeClient::unbindSlb(const UnbindSlbRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UnbindSlbOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UnbindSlbOutcome(UnbindSlbResult(outcome.result()));
	else
		return UnbindSlbOutcome(outcome.error());
}

void SaeClient::unbindSlbAsync(const UnbindSlbRequest& request, const UnbindSlbAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, unbindSlb(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SaeClient::UnbindSlbOutcomeCallable SaeClient::unbindSlbCallable(const UnbindSlbRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UnbindSlbOutcome()>>(
			[this, request]()
			{
			return this->unbindSlb(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SaeClient::UntagResourcesOutcome SaeClient::untagResources(const UntagResourcesRequest &request) const
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

void SaeClient::untagResourcesAsync(const UntagResourcesRequest& request, const UntagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, untagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SaeClient::UntagResourcesOutcomeCallable SaeClient::untagResourcesCallable(const UntagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UntagResourcesOutcome()>>(
			[this, request]()
			{
			return this->untagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SaeClient::UpdateAppSecurityGroupOutcome SaeClient::updateAppSecurityGroup(const UpdateAppSecurityGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateAppSecurityGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateAppSecurityGroupOutcome(UpdateAppSecurityGroupResult(outcome.result()));
	else
		return UpdateAppSecurityGroupOutcome(outcome.error());
}

void SaeClient::updateAppSecurityGroupAsync(const UpdateAppSecurityGroupRequest& request, const UpdateAppSecurityGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateAppSecurityGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SaeClient::UpdateAppSecurityGroupOutcomeCallable SaeClient::updateAppSecurityGroupCallable(const UpdateAppSecurityGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateAppSecurityGroupOutcome()>>(
			[this, request]()
			{
			return this->updateAppSecurityGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SaeClient::UpdateApplicationDescriptionOutcome SaeClient::updateApplicationDescription(const UpdateApplicationDescriptionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateApplicationDescriptionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateApplicationDescriptionOutcome(UpdateApplicationDescriptionResult(outcome.result()));
	else
		return UpdateApplicationDescriptionOutcome(outcome.error());
}

void SaeClient::updateApplicationDescriptionAsync(const UpdateApplicationDescriptionRequest& request, const UpdateApplicationDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateApplicationDescription(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SaeClient::UpdateApplicationDescriptionOutcomeCallable SaeClient::updateApplicationDescriptionCallable(const UpdateApplicationDescriptionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateApplicationDescriptionOutcome()>>(
			[this, request]()
			{
			return this->updateApplicationDescription(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SaeClient::UpdateApplicationScalingRuleOutcome SaeClient::updateApplicationScalingRule(const UpdateApplicationScalingRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateApplicationScalingRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateApplicationScalingRuleOutcome(UpdateApplicationScalingRuleResult(outcome.result()));
	else
		return UpdateApplicationScalingRuleOutcome(outcome.error());
}

void SaeClient::updateApplicationScalingRuleAsync(const UpdateApplicationScalingRuleRequest& request, const UpdateApplicationScalingRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateApplicationScalingRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SaeClient::UpdateApplicationScalingRuleOutcomeCallable SaeClient::updateApplicationScalingRuleCallable(const UpdateApplicationScalingRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateApplicationScalingRuleOutcome()>>(
			[this, request]()
			{
			return this->updateApplicationScalingRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SaeClient::UpdateApplicationVswitchesOutcome SaeClient::updateApplicationVswitches(const UpdateApplicationVswitchesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateApplicationVswitchesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateApplicationVswitchesOutcome(UpdateApplicationVswitchesResult(outcome.result()));
	else
		return UpdateApplicationVswitchesOutcome(outcome.error());
}

void SaeClient::updateApplicationVswitchesAsync(const UpdateApplicationVswitchesRequest& request, const UpdateApplicationVswitchesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateApplicationVswitches(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SaeClient::UpdateApplicationVswitchesOutcomeCallable SaeClient::updateApplicationVswitchesCallable(const UpdateApplicationVswitchesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateApplicationVswitchesOutcome()>>(
			[this, request]()
			{
			return this->updateApplicationVswitches(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SaeClient::UpdateConfigMapOutcome SaeClient::updateConfigMap(const UpdateConfigMapRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateConfigMapOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateConfigMapOutcome(UpdateConfigMapResult(outcome.result()));
	else
		return UpdateConfigMapOutcome(outcome.error());
}

void SaeClient::updateConfigMapAsync(const UpdateConfigMapRequest& request, const UpdateConfigMapAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateConfigMap(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SaeClient::UpdateConfigMapOutcomeCallable SaeClient::updateConfigMapCallable(const UpdateConfigMapRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateConfigMapOutcome()>>(
			[this, request]()
			{
			return this->updateConfigMap(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SaeClient::UpdateGreyTagRouteOutcome SaeClient::updateGreyTagRoute(const UpdateGreyTagRouteRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateGreyTagRouteOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateGreyTagRouteOutcome(UpdateGreyTagRouteResult(outcome.result()));
	else
		return UpdateGreyTagRouteOutcome(outcome.error());
}

void SaeClient::updateGreyTagRouteAsync(const UpdateGreyTagRouteRequest& request, const UpdateGreyTagRouteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateGreyTagRoute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SaeClient::UpdateGreyTagRouteOutcomeCallable SaeClient::updateGreyTagRouteCallable(const UpdateGreyTagRouteRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateGreyTagRouteOutcome()>>(
			[this, request]()
			{
			return this->updateGreyTagRoute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SaeClient::UpdateIngressOutcome SaeClient::updateIngress(const UpdateIngressRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateIngressOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateIngressOutcome(UpdateIngressResult(outcome.result()));
	else
		return UpdateIngressOutcome(outcome.error());
}

void SaeClient::updateIngressAsync(const UpdateIngressRequest& request, const UpdateIngressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateIngress(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SaeClient::UpdateIngressOutcomeCallable SaeClient::updateIngressCallable(const UpdateIngressRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateIngressOutcome()>>(
			[this, request]()
			{
			return this->updateIngress(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SaeClient::UpdateJobOutcome SaeClient::updateJob(const UpdateJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateJobOutcome(UpdateJobResult(outcome.result()));
	else
		return UpdateJobOutcome(outcome.error());
}

void SaeClient::updateJobAsync(const UpdateJobRequest& request, const UpdateJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SaeClient::UpdateJobOutcomeCallable SaeClient::updateJobCallable(const UpdateJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateJobOutcome()>>(
			[this, request]()
			{
			return this->updateJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SaeClient::UpdateNamespaceOutcome SaeClient::updateNamespace(const UpdateNamespaceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateNamespaceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateNamespaceOutcome(UpdateNamespaceResult(outcome.result()));
	else
		return UpdateNamespaceOutcome(outcome.error());
}

void SaeClient::updateNamespaceAsync(const UpdateNamespaceRequest& request, const UpdateNamespaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateNamespace(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SaeClient::UpdateNamespaceOutcomeCallable SaeClient::updateNamespaceCallable(const UpdateNamespaceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateNamespaceOutcome()>>(
			[this, request]()
			{
			return this->updateNamespace(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SaeClient::UpdateNamespaceVpcOutcome SaeClient::updateNamespaceVpc(const UpdateNamespaceVpcRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateNamespaceVpcOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateNamespaceVpcOutcome(UpdateNamespaceVpcResult(outcome.result()));
	else
		return UpdateNamespaceVpcOutcome(outcome.error());
}

void SaeClient::updateNamespaceVpcAsync(const UpdateNamespaceVpcRequest& request, const UpdateNamespaceVpcAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateNamespaceVpc(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SaeClient::UpdateNamespaceVpcOutcomeCallable SaeClient::updateNamespaceVpcCallable(const UpdateNamespaceVpcRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateNamespaceVpcOutcome()>>(
			[this, request]()
			{
			return this->updateNamespaceVpc(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SaeClient::UpdateSecretOutcome SaeClient::updateSecret(const UpdateSecretRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateSecretOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateSecretOutcome(UpdateSecretResult(outcome.result()));
	else
		return UpdateSecretOutcome(outcome.error());
}

void SaeClient::updateSecretAsync(const UpdateSecretRequest& request, const UpdateSecretAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateSecret(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SaeClient::UpdateSecretOutcomeCallable SaeClient::updateSecretCallable(const UpdateSecretRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateSecretOutcome()>>(
			[this, request]()
			{
			return this->updateSecret(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

