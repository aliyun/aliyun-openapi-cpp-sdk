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

#include <alibabacloud/swas-open/SWAS_OPENClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::SWAS_OPEN;
using namespace AlibabaCloud::SWAS_OPEN::Model;

namespace
{
	const std::string SERVICE_NAME = "SWAS-OPEN";
}

SWAS_OPENClient::SWAS_OPENClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "SWAS-OPEN");
}

SWAS_OPENClient::SWAS_OPENClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "SWAS-OPEN");
}

SWAS_OPENClient::SWAS_OPENClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "SWAS-OPEN");
}

SWAS_OPENClient::~SWAS_OPENClient()
{}

SWAS_OPENClient::AllocatePublicConnectionOutcome SWAS_OPENClient::allocatePublicConnection(const AllocatePublicConnectionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AllocatePublicConnectionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AllocatePublicConnectionOutcome(AllocatePublicConnectionResult(outcome.result()));
	else
		return AllocatePublicConnectionOutcome(outcome.error());
}

void SWAS_OPENClient::allocatePublicConnectionAsync(const AllocatePublicConnectionRequest& request, const AllocatePublicConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, allocatePublicConnection(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SWAS_OPENClient::AllocatePublicConnectionOutcomeCallable SWAS_OPENClient::allocatePublicConnectionCallable(const AllocatePublicConnectionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AllocatePublicConnectionOutcome()>>(
			[this, request]()
			{
			return this->allocatePublicConnection(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SWAS_OPENClient::CreateCustomImageOutcome SWAS_OPENClient::createCustomImage(const CreateCustomImageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateCustomImageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateCustomImageOutcome(CreateCustomImageResult(outcome.result()));
	else
		return CreateCustomImageOutcome(outcome.error());
}

void SWAS_OPENClient::createCustomImageAsync(const CreateCustomImageRequest& request, const CreateCustomImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createCustomImage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SWAS_OPENClient::CreateCustomImageOutcomeCallable SWAS_OPENClient::createCustomImageCallable(const CreateCustomImageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateCustomImageOutcome()>>(
			[this, request]()
			{
			return this->createCustomImage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SWAS_OPENClient::CreateFirewallRuleOutcome SWAS_OPENClient::createFirewallRule(const CreateFirewallRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateFirewallRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateFirewallRuleOutcome(CreateFirewallRuleResult(outcome.result()));
	else
		return CreateFirewallRuleOutcome(outcome.error());
}

void SWAS_OPENClient::createFirewallRuleAsync(const CreateFirewallRuleRequest& request, const CreateFirewallRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createFirewallRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SWAS_OPENClient::CreateFirewallRuleOutcomeCallable SWAS_OPENClient::createFirewallRuleCallable(const CreateFirewallRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateFirewallRuleOutcome()>>(
			[this, request]()
			{
			return this->createFirewallRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SWAS_OPENClient::CreateInstancesOutcome SWAS_OPENClient::createInstances(const CreateInstancesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateInstancesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateInstancesOutcome(CreateInstancesResult(outcome.result()));
	else
		return CreateInstancesOutcome(outcome.error());
}

void SWAS_OPENClient::createInstancesAsync(const CreateInstancesRequest& request, const CreateInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SWAS_OPENClient::CreateInstancesOutcomeCallable SWAS_OPENClient::createInstancesCallable(const CreateInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateInstancesOutcome()>>(
			[this, request]()
			{
			return this->createInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SWAS_OPENClient::CreateSnapshotOutcome SWAS_OPENClient::createSnapshot(const CreateSnapshotRequest &request) const
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

void SWAS_OPENClient::createSnapshotAsync(const CreateSnapshotRequest& request, const CreateSnapshotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createSnapshot(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SWAS_OPENClient::CreateSnapshotOutcomeCallable SWAS_OPENClient::createSnapshotCallable(const CreateSnapshotRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateSnapshotOutcome()>>(
			[this, request]()
			{
			return this->createSnapshot(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SWAS_OPENClient::DeleteCustomImageOutcome SWAS_OPENClient::deleteCustomImage(const DeleteCustomImageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteCustomImageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteCustomImageOutcome(DeleteCustomImageResult(outcome.result()));
	else
		return DeleteCustomImageOutcome(outcome.error());
}

void SWAS_OPENClient::deleteCustomImageAsync(const DeleteCustomImageRequest& request, const DeleteCustomImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteCustomImage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SWAS_OPENClient::DeleteCustomImageOutcomeCallable SWAS_OPENClient::deleteCustomImageCallable(const DeleteCustomImageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteCustomImageOutcome()>>(
			[this, request]()
			{
			return this->deleteCustomImage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SWAS_OPENClient::DeleteFirewallRuleOutcome SWAS_OPENClient::deleteFirewallRule(const DeleteFirewallRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteFirewallRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteFirewallRuleOutcome(DeleteFirewallRuleResult(outcome.result()));
	else
		return DeleteFirewallRuleOutcome(outcome.error());
}

void SWAS_OPENClient::deleteFirewallRuleAsync(const DeleteFirewallRuleRequest& request, const DeleteFirewallRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteFirewallRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SWAS_OPENClient::DeleteFirewallRuleOutcomeCallable SWAS_OPENClient::deleteFirewallRuleCallable(const DeleteFirewallRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteFirewallRuleOutcome()>>(
			[this, request]()
			{
			return this->deleteFirewallRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SWAS_OPENClient::DeleteSnapshotOutcome SWAS_OPENClient::deleteSnapshot(const DeleteSnapshotRequest &request) const
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

void SWAS_OPENClient::deleteSnapshotAsync(const DeleteSnapshotRequest& request, const DeleteSnapshotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteSnapshot(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SWAS_OPENClient::DeleteSnapshotOutcomeCallable SWAS_OPENClient::deleteSnapshotCallable(const DeleteSnapshotRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteSnapshotOutcome()>>(
			[this, request]()
			{
			return this->deleteSnapshot(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SWAS_OPENClient::DescribeCloudAssistantStatusOutcome SWAS_OPENClient::describeCloudAssistantStatus(const DescribeCloudAssistantStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCloudAssistantStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCloudAssistantStatusOutcome(DescribeCloudAssistantStatusResult(outcome.result()));
	else
		return DescribeCloudAssistantStatusOutcome(outcome.error());
}

void SWAS_OPENClient::describeCloudAssistantStatusAsync(const DescribeCloudAssistantStatusRequest& request, const DescribeCloudAssistantStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCloudAssistantStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SWAS_OPENClient::DescribeCloudAssistantStatusOutcomeCallable SWAS_OPENClient::describeCloudAssistantStatusCallable(const DescribeCloudAssistantStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCloudAssistantStatusOutcome()>>(
			[this, request]()
			{
			return this->describeCloudAssistantStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SWAS_OPENClient::DescribeDatabaseErrorLogsOutcome SWAS_OPENClient::describeDatabaseErrorLogs(const DescribeDatabaseErrorLogsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDatabaseErrorLogsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDatabaseErrorLogsOutcome(DescribeDatabaseErrorLogsResult(outcome.result()));
	else
		return DescribeDatabaseErrorLogsOutcome(outcome.error());
}

void SWAS_OPENClient::describeDatabaseErrorLogsAsync(const DescribeDatabaseErrorLogsRequest& request, const DescribeDatabaseErrorLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDatabaseErrorLogs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SWAS_OPENClient::DescribeDatabaseErrorLogsOutcomeCallable SWAS_OPENClient::describeDatabaseErrorLogsCallable(const DescribeDatabaseErrorLogsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDatabaseErrorLogsOutcome()>>(
			[this, request]()
			{
			return this->describeDatabaseErrorLogs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SWAS_OPENClient::DescribeDatabaseInstanceMetricDataOutcome SWAS_OPENClient::describeDatabaseInstanceMetricData(const DescribeDatabaseInstanceMetricDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDatabaseInstanceMetricDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDatabaseInstanceMetricDataOutcome(DescribeDatabaseInstanceMetricDataResult(outcome.result()));
	else
		return DescribeDatabaseInstanceMetricDataOutcome(outcome.error());
}

void SWAS_OPENClient::describeDatabaseInstanceMetricDataAsync(const DescribeDatabaseInstanceMetricDataRequest& request, const DescribeDatabaseInstanceMetricDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDatabaseInstanceMetricData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SWAS_OPENClient::DescribeDatabaseInstanceMetricDataOutcomeCallable SWAS_OPENClient::describeDatabaseInstanceMetricDataCallable(const DescribeDatabaseInstanceMetricDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDatabaseInstanceMetricDataOutcome()>>(
			[this, request]()
			{
			return this->describeDatabaseInstanceMetricData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SWAS_OPENClient::DescribeDatabaseInstanceParametersOutcome SWAS_OPENClient::describeDatabaseInstanceParameters(const DescribeDatabaseInstanceParametersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDatabaseInstanceParametersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDatabaseInstanceParametersOutcome(DescribeDatabaseInstanceParametersResult(outcome.result()));
	else
		return DescribeDatabaseInstanceParametersOutcome(outcome.error());
}

void SWAS_OPENClient::describeDatabaseInstanceParametersAsync(const DescribeDatabaseInstanceParametersRequest& request, const DescribeDatabaseInstanceParametersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDatabaseInstanceParameters(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SWAS_OPENClient::DescribeDatabaseInstanceParametersOutcomeCallable SWAS_OPENClient::describeDatabaseInstanceParametersCallable(const DescribeDatabaseInstanceParametersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDatabaseInstanceParametersOutcome()>>(
			[this, request]()
			{
			return this->describeDatabaseInstanceParameters(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SWAS_OPENClient::DescribeDatabaseInstancesOutcome SWAS_OPENClient::describeDatabaseInstances(const DescribeDatabaseInstancesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDatabaseInstancesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDatabaseInstancesOutcome(DescribeDatabaseInstancesResult(outcome.result()));
	else
		return DescribeDatabaseInstancesOutcome(outcome.error());
}

void SWAS_OPENClient::describeDatabaseInstancesAsync(const DescribeDatabaseInstancesRequest& request, const DescribeDatabaseInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDatabaseInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SWAS_OPENClient::DescribeDatabaseInstancesOutcomeCallable SWAS_OPENClient::describeDatabaseInstancesCallable(const DescribeDatabaseInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDatabaseInstancesOutcome()>>(
			[this, request]()
			{
			return this->describeDatabaseInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SWAS_OPENClient::DescribeDatabaseSlowLogRecordsOutcome SWAS_OPENClient::describeDatabaseSlowLogRecords(const DescribeDatabaseSlowLogRecordsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDatabaseSlowLogRecordsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDatabaseSlowLogRecordsOutcome(DescribeDatabaseSlowLogRecordsResult(outcome.result()));
	else
		return DescribeDatabaseSlowLogRecordsOutcome(outcome.error());
}

void SWAS_OPENClient::describeDatabaseSlowLogRecordsAsync(const DescribeDatabaseSlowLogRecordsRequest& request, const DescribeDatabaseSlowLogRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDatabaseSlowLogRecords(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SWAS_OPENClient::DescribeDatabaseSlowLogRecordsOutcomeCallable SWAS_OPENClient::describeDatabaseSlowLogRecordsCallable(const DescribeDatabaseSlowLogRecordsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDatabaseSlowLogRecordsOutcome()>>(
			[this, request]()
			{
			return this->describeDatabaseSlowLogRecords(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SWAS_OPENClient::DescribeInvocationResultOutcome SWAS_OPENClient::describeInvocationResult(const DescribeInvocationResultRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeInvocationResultOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeInvocationResultOutcome(DescribeInvocationResultResult(outcome.result()));
	else
		return DescribeInvocationResultOutcome(outcome.error());
}

void SWAS_OPENClient::describeInvocationResultAsync(const DescribeInvocationResultRequest& request, const DescribeInvocationResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeInvocationResult(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SWAS_OPENClient::DescribeInvocationResultOutcomeCallable SWAS_OPENClient::describeInvocationResultCallable(const DescribeInvocationResultRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeInvocationResultOutcome()>>(
			[this, request]()
			{
			return this->describeInvocationResult(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SWAS_OPENClient::DescribeInvocationsOutcome SWAS_OPENClient::describeInvocations(const DescribeInvocationsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeInvocationsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeInvocationsOutcome(DescribeInvocationsResult(outcome.result()));
	else
		return DescribeInvocationsOutcome(outcome.error());
}

void SWAS_OPENClient::describeInvocationsAsync(const DescribeInvocationsRequest& request, const DescribeInvocationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeInvocations(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SWAS_OPENClient::DescribeInvocationsOutcomeCallable SWAS_OPENClient::describeInvocationsCallable(const DescribeInvocationsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeInvocationsOutcome()>>(
			[this, request]()
			{
			return this->describeInvocations(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SWAS_OPENClient::InstallCloudAssistantOutcome SWAS_OPENClient::installCloudAssistant(const InstallCloudAssistantRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return InstallCloudAssistantOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return InstallCloudAssistantOutcome(InstallCloudAssistantResult(outcome.result()));
	else
		return InstallCloudAssistantOutcome(outcome.error());
}

void SWAS_OPENClient::installCloudAssistantAsync(const InstallCloudAssistantRequest& request, const InstallCloudAssistantAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, installCloudAssistant(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SWAS_OPENClient::InstallCloudAssistantOutcomeCallable SWAS_OPENClient::installCloudAssistantCallable(const InstallCloudAssistantRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<InstallCloudAssistantOutcome()>>(
			[this, request]()
			{
			return this->installCloudAssistant(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SWAS_OPENClient::ListDisksOutcome SWAS_OPENClient::listDisks(const ListDisksRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDisksOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDisksOutcome(ListDisksResult(outcome.result()));
	else
		return ListDisksOutcome(outcome.error());
}

void SWAS_OPENClient::listDisksAsync(const ListDisksRequest& request, const ListDisksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDisks(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SWAS_OPENClient::ListDisksOutcomeCallable SWAS_OPENClient::listDisksCallable(const ListDisksRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDisksOutcome()>>(
			[this, request]()
			{
			return this->listDisks(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SWAS_OPENClient::ListFirewallRulesOutcome SWAS_OPENClient::listFirewallRules(const ListFirewallRulesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListFirewallRulesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListFirewallRulesOutcome(ListFirewallRulesResult(outcome.result()));
	else
		return ListFirewallRulesOutcome(outcome.error());
}

void SWAS_OPENClient::listFirewallRulesAsync(const ListFirewallRulesRequest& request, const ListFirewallRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listFirewallRules(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SWAS_OPENClient::ListFirewallRulesOutcomeCallable SWAS_OPENClient::listFirewallRulesCallable(const ListFirewallRulesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListFirewallRulesOutcome()>>(
			[this, request]()
			{
			return this->listFirewallRules(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SWAS_OPENClient::ListImagesOutcome SWAS_OPENClient::listImages(const ListImagesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListImagesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListImagesOutcome(ListImagesResult(outcome.result()));
	else
		return ListImagesOutcome(outcome.error());
}

void SWAS_OPENClient::listImagesAsync(const ListImagesRequest& request, const ListImagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listImages(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SWAS_OPENClient::ListImagesOutcomeCallable SWAS_OPENClient::listImagesCallable(const ListImagesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListImagesOutcome()>>(
			[this, request]()
			{
			return this->listImages(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SWAS_OPENClient::ListInstancePlansModificationOutcome SWAS_OPENClient::listInstancePlansModification(const ListInstancePlansModificationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListInstancePlansModificationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListInstancePlansModificationOutcome(ListInstancePlansModificationResult(outcome.result()));
	else
		return ListInstancePlansModificationOutcome(outcome.error());
}

void SWAS_OPENClient::listInstancePlansModificationAsync(const ListInstancePlansModificationRequest& request, const ListInstancePlansModificationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listInstancePlansModification(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SWAS_OPENClient::ListInstancePlansModificationOutcomeCallable SWAS_OPENClient::listInstancePlansModificationCallable(const ListInstancePlansModificationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListInstancePlansModificationOutcome()>>(
			[this, request]()
			{
			return this->listInstancePlansModification(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SWAS_OPENClient::ListInstancesOutcome SWAS_OPENClient::listInstances(const ListInstancesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListInstancesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListInstancesOutcome(ListInstancesResult(outcome.result()));
	else
		return ListInstancesOutcome(outcome.error());
}

void SWAS_OPENClient::listInstancesAsync(const ListInstancesRequest& request, const ListInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SWAS_OPENClient::ListInstancesOutcomeCallable SWAS_OPENClient::listInstancesCallable(const ListInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListInstancesOutcome()>>(
			[this, request]()
			{
			return this->listInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SWAS_OPENClient::ListInstancesTrafficPackagesOutcome SWAS_OPENClient::listInstancesTrafficPackages(const ListInstancesTrafficPackagesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListInstancesTrafficPackagesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListInstancesTrafficPackagesOutcome(ListInstancesTrafficPackagesResult(outcome.result()));
	else
		return ListInstancesTrafficPackagesOutcome(outcome.error());
}

void SWAS_OPENClient::listInstancesTrafficPackagesAsync(const ListInstancesTrafficPackagesRequest& request, const ListInstancesTrafficPackagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listInstancesTrafficPackages(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SWAS_OPENClient::ListInstancesTrafficPackagesOutcomeCallable SWAS_OPENClient::listInstancesTrafficPackagesCallable(const ListInstancesTrafficPackagesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListInstancesTrafficPackagesOutcome()>>(
			[this, request]()
			{
			return this->listInstancesTrafficPackages(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SWAS_OPENClient::ListPlansOutcome SWAS_OPENClient::listPlans(const ListPlansRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListPlansOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListPlansOutcome(ListPlansResult(outcome.result()));
	else
		return ListPlansOutcome(outcome.error());
}

void SWAS_OPENClient::listPlansAsync(const ListPlansRequest& request, const ListPlansAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listPlans(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SWAS_OPENClient::ListPlansOutcomeCallable SWAS_OPENClient::listPlansCallable(const ListPlansRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListPlansOutcome()>>(
			[this, request]()
			{
			return this->listPlans(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SWAS_OPENClient::ListRegionsOutcome SWAS_OPENClient::listRegions(const ListRegionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListRegionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListRegionsOutcome(ListRegionsResult(outcome.result()));
	else
		return ListRegionsOutcome(outcome.error());
}

void SWAS_OPENClient::listRegionsAsync(const ListRegionsRequest& request, const ListRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listRegions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SWAS_OPENClient::ListRegionsOutcomeCallable SWAS_OPENClient::listRegionsCallable(const ListRegionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListRegionsOutcome()>>(
			[this, request]()
			{
			return this->listRegions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SWAS_OPENClient::ListSnapshotsOutcome SWAS_OPENClient::listSnapshots(const ListSnapshotsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListSnapshotsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListSnapshotsOutcome(ListSnapshotsResult(outcome.result()));
	else
		return ListSnapshotsOutcome(outcome.error());
}

void SWAS_OPENClient::listSnapshotsAsync(const ListSnapshotsRequest& request, const ListSnapshotsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listSnapshots(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SWAS_OPENClient::ListSnapshotsOutcomeCallable SWAS_OPENClient::listSnapshotsCallable(const ListSnapshotsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListSnapshotsOutcome()>>(
			[this, request]()
			{
			return this->listSnapshots(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SWAS_OPENClient::LoginInstanceOutcome SWAS_OPENClient::loginInstance(const LoginInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return LoginInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return LoginInstanceOutcome(LoginInstanceResult(outcome.result()));
	else
		return LoginInstanceOutcome(outcome.error());
}

void SWAS_OPENClient::loginInstanceAsync(const LoginInstanceRequest& request, const LoginInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, loginInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SWAS_OPENClient::LoginInstanceOutcomeCallable SWAS_OPENClient::loginInstanceCallable(const LoginInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<LoginInstanceOutcome()>>(
			[this, request]()
			{
			return this->loginInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SWAS_OPENClient::ModifyDatabaseInstanceDescriptionOutcome SWAS_OPENClient::modifyDatabaseInstanceDescription(const ModifyDatabaseInstanceDescriptionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDatabaseInstanceDescriptionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDatabaseInstanceDescriptionOutcome(ModifyDatabaseInstanceDescriptionResult(outcome.result()));
	else
		return ModifyDatabaseInstanceDescriptionOutcome(outcome.error());
}

void SWAS_OPENClient::modifyDatabaseInstanceDescriptionAsync(const ModifyDatabaseInstanceDescriptionRequest& request, const ModifyDatabaseInstanceDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDatabaseInstanceDescription(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SWAS_OPENClient::ModifyDatabaseInstanceDescriptionOutcomeCallable SWAS_OPENClient::modifyDatabaseInstanceDescriptionCallable(const ModifyDatabaseInstanceDescriptionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDatabaseInstanceDescriptionOutcome()>>(
			[this, request]()
			{
			return this->modifyDatabaseInstanceDescription(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SWAS_OPENClient::ModifyDatabaseInstanceParameterOutcome SWAS_OPENClient::modifyDatabaseInstanceParameter(const ModifyDatabaseInstanceParameterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDatabaseInstanceParameterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDatabaseInstanceParameterOutcome(ModifyDatabaseInstanceParameterResult(outcome.result()));
	else
		return ModifyDatabaseInstanceParameterOutcome(outcome.error());
}

void SWAS_OPENClient::modifyDatabaseInstanceParameterAsync(const ModifyDatabaseInstanceParameterRequest& request, const ModifyDatabaseInstanceParameterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDatabaseInstanceParameter(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SWAS_OPENClient::ModifyDatabaseInstanceParameterOutcomeCallable SWAS_OPENClient::modifyDatabaseInstanceParameterCallable(const ModifyDatabaseInstanceParameterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDatabaseInstanceParameterOutcome()>>(
			[this, request]()
			{
			return this->modifyDatabaseInstanceParameter(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SWAS_OPENClient::ModifyImageShareStatusOutcome SWAS_OPENClient::modifyImageShareStatus(const ModifyImageShareStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyImageShareStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyImageShareStatusOutcome(ModifyImageShareStatusResult(outcome.result()));
	else
		return ModifyImageShareStatusOutcome(outcome.error());
}

void SWAS_OPENClient::modifyImageShareStatusAsync(const ModifyImageShareStatusRequest& request, const ModifyImageShareStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyImageShareStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SWAS_OPENClient::ModifyImageShareStatusOutcomeCallable SWAS_OPENClient::modifyImageShareStatusCallable(const ModifyImageShareStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyImageShareStatusOutcome()>>(
			[this, request]()
			{
			return this->modifyImageShareStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SWAS_OPENClient::RebootInstanceOutcome SWAS_OPENClient::rebootInstance(const RebootInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RebootInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RebootInstanceOutcome(RebootInstanceResult(outcome.result()));
	else
		return RebootInstanceOutcome(outcome.error());
}

void SWAS_OPENClient::rebootInstanceAsync(const RebootInstanceRequest& request, const RebootInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, rebootInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SWAS_OPENClient::RebootInstanceOutcomeCallable SWAS_OPENClient::rebootInstanceCallable(const RebootInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RebootInstanceOutcome()>>(
			[this, request]()
			{
			return this->rebootInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SWAS_OPENClient::ReleasePublicConnectionOutcome SWAS_OPENClient::releasePublicConnection(const ReleasePublicConnectionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ReleasePublicConnectionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ReleasePublicConnectionOutcome(ReleasePublicConnectionResult(outcome.result()));
	else
		return ReleasePublicConnectionOutcome(outcome.error());
}

void SWAS_OPENClient::releasePublicConnectionAsync(const ReleasePublicConnectionRequest& request, const ReleasePublicConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, releasePublicConnection(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SWAS_OPENClient::ReleasePublicConnectionOutcomeCallable SWAS_OPENClient::releasePublicConnectionCallable(const ReleasePublicConnectionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ReleasePublicConnectionOutcome()>>(
			[this, request]()
			{
			return this->releasePublicConnection(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SWAS_OPENClient::RenewInstanceOutcome SWAS_OPENClient::renewInstance(const RenewInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RenewInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RenewInstanceOutcome(RenewInstanceResult(outcome.result()));
	else
		return RenewInstanceOutcome(outcome.error());
}

void SWAS_OPENClient::renewInstanceAsync(const RenewInstanceRequest& request, const RenewInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, renewInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SWAS_OPENClient::RenewInstanceOutcomeCallable SWAS_OPENClient::renewInstanceCallable(const RenewInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RenewInstanceOutcome()>>(
			[this, request]()
			{
			return this->renewInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SWAS_OPENClient::ResetDatabaseAccountPasswordOutcome SWAS_OPENClient::resetDatabaseAccountPassword(const ResetDatabaseAccountPasswordRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ResetDatabaseAccountPasswordOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ResetDatabaseAccountPasswordOutcome(ResetDatabaseAccountPasswordResult(outcome.result()));
	else
		return ResetDatabaseAccountPasswordOutcome(outcome.error());
}

void SWAS_OPENClient::resetDatabaseAccountPasswordAsync(const ResetDatabaseAccountPasswordRequest& request, const ResetDatabaseAccountPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, resetDatabaseAccountPassword(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SWAS_OPENClient::ResetDatabaseAccountPasswordOutcomeCallable SWAS_OPENClient::resetDatabaseAccountPasswordCallable(const ResetDatabaseAccountPasswordRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ResetDatabaseAccountPasswordOutcome()>>(
			[this, request]()
			{
			return this->resetDatabaseAccountPassword(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SWAS_OPENClient::ResetDiskOutcome SWAS_OPENClient::resetDisk(const ResetDiskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ResetDiskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ResetDiskOutcome(ResetDiskResult(outcome.result()));
	else
		return ResetDiskOutcome(outcome.error());
}

void SWAS_OPENClient::resetDiskAsync(const ResetDiskRequest& request, const ResetDiskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, resetDisk(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SWAS_OPENClient::ResetDiskOutcomeCallable SWAS_OPENClient::resetDiskCallable(const ResetDiskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ResetDiskOutcome()>>(
			[this, request]()
			{
			return this->resetDisk(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SWAS_OPENClient::ResetSystemOutcome SWAS_OPENClient::resetSystem(const ResetSystemRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ResetSystemOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ResetSystemOutcome(ResetSystemResult(outcome.result()));
	else
		return ResetSystemOutcome(outcome.error());
}

void SWAS_OPENClient::resetSystemAsync(const ResetSystemRequest& request, const ResetSystemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, resetSystem(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SWAS_OPENClient::ResetSystemOutcomeCallable SWAS_OPENClient::resetSystemCallable(const ResetSystemRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ResetSystemOutcome()>>(
			[this, request]()
			{
			return this->resetSystem(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SWAS_OPENClient::RestartDatabaseInstanceOutcome SWAS_OPENClient::restartDatabaseInstance(const RestartDatabaseInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RestartDatabaseInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RestartDatabaseInstanceOutcome(RestartDatabaseInstanceResult(outcome.result()));
	else
		return RestartDatabaseInstanceOutcome(outcome.error());
}

void SWAS_OPENClient::restartDatabaseInstanceAsync(const RestartDatabaseInstanceRequest& request, const RestartDatabaseInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, restartDatabaseInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SWAS_OPENClient::RestartDatabaseInstanceOutcomeCallable SWAS_OPENClient::restartDatabaseInstanceCallable(const RestartDatabaseInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RestartDatabaseInstanceOutcome()>>(
			[this, request]()
			{
			return this->restartDatabaseInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SWAS_OPENClient::RunCommandOutcome SWAS_OPENClient::runCommand(const RunCommandRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RunCommandOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RunCommandOutcome(RunCommandResult(outcome.result()));
	else
		return RunCommandOutcome(outcome.error());
}

void SWAS_OPENClient::runCommandAsync(const RunCommandRequest& request, const RunCommandAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, runCommand(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SWAS_OPENClient::RunCommandOutcomeCallable SWAS_OPENClient::runCommandCallable(const RunCommandRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RunCommandOutcome()>>(
			[this, request]()
			{
			return this->runCommand(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SWAS_OPENClient::StartDatabaseInstanceOutcome SWAS_OPENClient::startDatabaseInstance(const StartDatabaseInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StartDatabaseInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StartDatabaseInstanceOutcome(StartDatabaseInstanceResult(outcome.result()));
	else
		return StartDatabaseInstanceOutcome(outcome.error());
}

void SWAS_OPENClient::startDatabaseInstanceAsync(const StartDatabaseInstanceRequest& request, const StartDatabaseInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, startDatabaseInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SWAS_OPENClient::StartDatabaseInstanceOutcomeCallable SWAS_OPENClient::startDatabaseInstanceCallable(const StartDatabaseInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StartDatabaseInstanceOutcome()>>(
			[this, request]()
			{
			return this->startDatabaseInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SWAS_OPENClient::StartInstanceOutcome SWAS_OPENClient::startInstance(const StartInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StartInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StartInstanceOutcome(StartInstanceResult(outcome.result()));
	else
		return StartInstanceOutcome(outcome.error());
}

void SWAS_OPENClient::startInstanceAsync(const StartInstanceRequest& request, const StartInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, startInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SWAS_OPENClient::StartInstanceOutcomeCallable SWAS_OPENClient::startInstanceCallable(const StartInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StartInstanceOutcome()>>(
			[this, request]()
			{
			return this->startInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SWAS_OPENClient::StopDatabaseInstanceOutcome SWAS_OPENClient::stopDatabaseInstance(const StopDatabaseInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StopDatabaseInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StopDatabaseInstanceOutcome(StopDatabaseInstanceResult(outcome.result()));
	else
		return StopDatabaseInstanceOutcome(outcome.error());
}

void SWAS_OPENClient::stopDatabaseInstanceAsync(const StopDatabaseInstanceRequest& request, const StopDatabaseInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, stopDatabaseInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SWAS_OPENClient::StopDatabaseInstanceOutcomeCallable SWAS_OPENClient::stopDatabaseInstanceCallable(const StopDatabaseInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StopDatabaseInstanceOutcome()>>(
			[this, request]()
			{
			return this->stopDatabaseInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SWAS_OPENClient::StopInstanceOutcome SWAS_OPENClient::stopInstance(const StopInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StopInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StopInstanceOutcome(StopInstanceResult(outcome.result()));
	else
		return StopInstanceOutcome(outcome.error());
}

void SWAS_OPENClient::stopInstanceAsync(const StopInstanceRequest& request, const StopInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, stopInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SWAS_OPENClient::StopInstanceOutcomeCallable SWAS_OPENClient::stopInstanceCallable(const StopInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StopInstanceOutcome()>>(
			[this, request]()
			{
			return this->stopInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SWAS_OPENClient::UpdateInstanceAttributeOutcome SWAS_OPENClient::updateInstanceAttribute(const UpdateInstanceAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateInstanceAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateInstanceAttributeOutcome(UpdateInstanceAttributeResult(outcome.result()));
	else
		return UpdateInstanceAttributeOutcome(outcome.error());
}

void SWAS_OPENClient::updateInstanceAttributeAsync(const UpdateInstanceAttributeRequest& request, const UpdateInstanceAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateInstanceAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SWAS_OPENClient::UpdateInstanceAttributeOutcomeCallable SWAS_OPENClient::updateInstanceAttributeCallable(const UpdateInstanceAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateInstanceAttributeOutcome()>>(
			[this, request]()
			{
			return this->updateInstanceAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SWAS_OPENClient::UpgradeInstanceOutcome SWAS_OPENClient::upgradeInstance(const UpgradeInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpgradeInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpgradeInstanceOutcome(UpgradeInstanceResult(outcome.result()));
	else
		return UpgradeInstanceOutcome(outcome.error());
}

void SWAS_OPENClient::upgradeInstanceAsync(const UpgradeInstanceRequest& request, const UpgradeInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, upgradeInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SWAS_OPENClient::UpgradeInstanceOutcomeCallable SWAS_OPENClient::upgradeInstanceCallable(const UpgradeInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpgradeInstanceOutcome()>>(
			[this, request]()
			{
			return this->upgradeInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

