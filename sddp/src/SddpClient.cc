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

#include <alibabacloud/sddp/SddpClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Sddp;
using namespace AlibabaCloud::Sddp::Model;

namespace
{
	const std::string SERVICE_NAME = "Sddp";
}

SddpClient::SddpClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "sddp");
}

SddpClient::SddpClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "sddp");
}

SddpClient::SddpClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "sddp");
}

SddpClient::~SddpClient()
{}

SddpClient::CreateConfigOutcome SddpClient::createConfig(const CreateConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateConfigOutcome(CreateConfigResult(outcome.result()));
	else
		return CreateConfigOutcome(outcome.error());
}

void SddpClient::createConfigAsync(const CreateConfigRequest& request, const CreateConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SddpClient::CreateConfigOutcomeCallable SddpClient::createConfigCallable(const CreateConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateConfigOutcome()>>(
			[this, request]()
			{
			return this->createConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SddpClient::CreateDataLimitOutcome SddpClient::createDataLimit(const CreateDataLimitRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateDataLimitOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateDataLimitOutcome(CreateDataLimitResult(outcome.result()));
	else
		return CreateDataLimitOutcome(outcome.error());
}

void SddpClient::createDataLimitAsync(const CreateDataLimitRequest& request, const CreateDataLimitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createDataLimit(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SddpClient::CreateDataLimitOutcomeCallable SddpClient::createDataLimitCallable(const CreateDataLimitRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateDataLimitOutcome()>>(
			[this, request]()
			{
			return this->createDataLimit(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SddpClient::CreateRuleOutcome SddpClient::createRule(const CreateRuleRequest &request) const
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

void SddpClient::createRuleAsync(const CreateRuleRequest& request, const CreateRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SddpClient::CreateRuleOutcomeCallable SddpClient::createRuleCallable(const CreateRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateRuleOutcome()>>(
			[this, request]()
			{
			return this->createRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SddpClient::CreateScanTaskOutcome SddpClient::createScanTask(const CreateScanTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateScanTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateScanTaskOutcome(CreateScanTaskResult(outcome.result()));
	else
		return CreateScanTaskOutcome(outcome.error());
}

void SddpClient::createScanTaskAsync(const CreateScanTaskRequest& request, const CreateScanTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createScanTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SddpClient::CreateScanTaskOutcomeCallable SddpClient::createScanTaskCallable(const CreateScanTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateScanTaskOutcome()>>(
			[this, request]()
			{
			return this->createScanTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SddpClient::CreateSlrRoleOutcome SddpClient::createSlrRole(const CreateSlrRoleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateSlrRoleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateSlrRoleOutcome(CreateSlrRoleResult(outcome.result()));
	else
		return CreateSlrRoleOutcome(outcome.error());
}

void SddpClient::createSlrRoleAsync(const CreateSlrRoleRequest& request, const CreateSlrRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createSlrRole(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SddpClient::CreateSlrRoleOutcomeCallable SddpClient::createSlrRoleCallable(const CreateSlrRoleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateSlrRoleOutcome()>>(
			[this, request]()
			{
			return this->createSlrRole(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SddpClient::DeleteDataLimitOutcome SddpClient::deleteDataLimit(const DeleteDataLimitRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteDataLimitOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteDataLimitOutcome(DeleteDataLimitResult(outcome.result()));
	else
		return DeleteDataLimitOutcome(outcome.error());
}

void SddpClient::deleteDataLimitAsync(const DeleteDataLimitRequest& request, const DeleteDataLimitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteDataLimit(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SddpClient::DeleteDataLimitOutcomeCallable SddpClient::deleteDataLimitCallable(const DeleteDataLimitRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteDataLimitOutcome()>>(
			[this, request]()
			{
			return this->deleteDataLimit(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SddpClient::DeleteRuleOutcome SddpClient::deleteRule(const DeleteRuleRequest &request) const
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

void SddpClient::deleteRuleAsync(const DeleteRuleRequest& request, const DeleteRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SddpClient::DeleteRuleOutcomeCallable SddpClient::deleteRuleCallable(const DeleteRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteRuleOutcome()>>(
			[this, request]()
			{
			return this->deleteRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SddpClient::DescribeCategoryTemplateListOutcome SddpClient::describeCategoryTemplateList(const DescribeCategoryTemplateListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCategoryTemplateListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCategoryTemplateListOutcome(DescribeCategoryTemplateListResult(outcome.result()));
	else
		return DescribeCategoryTemplateListOutcome(outcome.error());
}

void SddpClient::describeCategoryTemplateListAsync(const DescribeCategoryTemplateListRequest& request, const DescribeCategoryTemplateListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCategoryTemplateList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SddpClient::DescribeCategoryTemplateListOutcomeCallable SddpClient::describeCategoryTemplateListCallable(const DescribeCategoryTemplateListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCategoryTemplateListOutcome()>>(
			[this, request]()
			{
			return this->describeCategoryTemplateList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SddpClient::DescribeCategoryTemplateRuleListOutcome SddpClient::describeCategoryTemplateRuleList(const DescribeCategoryTemplateRuleListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCategoryTemplateRuleListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCategoryTemplateRuleListOutcome(DescribeCategoryTemplateRuleListResult(outcome.result()));
	else
		return DescribeCategoryTemplateRuleListOutcome(outcome.error());
}

void SddpClient::describeCategoryTemplateRuleListAsync(const DescribeCategoryTemplateRuleListRequest& request, const DescribeCategoryTemplateRuleListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCategoryTemplateRuleList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SddpClient::DescribeCategoryTemplateRuleListOutcomeCallable SddpClient::describeCategoryTemplateRuleListCallable(const DescribeCategoryTemplateRuleListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCategoryTemplateRuleListOutcome()>>(
			[this, request]()
			{
			return this->describeCategoryTemplateRuleList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SddpClient::DescribeColumnsOutcome SddpClient::describeColumns(const DescribeColumnsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeColumnsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeColumnsOutcome(DescribeColumnsResult(outcome.result()));
	else
		return DescribeColumnsOutcome(outcome.error());
}

void SddpClient::describeColumnsAsync(const DescribeColumnsRequest& request, const DescribeColumnsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeColumns(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SddpClient::DescribeColumnsOutcomeCallable SddpClient::describeColumnsCallable(const DescribeColumnsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeColumnsOutcome()>>(
			[this, request]()
			{
			return this->describeColumns(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SddpClient::DescribeColumnsV2Outcome SddpClient::describeColumnsV2(const DescribeColumnsV2Request &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeColumnsV2Outcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeColumnsV2Outcome(DescribeColumnsV2Result(outcome.result()));
	else
		return DescribeColumnsV2Outcome(outcome.error());
}

void SddpClient::describeColumnsV2Async(const DescribeColumnsV2Request& request, const DescribeColumnsV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeColumnsV2(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SddpClient::DescribeColumnsV2OutcomeCallable SddpClient::describeColumnsV2Callable(const DescribeColumnsV2Request &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeColumnsV2Outcome()>>(
			[this, request]()
			{
			return this->describeColumnsV2(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SddpClient::DescribeConfigsOutcome SddpClient::describeConfigs(const DescribeConfigsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeConfigsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeConfigsOutcome(DescribeConfigsResult(outcome.result()));
	else
		return DescribeConfigsOutcome(outcome.error());
}

void SddpClient::describeConfigsAsync(const DescribeConfigsRequest& request, const DescribeConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeConfigs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SddpClient::DescribeConfigsOutcomeCallable SddpClient::describeConfigsCallable(const DescribeConfigsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeConfigsOutcome()>>(
			[this, request]()
			{
			return this->describeConfigs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SddpClient::DescribeDataAssetsOutcome SddpClient::describeDataAssets(const DescribeDataAssetsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDataAssetsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDataAssetsOutcome(DescribeDataAssetsResult(outcome.result()));
	else
		return DescribeDataAssetsOutcome(outcome.error());
}

void SddpClient::describeDataAssetsAsync(const DescribeDataAssetsRequest& request, const DescribeDataAssetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDataAssets(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SddpClient::DescribeDataAssetsOutcomeCallable SddpClient::describeDataAssetsCallable(const DescribeDataAssetsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDataAssetsOutcome()>>(
			[this, request]()
			{
			return this->describeDataAssets(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SddpClient::DescribeDataLimitDetailOutcome SddpClient::describeDataLimitDetail(const DescribeDataLimitDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDataLimitDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDataLimitDetailOutcome(DescribeDataLimitDetailResult(outcome.result()));
	else
		return DescribeDataLimitDetailOutcome(outcome.error());
}

void SddpClient::describeDataLimitDetailAsync(const DescribeDataLimitDetailRequest& request, const DescribeDataLimitDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDataLimitDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SddpClient::DescribeDataLimitDetailOutcomeCallable SddpClient::describeDataLimitDetailCallable(const DescribeDataLimitDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDataLimitDetailOutcome()>>(
			[this, request]()
			{
			return this->describeDataLimitDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SddpClient::DescribeDataLimitSetOutcome SddpClient::describeDataLimitSet(const DescribeDataLimitSetRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDataLimitSetOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDataLimitSetOutcome(DescribeDataLimitSetResult(outcome.result()));
	else
		return DescribeDataLimitSetOutcome(outcome.error());
}

void SddpClient::describeDataLimitSetAsync(const DescribeDataLimitSetRequest& request, const DescribeDataLimitSetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDataLimitSet(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SddpClient::DescribeDataLimitSetOutcomeCallable SddpClient::describeDataLimitSetCallable(const DescribeDataLimitSetRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDataLimitSetOutcome()>>(
			[this, request]()
			{
			return this->describeDataLimitSet(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SddpClient::DescribeDataLimitsOutcome SddpClient::describeDataLimits(const DescribeDataLimitsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDataLimitsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDataLimitsOutcome(DescribeDataLimitsResult(outcome.result()));
	else
		return DescribeDataLimitsOutcome(outcome.error());
}

void SddpClient::describeDataLimitsAsync(const DescribeDataLimitsRequest& request, const DescribeDataLimitsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDataLimits(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SddpClient::DescribeDataLimitsOutcomeCallable SddpClient::describeDataLimitsCallable(const DescribeDataLimitsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDataLimitsOutcome()>>(
			[this, request]()
			{
			return this->describeDataLimits(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SddpClient::DescribeDataMaskingRunHistoryOutcome SddpClient::describeDataMaskingRunHistory(const DescribeDataMaskingRunHistoryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDataMaskingRunHistoryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDataMaskingRunHistoryOutcome(DescribeDataMaskingRunHistoryResult(outcome.result()));
	else
		return DescribeDataMaskingRunHistoryOutcome(outcome.error());
}

void SddpClient::describeDataMaskingRunHistoryAsync(const DescribeDataMaskingRunHistoryRequest& request, const DescribeDataMaskingRunHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDataMaskingRunHistory(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SddpClient::DescribeDataMaskingRunHistoryOutcomeCallable SddpClient::describeDataMaskingRunHistoryCallable(const DescribeDataMaskingRunHistoryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDataMaskingRunHistoryOutcome()>>(
			[this, request]()
			{
			return this->describeDataMaskingRunHistory(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SddpClient::DescribeDataMaskingTasksOutcome SddpClient::describeDataMaskingTasks(const DescribeDataMaskingTasksRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDataMaskingTasksOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDataMaskingTasksOutcome(DescribeDataMaskingTasksResult(outcome.result()));
	else
		return DescribeDataMaskingTasksOutcome(outcome.error());
}

void SddpClient::describeDataMaskingTasksAsync(const DescribeDataMaskingTasksRequest& request, const DescribeDataMaskingTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDataMaskingTasks(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SddpClient::DescribeDataMaskingTasksOutcomeCallable SddpClient::describeDataMaskingTasksCallable(const DescribeDataMaskingTasksRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDataMaskingTasksOutcome()>>(
			[this, request]()
			{
			return this->describeDataMaskingTasks(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SddpClient::DescribeDataObjectColumnDetailOutcome SddpClient::describeDataObjectColumnDetail(const DescribeDataObjectColumnDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDataObjectColumnDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDataObjectColumnDetailOutcome(DescribeDataObjectColumnDetailResult(outcome.result()));
	else
		return DescribeDataObjectColumnDetailOutcome(outcome.error());
}

void SddpClient::describeDataObjectColumnDetailAsync(const DescribeDataObjectColumnDetailRequest& request, const DescribeDataObjectColumnDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDataObjectColumnDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SddpClient::DescribeDataObjectColumnDetailOutcomeCallable SddpClient::describeDataObjectColumnDetailCallable(const DescribeDataObjectColumnDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDataObjectColumnDetailOutcome()>>(
			[this, request]()
			{
			return this->describeDataObjectColumnDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SddpClient::DescribeDataObjectColumnDetailV2Outcome SddpClient::describeDataObjectColumnDetailV2(const DescribeDataObjectColumnDetailV2Request &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDataObjectColumnDetailV2Outcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDataObjectColumnDetailV2Outcome(DescribeDataObjectColumnDetailV2Result(outcome.result()));
	else
		return DescribeDataObjectColumnDetailV2Outcome(outcome.error());
}

void SddpClient::describeDataObjectColumnDetailV2Async(const DescribeDataObjectColumnDetailV2Request& request, const DescribeDataObjectColumnDetailV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDataObjectColumnDetailV2(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SddpClient::DescribeDataObjectColumnDetailV2OutcomeCallable SddpClient::describeDataObjectColumnDetailV2Callable(const DescribeDataObjectColumnDetailV2Request &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDataObjectColumnDetailV2Outcome()>>(
			[this, request]()
			{
			return this->describeDataObjectColumnDetailV2(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SddpClient::DescribeDataObjectsOutcome SddpClient::describeDataObjects(const DescribeDataObjectsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDataObjectsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDataObjectsOutcome(DescribeDataObjectsResult(outcome.result()));
	else
		return DescribeDataObjectsOutcome(outcome.error());
}

void SddpClient::describeDataObjectsAsync(const DescribeDataObjectsRequest& request, const DescribeDataObjectsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDataObjects(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SddpClient::DescribeDataObjectsOutcomeCallable SddpClient::describeDataObjectsCallable(const DescribeDataObjectsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDataObjectsOutcome()>>(
			[this, request]()
			{
			return this->describeDataObjects(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SddpClient::DescribeDocTypesOutcome SddpClient::describeDocTypes(const DescribeDocTypesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDocTypesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDocTypesOutcome(DescribeDocTypesResult(outcome.result()));
	else
		return DescribeDocTypesOutcome(outcome.error());
}

void SddpClient::describeDocTypesAsync(const DescribeDocTypesRequest& request, const DescribeDocTypesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDocTypes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SddpClient::DescribeDocTypesOutcomeCallable SddpClient::describeDocTypesCallable(const DescribeDocTypesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDocTypesOutcome()>>(
			[this, request]()
			{
			return this->describeDocTypes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SddpClient::DescribeEventDetailOutcome SddpClient::describeEventDetail(const DescribeEventDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeEventDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeEventDetailOutcome(DescribeEventDetailResult(outcome.result()));
	else
		return DescribeEventDetailOutcome(outcome.error());
}

void SddpClient::describeEventDetailAsync(const DescribeEventDetailRequest& request, const DescribeEventDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeEventDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SddpClient::DescribeEventDetailOutcomeCallable SddpClient::describeEventDetailCallable(const DescribeEventDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeEventDetailOutcome()>>(
			[this, request]()
			{
			return this->describeEventDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SddpClient::DescribeEventTypesOutcome SddpClient::describeEventTypes(const DescribeEventTypesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeEventTypesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeEventTypesOutcome(DescribeEventTypesResult(outcome.result()));
	else
		return DescribeEventTypesOutcome(outcome.error());
}

void SddpClient::describeEventTypesAsync(const DescribeEventTypesRequest& request, const DescribeEventTypesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeEventTypes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SddpClient::DescribeEventTypesOutcomeCallable SddpClient::describeEventTypesCallable(const DescribeEventTypesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeEventTypesOutcome()>>(
			[this, request]()
			{
			return this->describeEventTypes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SddpClient::DescribeEventsOutcome SddpClient::describeEvents(const DescribeEventsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeEventsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeEventsOutcome(DescribeEventsResult(outcome.result()));
	else
		return DescribeEventsOutcome(outcome.error());
}

void SddpClient::describeEventsAsync(const DescribeEventsRequest& request, const DescribeEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeEvents(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SddpClient::DescribeEventsOutcomeCallable SddpClient::describeEventsCallable(const DescribeEventsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeEventsOutcome()>>(
			[this, request]()
			{
			return this->describeEvents(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SddpClient::DescribeInstanceSourcesOutcome SddpClient::describeInstanceSources(const DescribeInstanceSourcesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeInstanceSourcesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeInstanceSourcesOutcome(DescribeInstanceSourcesResult(outcome.result()));
	else
		return DescribeInstanceSourcesOutcome(outcome.error());
}

void SddpClient::describeInstanceSourcesAsync(const DescribeInstanceSourcesRequest& request, const DescribeInstanceSourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeInstanceSources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SddpClient::DescribeInstanceSourcesOutcomeCallable SddpClient::describeInstanceSourcesCallable(const DescribeInstanceSourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeInstanceSourcesOutcome()>>(
			[this, request]()
			{
			return this->describeInstanceSources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SddpClient::DescribeInstancesOutcome SddpClient::describeInstances(const DescribeInstancesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeInstancesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeInstancesOutcome(DescribeInstancesResult(outcome.result()));
	else
		return DescribeInstancesOutcome(outcome.error());
}

void SddpClient::describeInstancesAsync(const DescribeInstancesRequest& request, const DescribeInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SddpClient::DescribeInstancesOutcomeCallable SddpClient::describeInstancesCallable(const DescribeInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeInstancesOutcome()>>(
			[this, request]()
			{
			return this->describeInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SddpClient::DescribeOssObjectDetailOutcome SddpClient::describeOssObjectDetail(const DescribeOssObjectDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeOssObjectDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeOssObjectDetailOutcome(DescribeOssObjectDetailResult(outcome.result()));
	else
		return DescribeOssObjectDetailOutcome(outcome.error());
}

void SddpClient::describeOssObjectDetailAsync(const DescribeOssObjectDetailRequest& request, const DescribeOssObjectDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeOssObjectDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SddpClient::DescribeOssObjectDetailOutcomeCallable SddpClient::describeOssObjectDetailCallable(const DescribeOssObjectDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeOssObjectDetailOutcome()>>(
			[this, request]()
			{
			return this->describeOssObjectDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SddpClient::DescribeOssObjectDetailV2Outcome SddpClient::describeOssObjectDetailV2(const DescribeOssObjectDetailV2Request &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeOssObjectDetailV2Outcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeOssObjectDetailV2Outcome(DescribeOssObjectDetailV2Result(outcome.result()));
	else
		return DescribeOssObjectDetailV2Outcome(outcome.error());
}

void SddpClient::describeOssObjectDetailV2Async(const DescribeOssObjectDetailV2Request& request, const DescribeOssObjectDetailV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeOssObjectDetailV2(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SddpClient::DescribeOssObjectDetailV2OutcomeCallable SddpClient::describeOssObjectDetailV2Callable(const DescribeOssObjectDetailV2Request &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeOssObjectDetailV2Outcome()>>(
			[this, request]()
			{
			return this->describeOssObjectDetailV2(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SddpClient::DescribeOssObjectsOutcome SddpClient::describeOssObjects(const DescribeOssObjectsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeOssObjectsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeOssObjectsOutcome(DescribeOssObjectsResult(outcome.result()));
	else
		return DescribeOssObjectsOutcome(outcome.error());
}

void SddpClient::describeOssObjectsAsync(const DescribeOssObjectsRequest& request, const DescribeOssObjectsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeOssObjects(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SddpClient::DescribeOssObjectsOutcomeCallable SddpClient::describeOssObjectsCallable(const DescribeOssObjectsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeOssObjectsOutcome()>>(
			[this, request]()
			{
			return this->describeOssObjects(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SddpClient::DescribePackagesOutcome SddpClient::describePackages(const DescribePackagesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribePackagesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribePackagesOutcome(DescribePackagesResult(outcome.result()));
	else
		return DescribePackagesOutcome(outcome.error());
}

void SddpClient::describePackagesAsync(const DescribePackagesRequest& request, const DescribePackagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describePackages(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SddpClient::DescribePackagesOutcomeCallable SddpClient::describePackagesCallable(const DescribePackagesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribePackagesOutcome()>>(
			[this, request]()
			{
			return this->describePackages(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SddpClient::DescribeParentInstanceOutcome SddpClient::describeParentInstance(const DescribeParentInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeParentInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeParentInstanceOutcome(DescribeParentInstanceResult(outcome.result()));
	else
		return DescribeParentInstanceOutcome(outcome.error());
}

void SddpClient::describeParentInstanceAsync(const DescribeParentInstanceRequest& request, const DescribeParentInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeParentInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SddpClient::DescribeParentInstanceOutcomeCallable SddpClient::describeParentInstanceCallable(const DescribeParentInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeParentInstanceOutcome()>>(
			[this, request]()
			{
			return this->describeParentInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SddpClient::DescribeRiskLevelsOutcome SddpClient::describeRiskLevels(const DescribeRiskLevelsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRiskLevelsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRiskLevelsOutcome(DescribeRiskLevelsResult(outcome.result()));
	else
		return DescribeRiskLevelsOutcome(outcome.error());
}

void SddpClient::describeRiskLevelsAsync(const DescribeRiskLevelsRequest& request, const DescribeRiskLevelsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRiskLevels(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SddpClient::DescribeRiskLevelsOutcomeCallable SddpClient::describeRiskLevelsCallable(const DescribeRiskLevelsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRiskLevelsOutcome()>>(
			[this, request]()
			{
			return this->describeRiskLevels(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SddpClient::DescribeRulesOutcome SddpClient::describeRules(const DescribeRulesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRulesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRulesOutcome(DescribeRulesResult(outcome.result()));
	else
		return DescribeRulesOutcome(outcome.error());
}

void SddpClient::describeRulesAsync(const DescribeRulesRequest& request, const DescribeRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRules(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SddpClient::DescribeRulesOutcomeCallable SddpClient::describeRulesCallable(const DescribeRulesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRulesOutcome()>>(
			[this, request]()
			{
			return this->describeRules(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SddpClient::DescribeTablesOutcome SddpClient::describeTables(const DescribeTablesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeTablesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeTablesOutcome(DescribeTablesResult(outcome.result()));
	else
		return DescribeTablesOutcome(outcome.error());
}

void SddpClient::describeTablesAsync(const DescribeTablesRequest& request, const DescribeTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeTables(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SddpClient::DescribeTablesOutcomeCallable SddpClient::describeTablesCallable(const DescribeTablesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeTablesOutcome()>>(
			[this, request]()
			{
			return this->describeTables(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SddpClient::DescribeTemplateAllRulesOutcome SddpClient::describeTemplateAllRules(const DescribeTemplateAllRulesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeTemplateAllRulesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeTemplateAllRulesOutcome(DescribeTemplateAllRulesResult(outcome.result()));
	else
		return DescribeTemplateAllRulesOutcome(outcome.error());
}

void SddpClient::describeTemplateAllRulesAsync(const DescribeTemplateAllRulesRequest& request, const DescribeTemplateAllRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeTemplateAllRules(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SddpClient::DescribeTemplateAllRulesOutcomeCallable SddpClient::describeTemplateAllRulesCallable(const DescribeTemplateAllRulesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeTemplateAllRulesOutcome()>>(
			[this, request]()
			{
			return this->describeTemplateAllRules(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SddpClient::DescribeUserStatusOutcome SddpClient::describeUserStatus(const DescribeUserStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeUserStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeUserStatusOutcome(DescribeUserStatusResult(outcome.result()));
	else
		return DescribeUserStatusOutcome(outcome.error());
}

void SddpClient::describeUserStatusAsync(const DescribeUserStatusRequest& request, const DescribeUserStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeUserStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SddpClient::DescribeUserStatusOutcomeCallable SddpClient::describeUserStatusCallable(const DescribeUserStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeUserStatusOutcome()>>(
			[this, request]()
			{
			return this->describeUserStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SddpClient::DisableUserConfigOutcome SddpClient::disableUserConfig(const DisableUserConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DisableUserConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DisableUserConfigOutcome(DisableUserConfigResult(outcome.result()));
	else
		return DisableUserConfigOutcome(outcome.error());
}

void SddpClient::disableUserConfigAsync(const DisableUserConfigRequest& request, const DisableUserConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, disableUserConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SddpClient::DisableUserConfigOutcomeCallable SddpClient::disableUserConfigCallable(const DisableUserConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DisableUserConfigOutcome()>>(
			[this, request]()
			{
			return this->disableUserConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SddpClient::ExecDatamaskOutcome SddpClient::execDatamask(const ExecDatamaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ExecDatamaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ExecDatamaskOutcome(ExecDatamaskResult(outcome.result()));
	else
		return ExecDatamaskOutcome(outcome.error());
}

void SddpClient::execDatamaskAsync(const ExecDatamaskRequest& request, const ExecDatamaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, execDatamask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SddpClient::ExecDatamaskOutcomeCallable SddpClient::execDatamaskCallable(const ExecDatamaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ExecDatamaskOutcome()>>(
			[this, request]()
			{
			return this->execDatamask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SddpClient::ManualTriggerMaskingProcessOutcome SddpClient::manualTriggerMaskingProcess(const ManualTriggerMaskingProcessRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ManualTriggerMaskingProcessOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ManualTriggerMaskingProcessOutcome(ManualTriggerMaskingProcessResult(outcome.result()));
	else
		return ManualTriggerMaskingProcessOutcome(outcome.error());
}

void SddpClient::manualTriggerMaskingProcessAsync(const ManualTriggerMaskingProcessRequest& request, const ManualTriggerMaskingProcessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, manualTriggerMaskingProcess(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SddpClient::ManualTriggerMaskingProcessOutcomeCallable SddpClient::manualTriggerMaskingProcessCallable(const ManualTriggerMaskingProcessRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ManualTriggerMaskingProcessOutcome()>>(
			[this, request]()
			{
			return this->manualTriggerMaskingProcess(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SddpClient::ModifyDataLimitOutcome SddpClient::modifyDataLimit(const ModifyDataLimitRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDataLimitOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDataLimitOutcome(ModifyDataLimitResult(outcome.result()));
	else
		return ModifyDataLimitOutcome(outcome.error());
}

void SddpClient::modifyDataLimitAsync(const ModifyDataLimitRequest& request, const ModifyDataLimitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDataLimit(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SddpClient::ModifyDataLimitOutcomeCallable SddpClient::modifyDataLimitCallable(const ModifyDataLimitRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDataLimitOutcome()>>(
			[this, request]()
			{
			return this->modifyDataLimit(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SddpClient::ModifyDefaultLevelOutcome SddpClient::modifyDefaultLevel(const ModifyDefaultLevelRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDefaultLevelOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDefaultLevelOutcome(ModifyDefaultLevelResult(outcome.result()));
	else
		return ModifyDefaultLevelOutcome(outcome.error());
}

void SddpClient::modifyDefaultLevelAsync(const ModifyDefaultLevelRequest& request, const ModifyDefaultLevelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDefaultLevel(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SddpClient::ModifyDefaultLevelOutcomeCallable SddpClient::modifyDefaultLevelCallable(const ModifyDefaultLevelRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDefaultLevelOutcome()>>(
			[this, request]()
			{
			return this->modifyDefaultLevel(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SddpClient::ModifyEventStatusOutcome SddpClient::modifyEventStatus(const ModifyEventStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyEventStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyEventStatusOutcome(ModifyEventStatusResult(outcome.result()));
	else
		return ModifyEventStatusOutcome(outcome.error());
}

void SddpClient::modifyEventStatusAsync(const ModifyEventStatusRequest& request, const ModifyEventStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyEventStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SddpClient::ModifyEventStatusOutcomeCallable SddpClient::modifyEventStatusCallable(const ModifyEventStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyEventStatusOutcome()>>(
			[this, request]()
			{
			return this->modifyEventStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SddpClient::ModifyEventTypeStatusOutcome SddpClient::modifyEventTypeStatus(const ModifyEventTypeStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyEventTypeStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyEventTypeStatusOutcome(ModifyEventTypeStatusResult(outcome.result()));
	else
		return ModifyEventTypeStatusOutcome(outcome.error());
}

void SddpClient::modifyEventTypeStatusAsync(const ModifyEventTypeStatusRequest& request, const ModifyEventTypeStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyEventTypeStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SddpClient::ModifyEventTypeStatusOutcomeCallable SddpClient::modifyEventTypeStatusCallable(const ModifyEventTypeStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyEventTypeStatusOutcome()>>(
			[this, request]()
			{
			return this->modifyEventTypeStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SddpClient::ModifyReportTaskStatusOutcome SddpClient::modifyReportTaskStatus(const ModifyReportTaskStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyReportTaskStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyReportTaskStatusOutcome(ModifyReportTaskStatusResult(outcome.result()));
	else
		return ModifyReportTaskStatusOutcome(outcome.error());
}

void SddpClient::modifyReportTaskStatusAsync(const ModifyReportTaskStatusRequest& request, const ModifyReportTaskStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyReportTaskStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SddpClient::ModifyReportTaskStatusOutcomeCallable SddpClient::modifyReportTaskStatusCallable(const ModifyReportTaskStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyReportTaskStatusOutcome()>>(
			[this, request]()
			{
			return this->modifyReportTaskStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SddpClient::ModifyRuleOutcome SddpClient::modifyRule(const ModifyRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyRuleOutcome(ModifyRuleResult(outcome.result()));
	else
		return ModifyRuleOutcome(outcome.error());
}

void SddpClient::modifyRuleAsync(const ModifyRuleRequest& request, const ModifyRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SddpClient::ModifyRuleOutcomeCallable SddpClient::modifyRuleCallable(const ModifyRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyRuleOutcome()>>(
			[this, request]()
			{
			return this->modifyRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SddpClient::ModifyRuleStatusOutcome SddpClient::modifyRuleStatus(const ModifyRuleStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyRuleStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyRuleStatusOutcome(ModifyRuleStatusResult(outcome.result()));
	else
		return ModifyRuleStatusOutcome(outcome.error());
}

void SddpClient::modifyRuleStatusAsync(const ModifyRuleStatusRequest& request, const ModifyRuleStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyRuleStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SddpClient::ModifyRuleStatusOutcomeCallable SddpClient::modifyRuleStatusCallable(const ModifyRuleStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyRuleStatusOutcome()>>(
			[this, request]()
			{
			return this->modifyRuleStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SddpClient::StopMaskingProcessOutcome SddpClient::stopMaskingProcess(const StopMaskingProcessRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StopMaskingProcessOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StopMaskingProcessOutcome(StopMaskingProcessResult(outcome.result()));
	else
		return StopMaskingProcessOutcome(outcome.error());
}

void SddpClient::stopMaskingProcessAsync(const StopMaskingProcessRequest& request, const StopMaskingProcessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, stopMaskingProcess(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SddpClient::StopMaskingProcessOutcomeCallable SddpClient::stopMaskingProcessCallable(const StopMaskingProcessRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StopMaskingProcessOutcome()>>(
			[this, request]()
			{
			return this->stopMaskingProcess(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

