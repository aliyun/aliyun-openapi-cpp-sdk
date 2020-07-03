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

#include <alibabacloud/airec/AirecClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Airec;
using namespace AlibabaCloud::Airec::Model;

namespace
{
	const std::string SERVICE_NAME = "Airec";
}

AirecClient::AirecClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RoaServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "airec");
}

AirecClient::AirecClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RoaServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "airec");
}

AirecClient::AirecClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RoaServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "airec");
}

AirecClient::~AirecClient()
{}

AirecClient::AttachDatasetOutcome AirecClient::attachDataset(const AttachDatasetRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AttachDatasetOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AttachDatasetOutcome(AttachDatasetResult(outcome.result()));
	else
		return AttachDatasetOutcome(outcome.error());
}

void AirecClient::attachDatasetAsync(const AttachDatasetRequest& request, const AttachDatasetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, attachDataset(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AirecClient::AttachDatasetOutcomeCallable AirecClient::attachDatasetCallable(const AttachDatasetRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AttachDatasetOutcome()>>(
			[this, request]()
			{
			return this->attachDataset(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AirecClient::CreateDiversifyOutcome AirecClient::createDiversify(const CreateDiversifyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateDiversifyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateDiversifyOutcome(CreateDiversifyResult(outcome.result()));
	else
		return CreateDiversifyOutcome(outcome.error());
}

void AirecClient::createDiversifyAsync(const CreateDiversifyRequest& request, const CreateDiversifyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createDiversify(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AirecClient::CreateDiversifyOutcomeCallable AirecClient::createDiversifyCallable(const CreateDiversifyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateDiversifyOutcome()>>(
			[this, request]()
			{
			return this->createDiversify(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AirecClient::CreateInstanceOutcome AirecClient::createInstance(const CreateInstanceRequest &request) const
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

void AirecClient::createInstanceAsync(const CreateInstanceRequest& request, const CreateInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AirecClient::CreateInstanceOutcomeCallable AirecClient::createInstanceCallable(const CreateInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateInstanceOutcome()>>(
			[this, request]()
			{
			return this->createInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AirecClient::CreateMixOutcome AirecClient::createMix(const CreateMixRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateMixOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateMixOutcome(CreateMixResult(outcome.result()));
	else
		return CreateMixOutcome(outcome.error());
}

void AirecClient::createMixAsync(const CreateMixRequest& request, const CreateMixAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createMix(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AirecClient::CreateMixOutcomeCallable AirecClient::createMixCallable(const CreateMixRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateMixOutcome()>>(
			[this, request]()
			{
			return this->createMix(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AirecClient::CreateRuleOutcome AirecClient::createRule(const CreateRuleRequest &request) const
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

void AirecClient::createRuleAsync(const CreateRuleRequest& request, const CreateRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AirecClient::CreateRuleOutcomeCallable AirecClient::createRuleCallable(const CreateRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateRuleOutcome()>>(
			[this, request]()
			{
			return this->createRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AirecClient::CreateSceneOutcome AirecClient::createScene(const CreateSceneRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateSceneOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateSceneOutcome(CreateSceneResult(outcome.result()));
	else
		return CreateSceneOutcome(outcome.error());
}

void AirecClient::createSceneAsync(const CreateSceneRequest& request, const CreateSceneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createScene(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AirecClient::CreateSceneOutcomeCallable AirecClient::createSceneCallable(const CreateSceneRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateSceneOutcome()>>(
			[this, request]()
			{
			return this->createScene(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AirecClient::DeleteDataSetOutcome AirecClient::deleteDataSet(const DeleteDataSetRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteDataSetOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteDataSetOutcome(DeleteDataSetResult(outcome.result()));
	else
		return DeleteDataSetOutcome(outcome.error());
}

void AirecClient::deleteDataSetAsync(const DeleteDataSetRequest& request, const DeleteDataSetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteDataSet(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AirecClient::DeleteDataSetOutcomeCallable AirecClient::deleteDataSetCallable(const DeleteDataSetRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteDataSetOutcome()>>(
			[this, request]()
			{
			return this->deleteDataSet(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AirecClient::DeleteDiversifyOutcome AirecClient::deleteDiversify(const DeleteDiversifyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteDiversifyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteDiversifyOutcome(DeleteDiversifyResult(outcome.result()));
	else
		return DeleteDiversifyOutcome(outcome.error());
}

void AirecClient::deleteDiversifyAsync(const DeleteDiversifyRequest& request, const DeleteDiversifyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteDiversify(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AirecClient::DeleteDiversifyOutcomeCallable AirecClient::deleteDiversifyCallable(const DeleteDiversifyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteDiversifyOutcome()>>(
			[this, request]()
			{
			return this->deleteDiversify(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AirecClient::DeleteMixOutcome AirecClient::deleteMix(const DeleteMixRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteMixOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteMixOutcome(DeleteMixResult(outcome.result()));
	else
		return DeleteMixOutcome(outcome.error());
}

void AirecClient::deleteMixAsync(const DeleteMixRequest& request, const DeleteMixAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteMix(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AirecClient::DeleteMixOutcomeCallable AirecClient::deleteMixCallable(const DeleteMixRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteMixOutcome()>>(
			[this, request]()
			{
			return this->deleteMix(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AirecClient::DeleteSceneOutcome AirecClient::deleteScene(const DeleteSceneRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteSceneOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteSceneOutcome(DeleteSceneResult(outcome.result()));
	else
		return DeleteSceneOutcome(outcome.error());
}

void AirecClient::deleteSceneAsync(const DeleteSceneRequest& request, const DeleteSceneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteScene(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AirecClient::DeleteSceneOutcomeCallable AirecClient::deleteSceneCallable(const DeleteSceneRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteSceneOutcome()>>(
			[this, request]()
			{
			return this->deleteScene(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AirecClient::DescribeDataSetMessageOutcome AirecClient::describeDataSetMessage(const DescribeDataSetMessageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDataSetMessageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDataSetMessageOutcome(DescribeDataSetMessageResult(outcome.result()));
	else
		return DescribeDataSetMessageOutcome(outcome.error());
}

void AirecClient::describeDataSetMessageAsync(const DescribeDataSetMessageRequest& request, const DescribeDataSetMessageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDataSetMessage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AirecClient::DescribeDataSetMessageOutcomeCallable AirecClient::describeDataSetMessageCallable(const DescribeDataSetMessageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDataSetMessageOutcome()>>(
			[this, request]()
			{
			return this->describeDataSetMessage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AirecClient::DescribeDataSetReportOutcome AirecClient::describeDataSetReport(const DescribeDataSetReportRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDataSetReportOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDataSetReportOutcome(DescribeDataSetReportResult(outcome.result()));
	else
		return DescribeDataSetReportOutcome(outcome.error());
}

void AirecClient::describeDataSetReportAsync(const DescribeDataSetReportRequest& request, const DescribeDataSetReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDataSetReport(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AirecClient::DescribeDataSetReportOutcomeCallable AirecClient::describeDataSetReportCallable(const DescribeDataSetReportRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDataSetReportOutcome()>>(
			[this, request]()
			{
			return this->describeDataSetReport(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AirecClient::DescribeDiversifyOutcome AirecClient::describeDiversify(const DescribeDiversifyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDiversifyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDiversifyOutcome(DescribeDiversifyResult(outcome.result()));
	else
		return DescribeDiversifyOutcome(outcome.error());
}

void AirecClient::describeDiversifyAsync(const DescribeDiversifyRequest& request, const DescribeDiversifyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDiversify(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AirecClient::DescribeDiversifyOutcomeCallable AirecClient::describeDiversifyCallable(const DescribeDiversifyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDiversifyOutcome()>>(
			[this, request]()
			{
			return this->describeDiversify(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AirecClient::DescribeExposureSettingsOutcome AirecClient::describeExposureSettings(const DescribeExposureSettingsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeExposureSettingsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeExposureSettingsOutcome(DescribeExposureSettingsResult(outcome.result()));
	else
		return DescribeExposureSettingsOutcome(outcome.error());
}

void AirecClient::describeExposureSettingsAsync(const DescribeExposureSettingsRequest& request, const DescribeExposureSettingsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeExposureSettings(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AirecClient::DescribeExposureSettingsOutcomeCallable AirecClient::describeExposureSettingsCallable(const DescribeExposureSettingsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeExposureSettingsOutcome()>>(
			[this, request]()
			{
			return this->describeExposureSettings(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AirecClient::DescribeInstanceOutcome AirecClient::describeInstance(const DescribeInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeInstanceOutcome(DescribeInstanceResult(outcome.result()));
	else
		return DescribeInstanceOutcome(outcome.error());
}

void AirecClient::describeInstanceAsync(const DescribeInstanceRequest& request, const DescribeInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AirecClient::DescribeInstanceOutcomeCallable AirecClient::describeInstanceCallable(const DescribeInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeInstanceOutcome()>>(
			[this, request]()
			{
			return this->describeInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AirecClient::DescribeMixOutcome AirecClient::describeMix(const DescribeMixRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeMixOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeMixOutcome(DescribeMixResult(outcome.result()));
	else
		return DescribeMixOutcome(outcome.error());
}

void AirecClient::describeMixAsync(const DescribeMixRequest& request, const DescribeMixAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeMix(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AirecClient::DescribeMixOutcomeCallable AirecClient::describeMixCallable(const DescribeMixRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeMixOutcome()>>(
			[this, request]()
			{
			return this->describeMix(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AirecClient::DescribeQuotaOutcome AirecClient::describeQuota(const DescribeQuotaRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeQuotaOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeQuotaOutcome(DescribeQuotaResult(outcome.result()));
	else
		return DescribeQuotaOutcome(outcome.error());
}

void AirecClient::describeQuotaAsync(const DescribeQuotaRequest& request, const DescribeQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeQuota(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AirecClient::DescribeQuotaOutcomeCallable AirecClient::describeQuotaCallable(const DescribeQuotaRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeQuotaOutcome()>>(
			[this, request]()
			{
			return this->describeQuota(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AirecClient::DescribeRegionsOutcome AirecClient::describeRegions(const DescribeRegionsRequest &request) const
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

void AirecClient::describeRegionsAsync(const DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRegions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AirecClient::DescribeRegionsOutcomeCallable AirecClient::describeRegionsCallable(const DescribeRegionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRegionsOutcome()>>(
			[this, request]()
			{
			return this->describeRegions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AirecClient::DescribeRuleOutcome AirecClient::describeRule(const DescribeRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRuleOutcome(DescribeRuleResult(outcome.result()));
	else
		return DescribeRuleOutcome(outcome.error());
}

void AirecClient::describeRuleAsync(const DescribeRuleRequest& request, const DescribeRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AirecClient::DescribeRuleOutcomeCallable AirecClient::describeRuleCallable(const DescribeRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRuleOutcome()>>(
			[this, request]()
			{
			return this->describeRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AirecClient::DescribeSceneOutcome AirecClient::describeScene(const DescribeSceneRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSceneOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSceneOutcome(DescribeSceneResult(outcome.result()));
	else
		return DescribeSceneOutcome(outcome.error());
}

void AirecClient::describeSceneAsync(const DescribeSceneRequest& request, const DescribeSceneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeScene(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AirecClient::DescribeSceneOutcomeCallable AirecClient::describeSceneCallable(const DescribeSceneRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSceneOutcome()>>(
			[this, request]()
			{
			return this->describeScene(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AirecClient::DescribeSceneThroughputOutcome AirecClient::describeSceneThroughput(const DescribeSceneThroughputRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSceneThroughputOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSceneThroughputOutcome(DescribeSceneThroughputResult(outcome.result()));
	else
		return DescribeSceneThroughputOutcome(outcome.error());
}

void AirecClient::describeSceneThroughputAsync(const DescribeSceneThroughputRequest& request, const DescribeSceneThroughputAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSceneThroughput(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AirecClient::DescribeSceneThroughputOutcomeCallable AirecClient::describeSceneThroughputCallable(const DescribeSceneThroughputRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSceneThroughputOutcome()>>(
			[this, request]()
			{
			return this->describeSceneThroughput(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AirecClient::DescribeSyncReportDetailOutcome AirecClient::describeSyncReportDetail(const DescribeSyncReportDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSyncReportDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSyncReportDetailOutcome(DescribeSyncReportDetailResult(outcome.result()));
	else
		return DescribeSyncReportDetailOutcome(outcome.error());
}

void AirecClient::describeSyncReportDetailAsync(const DescribeSyncReportDetailRequest& request, const DescribeSyncReportDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSyncReportDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AirecClient::DescribeSyncReportDetailOutcomeCallable AirecClient::describeSyncReportDetailCallable(const DescribeSyncReportDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSyncReportDetailOutcome()>>(
			[this, request]()
			{
			return this->describeSyncReportDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AirecClient::DescribeSyncReportOutliersOutcome AirecClient::describeSyncReportOutliers(const DescribeSyncReportOutliersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSyncReportOutliersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSyncReportOutliersOutcome(DescribeSyncReportOutliersResult(outcome.result()));
	else
		return DescribeSyncReportOutliersOutcome(outcome.error());
}

void AirecClient::describeSyncReportOutliersAsync(const DescribeSyncReportOutliersRequest& request, const DescribeSyncReportOutliersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSyncReportOutliers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AirecClient::DescribeSyncReportOutliersOutcomeCallable AirecClient::describeSyncReportOutliersCallable(const DescribeSyncReportOutliersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSyncReportOutliersOutcome()>>(
			[this, request]()
			{
			return this->describeSyncReportOutliers(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AirecClient::DescribeUserMetricsOutcome AirecClient::describeUserMetrics(const DescribeUserMetricsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeUserMetricsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeUserMetricsOutcome(DescribeUserMetricsResult(outcome.result()));
	else
		return DescribeUserMetricsOutcome(outcome.error());
}

void AirecClient::describeUserMetricsAsync(const DescribeUserMetricsRequest& request, const DescribeUserMetricsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeUserMetrics(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AirecClient::DescribeUserMetricsOutcomeCallable AirecClient::describeUserMetricsCallable(const DescribeUserMetricsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeUserMetricsOutcome()>>(
			[this, request]()
			{
			return this->describeUserMetrics(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AirecClient::DowngradeInstanceOutcome AirecClient::downgradeInstance(const DowngradeInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DowngradeInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DowngradeInstanceOutcome(DowngradeInstanceResult(outcome.result()));
	else
		return DowngradeInstanceOutcome(outcome.error());
}

void AirecClient::downgradeInstanceAsync(const DowngradeInstanceRequest& request, const DowngradeInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, downgradeInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AirecClient::DowngradeInstanceOutcomeCallable AirecClient::downgradeInstanceCallable(const DowngradeInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DowngradeInstanceOutcome()>>(
			[this, request]()
			{
			return this->downgradeInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AirecClient::ListDashboardOutcome AirecClient::listDashboard(const ListDashboardRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDashboardOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDashboardOutcome(ListDashboardResult(outcome.result()));
	else
		return ListDashboardOutcome(outcome.error());
}

void AirecClient::listDashboardAsync(const ListDashboardRequest& request, const ListDashboardAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDashboard(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AirecClient::ListDashboardOutcomeCallable AirecClient::listDashboardCallable(const ListDashboardRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDashboardOutcome()>>(
			[this, request]()
			{
			return this->listDashboard(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AirecClient::ListDashboardDetailsOutcome AirecClient::listDashboardDetails(const ListDashboardDetailsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDashboardDetailsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDashboardDetailsOutcome(ListDashboardDetailsResult(outcome.result()));
	else
		return ListDashboardDetailsOutcome(outcome.error());
}

void AirecClient::listDashboardDetailsAsync(const ListDashboardDetailsRequest& request, const ListDashboardDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDashboardDetails(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AirecClient::ListDashboardDetailsOutcomeCallable AirecClient::listDashboardDetailsCallable(const ListDashboardDetailsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDashboardDetailsOutcome()>>(
			[this, request]()
			{
			return this->listDashboardDetails(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AirecClient::ListDashboardDetailsFlowsOutcome AirecClient::listDashboardDetailsFlows(const ListDashboardDetailsFlowsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDashboardDetailsFlowsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDashboardDetailsFlowsOutcome(ListDashboardDetailsFlowsResult(outcome.result()));
	else
		return ListDashboardDetailsFlowsOutcome(outcome.error());
}

void AirecClient::listDashboardDetailsFlowsAsync(const ListDashboardDetailsFlowsRequest& request, const ListDashboardDetailsFlowsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDashboardDetailsFlows(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AirecClient::ListDashboardDetailsFlowsOutcomeCallable AirecClient::listDashboardDetailsFlowsCallable(const ListDashboardDetailsFlowsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDashboardDetailsFlowsOutcome()>>(
			[this, request]()
			{
			return this->listDashboardDetailsFlows(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AirecClient::ListDashboardMetricsOutcome AirecClient::listDashboardMetrics(const ListDashboardMetricsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDashboardMetricsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDashboardMetricsOutcome(ListDashboardMetricsResult(outcome.result()));
	else
		return ListDashboardMetricsOutcome(outcome.error());
}

void AirecClient::listDashboardMetricsAsync(const ListDashboardMetricsRequest& request, const ListDashboardMetricsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDashboardMetrics(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AirecClient::ListDashboardMetricsOutcomeCallable AirecClient::listDashboardMetricsCallable(const ListDashboardMetricsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDashboardMetricsOutcome()>>(
			[this, request]()
			{
			return this->listDashboardMetrics(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AirecClient::ListDashboardMetricsFlowsOutcome AirecClient::listDashboardMetricsFlows(const ListDashboardMetricsFlowsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDashboardMetricsFlowsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDashboardMetricsFlowsOutcome(ListDashboardMetricsFlowsResult(outcome.result()));
	else
		return ListDashboardMetricsFlowsOutcome(outcome.error());
}

void AirecClient::listDashboardMetricsFlowsAsync(const ListDashboardMetricsFlowsRequest& request, const ListDashboardMetricsFlowsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDashboardMetricsFlows(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AirecClient::ListDashboardMetricsFlowsOutcomeCallable AirecClient::listDashboardMetricsFlowsCallable(const ListDashboardMetricsFlowsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDashboardMetricsFlowsOutcome()>>(
			[this, request]()
			{
			return this->listDashboardMetricsFlows(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AirecClient::ListDashboardParametersOutcome AirecClient::listDashboardParameters(const ListDashboardParametersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDashboardParametersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDashboardParametersOutcome(ListDashboardParametersResult(outcome.result()));
	else
		return ListDashboardParametersOutcome(outcome.error());
}

void AirecClient::listDashboardParametersAsync(const ListDashboardParametersRequest& request, const ListDashboardParametersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDashboardParameters(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AirecClient::ListDashboardParametersOutcomeCallable AirecClient::listDashboardParametersCallable(const ListDashboardParametersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDashboardParametersOutcome()>>(
			[this, request]()
			{
			return this->listDashboardParameters(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AirecClient::ListDashboardUidOutcome AirecClient::listDashboardUid(const ListDashboardUidRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDashboardUidOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDashboardUidOutcome(ListDashboardUidResult(outcome.result()));
	else
		return ListDashboardUidOutcome(outcome.error());
}

void AirecClient::listDashboardUidAsync(const ListDashboardUidRequest& request, const ListDashboardUidAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDashboardUid(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AirecClient::ListDashboardUidOutcomeCallable AirecClient::listDashboardUidCallable(const ListDashboardUidRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDashboardUidOutcome()>>(
			[this, request]()
			{
			return this->listDashboardUid(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AirecClient::ListDataSetOutcome AirecClient::listDataSet(const ListDataSetRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDataSetOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDataSetOutcome(ListDataSetResult(outcome.result()));
	else
		return ListDataSetOutcome(outcome.error());
}

void AirecClient::listDataSetAsync(const ListDataSetRequest& request, const ListDataSetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDataSet(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AirecClient::ListDataSetOutcomeCallable AirecClient::listDataSetCallable(const ListDataSetRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDataSetOutcome()>>(
			[this, request]()
			{
			return this->listDataSet(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AirecClient::ListDataSourceOutcome AirecClient::listDataSource(const ListDataSourceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDataSourceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDataSourceOutcome(ListDataSourceResult(outcome.result()));
	else
		return ListDataSourceOutcome(outcome.error());
}

void AirecClient::listDataSourceAsync(const ListDataSourceRequest& request, const ListDataSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDataSource(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AirecClient::ListDataSourceOutcomeCallable AirecClient::listDataSourceCallable(const ListDataSourceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDataSourceOutcome()>>(
			[this, request]()
			{
			return this->listDataSource(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AirecClient::ListDiversifyOutcome AirecClient::listDiversify(const ListDiversifyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDiversifyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDiversifyOutcome(ListDiversifyResult(outcome.result()));
	else
		return ListDiversifyOutcome(outcome.error());
}

void AirecClient::listDiversifyAsync(const ListDiversifyRequest& request, const ListDiversifyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDiversify(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AirecClient::ListDiversifyOutcomeCallable AirecClient::listDiversifyCallable(const ListDiversifyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDiversifyOutcome()>>(
			[this, request]()
			{
			return this->listDiversify(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AirecClient::ListInstanceOutcome AirecClient::listInstance(const ListInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListInstanceOutcome(ListInstanceResult(outcome.result()));
	else
		return ListInstanceOutcome(outcome.error());
}

void AirecClient::listInstanceAsync(const ListInstanceRequest& request, const ListInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AirecClient::ListInstanceOutcomeCallable AirecClient::listInstanceCallable(const ListInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListInstanceOutcome()>>(
			[this, request]()
			{
			return this->listInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AirecClient::ListInstanceTaskOutcome AirecClient::listInstanceTask(const ListInstanceTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListInstanceTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListInstanceTaskOutcome(ListInstanceTaskResult(outcome.result()));
	else
		return ListInstanceTaskOutcome(outcome.error());
}

void AirecClient::listInstanceTaskAsync(const ListInstanceTaskRequest& request, const ListInstanceTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listInstanceTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AirecClient::ListInstanceTaskOutcomeCallable AirecClient::listInstanceTaskCallable(const ListInstanceTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListInstanceTaskOutcome()>>(
			[this, request]()
			{
			return this->listInstanceTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AirecClient::ListMixOutcome AirecClient::listMix(const ListMixRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListMixOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListMixOutcome(ListMixResult(outcome.result()));
	else
		return ListMixOutcome(outcome.error());
}

void AirecClient::listMixAsync(const ListMixRequest& request, const ListMixAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listMix(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AirecClient::ListMixOutcomeCallable AirecClient::listMixCallable(const ListMixRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListMixOutcome()>>(
			[this, request]()
			{
			return this->listMix(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AirecClient::ListRuleConditionsOutcome AirecClient::listRuleConditions(const ListRuleConditionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListRuleConditionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListRuleConditionsOutcome(ListRuleConditionsResult(outcome.result()));
	else
		return ListRuleConditionsOutcome(outcome.error());
}

void AirecClient::listRuleConditionsAsync(const ListRuleConditionsRequest& request, const ListRuleConditionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listRuleConditions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AirecClient::ListRuleConditionsOutcomeCallable AirecClient::listRuleConditionsCallable(const ListRuleConditionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListRuleConditionsOutcome()>>(
			[this, request]()
			{
			return this->listRuleConditions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AirecClient::ListRuleTasksOutcome AirecClient::listRuleTasks(const ListRuleTasksRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListRuleTasksOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListRuleTasksOutcome(ListRuleTasksResult(outcome.result()));
	else
		return ListRuleTasksOutcome(outcome.error());
}

void AirecClient::listRuleTasksAsync(const ListRuleTasksRequest& request, const ListRuleTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listRuleTasks(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AirecClient::ListRuleTasksOutcomeCallable AirecClient::listRuleTasksCallable(const ListRuleTasksRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListRuleTasksOutcome()>>(
			[this, request]()
			{
			return this->listRuleTasks(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AirecClient::ListRulesOutcome AirecClient::listRules(const ListRulesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListRulesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListRulesOutcome(ListRulesResult(outcome.result()));
	else
		return ListRulesOutcome(outcome.error());
}

void AirecClient::listRulesAsync(const ListRulesRequest& request, const ListRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listRules(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AirecClient::ListRulesOutcomeCallable AirecClient::listRulesCallable(const ListRulesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListRulesOutcome()>>(
			[this, request]()
			{
			return this->listRules(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AirecClient::ListSceneItemsOutcome AirecClient::listSceneItems(const ListSceneItemsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListSceneItemsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListSceneItemsOutcome(ListSceneItemsResult(outcome.result()));
	else
		return ListSceneItemsOutcome(outcome.error());
}

void AirecClient::listSceneItemsAsync(const ListSceneItemsRequest& request, const ListSceneItemsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listSceneItems(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AirecClient::ListSceneItemsOutcomeCallable AirecClient::listSceneItemsCallable(const ListSceneItemsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListSceneItemsOutcome()>>(
			[this, request]()
			{
			return this->listSceneItems(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AirecClient::ListScenesOutcome AirecClient::listScenes(const ListScenesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListScenesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListScenesOutcome(ListScenesResult(outcome.result()));
	else
		return ListScenesOutcome(outcome.error());
}

void AirecClient::listScenesAsync(const ListScenesRequest& request, const ListScenesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listScenes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AirecClient::ListScenesOutcomeCallable AirecClient::listScenesCallable(const ListScenesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListScenesOutcome()>>(
			[this, request]()
			{
			return this->listScenes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AirecClient::ListUmengAppkeysOutcome AirecClient::listUmengAppkeys(const ListUmengAppkeysRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListUmengAppkeysOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListUmengAppkeysOutcome(ListUmengAppkeysResult(outcome.result()));
	else
		return ListUmengAppkeysOutcome(outcome.error());
}

void AirecClient::listUmengAppkeysAsync(const ListUmengAppkeysRequest& request, const ListUmengAppkeysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listUmengAppkeys(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AirecClient::ListUmengAppkeysOutcomeCallable AirecClient::listUmengAppkeysCallable(const ListUmengAppkeysRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListUmengAppkeysOutcome()>>(
			[this, request]()
			{
			return this->listUmengAppkeys(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AirecClient::ModifyDataSourceOutcome AirecClient::modifyDataSource(const ModifyDataSourceRequest &request) const
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

void AirecClient::modifyDataSourceAsync(const ModifyDataSourceRequest& request, const ModifyDataSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDataSource(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AirecClient::ModifyDataSourceOutcomeCallable AirecClient::modifyDataSourceCallable(const ModifyDataSourceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDataSourceOutcome()>>(
			[this, request]()
			{
			return this->modifyDataSource(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AirecClient::ModifyDiversifyOutcome AirecClient::modifyDiversify(const ModifyDiversifyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDiversifyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDiversifyOutcome(ModifyDiversifyResult(outcome.result()));
	else
		return ModifyDiversifyOutcome(outcome.error());
}

void AirecClient::modifyDiversifyAsync(const ModifyDiversifyRequest& request, const ModifyDiversifyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDiversify(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AirecClient::ModifyDiversifyOutcomeCallable AirecClient::modifyDiversifyCallable(const ModifyDiversifyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDiversifyOutcome()>>(
			[this, request]()
			{
			return this->modifyDiversify(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AirecClient::ModifyExposureSettingsOutcome AirecClient::modifyExposureSettings(const ModifyExposureSettingsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyExposureSettingsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyExposureSettingsOutcome(ModifyExposureSettingsResult(outcome.result()));
	else
		return ModifyExposureSettingsOutcome(outcome.error());
}

void AirecClient::modifyExposureSettingsAsync(const ModifyExposureSettingsRequest& request, const ModifyExposureSettingsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyExposureSettings(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AirecClient::ModifyExposureSettingsOutcomeCallable AirecClient::modifyExposureSettingsCallable(const ModifyExposureSettingsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyExposureSettingsOutcome()>>(
			[this, request]()
			{
			return this->modifyExposureSettings(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AirecClient::ModifyInstanceOutcome AirecClient::modifyInstance(const ModifyInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyInstanceOutcome(ModifyInstanceResult(outcome.result()));
	else
		return ModifyInstanceOutcome(outcome.error());
}

void AirecClient::modifyInstanceAsync(const ModifyInstanceRequest& request, const ModifyInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AirecClient::ModifyInstanceOutcomeCallable AirecClient::modifyInstanceCallable(const ModifyInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyInstanceOutcome()>>(
			[this, request]()
			{
			return this->modifyInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AirecClient::ModifyMixOutcome AirecClient::modifyMix(const ModifyMixRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyMixOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyMixOutcome(ModifyMixResult(outcome.result()));
	else
		return ModifyMixOutcome(outcome.error());
}

void AirecClient::modifyMixAsync(const ModifyMixRequest& request, const ModifyMixAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyMix(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AirecClient::ModifyMixOutcomeCallable AirecClient::modifyMixCallable(const ModifyMixRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyMixOutcome()>>(
			[this, request]()
			{
			return this->modifyMix(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AirecClient::ModifyRuleOutcome AirecClient::modifyRule(const ModifyRuleRequest &request) const
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

void AirecClient::modifyRuleAsync(const ModifyRuleRequest& request, const ModifyRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AirecClient::ModifyRuleOutcomeCallable AirecClient::modifyRuleCallable(const ModifyRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyRuleOutcome()>>(
			[this, request]()
			{
			return this->modifyRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AirecClient::ModifySceneOutcome AirecClient::modifyScene(const ModifySceneRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifySceneOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifySceneOutcome(ModifySceneResult(outcome.result()));
	else
		return ModifySceneOutcome(outcome.error());
}

void AirecClient::modifySceneAsync(const ModifySceneRequest& request, const ModifySceneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyScene(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AirecClient::ModifySceneOutcomeCallable AirecClient::modifySceneCallable(const ModifySceneRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifySceneOutcome()>>(
			[this, request]()
			{
			return this->modifyScene(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AirecClient::PublishRuleOutcome AirecClient::publishRule(const PublishRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PublishRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PublishRuleOutcome(PublishRuleResult(outcome.result()));
	else
		return PublishRuleOutcome(outcome.error());
}

void AirecClient::publishRuleAsync(const PublishRuleRequest& request, const PublishRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, publishRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AirecClient::PublishRuleOutcomeCallable AirecClient::publishRuleCallable(const PublishRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PublishRuleOutcome()>>(
			[this, request]()
			{
			return this->publishRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AirecClient::PushDocumentOutcome AirecClient::pushDocument(const PushDocumentRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PushDocumentOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PushDocumentOutcome(PushDocumentResult(outcome.result()));
	else
		return PushDocumentOutcome(outcome.error());
}

void AirecClient::pushDocumentAsync(const PushDocumentRequest& request, const PushDocumentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, pushDocument(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AirecClient::PushDocumentOutcomeCallable AirecClient::pushDocumentCallable(const PushDocumentRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PushDocumentOutcome()>>(
			[this, request]()
			{
			return this->pushDocument(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AirecClient::PushInterventionOutcome AirecClient::pushIntervention(const PushInterventionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PushInterventionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PushInterventionOutcome(PushInterventionResult(outcome.result()));
	else
		return PushInterventionOutcome(outcome.error());
}

void AirecClient::pushInterventionAsync(const PushInterventionRequest& request, const PushInterventionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, pushIntervention(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AirecClient::PushInterventionOutcomeCallable AirecClient::pushInterventionCallable(const PushInterventionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PushInterventionOutcome()>>(
			[this, request]()
			{
			return this->pushIntervention(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AirecClient::QueryDataMessageOutcome AirecClient::queryDataMessage(const QueryDataMessageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryDataMessageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryDataMessageOutcome(QueryDataMessageResult(outcome.result()));
	else
		return QueryDataMessageOutcome(outcome.error());
}

void AirecClient::queryDataMessageAsync(const QueryDataMessageRequest& request, const QueryDataMessageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryDataMessage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AirecClient::QueryDataMessageOutcomeCallable AirecClient::queryDataMessageCallable(const QueryDataMessageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryDataMessageOutcome()>>(
			[this, request]()
			{
			return this->queryDataMessage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AirecClient::QueryExceptionHistoryOutcome AirecClient::queryExceptionHistory(const QueryExceptionHistoryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryExceptionHistoryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryExceptionHistoryOutcome(QueryExceptionHistoryResult(outcome.result()));
	else
		return QueryExceptionHistoryOutcome(outcome.error());
}

void AirecClient::queryExceptionHistoryAsync(const QueryExceptionHistoryRequest& request, const QueryExceptionHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryExceptionHistory(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AirecClient::QueryExceptionHistoryOutcomeCallable AirecClient::queryExceptionHistoryCallable(const QueryExceptionHistoryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryExceptionHistoryOutcome()>>(
			[this, request]()
			{
			return this->queryExceptionHistory(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AirecClient::QueryRawDataOutcome AirecClient::queryRawData(const QueryRawDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryRawDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryRawDataOutcome(QueryRawDataResult(outcome.result()));
	else
		return QueryRawDataOutcome(outcome.error());
}

void AirecClient::queryRawDataAsync(const QueryRawDataRequest& request, const QueryRawDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryRawData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AirecClient::QueryRawDataOutcomeCallable AirecClient::queryRawDataCallable(const QueryRawDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryRawDataOutcome()>>(
			[this, request]()
			{
			return this->queryRawData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AirecClient::QuerySingleAggregationReportOutcome AirecClient::querySingleAggregationReport(const QuerySingleAggregationReportRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QuerySingleAggregationReportOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QuerySingleAggregationReportOutcome(QuerySingleAggregationReportResult(outcome.result()));
	else
		return QuerySingleAggregationReportOutcome(outcome.error());
}

void AirecClient::querySingleAggregationReportAsync(const QuerySingleAggregationReportRequest& request, const QuerySingleAggregationReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, querySingleAggregationReport(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AirecClient::QuerySingleAggregationReportOutcomeCallable AirecClient::querySingleAggregationReportCallable(const QuerySingleAggregationReportRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QuerySingleAggregationReportOutcome()>>(
			[this, request]()
			{
			return this->querySingleAggregationReport(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AirecClient::QuerySingleReportOutcome AirecClient::querySingleReport(const QuerySingleReportRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QuerySingleReportOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QuerySingleReportOutcome(QuerySingleReportResult(outcome.result()));
	else
		return QuerySingleReportOutcome(outcome.error());
}

void AirecClient::querySingleReportAsync(const QuerySingleReportRequest& request, const QuerySingleReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, querySingleReport(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AirecClient::QuerySingleReportOutcomeCallable AirecClient::querySingleReportCallable(const QuerySingleReportRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QuerySingleReportOutcome()>>(
			[this, request]()
			{
			return this->querySingleReport(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AirecClient::QuerySyncReportAggregationOutcome AirecClient::querySyncReportAggregation(const QuerySyncReportAggregationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QuerySyncReportAggregationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QuerySyncReportAggregationOutcome(QuerySyncReportAggregationResult(outcome.result()));
	else
		return QuerySyncReportAggregationOutcome(outcome.error());
}

void AirecClient::querySyncReportAggregationAsync(const QuerySyncReportAggregationRequest& request, const QuerySyncReportAggregationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, querySyncReportAggregation(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AirecClient::QuerySyncReportAggregationOutcomeCallable AirecClient::querySyncReportAggregationCallable(const QuerySyncReportAggregationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QuerySyncReportAggregationOutcome()>>(
			[this, request]()
			{
			return this->querySyncReportAggregation(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AirecClient::RecommendOutcome AirecClient::recommend(const RecommendRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RecommendOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RecommendOutcome(RecommendResult(outcome.result()));
	else
		return RecommendOutcome(outcome.error());
}

void AirecClient::recommendAsync(const RecommendRequest& request, const RecommendAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, recommend(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AirecClient::RecommendOutcomeCallable AirecClient::recommendCallable(const RecommendRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RecommendOutcome()>>(
			[this, request]()
			{
			return this->recommend(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AirecClient::RunInstanceOutcome AirecClient::runInstance(const RunInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RunInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RunInstanceOutcome(RunInstanceResult(outcome.result()));
	else
		return RunInstanceOutcome(outcome.error());
}

void AirecClient::runInstanceAsync(const RunInstanceRequest& request, const RunInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, runInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AirecClient::RunInstanceOutcomeCallable AirecClient::runInstanceCallable(const RunInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RunInstanceOutcome()>>(
			[this, request]()
			{
			return this->runInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AirecClient::StopDataSetOutcome AirecClient::stopDataSet(const StopDataSetRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StopDataSetOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StopDataSetOutcome(StopDataSetResult(outcome.result()));
	else
		return StopDataSetOutcome(outcome.error());
}

void AirecClient::stopDataSetAsync(const StopDataSetRequest& request, const StopDataSetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, stopDataSet(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AirecClient::StopDataSetOutcomeCallable AirecClient::stopDataSetCallable(const StopDataSetRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StopDataSetOutcome()>>(
			[this, request]()
			{
			return this->stopDataSet(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AirecClient::UpgradeInstanceOutcome AirecClient::upgradeInstance(const UpgradeInstanceRequest &request) const
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

void AirecClient::upgradeInstanceAsync(const UpgradeInstanceRequest& request, const UpgradeInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, upgradeInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AirecClient::UpgradeInstanceOutcomeCallable AirecClient::upgradeInstanceCallable(const UpgradeInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpgradeInstanceOutcome()>>(
			[this, request]()
			{
			return this->upgradeInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AirecClient::ValidateInstanceOutcome AirecClient::validateInstance(const ValidateInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ValidateInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ValidateInstanceOutcome(ValidateInstanceResult(outcome.result()));
	else
		return ValidateInstanceOutcome(outcome.error());
}

void AirecClient::validateInstanceAsync(const ValidateInstanceRequest& request, const ValidateInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, validateInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AirecClient::ValidateInstanceOutcomeCallable AirecClient::validateInstanceCallable(const ValidateInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ValidateInstanceOutcome()>>(
			[this, request]()
			{
			return this->validateInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

