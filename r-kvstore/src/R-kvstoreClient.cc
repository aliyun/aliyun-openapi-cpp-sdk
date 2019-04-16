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

#include <alibabacloud/r-kvstore/R_kvstoreClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::R_kvstore;
using namespace AlibabaCloud::R_kvstore::Model;

namespace
{
	const std::string SERVICE_NAME = "R-kvstore";
}

R_kvstoreClient::R_kvstoreClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "R-kvstore");
}

R_kvstoreClient::R_kvstoreClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "R-kvstore");
}

R_kvstoreClient::R_kvstoreClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "R-kvstore");
}

R_kvstoreClient::~R_kvstoreClient()
{}

R_kvstoreClient::UntagResourcesOutcome R_kvstoreClient::untagResources(const UntagResourcesRequest &request) const
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

void R_kvstoreClient::untagResourcesAsync(const UntagResourcesRequest& request, const UntagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, untagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::UntagResourcesOutcomeCallable R_kvstoreClient::untagResourcesCallable(const UntagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UntagResourcesOutcome()>>(
			[this, request]()
			{
			return this->untagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::DescribeDBInstanceMonitorOutcome R_kvstoreClient::describeDBInstanceMonitor(const DescribeDBInstanceMonitorRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDBInstanceMonitorOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDBInstanceMonitorOutcome(DescribeDBInstanceMonitorResult(outcome.result()));
	else
		return DescribeDBInstanceMonitorOutcome(outcome.error());
}

void R_kvstoreClient::describeDBInstanceMonitorAsync(const DescribeDBInstanceMonitorRequest& request, const DescribeDBInstanceMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDBInstanceMonitor(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::DescribeDBInstanceMonitorOutcomeCallable R_kvstoreClient::describeDBInstanceMonitorCallable(const DescribeDBInstanceMonitorRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDBInstanceMonitorOutcome()>>(
			[this, request]()
			{
			return this->describeDBInstanceMonitor(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::DescribeSnapshotsOutcome R_kvstoreClient::describeSnapshots(const DescribeSnapshotsRequest &request) const
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

void R_kvstoreClient::describeSnapshotsAsync(const DescribeSnapshotsRequest& request, const DescribeSnapshotsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSnapshots(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::DescribeSnapshotsOutcomeCallable R_kvstoreClient::describeSnapshotsCallable(const DescribeSnapshotsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSnapshotsOutcome()>>(
			[this, request]()
			{
			return this->describeSnapshots(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::ModifyAccountDescriptionOutcome R_kvstoreClient::modifyAccountDescription(const ModifyAccountDescriptionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyAccountDescriptionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyAccountDescriptionOutcome(ModifyAccountDescriptionResult(outcome.result()));
	else
		return ModifyAccountDescriptionOutcome(outcome.error());
}

void R_kvstoreClient::modifyAccountDescriptionAsync(const ModifyAccountDescriptionRequest& request, const ModifyAccountDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyAccountDescription(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::ModifyAccountDescriptionOutcomeCallable R_kvstoreClient::modifyAccountDescriptionCallable(const ModifyAccountDescriptionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyAccountDescriptionOutcome()>>(
			[this, request]()
			{
			return this->modifyAccountDescription(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::SwitchNetworkOutcome R_kvstoreClient::switchNetwork(const SwitchNetworkRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SwitchNetworkOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SwitchNetworkOutcome(SwitchNetworkResult(outcome.result()));
	else
		return SwitchNetworkOutcome(outcome.error());
}

void R_kvstoreClient::switchNetworkAsync(const SwitchNetworkRequest& request, const SwitchNetworkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, switchNetwork(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::SwitchNetworkOutcomeCallable R_kvstoreClient::switchNetworkCallable(const SwitchNetworkRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SwitchNetworkOutcome()>>(
			[this, request]()
			{
			return this->switchNetwork(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::DescribeCertificationOutcome R_kvstoreClient::describeCertification(const DescribeCertificationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCertificationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCertificationOutcome(DescribeCertificationResult(outcome.result()));
	else
		return DescribeCertificationOutcome(outcome.error());
}

void R_kvstoreClient::describeCertificationAsync(const DescribeCertificationRequest& request, const DescribeCertificationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCertification(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::DescribeCertificationOutcomeCallable R_kvstoreClient::describeCertificationCallable(const DescribeCertificationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCertificationOutcome()>>(
			[this, request]()
			{
			return this->describeCertification(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::ReleaseReplicaOutcome R_kvstoreClient::releaseReplica(const ReleaseReplicaRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ReleaseReplicaOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ReleaseReplicaOutcome(ReleaseReplicaResult(outcome.result()));
	else
		return ReleaseReplicaOutcome(outcome.error());
}

void R_kvstoreClient::releaseReplicaAsync(const ReleaseReplicaRequest& request, const ReleaseReplicaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, releaseReplica(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::ReleaseReplicaOutcomeCallable R_kvstoreClient::releaseReplicaCallable(const ReleaseReplicaRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ReleaseReplicaOutcome()>>(
			[this, request]()
			{
			return this->releaseReplica(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::DescribeActiveOperationTaskOutcome R_kvstoreClient::describeActiveOperationTask(const DescribeActiveOperationTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeActiveOperationTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeActiveOperationTaskOutcome(DescribeActiveOperationTaskResult(outcome.result()));
	else
		return DescribeActiveOperationTaskOutcome(outcome.error());
}

void R_kvstoreClient::describeActiveOperationTaskAsync(const DescribeActiveOperationTaskRequest& request, const DescribeActiveOperationTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeActiveOperationTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::DescribeActiveOperationTaskOutcomeCallable R_kvstoreClient::describeActiveOperationTaskCallable(const DescribeActiveOperationTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeActiveOperationTaskOutcome()>>(
			[this, request]()
			{
			return this->describeActiveOperationTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::ModifyReplicaRecoveryModeOutcome R_kvstoreClient::modifyReplicaRecoveryMode(const ModifyReplicaRecoveryModeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyReplicaRecoveryModeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyReplicaRecoveryModeOutcome(ModifyReplicaRecoveryModeResult(outcome.result()));
	else
		return ModifyReplicaRecoveryModeOutcome(outcome.error());
}

void R_kvstoreClient::modifyReplicaRecoveryModeAsync(const ModifyReplicaRecoveryModeRequest& request, const ModifyReplicaRecoveryModeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyReplicaRecoveryMode(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::ModifyReplicaRecoveryModeOutcomeCallable R_kvstoreClient::modifyReplicaRecoveryModeCallable(const ModifyReplicaRecoveryModeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyReplicaRecoveryModeOutcome()>>(
			[this, request]()
			{
			return this->modifyReplicaRecoveryMode(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::ModifyDBInstanceConnectionStringOutcome R_kvstoreClient::modifyDBInstanceConnectionString(const ModifyDBInstanceConnectionStringRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDBInstanceConnectionStringOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDBInstanceConnectionStringOutcome(ModifyDBInstanceConnectionStringResult(outcome.result()));
	else
		return ModifyDBInstanceConnectionStringOutcome(outcome.error());
}

void R_kvstoreClient::modifyDBInstanceConnectionStringAsync(const ModifyDBInstanceConnectionStringRequest& request, const ModifyDBInstanceConnectionStringAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDBInstanceConnectionString(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::ModifyDBInstanceConnectionStringOutcomeCallable R_kvstoreClient::modifyDBInstanceConnectionStringCallable(const ModifyDBInstanceConnectionStringRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDBInstanceConnectionStringOutcome()>>(
			[this, request]()
			{
			return this->modifyDBInstanceConnectionString(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::DescribeReplicasOutcome R_kvstoreClient::describeReplicas(const DescribeReplicasRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeReplicasOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeReplicasOutcome(DescribeReplicasResult(outcome.result()));
	else
		return DescribeReplicasOutcome(outcome.error());
}

void R_kvstoreClient::describeReplicasAsync(const DescribeReplicasRequest& request, const DescribeReplicasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeReplicas(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::DescribeReplicasOutcomeCallable R_kvstoreClient::describeReplicasCallable(const DescribeReplicasRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeReplicasOutcome()>>(
			[this, request]()
			{
			return this->describeReplicas(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::DescribeReplicaConflictInfoOutcome R_kvstoreClient::describeReplicaConflictInfo(const DescribeReplicaConflictInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeReplicaConflictInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeReplicaConflictInfoOutcome(DescribeReplicaConflictInfoResult(outcome.result()));
	else
		return DescribeReplicaConflictInfoOutcome(outcome.error());
}

void R_kvstoreClient::describeReplicaConflictInfoAsync(const DescribeReplicaConflictInfoRequest& request, const DescribeReplicaConflictInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeReplicaConflictInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::DescribeReplicaConflictInfoOutcomeCallable R_kvstoreClient::describeReplicaConflictInfoCallable(const DescribeReplicaConflictInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeReplicaConflictInfoOutcome()>>(
			[this, request]()
			{
			return this->describeReplicaConflictInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::DescribeActiveOperationTaskCountOutcome R_kvstoreClient::describeActiveOperationTaskCount(const DescribeActiveOperationTaskCountRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeActiveOperationTaskCountOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeActiveOperationTaskCountOutcome(DescribeActiveOperationTaskCountResult(outcome.result()));
	else
		return DescribeActiveOperationTaskCountOutcome(outcome.error());
}

void R_kvstoreClient::describeActiveOperationTaskCountAsync(const DescribeActiveOperationTaskCountRequest& request, const DescribeActiveOperationTaskCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeActiveOperationTaskCount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::DescribeActiveOperationTaskCountOutcomeCallable R_kvstoreClient::describeActiveOperationTaskCountCallable(const DescribeActiveOperationTaskCountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeActiveOperationTaskCountOutcome()>>(
			[this, request]()
			{
			return this->describeActiveOperationTaskCount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::ModifyCertificationOutcome R_kvstoreClient::modifyCertification(const ModifyCertificationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyCertificationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyCertificationOutcome(ModifyCertificationResult(outcome.result()));
	else
		return ModifyCertificationOutcome(outcome.error());
}

void R_kvstoreClient::modifyCertificationAsync(const ModifyCertificationRequest& request, const ModifyCertificationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyCertification(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::ModifyCertificationOutcomeCallable R_kvstoreClient::modifyCertificationCallable(const ModifyCertificationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyCertificationOutcome()>>(
			[this, request]()
			{
			return this->modifyCertification(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::CreateAccountOutcome R_kvstoreClient::createAccount(const CreateAccountRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateAccountOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateAccountOutcome(CreateAccountResult(outcome.result()));
	else
		return CreateAccountOutcome(outcome.error());
}

void R_kvstoreClient::createAccountAsync(const CreateAccountRequest& request, const CreateAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createAccount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::CreateAccountOutcomeCallable R_kvstoreClient::createAccountCallable(const CreateAccountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateAccountOutcome()>>(
			[this, request]()
			{
			return this->createAccount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::DescribeHistoryMonitorValuesOutcome R_kvstoreClient::describeHistoryMonitorValues(const DescribeHistoryMonitorValuesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeHistoryMonitorValuesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeHistoryMonitorValuesOutcome(DescribeHistoryMonitorValuesResult(outcome.result()));
	else
		return DescribeHistoryMonitorValuesOutcome(outcome.error());
}

void R_kvstoreClient::describeHistoryMonitorValuesAsync(const DescribeHistoryMonitorValuesRequest& request, const DescribeHistoryMonitorValuesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeHistoryMonitorValues(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::DescribeHistoryMonitorValuesOutcomeCallable R_kvstoreClient::describeHistoryMonitorValuesCallable(const DescribeHistoryMonitorValuesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeHistoryMonitorValuesOutcome()>>(
			[this, request]()
			{
			return this->describeHistoryMonitorValues(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::RenewInstanceOutcome R_kvstoreClient::renewInstance(const RenewInstanceRequest &request) const
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

void R_kvstoreClient::renewInstanceAsync(const RenewInstanceRequest& request, const RenewInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, renewInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::RenewInstanceOutcomeCallable R_kvstoreClient::renewInstanceCallable(const RenewInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RenewInstanceOutcome()>>(
			[this, request]()
			{
			return this->renewInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::ModifyInstanceMinorVersionOutcome R_kvstoreClient::modifyInstanceMinorVersion(const ModifyInstanceMinorVersionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyInstanceMinorVersionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyInstanceMinorVersionOutcome(ModifyInstanceMinorVersionResult(outcome.result()));
	else
		return ModifyInstanceMinorVersionOutcome(outcome.error());
}

void R_kvstoreClient::modifyInstanceMinorVersionAsync(const ModifyInstanceMinorVersionRequest& request, const ModifyInstanceMinorVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyInstanceMinorVersion(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::ModifyInstanceMinorVersionOutcomeCallable R_kvstoreClient::modifyInstanceMinorVersionCallable(const ModifyInstanceMinorVersionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyInstanceMinorVersionOutcome()>>(
			[this, request]()
			{
			return this->modifyInstanceMinorVersion(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::ModifyDBInstanceMonitorOutcome R_kvstoreClient::modifyDBInstanceMonitor(const ModifyDBInstanceMonitorRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDBInstanceMonitorOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDBInstanceMonitorOutcome(ModifyDBInstanceMonitorResult(outcome.result()));
	else
		return ModifyDBInstanceMonitorOutcome(outcome.error());
}

void R_kvstoreClient::modifyDBInstanceMonitorAsync(const ModifyDBInstanceMonitorRequest& request, const ModifyDBInstanceMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDBInstanceMonitor(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::ModifyDBInstanceMonitorOutcomeCallable R_kvstoreClient::modifyDBInstanceMonitorCallable(const ModifyDBInstanceMonitorRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDBInstanceMonitorOutcome()>>(
			[this, request]()
			{
			return this->modifyDBInstanceMonitor(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::DescribeMonthlyServiceStatusOutcome R_kvstoreClient::describeMonthlyServiceStatus(const DescribeMonthlyServiceStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeMonthlyServiceStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeMonthlyServiceStatusOutcome(DescribeMonthlyServiceStatusResult(outcome.result()));
	else
		return DescribeMonthlyServiceStatusOutcome(outcome.error());
}

void R_kvstoreClient::describeMonthlyServiceStatusAsync(const DescribeMonthlyServiceStatusRequest& request, const DescribeMonthlyServiceStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeMonthlyServiceStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::DescribeMonthlyServiceStatusOutcomeCallable R_kvstoreClient::describeMonthlyServiceStatusCallable(const DescribeMonthlyServiceStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeMonthlyServiceStatusOutcome()>>(
			[this, request]()
			{
			return this->describeMonthlyServiceStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::ModifyReplicaDescriptionOutcome R_kvstoreClient::modifyReplicaDescription(const ModifyReplicaDescriptionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyReplicaDescriptionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyReplicaDescriptionOutcome(ModifyReplicaDescriptionResult(outcome.result()));
	else
		return ModifyReplicaDescriptionOutcome(outcome.error());
}

void R_kvstoreClient::modifyReplicaDescriptionAsync(const ModifyReplicaDescriptionRequest& request, const ModifyReplicaDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyReplicaDescription(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::ModifyReplicaDescriptionOutcomeCallable R_kvstoreClient::modifyReplicaDescriptionCallable(const ModifyReplicaDescriptionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyReplicaDescriptionOutcome()>>(
			[this, request]()
			{
			return this->modifyReplicaDescription(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::DescribeReplicaInitializeProgressOutcome R_kvstoreClient::describeReplicaInitializeProgress(const DescribeReplicaInitializeProgressRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeReplicaInitializeProgressOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeReplicaInitializeProgressOutcome(DescribeReplicaInitializeProgressResult(outcome.result()));
	else
		return DescribeReplicaInitializeProgressOutcome(outcome.error());
}

void R_kvstoreClient::describeReplicaInitializeProgressAsync(const DescribeReplicaInitializeProgressRequest& request, const DescribeReplicaInitializeProgressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeReplicaInitializeProgress(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::DescribeReplicaInitializeProgressOutcomeCallable R_kvstoreClient::describeReplicaInitializeProgressCallable(const DescribeReplicaInitializeProgressRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeReplicaInitializeProgressOutcome()>>(
			[this, request]()
			{
			return this->describeReplicaInitializeProgress(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::ModifyBackupPolicyOutcome R_kvstoreClient::modifyBackupPolicy(const ModifyBackupPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyBackupPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyBackupPolicyOutcome(ModifyBackupPolicyResult(outcome.result()));
	else
		return ModifyBackupPolicyOutcome(outcome.error());
}

void R_kvstoreClient::modifyBackupPolicyAsync(const ModifyBackupPolicyRequest& request, const ModifyBackupPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyBackupPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::ModifyBackupPolicyOutcomeCallable R_kvstoreClient::modifyBackupPolicyCallable(const ModifyBackupPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyBackupPolicyOutcome()>>(
			[this, request]()
			{
			return this->modifyBackupPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::DescribeInstancesOutcome R_kvstoreClient::describeInstances(const DescribeInstancesRequest &request) const
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

void R_kvstoreClient::describeInstancesAsync(const DescribeInstancesRequest& request, const DescribeInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::DescribeInstancesOutcomeCallable R_kvstoreClient::describeInstancesCallable(const DescribeInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeInstancesOutcome()>>(
			[this, request]()
			{
			return this->describeInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::ModifyInstanceVpcAuthModeOutcome R_kvstoreClient::modifyInstanceVpcAuthMode(const ModifyInstanceVpcAuthModeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyInstanceVpcAuthModeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyInstanceVpcAuthModeOutcome(ModifyInstanceVpcAuthModeResult(outcome.result()));
	else
		return ModifyInstanceVpcAuthModeOutcome(outcome.error());
}

void R_kvstoreClient::modifyInstanceVpcAuthModeAsync(const ModifyInstanceVpcAuthModeRequest& request, const ModifyInstanceVpcAuthModeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyInstanceVpcAuthMode(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::ModifyInstanceVpcAuthModeOutcomeCallable R_kvstoreClient::modifyInstanceVpcAuthModeCallable(const ModifyInstanceVpcAuthModeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyInstanceVpcAuthModeOutcome()>>(
			[this, request]()
			{
			return this->modifyInstanceVpcAuthMode(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::DescribeParametersOutcome R_kvstoreClient::describeParameters(const DescribeParametersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeParametersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeParametersOutcome(DescribeParametersResult(outcome.result()));
	else
		return DescribeParametersOutcome(outcome.error());
}

void R_kvstoreClient::describeParametersAsync(const DescribeParametersRequest& request, const DescribeParametersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeParameters(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::DescribeParametersOutcomeCallable R_kvstoreClient::describeParametersCallable(const DescribeParametersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeParametersOutcome()>>(
			[this, request]()
			{
			return this->describeParameters(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::DescribeMonthlyServiceStatusDetailOutcome R_kvstoreClient::describeMonthlyServiceStatusDetail(const DescribeMonthlyServiceStatusDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeMonthlyServiceStatusDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeMonthlyServiceStatusDetailOutcome(DescribeMonthlyServiceStatusDetailResult(outcome.result()));
	else
		return DescribeMonthlyServiceStatusDetailOutcome(outcome.error());
}

void R_kvstoreClient::describeMonthlyServiceStatusDetailAsync(const DescribeMonthlyServiceStatusDetailRequest& request, const DescribeMonthlyServiceStatusDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeMonthlyServiceStatusDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::DescribeMonthlyServiceStatusDetailOutcomeCallable R_kvstoreClient::describeMonthlyServiceStatusDetailCallable(const DescribeMonthlyServiceStatusDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeMonthlyServiceStatusDetailOutcome()>>(
			[this, request]()
			{
			return this->describeMonthlyServiceStatusDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::CreateSnapshotOutcome R_kvstoreClient::createSnapshot(const CreateSnapshotRequest &request) const
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

void R_kvstoreClient::createSnapshotAsync(const CreateSnapshotRequest& request, const CreateSnapshotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createSnapshot(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::CreateSnapshotOutcomeCallable R_kvstoreClient::createSnapshotCallable(const CreateSnapshotRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateSnapshotOutcome()>>(
			[this, request]()
			{
			return this->createSnapshot(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::DescribeInstanceConfigOutcome R_kvstoreClient::describeInstanceConfig(const DescribeInstanceConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeInstanceConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeInstanceConfigOutcome(DescribeInstanceConfigResult(outcome.result()));
	else
		return DescribeInstanceConfigOutcome(outcome.error());
}

void R_kvstoreClient::describeInstanceConfigAsync(const DescribeInstanceConfigRequest& request, const DescribeInstanceConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeInstanceConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::DescribeInstanceConfigOutcomeCallable R_kvstoreClient::describeInstanceConfigCallable(const DescribeInstanceConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeInstanceConfigOutcome()>>(
			[this, request]()
			{
			return this->describeInstanceConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::ModifyInstanceNetExpireTimeOutcome R_kvstoreClient::modifyInstanceNetExpireTime(const ModifyInstanceNetExpireTimeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyInstanceNetExpireTimeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyInstanceNetExpireTimeOutcome(ModifyInstanceNetExpireTimeResult(outcome.result()));
	else
		return ModifyInstanceNetExpireTimeOutcome(outcome.error());
}

void R_kvstoreClient::modifyInstanceNetExpireTimeAsync(const ModifyInstanceNetExpireTimeRequest& request, const ModifyInstanceNetExpireTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyInstanceNetExpireTime(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::ModifyInstanceNetExpireTimeOutcomeCallable R_kvstoreClient::modifyInstanceNetExpireTimeCallable(const ModifyInstanceNetExpireTimeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyInstanceNetExpireTimeOutcome()>>(
			[this, request]()
			{
			return this->modifyInstanceNetExpireTime(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::AllocateInstancePublicConnectionOutcome R_kvstoreClient::allocateInstancePublicConnection(const AllocateInstancePublicConnectionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AllocateInstancePublicConnectionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AllocateInstancePublicConnectionOutcome(AllocateInstancePublicConnectionResult(outcome.result()));
	else
		return AllocateInstancePublicConnectionOutcome(outcome.error());
}

void R_kvstoreClient::allocateInstancePublicConnectionAsync(const AllocateInstancePublicConnectionRequest& request, const AllocateInstancePublicConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, allocateInstancePublicConnection(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::AllocateInstancePublicConnectionOutcomeCallable R_kvstoreClient::allocateInstancePublicConnectionCallable(const AllocateInstancePublicConnectionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AllocateInstancePublicConnectionOutcome()>>(
			[this, request]()
			{
			return this->allocateInstancePublicConnection(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::ModifyInstanceSpecOutcome R_kvstoreClient::modifyInstanceSpec(const ModifyInstanceSpecRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyInstanceSpecOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyInstanceSpecOutcome(ModifyInstanceSpecResult(outcome.result()));
	else
		return ModifyInstanceSpecOutcome(outcome.error());
}

void R_kvstoreClient::modifyInstanceSpecAsync(const ModifyInstanceSpecRequest& request, const ModifyInstanceSpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyInstanceSpec(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::ModifyInstanceSpecOutcomeCallable R_kvstoreClient::modifyInstanceSpecCallable(const ModifyInstanceSpecRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyInstanceSpecOutcome()>>(
			[this, request]()
			{
			return this->modifyInstanceSpec(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::CreateStaticVerificationOutcome R_kvstoreClient::createStaticVerification(const CreateStaticVerificationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateStaticVerificationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateStaticVerificationOutcome(CreateStaticVerificationResult(outcome.result()));
	else
		return CreateStaticVerificationOutcome(outcome.error());
}

void R_kvstoreClient::createStaticVerificationAsync(const CreateStaticVerificationRequest& request, const CreateStaticVerificationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createStaticVerification(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::CreateStaticVerificationOutcomeCallable R_kvstoreClient::createStaticVerificationCallable(const CreateStaticVerificationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateStaticVerificationOutcome()>>(
			[this, request]()
			{
			return this->createStaticVerification(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::DeleteSnapshotOutcome R_kvstoreClient::deleteSnapshot(const DeleteSnapshotRequest &request) const
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

void R_kvstoreClient::deleteSnapshotAsync(const DeleteSnapshotRequest& request, const DeleteSnapshotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteSnapshot(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::DeleteSnapshotOutcomeCallable R_kvstoreClient::deleteSnapshotCallable(const DeleteSnapshotRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteSnapshotOutcome()>>(
			[this, request]()
			{
			return this->deleteSnapshot(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::VerifyPasswordOutcome R_kvstoreClient::verifyPassword(const VerifyPasswordRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return VerifyPasswordOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return VerifyPasswordOutcome(VerifyPasswordResult(outcome.result()));
	else
		return VerifyPasswordOutcome(outcome.error());
}

void R_kvstoreClient::verifyPasswordAsync(const VerifyPasswordRequest& request, const VerifyPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, verifyPassword(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::VerifyPasswordOutcomeCallable R_kvstoreClient::verifyPasswordCallable(const VerifyPasswordRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<VerifyPasswordOutcome()>>(
			[this, request]()
			{
			return this->verifyPassword(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::DeleteTempInstanceOutcome R_kvstoreClient::deleteTempInstance(const DeleteTempInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteTempInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteTempInstanceOutcome(DeleteTempInstanceResult(outcome.result()));
	else
		return DeleteTempInstanceOutcome(outcome.error());
}

void R_kvstoreClient::deleteTempInstanceAsync(const DeleteTempInstanceRequest& request, const DeleteTempInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteTempInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::DeleteTempInstanceOutcomeCallable R_kvstoreClient::deleteTempInstanceCallable(const DeleteTempInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteTempInstanceOutcome()>>(
			[this, request]()
			{
			return this->deleteTempInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::DescribeActiveOperationTaskTypeOutcome R_kvstoreClient::describeActiveOperationTaskType(const DescribeActiveOperationTaskTypeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeActiveOperationTaskTypeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeActiveOperationTaskTypeOutcome(DescribeActiveOperationTaskTypeResult(outcome.result()));
	else
		return DescribeActiveOperationTaskTypeOutcome(outcome.error());
}

void R_kvstoreClient::describeActiveOperationTaskTypeAsync(const DescribeActiveOperationTaskTypeRequest& request, const DescribeActiveOperationTaskTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeActiveOperationTaskType(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::DescribeActiveOperationTaskTypeOutcomeCallable R_kvstoreClient::describeActiveOperationTaskTypeCallable(const DescribeActiveOperationTaskTypeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeActiveOperationTaskTypeOutcome()>>(
			[this, request]()
			{
			return this->describeActiveOperationTaskType(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::ModifyInstanceAutoRenewalAttributeOutcome R_kvstoreClient::modifyInstanceAutoRenewalAttribute(const ModifyInstanceAutoRenewalAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyInstanceAutoRenewalAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyInstanceAutoRenewalAttributeOutcome(ModifyInstanceAutoRenewalAttributeResult(outcome.result()));
	else
		return ModifyInstanceAutoRenewalAttributeOutcome(outcome.error());
}

void R_kvstoreClient::modifyInstanceAutoRenewalAttributeAsync(const ModifyInstanceAutoRenewalAttributeRequest& request, const ModifyInstanceAutoRenewalAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyInstanceAutoRenewalAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::ModifyInstanceAutoRenewalAttributeOutcomeCallable R_kvstoreClient::modifyInstanceAutoRenewalAttributeCallable(const ModifyInstanceAutoRenewalAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyInstanceAutoRenewalAttributeOutcome()>>(
			[this, request]()
			{
			return this->modifyInstanceAutoRenewalAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::DescribeAuditRecordsOutcome R_kvstoreClient::describeAuditRecords(const DescribeAuditRecordsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAuditRecordsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAuditRecordsOutcome(DescribeAuditRecordsResult(outcome.result()));
	else
		return DescribeAuditRecordsOutcome(outcome.error());
}

void R_kvstoreClient::describeAuditRecordsAsync(const DescribeAuditRecordsRequest& request, const DescribeAuditRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAuditRecords(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::DescribeAuditRecordsOutcomeCallable R_kvstoreClient::describeAuditRecordsCallable(const DescribeAuditRecordsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAuditRecordsOutcome()>>(
			[this, request]()
			{
			return this->describeAuditRecords(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::DescribeBackupsOutcome R_kvstoreClient::describeBackups(const DescribeBackupsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeBackupsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeBackupsOutcome(DescribeBackupsResult(outcome.result()));
	else
		return DescribeBackupsOutcome(outcome.error());
}

void R_kvstoreClient::describeBackupsAsync(const DescribeBackupsRequest& request, const DescribeBackupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeBackups(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::DescribeBackupsOutcomeCallable R_kvstoreClient::describeBackupsCallable(const DescribeBackupsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeBackupsOutcome()>>(
			[this, request]()
			{
			return this->describeBackups(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::DescribeRdsVpcsOutcome R_kvstoreClient::describeRdsVpcs(const DescribeRdsVpcsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRdsVpcsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRdsVpcsOutcome(DescribeRdsVpcsResult(outcome.result()));
	else
		return DescribeRdsVpcsOutcome(outcome.error());
}

void R_kvstoreClient::describeRdsVpcsAsync(const DescribeRdsVpcsRequest& request, const DescribeRdsVpcsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRdsVpcs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::DescribeRdsVpcsOutcomeCallable R_kvstoreClient::describeRdsVpcsCallable(const DescribeRdsVpcsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRdsVpcsOutcome()>>(
			[this, request]()
			{
			return this->describeRdsVpcs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::ModifyInstanceMajorVersionOutcome R_kvstoreClient::modifyInstanceMajorVersion(const ModifyInstanceMajorVersionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyInstanceMajorVersionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyInstanceMajorVersionOutcome(ModifyInstanceMajorVersionResult(outcome.result()));
	else
		return ModifyInstanceMajorVersionOutcome(outcome.error());
}

void R_kvstoreClient::modifyInstanceMajorVersionAsync(const ModifyInstanceMajorVersionRequest& request, const ModifyInstanceMajorVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyInstanceMajorVersion(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::ModifyInstanceMajorVersionOutcomeCallable R_kvstoreClient::modifyInstanceMajorVersionCallable(const ModifyInstanceMajorVersionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyInstanceMajorVersionOutcome()>>(
			[this, request]()
			{
			return this->modifyInstanceMajorVersion(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::DescribeInstanceAttributeOutcome R_kvstoreClient::describeInstanceAttribute(const DescribeInstanceAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeInstanceAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeInstanceAttributeOutcome(DescribeInstanceAttributeResult(outcome.result()));
	else
		return DescribeInstanceAttributeOutcome(outcome.error());
}

void R_kvstoreClient::describeInstanceAttributeAsync(const DescribeInstanceAttributeRequest& request, const DescribeInstanceAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeInstanceAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::DescribeInstanceAttributeOutcomeCallable R_kvstoreClient::describeInstanceAttributeCallable(const DescribeInstanceAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeInstanceAttributeOutcome()>>(
			[this, request]()
			{
			return this->describeInstanceAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::DescribeInstanceAutoRenewalAttributeOutcome R_kvstoreClient::describeInstanceAutoRenewalAttribute(const DescribeInstanceAutoRenewalAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeInstanceAutoRenewalAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeInstanceAutoRenewalAttributeOutcome(DescribeInstanceAutoRenewalAttributeResult(outcome.result()));
	else
		return DescribeInstanceAutoRenewalAttributeOutcome(outcome.error());
}

void R_kvstoreClient::describeInstanceAutoRenewalAttributeAsync(const DescribeInstanceAutoRenewalAttributeRequest& request, const DescribeInstanceAutoRenewalAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeInstanceAutoRenewalAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::DescribeInstanceAutoRenewalAttributeOutcomeCallable R_kvstoreClient::describeInstanceAutoRenewalAttributeCallable(const DescribeInstanceAutoRenewalAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeInstanceAutoRenewalAttributeOutcome()>>(
			[this, request]()
			{
			return this->describeInstanceAutoRenewalAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::DescribeRdsVSwitchsOutcome R_kvstoreClient::describeRdsVSwitchs(const DescribeRdsVSwitchsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRdsVSwitchsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRdsVSwitchsOutcome(DescribeRdsVSwitchsResult(outcome.result()));
	else
		return DescribeRdsVSwitchsOutcome(outcome.error());
}

void R_kvstoreClient::describeRdsVSwitchsAsync(const DescribeRdsVSwitchsRequest& request, const DescribeRdsVSwitchsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRdsVSwitchs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::DescribeRdsVSwitchsOutcomeCallable R_kvstoreClient::describeRdsVSwitchsCallable(const DescribeRdsVSwitchsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRdsVSwitchsOutcome()>>(
			[this, request]()
			{
			return this->describeRdsVSwitchs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::ModifyInstanceAttributeOutcome R_kvstoreClient::modifyInstanceAttribute(const ModifyInstanceAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyInstanceAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyInstanceAttributeOutcome(ModifyInstanceAttributeResult(outcome.result()));
	else
		return ModifyInstanceAttributeOutcome(outcome.error());
}

void R_kvstoreClient::modifyInstanceAttributeAsync(const ModifyInstanceAttributeRequest& request, const ModifyInstanceAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyInstanceAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::ModifyInstanceAttributeOutcomeCallable R_kvstoreClient::modifyInstanceAttributeCallable(const ModifyInstanceAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyInstanceAttributeOutcome()>>(
			[this, request]()
			{
			return this->modifyInstanceAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::ModifyAuditLogConfigOutcome R_kvstoreClient::modifyAuditLogConfig(const ModifyAuditLogConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyAuditLogConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyAuditLogConfigOutcome(ModifyAuditLogConfigResult(outcome.result()));
	else
		return ModifyAuditLogConfigOutcome(outcome.error());
}

void R_kvstoreClient::modifyAuditLogConfigAsync(const ModifyAuditLogConfigRequest& request, const ModifyAuditLogConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyAuditLogConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::ModifyAuditLogConfigOutcomeCallable R_kvstoreClient::modifyAuditLogConfigCallable(const ModifyAuditLogConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyAuditLogConfigOutcome()>>(
			[this, request]()
			{
			return this->modifyAuditLogConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::DescribeErrorLogRecordsOutcome R_kvstoreClient::describeErrorLogRecords(const DescribeErrorLogRecordsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeErrorLogRecordsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeErrorLogRecordsOutcome(DescribeErrorLogRecordsResult(outcome.result()));
	else
		return DescribeErrorLogRecordsOutcome(outcome.error());
}

void R_kvstoreClient::describeErrorLogRecordsAsync(const DescribeErrorLogRecordsRequest& request, const DescribeErrorLogRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeErrorLogRecords(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::DescribeErrorLogRecordsOutcomeCallable R_kvstoreClient::describeErrorLogRecordsCallable(const DescribeErrorLogRecordsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeErrorLogRecordsOutcome()>>(
			[this, request]()
			{
			return this->describeErrorLogRecords(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::ModifySecurityIpsOutcome R_kvstoreClient::modifySecurityIps(const ModifySecurityIpsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifySecurityIpsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifySecurityIpsOutcome(ModifySecurityIpsResult(outcome.result()));
	else
		return ModifySecurityIpsOutcome(outcome.error());
}

void R_kvstoreClient::modifySecurityIpsAsync(const ModifySecurityIpsRequest& request, const ModifySecurityIpsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifySecurityIps(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::ModifySecurityIpsOutcomeCallable R_kvstoreClient::modifySecurityIpsCallable(const ModifySecurityIpsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifySecurityIpsOutcome()>>(
			[this, request]()
			{
			return this->modifySecurityIps(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::DescribeVerificationListOutcome R_kvstoreClient::describeVerificationList(const DescribeVerificationListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeVerificationListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeVerificationListOutcome(DescribeVerificationListResult(outcome.result()));
	else
		return DescribeVerificationListOutcome(outcome.error());
}

void R_kvstoreClient::describeVerificationListAsync(const DescribeVerificationListRequest& request, const DescribeVerificationListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeVerificationList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::DescribeVerificationListOutcomeCallable R_kvstoreClient::describeVerificationListCallable(const DescribeVerificationListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeVerificationListOutcome()>>(
			[this, request]()
			{
			return this->describeVerificationList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::ModifyReplicaModeOutcome R_kvstoreClient::modifyReplicaMode(const ModifyReplicaModeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyReplicaModeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyReplicaModeOutcome(ModifyReplicaModeResult(outcome.result()));
	else
		return ModifyReplicaModeOutcome(outcome.error());
}

void R_kvstoreClient::modifyReplicaModeAsync(const ModifyReplicaModeRequest& request, const ModifyReplicaModeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyReplicaMode(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::ModifyReplicaModeOutcomeCallable R_kvstoreClient::modifyReplicaModeCallable(const ModifyReplicaModeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyReplicaModeOutcome()>>(
			[this, request]()
			{
			return this->modifyReplicaMode(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::DescribeStrategyOutcome R_kvstoreClient::describeStrategy(const DescribeStrategyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeStrategyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeStrategyOutcome(DescribeStrategyResult(outcome.result()));
	else
		return DescribeStrategyOutcome(outcome.error());
}

void R_kvstoreClient::describeStrategyAsync(const DescribeStrategyRequest& request, const DescribeStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeStrategy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::DescribeStrategyOutcomeCallable R_kvstoreClient::describeStrategyCallable(const DescribeStrategyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeStrategyOutcome()>>(
			[this, request]()
			{
			return this->describeStrategy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::TagResourcesOutcome R_kvstoreClient::tagResources(const TagResourcesRequest &request) const
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

void R_kvstoreClient::tagResourcesAsync(const TagResourcesRequest& request, const TagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, tagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::TagResourcesOutcomeCallable R_kvstoreClient::tagResourcesCallable(const TagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TagResourcesOutcome()>>(
			[this, request]()
			{
			return this->tagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::GrantAccountPrivilegeOutcome R_kvstoreClient::grantAccountPrivilege(const GrantAccountPrivilegeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GrantAccountPrivilegeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GrantAccountPrivilegeOutcome(GrantAccountPrivilegeResult(outcome.result()));
	else
		return GrantAccountPrivilegeOutcome(outcome.error());
}

void R_kvstoreClient::grantAccountPrivilegeAsync(const GrantAccountPrivilegeRequest& request, const GrantAccountPrivilegeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, grantAccountPrivilege(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::GrantAccountPrivilegeOutcomeCallable R_kvstoreClient::grantAccountPrivilegeCallable(const GrantAccountPrivilegeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GrantAccountPrivilegeOutcome()>>(
			[this, request]()
			{
			return this->grantAccountPrivilege(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::TransformToPrePaidOutcome R_kvstoreClient::transformToPrePaid(const TransformToPrePaidRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return TransformToPrePaidOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return TransformToPrePaidOutcome(TransformToPrePaidResult(outcome.result()));
	else
		return TransformToPrePaidOutcome(outcome.error());
}

void R_kvstoreClient::transformToPrePaidAsync(const TransformToPrePaidRequest& request, const TransformToPrePaidAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, transformToPrePaid(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::TransformToPrePaidOutcomeCallable R_kvstoreClient::transformToPrePaidCallable(const TransformToPrePaidRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TransformToPrePaidOutcome()>>(
			[this, request]()
			{
			return this->transformToPrePaid(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::DescribeCacheAnalysisReportListOutcome R_kvstoreClient::describeCacheAnalysisReportList(const DescribeCacheAnalysisReportListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCacheAnalysisReportListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCacheAnalysisReportListOutcome(DescribeCacheAnalysisReportListResult(outcome.result()));
	else
		return DescribeCacheAnalysisReportListOutcome(outcome.error());
}

void R_kvstoreClient::describeCacheAnalysisReportListAsync(const DescribeCacheAnalysisReportListRequest& request, const DescribeCacheAnalysisReportListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCacheAnalysisReportList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::DescribeCacheAnalysisReportListOutcomeCallable R_kvstoreClient::describeCacheAnalysisReportListCallable(const DescribeCacheAnalysisReportListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCacheAnalysisReportListOutcome()>>(
			[this, request]()
			{
			return this->describeCacheAnalysisReportList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::DescribeActiveOperationTaskRegionOutcome R_kvstoreClient::describeActiveOperationTaskRegion(const DescribeActiveOperationTaskRegionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeActiveOperationTaskRegionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeActiveOperationTaskRegionOutcome(DescribeActiveOperationTaskRegionResult(outcome.result()));
	else
		return DescribeActiveOperationTaskRegionOutcome(outcome.error());
}

void R_kvstoreClient::describeActiveOperationTaskRegionAsync(const DescribeActiveOperationTaskRegionRequest& request, const DescribeActiveOperationTaskRegionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeActiveOperationTaskRegion(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::DescribeActiveOperationTaskRegionOutcomeCallable R_kvstoreClient::describeActiveOperationTaskRegionCallable(const DescribeActiveOperationTaskRegionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeActiveOperationTaskRegionOutcome()>>(
			[this, request]()
			{
			return this->describeActiveOperationTaskRegion(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::ModifyInstanceConfigOutcome R_kvstoreClient::modifyInstanceConfig(const ModifyInstanceConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyInstanceConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyInstanceConfigOutcome(ModifyInstanceConfigResult(outcome.result()));
	else
		return ModifyInstanceConfigOutcome(outcome.error());
}

void R_kvstoreClient::modifyInstanceConfigAsync(const ModifyInstanceConfigRequest& request, const ModifyInstanceConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyInstanceConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::ModifyInstanceConfigOutcomeCallable R_kvstoreClient::modifyInstanceConfigCallable(const ModifyInstanceConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyInstanceConfigOutcome()>>(
			[this, request]()
			{
			return this->modifyInstanceConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::DeleteInstanceOutcome R_kvstoreClient::deleteInstance(const DeleteInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteInstanceOutcome(DeleteInstanceResult(outcome.result()));
	else
		return DeleteInstanceOutcome(outcome.error());
}

void R_kvstoreClient::deleteInstanceAsync(const DeleteInstanceRequest& request, const DeleteInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::DeleteInstanceOutcomeCallable R_kvstoreClient::deleteInstanceCallable(const DeleteInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteInstanceOutcome()>>(
			[this, request]()
			{
			return this->deleteInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::ListTagResourcesOutcome R_kvstoreClient::listTagResources(const ListTagResourcesRequest &request) const
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

void R_kvstoreClient::listTagResourcesAsync(const ListTagResourcesRequest& request, const ListTagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::ListTagResourcesOutcomeCallable R_kvstoreClient::listTagResourcesCallable(const ListTagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTagResourcesOutcome()>>(
			[this, request]()
			{
			return this->listTagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::RestoreSnapshotOutcome R_kvstoreClient::restoreSnapshot(const RestoreSnapshotRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RestoreSnapshotOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RestoreSnapshotOutcome(RestoreSnapshotResult(outcome.result()));
	else
		return RestoreSnapshotOutcome(outcome.error());
}

void R_kvstoreClient::restoreSnapshotAsync(const RestoreSnapshotRequest& request, const RestoreSnapshotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, restoreSnapshot(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::RestoreSnapshotOutcomeCallable R_kvstoreClient::restoreSnapshotCallable(const RestoreSnapshotRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RestoreSnapshotOutcome()>>(
			[this, request]()
			{
			return this->restoreSnapshot(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::DescribeIntranetAttributeOutcome R_kvstoreClient::describeIntranetAttribute(const DescribeIntranetAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeIntranetAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeIntranetAttributeOutcome(DescribeIntranetAttributeResult(outcome.result()));
	else
		return DescribeIntranetAttributeOutcome(outcome.error());
}

void R_kvstoreClient::describeIntranetAttributeAsync(const DescribeIntranetAttributeRequest& request, const DescribeIntranetAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeIntranetAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::DescribeIntranetAttributeOutcomeCallable R_kvstoreClient::describeIntranetAttributeCallable(const DescribeIntranetAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeIntranetAttributeOutcome()>>(
			[this, request]()
			{
			return this->describeIntranetAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::CreateInstanceOutcome R_kvstoreClient::createInstance(const CreateInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateInstanceOutcome(CreateInstanceResult(outcome.result()));
	else
		return CreateInstanceOutcome(outcome.error());
}

void R_kvstoreClient::createInstanceAsync(const CreateInstanceRequest& request, const CreateInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::CreateInstanceOutcomeCallable R_kvstoreClient::createInstanceCallable(const CreateInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateInstanceOutcome()>>(
			[this, request]()
			{
			return this->createInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::CreateCacheAnalysisTaskOutcome R_kvstoreClient::createCacheAnalysisTask(const CreateCacheAnalysisTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateCacheAnalysisTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateCacheAnalysisTaskOutcome(CreateCacheAnalysisTaskResult(outcome.result()));
	else
		return CreateCacheAnalysisTaskOutcome(outcome.error());
}

void R_kvstoreClient::createCacheAnalysisTaskAsync(const CreateCacheAnalysisTaskRequest& request, const CreateCacheAnalysisTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createCacheAnalysisTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::CreateCacheAnalysisTaskOutcomeCallable R_kvstoreClient::createCacheAnalysisTaskCallable(const CreateCacheAnalysisTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateCacheAnalysisTaskOutcome()>>(
			[this, request]()
			{
			return this->createCacheAnalysisTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::RevokeAccountPrivilegeOutcome R_kvstoreClient::revokeAccountPrivilege(const RevokeAccountPrivilegeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RevokeAccountPrivilegeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RevokeAccountPrivilegeOutcome(RevokeAccountPrivilegeResult(outcome.result()));
	else
		return RevokeAccountPrivilegeOutcome(outcome.error());
}

void R_kvstoreClient::revokeAccountPrivilegeAsync(const RevokeAccountPrivilegeRequest& request, const RevokeAccountPrivilegeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, revokeAccountPrivilege(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::RevokeAccountPrivilegeOutcomeCallable R_kvstoreClient::revokeAccountPrivilegeCallable(const RevokeAccountPrivilegeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RevokeAccountPrivilegeOutcome()>>(
			[this, request]()
			{
			return this->revokeAccountPrivilege(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::DescribeParameterTemplatesOutcome R_kvstoreClient::describeParameterTemplates(const DescribeParameterTemplatesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeParameterTemplatesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeParameterTemplatesOutcome(DescribeParameterTemplatesResult(outcome.result()));
	else
		return DescribeParameterTemplatesOutcome(outcome.error());
}

void R_kvstoreClient::describeParameterTemplatesAsync(const DescribeParameterTemplatesRequest& request, const DescribeParameterTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeParameterTemplates(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::DescribeParameterTemplatesOutcomeCallable R_kvstoreClient::describeParameterTemplatesCallable(const DescribeParameterTemplatesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeParameterTemplatesOutcome()>>(
			[this, request]()
			{
			return this->describeParameterTemplates(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::DestroyInstanceOutcome R_kvstoreClient::destroyInstance(const DestroyInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DestroyInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DestroyInstanceOutcome(DestroyInstanceResult(outcome.result()));
	else
		return DestroyInstanceOutcome(outcome.error());
}

void R_kvstoreClient::destroyInstanceAsync(const DestroyInstanceRequest& request, const DestroyInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, destroyInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::DestroyInstanceOutcomeCallable R_kvstoreClient::destroyInstanceCallable(const DestroyInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DestroyInstanceOutcome()>>(
			[this, request]()
			{
			return this->destroyInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::DescribeRunningLogRecordsOutcome R_kvstoreClient::describeRunningLogRecords(const DescribeRunningLogRecordsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRunningLogRecordsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRunningLogRecordsOutcome(DescribeRunningLogRecordsResult(outcome.result()));
	else
		return DescribeRunningLogRecordsOutcome(outcome.error());
}

void R_kvstoreClient::describeRunningLogRecordsAsync(const DescribeRunningLogRecordsRequest& request, const DescribeRunningLogRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRunningLogRecords(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::DescribeRunningLogRecordsOutcomeCallable R_kvstoreClient::describeRunningLogRecordsCallable(const DescribeRunningLogRecordsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRunningLogRecordsOutcome()>>(
			[this, request]()
			{
			return this->describeRunningLogRecords(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::DescribeStaticVerificationListOutcome R_kvstoreClient::describeStaticVerificationList(const DescribeStaticVerificationListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeStaticVerificationListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeStaticVerificationListOutcome(DescribeStaticVerificationListResult(outcome.result()));
	else
		return DescribeStaticVerificationListOutcome(outcome.error());
}

void R_kvstoreClient::describeStaticVerificationListAsync(const DescribeStaticVerificationListRequest& request, const DescribeStaticVerificationListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeStaticVerificationList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::DescribeStaticVerificationListOutcomeCallable R_kvstoreClient::describeStaticVerificationListCallable(const DescribeStaticVerificationListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeStaticVerificationListOutcome()>>(
			[this, request]()
			{
			return this->describeStaticVerificationList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::CreateTempInstanceOutcome R_kvstoreClient::createTempInstance(const CreateTempInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateTempInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateTempInstanceOutcome(CreateTempInstanceResult(outcome.result()));
	else
		return CreateTempInstanceOutcome(outcome.error());
}

void R_kvstoreClient::createTempInstanceAsync(const CreateTempInstanceRequest& request, const CreateTempInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createTempInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::CreateTempInstanceOutcomeCallable R_kvstoreClient::createTempInstanceCallable(const CreateTempInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateTempInstanceOutcome()>>(
			[this, request]()
			{
			return this->createTempInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::UnlinkReplicaInstanceOutcome R_kvstoreClient::unlinkReplicaInstance(const UnlinkReplicaInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UnlinkReplicaInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UnlinkReplicaInstanceOutcome(UnlinkReplicaInstanceResult(outcome.result()));
	else
		return UnlinkReplicaInstanceOutcome(outcome.error());
}

void R_kvstoreClient::unlinkReplicaInstanceAsync(const UnlinkReplicaInstanceRequest& request, const UnlinkReplicaInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, unlinkReplicaInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::UnlinkReplicaInstanceOutcomeCallable R_kvstoreClient::unlinkReplicaInstanceCallable(const UnlinkReplicaInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UnlinkReplicaInstanceOutcome()>>(
			[this, request]()
			{
			return this->unlinkReplicaInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::DescribeZonesOutcome R_kvstoreClient::describeZones(const DescribeZonesRequest &request) const
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

void R_kvstoreClient::describeZonesAsync(const DescribeZonesRequest& request, const DescribeZonesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeZones(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::DescribeZonesOutcomeCallable R_kvstoreClient::describeZonesCallable(const DescribeZonesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeZonesOutcome()>>(
			[this, request]()
			{
			return this->describeZones(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::FlushInstanceOutcome R_kvstoreClient::flushInstance(const FlushInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return FlushInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return FlushInstanceOutcome(FlushInstanceResult(outcome.result()));
	else
		return FlushInstanceOutcome(outcome.error());
}

void R_kvstoreClient::flushInstanceAsync(const FlushInstanceRequest& request, const FlushInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, flushInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::FlushInstanceOutcomeCallable R_kvstoreClient::flushInstanceCallable(const FlushInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<FlushInstanceOutcome()>>(
			[this, request]()
			{
			return this->flushInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::DescribeDBInstanceNetInfoOutcome R_kvstoreClient::describeDBInstanceNetInfo(const DescribeDBInstanceNetInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDBInstanceNetInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDBInstanceNetInfoOutcome(DescribeDBInstanceNetInfoResult(outcome.result()));
	else
		return DescribeDBInstanceNetInfoOutcome(outcome.error());
}

void R_kvstoreClient::describeDBInstanceNetInfoAsync(const DescribeDBInstanceNetInfoRequest& request, const DescribeDBInstanceNetInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDBInstanceNetInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::DescribeDBInstanceNetInfoOutcomeCallable R_kvstoreClient::describeDBInstanceNetInfoCallable(const DescribeDBInstanceNetInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDBInstanceNetInfoOutcome()>>(
			[this, request]()
			{
			return this->describeDBInstanceNetInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::DescribeSecurityIpsOutcome R_kvstoreClient::describeSecurityIps(const DescribeSecurityIpsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSecurityIpsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSecurityIpsOutcome(DescribeSecurityIpsResult(outcome.result()));
	else
		return DescribeSecurityIpsOutcome(outcome.error());
}

void R_kvstoreClient::describeSecurityIpsAsync(const DescribeSecurityIpsRequest& request, const DescribeSecurityIpsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSecurityIps(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::DescribeSecurityIpsOutcomeCallable R_kvstoreClient::describeSecurityIpsCallable(const DescribeSecurityIpsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSecurityIpsOutcome()>>(
			[this, request]()
			{
			return this->describeSecurityIps(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::DeleteSnapshotSettingsOutcome R_kvstoreClient::deleteSnapshotSettings(const DeleteSnapshotSettingsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteSnapshotSettingsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteSnapshotSettingsOutcome(DeleteSnapshotSettingsResult(outcome.result()));
	else
		return DeleteSnapshotSettingsOutcome(outcome.error());
}

void R_kvstoreClient::deleteSnapshotSettingsAsync(const DeleteSnapshotSettingsRequest& request, const DeleteSnapshotSettingsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteSnapshotSettings(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::DeleteSnapshotSettingsOutcomeCallable R_kvstoreClient::deleteSnapshotSettingsCallable(const DeleteSnapshotSettingsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteSnapshotSettingsOutcome()>>(
			[this, request]()
			{
			return this->deleteSnapshotSettings(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::ReleaseInstancePublicConnectionOutcome R_kvstoreClient::releaseInstancePublicConnection(const ReleaseInstancePublicConnectionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ReleaseInstancePublicConnectionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ReleaseInstancePublicConnectionOutcome(ReleaseInstancePublicConnectionResult(outcome.result()));
	else
		return ReleaseInstancePublicConnectionOutcome(outcome.error());
}

void R_kvstoreClient::releaseInstancePublicConnectionAsync(const ReleaseInstancePublicConnectionRequest& request, const ReleaseInstancePublicConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, releaseInstancePublicConnection(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::ReleaseInstancePublicConnectionOutcomeCallable R_kvstoreClient::releaseInstancePublicConnectionCallable(const ReleaseInstancePublicConnectionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ReleaseInstancePublicConnectionOutcome()>>(
			[this, request]()
			{
			return this->releaseInstancePublicConnection(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::ModifyInstanceSSLOutcome R_kvstoreClient::modifyInstanceSSL(const ModifyInstanceSSLRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyInstanceSSLOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyInstanceSSLOutcome(ModifyInstanceSSLResult(outcome.result()));
	else
		return ModifyInstanceSSLOutcome(outcome.error());
}

void R_kvstoreClient::modifyInstanceSSLAsync(const ModifyInstanceSSLRequest& request, const ModifyInstanceSSLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyInstanceSSL(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::ModifyInstanceSSLOutcomeCallable R_kvstoreClient::modifyInstanceSSLCallable(const ModifyInstanceSSLRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyInstanceSSLOutcome()>>(
			[this, request]()
			{
			return this->modifyInstanceSSL(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::DescribeTempInstanceOutcome R_kvstoreClient::describeTempInstance(const DescribeTempInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeTempInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeTempInstanceOutcome(DescribeTempInstanceResult(outcome.result()));
	else
		return DescribeTempInstanceOutcome(outcome.error());
}

void R_kvstoreClient::describeTempInstanceAsync(const DescribeTempInstanceRequest& request, const DescribeTempInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeTempInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::DescribeTempInstanceOutcomeCallable R_kvstoreClient::describeTempInstanceCallable(const DescribeTempInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeTempInstanceOutcome()>>(
			[this, request]()
			{
			return this->describeTempInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::ModifyReplicaRelationOutcome R_kvstoreClient::modifyReplicaRelation(const ModifyReplicaRelationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyReplicaRelationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyReplicaRelationOutcome(ModifyReplicaRelationResult(outcome.result()));
	else
		return ModifyReplicaRelationOutcome(outcome.error());
}

void R_kvstoreClient::modifyReplicaRelationAsync(const ModifyReplicaRelationRequest& request, const ModifyReplicaRelationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyReplicaRelation(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::ModifyReplicaRelationOutcomeCallable R_kvstoreClient::modifyReplicaRelationCallable(const ModifyReplicaRelationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyReplicaRelationOutcome()>>(
			[this, request]()
			{
			return this->modifyReplicaRelation(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::DescribeInstancesByExpireTimeOutcome R_kvstoreClient::describeInstancesByExpireTime(const DescribeInstancesByExpireTimeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeInstancesByExpireTimeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeInstancesByExpireTimeOutcome(DescribeInstancesByExpireTimeResult(outcome.result()));
	else
		return DescribeInstancesByExpireTimeOutcome(outcome.error());
}

void R_kvstoreClient::describeInstancesByExpireTimeAsync(const DescribeInstancesByExpireTimeRequest& request, const DescribeInstancesByExpireTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeInstancesByExpireTime(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::DescribeInstancesByExpireTimeOutcomeCallable R_kvstoreClient::describeInstancesByExpireTimeCallable(const DescribeInstancesByExpireTimeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeInstancesByExpireTimeOutcome()>>(
			[this, request]()
			{
			return this->describeInstancesByExpireTime(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::DescribeReplicaUsageOutcome R_kvstoreClient::describeReplicaUsage(const DescribeReplicaUsageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeReplicaUsageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeReplicaUsageOutcome(DescribeReplicaUsageResult(outcome.result()));
	else
		return DescribeReplicaUsageOutcome(outcome.error());
}

void R_kvstoreClient::describeReplicaUsageAsync(const DescribeReplicaUsageRequest& request, const DescribeReplicaUsageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeReplicaUsage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::DescribeReplicaUsageOutcomeCallable R_kvstoreClient::describeReplicaUsageCallable(const DescribeReplicaUsageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeReplicaUsageOutcome()>>(
			[this, request]()
			{
			return this->describeReplicaUsage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::CreateBackupOutcome R_kvstoreClient::createBackup(const CreateBackupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateBackupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateBackupOutcome(CreateBackupResult(outcome.result()));
	else
		return CreateBackupOutcome(outcome.error());
}

void R_kvstoreClient::createBackupAsync(const CreateBackupRequest& request, const CreateBackupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createBackup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::CreateBackupOutcomeCallable R_kvstoreClient::createBackupCallable(const CreateBackupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateBackupOutcome()>>(
			[this, request]()
			{
			return this->createBackup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::ModifyIntranetAttributeOutcome R_kvstoreClient::modifyIntranetAttribute(const ModifyIntranetAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyIntranetAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyIntranetAttributeOutcome(ModifyIntranetAttributeResult(outcome.result()));
	else
		return ModifyIntranetAttributeOutcome(outcome.error());
}

void R_kvstoreClient::modifyIntranetAttributeAsync(const ModifyIntranetAttributeRequest& request, const ModifyIntranetAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyIntranetAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::ModifyIntranetAttributeOutcomeCallable R_kvstoreClient::modifyIntranetAttributeCallable(const ModifyIntranetAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyIntranetAttributeOutcome()>>(
			[this, request]()
			{
			return this->modifyIntranetAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::ModifyInstanceSpecPreCheckOutcome R_kvstoreClient::modifyInstanceSpecPreCheck(const ModifyInstanceSpecPreCheckRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyInstanceSpecPreCheckOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyInstanceSpecPreCheckOutcome(ModifyInstanceSpecPreCheckResult(outcome.result()));
	else
		return ModifyInstanceSpecPreCheckOutcome(outcome.error());
}

void R_kvstoreClient::modifyInstanceSpecPreCheckAsync(const ModifyInstanceSpecPreCheckRequest& request, const ModifyInstanceSpecPreCheckAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyInstanceSpecPreCheck(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::ModifyInstanceSpecPreCheckOutcomeCallable R_kvstoreClient::modifyInstanceSpecPreCheckCallable(const ModifyInstanceSpecPreCheckRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyInstanceSpecPreCheckOutcome()>>(
			[this, request]()
			{
			return this->modifyInstanceSpecPreCheck(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::DescribeReplicaPerformanceOutcome R_kvstoreClient::describeReplicaPerformance(const DescribeReplicaPerformanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeReplicaPerformanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeReplicaPerformanceOutcome(DescribeReplicaPerformanceResult(outcome.result()));
	else
		return DescribeReplicaPerformanceOutcome(outcome.error());
}

void R_kvstoreClient::describeReplicaPerformanceAsync(const DescribeReplicaPerformanceRequest& request, const DescribeReplicaPerformanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeReplicaPerformance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::DescribeReplicaPerformanceOutcomeCallable R_kvstoreClient::describeReplicaPerformanceCallable(const DescribeReplicaPerformanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeReplicaPerformanceOutcome()>>(
			[this, request]()
			{
			return this->describeReplicaPerformance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::DescribeMonitorItemsOutcome R_kvstoreClient::describeMonitorItems(const DescribeMonitorItemsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeMonitorItemsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeMonitorItemsOutcome(DescribeMonitorItemsResult(outcome.result()));
	else
		return DescribeMonitorItemsOutcome(outcome.error());
}

void R_kvstoreClient::describeMonitorItemsAsync(const DescribeMonitorItemsRequest& request, const DescribeMonitorItemsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeMonitorItems(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::DescribeMonitorItemsOutcomeCallable R_kvstoreClient::describeMonitorItemsCallable(const DescribeMonitorItemsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeMonitorItemsOutcome()>>(
			[this, request]()
			{
			return this->describeMonitorItems(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::DescribeLogicInstanceTopologyOutcome R_kvstoreClient::describeLogicInstanceTopology(const DescribeLogicInstanceTopologyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLogicInstanceTopologyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLogicInstanceTopologyOutcome(DescribeLogicInstanceTopologyResult(outcome.result()));
	else
		return DescribeLogicInstanceTopologyOutcome(outcome.error());
}

void R_kvstoreClient::describeLogicInstanceTopologyAsync(const DescribeLogicInstanceTopologyRequest& request, const DescribeLogicInstanceTopologyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLogicInstanceTopology(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::DescribeLogicInstanceTopologyOutcomeCallable R_kvstoreClient::describeLogicInstanceTopologyCallable(const DescribeLogicInstanceTopologyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLogicInstanceTopologyOutcome()>>(
			[this, request]()
			{
			return this->describeLogicInstanceTopology(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::DescribeCacheAnalysisReportOutcome R_kvstoreClient::describeCacheAnalysisReport(const DescribeCacheAnalysisReportRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCacheAnalysisReportOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCacheAnalysisReportOutcome(DescribeCacheAnalysisReportResult(outcome.result()));
	else
		return DescribeCacheAnalysisReportOutcome(outcome.error());
}

void R_kvstoreClient::describeCacheAnalysisReportAsync(const DescribeCacheAnalysisReportRequest& request, const DescribeCacheAnalysisReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCacheAnalysisReport(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::DescribeCacheAnalysisReportOutcomeCallable R_kvstoreClient::describeCacheAnalysisReportCallable(const DescribeCacheAnalysisReportRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCacheAnalysisReportOutcome()>>(
			[this, request]()
			{
			return this->describeCacheAnalysisReport(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::SetSnapshotSettingsOutcome R_kvstoreClient::setSnapshotSettings(const SetSnapshotSettingsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetSnapshotSettingsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetSnapshotSettingsOutcome(SetSnapshotSettingsResult(outcome.result()));
	else
		return SetSnapshotSettingsOutcome(outcome.error());
}

void R_kvstoreClient::setSnapshotSettingsAsync(const SetSnapshotSettingsRequest& request, const SetSnapshotSettingsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setSnapshotSettings(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::SetSnapshotSettingsOutcomeCallable R_kvstoreClient::setSnapshotSettingsCallable(const SetSnapshotSettingsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetSnapshotSettingsOutcome()>>(
			[this, request]()
			{
			return this->setSnapshotSettings(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::ResetAccountOutcome R_kvstoreClient::resetAccount(const ResetAccountRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ResetAccountOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ResetAccountOutcome(ResetAccountResult(outcome.result()));
	else
		return ResetAccountOutcome(outcome.error());
}

void R_kvstoreClient::resetAccountAsync(const ResetAccountRequest& request, const ResetAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, resetAccount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::ResetAccountOutcomeCallable R_kvstoreClient::resetAccountCallable(const ResetAccountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ResetAccountOutcome()>>(
			[this, request]()
			{
			return this->resetAccount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::SwitchTempInstanceOutcome R_kvstoreClient::switchTempInstance(const SwitchTempInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SwitchTempInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SwitchTempInstanceOutcome(SwitchTempInstanceResult(outcome.result()));
	else
		return SwitchTempInstanceOutcome(outcome.error());
}

void R_kvstoreClient::switchTempInstanceAsync(const SwitchTempInstanceRequest& request, const SwitchTempInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, switchTempInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::SwitchTempInstanceOutcomeCallable R_kvstoreClient::switchTempInstanceCallable(const SwitchTempInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SwitchTempInstanceOutcome()>>(
			[this, request]()
			{
			return this->switchTempInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::RestoreInstanceOutcome R_kvstoreClient::restoreInstance(const RestoreInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RestoreInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RestoreInstanceOutcome(RestoreInstanceResult(outcome.result()));
	else
		return RestoreInstanceOutcome(outcome.error());
}

void R_kvstoreClient::restoreInstanceAsync(const RestoreInstanceRequest& request, const RestoreInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, restoreInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::RestoreInstanceOutcomeCallable R_kvstoreClient::restoreInstanceCallable(const RestoreInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RestoreInstanceOutcome()>>(
			[this, request]()
			{
			return this->restoreInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::RestartInstanceOutcome R_kvstoreClient::restartInstance(const RestartInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RestartInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RestartInstanceOutcome(RestartInstanceResult(outcome.result()));
	else
		return RestartInstanceOutcome(outcome.error());
}

void R_kvstoreClient::restartInstanceAsync(const RestartInstanceRequest& request, const RestartInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, restartInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::RestartInstanceOutcomeCallable R_kvstoreClient::restartInstanceCallable(const RestartInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RestartInstanceOutcome()>>(
			[this, request]()
			{
			return this->restartInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::DescribeRegionsOutcome R_kvstoreClient::describeRegions(const DescribeRegionsRequest &request) const
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

void R_kvstoreClient::describeRegionsAsync(const DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRegions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::DescribeRegionsOutcomeCallable R_kvstoreClient::describeRegionsCallable(const DescribeRegionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRegionsOutcome()>>(
			[this, request]()
			{
			return this->describeRegions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::ModifyInstanceMaintainTimeOutcome R_kvstoreClient::modifyInstanceMaintainTime(const ModifyInstanceMaintainTimeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyInstanceMaintainTimeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyInstanceMaintainTimeOutcome(ModifyInstanceMaintainTimeResult(outcome.result()));
	else
		return ModifyInstanceMaintainTimeOutcome(outcome.error());
}

void R_kvstoreClient::modifyInstanceMaintainTimeAsync(const ModifyInstanceMaintainTimeRequest& request, const ModifyInstanceMaintainTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyInstanceMaintainTime(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::ModifyInstanceMaintainTimeOutcomeCallable R_kvstoreClient::modifyInstanceMaintainTimeCallable(const ModifyInstanceMaintainTimeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyInstanceMaintainTimeOutcome()>>(
			[this, request]()
			{
			return this->modifyInstanceMaintainTime(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::MigrateToOtherZoneOutcome R_kvstoreClient::migrateToOtherZone(const MigrateToOtherZoneRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return MigrateToOtherZoneOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return MigrateToOtherZoneOutcome(MigrateToOtherZoneResult(outcome.result()));
	else
		return MigrateToOtherZoneOutcome(outcome.error());
}

void R_kvstoreClient::migrateToOtherZoneAsync(const MigrateToOtherZoneRequest& request, const MigrateToOtherZoneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, migrateToOtherZone(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::MigrateToOtherZoneOutcomeCallable R_kvstoreClient::migrateToOtherZoneCallable(const MigrateToOtherZoneRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<MigrateToOtherZoneOutcome()>>(
			[this, request]()
			{
			return this->migrateToOtherZone(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::DeleteAccountOutcome R_kvstoreClient::deleteAccount(const DeleteAccountRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteAccountOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteAccountOutcome(DeleteAccountResult(outcome.result()));
	else
		return DeleteAccountOutcome(outcome.error());
}

void R_kvstoreClient::deleteAccountAsync(const DeleteAccountRequest& request, const DeleteAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteAccount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::DeleteAccountOutcomeCallable R_kvstoreClient::deleteAccountCallable(const DeleteAccountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteAccountOutcome()>>(
			[this, request]()
			{
			return this->deleteAccount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::DescribeSlowLogRecordsOutcome R_kvstoreClient::describeSlowLogRecords(const DescribeSlowLogRecordsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSlowLogRecordsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSlowLogRecordsOutcome(DescribeSlowLogRecordsResult(outcome.result()));
	else
		return DescribeSlowLogRecordsOutcome(outcome.error());
}

void R_kvstoreClient::describeSlowLogRecordsAsync(const DescribeSlowLogRecordsRequest& request, const DescribeSlowLogRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSlowLogRecords(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::DescribeSlowLogRecordsOutcomeCallable R_kvstoreClient::describeSlowLogRecordsCallable(const DescribeSlowLogRecordsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSlowLogRecordsOutcome()>>(
			[this, request]()
			{
			return this->describeSlowLogRecords(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::DescribeParameterModificationHistoryOutcome R_kvstoreClient::describeParameterModificationHistory(const DescribeParameterModificationHistoryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeParameterModificationHistoryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeParameterModificationHistoryOutcome(DescribeParameterModificationHistoryResult(outcome.result()));
	else
		return DescribeParameterModificationHistoryOutcome(outcome.error());
}

void R_kvstoreClient::describeParameterModificationHistoryAsync(const DescribeParameterModificationHistoryRequest& request, const DescribeParameterModificationHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeParameterModificationHistory(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::DescribeParameterModificationHistoryOutcomeCallable R_kvstoreClient::describeParameterModificationHistoryCallable(const DescribeParameterModificationHistoryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeParameterModificationHistoryOutcome()>>(
			[this, request]()
			{
			return this->describeParameterModificationHistory(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::DescribeInstanceSSLOutcome R_kvstoreClient::describeInstanceSSL(const DescribeInstanceSSLRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeInstanceSSLOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeInstanceSSLOutcome(DescribeInstanceSSLResult(outcome.result()));
	else
		return DescribeInstanceSSLOutcome(outcome.error());
}

void R_kvstoreClient::describeInstanceSSLAsync(const DescribeInstanceSSLRequest& request, const DescribeInstanceSSLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeInstanceSSL(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::DescribeInstanceSSLOutcomeCallable R_kvstoreClient::describeInstanceSSLCallable(const DescribeInstanceSSLRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeInstanceSSLOutcome()>>(
			[this, request]()
			{
			return this->describeInstanceSSL(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::ResetAccountPasswordOutcome R_kvstoreClient::resetAccountPassword(const ResetAccountPasswordRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ResetAccountPasswordOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ResetAccountPasswordOutcome(ResetAccountPasswordResult(outcome.result()));
	else
		return ResetAccountPasswordOutcome(outcome.error());
}

void R_kvstoreClient::resetAccountPasswordAsync(const ResetAccountPasswordRequest& request, const ResetAccountPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, resetAccountPassword(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::ResetAccountPasswordOutcomeCallable R_kvstoreClient::resetAccountPasswordCallable(const ResetAccountPasswordRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ResetAccountPasswordOutcome()>>(
			[this, request]()
			{
			return this->resetAccountPassword(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::DescribeAccountsOutcome R_kvstoreClient::describeAccounts(const DescribeAccountsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAccountsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAccountsOutcome(DescribeAccountsResult(outcome.result()));
	else
		return DescribeAccountsOutcome(outcome.error());
}

void R_kvstoreClient::describeAccountsAsync(const DescribeAccountsRequest& request, const DescribeAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAccounts(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::DescribeAccountsOutcomeCallable R_kvstoreClient::describeAccountsCallable(const DescribeAccountsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAccountsOutcome()>>(
			[this, request]()
			{
			return this->describeAccounts(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::QueryTaskOutcome R_kvstoreClient::queryTask(const QueryTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryTaskOutcome(QueryTaskResult(outcome.result()));
	else
		return QueryTaskOutcome(outcome.error());
}

void R_kvstoreClient::queryTaskAsync(const QueryTaskRequest& request, const QueryTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::QueryTaskOutcomeCallable R_kvstoreClient::queryTaskCallable(const QueryTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryTaskOutcome()>>(
			[this, request]()
			{
			return this->queryTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::RenewMultiInstanceOutcome R_kvstoreClient::renewMultiInstance(const RenewMultiInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RenewMultiInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RenewMultiInstanceOutcome(RenewMultiInstanceResult(outcome.result()));
	else
		return RenewMultiInstanceOutcome(outcome.error());
}

void R_kvstoreClient::renewMultiInstanceAsync(const RenewMultiInstanceRequest& request, const RenewMultiInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, renewMultiInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::RenewMultiInstanceOutcomeCallable R_kvstoreClient::renewMultiInstanceCallable(const RenewMultiInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RenewMultiInstanceOutcome()>>(
			[this, request]()
			{
			return this->renewMultiInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::EvaluateFailOverSwitchOutcome R_kvstoreClient::evaluateFailOverSwitch(const EvaluateFailOverSwitchRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EvaluateFailOverSwitchOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EvaluateFailOverSwitchOutcome(EvaluateFailOverSwitchResult(outcome.result()));
	else
		return EvaluateFailOverSwitchOutcome(outcome.error());
}

void R_kvstoreClient::evaluateFailOverSwitchAsync(const EvaluateFailOverSwitchRequest& request, const EvaluateFailOverSwitchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, evaluateFailOverSwitch(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::EvaluateFailOverSwitchOutcomeCallable R_kvstoreClient::evaluateFailOverSwitchCallable(const EvaluateFailOverSwitchRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EvaluateFailOverSwitchOutcome()>>(
			[this, request]()
			{
			return this->evaluateFailOverSwitch(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::ModifyGuardDomainModeOutcome R_kvstoreClient::modifyGuardDomainMode(const ModifyGuardDomainModeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyGuardDomainModeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyGuardDomainModeOutcome(ModifyGuardDomainModeResult(outcome.result()));
	else
		return ModifyGuardDomainModeOutcome(outcome.error());
}

void R_kvstoreClient::modifyGuardDomainModeAsync(const ModifyGuardDomainModeRequest& request, const ModifyGuardDomainModeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyGuardDomainMode(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::ModifyGuardDomainModeOutcomeCallable R_kvstoreClient::modifyGuardDomainModeCallable(const ModifyGuardDomainModeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyGuardDomainModeOutcome()>>(
			[this, request]()
			{
			return this->modifyGuardDomainMode(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::ModifyReplicaVerificationModeOutcome R_kvstoreClient::modifyReplicaVerificationMode(const ModifyReplicaVerificationModeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyReplicaVerificationModeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyReplicaVerificationModeOutcome(ModifyReplicaVerificationModeResult(outcome.result()));
	else
		return ModifyReplicaVerificationModeOutcome(outcome.error());
}

void R_kvstoreClient::modifyReplicaVerificationModeAsync(const ModifyReplicaVerificationModeRequest& request, const ModifyReplicaVerificationModeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyReplicaVerificationMode(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::ModifyReplicaVerificationModeOutcomeCallable R_kvstoreClient::modifyReplicaVerificationModeCallable(const ModifyReplicaVerificationModeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyReplicaVerificationModeOutcome()>>(
			[this, request]()
			{
			return this->modifyReplicaVerificationMode(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::GetSnapshotSettingsOutcome R_kvstoreClient::getSnapshotSettings(const GetSnapshotSettingsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetSnapshotSettingsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetSnapshotSettingsOutcome(GetSnapshotSettingsResult(outcome.result()));
	else
		return GetSnapshotSettingsOutcome(outcome.error());
}

void R_kvstoreClient::getSnapshotSettingsAsync(const GetSnapshotSettingsRequest& request, const GetSnapshotSettingsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getSnapshotSettings(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::GetSnapshotSettingsOutcomeCallable R_kvstoreClient::getSnapshotSettingsCallable(const GetSnapshotSettingsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetSnapshotSettingsOutcome()>>(
			[this, request]()
			{
			return this->getSnapshotSettings(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::ModifyActiveOperationTaskOutcome R_kvstoreClient::modifyActiveOperationTask(const ModifyActiveOperationTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyActiveOperationTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyActiveOperationTaskOutcome(ModifyActiveOperationTaskResult(outcome.result()));
	else
		return ModifyActiveOperationTaskOutcome(outcome.error());
}

void R_kvstoreClient::modifyActiveOperationTaskAsync(const ModifyActiveOperationTaskRequest& request, const ModifyActiveOperationTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyActiveOperationTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::ModifyActiveOperationTaskOutcomeCallable R_kvstoreClient::modifyActiveOperationTaskCallable(const ModifyActiveOperationTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyActiveOperationTaskOutcome()>>(
			[this, request]()
			{
			return this->modifyActiveOperationTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::DescribeBackupPolicyOutcome R_kvstoreClient::describeBackupPolicy(const DescribeBackupPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeBackupPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeBackupPolicyOutcome(DescribeBackupPolicyResult(outcome.result()));
	else
		return DescribeBackupPolicyOutcome(outcome.error());
}

void R_kvstoreClient::describeBackupPolicyAsync(const DescribeBackupPolicyRequest& request, const DescribeBackupPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeBackupPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::DescribeBackupPolicyOutcomeCallable R_kvstoreClient::describeBackupPolicyCallable(const DescribeBackupPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeBackupPolicyOutcome()>>(
			[this, request]()
			{
			return this->describeBackupPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

