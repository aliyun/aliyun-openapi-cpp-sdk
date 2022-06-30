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

#include <alibabacloud/apds/ApdsClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Apds;
using namespace AlibabaCloud::Apds::Model;

namespace
{
	const std::string SERVICE_NAME = "apds";
}

ApdsClient::ApdsClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RoaServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

ApdsClient::ApdsClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RoaServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

ApdsClient::ApdsClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RoaServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

ApdsClient::~ApdsClient()
{}

ApdsClient::CreateFileJobOutcome ApdsClient::createFileJob(const CreateFileJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateFileJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateFileJobOutcome(CreateFileJobResult(outcome.result()));
	else
		return CreateFileJobOutcome(outcome.error());
}

void ApdsClient::createFileJobAsync(const CreateFileJobRequest& request, const CreateFileJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createFileJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ApdsClient::CreateFileJobOutcomeCallable ApdsClient::createFileJobCallable(const CreateFileJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateFileJobOutcome()>>(
			[this, request]()
			{
			return this->createFileJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ApdsClient::CreateMigrationGroupOutcome ApdsClient::createMigrationGroup(const CreateMigrationGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateMigrationGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateMigrationGroupOutcome(CreateMigrationGroupResult(outcome.result()));
	else
		return CreateMigrationGroupOutcome(outcome.error());
}

void ApdsClient::createMigrationGroupAsync(const CreateMigrationGroupRequest& request, const CreateMigrationGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createMigrationGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ApdsClient::CreateMigrationGroupOutcomeCallable ApdsClient::createMigrationGroupCallable(const CreateMigrationGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateMigrationGroupOutcome()>>(
			[this, request]()
			{
			return this->createMigrationGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ApdsClient::CreateMigrationJobOutcome ApdsClient::createMigrationJob(const CreateMigrationJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateMigrationJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateMigrationJobOutcome(CreateMigrationJobResult(outcome.result()));
	else
		return CreateMigrationJobOutcome(outcome.error());
}

void ApdsClient::createMigrationJobAsync(const CreateMigrationJobRequest& request, const CreateMigrationJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createMigrationJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ApdsClient::CreateMigrationJobOutcomeCallable ApdsClient::createMigrationJobCallable(const CreateMigrationJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateMigrationJobOutcome()>>(
			[this, request]()
			{
			return this->createMigrationJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ApdsClient::CreateSurveyJobOutcome ApdsClient::createSurveyJob(const CreateSurveyJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateSurveyJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateSurveyJobOutcome(CreateSurveyJobResult(outcome.result()));
	else
		return CreateSurveyJobOutcome(outcome.error());
}

void ApdsClient::createSurveyJobAsync(const CreateSurveyJobRequest& request, const CreateSurveyJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createSurveyJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ApdsClient::CreateSurveyJobOutcomeCallable ApdsClient::createSurveyJobCallable(const CreateSurveyJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateSurveyJobOutcome()>>(
			[this, request]()
			{
			return this->createSurveyJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ApdsClient::CreateSurveyJobOfflineOutcome ApdsClient::createSurveyJobOffline(const CreateSurveyJobOfflineRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateSurveyJobOfflineOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateSurveyJobOfflineOutcome(CreateSurveyJobOfflineResult(outcome.result()));
	else
		return CreateSurveyJobOfflineOutcome(outcome.error());
}

void ApdsClient::createSurveyJobOfflineAsync(const CreateSurveyJobOfflineRequest& request, const CreateSurveyJobOfflineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createSurveyJobOffline(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ApdsClient::CreateSurveyJobOfflineOutcomeCallable ApdsClient::createSurveyJobOfflineCallable(const CreateSurveyJobOfflineRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateSurveyJobOfflineOutcome()>>(
			[this, request]()
			{
			return this->createSurveyJobOffline(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ApdsClient::DeleteMigrationGroupOutcome ApdsClient::deleteMigrationGroup(const DeleteMigrationGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteMigrationGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteMigrationGroupOutcome(DeleteMigrationGroupResult(outcome.result()));
	else
		return DeleteMigrationGroupOutcome(outcome.error());
}

void ApdsClient::deleteMigrationGroupAsync(const DeleteMigrationGroupRequest& request, const DeleteMigrationGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteMigrationGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ApdsClient::DeleteMigrationGroupOutcomeCallable ApdsClient::deleteMigrationGroupCallable(const DeleteMigrationGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteMigrationGroupOutcome()>>(
			[this, request]()
			{
			return this->deleteMigrationGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ApdsClient::DeleteMigrationJobOutcome ApdsClient::deleteMigrationJob(const DeleteMigrationJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteMigrationJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteMigrationJobOutcome(DeleteMigrationJobResult(outcome.result()));
	else
		return DeleteMigrationJobOutcome(outcome.error());
}

void ApdsClient::deleteMigrationJobAsync(const DeleteMigrationJobRequest& request, const DeleteMigrationJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteMigrationJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ApdsClient::DeleteMigrationJobOutcomeCallable ApdsClient::deleteMigrationJobCallable(const DeleteMigrationJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteMigrationJobOutcome()>>(
			[this, request]()
			{
			return this->deleteMigrationJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ApdsClient::DeleteOssFileOutcome ApdsClient::deleteOssFile(const DeleteOssFileRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteOssFileOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteOssFileOutcome(DeleteOssFileResult(outcome.result()));
	else
		return DeleteOssFileOutcome(outcome.error());
}

void ApdsClient::deleteOssFileAsync(const DeleteOssFileRequest& request, const DeleteOssFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteOssFile(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ApdsClient::DeleteOssFileOutcomeCallable ApdsClient::deleteOssFileCallable(const DeleteOssFileRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteOssFileOutcome()>>(
			[this, request]()
			{
			return this->deleteOssFile(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ApdsClient::DeleteSurveyJobOutcome ApdsClient::deleteSurveyJob(const DeleteSurveyJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteSurveyJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteSurveyJobOutcome(DeleteSurveyJobResult(outcome.result()));
	else
		return DeleteSurveyJobOutcome(outcome.error());
}

void ApdsClient::deleteSurveyJobAsync(const DeleteSurveyJobRequest& request, const DeleteSurveyJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteSurveyJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ApdsClient::DeleteSurveyJobOutcomeCallable ApdsClient::deleteSurveyJobCallable(const DeleteSurveyJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteSurveyJobOutcome()>>(
			[this, request]()
			{
			return this->deleteSurveyJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ApdsClient::DeleteSurveyResourcesOutcome ApdsClient::deleteSurveyResources(const DeleteSurveyResourcesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteSurveyResourcesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteSurveyResourcesOutcome(DeleteSurveyResourcesResult(outcome.result()));
	else
		return DeleteSurveyResourcesOutcome(outcome.error());
}

void ApdsClient::deleteSurveyResourcesAsync(const DeleteSurveyResourcesRequest& request, const DeleteSurveyResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteSurveyResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ApdsClient::DeleteSurveyResourcesOutcomeCallable ApdsClient::deleteSurveyResourcesCallable(const DeleteSurveyResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteSurveyResourcesOutcome()>>(
			[this, request]()
			{
			return this->deleteSurveyResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ApdsClient::DescribeMigrationJobConfigOutcome ApdsClient::describeMigrationJobConfig(const DescribeMigrationJobConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeMigrationJobConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeMigrationJobConfigOutcome(DescribeMigrationJobConfigResult(outcome.result()));
	else
		return DescribeMigrationJobConfigOutcome(outcome.error());
}

void ApdsClient::describeMigrationJobConfigAsync(const DescribeMigrationJobConfigRequest& request, const DescribeMigrationJobConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeMigrationJobConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ApdsClient::DescribeMigrationJobConfigOutcomeCallable ApdsClient::describeMigrationJobConfigCallable(const DescribeMigrationJobConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeMigrationJobConfigOutcome()>>(
			[this, request]()
			{
			return this->describeMigrationJobConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ApdsClient::DescribeMigrationJobCountOutcome ApdsClient::describeMigrationJobCount(const DescribeMigrationJobCountRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeMigrationJobCountOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeMigrationJobCountOutcome(DescribeMigrationJobCountResult(outcome.result()));
	else
		return DescribeMigrationJobCountOutcome(outcome.error());
}

void ApdsClient::describeMigrationJobCountAsync(const DescribeMigrationJobCountRequest& request, const DescribeMigrationJobCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeMigrationJobCount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ApdsClient::DescribeMigrationJobCountOutcomeCallable ApdsClient::describeMigrationJobCountCallable(const DescribeMigrationJobCountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeMigrationJobCountOutcome()>>(
			[this, request]()
			{
			return this->describeMigrationJobCount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ApdsClient::DescribeOssStsOutcome ApdsClient::describeOssSts(const DescribeOssStsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeOssStsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeOssStsOutcome(DescribeOssStsResult(outcome.result()));
	else
		return DescribeOssStsOutcome(outcome.error());
}

void ApdsClient::describeOssStsAsync(const DescribeOssStsRequest& request, const DescribeOssStsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeOssSts(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ApdsClient::DescribeOssStsOutcomeCallable ApdsClient::describeOssStsCallable(const DescribeOssStsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeOssStsOutcome()>>(
			[this, request]()
			{
			return this->describeOssSts(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ApdsClient::DescribeSummaryByStatusOutcome ApdsClient::describeSummaryByStatus(const DescribeSummaryByStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSummaryByStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSummaryByStatusOutcome(DescribeSummaryByStatusResult(outcome.result()));
	else
		return DescribeSummaryByStatusOutcome(outcome.error());
}

void ApdsClient::describeSummaryByStatusAsync(const DescribeSummaryByStatusRequest& request, const DescribeSummaryByStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSummaryByStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ApdsClient::DescribeSummaryByStatusOutcomeCallable ApdsClient::describeSummaryByStatusCallable(const DescribeSummaryByStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSummaryByStatusOutcome()>>(
			[this, request]()
			{
			return this->describeSummaryByStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ApdsClient::DescribeSummaryByStatusAndGroupOutcome ApdsClient::describeSummaryByStatusAndGroup(const DescribeSummaryByStatusAndGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSummaryByStatusAndGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSummaryByStatusAndGroupOutcome(DescribeSummaryByStatusAndGroupResult(outcome.result()));
	else
		return DescribeSummaryByStatusAndGroupOutcome(outcome.error());
}

void ApdsClient::describeSummaryByStatusAndGroupAsync(const DescribeSummaryByStatusAndGroupRequest& request, const DescribeSummaryByStatusAndGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSummaryByStatusAndGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ApdsClient::DescribeSummaryByStatusAndGroupOutcomeCallable ApdsClient::describeSummaryByStatusAndGroupCallable(const DescribeSummaryByStatusAndGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSummaryByStatusAndGroupOutcome()>>(
			[this, request]()
			{
			return this->describeSummaryByStatusAndGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ApdsClient::DescribeSurveyJobOutcome ApdsClient::describeSurveyJob(const DescribeSurveyJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSurveyJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSurveyJobOutcome(DescribeSurveyJobResult(outcome.result()));
	else
		return DescribeSurveyJobOutcome(outcome.error());
}

void ApdsClient::describeSurveyJobAsync(const DescribeSurveyJobRequest& request, const DescribeSurveyJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSurveyJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ApdsClient::DescribeSurveyJobOutcomeCallable ApdsClient::describeSurveyJobCallable(const DescribeSurveyJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSurveyJobOutcome()>>(
			[this, request]()
			{
			return this->describeSurveyJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ApdsClient::DescribeSurveyJobCountOutcome ApdsClient::describeSurveyJobCount(const DescribeSurveyJobCountRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSurveyJobCountOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSurveyJobCountOutcome(DescribeSurveyJobCountResult(outcome.result()));
	else
		return DescribeSurveyJobCountOutcome(outcome.error());
}

void ApdsClient::describeSurveyJobCountAsync(const DescribeSurveyJobCountRequest& request, const DescribeSurveyJobCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSurveyJobCount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ApdsClient::DescribeSurveyJobCountOutcomeCallable ApdsClient::describeSurveyJobCountCallable(const DescribeSurveyJobCountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSurveyJobCountOutcome()>>(
			[this, request]()
			{
			return this->describeSurveyJobCount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ApdsClient::DescribeSurveyResourceTagOutcome ApdsClient::describeSurveyResourceTag(const DescribeSurveyResourceTagRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSurveyResourceTagOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSurveyResourceTagOutcome(DescribeSurveyResourceTagResult(outcome.result()));
	else
		return DescribeSurveyResourceTagOutcome(outcome.error());
}

void ApdsClient::describeSurveyResourceTagAsync(const DescribeSurveyResourceTagRequest& request, const DescribeSurveyResourceTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSurveyResourceTag(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ApdsClient::DescribeSurveyResourceTagOutcomeCallable ApdsClient::describeSurveyResourceTagCallable(const DescribeSurveyResourceTagRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSurveyResourceTagOutcome()>>(
			[this, request]()
			{
			return this->describeSurveyResourceTag(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ApdsClient::DescribeSurveyTemplateOutcome ApdsClient::describeSurveyTemplate(const DescribeSurveyTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSurveyTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSurveyTemplateOutcome(DescribeSurveyTemplateResult(outcome.result()));
	else
		return DescribeSurveyTemplateOutcome(outcome.error());
}

void ApdsClient::describeSurveyTemplateAsync(const DescribeSurveyTemplateRequest& request, const DescribeSurveyTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSurveyTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ApdsClient::DescribeSurveyTemplateOutcomeCallable ApdsClient::describeSurveyTemplateCallable(const DescribeSurveyTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSurveyTemplateOutcome()>>(
			[this, request]()
			{
			return this->describeSurveyTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ApdsClient::ListMigrationJobsOutcome ApdsClient::listMigrationJobs(const ListMigrationJobsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListMigrationJobsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListMigrationJobsOutcome(ListMigrationJobsResult(outcome.result()));
	else
		return ListMigrationJobsOutcome(outcome.error());
}

void ApdsClient::listMigrationJobsAsync(const ListMigrationJobsRequest& request, const ListMigrationJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listMigrationJobs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ApdsClient::ListMigrationJobsOutcomeCallable ApdsClient::listMigrationJobsCallable(const ListMigrationJobsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListMigrationJobsOutcome()>>(
			[this, request]()
			{
			return this->listMigrationJobs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ApdsClient::ListRegionsOutcome ApdsClient::listRegions(const ListRegionsRequest &request) const
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

void ApdsClient::listRegionsAsync(const ListRegionsRequest& request, const ListRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listRegions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ApdsClient::ListRegionsOutcomeCallable ApdsClient::listRegionsCallable(const ListRegionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListRegionsOutcome()>>(
			[this, request]()
			{
			return this->listRegions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ApdsClient::ListSurveyJobDownLoadJobsOutcome ApdsClient::listSurveyJobDownLoadJobs(const ListSurveyJobDownLoadJobsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListSurveyJobDownLoadJobsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListSurveyJobDownLoadJobsOutcome(ListSurveyJobDownLoadJobsResult(outcome.result()));
	else
		return ListSurveyJobDownLoadJobsOutcome(outcome.error());
}

void ApdsClient::listSurveyJobDownLoadJobsAsync(const ListSurveyJobDownLoadJobsRequest& request, const ListSurveyJobDownLoadJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listSurveyJobDownLoadJobs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ApdsClient::ListSurveyJobDownLoadJobsOutcomeCallable ApdsClient::listSurveyJobDownLoadJobsCallable(const ListSurveyJobDownLoadJobsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListSurveyJobDownLoadJobsOutcome()>>(
			[this, request]()
			{
			return this->listSurveyJobDownLoadJobs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ApdsClient::ListSurveyJobsOutcome ApdsClient::listSurveyJobs(const ListSurveyJobsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListSurveyJobsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListSurveyJobsOutcome(ListSurveyJobsResult(outcome.result()));
	else
		return ListSurveyJobsOutcome(outcome.error());
}

void ApdsClient::listSurveyJobsAsync(const ListSurveyJobsRequest& request, const ListSurveyJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listSurveyJobs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ApdsClient::ListSurveyJobsOutcomeCallable ApdsClient::listSurveyJobsCallable(const ListSurveyJobsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListSurveyJobsOutcome()>>(
			[this, request]()
			{
			return this->listSurveyJobs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ApdsClient::ListSurveyResourceByMigrationGroupsOutcome ApdsClient::listSurveyResourceByMigrationGroups(const ListSurveyResourceByMigrationGroupsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListSurveyResourceByMigrationGroupsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListSurveyResourceByMigrationGroupsOutcome(ListSurveyResourceByMigrationGroupsResult(outcome.result()));
	else
		return ListSurveyResourceByMigrationGroupsOutcome(outcome.error());
}

void ApdsClient::listSurveyResourceByMigrationGroupsAsync(const ListSurveyResourceByMigrationGroupsRequest& request, const ListSurveyResourceByMigrationGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listSurveyResourceByMigrationGroups(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ApdsClient::ListSurveyResourceByMigrationGroupsOutcomeCallable ApdsClient::listSurveyResourceByMigrationGroupsCallable(const ListSurveyResourceByMigrationGroupsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListSurveyResourceByMigrationGroupsOutcome()>>(
			[this, request]()
			{
			return this->listSurveyResourceByMigrationGroups(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ApdsClient::ListSurveyResourceConnectionsOutcome ApdsClient::listSurveyResourceConnections(const ListSurveyResourceConnectionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListSurveyResourceConnectionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListSurveyResourceConnectionsOutcome(ListSurveyResourceConnectionsResult(outcome.result()));
	else
		return ListSurveyResourceConnectionsOutcome(outcome.error());
}

void ApdsClient::listSurveyResourceConnectionsAsync(const ListSurveyResourceConnectionsRequest& request, const ListSurveyResourceConnectionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listSurveyResourceConnections(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ApdsClient::ListSurveyResourceConnectionsOutcomeCallable ApdsClient::listSurveyResourceConnectionsCallable(const ListSurveyResourceConnectionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListSurveyResourceConnectionsOutcome()>>(
			[this, request]()
			{
			return this->listSurveyResourceConnections(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ApdsClient::ListSurveyResourceTypesOutcome ApdsClient::listSurveyResourceTypes(const ListSurveyResourceTypesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListSurveyResourceTypesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListSurveyResourceTypesOutcome(ListSurveyResourceTypesResult(outcome.result()));
	else
		return ListSurveyResourceTypesOutcome(outcome.error());
}

void ApdsClient::listSurveyResourceTypesAsync(const ListSurveyResourceTypesRequest& request, const ListSurveyResourceTypesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listSurveyResourceTypes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ApdsClient::ListSurveyResourceTypesOutcomeCallable ApdsClient::listSurveyResourceTypesCallable(const ListSurveyResourceTypesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListSurveyResourceTypesOutcome()>>(
			[this, request]()
			{
			return this->listSurveyResourceTypes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ApdsClient::ListSurveyResourcesDetailOutcome ApdsClient::listSurveyResourcesDetail(const ListSurveyResourcesDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListSurveyResourcesDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListSurveyResourcesDetailOutcome(ListSurveyResourcesDetailResult(outcome.result()));
	else
		return ListSurveyResourcesDetailOutcome(outcome.error());
}

void ApdsClient::listSurveyResourcesDetailAsync(const ListSurveyResourcesDetailRequest& request, const ListSurveyResourcesDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listSurveyResourcesDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ApdsClient::ListSurveyResourcesDetailOutcomeCallable ApdsClient::listSurveyResourcesDetailCallable(const ListSurveyResourcesDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListSurveyResourcesDetailOutcome()>>(
			[this, request]()
			{
			return this->listSurveyResourcesDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ApdsClient::RecoverMigrationJobOutcome ApdsClient::recoverMigrationJob(const RecoverMigrationJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RecoverMigrationJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RecoverMigrationJobOutcome(RecoverMigrationJobResult(outcome.result()));
	else
		return RecoverMigrationJobOutcome(outcome.error());
}

void ApdsClient::recoverMigrationJobAsync(const RecoverMigrationJobRequest& request, const RecoverMigrationJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, recoverMigrationJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ApdsClient::RecoverMigrationJobOutcomeCallable ApdsClient::recoverMigrationJobCallable(const RecoverMigrationJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RecoverMigrationJobOutcome()>>(
			[this, request]()
			{
			return this->recoverMigrationJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ApdsClient::StopSyncMigrationJobOutcome ApdsClient::stopSyncMigrationJob(const StopSyncMigrationJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StopSyncMigrationJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StopSyncMigrationJobOutcome(StopSyncMigrationJobResult(outcome.result()));
	else
		return StopSyncMigrationJobOutcome(outcome.error());
}

void ApdsClient::stopSyncMigrationJobAsync(const StopSyncMigrationJobRequest& request, const StopSyncMigrationJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, stopSyncMigrationJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ApdsClient::StopSyncMigrationJobOutcomeCallable ApdsClient::stopSyncMigrationJobCallable(const StopSyncMigrationJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StopSyncMigrationJobOutcome()>>(
			[this, request]()
			{
			return this->stopSyncMigrationJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ApdsClient::SyncMigrationJobOutcome ApdsClient::syncMigrationJob(const SyncMigrationJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SyncMigrationJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SyncMigrationJobOutcome(SyncMigrationJobResult(outcome.result()));
	else
		return SyncMigrationJobOutcome(outcome.error());
}

void ApdsClient::syncMigrationJobAsync(const SyncMigrationJobRequest& request, const SyncMigrationJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, syncMigrationJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ApdsClient::SyncMigrationJobOutcomeCallable ApdsClient::syncMigrationJobCallable(const SyncMigrationJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SyncMigrationJobOutcome()>>(
			[this, request]()
			{
			return this->syncMigrationJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

