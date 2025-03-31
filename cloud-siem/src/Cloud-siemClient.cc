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

#include <alibabacloud/cloud-siem/Cloud_siemClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Cloud_siem;
using namespace AlibabaCloud::Cloud_siem::Model;

namespace
{
	const std::string SERVICE_NAME = "cloud-siem";
}

Cloud_siemClient::Cloud_siemClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "cloud-siem");
}

Cloud_siemClient::Cloud_siemClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "cloud-siem");
}

Cloud_siemClient::Cloud_siemClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "cloud-siem");
}

Cloud_siemClient::~Cloud_siemClient()
{}

Cloud_siemClient::AddDataSourceOutcome Cloud_siemClient::addDataSource(const AddDataSourceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddDataSourceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddDataSourceOutcome(AddDataSourceResult(outcome.result()));
	else
		return AddDataSourceOutcome(outcome.error());
}

void Cloud_siemClient::addDataSourceAsync(const AddDataSourceRequest& request, const AddDataSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addDataSource(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Cloud_siemClient::AddDataSourceOutcomeCallable Cloud_siemClient::addDataSourceCallable(const AddDataSourceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddDataSourceOutcome()>>(
			[this, request]()
			{
			return this->addDataSource(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Cloud_siemClient::AddDataSourceLogOutcome Cloud_siemClient::addDataSourceLog(const AddDataSourceLogRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddDataSourceLogOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddDataSourceLogOutcome(AddDataSourceLogResult(outcome.result()));
	else
		return AddDataSourceLogOutcome(outcome.error());
}

void Cloud_siemClient::addDataSourceLogAsync(const AddDataSourceLogRequest& request, const AddDataSourceLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addDataSourceLog(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Cloud_siemClient::AddDataSourceLogOutcomeCallable Cloud_siemClient::addDataSourceLogCallable(const AddDataSourceLogRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddDataSourceLogOutcome()>>(
			[this, request]()
			{
			return this->addDataSourceLog(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Cloud_siemClient::AddUserSourceLogConfigOutcome Cloud_siemClient::addUserSourceLogConfig(const AddUserSourceLogConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddUserSourceLogConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddUserSourceLogConfigOutcome(AddUserSourceLogConfigResult(outcome.result()));
	else
		return AddUserSourceLogConfigOutcome(outcome.error());
}

void Cloud_siemClient::addUserSourceLogConfigAsync(const AddUserSourceLogConfigRequest& request, const AddUserSourceLogConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addUserSourceLogConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Cloud_siemClient::AddUserSourceLogConfigOutcomeCallable Cloud_siemClient::addUserSourceLogConfigCallable(const AddUserSourceLogConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddUserSourceLogConfigOutcome()>>(
			[this, request]()
			{
			return this->addUserSourceLogConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Cloud_siemClient::BindAccountOutcome Cloud_siemClient::bindAccount(const BindAccountRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BindAccountOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BindAccountOutcome(BindAccountResult(outcome.result()));
	else
		return BindAccountOutcome(outcome.error());
}

void Cloud_siemClient::bindAccountAsync(const BindAccountRequest& request, const BindAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, bindAccount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Cloud_siemClient::BindAccountOutcomeCallable Cloud_siemClient::bindAccountCallable(const BindAccountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BindAccountOutcome()>>(
			[this, request]()
			{
			return this->bindAccount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Cloud_siemClient::CloseDeliveryOutcome Cloud_siemClient::closeDelivery(const CloseDeliveryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CloseDeliveryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CloseDeliveryOutcome(CloseDeliveryResult(outcome.result()));
	else
		return CloseDeliveryOutcome(outcome.error());
}

void Cloud_siemClient::closeDeliveryAsync(const CloseDeliveryRequest& request, const CloseDeliveryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, closeDelivery(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Cloud_siemClient::CloseDeliveryOutcomeCallable Cloud_siemClient::closeDeliveryCallable(const CloseDeliveryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CloseDeliveryOutcome()>>(
			[this, request]()
			{
			return this->closeDelivery(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Cloud_siemClient::DeleteAutomateResponseConfigOutcome Cloud_siemClient::deleteAutomateResponseConfig(const DeleteAutomateResponseConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteAutomateResponseConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteAutomateResponseConfigOutcome(DeleteAutomateResponseConfigResult(outcome.result()));
	else
		return DeleteAutomateResponseConfigOutcome(outcome.error());
}

void Cloud_siemClient::deleteAutomateResponseConfigAsync(const DeleteAutomateResponseConfigRequest& request, const DeleteAutomateResponseConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteAutomateResponseConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Cloud_siemClient::DeleteAutomateResponseConfigOutcomeCallable Cloud_siemClient::deleteAutomateResponseConfigCallable(const DeleteAutomateResponseConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteAutomateResponseConfigOutcome()>>(
			[this, request]()
			{
			return this->deleteAutomateResponseConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Cloud_siemClient::DeleteBindAccountOutcome Cloud_siemClient::deleteBindAccount(const DeleteBindAccountRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteBindAccountOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteBindAccountOutcome(DeleteBindAccountResult(outcome.result()));
	else
		return DeleteBindAccountOutcome(outcome.error());
}

void Cloud_siemClient::deleteBindAccountAsync(const DeleteBindAccountRequest& request, const DeleteBindAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteBindAccount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Cloud_siemClient::DeleteBindAccountOutcomeCallable Cloud_siemClient::deleteBindAccountCallable(const DeleteBindAccountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteBindAccountOutcome()>>(
			[this, request]()
			{
			return this->deleteBindAccount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Cloud_siemClient::DeleteCustomizeRuleOutcome Cloud_siemClient::deleteCustomizeRule(const DeleteCustomizeRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteCustomizeRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteCustomizeRuleOutcome(DeleteCustomizeRuleResult(outcome.result()));
	else
		return DeleteCustomizeRuleOutcome(outcome.error());
}

void Cloud_siemClient::deleteCustomizeRuleAsync(const DeleteCustomizeRuleRequest& request, const DeleteCustomizeRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteCustomizeRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Cloud_siemClient::DeleteCustomizeRuleOutcomeCallable Cloud_siemClient::deleteCustomizeRuleCallable(const DeleteCustomizeRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteCustomizeRuleOutcome()>>(
			[this, request]()
			{
			return this->deleteCustomizeRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Cloud_siemClient::DeleteDataSourceOutcome Cloud_siemClient::deleteDataSource(const DeleteDataSourceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteDataSourceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteDataSourceOutcome(DeleteDataSourceResult(outcome.result()));
	else
		return DeleteDataSourceOutcome(outcome.error());
}

void Cloud_siemClient::deleteDataSourceAsync(const DeleteDataSourceRequest& request, const DeleteDataSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteDataSource(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Cloud_siemClient::DeleteDataSourceOutcomeCallable Cloud_siemClient::deleteDataSourceCallable(const DeleteDataSourceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteDataSourceOutcome()>>(
			[this, request]()
			{
			return this->deleteDataSource(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Cloud_siemClient::DeleteDataSourceLogOutcome Cloud_siemClient::deleteDataSourceLog(const DeleteDataSourceLogRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteDataSourceLogOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteDataSourceLogOutcome(DeleteDataSourceLogResult(outcome.result()));
	else
		return DeleteDataSourceLogOutcome(outcome.error());
}

void Cloud_siemClient::deleteDataSourceLogAsync(const DeleteDataSourceLogRequest& request, const DeleteDataSourceLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteDataSourceLog(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Cloud_siemClient::DeleteDataSourceLogOutcomeCallable Cloud_siemClient::deleteDataSourceLogCallable(const DeleteDataSourceLogRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteDataSourceLogOutcome()>>(
			[this, request]()
			{
			return this->deleteDataSourceLog(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Cloud_siemClient::DeleteWhiteRuleListOutcome Cloud_siemClient::deleteWhiteRuleList(const DeleteWhiteRuleListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteWhiteRuleListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteWhiteRuleListOutcome(DeleteWhiteRuleListResult(outcome.result()));
	else
		return DeleteWhiteRuleListOutcome(outcome.error());
}

void Cloud_siemClient::deleteWhiteRuleListAsync(const DeleteWhiteRuleListRequest& request, const DeleteWhiteRuleListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteWhiteRuleList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Cloud_siemClient::DeleteWhiteRuleListOutcomeCallable Cloud_siemClient::deleteWhiteRuleListCallable(const DeleteWhiteRuleListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteWhiteRuleListOutcome()>>(
			[this, request]()
			{
			return this->deleteWhiteRuleList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Cloud_siemClient::DescribeAggregateFunctionOutcome Cloud_siemClient::describeAggregateFunction(const DescribeAggregateFunctionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAggregateFunctionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAggregateFunctionOutcome(DescribeAggregateFunctionResult(outcome.result()));
	else
		return DescribeAggregateFunctionOutcome(outcome.error());
}

void Cloud_siemClient::describeAggregateFunctionAsync(const DescribeAggregateFunctionRequest& request, const DescribeAggregateFunctionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAggregateFunction(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Cloud_siemClient::DescribeAggregateFunctionOutcomeCallable Cloud_siemClient::describeAggregateFunctionCallable(const DescribeAggregateFunctionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAggregateFunctionOutcome()>>(
			[this, request]()
			{
			return this->describeAggregateFunction(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Cloud_siemClient::DescribeAlertSceneOutcome Cloud_siemClient::describeAlertScene(const DescribeAlertSceneRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAlertSceneOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAlertSceneOutcome(DescribeAlertSceneResult(outcome.result()));
	else
		return DescribeAlertSceneOutcome(outcome.error());
}

void Cloud_siemClient::describeAlertSceneAsync(const DescribeAlertSceneRequest& request, const DescribeAlertSceneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAlertScene(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Cloud_siemClient::DescribeAlertSceneOutcomeCallable Cloud_siemClient::describeAlertSceneCallable(const DescribeAlertSceneRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAlertSceneOutcome()>>(
			[this, request]()
			{
			return this->describeAlertScene(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Cloud_siemClient::DescribeAlertSceneByEventOutcome Cloud_siemClient::describeAlertSceneByEvent(const DescribeAlertSceneByEventRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAlertSceneByEventOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAlertSceneByEventOutcome(DescribeAlertSceneByEventResult(outcome.result()));
	else
		return DescribeAlertSceneByEventOutcome(outcome.error());
}

void Cloud_siemClient::describeAlertSceneByEventAsync(const DescribeAlertSceneByEventRequest& request, const DescribeAlertSceneByEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAlertSceneByEvent(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Cloud_siemClient::DescribeAlertSceneByEventOutcomeCallable Cloud_siemClient::describeAlertSceneByEventCallable(const DescribeAlertSceneByEventRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAlertSceneByEventOutcome()>>(
			[this, request]()
			{
			return this->describeAlertSceneByEvent(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Cloud_siemClient::DescribeAlertSourceOutcome Cloud_siemClient::describeAlertSource(const DescribeAlertSourceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAlertSourceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAlertSourceOutcome(DescribeAlertSourceResult(outcome.result()));
	else
		return DescribeAlertSourceOutcome(outcome.error());
}

void Cloud_siemClient::describeAlertSourceAsync(const DescribeAlertSourceRequest& request, const DescribeAlertSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAlertSource(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Cloud_siemClient::DescribeAlertSourceOutcomeCallable Cloud_siemClient::describeAlertSourceCallable(const DescribeAlertSourceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAlertSourceOutcome()>>(
			[this, request]()
			{
			return this->describeAlertSource(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Cloud_siemClient::DescribeAlertSourceWithEventOutcome Cloud_siemClient::describeAlertSourceWithEvent(const DescribeAlertSourceWithEventRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAlertSourceWithEventOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAlertSourceWithEventOutcome(DescribeAlertSourceWithEventResult(outcome.result()));
	else
		return DescribeAlertSourceWithEventOutcome(outcome.error());
}

void Cloud_siemClient::describeAlertSourceWithEventAsync(const DescribeAlertSourceWithEventRequest& request, const DescribeAlertSourceWithEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAlertSourceWithEvent(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Cloud_siemClient::DescribeAlertSourceWithEventOutcomeCallable Cloud_siemClient::describeAlertSourceWithEventCallable(const DescribeAlertSourceWithEventRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAlertSourceWithEventOutcome()>>(
			[this, request]()
			{
			return this->describeAlertSourceWithEvent(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Cloud_siemClient::DescribeAlertTypeOutcome Cloud_siemClient::describeAlertType(const DescribeAlertTypeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAlertTypeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAlertTypeOutcome(DescribeAlertTypeResult(outcome.result()));
	else
		return DescribeAlertTypeOutcome(outcome.error());
}

void Cloud_siemClient::describeAlertTypeAsync(const DescribeAlertTypeRequest& request, const DescribeAlertTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAlertType(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Cloud_siemClient::DescribeAlertTypeOutcomeCallable Cloud_siemClient::describeAlertTypeCallable(const DescribeAlertTypeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAlertTypeOutcome()>>(
			[this, request]()
			{
			return this->describeAlertType(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Cloud_siemClient::DescribeAlertsOutcome Cloud_siemClient::describeAlerts(const DescribeAlertsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAlertsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAlertsOutcome(DescribeAlertsResult(outcome.result()));
	else
		return DescribeAlertsOutcome(outcome.error());
}

void Cloud_siemClient::describeAlertsAsync(const DescribeAlertsRequest& request, const DescribeAlertsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAlerts(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Cloud_siemClient::DescribeAlertsOutcomeCallable Cloud_siemClient::describeAlertsCallable(const DescribeAlertsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAlertsOutcome()>>(
			[this, request]()
			{
			return this->describeAlerts(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Cloud_siemClient::DescribeAlertsCountOutcome Cloud_siemClient::describeAlertsCount(const DescribeAlertsCountRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAlertsCountOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAlertsCountOutcome(DescribeAlertsCountResult(outcome.result()));
	else
		return DescribeAlertsCountOutcome(outcome.error());
}

void Cloud_siemClient::describeAlertsCountAsync(const DescribeAlertsCountRequest& request, const DescribeAlertsCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAlertsCount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Cloud_siemClient::DescribeAlertsCountOutcomeCallable Cloud_siemClient::describeAlertsCountCallable(const DescribeAlertsCountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAlertsCountOutcome()>>(
			[this, request]()
			{
			return this->describeAlertsCount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Cloud_siemClient::DescribeAlertsWithEntityOutcome Cloud_siemClient::describeAlertsWithEntity(const DescribeAlertsWithEntityRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAlertsWithEntityOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAlertsWithEntityOutcome(DescribeAlertsWithEntityResult(outcome.result()));
	else
		return DescribeAlertsWithEntityOutcome(outcome.error());
}

void Cloud_siemClient::describeAlertsWithEntityAsync(const DescribeAlertsWithEntityRequest& request, const DescribeAlertsWithEntityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAlertsWithEntity(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Cloud_siemClient::DescribeAlertsWithEntityOutcomeCallable Cloud_siemClient::describeAlertsWithEntityCallable(const DescribeAlertsWithEntityRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAlertsWithEntityOutcome()>>(
			[this, request]()
			{
			return this->describeAlertsWithEntity(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Cloud_siemClient::DescribeAlertsWithEventOutcome Cloud_siemClient::describeAlertsWithEvent(const DescribeAlertsWithEventRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAlertsWithEventOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAlertsWithEventOutcome(DescribeAlertsWithEventResult(outcome.result()));
	else
		return DescribeAlertsWithEventOutcome(outcome.error());
}

void Cloud_siemClient::describeAlertsWithEventAsync(const DescribeAlertsWithEventRequest& request, const DescribeAlertsWithEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAlertsWithEvent(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Cloud_siemClient::DescribeAlertsWithEventOutcomeCallable Cloud_siemClient::describeAlertsWithEventCallable(const DescribeAlertsWithEventRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAlertsWithEventOutcome()>>(
			[this, request]()
			{
			return this->describeAlertsWithEvent(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Cloud_siemClient::DescribeAuthOutcome Cloud_siemClient::describeAuth(const DescribeAuthRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAuthOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAuthOutcome(DescribeAuthResult(outcome.result()));
	else
		return DescribeAuthOutcome(outcome.error());
}

void Cloud_siemClient::describeAuthAsync(const DescribeAuthRequest& request, const DescribeAuthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAuth(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Cloud_siemClient::DescribeAuthOutcomeCallable Cloud_siemClient::describeAuthCallable(const DescribeAuthRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAuthOutcome()>>(
			[this, request]()
			{
			return this->describeAuth(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Cloud_siemClient::DescribeAutomateResponseConfigCounterOutcome Cloud_siemClient::describeAutomateResponseConfigCounter(const DescribeAutomateResponseConfigCounterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAutomateResponseConfigCounterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAutomateResponseConfigCounterOutcome(DescribeAutomateResponseConfigCounterResult(outcome.result()));
	else
		return DescribeAutomateResponseConfigCounterOutcome(outcome.error());
}

void Cloud_siemClient::describeAutomateResponseConfigCounterAsync(const DescribeAutomateResponseConfigCounterRequest& request, const DescribeAutomateResponseConfigCounterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAutomateResponseConfigCounter(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Cloud_siemClient::DescribeAutomateResponseConfigCounterOutcomeCallable Cloud_siemClient::describeAutomateResponseConfigCounterCallable(const DescribeAutomateResponseConfigCounterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAutomateResponseConfigCounterOutcome()>>(
			[this, request]()
			{
			return this->describeAutomateResponseConfigCounter(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Cloud_siemClient::DescribeAutomateResponseConfigFeatureOutcome Cloud_siemClient::describeAutomateResponseConfigFeature(const DescribeAutomateResponseConfigFeatureRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAutomateResponseConfigFeatureOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAutomateResponseConfigFeatureOutcome(DescribeAutomateResponseConfigFeatureResult(outcome.result()));
	else
		return DescribeAutomateResponseConfigFeatureOutcome(outcome.error());
}

void Cloud_siemClient::describeAutomateResponseConfigFeatureAsync(const DescribeAutomateResponseConfigFeatureRequest& request, const DescribeAutomateResponseConfigFeatureAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAutomateResponseConfigFeature(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Cloud_siemClient::DescribeAutomateResponseConfigFeatureOutcomeCallable Cloud_siemClient::describeAutomateResponseConfigFeatureCallable(const DescribeAutomateResponseConfigFeatureRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAutomateResponseConfigFeatureOutcome()>>(
			[this, request]()
			{
			return this->describeAutomateResponseConfigFeature(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Cloud_siemClient::DescribeAutomateResponseConfigPlayBooksOutcome Cloud_siemClient::describeAutomateResponseConfigPlayBooks(const DescribeAutomateResponseConfigPlayBooksRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAutomateResponseConfigPlayBooksOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAutomateResponseConfigPlayBooksOutcome(DescribeAutomateResponseConfigPlayBooksResult(outcome.result()));
	else
		return DescribeAutomateResponseConfigPlayBooksOutcome(outcome.error());
}

void Cloud_siemClient::describeAutomateResponseConfigPlayBooksAsync(const DescribeAutomateResponseConfigPlayBooksRequest& request, const DescribeAutomateResponseConfigPlayBooksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAutomateResponseConfigPlayBooks(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Cloud_siemClient::DescribeAutomateResponseConfigPlayBooksOutcomeCallable Cloud_siemClient::describeAutomateResponseConfigPlayBooksCallable(const DescribeAutomateResponseConfigPlayBooksRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAutomateResponseConfigPlayBooksOutcome()>>(
			[this, request]()
			{
			return this->describeAutomateResponseConfigPlayBooks(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Cloud_siemClient::DescribeCloudSiemAssetsOutcome Cloud_siemClient::describeCloudSiemAssets(const DescribeCloudSiemAssetsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCloudSiemAssetsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCloudSiemAssetsOutcome(DescribeCloudSiemAssetsResult(outcome.result()));
	else
		return DescribeCloudSiemAssetsOutcome(outcome.error());
}

void Cloud_siemClient::describeCloudSiemAssetsAsync(const DescribeCloudSiemAssetsRequest& request, const DescribeCloudSiemAssetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCloudSiemAssets(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Cloud_siemClient::DescribeCloudSiemAssetsOutcomeCallable Cloud_siemClient::describeCloudSiemAssetsCallable(const DescribeCloudSiemAssetsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCloudSiemAssetsOutcome()>>(
			[this, request]()
			{
			return this->describeCloudSiemAssets(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Cloud_siemClient::DescribeCloudSiemAssetsCounterOutcome Cloud_siemClient::describeCloudSiemAssetsCounter(const DescribeCloudSiemAssetsCounterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCloudSiemAssetsCounterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCloudSiemAssetsCounterOutcome(DescribeCloudSiemAssetsCounterResult(outcome.result()));
	else
		return DescribeCloudSiemAssetsCounterOutcome(outcome.error());
}

void Cloud_siemClient::describeCloudSiemAssetsCounterAsync(const DescribeCloudSiemAssetsCounterRequest& request, const DescribeCloudSiemAssetsCounterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCloudSiemAssetsCounter(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Cloud_siemClient::DescribeCloudSiemAssetsCounterOutcomeCallable Cloud_siemClient::describeCloudSiemAssetsCounterCallable(const DescribeCloudSiemAssetsCounterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCloudSiemAssetsCounterOutcome()>>(
			[this, request]()
			{
			return this->describeCloudSiemAssetsCounter(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Cloud_siemClient::DescribeCloudSiemEventDetailOutcome Cloud_siemClient::describeCloudSiemEventDetail(const DescribeCloudSiemEventDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCloudSiemEventDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCloudSiemEventDetailOutcome(DescribeCloudSiemEventDetailResult(outcome.result()));
	else
		return DescribeCloudSiemEventDetailOutcome(outcome.error());
}

void Cloud_siemClient::describeCloudSiemEventDetailAsync(const DescribeCloudSiemEventDetailRequest& request, const DescribeCloudSiemEventDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCloudSiemEventDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Cloud_siemClient::DescribeCloudSiemEventDetailOutcomeCallable Cloud_siemClient::describeCloudSiemEventDetailCallable(const DescribeCloudSiemEventDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCloudSiemEventDetailOutcome()>>(
			[this, request]()
			{
			return this->describeCloudSiemEventDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Cloud_siemClient::DescribeCloudSiemEventsOutcome Cloud_siemClient::describeCloudSiemEvents(const DescribeCloudSiemEventsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCloudSiemEventsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCloudSiemEventsOutcome(DescribeCloudSiemEventsResult(outcome.result()));
	else
		return DescribeCloudSiemEventsOutcome(outcome.error());
}

void Cloud_siemClient::describeCloudSiemEventsAsync(const DescribeCloudSiemEventsRequest& request, const DescribeCloudSiemEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCloudSiemEvents(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Cloud_siemClient::DescribeCloudSiemEventsOutcomeCallable Cloud_siemClient::describeCloudSiemEventsCallable(const DescribeCloudSiemEventsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCloudSiemEventsOutcome()>>(
			[this, request]()
			{
			return this->describeCloudSiemEvents(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Cloud_siemClient::DescribeCustomizeRuleCountOutcome Cloud_siemClient::describeCustomizeRuleCount(const DescribeCustomizeRuleCountRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCustomizeRuleCountOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCustomizeRuleCountOutcome(DescribeCustomizeRuleCountResult(outcome.result()));
	else
		return DescribeCustomizeRuleCountOutcome(outcome.error());
}

void Cloud_siemClient::describeCustomizeRuleCountAsync(const DescribeCustomizeRuleCountRequest& request, const DescribeCustomizeRuleCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCustomizeRuleCount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Cloud_siemClient::DescribeCustomizeRuleCountOutcomeCallable Cloud_siemClient::describeCustomizeRuleCountCallable(const DescribeCustomizeRuleCountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCustomizeRuleCountOutcome()>>(
			[this, request]()
			{
			return this->describeCustomizeRuleCount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Cloud_siemClient::DescribeCustomizeRuleTestOutcome Cloud_siemClient::describeCustomizeRuleTest(const DescribeCustomizeRuleTestRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCustomizeRuleTestOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCustomizeRuleTestOutcome(DescribeCustomizeRuleTestResult(outcome.result()));
	else
		return DescribeCustomizeRuleTestOutcome(outcome.error());
}

void Cloud_siemClient::describeCustomizeRuleTestAsync(const DescribeCustomizeRuleTestRequest& request, const DescribeCustomizeRuleTestAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCustomizeRuleTest(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Cloud_siemClient::DescribeCustomizeRuleTestOutcomeCallable Cloud_siemClient::describeCustomizeRuleTestCallable(const DescribeCustomizeRuleTestRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCustomizeRuleTestOutcome()>>(
			[this, request]()
			{
			return this->describeCustomizeRuleTest(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Cloud_siemClient::DescribeCustomizeRuleTestHistogramOutcome Cloud_siemClient::describeCustomizeRuleTestHistogram(const DescribeCustomizeRuleTestHistogramRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCustomizeRuleTestHistogramOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCustomizeRuleTestHistogramOutcome(DescribeCustomizeRuleTestHistogramResult(outcome.result()));
	else
		return DescribeCustomizeRuleTestHistogramOutcome(outcome.error());
}

void Cloud_siemClient::describeCustomizeRuleTestHistogramAsync(const DescribeCustomizeRuleTestHistogramRequest& request, const DescribeCustomizeRuleTestHistogramAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCustomizeRuleTestHistogram(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Cloud_siemClient::DescribeCustomizeRuleTestHistogramOutcomeCallable Cloud_siemClient::describeCustomizeRuleTestHistogramCallable(const DescribeCustomizeRuleTestHistogramRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCustomizeRuleTestHistogramOutcome()>>(
			[this, request]()
			{
			return this->describeCustomizeRuleTestHistogram(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Cloud_siemClient::DescribeDataSourceInstanceOutcome Cloud_siemClient::describeDataSourceInstance(const DescribeDataSourceInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDataSourceInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDataSourceInstanceOutcome(DescribeDataSourceInstanceResult(outcome.result()));
	else
		return DescribeDataSourceInstanceOutcome(outcome.error());
}

void Cloud_siemClient::describeDataSourceInstanceAsync(const DescribeDataSourceInstanceRequest& request, const DescribeDataSourceInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDataSourceInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Cloud_siemClient::DescribeDataSourceInstanceOutcomeCallable Cloud_siemClient::describeDataSourceInstanceCallable(const DescribeDataSourceInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDataSourceInstanceOutcome()>>(
			[this, request]()
			{
			return this->describeDataSourceInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Cloud_siemClient::DescribeDataSourceParametersOutcome Cloud_siemClient::describeDataSourceParameters(const DescribeDataSourceParametersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDataSourceParametersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDataSourceParametersOutcome(DescribeDataSourceParametersResult(outcome.result()));
	else
		return DescribeDataSourceParametersOutcome(outcome.error());
}

void Cloud_siemClient::describeDataSourceParametersAsync(const DescribeDataSourceParametersRequest& request, const DescribeDataSourceParametersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDataSourceParameters(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Cloud_siemClient::DescribeDataSourceParametersOutcomeCallable Cloud_siemClient::describeDataSourceParametersCallable(const DescribeDataSourceParametersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDataSourceParametersOutcome()>>(
			[this, request]()
			{
			return this->describeDataSourceParameters(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Cloud_siemClient::DescribeDisposeAndPlaybookOutcome Cloud_siemClient::describeDisposeAndPlaybook(const DescribeDisposeAndPlaybookRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDisposeAndPlaybookOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDisposeAndPlaybookOutcome(DescribeDisposeAndPlaybookResult(outcome.result()));
	else
		return DescribeDisposeAndPlaybookOutcome(outcome.error());
}

void Cloud_siemClient::describeDisposeAndPlaybookAsync(const DescribeDisposeAndPlaybookRequest& request, const DescribeDisposeAndPlaybookAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDisposeAndPlaybook(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Cloud_siemClient::DescribeDisposeAndPlaybookOutcomeCallable Cloud_siemClient::describeDisposeAndPlaybookCallable(const DescribeDisposeAndPlaybookRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDisposeAndPlaybookOutcome()>>(
			[this, request]()
			{
			return this->describeDisposeAndPlaybook(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Cloud_siemClient::DescribeDisposeStrategyPlaybookOutcome Cloud_siemClient::describeDisposeStrategyPlaybook(const DescribeDisposeStrategyPlaybookRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDisposeStrategyPlaybookOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDisposeStrategyPlaybookOutcome(DescribeDisposeStrategyPlaybookResult(outcome.result()));
	else
		return DescribeDisposeStrategyPlaybookOutcome(outcome.error());
}

void Cloud_siemClient::describeDisposeStrategyPlaybookAsync(const DescribeDisposeStrategyPlaybookRequest& request, const DescribeDisposeStrategyPlaybookAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDisposeStrategyPlaybook(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Cloud_siemClient::DescribeDisposeStrategyPlaybookOutcomeCallable Cloud_siemClient::describeDisposeStrategyPlaybookCallable(const DescribeDisposeStrategyPlaybookRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDisposeStrategyPlaybookOutcome()>>(
			[this, request]()
			{
			return this->describeDisposeStrategyPlaybook(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Cloud_siemClient::DescribeEntityInfoOutcome Cloud_siemClient::describeEntityInfo(const DescribeEntityInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeEntityInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeEntityInfoOutcome(DescribeEntityInfoResult(outcome.result()));
	else
		return DescribeEntityInfoOutcome(outcome.error());
}

void Cloud_siemClient::describeEntityInfoAsync(const DescribeEntityInfoRequest& request, const DescribeEntityInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeEntityInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Cloud_siemClient::DescribeEntityInfoOutcomeCallable Cloud_siemClient::describeEntityInfoCallable(const DescribeEntityInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeEntityInfoOutcome()>>(
			[this, request]()
			{
			return this->describeEntityInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Cloud_siemClient::DescribeEventCountByThreatLevelOutcome Cloud_siemClient::describeEventCountByThreatLevel(const DescribeEventCountByThreatLevelRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeEventCountByThreatLevelOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeEventCountByThreatLevelOutcome(DescribeEventCountByThreatLevelResult(outcome.result()));
	else
		return DescribeEventCountByThreatLevelOutcome(outcome.error());
}

void Cloud_siemClient::describeEventCountByThreatLevelAsync(const DescribeEventCountByThreatLevelRequest& request, const DescribeEventCountByThreatLevelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeEventCountByThreatLevel(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Cloud_siemClient::DescribeEventCountByThreatLevelOutcomeCallable Cloud_siemClient::describeEventCountByThreatLevelCallable(const DescribeEventCountByThreatLevelRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeEventCountByThreatLevelOutcome()>>(
			[this, request]()
			{
			return this->describeEventCountByThreatLevel(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Cloud_siemClient::DescribeEventDisposeOutcome Cloud_siemClient::describeEventDispose(const DescribeEventDisposeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeEventDisposeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeEventDisposeOutcome(DescribeEventDisposeResult(outcome.result()));
	else
		return DescribeEventDisposeOutcome(outcome.error());
}

void Cloud_siemClient::describeEventDisposeAsync(const DescribeEventDisposeRequest& request, const DescribeEventDisposeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeEventDispose(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Cloud_siemClient::DescribeEventDisposeOutcomeCallable Cloud_siemClient::describeEventDisposeCallable(const DescribeEventDisposeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeEventDisposeOutcome()>>(
			[this, request]()
			{
			return this->describeEventDispose(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Cloud_siemClient::DescribeImportedLogCountOutcome Cloud_siemClient::describeImportedLogCount(const DescribeImportedLogCountRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeImportedLogCountOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeImportedLogCountOutcome(DescribeImportedLogCountResult(outcome.result()));
	else
		return DescribeImportedLogCountOutcome(outcome.error());
}

void Cloud_siemClient::describeImportedLogCountAsync(const DescribeImportedLogCountRequest& request, const DescribeImportedLogCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeImportedLogCount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Cloud_siemClient::DescribeImportedLogCountOutcomeCallable Cloud_siemClient::describeImportedLogCountCallable(const DescribeImportedLogCountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeImportedLogCountOutcome()>>(
			[this, request]()
			{
			return this->describeImportedLogCount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Cloud_siemClient::DescribeLogFieldsOutcome Cloud_siemClient::describeLogFields(const DescribeLogFieldsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLogFieldsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLogFieldsOutcome(DescribeLogFieldsResult(outcome.result()));
	else
		return DescribeLogFieldsOutcome(outcome.error());
}

void Cloud_siemClient::describeLogFieldsAsync(const DescribeLogFieldsRequest& request, const DescribeLogFieldsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLogFields(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Cloud_siemClient::DescribeLogFieldsOutcomeCallable Cloud_siemClient::describeLogFieldsCallable(const DescribeLogFieldsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLogFieldsOutcome()>>(
			[this, request]()
			{
			return this->describeLogFields(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Cloud_siemClient::DescribeLogSourceOutcome Cloud_siemClient::describeLogSource(const DescribeLogSourceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLogSourceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLogSourceOutcome(DescribeLogSourceResult(outcome.result()));
	else
		return DescribeLogSourceOutcome(outcome.error());
}

void Cloud_siemClient::describeLogSourceAsync(const DescribeLogSourceRequest& request, const DescribeLogSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLogSource(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Cloud_siemClient::DescribeLogSourceOutcomeCallable Cloud_siemClient::describeLogSourceCallable(const DescribeLogSourceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLogSourceOutcome()>>(
			[this, request]()
			{
			return this->describeLogSource(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Cloud_siemClient::DescribeLogTypeOutcome Cloud_siemClient::describeLogType(const DescribeLogTypeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLogTypeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLogTypeOutcome(DescribeLogTypeResult(outcome.result()));
	else
		return DescribeLogTypeOutcome(outcome.error());
}

void Cloud_siemClient::describeLogTypeAsync(const DescribeLogTypeRequest& request, const DescribeLogTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLogType(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Cloud_siemClient::DescribeLogTypeOutcomeCallable Cloud_siemClient::describeLogTypeCallable(const DescribeLogTypeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLogTypeOutcome()>>(
			[this, request]()
			{
			return this->describeLogType(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Cloud_siemClient::DescribeOperatorsOutcome Cloud_siemClient::describeOperators(const DescribeOperatorsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeOperatorsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeOperatorsOutcome(DescribeOperatorsResult(outcome.result()));
	else
		return DescribeOperatorsOutcome(outcome.error());
}

void Cloud_siemClient::describeOperatorsAsync(const DescribeOperatorsRequest& request, const DescribeOperatorsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeOperators(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Cloud_siemClient::DescribeOperatorsOutcomeCallable Cloud_siemClient::describeOperatorsCallable(const DescribeOperatorsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeOperatorsOutcome()>>(
			[this, request]()
			{
			return this->describeOperators(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Cloud_siemClient::DescribeProdCountOutcome Cloud_siemClient::describeProdCount(const DescribeProdCountRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeProdCountOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeProdCountOutcome(DescribeProdCountResult(outcome.result()));
	else
		return DescribeProdCountOutcome(outcome.error());
}

void Cloud_siemClient::describeProdCountAsync(const DescribeProdCountRequest& request, const DescribeProdCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeProdCount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Cloud_siemClient::DescribeProdCountOutcomeCallable Cloud_siemClient::describeProdCountCallable(const DescribeProdCountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeProdCountOutcome()>>(
			[this, request]()
			{
			return this->describeProdCount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Cloud_siemClient::DescribeScopeUsersOutcome Cloud_siemClient::describeScopeUsers(const DescribeScopeUsersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeScopeUsersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeScopeUsersOutcome(DescribeScopeUsersResult(outcome.result()));
	else
		return DescribeScopeUsersOutcome(outcome.error());
}

void Cloud_siemClient::describeScopeUsersAsync(const DescribeScopeUsersRequest& request, const DescribeScopeUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeScopeUsers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Cloud_siemClient::DescribeScopeUsersOutcomeCallable Cloud_siemClient::describeScopeUsersCallable(const DescribeScopeUsersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeScopeUsersOutcome()>>(
			[this, request]()
			{
			return this->describeScopeUsers(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Cloud_siemClient::DescribeServiceStatusOutcome Cloud_siemClient::describeServiceStatus(const DescribeServiceStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeServiceStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeServiceStatusOutcome(DescribeServiceStatusResult(outcome.result()));
	else
		return DescribeServiceStatusOutcome(outcome.error());
}

void Cloud_siemClient::describeServiceStatusAsync(const DescribeServiceStatusRequest& request, const DescribeServiceStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeServiceStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Cloud_siemClient::DescribeServiceStatusOutcomeCallable Cloud_siemClient::describeServiceStatusCallable(const DescribeServiceStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeServiceStatusOutcome()>>(
			[this, request]()
			{
			return this->describeServiceStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Cloud_siemClient::DescribeStorageOutcome Cloud_siemClient::describeStorage(const DescribeStorageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeStorageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeStorageOutcome(DescribeStorageResult(outcome.result()));
	else
		return DescribeStorageOutcome(outcome.error());
}

void Cloud_siemClient::describeStorageAsync(const DescribeStorageRequest& request, const DescribeStorageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeStorage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Cloud_siemClient::DescribeStorageOutcomeCallable Cloud_siemClient::describeStorageCallable(const DescribeStorageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeStorageOutcome()>>(
			[this, request]()
			{
			return this->describeStorage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Cloud_siemClient::DescribeUserBuyStatusOutcome Cloud_siemClient::describeUserBuyStatus(const DescribeUserBuyStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeUserBuyStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeUserBuyStatusOutcome(DescribeUserBuyStatusResult(outcome.result()));
	else
		return DescribeUserBuyStatusOutcome(outcome.error());
}

void Cloud_siemClient::describeUserBuyStatusAsync(const DescribeUserBuyStatusRequest& request, const DescribeUserBuyStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeUserBuyStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Cloud_siemClient::DescribeUserBuyStatusOutcomeCallable Cloud_siemClient::describeUserBuyStatusCallable(const DescribeUserBuyStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeUserBuyStatusOutcome()>>(
			[this, request]()
			{
			return this->describeUserBuyStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Cloud_siemClient::DescribeWafScopeOutcome Cloud_siemClient::describeWafScope(const DescribeWafScopeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeWafScopeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeWafScopeOutcome(DescribeWafScopeResult(outcome.result()));
	else
		return DescribeWafScopeOutcome(outcome.error());
}

void Cloud_siemClient::describeWafScopeAsync(const DescribeWafScopeRequest& request, const DescribeWafScopeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeWafScope(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Cloud_siemClient::DescribeWafScopeOutcomeCallable Cloud_siemClient::describeWafScopeCallable(const DescribeWafScopeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeWafScopeOutcome()>>(
			[this, request]()
			{
			return this->describeWafScope(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Cloud_siemClient::DescribeWhiteRuleListOutcome Cloud_siemClient::describeWhiteRuleList(const DescribeWhiteRuleListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeWhiteRuleListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeWhiteRuleListOutcome(DescribeWhiteRuleListResult(outcome.result()));
	else
		return DescribeWhiteRuleListOutcome(outcome.error());
}

void Cloud_siemClient::describeWhiteRuleListAsync(const DescribeWhiteRuleListRequest& request, const DescribeWhiteRuleListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeWhiteRuleList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Cloud_siemClient::DescribeWhiteRuleListOutcomeCallable Cloud_siemClient::describeWhiteRuleListCallable(const DescribeWhiteRuleListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeWhiteRuleListOutcome()>>(
			[this, request]()
			{
			return this->describeWhiteRuleList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Cloud_siemClient::EnableAccessForCloudSiemOutcome Cloud_siemClient::enableAccessForCloudSiem(const EnableAccessForCloudSiemRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EnableAccessForCloudSiemOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EnableAccessForCloudSiemOutcome(EnableAccessForCloudSiemResult(outcome.result()));
	else
		return EnableAccessForCloudSiemOutcome(outcome.error());
}

void Cloud_siemClient::enableAccessForCloudSiemAsync(const EnableAccessForCloudSiemRequest& request, const EnableAccessForCloudSiemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, enableAccessForCloudSiem(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Cloud_siemClient::EnableAccessForCloudSiemOutcomeCallable Cloud_siemClient::enableAccessForCloudSiemCallable(const EnableAccessForCloudSiemRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EnableAccessForCloudSiemOutcome()>>(
			[this, request]()
			{
			return this->enableAccessForCloudSiem(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Cloud_siemClient::EnableServiceForCloudSiemOutcome Cloud_siemClient::enableServiceForCloudSiem(const EnableServiceForCloudSiemRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EnableServiceForCloudSiemOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EnableServiceForCloudSiemOutcome(EnableServiceForCloudSiemResult(outcome.result()));
	else
		return EnableServiceForCloudSiemOutcome(outcome.error());
}

void Cloud_siemClient::enableServiceForCloudSiemAsync(const EnableServiceForCloudSiemRequest& request, const EnableServiceForCloudSiemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, enableServiceForCloudSiem(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Cloud_siemClient::EnableServiceForCloudSiemOutcomeCallable Cloud_siemClient::enableServiceForCloudSiemCallable(const EnableServiceForCloudSiemRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EnableServiceForCloudSiemOutcome()>>(
			[this, request]()
			{
			return this->enableServiceForCloudSiem(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Cloud_siemClient::GetCapacityOutcome Cloud_siemClient::getCapacity(const GetCapacityRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetCapacityOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetCapacityOutcome(GetCapacityResult(outcome.result()));
	else
		return GetCapacityOutcome(outcome.error());
}

void Cloud_siemClient::getCapacityAsync(const GetCapacityRequest& request, const GetCapacityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getCapacity(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Cloud_siemClient::GetCapacityOutcomeCallable Cloud_siemClient::getCapacityCallable(const GetCapacityRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetCapacityOutcome()>>(
			[this, request]()
			{
			return this->getCapacity(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Cloud_siemClient::GetStorageOutcome Cloud_siemClient::getStorage(const GetStorageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetStorageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetStorageOutcome(GetStorageResult(outcome.result()));
	else
		return GetStorageOutcome(outcome.error());
}

void Cloud_siemClient::getStorageAsync(const GetStorageRequest& request, const GetStorageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getStorage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Cloud_siemClient::GetStorageOutcomeCallable Cloud_siemClient::getStorageCallable(const GetStorageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetStorageOutcome()>>(
			[this, request]()
			{
			return this->getStorage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Cloud_siemClient::ListAccountAccessIdOutcome Cloud_siemClient::listAccountAccessId(const ListAccountAccessIdRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAccountAccessIdOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAccountAccessIdOutcome(ListAccountAccessIdResult(outcome.result()));
	else
		return ListAccountAccessIdOutcome(outcome.error());
}

void Cloud_siemClient::listAccountAccessIdAsync(const ListAccountAccessIdRequest& request, const ListAccountAccessIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAccountAccessId(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Cloud_siemClient::ListAccountAccessIdOutcomeCallable Cloud_siemClient::listAccountAccessIdCallable(const ListAccountAccessIdRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAccountAccessIdOutcome()>>(
			[this, request]()
			{
			return this->listAccountAccessId(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Cloud_siemClient::ListAccountsByLogOutcome Cloud_siemClient::listAccountsByLog(const ListAccountsByLogRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAccountsByLogOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAccountsByLogOutcome(ListAccountsByLogResult(outcome.result()));
	else
		return ListAccountsByLogOutcome(outcome.error());
}

void Cloud_siemClient::listAccountsByLogAsync(const ListAccountsByLogRequest& request, const ListAccountsByLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAccountsByLog(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Cloud_siemClient::ListAccountsByLogOutcomeCallable Cloud_siemClient::listAccountsByLogCallable(const ListAccountsByLogRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAccountsByLogOutcome()>>(
			[this, request]()
			{
			return this->listAccountsByLog(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Cloud_siemClient::ListAllProdsOutcome Cloud_siemClient::listAllProds(const ListAllProdsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAllProdsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAllProdsOutcome(ListAllProdsResult(outcome.result()));
	else
		return ListAllProdsOutcome(outcome.error());
}

void Cloud_siemClient::listAllProdsAsync(const ListAllProdsRequest& request, const ListAllProdsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAllProds(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Cloud_siemClient::ListAllProdsOutcomeCallable Cloud_siemClient::listAllProdsCallable(const ListAllProdsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAllProdsOutcome()>>(
			[this, request]()
			{
			return this->listAllProds(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Cloud_siemClient::ListAutomateResponseConfigsOutcome Cloud_siemClient::listAutomateResponseConfigs(const ListAutomateResponseConfigsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAutomateResponseConfigsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAutomateResponseConfigsOutcome(ListAutomateResponseConfigsResult(outcome.result()));
	else
		return ListAutomateResponseConfigsOutcome(outcome.error());
}

void Cloud_siemClient::listAutomateResponseConfigsAsync(const ListAutomateResponseConfigsRequest& request, const ListAutomateResponseConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAutomateResponseConfigs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Cloud_siemClient::ListAutomateResponseConfigsOutcomeCallable Cloud_siemClient::listAutomateResponseConfigsCallable(const ListAutomateResponseConfigsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAutomateResponseConfigsOutcome()>>(
			[this, request]()
			{
			return this->listAutomateResponseConfigs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Cloud_siemClient::ListBindAccountOutcome Cloud_siemClient::listBindAccount(const ListBindAccountRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListBindAccountOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListBindAccountOutcome(ListBindAccountResult(outcome.result()));
	else
		return ListBindAccountOutcome(outcome.error());
}

void Cloud_siemClient::listBindAccountAsync(const ListBindAccountRequest& request, const ListBindAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listBindAccount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Cloud_siemClient::ListBindAccountOutcomeCallable Cloud_siemClient::listBindAccountCallable(const ListBindAccountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListBindAccountOutcome()>>(
			[this, request]()
			{
			return this->listBindAccount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Cloud_siemClient::ListBindDataSourcesOutcome Cloud_siemClient::listBindDataSources(const ListBindDataSourcesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListBindDataSourcesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListBindDataSourcesOutcome(ListBindDataSourcesResult(outcome.result()));
	else
		return ListBindDataSourcesOutcome(outcome.error());
}

void Cloud_siemClient::listBindDataSourcesAsync(const ListBindDataSourcesRequest& request, const ListBindDataSourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listBindDataSources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Cloud_siemClient::ListBindDataSourcesOutcomeCallable Cloud_siemClient::listBindDataSourcesCallable(const ListBindDataSourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListBindDataSourcesOutcome()>>(
			[this, request]()
			{
			return this->listBindDataSources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Cloud_siemClient::ListCloudSiemCustomizeRulesOutcome Cloud_siemClient::listCloudSiemCustomizeRules(const ListCloudSiemCustomizeRulesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListCloudSiemCustomizeRulesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListCloudSiemCustomizeRulesOutcome(ListCloudSiemCustomizeRulesResult(outcome.result()));
	else
		return ListCloudSiemCustomizeRulesOutcome(outcome.error());
}

void Cloud_siemClient::listCloudSiemCustomizeRulesAsync(const ListCloudSiemCustomizeRulesRequest& request, const ListCloudSiemCustomizeRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listCloudSiemCustomizeRules(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Cloud_siemClient::ListCloudSiemCustomizeRulesOutcomeCallable Cloud_siemClient::listCloudSiemCustomizeRulesCallable(const ListCloudSiemCustomizeRulesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListCloudSiemCustomizeRulesOutcome()>>(
			[this, request]()
			{
			return this->listCloudSiemCustomizeRules(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Cloud_siemClient::ListCloudSiemPredefinedRulesOutcome Cloud_siemClient::listCloudSiemPredefinedRules(const ListCloudSiemPredefinedRulesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListCloudSiemPredefinedRulesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListCloudSiemPredefinedRulesOutcome(ListCloudSiemPredefinedRulesResult(outcome.result()));
	else
		return ListCloudSiemPredefinedRulesOutcome(outcome.error());
}

void Cloud_siemClient::listCloudSiemPredefinedRulesAsync(const ListCloudSiemPredefinedRulesRequest& request, const ListCloudSiemPredefinedRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listCloudSiemPredefinedRules(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Cloud_siemClient::ListCloudSiemPredefinedRulesOutcomeCallable Cloud_siemClient::listCloudSiemPredefinedRulesCallable(const ListCloudSiemPredefinedRulesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListCloudSiemPredefinedRulesOutcome()>>(
			[this, request]()
			{
			return this->listCloudSiemPredefinedRules(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Cloud_siemClient::ListCustomizeRuleTestResultOutcome Cloud_siemClient::listCustomizeRuleTestResult(const ListCustomizeRuleTestResultRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListCustomizeRuleTestResultOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListCustomizeRuleTestResultOutcome(ListCustomizeRuleTestResultResult(outcome.result()));
	else
		return ListCustomizeRuleTestResultOutcome(outcome.error());
}

void Cloud_siemClient::listCustomizeRuleTestResultAsync(const ListCustomizeRuleTestResultRequest& request, const ListCustomizeRuleTestResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listCustomizeRuleTestResult(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Cloud_siemClient::ListCustomizeRuleTestResultOutcomeCallable Cloud_siemClient::listCustomizeRuleTestResultCallable(const ListCustomizeRuleTestResultRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListCustomizeRuleTestResultOutcome()>>(
			[this, request]()
			{
			return this->listCustomizeRuleTestResult(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Cloud_siemClient::ListDataSourceLogsOutcome Cloud_siemClient::listDataSourceLogs(const ListDataSourceLogsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDataSourceLogsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDataSourceLogsOutcome(ListDataSourceLogsResult(outcome.result()));
	else
		return ListDataSourceLogsOutcome(outcome.error());
}

void Cloud_siemClient::listDataSourceLogsAsync(const ListDataSourceLogsRequest& request, const ListDataSourceLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDataSourceLogs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Cloud_siemClient::ListDataSourceLogsOutcomeCallable Cloud_siemClient::listDataSourceLogsCallable(const ListDataSourceLogsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDataSourceLogsOutcome()>>(
			[this, request]()
			{
			return this->listDataSourceLogs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Cloud_siemClient::ListDataSourceTypesOutcome Cloud_siemClient::listDataSourceTypes(const ListDataSourceTypesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDataSourceTypesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDataSourceTypesOutcome(ListDataSourceTypesResult(outcome.result()));
	else
		return ListDataSourceTypesOutcome(outcome.error());
}

void Cloud_siemClient::listDataSourceTypesAsync(const ListDataSourceTypesRequest& request, const ListDataSourceTypesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDataSourceTypes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Cloud_siemClient::ListDataSourceTypesOutcomeCallable Cloud_siemClient::listDataSourceTypesCallable(const ListDataSourceTypesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDataSourceTypesOutcome()>>(
			[this, request]()
			{
			return this->listDataSourceTypes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Cloud_siemClient::ListDeliveryOutcome Cloud_siemClient::listDelivery(const ListDeliveryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDeliveryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDeliveryOutcome(ListDeliveryResult(outcome.result()));
	else
		return ListDeliveryOutcome(outcome.error());
}

void Cloud_siemClient::listDeliveryAsync(const ListDeliveryRequest& request, const ListDeliveryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDelivery(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Cloud_siemClient::ListDeliveryOutcomeCallable Cloud_siemClient::listDeliveryCallable(const ListDeliveryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDeliveryOutcome()>>(
			[this, request]()
			{
			return this->listDelivery(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Cloud_siemClient::ListDisposeStrategyOutcome Cloud_siemClient::listDisposeStrategy(const ListDisposeStrategyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDisposeStrategyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDisposeStrategyOutcome(ListDisposeStrategyResult(outcome.result()));
	else
		return ListDisposeStrategyOutcome(outcome.error());
}

void Cloud_siemClient::listDisposeStrategyAsync(const ListDisposeStrategyRequest& request, const ListDisposeStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDisposeStrategy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Cloud_siemClient::ListDisposeStrategyOutcomeCallable Cloud_siemClient::listDisposeStrategyCallable(const ListDisposeStrategyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDisposeStrategyOutcome()>>(
			[this, request]()
			{
			return this->listDisposeStrategy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Cloud_siemClient::ListEntitiesOutcome Cloud_siemClient::listEntities(const ListEntitiesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListEntitiesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListEntitiesOutcome(ListEntitiesResult(outcome.result()));
	else
		return ListEntitiesOutcome(outcome.error());
}

void Cloud_siemClient::listEntitiesAsync(const ListEntitiesRequest& request, const ListEntitiesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listEntities(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Cloud_siemClient::ListEntitiesOutcomeCallable Cloud_siemClient::listEntitiesCallable(const ListEntitiesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListEntitiesOutcome()>>(
			[this, request]()
			{
			return this->listEntities(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Cloud_siemClient::ListImportedLogsByProdOutcome Cloud_siemClient::listImportedLogsByProd(const ListImportedLogsByProdRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListImportedLogsByProdOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListImportedLogsByProdOutcome(ListImportedLogsByProdResult(outcome.result()));
	else
		return ListImportedLogsByProdOutcome(outcome.error());
}

void Cloud_siemClient::listImportedLogsByProdAsync(const ListImportedLogsByProdRequest& request, const ListImportedLogsByProdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listImportedLogsByProd(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Cloud_siemClient::ListImportedLogsByProdOutcomeCallable Cloud_siemClient::listImportedLogsByProdCallable(const ListImportedLogsByProdRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListImportedLogsByProdOutcome()>>(
			[this, request]()
			{
			return this->listImportedLogsByProd(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Cloud_siemClient::ListProjectLogStoresOutcome Cloud_siemClient::listProjectLogStores(const ListProjectLogStoresRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListProjectLogStoresOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListProjectLogStoresOutcome(ListProjectLogStoresResult(outcome.result()));
	else
		return ListProjectLogStoresOutcome(outcome.error());
}

void Cloud_siemClient::listProjectLogStoresAsync(const ListProjectLogStoresRequest& request, const ListProjectLogStoresAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listProjectLogStores(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Cloud_siemClient::ListProjectLogStoresOutcomeCallable Cloud_siemClient::listProjectLogStoresCallable(const ListProjectLogStoresRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListProjectLogStoresOutcome()>>(
			[this, request]()
			{
			return this->listProjectLogStores(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Cloud_siemClient::ListRdUsersOutcome Cloud_siemClient::listRdUsers(const ListRdUsersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListRdUsersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListRdUsersOutcome(ListRdUsersResult(outcome.result()));
	else
		return ListRdUsersOutcome(outcome.error());
}

void Cloud_siemClient::listRdUsersAsync(const ListRdUsersRequest& request, const ListRdUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listRdUsers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Cloud_siemClient::ListRdUsersOutcomeCallable Cloud_siemClient::listRdUsersCallable(const ListRdUsersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListRdUsersOutcome()>>(
			[this, request]()
			{
			return this->listRdUsers(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Cloud_siemClient::ModifyBindAccountOutcome Cloud_siemClient::modifyBindAccount(const ModifyBindAccountRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyBindAccountOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyBindAccountOutcome(ModifyBindAccountResult(outcome.result()));
	else
		return ModifyBindAccountOutcome(outcome.error());
}

void Cloud_siemClient::modifyBindAccountAsync(const ModifyBindAccountRequest& request, const ModifyBindAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyBindAccount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Cloud_siemClient::ModifyBindAccountOutcomeCallable Cloud_siemClient::modifyBindAccountCallable(const ModifyBindAccountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyBindAccountOutcome()>>(
			[this, request]()
			{
			return this->modifyBindAccount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Cloud_siemClient::ModifyDataSourceOutcome Cloud_siemClient::modifyDataSource(const ModifyDataSourceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDataSourceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDataSourceOutcome(ModifyDataSourceResult(outcome.result()));
	else
		return ModifyDataSourceOutcome(outcome.error());
}

void Cloud_siemClient::modifyDataSourceAsync(const ModifyDataSourceRequest& request, const ModifyDataSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDataSource(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Cloud_siemClient::ModifyDataSourceOutcomeCallable Cloud_siemClient::modifyDataSourceCallable(const ModifyDataSourceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDataSourceOutcome()>>(
			[this, request]()
			{
			return this->modifyDataSource(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Cloud_siemClient::ModifyDataSourceLogOutcome Cloud_siemClient::modifyDataSourceLog(const ModifyDataSourceLogRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDataSourceLogOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDataSourceLogOutcome(ModifyDataSourceLogResult(outcome.result()));
	else
		return ModifyDataSourceLogOutcome(outcome.error());
}

void Cloud_siemClient::modifyDataSourceLogAsync(const ModifyDataSourceLogRequest& request, const ModifyDataSourceLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDataSourceLog(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Cloud_siemClient::ModifyDataSourceLogOutcomeCallable Cloud_siemClient::modifyDataSourceLogCallable(const ModifyDataSourceLogRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDataSourceLogOutcome()>>(
			[this, request]()
			{
			return this->modifyDataSourceLog(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Cloud_siemClient::OpenDeliveryOutcome Cloud_siemClient::openDelivery(const OpenDeliveryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OpenDeliveryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OpenDeliveryOutcome(OpenDeliveryResult(outcome.result()));
	else
		return OpenDeliveryOutcome(outcome.error());
}

void Cloud_siemClient::openDeliveryAsync(const OpenDeliveryRequest& request, const OpenDeliveryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, openDelivery(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Cloud_siemClient::OpenDeliveryOutcomeCallable Cloud_siemClient::openDeliveryCallable(const OpenDeliveryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OpenDeliveryOutcome()>>(
			[this, request]()
			{
			return this->openDelivery(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Cloud_siemClient::PostAutomateResponseConfigOutcome Cloud_siemClient::postAutomateResponseConfig(const PostAutomateResponseConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PostAutomateResponseConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PostAutomateResponseConfigOutcome(PostAutomateResponseConfigResult(outcome.result()));
	else
		return PostAutomateResponseConfigOutcome(outcome.error());
}

void Cloud_siemClient::postAutomateResponseConfigAsync(const PostAutomateResponseConfigRequest& request, const PostAutomateResponseConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, postAutomateResponseConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Cloud_siemClient::PostAutomateResponseConfigOutcomeCallable Cloud_siemClient::postAutomateResponseConfigCallable(const PostAutomateResponseConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PostAutomateResponseConfigOutcome()>>(
			[this, request]()
			{
			return this->postAutomateResponseConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Cloud_siemClient::PostCustomizeRuleOutcome Cloud_siemClient::postCustomizeRule(const PostCustomizeRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PostCustomizeRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PostCustomizeRuleOutcome(PostCustomizeRuleResult(outcome.result()));
	else
		return PostCustomizeRuleOutcome(outcome.error());
}

void Cloud_siemClient::postCustomizeRuleAsync(const PostCustomizeRuleRequest& request, const PostCustomizeRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, postCustomizeRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Cloud_siemClient::PostCustomizeRuleOutcomeCallable Cloud_siemClient::postCustomizeRuleCallable(const PostCustomizeRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PostCustomizeRuleOutcome()>>(
			[this, request]()
			{
			return this->postCustomizeRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Cloud_siemClient::PostCustomizeRuleTestOutcome Cloud_siemClient::postCustomizeRuleTest(const PostCustomizeRuleTestRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PostCustomizeRuleTestOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PostCustomizeRuleTestOutcome(PostCustomizeRuleTestResult(outcome.result()));
	else
		return PostCustomizeRuleTestOutcome(outcome.error());
}

void Cloud_siemClient::postCustomizeRuleTestAsync(const PostCustomizeRuleTestRequest& request, const PostCustomizeRuleTestAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, postCustomizeRuleTest(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Cloud_siemClient::PostCustomizeRuleTestOutcomeCallable Cloud_siemClient::postCustomizeRuleTestCallable(const PostCustomizeRuleTestRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PostCustomizeRuleTestOutcome()>>(
			[this, request]()
			{
			return this->postCustomizeRuleTest(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Cloud_siemClient::PostEventDisposeAndWhiteruleListOutcome Cloud_siemClient::postEventDisposeAndWhiteruleList(const PostEventDisposeAndWhiteruleListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PostEventDisposeAndWhiteruleListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PostEventDisposeAndWhiteruleListOutcome(PostEventDisposeAndWhiteruleListResult(outcome.result()));
	else
		return PostEventDisposeAndWhiteruleListOutcome(outcome.error());
}

void Cloud_siemClient::postEventDisposeAndWhiteruleListAsync(const PostEventDisposeAndWhiteruleListRequest& request, const PostEventDisposeAndWhiteruleListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, postEventDisposeAndWhiteruleList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Cloud_siemClient::PostEventDisposeAndWhiteruleListOutcomeCallable Cloud_siemClient::postEventDisposeAndWhiteruleListCallable(const PostEventDisposeAndWhiteruleListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PostEventDisposeAndWhiteruleListOutcome()>>(
			[this, request]()
			{
			return this->postEventDisposeAndWhiteruleList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Cloud_siemClient::PostEventWhiteruleListOutcome Cloud_siemClient::postEventWhiteruleList(const PostEventWhiteruleListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PostEventWhiteruleListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PostEventWhiteruleListOutcome(PostEventWhiteruleListResult(outcome.result()));
	else
		return PostEventWhiteruleListOutcome(outcome.error());
}

void Cloud_siemClient::postEventWhiteruleListAsync(const PostEventWhiteruleListRequest& request, const PostEventWhiteruleListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, postEventWhiteruleList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Cloud_siemClient::PostEventWhiteruleListOutcomeCallable Cloud_siemClient::postEventWhiteruleListCallable(const PostEventWhiteruleListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PostEventWhiteruleListOutcome()>>(
			[this, request]()
			{
			return this->postEventWhiteruleList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Cloud_siemClient::PostFinishCustomizeRuleTestOutcome Cloud_siemClient::postFinishCustomizeRuleTest(const PostFinishCustomizeRuleTestRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PostFinishCustomizeRuleTestOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PostFinishCustomizeRuleTestOutcome(PostFinishCustomizeRuleTestResult(outcome.result()));
	else
		return PostFinishCustomizeRuleTestOutcome(outcome.error());
}

void Cloud_siemClient::postFinishCustomizeRuleTestAsync(const PostFinishCustomizeRuleTestRequest& request, const PostFinishCustomizeRuleTestAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, postFinishCustomizeRuleTest(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Cloud_siemClient::PostFinishCustomizeRuleTestOutcomeCallable Cloud_siemClient::postFinishCustomizeRuleTestCallable(const PostFinishCustomizeRuleTestRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PostFinishCustomizeRuleTestOutcome()>>(
			[this, request]()
			{
			return this->postFinishCustomizeRuleTest(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Cloud_siemClient::PostRuleStatusChangeOutcome Cloud_siemClient::postRuleStatusChange(const PostRuleStatusChangeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PostRuleStatusChangeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PostRuleStatusChangeOutcome(PostRuleStatusChangeResult(outcome.result()));
	else
		return PostRuleStatusChangeOutcome(outcome.error());
}

void Cloud_siemClient::postRuleStatusChangeAsync(const PostRuleStatusChangeRequest& request, const PostRuleStatusChangeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, postRuleStatusChange(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Cloud_siemClient::PostRuleStatusChangeOutcomeCallable Cloud_siemClient::postRuleStatusChangeCallable(const PostRuleStatusChangeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PostRuleStatusChangeOutcome()>>(
			[this, request]()
			{
			return this->postRuleStatusChange(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Cloud_siemClient::RestoreCapacityOutcome Cloud_siemClient::restoreCapacity(const RestoreCapacityRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RestoreCapacityOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RestoreCapacityOutcome(RestoreCapacityResult(outcome.result()));
	else
		return RestoreCapacityOutcome(outcome.error());
}

void Cloud_siemClient::restoreCapacityAsync(const RestoreCapacityRequest& request, const RestoreCapacityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, restoreCapacity(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Cloud_siemClient::RestoreCapacityOutcomeCallable Cloud_siemClient::restoreCapacityCallable(const RestoreCapacityRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RestoreCapacityOutcome()>>(
			[this, request]()
			{
			return this->restoreCapacity(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Cloud_siemClient::SetStorageOutcome Cloud_siemClient::setStorage(const SetStorageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetStorageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetStorageOutcome(SetStorageResult(outcome.result()));
	else
		return SetStorageOutcome(outcome.error());
}

void Cloud_siemClient::setStorageAsync(const SetStorageRequest& request, const SetStorageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setStorage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Cloud_siemClient::SetStorageOutcomeCallable Cloud_siemClient::setStorageCallable(const SetStorageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetStorageOutcome()>>(
			[this, request]()
			{
			return this->setStorage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Cloud_siemClient::SubmitImportLogTasksOutcome Cloud_siemClient::submitImportLogTasks(const SubmitImportLogTasksRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SubmitImportLogTasksOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SubmitImportLogTasksOutcome(SubmitImportLogTasksResult(outcome.result()));
	else
		return SubmitImportLogTasksOutcome(outcome.error());
}

void Cloud_siemClient::submitImportLogTasksAsync(const SubmitImportLogTasksRequest& request, const SubmitImportLogTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, submitImportLogTasks(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Cloud_siemClient::SubmitImportLogTasksOutcomeCallable Cloud_siemClient::submitImportLogTasksCallable(const SubmitImportLogTasksRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SubmitImportLogTasksOutcome()>>(
			[this, request]()
			{
			return this->submitImportLogTasks(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Cloud_siemClient::UpdateAutomateResponseConfigStatusOutcome Cloud_siemClient::updateAutomateResponseConfigStatus(const UpdateAutomateResponseConfigStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateAutomateResponseConfigStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateAutomateResponseConfigStatusOutcome(UpdateAutomateResponseConfigStatusResult(outcome.result()));
	else
		return UpdateAutomateResponseConfigStatusOutcome(outcome.error());
}

void Cloud_siemClient::updateAutomateResponseConfigStatusAsync(const UpdateAutomateResponseConfigStatusRequest& request, const UpdateAutomateResponseConfigStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateAutomateResponseConfigStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Cloud_siemClient::UpdateAutomateResponseConfigStatusOutcomeCallable Cloud_siemClient::updateAutomateResponseConfigStatusCallable(const UpdateAutomateResponseConfigStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateAutomateResponseConfigStatusOutcome()>>(
			[this, request]()
			{
			return this->updateAutomateResponseConfigStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Cloud_siemClient::UpdateWhiteRuleListOutcome Cloud_siemClient::updateWhiteRuleList(const UpdateWhiteRuleListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateWhiteRuleListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateWhiteRuleListOutcome(UpdateWhiteRuleListResult(outcome.result()));
	else
		return UpdateWhiteRuleListOutcome(outcome.error());
}

void Cloud_siemClient::updateWhiteRuleListAsync(const UpdateWhiteRuleListRequest& request, const UpdateWhiteRuleListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateWhiteRuleList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Cloud_siemClient::UpdateWhiteRuleListOutcomeCallable Cloud_siemClient::updateWhiteRuleListCallable(const UpdateWhiteRuleListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateWhiteRuleListOutcome()>>(
			[this, request]()
			{
			return this->updateWhiteRuleList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

