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

#include <alibabacloud/cloudwf/CloudwfClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Cloudwf;
using namespace AlibabaCloud::Cloudwf::Model;

namespace
{
	const std::string SERVICE_NAME = "cloudwf";
}

CloudwfClient::CloudwfClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "cloudwf");
}

CloudwfClient::CloudwfClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "cloudwf");
}

CloudwfClient::CloudwfClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "cloudwf");
}

CloudwfClient::~CloudwfClient()
{}

CloudwfClient::AddApgroupConfigOutcome CloudwfClient::addApgroupConfig(const AddApgroupConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddApgroupConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddApgroupConfigOutcome(AddApgroupConfigResult(outcome.result()));
	else
		return AddApgroupConfigOutcome(outcome.error());
}

void CloudwfClient::addApgroupConfigAsync(const AddApgroupConfigRequest& request, const AddApgroupConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addApgroupConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::AddApgroupConfigOutcomeCallable CloudwfClient::addApgroupConfigCallable(const AddApgroupConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddApgroupConfigOutcome()>>(
			[this, request]()
			{
			return this->addApgroupConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::AliyunRegisterApAssetOutcome CloudwfClient::aliyunRegisterApAsset(const AliyunRegisterApAssetRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AliyunRegisterApAssetOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AliyunRegisterApAssetOutcome(AliyunRegisterApAssetResult(outcome.result()));
	else
		return AliyunRegisterApAssetOutcome(outcome.error());
}

void CloudwfClient::aliyunRegisterApAssetAsync(const AliyunRegisterApAssetRequest& request, const AliyunRegisterApAssetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, aliyunRegisterApAsset(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::AliyunRegisterApAssetOutcomeCallable CloudwfClient::aliyunRegisterApAssetCallable(const AliyunRegisterApAssetRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AliyunRegisterApAssetOutcome()>>(
			[this, request]()
			{
			return this->aliyunRegisterApAsset(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::ApgroupBatchAddApOutcome CloudwfClient::apgroupBatchAddAp(const ApgroupBatchAddApRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ApgroupBatchAddApOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ApgroupBatchAddApOutcome(ApgroupBatchAddApResult(outcome.result()));
	else
		return ApgroupBatchAddApOutcome(outcome.error());
}

void CloudwfClient::apgroupBatchAddApAsync(const ApgroupBatchAddApRequest& request, const ApgroupBatchAddApAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, apgroupBatchAddAp(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::ApgroupBatchAddApOutcomeCallable CloudwfClient::apgroupBatchAddApCallable(const ApgroupBatchAddApRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ApgroupBatchAddApOutcome()>>(
			[this, request]()
			{
			return this->apgroupBatchAddAp(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::ApgroupBatchDeleteApOutcome CloudwfClient::apgroupBatchDeleteAp(const ApgroupBatchDeleteApRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ApgroupBatchDeleteApOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ApgroupBatchDeleteApOutcome(ApgroupBatchDeleteApResult(outcome.result()));
	else
		return ApgroupBatchDeleteApOutcome(outcome.error());
}

void CloudwfClient::apgroupBatchDeleteApAsync(const ApgroupBatchDeleteApRequest& request, const ApgroupBatchDeleteApAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, apgroupBatchDeleteAp(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::ApgroupBatchDeleteApOutcomeCallable CloudwfClient::apgroupBatchDeleteApCallable(const ApgroupBatchDeleteApRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ApgroupBatchDeleteApOutcome()>>(
			[this, request]()
			{
			return this->apgroupBatchDeleteAp(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::AreaCreateOutcome CloudwfClient::areaCreate(const AreaCreateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AreaCreateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AreaCreateOutcome(AreaCreateResult(outcome.result()));
	else
		return AreaCreateOutcome(outcome.error());
}

void CloudwfClient::areaCreateAsync(const AreaCreateRequest& request, const AreaCreateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, areaCreate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::AreaCreateOutcomeCallable CloudwfClient::areaCreateCallable(const AreaCreateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AreaCreateOutcome()>>(
			[this, request]()
			{
			return this->areaCreate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::AreaDeleteOutcome CloudwfClient::areaDelete(const AreaDeleteRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AreaDeleteOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AreaDeleteOutcome(AreaDeleteResult(outcome.result()));
	else
		return AreaDeleteOutcome(outcome.error());
}

void CloudwfClient::areaDeleteAsync(const AreaDeleteRequest& request, const AreaDeleteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, areaDelete(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::AreaDeleteOutcomeCallable CloudwfClient::areaDeleteCallable(const AreaDeleteRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AreaDeleteOutcome()>>(
			[this, request]()
			{
			return this->areaDelete(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::AreaInfoOutcome CloudwfClient::areaInfo(const AreaInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AreaInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AreaInfoOutcome(AreaInfoResult(outcome.result()));
	else
		return AreaInfoOutcome(outcome.error());
}

void CloudwfClient::areaInfoAsync(const AreaInfoRequest& request, const AreaInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, areaInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::AreaInfoOutcomeCallable CloudwfClient::areaInfoCallable(const AreaInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AreaInfoOutcome()>>(
			[this, request]()
			{
			return this->areaInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::AreaShowListOutcome CloudwfClient::areaShowList(const AreaShowListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AreaShowListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AreaShowListOutcome(AreaShowListResult(outcome.result()));
	else
		return AreaShowListOutcome(outcome.error());
}

void CloudwfClient::areaShowListAsync(const AreaShowListRequest& request, const AreaShowListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, areaShowList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::AreaShowListOutcomeCallable CloudwfClient::areaShowListCallable(const AreaShowListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AreaShowListOutcome()>>(
			[this, request]()
			{
			return this->areaShowList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::AreaUpdateOutcome CloudwfClient::areaUpdate(const AreaUpdateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AreaUpdateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AreaUpdateOutcome(AreaUpdateResult(outcome.result()));
	else
		return AreaUpdateOutcome(outcome.error());
}

void CloudwfClient::areaUpdateAsync(const AreaUpdateRequest& request, const AreaUpdateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, areaUpdate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::AreaUpdateOutcomeCallable CloudwfClient::areaUpdateCallable(const AreaUpdateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AreaUpdateOutcome()>>(
			[this, request]()
			{
			return this->areaUpdate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::BatchChangeGroupApNameOutcome CloudwfClient::batchChangeGroupApName(const BatchChangeGroupApNameRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BatchChangeGroupApNameOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BatchChangeGroupApNameOutcome(BatchChangeGroupApNameResult(outcome.result()));
	else
		return BatchChangeGroupApNameOutcome(outcome.error());
}

void CloudwfClient::batchChangeGroupApNameAsync(const BatchChangeGroupApNameRequest& request, const BatchChangeGroupApNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, batchChangeGroupApName(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::BatchChangeGroupApNameOutcomeCallable CloudwfClient::batchChangeGroupApNameCallable(const BatchChangeGroupApNameRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BatchChangeGroupApNameOutcome()>>(
			[this, request]()
			{
			return this->batchChangeGroupApName(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::BatchRegisterApAssetOutcome CloudwfClient::batchRegisterApAsset(const BatchRegisterApAssetRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BatchRegisterApAssetOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BatchRegisterApAssetOutcome(BatchRegisterApAssetResult(outcome.result()));
	else
		return BatchRegisterApAssetOutcome(outcome.error());
}

void CloudwfClient::batchRegisterApAssetAsync(const BatchRegisterApAssetRequest& request, const BatchRegisterApAssetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, batchRegisterApAsset(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::BatchRegisterApAssetOutcomeCallable CloudwfClient::batchRegisterApAssetCallable(const BatchRegisterApAssetRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BatchRegisterApAssetOutcome()>>(
			[this, request]()
			{
			return this->batchRegisterApAsset(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::BatchSaveApPositionOutcome CloudwfClient::batchSaveApPosition(const BatchSaveApPositionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BatchSaveApPositionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BatchSaveApPositionOutcome(BatchSaveApPositionResult(outcome.result()));
	else
		return BatchSaveApPositionOutcome(outcome.error());
}

void CloudwfClient::batchSaveApPositionAsync(const BatchSaveApPositionRequest& request, const BatchSaveApPositionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, batchSaveApPosition(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::BatchSaveApPositionOutcomeCallable CloudwfClient::batchSaveApPositionCallable(const BatchSaveApPositionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BatchSaveApPositionOutcome()>>(
			[this, request]()
			{
			return this->batchSaveApPosition(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::BusinessCreateOutcome CloudwfClient::businessCreate(const BusinessCreateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BusinessCreateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BusinessCreateOutcome(BusinessCreateResult(outcome.result()));
	else
		return BusinessCreateOutcome(outcome.error());
}

void CloudwfClient::businessCreateAsync(const BusinessCreateRequest& request, const BusinessCreateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, businessCreate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::BusinessCreateOutcomeCallable CloudwfClient::businessCreateCallable(const BusinessCreateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BusinessCreateOutcome()>>(
			[this, request]()
			{
			return this->businessCreate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::BusinessInfoOutcome CloudwfClient::businessInfo(const BusinessInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BusinessInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BusinessInfoOutcome(BusinessInfoResult(outcome.result()));
	else
		return BusinessInfoOutcome(outcome.error());
}

void CloudwfClient::businessInfoAsync(const BusinessInfoRequest& request, const BusinessInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, businessInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::BusinessInfoOutcomeCallable CloudwfClient::businessInfoCallable(const BusinessInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BusinessInfoOutcome()>>(
			[this, request]()
			{
			return this->businessInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::BusinessShowListOutcome CloudwfClient::businessShowList(const BusinessShowListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BusinessShowListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BusinessShowListOutcome(BusinessShowListResult(outcome.result()));
	else
		return BusinessShowListOutcome(outcome.error());
}

void CloudwfClient::businessShowListAsync(const BusinessShowListRequest& request, const BusinessShowListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, businessShowList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::BusinessShowListOutcomeCallable CloudwfClient::businessShowListCallable(const BusinessShowListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BusinessShowListOutcome()>>(
			[this, request]()
			{
			return this->businessShowList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::BusinessUpdateOutcome CloudwfClient::businessUpdate(const BusinessUpdateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BusinessUpdateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BusinessUpdateOutcome(BusinessUpdateResult(outcome.result()));
	else
		return BusinessUpdateOutcome(outcome.error());
}

void CloudwfClient::businessUpdateAsync(const BusinessUpdateRequest& request, const BusinessUpdateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, businessUpdate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::BusinessUpdateOutcomeCallable CloudwfClient::businessUpdateCallable(const BusinessUpdateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BusinessUpdateOutcome()>>(
			[this, request]()
			{
			return this->businessUpdate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::CeaseInstanceOutcome CloudwfClient::ceaseInstance(const CeaseInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CeaseInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CeaseInstanceOutcome(CeaseInstanceResult(outcome.result()));
	else
		return CeaseInstanceOutcome(outcome.error());
}

void CloudwfClient::ceaseInstanceAsync(const CeaseInstanceRequest& request, const CeaseInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, ceaseInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::CeaseInstanceOutcomeCallable CloudwfClient::ceaseInstanceCallable(const CeaseInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CeaseInstanceOutcome()>>(
			[this, request]()
			{
			return this->ceaseInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::CheckRootPermissionOutcome CloudwfClient::checkRootPermission(const CheckRootPermissionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CheckRootPermissionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CheckRootPermissionOutcome(CheckRootPermissionResult(outcome.result()));
	else
		return CheckRootPermissionOutcome(outcome.error());
}

void CloudwfClient::checkRootPermissionAsync(const CheckRootPermissionRequest& request, const CheckRootPermissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, checkRootPermission(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::CheckRootPermissionOutcomeCallable CloudwfClient::checkRootPermissionCallable(const CheckRootPermissionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CheckRootPermissionOutcome()>>(
			[this, request]()
			{
			return this->checkRootPermission(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::CheckUmengDataAnalysisPermissionOutcome CloudwfClient::checkUmengDataAnalysisPermission(const CheckUmengDataAnalysisPermissionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CheckUmengDataAnalysisPermissionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CheckUmengDataAnalysisPermissionOutcome(CheckUmengDataAnalysisPermissionResult(outcome.result()));
	else
		return CheckUmengDataAnalysisPermissionOutcome(outcome.error());
}

void CloudwfClient::checkUmengDataAnalysisPermissionAsync(const CheckUmengDataAnalysisPermissionRequest& request, const CheckUmengDataAnalysisPermissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, checkUmengDataAnalysisPermission(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::CheckUmengDataAnalysisPermissionOutcomeCallable CloudwfClient::checkUmengDataAnalysisPermissionCallable(const CheckUmengDataAnalysisPermissionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CheckUmengDataAnalysisPermissionOutcome()>>(
			[this, request]()
			{
			return this->checkUmengDataAnalysisPermission(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::ConfigAutoRenewOutcome CloudwfClient::configAutoRenew(const ConfigAutoRenewRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ConfigAutoRenewOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ConfigAutoRenewOutcome(ConfigAutoRenewResult(outcome.result()));
	else
		return ConfigAutoRenewOutcome(outcome.error());
}

void CloudwfClient::configAutoRenewAsync(const ConfigAutoRenewRequest& request, const ConfigAutoRenewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, configAutoRenew(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::ConfigAutoRenewOutcomeCallable CloudwfClient::configAutoRenewCallable(const ConfigAutoRenewRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ConfigAutoRenewOutcome()>>(
			[this, request]()
			{
			return this->configAutoRenew(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::CreateRenewOrderOutcome CloudwfClient::createRenewOrder(const CreateRenewOrderRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateRenewOrderOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateRenewOrderOutcome(CreateRenewOrderResult(outcome.result()));
	else
		return CreateRenewOrderOutcome(outcome.error());
}

void CloudwfClient::createRenewOrderAsync(const CreateRenewOrderRequest& request, const CreateRenewOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createRenewOrder(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::CreateRenewOrderOutcomeCallable CloudwfClient::createRenewOrderCallable(const CreateRenewOrderRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateRenewOrderOutcome()>>(
			[this, request]()
			{
			return this->createRenewOrder(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::CreateSubAccountPermissionOutcome CloudwfClient::createSubAccountPermission(const CreateSubAccountPermissionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateSubAccountPermissionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateSubAccountPermissionOutcome(CreateSubAccountPermissionResult(outcome.result()));
	else
		return CreateSubAccountPermissionOutcome(outcome.error());
}

void CloudwfClient::createSubAccountPermissionAsync(const CreateSubAccountPermissionRequest& request, const CreateSubAccountPermissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createSubAccountPermission(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::CreateSubAccountPermissionOutcomeCallable CloudwfClient::createSubAccountPermissionCallable(const CreateSubAccountPermissionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateSubAccountPermissionOutcome()>>(
			[this, request]()
			{
			return this->createSubAccountPermission(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::DelApPositionOutcome CloudwfClient::delApPosition(const DelApPositionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DelApPositionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DelApPositionOutcome(DelApPositionResult(outcome.result()));
	else
		return DelApPositionOutcome(outcome.error());
}

void CloudwfClient::delApPositionAsync(const DelApPositionRequest& request, const DelApPositionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, delApPosition(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::DelApPositionOutcomeCallable CloudwfClient::delApPositionCallable(const DelApPositionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DelApPositionOutcome()>>(
			[this, request]()
			{
			return this->delApPosition(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::DelPageConfigTemplateOutcome CloudwfClient::delPageConfigTemplate(const DelPageConfigTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DelPageConfigTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DelPageConfigTemplateOutcome(DelPageConfigTemplateResult(outcome.result()));
	else
		return DelPageConfigTemplateOutcome(outcome.error());
}

void CloudwfClient::delPageConfigTemplateAsync(const DelPageConfigTemplateRequest& request, const DelPageConfigTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, delPageConfigTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::DelPageConfigTemplateOutcomeCallable CloudwfClient::delPageConfigTemplateCallable(const DelPageConfigTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DelPageConfigTemplateOutcome()>>(
			[this, request]()
			{
			return this->delPageConfigTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::DelPortalTempOutcome CloudwfClient::delPortalTemp(const DelPortalTempRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DelPortalTempOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DelPortalTempOutcome(DelPortalTempResult(outcome.result()));
	else
		return DelPortalTempOutcome(outcome.error());
}

void CloudwfClient::delPortalTempAsync(const DelPortalTempRequest& request, const DelPortalTempAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, delPortalTemp(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::DelPortalTempOutcomeCallable CloudwfClient::delPortalTempCallable(const DelPortalTempRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DelPortalTempOutcome()>>(
			[this, request]()
			{
			return this->delPortalTemp(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::DelSubAccountPermissionOutcome CloudwfClient::delSubAccountPermission(const DelSubAccountPermissionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DelSubAccountPermissionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DelSubAccountPermissionOutcome(DelSubAccountPermissionResult(outcome.result()));
	else
		return DelSubAccountPermissionOutcome(outcome.error());
}

void CloudwfClient::delSubAccountPermissionAsync(const DelSubAccountPermissionRequest& request, const DelSubAccountPermissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, delSubAccountPermission(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::DelSubAccountPermissionOutcomeCallable CloudwfClient::delSubAccountPermissionCallable(const DelSubAccountPermissionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DelSubAccountPermissionOutcome()>>(
			[this, request]()
			{
			return this->delSubAccountPermission(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::DelUmengPagePermission4RootOutcome CloudwfClient::delUmengPagePermission4Root(const DelUmengPagePermission4RootRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DelUmengPagePermission4RootOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DelUmengPagePermission4RootOutcome(DelUmengPagePermission4RootResult(outcome.result()));
	else
		return DelUmengPagePermission4RootOutcome(outcome.error());
}

void CloudwfClient::delUmengPagePermission4RootAsync(const DelUmengPagePermission4RootRequest& request, const DelUmengPagePermission4RootAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, delUmengPagePermission4Root(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::DelUmengPagePermission4RootOutcomeCallable CloudwfClient::delUmengPagePermission4RootCallable(const DelUmengPagePermission4RootRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DelUmengPagePermission4RootOutcome()>>(
			[this, request]()
			{
			return this->delUmengPagePermission4Root(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::DeleteApRadioSsidConfigOutcome CloudwfClient::deleteApRadioSsidConfig(const DeleteApRadioSsidConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteApRadioSsidConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteApRadioSsidConfigOutcome(DeleteApRadioSsidConfigResult(outcome.result()));
	else
		return DeleteApRadioSsidConfigOutcome(outcome.error());
}

void CloudwfClient::deleteApRadioSsidConfigAsync(const DeleteApRadioSsidConfigRequest& request, const DeleteApRadioSsidConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteApRadioSsidConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::DeleteApRadioSsidConfigOutcomeCallable CloudwfClient::deleteApRadioSsidConfigCallable(const DeleteApRadioSsidConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteApRadioSsidConfigOutcome()>>(
			[this, request]()
			{
			return this->deleteApRadioSsidConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::DeleteApgroupConfigOutcome CloudwfClient::deleteApgroupConfig(const DeleteApgroupConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteApgroupConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteApgroupConfigOutcome(DeleteApgroupConfigResult(outcome.result()));
	else
		return DeleteApgroupConfigOutcome(outcome.error());
}

void CloudwfClient::deleteApgroupConfigAsync(const DeleteApgroupConfigRequest& request, const DeleteApgroupConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteApgroupConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::DeleteApgroupConfigOutcomeCallable CloudwfClient::deleteApgroupConfigCallable(const DeleteApgroupConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteApgroupConfigOutcome()>>(
			[this, request]()
			{
			return this->deleteApgroupConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::DeleteApgroupSsidConfigOutcome CloudwfClient::deleteApgroupSsidConfig(const DeleteApgroupSsidConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteApgroupSsidConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteApgroupSsidConfigOutcome(DeleteApgroupSsidConfigResult(outcome.result()));
	else
		return DeleteApgroupSsidConfigOutcome(outcome.error());
}

void CloudwfClient::deleteApgroupSsidConfigAsync(const DeleteApgroupSsidConfigRequest& request, const DeleteApgroupSsidConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteApgroupSsidConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::DeleteApgroupSsidConfigOutcomeCallable CloudwfClient::deleteApgroupSsidConfigCallable(const DeleteApgroupSsidConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteApgroupSsidConfigOutcome()>>(
			[this, request]()
			{
			return this->deleteApgroupSsidConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::DeletePositionMapOutcome CloudwfClient::deletePositionMap(const DeletePositionMapRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeletePositionMapOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeletePositionMapOutcome(DeletePositionMapResult(outcome.result()));
	else
		return DeletePositionMapOutcome(outcome.error());
}

void CloudwfClient::deletePositionMapAsync(const DeletePositionMapRequest& request, const DeletePositionMapAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deletePositionMap(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::DeletePositionMapOutcomeCallable CloudwfClient::deletePositionMapCallable(const DeletePositionMapRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeletePositionMapOutcome()>>(
			[this, request]()
			{
			return this->deletePositionMap(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::DeviceBatchCreateOutcome CloudwfClient::deviceBatchCreate(const DeviceBatchCreateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeviceBatchCreateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeviceBatchCreateOutcome(DeviceBatchCreateResult(outcome.result()));
	else
		return DeviceBatchCreateOutcome(outcome.error());
}

void CloudwfClient::deviceBatchCreateAsync(const DeviceBatchCreateRequest& request, const DeviceBatchCreateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deviceBatchCreate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::DeviceBatchCreateOutcomeCallable CloudwfClient::deviceBatchCreateCallable(const DeviceBatchCreateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeviceBatchCreateOutcome()>>(
			[this, request]()
			{
			return this->deviceBatchCreate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::DeviceCreateOutcome CloudwfClient::deviceCreate(const DeviceCreateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeviceCreateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeviceCreateOutcome(DeviceCreateResult(outcome.result()));
	else
		return DeviceCreateOutcome(outcome.error());
}

void CloudwfClient::deviceCreateAsync(const DeviceCreateRequest& request, const DeviceCreateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deviceCreate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::DeviceCreateOutcomeCallable CloudwfClient::deviceCreateCallable(const DeviceCreateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeviceCreateOutcome()>>(
			[this, request]()
			{
			return this->deviceCreate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::DeviceDeleteOutcome CloudwfClient::deviceDelete(const DeviceDeleteRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeviceDeleteOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeviceDeleteOutcome(DeviceDeleteResult(outcome.result()));
	else
		return DeviceDeleteOutcome(outcome.error());
}

void CloudwfClient::deviceDeleteAsync(const DeviceDeleteRequest& request, const DeviceDeleteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deviceDelete(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::DeviceDeleteOutcomeCallable CloudwfClient::deviceDeleteCallable(const DeviceDeleteRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeviceDeleteOutcome()>>(
			[this, request]()
			{
			return this->deviceDelete(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::DeviceShowListOutcome CloudwfClient::deviceShowList(const DeviceShowListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeviceShowListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeviceShowListOutcome(DeviceShowListResult(outcome.result()));
	else
		return DeviceShowListOutcome(outcome.error());
}

void CloudwfClient::deviceShowListAsync(const DeviceShowListRequest& request, const DeviceShowListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deviceShowList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::DeviceShowListOutcomeCallable CloudwfClient::deviceShowListCallable(const DeviceShowListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeviceShowListOutcome()>>(
			[this, request]()
			{
			return this->deviceShowList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::DeviceUpdateOutcome CloudwfClient::deviceUpdate(const DeviceUpdateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeviceUpdateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeviceUpdateOutcome(DeviceUpdateResult(outcome.result()));
	else
		return DeviceUpdateOutcome(outcome.error());
}

void CloudwfClient::deviceUpdateAsync(const DeviceUpdateRequest& request, const DeviceUpdateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deviceUpdate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::DeviceUpdateOutcomeCallable CloudwfClient::deviceUpdateCallable(const DeviceUpdateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeviceUpdateOutcome()>>(
			[this, request]()
			{
			return this->deviceUpdate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::ExcelToJsonOutcome CloudwfClient::excelToJson(const ExcelToJsonRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ExcelToJsonOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ExcelToJsonOutcome(ExcelToJsonResult(outcome.result()));
	else
		return ExcelToJsonOutcome(outcome.error());
}

void CloudwfClient::excelToJsonAsync(const ExcelToJsonRequest& request, const ExcelToJsonAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, excelToJson(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::ExcelToJsonOutcomeCallable CloudwfClient::excelToJsonCallable(const ExcelToJsonRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ExcelToJsonOutcome()>>(
			[this, request]()
			{
			return this->excelToJson(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::FindApOutcome CloudwfClient::findAp(const FindApRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return FindApOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return FindApOutcome(FindApResult(outcome.result()));
	else
		return FindApOutcome(outcome.error());
}

void CloudwfClient::findApAsync(const FindApRequest& request, const FindApAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, findAp(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::FindApOutcomeCallable CloudwfClient::findApCallable(const FindApRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<FindApOutcome()>>(
			[this, request]()
			{
			return this->findAp(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::FrequencyAnalyseOutcome CloudwfClient::frequencyAnalyse(const FrequencyAnalyseRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return FrequencyAnalyseOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return FrequencyAnalyseOutcome(FrequencyAnalyseResult(outcome.result()));
	else
		return FrequencyAnalyseOutcome(outcome.error());
}

void CloudwfClient::frequencyAnalyseAsync(const FrequencyAnalyseRequest& request, const FrequencyAnalyseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, frequencyAnalyse(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::FrequencyAnalyseOutcomeCallable CloudwfClient::frequencyAnalyseCallable(const FrequencyAnalyseRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<FrequencyAnalyseOutcome()>>(
			[this, request]()
			{
			return this->frequencyAnalyse(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::GetAccountConfigOutcome CloudwfClient::getAccountConfig(const GetAccountConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetAccountConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetAccountConfigOutcome(GetAccountConfigResult(outcome.result()));
	else
		return GetAccountConfigOutcome(outcome.error());
}

void CloudwfClient::getAccountConfigAsync(const GetAccountConfigRequest& request, const GetAccountConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getAccountConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::GetAccountConfigOutcomeCallable CloudwfClient::getAccountConfigCallable(const GetAccountConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetAccountConfigOutcome()>>(
			[this, request]()
			{
			return this->getAccountConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::GetAddApsProgressOutcome CloudwfClient::getAddApsProgress(const GetAddApsProgressRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetAddApsProgressOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetAddApsProgressOutcome(GetAddApsProgressResult(outcome.result()));
	else
		return GetAddApsProgressOutcome(outcome.error());
}

void CloudwfClient::getAddApsProgressAsync(const GetAddApsProgressRequest& request, const GetAddApsProgressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getAddApsProgress(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::GetAddApsProgressOutcomeCallable CloudwfClient::getAddApsProgressCallable(const GetAddApsProgressRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetAddApsProgressOutcome()>>(
			[this, request]()
			{
			return this->getAddApsProgress(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::GetAllActiveShopByGroupOutcome CloudwfClient::getAllActiveShopByGroup(const GetAllActiveShopByGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetAllActiveShopByGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetAllActiveShopByGroupOutcome(GetAllActiveShopByGroupResult(outcome.result()));
	else
		return GetAllActiveShopByGroupOutcome(outcome.error());
}

void CloudwfClient::getAllActiveShopByGroupAsync(const GetAllActiveShopByGroupRequest& request, const GetAllActiveShopByGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getAllActiveShopByGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::GetAllActiveShopByGroupOutcomeCallable CloudwfClient::getAllActiveShopByGroupCallable(const GetAllActiveShopByGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetAllActiveShopByGroupOutcome()>>(
			[this, request]()
			{
			return this->getAllActiveShopByGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::GetAllApModelOutcome CloudwfClient::getAllApModel(const GetAllApModelRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetAllApModelOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetAllApModelOutcome(GetAllApModelResult(outcome.result()));
	else
		return GetAllApModelOutcome(outcome.error());
}

void CloudwfClient::getAllApModelAsync(const GetAllApModelRequest& request, const GetAllApModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getAllApModel(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::GetAllApModelOutcomeCallable CloudwfClient::getAllApModelCallable(const GetAllApModelRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetAllApModelOutcome()>>(
			[this, request]()
			{
			return this->getAllApModel(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::GetApDetailedConfigOutcome CloudwfClient::getApDetailedConfig(const GetApDetailedConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetApDetailedConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetApDetailedConfigOutcome(GetApDetailedConfigResult(outcome.result()));
	else
		return GetApDetailedConfigOutcome(outcome.error());
}

void CloudwfClient::getApDetailedConfigAsync(const GetApDetailedConfigRequest& request, const GetApDetailedConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getApDetailedConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::GetApDetailedConfigOutcomeCallable CloudwfClient::getApDetailedConfigCallable(const GetApDetailedConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetApDetailedConfigOutcome()>>(
			[this, request]()
			{
			return this->getApDetailedConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::GetApDetailedStatusOutcome CloudwfClient::getApDetailedStatus(const GetApDetailedStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetApDetailedStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetApDetailedStatusOutcome(GetApDetailedStatusResult(outcome.result()));
	else
		return GetApDetailedStatusOutcome(outcome.error());
}

void CloudwfClient::getApDetailedStatusAsync(const GetApDetailedStatusRequest& request, const GetApDetailedStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getApDetailedStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::GetApDetailedStatusOutcomeCallable CloudwfClient::getApDetailedStatusCallable(const GetApDetailedStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetApDetailedStatusOutcome()>>(
			[this, request]()
			{
			return this->getApDetailedStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::GetApPortalBindOutcome CloudwfClient::getApPortalBind(const GetApPortalBindRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetApPortalBindOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetApPortalBindOutcome(GetApPortalBindResult(outcome.result()));
	else
		return GetApPortalBindOutcome(outcome.error());
}

void CloudwfClient::getApPortalBindAsync(const GetApPortalBindRequest& request, const GetApPortalBindAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getApPortalBind(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::GetApPortalBindOutcomeCallable CloudwfClient::getApPortalBindCallable(const GetApPortalBindRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetApPortalBindOutcome()>>(
			[this, request]()
			{
			return this->getApPortalBind(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::GetApRunHistoryTimeSerOutcome CloudwfClient::getApRunHistoryTimeSer(const GetApRunHistoryTimeSerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetApRunHistoryTimeSerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetApRunHistoryTimeSerOutcome(GetApRunHistoryTimeSerResult(outcome.result()));
	else
		return GetApRunHistoryTimeSerOutcome(outcome.error());
}

void CloudwfClient::getApRunHistoryTimeSerAsync(const GetApRunHistoryTimeSerRequest& request, const GetApRunHistoryTimeSerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getApRunHistoryTimeSer(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::GetApRunHistoryTimeSerOutcomeCallable CloudwfClient::getApRunHistoryTimeSerCallable(const GetApRunHistoryTimeSerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetApRunHistoryTimeSerOutcome()>>(
			[this, request]()
			{
			return this->getApRunHistoryTimeSer(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::GetApStaMiscAggOutcome CloudwfClient::getApStaMiscAgg(const GetApStaMiscAggRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetApStaMiscAggOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetApStaMiscAggOutcome(GetApStaMiscAggResult(outcome.result()));
	else
		return GetApStaMiscAggOutcome(outcome.error());
}

void CloudwfClient::getApStaMiscAggAsync(const GetApStaMiscAggRequest& request, const GetApStaMiscAggAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getApStaMiscAgg(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::GetApStaMiscAggOutcomeCallable CloudwfClient::getApStaMiscAggCallable(const GetApStaMiscAggRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetApStaMiscAggOutcome()>>(
			[this, request]()
			{
			return this->getApStaMiscAgg(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::GetApTopOutcome CloudwfClient::getApTop(const GetApTopRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetApTopOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetApTopOutcome(GetApTopResult(outcome.result()));
	else
		return GetApTopOutcome(outcome.error());
}

void CloudwfClient::getApTopAsync(const GetApTopRequest& request, const GetApTopAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getApTop(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::GetApTopOutcomeCallable CloudwfClient::getApTopCallable(const GetApTopRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetApTopOutcome()>>(
			[this, request]()
			{
			return this->getApTop(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::GetApgroupConfigProgressOutcome CloudwfClient::getApgroupConfigProgress(const GetApgroupConfigProgressRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetApgroupConfigProgressOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetApgroupConfigProgressOutcome(GetApgroupConfigProgressResult(outcome.result()));
	else
		return GetApgroupConfigProgressOutcome(outcome.error());
}

void CloudwfClient::getApgroupConfigProgressAsync(const GetApgroupConfigProgressRequest& request, const GetApgroupConfigProgressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getApgroupConfigProgress(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::GetApgroupConfigProgressOutcomeCallable CloudwfClient::getApgroupConfigProgressCallable(const GetApgroupConfigProgressRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetApgroupConfigProgressOutcome()>>(
			[this, request]()
			{
			return this->getApgroupConfigProgress(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::GetApgroupDetailedConfigOutcome CloudwfClient::getApgroupDetailedConfig(const GetApgroupDetailedConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetApgroupDetailedConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetApgroupDetailedConfigOutcome(GetApgroupDetailedConfigResult(outcome.result()));
	else
		return GetApgroupDetailedConfigOutcome(outcome.error());
}

void CloudwfClient::getApgroupDetailedConfigAsync(const GetApgroupDetailedConfigRequest& request, const GetApgroupDetailedConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getApgroupDetailedConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::GetApgroupDetailedConfigOutcomeCallable CloudwfClient::getApgroupDetailedConfigCallable(const GetApgroupDetailedConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetApgroupDetailedConfigOutcome()>>(
			[this, request]()
			{
			return this->getApgroupDetailedConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::GetApgroupPortalConfigProgressOutcome CloudwfClient::getApgroupPortalConfigProgress(const GetApgroupPortalConfigProgressRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetApgroupPortalConfigProgressOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetApgroupPortalConfigProgressOutcome(GetApgroupPortalConfigProgressResult(outcome.result()));
	else
		return GetApgroupPortalConfigProgressOutcome(outcome.error());
}

void CloudwfClient::getApgroupPortalConfigProgressAsync(const GetApgroupPortalConfigProgressRequest& request, const GetApgroupPortalConfigProgressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getApgroupPortalConfigProgress(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::GetApgroupPortalConfigProgressOutcomeCallable CloudwfClient::getApgroupPortalConfigProgressCallable(const GetApgroupPortalConfigProgressRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetApgroupPortalConfigProgressOutcome()>>(
			[this, request]()
			{
			return this->getApgroupPortalConfigProgress(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::GetApgroupScanConfigSaveProgressOutcome CloudwfClient::getApgroupScanConfigSaveProgress(const GetApgroupScanConfigSaveProgressRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetApgroupScanConfigSaveProgressOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetApgroupScanConfigSaveProgressOutcome(GetApgroupScanConfigSaveProgressResult(outcome.result()));
	else
		return GetApgroupScanConfigSaveProgressOutcome(outcome.error());
}

void CloudwfClient::getApgroupScanConfigSaveProgressAsync(const GetApgroupScanConfigSaveProgressRequest& request, const GetApgroupScanConfigSaveProgressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getApgroupScanConfigSaveProgress(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::GetApgroupScanConfigSaveProgressOutcomeCallable CloudwfClient::getApgroupScanConfigSaveProgressCallable(const GetApgroupScanConfigSaveProgressRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetApgroupScanConfigSaveProgressOutcome()>>(
			[this, request]()
			{
			return this->getApgroupScanConfigSaveProgress(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::GetApgroupSsidConfigProgressOutcome CloudwfClient::getApgroupSsidConfigProgress(const GetApgroupSsidConfigProgressRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetApgroupSsidConfigProgressOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetApgroupSsidConfigProgressOutcome(GetApgroupSsidConfigProgressResult(outcome.result()));
	else
		return GetApgroupSsidConfigProgressOutcome(outcome.error());
}

void CloudwfClient::getApgroupSsidConfigProgressAsync(const GetApgroupSsidConfigProgressRequest& request, const GetApgroupSsidConfigProgressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getApgroupSsidConfigProgress(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::GetApgroupSsidConfigProgressOutcomeCallable CloudwfClient::getApgroupSsidConfigProgressCallable(const GetApgroupSsidConfigProgressRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetApgroupSsidConfigProgressOutcome()>>(
			[this, request]()
			{
			return this->getApgroupSsidConfigProgress(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::GetBatchSaveApAssetProgressOutcome CloudwfClient::getBatchSaveApAssetProgress(const GetBatchSaveApAssetProgressRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetBatchSaveApAssetProgressOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetBatchSaveApAssetProgressOutcome(GetBatchSaveApAssetProgressResult(outcome.result()));
	else
		return GetBatchSaveApAssetProgressOutcome(outcome.error());
}

void CloudwfClient::getBatchSaveApAssetProgressAsync(const GetBatchSaveApAssetProgressRequest& request, const GetBatchSaveApAssetProgressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getBatchSaveApAssetProgress(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::GetBatchSaveApAssetProgressOutcomeCallable CloudwfClient::getBatchSaveApAssetProgressCallable(const GetBatchSaveApAssetProgressRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetBatchSaveApAssetProgressOutcome()>>(
			[this, request]()
			{
			return this->getBatchSaveApAssetProgress(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::GetBidOutcome CloudwfClient::getBid(const GetBidRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetBidOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetBidOutcome(GetBidResult(outcome.result()));
	else
		return GetBidOutcome(outcome.error());
}

void CloudwfClient::getBidAsync(const GetBidRequest& request, const GetBidAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getBid(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::GetBidOutcomeCallable CloudwfClient::getBidCallable(const GetBidRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetBidOutcome()>>(
			[this, request]()
			{
			return this->getBid(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::GetBids4Uid4RootOutcome CloudwfClient::getBids4Uid4Root(const GetBids4Uid4RootRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetBids4Uid4RootOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetBids4Uid4RootOutcome(GetBids4Uid4RootResult(outcome.result()));
	else
		return GetBids4Uid4RootOutcome(outcome.error());
}

void CloudwfClient::getBids4Uid4RootAsync(const GetBids4Uid4RootRequest& request, const GetBids4Uid4RootAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getBids4Uid4Root(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::GetBids4Uid4RootOutcomeCallable CloudwfClient::getBids4Uid4RootCallable(const GetBids4Uid4RootRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetBids4Uid4RootOutcome()>>(
			[this, request]()
			{
			return this->getBids4Uid4Root(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::GetBindAp4UmengOutcome CloudwfClient::getBindAp4Umeng(const GetBindAp4UmengRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetBindAp4UmengOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetBindAp4UmengOutcome(GetBindAp4UmengResult(outcome.result()));
	else
		return GetBindAp4UmengOutcome(outcome.error());
}

void CloudwfClient::getBindAp4UmengAsync(const GetBindAp4UmengRequest& request, const GetBindAp4UmengAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getBindAp4Umeng(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::GetBindAp4UmengOutcomeCallable CloudwfClient::getBindAp4UmengCallable(const GetBindAp4UmengRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetBindAp4UmengOutcome()>>(
			[this, request]()
			{
			return this->getBindAp4Umeng(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::GetCrowdListOutcome CloudwfClient::getCrowdList(const GetCrowdListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetCrowdListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetCrowdListOutcome(GetCrowdListResult(outcome.result()));
	else
		return GetCrowdListOutcome(outcome.error());
}

void CloudwfClient::getCrowdListAsync(const GetCrowdListRequest& request, const GetCrowdListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getCrowdList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::GetCrowdListOutcomeCallable CloudwfClient::getCrowdListCallable(const GetCrowdListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetCrowdListOutcome()>>(
			[this, request]()
			{
			return this->getCrowdList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::GetDailyStatisticOutcome CloudwfClient::getDailyStatistic(const GetDailyStatisticRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetDailyStatisticOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetDailyStatisticOutcome(GetDailyStatisticResult(outcome.result()));
	else
		return GetDailyStatisticOutcome(outcome.error());
}

void CloudwfClient::getDailyStatisticAsync(const GetDailyStatisticRequest& request, const GetDailyStatisticAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getDailyStatistic(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::GetDailyStatisticOutcomeCallable CloudwfClient::getDailyStatisticCallable(const GetDailyStatisticRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetDailyStatisticOutcome()>>(
			[this, request]()
			{
			return this->getDailyStatistic(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::GetDeviceInfoByMacOutcome CloudwfClient::getDeviceInfoByMac(const GetDeviceInfoByMacRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetDeviceInfoByMacOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetDeviceInfoByMacOutcome(GetDeviceInfoByMacResult(outcome.result()));
	else
		return GetDeviceInfoByMacOutcome(outcome.error());
}

void CloudwfClient::getDeviceInfoByMacAsync(const GetDeviceInfoByMacRequest& request, const GetDeviceInfoByMacAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getDeviceInfoByMac(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::GetDeviceInfoByMacOutcomeCallable CloudwfClient::getDeviceInfoByMacCallable(const GetDeviceInfoByMacRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetDeviceInfoByMacOutcome()>>(
			[this, request]()
			{
			return this->getDeviceInfoByMac(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::GetGroupApChangeNameTemplateOutcome CloudwfClient::getGroupApChangeNameTemplate(const GetGroupApChangeNameTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetGroupApChangeNameTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetGroupApChangeNameTemplateOutcome(GetGroupApChangeNameTemplateResult(outcome.result()));
	else
		return GetGroupApChangeNameTemplateOutcome(outcome.error());
}

void CloudwfClient::getGroupApChangeNameTemplateAsync(const GetGroupApChangeNameTemplateRequest& request, const GetGroupApChangeNameTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getGroupApChangeNameTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::GetGroupApChangeNameTemplateOutcomeCallable CloudwfClient::getGroupApChangeNameTemplateCallable(const GetGroupApChangeNameTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetGroupApChangeNameTemplateOutcome()>>(
			[this, request]()
			{
			return this->getGroupApChangeNameTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::GetGroupApRadioConfigProgressOutcome CloudwfClient::getGroupApRadioConfigProgress(const GetGroupApRadioConfigProgressRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetGroupApRadioConfigProgressOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetGroupApRadioConfigProgressOutcome(GetGroupApRadioConfigProgressResult(outcome.result()));
	else
		return GetGroupApRadioConfigProgressOutcome(outcome.error());
}

void CloudwfClient::getGroupApRadioConfigProgressAsync(const GetGroupApRadioConfigProgressRequest& request, const GetGroupApRadioConfigProgressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getGroupApRadioConfigProgress(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::GetGroupApRadioConfigProgressOutcomeCallable CloudwfClient::getGroupApRadioConfigProgressCallable(const GetGroupApRadioConfigProgressRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetGroupApRadioConfigProgressOutcome()>>(
			[this, request]()
			{
			return this->getGroupApRadioConfigProgress(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::GetGroupApRadioConfigTemplateOutcome CloudwfClient::getGroupApRadioConfigTemplate(const GetGroupApRadioConfigTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetGroupApRadioConfigTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetGroupApRadioConfigTemplateOutcome(GetGroupApRadioConfigTemplateResult(outcome.result()));
	else
		return GetGroupApRadioConfigTemplateOutcome(outcome.error());
}

void CloudwfClient::getGroupApRadioConfigTemplateAsync(const GetGroupApRadioConfigTemplateRequest& request, const GetGroupApRadioConfigTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getGroupApRadioConfigTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::GetGroupApRadioConfigTemplateOutcomeCallable CloudwfClient::getGroupApRadioConfigTemplateCallable(const GetGroupApRadioConfigTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetGroupApRadioConfigTemplateOutcome()>>(
			[this, request]()
			{
			return this->getGroupApRadioConfigTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::GetGroupApRadioOnoffProgressOutcome CloudwfClient::getGroupApRadioOnoffProgress(const GetGroupApRadioOnoffProgressRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetGroupApRadioOnoffProgressOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetGroupApRadioOnoffProgressOutcome(GetGroupApRadioOnoffProgressResult(outcome.result()));
	else
		return GetGroupApRadioOnoffProgressOutcome(outcome.error());
}

void CloudwfClient::getGroupApRadioOnoffProgressAsync(const GetGroupApRadioOnoffProgressRequest& request, const GetGroupApRadioOnoffProgressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getGroupApRadioOnoffProgress(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::GetGroupApRadioOnoffProgressOutcomeCallable CloudwfClient::getGroupApRadioOnoffProgressCallable(const GetGroupApRadioOnoffProgressRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetGroupApRadioOnoffProgressOutcome()>>(
			[this, request]()
			{
			return this->getGroupApRadioOnoffProgress(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::GetGroupApRepairProgressOutcome CloudwfClient::getGroupApRepairProgress(const GetGroupApRepairProgressRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetGroupApRepairProgressOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetGroupApRepairProgressOutcome(GetGroupApRepairProgressResult(outcome.result()));
	else
		return GetGroupApRepairProgressOutcome(outcome.error());
}

void CloudwfClient::getGroupApRepairProgressAsync(const GetGroupApRepairProgressRequest& request, const GetGroupApRepairProgressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getGroupApRepairProgress(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::GetGroupApRepairProgressOutcomeCallable CloudwfClient::getGroupApRepairProgressCallable(const GetGroupApRepairProgressRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetGroupApRepairProgressOutcome()>>(
			[this, request]()
			{
			return this->getGroupApRepairProgress(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::GetInstanceByShopOutcome CloudwfClient::getInstanceByShop(const GetInstanceByShopRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetInstanceByShopOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetInstanceByShopOutcome(GetInstanceByShopResult(outcome.result()));
	else
		return GetInstanceByShopOutcome(outcome.error());
}

void CloudwfClient::getInstanceByShopAsync(const GetInstanceByShopRequest& request, const GetInstanceByShopAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getInstanceByShop(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::GetInstanceByShopOutcomeCallable CloudwfClient::getInstanceByShopCallable(const GetInstanceByShopRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetInstanceByShopOutcome()>>(
			[this, request]()
			{
			return this->getInstanceByShop(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::GetLatestApStatisticOutcome CloudwfClient::getLatestApStatistic(const GetLatestApStatisticRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetLatestApStatisticOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetLatestApStatisticOutcome(GetLatestApStatisticResult(outcome.result()));
	else
		return GetLatestApStatisticOutcome(outcome.error());
}

void CloudwfClient::getLatestApStatisticAsync(const GetLatestApStatisticRequest& request, const GetLatestApStatisticAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getLatestApStatistic(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::GetLatestApStatisticOutcomeCallable CloudwfClient::getLatestApStatisticCallable(const GetLatestApStatisticRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetLatestApStatisticOutcome()>>(
			[this, request]()
			{
			return this->getLatestApStatistic(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::GetLatestStaStatisticOutcome CloudwfClient::getLatestStaStatistic(const GetLatestStaStatisticRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetLatestStaStatisticOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetLatestStaStatisticOutcome(GetLatestStaStatisticResult(outcome.result()));
	else
		return GetLatestStaStatisticOutcome(outcome.error());
}

void CloudwfClient::getLatestStaStatisticAsync(const GetLatestStaStatisticRequest& request, const GetLatestStaStatisticAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getLatestStaStatistic(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::GetLatestStaStatisticOutcomeCallable CloudwfClient::getLatestStaStatisticCallable(const GetLatestStaStatisticRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetLatestStaStatisticOutcome()>>(
			[this, request]()
			{
			return this->getLatestStaStatistic(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::GetMapUrlOutcome CloudwfClient::getMapUrl(const GetMapUrlRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetMapUrlOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetMapUrlOutcome(GetMapUrlResult(outcome.result()));
	else
		return GetMapUrlOutcome(outcome.error());
}

void CloudwfClient::getMapUrlAsync(const GetMapUrlRequest& request, const GetMapUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getMapUrl(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::GetMapUrlOutcomeCallable CloudwfClient::getMapUrlCallable(const GetMapUrlRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetMapUrlOutcome()>>(
			[this, request]()
			{
			return this->getMapUrl(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::GetOnlineApTimeSerOutcome CloudwfClient::getOnlineApTimeSer(const GetOnlineApTimeSerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetOnlineApTimeSerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetOnlineApTimeSerOutcome(GetOnlineApTimeSerResult(outcome.result()));
	else
		return GetOnlineApTimeSerOutcome(outcome.error());
}

void CloudwfClient::getOnlineApTimeSerAsync(const GetOnlineApTimeSerRequest& request, const GetOnlineApTimeSerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getOnlineApTimeSer(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::GetOnlineApTimeSerOutcomeCallable CloudwfClient::getOnlineApTimeSerCallable(const GetOnlineApTimeSerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetOnlineApTimeSerOutcome()>>(
			[this, request]()
			{
			return this->getOnlineApTimeSer(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::GetOnlineStaTimeSerOutcome CloudwfClient::getOnlineStaTimeSer(const GetOnlineStaTimeSerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetOnlineStaTimeSerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetOnlineStaTimeSerOutcome(GetOnlineStaTimeSerResult(outcome.result()));
	else
		return GetOnlineStaTimeSerOutcome(outcome.error());
}

void CloudwfClient::getOnlineStaTimeSerAsync(const GetOnlineStaTimeSerRequest& request, const GetOnlineStaTimeSerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getOnlineStaTimeSer(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::GetOnlineStaTimeSerOutcomeCallable CloudwfClient::getOnlineStaTimeSerCallable(const GetOnlineStaTimeSerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetOnlineStaTimeSerOutcome()>>(
			[this, request]()
			{
			return this->getOnlineStaTimeSer(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::GetOssServerSignOutcome CloudwfClient::getOssServerSign(const GetOssServerSignRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetOssServerSignOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetOssServerSignOutcome(GetOssServerSignResult(outcome.result()));
	else
		return GetOssServerSignOutcome(outcome.error());
}

void CloudwfClient::getOssServerSignAsync(const GetOssServerSignRequest& request, const GetOssServerSignAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getOssServerSign(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::GetOssServerSignOutcomeCallable CloudwfClient::getOssServerSignCallable(const GetOssServerSignRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetOssServerSignOutcome()>>(
			[this, request]()
			{
			return this->getOssServerSign(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::GetPageConfigTemplateOutcome CloudwfClient::getPageConfigTemplate(const GetPageConfigTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetPageConfigTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetPageConfigTemplateOutcome(GetPageConfigTemplateResult(outcome.result()));
	else
		return GetPageConfigTemplateOutcome(outcome.error());
}

void CloudwfClient::getPageConfigTemplateAsync(const GetPageConfigTemplateRequest& request, const GetPageConfigTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getPageConfigTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::GetPageConfigTemplateOutcomeCallable CloudwfClient::getPageConfigTemplateCallable(const GetPageConfigTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetPageConfigTemplateOutcome()>>(
			[this, request]()
			{
			return this->getPageConfigTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::GetPagePropertiesOutcome CloudwfClient::getPageProperties(const GetPagePropertiesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetPagePropertiesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetPagePropertiesOutcome(GetPagePropertiesResult(outcome.result()));
	else
		return GetPagePropertiesOutcome(outcome.error());
}

void CloudwfClient::getPagePropertiesAsync(const GetPagePropertiesRequest& request, const GetPagePropertiesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getPageProperties(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::GetPagePropertiesOutcomeCallable CloudwfClient::getPagePropertiesCallable(const GetPagePropertiesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetPagePropertiesOutcome()>>(
			[this, request]()
			{
			return this->getPageProperties(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::GetPortalTempDetailOutcome CloudwfClient::getPortalTempDetail(const GetPortalTempDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetPortalTempDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetPortalTempDetailOutcome(GetPortalTempDetailResult(outcome.result()));
	else
		return GetPortalTempDetailOutcome(outcome.error());
}

void CloudwfClient::getPortalTempDetailAsync(const GetPortalTempDetailRequest& request, const GetPortalTempDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getPortalTempDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::GetPortalTempDetailOutcomeCallable CloudwfClient::getPortalTempDetailCallable(const GetPortalTempDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetPortalTempDetailOutcome()>>(
			[this, request]()
			{
			return this->getPortalTempDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::GetProbeDataSubscriberConfigOutcome CloudwfClient::getProbeDataSubscriberConfig(const GetProbeDataSubscriberConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetProbeDataSubscriberConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetProbeDataSubscriberConfigOutcome(GetProbeDataSubscriberConfigResult(outcome.result()));
	else
		return GetProbeDataSubscriberConfigOutcome(outcome.error());
}

void CloudwfClient::getProbeDataSubscriberConfigAsync(const GetProbeDataSubscriberConfigRequest& request, const GetProbeDataSubscriberConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getProbeDataSubscriberConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::GetProbeDataSubscriberConfigOutcomeCallable CloudwfClient::getProbeDataSubscriberConfigCallable(const GetProbeDataSubscriberConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetProbeDataSubscriberConfigOutcome()>>(
			[this, request]()
			{
			return this->getProbeDataSubscriberConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::GetRadioRunHistoryTimeSerOutcome CloudwfClient::getRadioRunHistoryTimeSer(const GetRadioRunHistoryTimeSerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetRadioRunHistoryTimeSerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetRadioRunHistoryTimeSerOutcome(GetRadioRunHistoryTimeSerResult(outcome.result()));
	else
		return GetRadioRunHistoryTimeSerOutcome(outcome.error());
}

void CloudwfClient::getRadioRunHistoryTimeSerAsync(const GetRadioRunHistoryTimeSerRequest& request, const GetRadioRunHistoryTimeSerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getRadioRunHistoryTimeSer(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::GetRadioRunHistoryTimeSerOutcomeCallable CloudwfClient::getRadioRunHistoryTimeSerCallable(const GetRadioRunHistoryTimeSerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetRadioRunHistoryTimeSerOutcome()>>(
			[this, request]()
			{
			return this->getRadioRunHistoryTimeSer(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::GetScanModeOutcome CloudwfClient::getScanMode(const GetScanModeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetScanModeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetScanModeOutcome(GetScanModeResult(outcome.result()));
	else
		return GetScanModeOutcome(outcome.error());
}

void CloudwfClient::getScanModeAsync(const GetScanModeRequest& request, const GetScanModeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getScanMode(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::GetScanModeOutcomeCallable CloudwfClient::getScanModeCallable(const GetScanModeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetScanModeOutcome()>>(
			[this, request]()
			{
			return this->getScanMode(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::GetScanProbeTimeSerOutcome CloudwfClient::getScanProbeTimeSer(const GetScanProbeTimeSerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetScanProbeTimeSerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetScanProbeTimeSerOutcome(GetScanProbeTimeSerResult(outcome.result()));
	else
		return GetScanProbeTimeSerOutcome(outcome.error());
}

void CloudwfClient::getScanProbeTimeSerAsync(const GetScanProbeTimeSerRequest& request, const GetScanProbeTimeSerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getScanProbeTimeSer(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::GetScanProbeTimeSerOutcomeCallable CloudwfClient::getScanProbeTimeSerCallable(const GetScanProbeTimeSerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetScanProbeTimeSerOutcome()>>(
			[this, request]()
			{
			return this->getScanProbeTimeSer(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::GetSendCommandByMacProgressOutcome CloudwfClient::getSendCommandByMacProgress(const GetSendCommandByMacProgressRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetSendCommandByMacProgressOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetSendCommandByMacProgressOutcome(GetSendCommandByMacProgressResult(outcome.result()));
	else
		return GetSendCommandByMacProgressOutcome(outcome.error());
}

void CloudwfClient::getSendCommandByMacProgressAsync(const GetSendCommandByMacProgressRequest& request, const GetSendCommandByMacProgressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getSendCommandByMacProgress(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::GetSendCommandByMacProgressOutcomeCallable CloudwfClient::getSendCommandByMacProgressCallable(const GetSendCommandByMacProgressRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetSendCommandByMacProgressOutcome()>>(
			[this, request]()
			{
			return this->getSendCommandByMacProgress(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::GetSidsAndGids4BidOutcome CloudwfClient::getSidsAndGids4Bid(const GetSidsAndGids4BidRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetSidsAndGids4BidOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetSidsAndGids4BidOutcome(GetSidsAndGids4BidResult(outcome.result()));
	else
		return GetSidsAndGids4BidOutcome(outcome.error());
}

void CloudwfClient::getSidsAndGids4BidAsync(const GetSidsAndGids4BidRequest& request, const GetSidsAndGids4BidAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getSidsAndGids4Bid(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::GetSidsAndGids4BidOutcomeCallable CloudwfClient::getSidsAndGids4BidCallable(const GetSidsAndGids4BidRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetSidsAndGids4BidOutcome()>>(
			[this, request]()
			{
			return this->getSidsAndGids4Bid(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::GetStaDetailedStatusOutcome CloudwfClient::getStaDetailedStatus(const GetStaDetailedStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetStaDetailedStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetStaDetailedStatusOutcome(GetStaDetailedStatusResult(outcome.result()));
	else
		return GetStaDetailedStatusOutcome(outcome.error());
}

void CloudwfClient::getStaDetailedStatusAsync(const GetStaDetailedStatusRequest& request, const GetStaDetailedStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getStaDetailedStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::GetStaDetailedStatusOutcomeCallable CloudwfClient::getStaDetailedStatusCallable(const GetStaDetailedStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetStaDetailedStatusOutcome()>>(
			[this, request]()
			{
			return this->getStaDetailedStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::GetStaRunHistoryTimeSerOutcome CloudwfClient::getStaRunHistoryTimeSer(const GetStaRunHistoryTimeSerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetStaRunHistoryTimeSerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetStaRunHistoryTimeSerOutcome(GetStaRunHistoryTimeSerResult(outcome.result()));
	else
		return GetStaRunHistoryTimeSerOutcome(outcome.error());
}

void CloudwfClient::getStaRunHistoryTimeSerAsync(const GetStaRunHistoryTimeSerRequest& request, const GetStaRunHistoryTimeSerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getStaRunHistoryTimeSer(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::GetStaRunHistoryTimeSerOutcomeCallable CloudwfClient::getStaRunHistoryTimeSerCallable(const GetStaRunHistoryTimeSerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetStaRunHistoryTimeSerOutcome()>>(
			[this, request]()
			{
			return this->getStaRunHistoryTimeSer(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::GetStaTopOutcome CloudwfClient::getStaTop(const GetStaTopRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetStaTopOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetStaTopOutcome(GetStaTopResult(outcome.result()));
	else
		return GetStaTopOutcome(outcome.error());
}

void CloudwfClient::getStaTopAsync(const GetStaTopRequest& request, const GetStaTopAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getStaTop(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::GetStaTopOutcomeCallable CloudwfClient::getStaTopCallable(const GetStaTopRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetStaTopOutcome()>>(
			[this, request]()
			{
			return this->getStaTop(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::GetSubAccountPermissionOutcome CloudwfClient::getSubAccountPermission(const GetSubAccountPermissionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetSubAccountPermissionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetSubAccountPermissionOutcome(GetSubAccountPermissionResult(outcome.result()));
	else
		return GetSubAccountPermissionOutcome(outcome.error());
}

void CloudwfClient::getSubAccountPermissionAsync(const GetSubAccountPermissionRequest& request, const GetSubAccountPermissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getSubAccountPermission(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::GetSubAccountPermissionOutcomeCallable CloudwfClient::getSubAccountPermissionCallable(const GetSubAccountPermissionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetSubAccountPermissionOutcome()>>(
			[this, request]()
			{
			return this->getSubAccountPermission(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::GetSubAccountStatusOutcome CloudwfClient::getSubAccountStatus(const GetSubAccountStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetSubAccountStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetSubAccountStatusOutcome(GetSubAccountStatusResult(outcome.result()));
	else
		return GetSubAccountStatusOutcome(outcome.error());
}

void CloudwfClient::getSubAccountStatusAsync(const GetSubAccountStatusRequest& request, const GetSubAccountStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getSubAccountStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::GetSubAccountStatusOutcomeCallable CloudwfClient::getSubAccountStatusCallable(const GetSubAccountStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetSubAccountStatusOutcome()>>(
			[this, request]()
			{
			return this->getSubAccountStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::GetUmengPagePermission4RootOutcome CloudwfClient::getUmengPagePermission4Root(const GetUmengPagePermission4RootRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetUmengPagePermission4RootOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetUmengPagePermission4RootOutcome(GetUmengPagePermission4RootResult(outcome.result()));
	else
		return GetUmengPagePermission4RootOutcome(outcome.error());
}

void CloudwfClient::getUmengPagePermission4RootAsync(const GetUmengPagePermission4RootRequest& request, const GetUmengPagePermission4RootAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getUmengPagePermission4Root(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::GetUmengPagePermission4RootOutcomeCallable CloudwfClient::getUmengPagePermission4RootCallable(const GetUmengPagePermission4RootRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetUmengPagePermission4RootOutcome()>>(
			[this, request]()
			{
			return this->getUmengPagePermission4Root(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::GetUpgradeAPGroupProgressOutcome CloudwfClient::getUpgradeAPGroupProgress(const GetUpgradeAPGroupProgressRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetUpgradeAPGroupProgressOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetUpgradeAPGroupProgressOutcome(GetUpgradeAPGroupProgressResult(outcome.result()));
	else
		return GetUpgradeAPGroupProgressOutcome(outcome.error());
}

void CloudwfClient::getUpgradeAPGroupProgressAsync(const GetUpgradeAPGroupProgressRequest& request, const GetUpgradeAPGroupProgressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getUpgradeAPGroupProgress(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::GetUpgradeAPGroupProgressOutcomeCallable CloudwfClient::getUpgradeAPGroupProgressCallable(const GetUpgradeAPGroupProgressRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetUpgradeAPGroupProgressOutcome()>>(
			[this, request]()
			{
			return this->getUpgradeAPGroupProgress(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::GetUpgradeAPProgressOutcome CloudwfClient::getUpgradeAPProgress(const GetUpgradeAPProgressRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetUpgradeAPProgressOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetUpgradeAPProgressOutcome(GetUpgradeAPProgressResult(outcome.result()));
	else
		return GetUpgradeAPProgressOutcome(outcome.error());
}

void CloudwfClient::getUpgradeAPProgressAsync(const GetUpgradeAPProgressRequest& request, const GetUpgradeAPProgressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getUpgradeAPProgress(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::GetUpgradeAPProgressOutcomeCallable CloudwfClient::getUpgradeAPProgressCallable(const GetUpgradeAPProgressRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetUpgradeAPProgressOutcome()>>(
			[this, request]()
			{
			return this->getUpgradeAPProgress(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::GetUpgradeImgOutcome CloudwfClient::getUpgradeImg(const GetUpgradeImgRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetUpgradeImgOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetUpgradeImgOutcome(GetUpgradeImgResult(outcome.result()));
	else
		return GetUpgradeImgOutcome(outcome.error());
}

void CloudwfClient::getUpgradeImgAsync(const GetUpgradeImgRequest& request, const GetUpgradeImgAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getUpgradeImg(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::GetUpgradeImgOutcomeCallable CloudwfClient::getUpgradeImgCallable(const GetUpgradeImgRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetUpgradeImgOutcome()>>(
			[this, request]()
			{
			return this->getUpgradeImg(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::GetUserUmengPagePermissionOutcome CloudwfClient::getUserUmengPagePermission(const GetUserUmengPagePermissionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetUserUmengPagePermissionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetUserUmengPagePermissionOutcome(GetUserUmengPagePermissionResult(outcome.result()));
	else
		return GetUserUmengPagePermissionOutcome(outcome.error());
}

void CloudwfClient::getUserUmengPagePermissionAsync(const GetUserUmengPagePermissionRequest& request, const GetUserUmengPagePermissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getUserUmengPagePermission(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::GetUserUmengPagePermissionOutcomeCallable CloudwfClient::getUserUmengPagePermissionCallable(const GetUserUmengPagePermissionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetUserUmengPagePermissionOutcome()>>(
			[this, request]()
			{
			return this->getUserUmengPagePermission(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::GroupDetailsOutcome CloudwfClient::groupDetails(const GroupDetailsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GroupDetailsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GroupDetailsOutcome(GroupDetailsResult(outcome.result()));
	else
		return GroupDetailsOutcome(outcome.error());
}

void CloudwfClient::groupDetailsAsync(const GroupDetailsRequest& request, const GroupDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, groupDetails(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::GroupDetailsOutcomeCallable CloudwfClient::groupDetailsCallable(const GroupDetailsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GroupDetailsOutcome()>>(
			[this, request]()
			{
			return this->groupDetails(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::GroupIntimeOutcome CloudwfClient::groupIntime(const GroupIntimeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GroupIntimeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GroupIntimeOutcome(GroupIntimeResult(outcome.result()));
	else
		return GroupIntimeOutcome(outcome.error());
}

void CloudwfClient::groupIntimeAsync(const GroupIntimeRequest& request, const GroupIntimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, groupIntime(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::GroupIntimeOutcomeCallable CloudwfClient::groupIntimeCallable(const GroupIntimeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GroupIntimeOutcome()>>(
			[this, request]()
			{
			return this->groupIntime(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::GroupOverviewOutcome CloudwfClient::groupOverview(const GroupOverviewRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GroupOverviewOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GroupOverviewOutcome(GroupOverviewResult(outcome.result()));
	else
		return GroupOverviewOutcome(outcome.error());
}

void CloudwfClient::groupOverviewAsync(const GroupOverviewRequest& request, const GroupOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, groupOverview(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::GroupOverviewOutcomeCallable CloudwfClient::groupOverviewCallable(const GroupOverviewRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GroupOverviewOutcome()>>(
			[this, request]()
			{
			return this->groupOverview(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::GroupTrendOutcome CloudwfClient::groupTrend(const GroupTrendRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GroupTrendOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GroupTrendOutcome(GroupTrendResult(outcome.result()));
	else
		return GroupTrendOutcome(outcome.error());
}

void CloudwfClient::groupTrendAsync(const GroupTrendRequest& request, const GroupTrendAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, groupTrend(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::GroupTrendOutcomeCallable CloudwfClient::groupTrendCallable(const GroupTrendRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GroupTrendOutcome()>>(
			[this, request]()
			{
			return this->groupTrend(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::HeadquartersOverviewOutcome CloudwfClient::headquartersOverview(const HeadquartersOverviewRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return HeadquartersOverviewOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return HeadquartersOverviewOutcome(HeadquartersOverviewResult(outcome.result()));
	else
		return HeadquartersOverviewOutcome(outcome.error());
}

void CloudwfClient::headquartersOverviewAsync(const HeadquartersOverviewRequest& request, const HeadquartersOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, headquartersOverview(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::HeadquartersOverviewOutcomeCallable CloudwfClient::headquartersOverviewCallable(const HeadquartersOverviewRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<HeadquartersOverviewOutcome()>>(
			[this, request]()
			{
			return this->headquartersOverview(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::HeadquartersRankingOutcome CloudwfClient::headquartersRanking(const HeadquartersRankingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return HeadquartersRankingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return HeadquartersRankingOutcome(HeadquartersRankingResult(outcome.result()));
	else
		return HeadquartersRankingOutcome(outcome.error());
}

void CloudwfClient::headquartersRankingAsync(const HeadquartersRankingRequest& request, const HeadquartersRankingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, headquartersRanking(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::HeadquartersRankingOutcomeCallable CloudwfClient::headquartersRankingCallable(const HeadquartersRankingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<HeadquartersRankingOutcome()>>(
			[this, request]()
			{
			return this->headquartersRanking(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::HeadquartersToolsCoincideOutcome CloudwfClient::headquartersToolsCoincide(const HeadquartersToolsCoincideRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return HeadquartersToolsCoincideOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return HeadquartersToolsCoincideOutcome(HeadquartersToolsCoincideResult(outcome.result()));
	else
		return HeadquartersToolsCoincideOutcome(outcome.error());
}

void CloudwfClient::headquartersToolsCoincideAsync(const HeadquartersToolsCoincideRequest& request, const HeadquartersToolsCoincideAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, headquartersToolsCoincide(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::HeadquartersToolsCoincideOutcomeCallable CloudwfClient::headquartersToolsCoincideCallable(const HeadquartersToolsCoincideRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<HeadquartersToolsCoincideOutcome()>>(
			[this, request]()
			{
			return this->headquartersToolsCoincide(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::HeadquartersToolsContrastOutcome CloudwfClient::headquartersToolsContrast(const HeadquartersToolsContrastRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return HeadquartersToolsContrastOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return HeadquartersToolsContrastOutcome(HeadquartersToolsContrastResult(outcome.result()));
	else
		return HeadquartersToolsContrastOutcome(outcome.error());
}

void CloudwfClient::headquartersToolsContrastAsync(const HeadquartersToolsContrastRequest& request, const HeadquartersToolsContrastAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, headquartersToolsContrast(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::HeadquartersToolsContrastOutcomeCallable CloudwfClient::headquartersToolsContrastCallable(const HeadquartersToolsContrastRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<HeadquartersToolsContrastOutcome()>>(
			[this, request]()
			{
			return this->headquartersToolsContrast(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::HeadquartersToolsO2OOutcome CloudwfClient::headquartersToolsO2O(const HeadquartersToolsO2ORequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return HeadquartersToolsO2OOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return HeadquartersToolsO2OOutcome(HeadquartersToolsO2OResult(outcome.result()));
	else
		return HeadquartersToolsO2OOutcome(outcome.error());
}

void CloudwfClient::headquartersToolsO2OAsync(const HeadquartersToolsO2ORequest& request, const HeadquartersToolsO2OAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, headquartersToolsO2O(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::HeadquartersToolsO2OOutcomeCallable CloudwfClient::headquartersToolsO2OCallable(const HeadquartersToolsO2ORequest &request) const
{
	auto task = std::make_shared<std::packaged_task<HeadquartersToolsO2OOutcome()>>(
			[this, request]()
			{
			return this->headquartersToolsO2O(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::HeadquartersTrendOutcome CloudwfClient::headquartersTrend(const HeadquartersTrendRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return HeadquartersTrendOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return HeadquartersTrendOutcome(HeadquartersTrendResult(outcome.result()));
	else
		return HeadquartersTrendOutcome(outcome.error());
}

void CloudwfClient::headquartersTrendAsync(const HeadquartersTrendRequest& request, const HeadquartersTrendAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, headquartersTrend(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::HeadquartersTrendOutcomeCallable CloudwfClient::headquartersTrendCallable(const HeadquartersTrendRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<HeadquartersTrendOutcome()>>(
			[this, request]()
			{
			return this->headquartersTrend(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::InnerCheckOrderOutcome CloudwfClient::innerCheckOrder(const InnerCheckOrderRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return InnerCheckOrderOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return InnerCheckOrderOutcome(InnerCheckOrderResult(outcome.result()));
	else
		return InnerCheckOrderOutcome(outcome.error());
}

void CloudwfClient::innerCheckOrderAsync(const InnerCheckOrderRequest& request, const InnerCheckOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, innerCheckOrder(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::InnerCheckOrderOutcomeCallable CloudwfClient::innerCheckOrderCallable(const InnerCheckOrderRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<InnerCheckOrderOutcome()>>(
			[this, request]()
			{
			return this->innerCheckOrder(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::InnerProduceCloudWFOutcome CloudwfClient::innerProduceCloudWF(const InnerProduceCloudWFRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return InnerProduceCloudWFOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return InnerProduceCloudWFOutcome(InnerProduceCloudWFResult(outcome.result()));
	else
		return InnerProduceCloudWFOutcome(outcome.error());
}

void CloudwfClient::innerProduceCloudWFAsync(const InnerProduceCloudWFRequest& request, const InnerProduceCloudWFAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, innerProduceCloudWF(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::InnerProduceCloudWFOutcomeCallable CloudwfClient::innerProduceCloudWFCallable(const InnerProduceCloudWFRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<InnerProduceCloudWFOutcome()>>(
			[this, request]()
			{
			return this->innerProduceCloudWF(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::InnerRefundOutcome CloudwfClient::innerRefund(const InnerRefundRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return InnerRefundOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return InnerRefundOutcome(InnerRefundResult(outcome.result()));
	else
		return InnerRefundOutcome(outcome.error());
}

void CloudwfClient::innerRefundAsync(const InnerRefundRequest& request, const InnerRefundAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, innerRefund(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::InnerRefundOutcomeCallable CloudwfClient::innerRefundCallable(const InnerRefundRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<InnerRefundOutcome()>>(
			[this, request]()
			{
			return this->innerRefund(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::KickAndClearPMKcacheOutcome CloudwfClient::kickAndClearPMKcache(const KickAndClearPMKcacheRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return KickAndClearPMKcacheOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return KickAndClearPMKcacheOutcome(KickAndClearPMKcacheResult(outcome.result()));
	else
		return KickAndClearPMKcacheOutcome(outcome.error());
}

void CloudwfClient::kickAndClearPMKcacheAsync(const KickAndClearPMKcacheRequest& request, const KickAndClearPMKcacheAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, kickAndClearPMKcache(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::KickAndClearPMKcacheOutcomeCallable CloudwfClient::kickAndClearPMKcacheCallable(const KickAndClearPMKcacheRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<KickAndClearPMKcacheOutcome()>>(
			[this, request]()
			{
			return this->kickAndClearPMKcache(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::KickStaOutcome CloudwfClient::kickSta(const KickStaRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return KickStaOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return KickStaOutcome(KickStaResult(outcome.result()));
	else
		return KickStaOutcome(outcome.error());
}

void CloudwfClient::kickStaAsync(const KickStaRequest& request, const KickStaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, kickSta(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::KickStaOutcomeCallable CloudwfClient::kickStaCallable(const KickStaRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<KickStaOutcome()>>(
			[this, request]()
			{
			return this->kickSta(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::ListAccountConfigOutcome CloudwfClient::listAccountConfig(const ListAccountConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAccountConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAccountConfigOutcome(ListAccountConfigResult(outcome.result()));
	else
		return ListAccountConfigOutcome(outcome.error());
}

void CloudwfClient::listAccountConfigAsync(const ListAccountConfigRequest& request, const ListAccountConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAccountConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::ListAccountConfigOutcomeCallable CloudwfClient::listAccountConfigCallable(const ListAccountConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAccountConfigOutcome()>>(
			[this, request]()
			{
			return this->listAccountConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::ListApAssetOutcome CloudwfClient::listApAsset(const ListApAssetRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListApAssetOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListApAssetOutcome(ListApAssetResult(outcome.result()));
	else
		return ListApAssetOutcome(outcome.error());
}

void CloudwfClient::listApAssetAsync(const ListApAssetRequest& request, const ListApAssetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listApAsset(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::ListApAssetOutcomeCallable CloudwfClient::listApAssetCallable(const ListApAssetRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListApAssetOutcome()>>(
			[this, request]()
			{
			return this->listApAsset(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::ListApAssetCanBeAddedOutcome CloudwfClient::listApAssetCanBeAdded(const ListApAssetCanBeAddedRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListApAssetCanBeAddedOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListApAssetCanBeAddedOutcome(ListApAssetCanBeAddedResult(outcome.result()));
	else
		return ListApAssetCanBeAddedOutcome(outcome.error());
}

void CloudwfClient::listApAssetCanBeAddedAsync(const ListApAssetCanBeAddedRequest& request, const ListApAssetCanBeAddedAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listApAssetCanBeAdded(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::ListApAssetCanBeAddedOutcomeCallable CloudwfClient::listApAssetCanBeAddedCallable(const ListApAssetCanBeAddedRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListApAssetCanBeAddedOutcome()>>(
			[this, request]()
			{
			return this->listApAssetCanBeAdded(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::ListApDetailInfoOutcome CloudwfClient::listApDetailInfo(const ListApDetailInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListApDetailInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListApDetailInfoOutcome(ListApDetailInfoResult(outcome.result()));
	else
		return ListApDetailInfoOutcome(outcome.error());
}

void CloudwfClient::listApDetailInfoAsync(const ListApDetailInfoRequest& request, const ListApDetailInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listApDetailInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::ListApDetailInfoOutcomeCallable CloudwfClient::listApDetailInfoCallable(const ListApDetailInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListApDetailInfoOutcome()>>(
			[this, request]()
			{
			return this->listApDetailInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::ListApPositionOutcome CloudwfClient::listApPosition(const ListApPositionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListApPositionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListApPositionOutcome(ListApPositionResult(outcome.result()));
	else
		return ListApPositionOutcome(outcome.error());
}

void CloudwfClient::listApPositionAsync(const ListApPositionRequest& request, const ListApPositionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listApPosition(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::ListApPositionOutcomeCallable CloudwfClient::listApPositionCallable(const ListApPositionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListApPositionOutcome()>>(
			[this, request]()
			{
			return this->listApPosition(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::ListApPositionMapOutcome CloudwfClient::listApPositionMap(const ListApPositionMapRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListApPositionMapOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListApPositionMapOutcome(ListApPositionMapResult(outcome.result()));
	else
		return ListApPositionMapOutcome(outcome.error());
}

void CloudwfClient::listApPositionMapAsync(const ListApPositionMapRequest& request, const ListApPositionMapAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listApPositionMap(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::ListApPositionMapOutcomeCallable CloudwfClient::listApPositionMapCallable(const ListApPositionMapRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListApPositionMapOutcome()>>(
			[this, request]()
			{
			return this->listApPositionMap(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::ListApPositionStatusOutcome CloudwfClient::listApPositionStatus(const ListApPositionStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListApPositionStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListApPositionStatusOutcome(ListApPositionStatusResult(outcome.result()));
	else
		return ListApPositionStatusOutcome(outcome.error());
}

void CloudwfClient::listApPositionStatusAsync(const ListApPositionStatusRequest& request, const ListApPositionStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listApPositionStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::ListApPositionStatusOutcomeCallable CloudwfClient::listApPositionStatusCallable(const ListApPositionStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListApPositionStatusOutcome()>>(
			[this, request]()
			{
			return this->listApPositionStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::ListApRadioStatusOutcome CloudwfClient::listApRadioStatus(const ListApRadioStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListApRadioStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListApRadioStatusOutcome(ListApRadioStatusResult(outcome.result()));
	else
		return ListApRadioStatusOutcome(outcome.error());
}

void CloudwfClient::listApRadioStatusAsync(const ListApRadioStatusRequest& request, const ListApRadioStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listApRadioStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::ListApRadioStatusOutcomeCallable CloudwfClient::listApRadioStatusCallable(const ListApRadioStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListApRadioStatusOutcome()>>(
			[this, request]()
			{
			return this->listApRadioStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::ListApStaStatusOutcome CloudwfClient::listApStaStatus(const ListApStaStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListApStaStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListApStaStatusOutcome(ListApStaStatusResult(outcome.result()));
	else
		return ListApStaStatusOutcome(outcome.error());
}

void CloudwfClient::listApStaStatusAsync(const ListApStaStatusRequest& request, const ListApStaStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listApStaStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::ListApStaStatusOutcomeCallable CloudwfClient::listApStaStatusCallable(const ListApStaStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListApStaStatusOutcome()>>(
			[this, request]()
			{
			return this->listApStaStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::ListApStatusOutcome CloudwfClient::listApStatus(const ListApStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListApStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListApStatusOutcome(ListApStatusResult(outcome.result()));
	else
		return ListApStatusOutcome(outcome.error());
}

void CloudwfClient::listApStatusAsync(const ListApStatusRequest& request, const ListApStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listApStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::ListApStatusOutcomeCallable CloudwfClient::listApStatusCallable(const ListApStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListApStatusOutcome()>>(
			[this, request]()
			{
			return this->listApStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::ListApUpgradeOutcome CloudwfClient::listApUpgrade(const ListApUpgradeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListApUpgradeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListApUpgradeOutcome(ListApUpgradeResult(outcome.result()));
	else
		return ListApUpgradeOutcome(outcome.error());
}

void CloudwfClient::listApUpgradeAsync(const ListApUpgradeRequest& request, const ListApUpgradeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listApUpgrade(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::ListApUpgradeOutcomeCallable CloudwfClient::listApUpgradeCallable(const ListApUpgradeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListApUpgradeOutcome()>>(
			[this, request]()
			{
			return this->listApUpgrade(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::ListApgroupConfigOutcome CloudwfClient::listApgroupConfig(const ListApgroupConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListApgroupConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListApgroupConfigOutcome(ListApgroupConfigResult(outcome.result()));
	else
		return ListApgroupConfigOutcome(outcome.error());
}

void CloudwfClient::listApgroupConfigAsync(const ListApgroupConfigRequest& request, const ListApgroupConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listApgroupConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::ListApgroupConfigOutcomeCallable CloudwfClient::listApgroupConfigCallable(const ListApgroupConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListApgroupConfigOutcome()>>(
			[this, request]()
			{
			return this->listApgroupConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::ListBriefApConfigOutcome CloudwfClient::listBriefApConfig(const ListBriefApConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListBriefApConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListBriefApConfigOutcome(ListBriefApConfigResult(outcome.result()));
	else
		return ListBriefApConfigOutcome(outcome.error());
}

void CloudwfClient::listBriefApConfigAsync(const ListBriefApConfigRequest& request, const ListBriefApConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listBriefApConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::ListBriefApConfigOutcomeCallable CloudwfClient::listBriefApConfigCallable(const ListBriefApConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListBriefApConfigOutcome()>>(
			[this, request]()
			{
			return this->listBriefApConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::ListBriefConfigByActionOutcome CloudwfClient::listBriefConfigByAction(const ListBriefConfigByActionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListBriefConfigByActionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListBriefConfigByActionOutcome(ListBriefConfigByActionResult(outcome.result()));
	else
		return ListBriefConfigByActionOutcome(outcome.error());
}

void CloudwfClient::listBriefConfigByActionAsync(const ListBriefConfigByActionRequest& request, const ListBriefConfigByActionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listBriefConfigByAction(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::ListBriefConfigByActionOutcomeCallable CloudwfClient::listBriefConfigByActionCallable(const ListBriefConfigByActionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListBriefConfigByActionOutcome()>>(
			[this, request]()
			{
			return this->listBriefConfigByAction(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::ListBusinessDetailsOutcome CloudwfClient::listBusinessDetails(const ListBusinessDetailsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListBusinessDetailsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListBusinessDetailsOutcome(ListBusinessDetailsResult(outcome.result()));
	else
		return ListBusinessDetailsOutcome(outcome.error());
}

void CloudwfClient::listBusinessDetailsAsync(const ListBusinessDetailsRequest& request, const ListBusinessDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listBusinessDetails(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::ListBusinessDetailsOutcomeCallable CloudwfClient::listBusinessDetailsCallable(const ListBusinessDetailsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListBusinessDetailsOutcome()>>(
			[this, request]()
			{
			return this->listBusinessDetails(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::ListBusinessesOutcome CloudwfClient::listBusinesses(const ListBusinessesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListBusinessesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListBusinessesOutcome(ListBusinessesResult(outcome.result()));
	else
		return ListBusinessesOutcome(outcome.error());
}

void CloudwfClient::listBusinessesAsync(const ListBusinessesRequest& request, const ListBusinessesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listBusinesses(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::ListBusinessesOutcomeCallable CloudwfClient::listBusinessesCallable(const ListBusinessesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListBusinessesOutcome()>>(
			[this, request]()
			{
			return this->listBusinesses(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::ListConfigByActionOutcome CloudwfClient::listConfigByAction(const ListConfigByActionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListConfigByActionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListConfigByActionOutcome(ListConfigByActionResult(outcome.result()));
	else
		return ListConfigByActionOutcome(outcome.error());
}

void CloudwfClient::listConfigByActionAsync(const ListConfigByActionRequest& request, const ListConfigByActionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listConfigByAction(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::ListConfigByActionOutcomeCallable CloudwfClient::listConfigByActionCallable(const ListConfigByActionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListConfigByActionOutcome()>>(
			[this, request]()
			{
			return this->listConfigByAction(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::ListGroupApBriefConfigOutcome CloudwfClient::listGroupApBriefConfig(const ListGroupApBriefConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListGroupApBriefConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListGroupApBriefConfigOutcome(ListGroupApBriefConfigResult(outcome.result()));
	else
		return ListGroupApBriefConfigOutcome(outcome.error());
}

void CloudwfClient::listGroupApBriefConfigAsync(const ListGroupApBriefConfigRequest& request, const ListGroupApBriefConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listGroupApBriefConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::ListGroupApBriefConfigOutcomeCallable CloudwfClient::listGroupApBriefConfigCallable(const ListGroupApBriefConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListGroupApBriefConfigOutcome()>>(
			[this, request]()
			{
			return this->listGroupApBriefConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::ListPageConfigTemplateOutcome CloudwfClient::listPageConfigTemplate(const ListPageConfigTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListPageConfigTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListPageConfigTemplateOutcome(ListPageConfigTemplateResult(outcome.result()));
	else
		return ListPageConfigTemplateOutcome(outcome.error());
}

void CloudwfClient::listPageConfigTemplateAsync(const ListPageConfigTemplateRequest& request, const ListPageConfigTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listPageConfigTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::ListPageConfigTemplateOutcomeCallable CloudwfClient::listPageConfigTemplateCallable(const ListPageConfigTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListPageConfigTemplateOutcome()>>(
			[this, request]()
			{
			return this->listPageConfigTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::ListPortalTemplateOutcome CloudwfClient::listPortalTemplate(const ListPortalTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListPortalTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListPortalTemplateOutcome(ListPortalTemplateResult(outcome.result()));
	else
		return ListPortalTemplateOutcome(outcome.error());
}

void CloudwfClient::listPortalTemplateAsync(const ListPortalTemplateRequest& request, const ListPortalTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listPortalTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::ListPortalTemplateOutcomeCallable CloudwfClient::listPortalTemplateCallable(const ListPortalTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListPortalTemplateOutcome()>>(
			[this, request]()
			{
			return this->listPortalTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::ListProbeinfoOutcome CloudwfClient::listProbeinfo(const ListProbeinfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListProbeinfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListProbeinfoOutcome(ListProbeinfoResult(outcome.result()));
	else
		return ListProbeinfoOutcome(outcome.error());
}

void CloudwfClient::listProbeinfoAsync(const ListProbeinfoRequest& request, const ListProbeinfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listProbeinfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::ListProbeinfoOutcomeCallable CloudwfClient::listProbeinfoCallable(const ListProbeinfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListProbeinfoOutcome()>>(
			[this, request]()
			{
			return this->listProbeinfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::ListStaOnoffLogOutcome CloudwfClient::listStaOnoffLog(const ListStaOnoffLogRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListStaOnoffLogOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListStaOnoffLogOutcome(ListStaOnoffLogResult(outcome.result()));
	else
		return ListStaOnoffLogOutcome(outcome.error());
}

void CloudwfClient::listStaOnoffLogAsync(const ListStaOnoffLogRequest& request, const ListStaOnoffLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listStaOnoffLog(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::ListStaOnoffLogOutcomeCallable CloudwfClient::listStaOnoffLogCallable(const ListStaOnoffLogRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListStaOnoffLogOutcome()>>(
			[this, request]()
			{
			return this->listStaOnoffLog(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::ListStaStatusOutcome CloudwfClient::listStaStatus(const ListStaStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListStaStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListStaStatusOutcome(ListStaStatusResult(outcome.result()));
	else
		return ListStaStatusOutcome(outcome.error());
}

void CloudwfClient::listStaStatusAsync(const ListStaStatusRequest& request, const ListStaStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listStaStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::ListStaStatusOutcomeCallable CloudwfClient::listStaStatusCallable(const ListStaStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListStaStatusOutcome()>>(
			[this, request]()
			{
			return this->listStaStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::ListSubAccountPermissionOutcome CloudwfClient::listSubAccountPermission(const ListSubAccountPermissionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListSubAccountPermissionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListSubAccountPermissionOutcome(ListSubAccountPermissionResult(outcome.result()));
	else
		return ListSubAccountPermissionOutcome(outcome.error());
}

void CloudwfClient::listSubAccountPermissionAsync(const ListSubAccountPermissionRequest& request, const ListSubAccountPermissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listSubAccountPermission(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::ListSubAccountPermissionOutcomeCallable CloudwfClient::listSubAccountPermissionCallable(const ListSubAccountPermissionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListSubAccountPermissionOutcome()>>(
			[this, request]()
			{
			return this->listSubAccountPermission(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::ListUmengPagePermission4RootOutcome CloudwfClient::listUmengPagePermission4Root(const ListUmengPagePermission4RootRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListUmengPagePermission4RootOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListUmengPagePermission4RootOutcome(ListUmengPagePermission4RootResult(outcome.result()));
	else
		return ListUmengPagePermission4RootOutcome(outcome.error());
}

void CloudwfClient::listUmengPagePermission4RootAsync(const ListUmengPagePermission4RootRequest& request, const ListUmengPagePermission4RootAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listUmengPagePermission4Root(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::ListUmengPagePermission4RootOutcomeCallable CloudwfClient::listUmengPagePermission4RootCallable(const ListUmengPagePermission4RootRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListUmengPagePermission4RootOutcome()>>(
			[this, request]()
			{
			return this->listUmengPagePermission4Root(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::ListUpgradeImgOutcome CloudwfClient::listUpgradeImg(const ListUpgradeImgRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListUpgradeImgOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListUpgradeImgOutcome(ListUpgradeImgResult(outcome.result()));
	else
		return ListUpgradeImgOutcome(outcome.error());
}

void CloudwfClient::listUpgradeImgAsync(const ListUpgradeImgRequest& request, const ListUpgradeImgAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listUpgradeImg(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::ListUpgradeImgOutcomeCallable CloudwfClient::listUpgradeImgCallable(const ListUpgradeImgRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListUpgradeImgOutcome()>>(
			[this, request]()
			{
			return this->listUpgradeImg(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::ModifySubAccountPermissionOutcome CloudwfClient::modifySubAccountPermission(const ModifySubAccountPermissionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifySubAccountPermissionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifySubAccountPermissionOutcome(ModifySubAccountPermissionResult(outcome.result()));
	else
		return ModifySubAccountPermissionOutcome(outcome.error());
}

void CloudwfClient::modifySubAccountPermissionAsync(const ModifySubAccountPermissionRequest& request, const ModifySubAccountPermissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifySubAccountPermission(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::ModifySubAccountPermissionOutcomeCallable CloudwfClient::modifySubAccountPermissionCallable(const ModifySubAccountPermissionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifySubAccountPermissionOutcome()>>(
			[this, request]()
			{
			return this->modifySubAccountPermission(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::OemFlowrateAnalyseOutcome CloudwfClient::oemFlowrateAnalyse(const OemFlowrateAnalyseRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OemFlowrateAnalyseOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OemFlowrateAnalyseOutcome(OemFlowrateAnalyseResult(outcome.result()));
	else
		return OemFlowrateAnalyseOutcome(outcome.error());
}

void CloudwfClient::oemFlowrateAnalyseAsync(const OemFlowrateAnalyseRequest& request, const OemFlowrateAnalyseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, oemFlowrateAnalyse(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::OemFlowrateAnalyseOutcomeCallable CloudwfClient::oemFlowrateAnalyseCallable(const OemFlowrateAnalyseRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OemFlowrateAnalyseOutcome()>>(
			[this, request]()
			{
			return this->oemFlowrateAnalyse(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::OemFlowrateIntelligentOutcome CloudwfClient::oemFlowrateIntelligent(const OemFlowrateIntelligentRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OemFlowrateIntelligentOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OemFlowrateIntelligentOutcome(OemFlowrateIntelligentResult(outcome.result()));
	else
		return OemFlowrateIntelligentOutcome(outcome.error());
}

void CloudwfClient::oemFlowrateIntelligentAsync(const OemFlowrateIntelligentRequest& request, const OemFlowrateIntelligentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, oemFlowrateIntelligent(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::OemFlowrateIntelligentOutcomeCallable CloudwfClient::oemFlowrateIntelligentCallable(const OemFlowrateIntelligentRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OemFlowrateIntelligentOutcome()>>(
			[this, request]()
			{
			return this->oemFlowrateIntelligent(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::OemFlowrateMonitorOutcome CloudwfClient::oemFlowrateMonitor(const OemFlowrateMonitorRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OemFlowrateMonitorOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OemFlowrateMonitorOutcome(OemFlowrateMonitorResult(outcome.result()));
	else
		return OemFlowrateMonitorOutcome(outcome.error());
}

void CloudwfClient::oemFlowrateMonitorAsync(const OemFlowrateMonitorRequest& request, const OemFlowrateMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, oemFlowrateMonitor(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::OemFlowrateMonitorOutcomeCallable CloudwfClient::oemFlowrateMonitorCallable(const OemFlowrateMonitorRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OemFlowrateMonitorOutcome()>>(
			[this, request]()
			{
			return this->oemFlowrateMonitor(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::OemFlowrateOverviewOutcome CloudwfClient::oemFlowrateOverview(const OemFlowrateOverviewRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OemFlowrateOverviewOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OemFlowrateOverviewOutcome(OemFlowrateOverviewResult(outcome.result()));
	else
		return OemFlowrateOverviewOutcome(outcome.error());
}

void CloudwfClient::oemFlowrateOverviewAsync(const OemFlowrateOverviewRequest& request, const OemFlowrateOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, oemFlowrateOverview(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::OemFlowrateOverviewOutcomeCallable CloudwfClient::oemFlowrateOverviewCallable(const OemFlowrateOverviewRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OemFlowrateOverviewOutcome()>>(
			[this, request]()
			{
			return this->oemFlowrateOverview(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::OemFlowrateRankingOutcome CloudwfClient::oemFlowrateRanking(const OemFlowrateRankingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OemFlowrateRankingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OemFlowrateRankingOutcome(OemFlowrateRankingResult(outcome.result()));
	else
		return OemFlowrateRankingOutcome(outcome.error());
}

void CloudwfClient::oemFlowrateRankingAsync(const OemFlowrateRankingRequest& request, const OemFlowrateRankingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, oemFlowrateRanking(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::OemFlowrateRankingOutcomeCallable CloudwfClient::oemFlowrateRankingCallable(const OemFlowrateRankingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OemFlowrateRankingOutcome()>>(
			[this, request]()
			{
			return this->oemFlowrateRanking(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::OemHeatLineOutcome CloudwfClient::oemHeatLine(const OemHeatLineRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OemHeatLineOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OemHeatLineOutcome(OemHeatLineResult(outcome.result()));
	else
		return OemHeatLineOutcome(outcome.error());
}

void CloudwfClient::oemHeatLineAsync(const OemHeatLineRequest& request, const OemHeatLineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, oemHeatLine(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::OemHeatLineOutcomeCallable CloudwfClient::oemHeatLineCallable(const OemHeatLineRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OemHeatLineOutcome()>>(
			[this, request]()
			{
			return this->oemHeatLine(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::OemHeatMapOutcome CloudwfClient::oemHeatMap(const OemHeatMapRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OemHeatMapOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OemHeatMapOutcome(OemHeatMapResult(outcome.result()));
	else
		return OemHeatMapOutcome(outcome.error());
}

void CloudwfClient::oemHeatMapAsync(const OemHeatMapRequest& request, const OemHeatMapAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, oemHeatMap(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::OemHeatMapOutcomeCallable CloudwfClient::oemHeatMapCallable(const OemHeatMapRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OemHeatMapOutcome()>>(
			[this, request]()
			{
			return this->oemHeatMap(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::OemHeatSettingOutcome CloudwfClient::oemHeatSetting(const OemHeatSettingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OemHeatSettingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OemHeatSettingOutcome(OemHeatSettingResult(outcome.result()));
	else
		return OemHeatSettingOutcome(outcome.error());
}

void CloudwfClient::oemHeatSettingAsync(const OemHeatSettingRequest& request, const OemHeatSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, oemHeatSetting(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::OemHeatSettingOutcomeCallable CloudwfClient::oemHeatSettingCallable(const OemHeatSettingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OemHeatSettingOutcome()>>(
			[this, request]()
			{
			return this->oemHeatSetting(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::OemMarketingCustomerOutcome CloudwfClient::oemMarketingCustomer(const OemMarketingCustomerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OemMarketingCustomerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OemMarketingCustomerOutcome(OemMarketingCustomerResult(outcome.result()));
	else
		return OemMarketingCustomerOutcome(outcome.error());
}

void CloudwfClient::oemMarketingCustomerAsync(const OemMarketingCustomerRequest& request, const OemMarketingCustomerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, oemMarketingCustomer(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::OemMarketingCustomerOutcomeCallable CloudwfClient::oemMarketingCustomerCallable(const OemMarketingCustomerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OemMarketingCustomerOutcome()>>(
			[this, request]()
			{
			return this->oemMarketingCustomer(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::OemMarketingPotentialOutcome CloudwfClient::oemMarketingPotential(const OemMarketingPotentialRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OemMarketingPotentialOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OemMarketingPotentialOutcome(OemMarketingPotentialResult(outcome.result()));
	else
		return OemMarketingPotentialOutcome(outcome.error());
}

void CloudwfClient::oemMarketingPotentialAsync(const OemMarketingPotentialRequest& request, const OemMarketingPotentialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, oemMarketingPotential(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::OemMarketingPotentialOutcomeCallable CloudwfClient::oemMarketingPotentialCallable(const OemMarketingPotentialRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OemMarketingPotentialOutcome()>>(
			[this, request]()
			{
			return this->oemMarketingPotential(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::OemMarketingSettingDataOutcome CloudwfClient::oemMarketingSettingData(const OemMarketingSettingDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OemMarketingSettingDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OemMarketingSettingDataOutcome(OemMarketingSettingDataResult(outcome.result()));
	else
		return OemMarketingSettingDataOutcome(outcome.error());
}

void CloudwfClient::oemMarketingSettingDataAsync(const OemMarketingSettingDataRequest& request, const OemMarketingSettingDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, oemMarketingSettingData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::OemMarketingSettingDataOutcomeCallable CloudwfClient::oemMarketingSettingDataCallable(const OemMarketingSettingDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OemMarketingSettingDataOutcome()>>(
			[this, request]()
			{
			return this->oemMarketingSettingData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::OemSitingContrastOutcome CloudwfClient::oemSitingContrast(const OemSitingContrastRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OemSitingContrastOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OemSitingContrastOutcome(OemSitingContrastResult(outcome.result()));
	else
		return OemSitingContrastOutcome(outcome.error());
}

void CloudwfClient::oemSitingContrastAsync(const OemSitingContrastRequest& request, const OemSitingContrastAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, oemSitingContrast(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::OemSitingContrastOutcomeCallable CloudwfClient::oemSitingContrastCallable(const OemSitingContrastRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OemSitingContrastOutcome()>>(
			[this, request]()
			{
			return this->oemSitingContrast(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::OemSitingSelctionOutcome CloudwfClient::oemSitingSelction(const OemSitingSelctionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OemSitingSelctionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OemSitingSelctionOutcome(OemSitingSelctionResult(outcome.result()));
	else
		return OemSitingSelctionOutcome(outcome.error());
}

void CloudwfClient::oemSitingSelctionAsync(const OemSitingSelctionRequest& request, const OemSitingSelctionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, oemSitingSelction(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::OemSitingSelctionOutcomeCallable CloudwfClient::oemSitingSelctionCallable(const OemSitingSelctionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OemSitingSelctionOutcome()>>(
			[this, request]()
			{
			return this->oemSitingSelction(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::OnoffGroupApRadioOutcome CloudwfClient::onoffGroupApRadio(const OnoffGroupApRadioRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OnoffGroupApRadioOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OnoffGroupApRadioOutcome(OnoffGroupApRadioResult(outcome.result()));
	else
		return OnoffGroupApRadioOutcome(outcome.error());
}

void CloudwfClient::onoffGroupApRadioAsync(const OnoffGroupApRadioRequest& request, const OnoffGroupApRadioAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, onoffGroupApRadio(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::OnoffGroupApRadioOutcomeCallable CloudwfClient::onoffGroupApRadioCallable(const OnoffGroupApRadioRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OnoffGroupApRadioOutcome()>>(
			[this, request]()
			{
			return this->onoffGroupApRadio(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::PeripheryAnalyseOutcome CloudwfClient::peripheryAnalyse(const PeripheryAnalyseRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PeripheryAnalyseOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PeripheryAnalyseOutcome(PeripheryAnalyseResult(outcome.result()));
	else
		return PeripheryAnalyseOutcome(outcome.error());
}

void CloudwfClient::peripheryAnalyseAsync(const PeripheryAnalyseRequest& request, const PeripheryAnalyseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, peripheryAnalyse(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::PeripheryAnalyseOutcomeCallable CloudwfClient::peripheryAnalyseCallable(const PeripheryAnalyseRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PeripheryAnalyseOutcome()>>(
			[this, request]()
			{
			return this->peripheryAnalyse(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::ProduceInstanceOutcome CloudwfClient::produceInstance(const ProduceInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ProduceInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ProduceInstanceOutcome(ProduceInstanceResult(outcome.result()));
	else
		return ProduceInstanceOutcome(outcome.error());
}

void CloudwfClient::produceInstanceAsync(const ProduceInstanceRequest& request, const ProduceInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, produceInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::ProduceInstanceOutcomeCallable CloudwfClient::produceInstanceCallable(const ProduceInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ProduceInstanceOutcome()>>(
			[this, request]()
			{
			return this->produceInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::ProfileBaseOutcome CloudwfClient::profileBase(const ProfileBaseRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ProfileBaseOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ProfileBaseOutcome(ProfileBaseResult(outcome.result()));
	else
		return ProfileBaseOutcome(outcome.error());
}

void CloudwfClient::profileBaseAsync(const ProfileBaseRequest& request, const ProfileBaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, profileBase(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::ProfileBaseOutcomeCallable CloudwfClient::profileBaseCallable(const ProfileBaseRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ProfileBaseOutcome()>>(
			[this, request]()
			{
			return this->profileBase(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::ProfileConsumeOutcome CloudwfClient::profileConsume(const ProfileConsumeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ProfileConsumeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ProfileConsumeOutcome(ProfileConsumeResult(outcome.result()));
	else
		return ProfileConsumeOutcome(outcome.error());
}

void CloudwfClient::profileConsumeAsync(const ProfileConsumeRequest& request, const ProfileConsumeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, profileConsume(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::ProfileConsumeOutcomeCallable CloudwfClient::profileConsumeCallable(const ProfileConsumeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ProfileConsumeOutcome()>>(
			[this, request]()
			{
			return this->profileConsume(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::ProfileDistrictOutcome CloudwfClient::profileDistrict(const ProfileDistrictRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ProfileDistrictOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ProfileDistrictOutcome(ProfileDistrictResult(outcome.result()));
	else
		return ProfileDistrictOutcome(outcome.error());
}

void CloudwfClient::profileDistrictAsync(const ProfileDistrictRequest& request, const ProfileDistrictAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, profileDistrict(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::ProfileDistrictOutcomeCallable CloudwfClient::profileDistrictCallable(const ProfileDistrictRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ProfileDistrictOutcome()>>(
			[this, request]()
			{
			return this->profileDistrict(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::ProfileHistoryOutcome CloudwfClient::profileHistory(const ProfileHistoryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ProfileHistoryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ProfileHistoryOutcome(ProfileHistoryResult(outcome.result()));
	else
		return ProfileHistoryOutcome(outcome.error());
}

void CloudwfClient::profileHistoryAsync(const ProfileHistoryRequest& request, const ProfileHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, profileHistory(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::ProfileHistoryOutcomeCallable CloudwfClient::profileHistoryCallable(const ProfileHistoryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ProfileHistoryOutcome()>>(
			[this, request]()
			{
			return this->profileHistory(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::ProfileHistoryListOutcome CloudwfClient::profileHistoryList(const ProfileHistoryListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ProfileHistoryListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ProfileHistoryListOutcome(ProfileHistoryListResult(outcome.result()));
	else
		return ProfileHistoryListOutcome(outcome.error());
}

void CloudwfClient::profileHistoryListAsync(const ProfileHistoryListRequest& request, const ProfileHistoryListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, profileHistoryList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::ProfileHistoryListOutcomeCallable CloudwfClient::profileHistoryListCallable(const ProfileHistoryListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ProfileHistoryListOutcome()>>(
			[this, request]()
			{
			return this->profileHistoryList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::ProfileMediaOutcome CloudwfClient::profileMedia(const ProfileMediaRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ProfileMediaOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ProfileMediaOutcome(ProfileMediaResult(outcome.result()));
	else
		return ProfileMediaOutcome(outcome.error());
}

void CloudwfClient::profileMediaAsync(const ProfileMediaRequest& request, const ProfileMediaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, profileMedia(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::ProfileMediaOutcomeCallable CloudwfClient::profileMediaCallable(const ProfileMediaRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ProfileMediaOutcome()>>(
			[this, request]()
			{
			return this->profileMedia(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::ProfileTagOutcome CloudwfClient::profileTag(const ProfileTagRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ProfileTagOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ProfileTagOutcome(ProfileTagResult(outcome.result()));
	else
		return ProfileTagOutcome(outcome.error());
}

void CloudwfClient::profileTagAsync(const ProfileTagRequest& request, const ProfileTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, profileTag(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::ProfileTagOutcomeCallable CloudwfClient::profileTagCallable(const ProfileTagRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ProfileTagOutcome()>>(
			[this, request]()
			{
			return this->profileTag(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::ProfileTradeOutcome CloudwfClient::profileTrade(const ProfileTradeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ProfileTradeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ProfileTradeOutcome(ProfileTradeResult(outcome.result()));
	else
		return ProfileTradeOutcome(outcome.error());
}

void CloudwfClient::profileTradeAsync(const ProfileTradeRequest& request, const ProfileTradeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, profileTrade(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::ProfileTradeOutcomeCallable CloudwfClient::profileTradeCallable(const ProfileTradeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ProfileTradeOutcome()>>(
			[this, request]()
			{
			return this->profileTrade(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::PutOssFileOutcome CloudwfClient::putOssFile(const PutOssFileRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PutOssFileOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PutOssFileOutcome(PutOssFileResult(outcome.result()));
	else
		return PutOssFileOutcome(outcome.error());
}

void CloudwfClient::putOssFileAsync(const PutOssFileRequest& request, const PutOssFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, putOssFile(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::PutOssFileOutcomeCallable CloudwfClient::putOssFileCallable(const PutOssFileRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PutOssFileOutcome()>>(
			[this, request]()
			{
			return this->putOssFile(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::QueryRenewPriceOutcome CloudwfClient::queryRenewPrice(const QueryRenewPriceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryRenewPriceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryRenewPriceOutcome(QueryRenewPriceResult(outcome.result()));
	else
		return QueryRenewPriceOutcome(outcome.error());
}

void CloudwfClient::queryRenewPriceAsync(const QueryRenewPriceRequest& request, const QueryRenewPriceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryRenewPrice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::QueryRenewPriceOutcomeCallable CloudwfClient::queryRenewPriceCallable(const QueryRenewPriceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryRenewPriceOutcome()>>(
			[this, request]()
			{
			return this->queryRenewPrice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::ReleaseInstanceOutcome CloudwfClient::releaseInstance(const ReleaseInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ReleaseInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ReleaseInstanceOutcome(ReleaseInstanceResult(outcome.result()));
	else
		return ReleaseInstanceOutcome(outcome.error());
}

void CloudwfClient::releaseInstanceAsync(const ReleaseInstanceRequest& request, const ReleaseInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, releaseInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::ReleaseInstanceOutcomeCallable CloudwfClient::releaseInstanceCallable(const ReleaseInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ReleaseInstanceOutcome()>>(
			[this, request]()
			{
			return this->releaseInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::RepairApOutcome CloudwfClient::repairAp(const RepairApRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RepairApOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RepairApOutcome(RepairApResult(outcome.result()));
	else
		return RepairApOutcome(outcome.error());
}

void CloudwfClient::repairApAsync(const RepairApRequest& request, const RepairApAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, repairAp(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::RepairApOutcomeCallable CloudwfClient::repairApCallable(const RepairApRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RepairApOutcome()>>(
			[this, request]()
			{
			return this->repairAp(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::RepairGroupApOutcome CloudwfClient::repairGroupAp(const RepairGroupApRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RepairGroupApOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RepairGroupApOutcome(RepairGroupApResult(outcome.result()));
	else
		return RepairGroupApOutcome(outcome.error());
}

void CloudwfClient::repairGroupApAsync(const RepairGroupApRequest& request, const RepairGroupApAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, repairGroupAp(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::RepairGroupApOutcomeCallable CloudwfClient::repairGroupApCallable(const RepairGroupApRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RepairGroupApOutcome()>>(
			[this, request]()
			{
			return this->repairGroupAp(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::ReportDayOutcome CloudwfClient::reportDay(const ReportDayRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ReportDayOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ReportDayOutcome(ReportDayResult(outcome.result()));
	else
		return ReportDayOutcome(outcome.error());
}

void CloudwfClient::reportDayAsync(const ReportDayRequest& request, const ReportDayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, reportDay(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::ReportDayOutcomeCallable CloudwfClient::reportDayCallable(const ReportDayRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ReportDayOutcome()>>(
			[this, request]()
			{
			return this->reportDay(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::ReportHourOutcome CloudwfClient::reportHour(const ReportHourRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ReportHourOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ReportHourOutcome(ReportHourResult(outcome.result()));
	else
		return ReportHourOutcome(outcome.error());
}

void CloudwfClient::reportHourAsync(const ReportHourRequest& request, const ReportHourAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, reportHour(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::ReportHourOutcomeCallable CloudwfClient::reportHourCallable(const ReportHourRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ReportHourOutcome()>>(
			[this, request]()
			{
			return this->reportHour(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::ReportMinuteOutcome CloudwfClient::reportMinute(const ReportMinuteRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ReportMinuteOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ReportMinuteOutcome(ReportMinuteResult(outcome.result()));
	else
		return ReportMinuteOutcome(outcome.error());
}

void CloudwfClient::reportMinuteAsync(const ReportMinuteRequest& request, const ReportMinuteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, reportMinute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::ReportMinuteOutcomeCallable CloudwfClient::reportMinuteCallable(const ReportMinuteRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ReportMinuteOutcome()>>(
			[this, request]()
			{
			return this->reportMinute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::ReportRealtimeOutcome CloudwfClient::reportRealtime(const ReportRealtimeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ReportRealtimeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ReportRealtimeOutcome(ReportRealtimeResult(outcome.result()));
	else
		return ReportRealtimeOutcome(outcome.error());
}

void CloudwfClient::reportRealtimeAsync(const ReportRealtimeRequest& request, const ReportRealtimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, reportRealtime(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::ReportRealtimeOutcomeCallable CloudwfClient::reportRealtimeCallable(const ReportRealtimeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ReportRealtimeOutcome()>>(
			[this, request]()
			{
			return this->reportRealtime(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::ReportZoneDayOutcome CloudwfClient::reportZoneDay(const ReportZoneDayRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ReportZoneDayOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ReportZoneDayOutcome(ReportZoneDayResult(outcome.result()));
	else
		return ReportZoneDayOutcome(outcome.error());
}

void CloudwfClient::reportZoneDayAsync(const ReportZoneDayRequest& request, const ReportZoneDayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, reportZoneDay(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::ReportZoneDayOutcomeCallable CloudwfClient::reportZoneDayCallable(const ReportZoneDayRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ReportZoneDayOutcome()>>(
			[this, request]()
			{
			return this->reportZoneDay(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::ReportZoneHourOutcome CloudwfClient::reportZoneHour(const ReportZoneHourRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ReportZoneHourOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ReportZoneHourOutcome(ReportZoneHourResult(outcome.result()));
	else
		return ReportZoneHourOutcome(outcome.error());
}

void CloudwfClient::reportZoneHourAsync(const ReportZoneHourRequest& request, const ReportZoneHourAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, reportZoneHour(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::ReportZoneHourOutcomeCallable CloudwfClient::reportZoneHourCallable(const ReportZoneHourRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ReportZoneHourOutcome()>>(
			[this, request]()
			{
			return this->reportZoneHour(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::ReportZoneMinuteOutcome CloudwfClient::reportZoneMinute(const ReportZoneMinuteRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ReportZoneMinuteOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ReportZoneMinuteOutcome(ReportZoneMinuteResult(outcome.result()));
	else
		return ReportZoneMinuteOutcome(outcome.error());
}

void CloudwfClient::reportZoneMinuteAsync(const ReportZoneMinuteRequest& request, const ReportZoneMinuteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, reportZoneMinute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::ReportZoneMinuteOutcomeCallable CloudwfClient::reportZoneMinuteCallable(const ReportZoneMinuteRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ReportZoneMinuteOutcome()>>(
			[this, request]()
			{
			return this->reportZoneMinute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::ReportZoneRealtimeOutcome CloudwfClient::reportZoneRealtime(const ReportZoneRealtimeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ReportZoneRealtimeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ReportZoneRealtimeOutcome(ReportZoneRealtimeResult(outcome.result()));
	else
		return ReportZoneRealtimeOutcome(outcome.error());
}

void CloudwfClient::reportZoneRealtimeAsync(const ReportZoneRealtimeRequest& request, const ReportZoneRealtimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, reportZoneRealtime(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::ReportZoneRealtimeOutcomeCallable CloudwfClient::reportZoneRealtimeCallable(const ReportZoneRealtimeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ReportZoneRealtimeOutcome()>>(
			[this, request]()
			{
			return this->reportZoneRealtime(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::ResetApOutcome CloudwfClient::resetAp(const ResetApRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ResetApOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ResetApOutcome(ResetApResult(outcome.result()));
	else
		return ResetApOutcome(outcome.error());
}

void CloudwfClient::resetApAsync(const ResetApRequest& request, const ResetApAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, resetAp(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::ResetApOutcomeCallable CloudwfClient::resetApCallable(const ResetApRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ResetApOutcome()>>(
			[this, request]()
			{
			return this->resetAp(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::ResetApConfigOutcome CloudwfClient::resetApConfig(const ResetApConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ResetApConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ResetApConfigOutcome(ResetApConfigResult(outcome.result()));
	else
		return ResetApConfigOutcome(outcome.error());
}

void CloudwfClient::resetApConfigAsync(const ResetApConfigRequest& request, const ResetApConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, resetApConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::ResetApConfigOutcomeCallable CloudwfClient::resetApConfigCallable(const ResetApConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ResetApConfigOutcome()>>(
			[this, request]()
			{
			return this->resetApConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::ResumeInstanceOutcome CloudwfClient::resumeInstance(const ResumeInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ResumeInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ResumeInstanceOutcome(ResumeInstanceResult(outcome.result()));
	else
		return ResumeInstanceOutcome(outcome.error());
}

void CloudwfClient::resumeInstanceAsync(const ResumeInstanceRequest& request, const ResumeInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, resumeInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::ResumeInstanceOutcomeCallable CloudwfClient::resumeInstanceCallable(const ResumeInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ResumeInstanceOutcome()>>(
			[this, request]()
			{
			return this->resumeInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::SaveAccountConfigOutcome CloudwfClient::saveAccountConfig(const SaveAccountConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SaveAccountConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SaveAccountConfigOutcome(SaveAccountConfigResult(outcome.result()));
	else
		return SaveAccountConfigOutcome(outcome.error());
}

void CloudwfClient::saveAccountConfigAsync(const SaveAccountConfigRequest& request, const SaveAccountConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, saveAccountConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::SaveAccountConfigOutcomeCallable CloudwfClient::saveAccountConfigCallable(const SaveAccountConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SaveAccountConfigOutcome()>>(
			[this, request]()
			{
			return this->saveAccountConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::SaveApConfigOutcome CloudwfClient::saveApConfig(const SaveApConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SaveApConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SaveApConfigOutcome(SaveApConfigResult(outcome.result()));
	else
		return SaveApConfigOutcome(outcome.error());
}

void CloudwfClient::saveApConfigAsync(const SaveApConfigRequest& request, const SaveApConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, saveApConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::SaveApConfigOutcomeCallable CloudwfClient::saveApConfigCallable(const SaveApConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SaveApConfigOutcome()>>(
			[this, request]()
			{
			return this->saveApConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::SaveApMapInfoOutcome CloudwfClient::saveApMapInfo(const SaveApMapInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SaveApMapInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SaveApMapInfoOutcome(SaveApMapInfoResult(outcome.result()));
	else
		return SaveApMapInfoOutcome(outcome.error());
}

void CloudwfClient::saveApMapInfoAsync(const SaveApMapInfoRequest& request, const SaveApMapInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, saveApMapInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::SaveApMapInfoOutcomeCallable CloudwfClient::saveApMapInfoCallable(const SaveApMapInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SaveApMapInfoOutcome()>>(
			[this, request]()
			{
			return this->saveApMapInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::SaveApPortalConfigOutcome CloudwfClient::saveApPortalConfig(const SaveApPortalConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SaveApPortalConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SaveApPortalConfigOutcome(SaveApPortalConfigResult(outcome.result()));
	else
		return SaveApPortalConfigOutcome(outcome.error());
}

void CloudwfClient::saveApPortalConfigAsync(const SaveApPortalConfigRequest& request, const SaveApPortalConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, saveApPortalConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::SaveApPortalConfigOutcomeCallable CloudwfClient::saveApPortalConfigCallable(const SaveApPortalConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SaveApPortalConfigOutcome()>>(
			[this, request]()
			{
			return this->saveApPortalConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::SaveApRadioConfigOutcome CloudwfClient::saveApRadioConfig(const SaveApRadioConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SaveApRadioConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SaveApRadioConfigOutcome(SaveApRadioConfigResult(outcome.result()));
	else
		return SaveApRadioConfigOutcome(outcome.error());
}

void CloudwfClient::saveApRadioConfigAsync(const SaveApRadioConfigRequest& request, const SaveApRadioConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, saveApRadioConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::SaveApRadioConfigOutcomeCallable CloudwfClient::saveApRadioConfigCallable(const SaveApRadioConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SaveApRadioConfigOutcome()>>(
			[this, request]()
			{
			return this->saveApRadioConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::SaveApRadioSsidConfigOutcome CloudwfClient::saveApRadioSsidConfig(const SaveApRadioSsidConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SaveApRadioSsidConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SaveApRadioSsidConfigOutcome(SaveApRadioSsidConfigResult(outcome.result()));
	else
		return SaveApRadioSsidConfigOutcome(outcome.error());
}

void CloudwfClient::saveApRadioSsidConfigAsync(const SaveApRadioSsidConfigRequest& request, const SaveApRadioSsidConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, saveApRadioSsidConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::SaveApRadioSsidConfigOutcomeCallable CloudwfClient::saveApRadioSsidConfigCallable(const SaveApRadioSsidConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SaveApRadioSsidConfigOutcome()>>(
			[this, request]()
			{
			return this->saveApRadioSsidConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::SaveApScanConfigOutcome CloudwfClient::saveApScanConfig(const SaveApScanConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SaveApScanConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SaveApScanConfigOutcome(SaveApScanConfigResult(outcome.result()));
	else
		return SaveApScanConfigOutcome(outcome.error());
}

void CloudwfClient::saveApScanConfigAsync(const SaveApScanConfigRequest& request, const SaveApScanConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, saveApScanConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::SaveApScanConfigOutcomeCallable CloudwfClient::saveApScanConfigCallable(const SaveApScanConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SaveApScanConfigOutcome()>>(
			[this, request]()
			{
			return this->saveApScanConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::SaveApgroupConfigOutcome CloudwfClient::saveApgroupConfig(const SaveApgroupConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SaveApgroupConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SaveApgroupConfigOutcome(SaveApgroupConfigResult(outcome.result()));
	else
		return SaveApgroupConfigOutcome(outcome.error());
}

void CloudwfClient::saveApgroupConfigAsync(const SaveApgroupConfigRequest& request, const SaveApgroupConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, saveApgroupConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::SaveApgroupConfigOutcomeCallable CloudwfClient::saveApgroupConfigCallable(const SaveApgroupConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SaveApgroupConfigOutcome()>>(
			[this, request]()
			{
			return this->saveApgroupConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::SaveApgroupScanConfigOutcome CloudwfClient::saveApgroupScanConfig(const SaveApgroupScanConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SaveApgroupScanConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SaveApgroupScanConfigOutcome(SaveApgroupScanConfigResult(outcome.result()));
	else
		return SaveApgroupScanConfigOutcome(outcome.error());
}

void CloudwfClient::saveApgroupScanConfigAsync(const SaveApgroupScanConfigRequest& request, const SaveApgroupScanConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, saveApgroupScanConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::SaveApgroupScanConfigOutcomeCallable CloudwfClient::saveApgroupScanConfigCallable(const SaveApgroupScanConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SaveApgroupScanConfigOutcome()>>(
			[this, request]()
			{
			return this->saveApgroupScanConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::SaveApgroupSsidConfigOutcome CloudwfClient::saveApgroupSsidConfig(const SaveApgroupSsidConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SaveApgroupSsidConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SaveApgroupSsidConfigOutcome(SaveApgroupSsidConfigResult(outcome.result()));
	else
		return SaveApgroupSsidConfigOutcome(outcome.error());
}

void CloudwfClient::saveApgroupSsidConfigAsync(const SaveApgroupSsidConfigRequest& request, const SaveApgroupSsidConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, saveApgroupSsidConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::SaveApgroupSsidConfigOutcomeCallable CloudwfClient::saveApgroupSsidConfigCallable(const SaveApgroupSsidConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SaveApgroupSsidConfigOutcome()>>(
			[this, request]()
			{
			return this->saveApgroupSsidConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::SaveGroupApRadioConfigOutcome CloudwfClient::saveGroupApRadioConfig(const SaveGroupApRadioConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SaveGroupApRadioConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SaveGroupApRadioConfigOutcome(SaveGroupApRadioConfigResult(outcome.result()));
	else
		return SaveGroupApRadioConfigOutcome(outcome.error());
}

void CloudwfClient::saveGroupApRadioConfigAsync(const SaveGroupApRadioConfigRequest& request, const SaveGroupApRadioConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, saveGroupApRadioConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::SaveGroupApRadioConfigOutcomeCallable CloudwfClient::saveGroupApRadioConfigCallable(const SaveGroupApRadioConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SaveGroupApRadioConfigOutcome()>>(
			[this, request]()
			{
			return this->saveGroupApRadioConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::SavePageConfigTemplateOutcome CloudwfClient::savePageConfigTemplate(const SavePageConfigTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SavePageConfigTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SavePageConfigTemplateOutcome(SavePageConfigTemplateResult(outcome.result()));
	else
		return SavePageConfigTemplateOutcome(outcome.error());
}

void CloudwfClient::savePageConfigTemplateAsync(const SavePageConfigTemplateRequest& request, const SavePageConfigTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, savePageConfigTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::SavePageConfigTemplateOutcomeCallable CloudwfClient::savePageConfigTemplateCallable(const SavePageConfigTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SavePageConfigTemplateOutcome()>>(
			[this, request]()
			{
			return this->savePageConfigTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::SavePortalConfigOutcome CloudwfClient::savePortalConfig(const SavePortalConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SavePortalConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SavePortalConfigOutcome(SavePortalConfigResult(outcome.result()));
	else
		return SavePortalConfigOutcome(outcome.error());
}

void CloudwfClient::savePortalConfigAsync(const SavePortalConfigRequest& request, const SavePortalConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, savePortalConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::SavePortalConfigOutcomeCallable CloudwfClient::savePortalConfigCallable(const SavePortalConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SavePortalConfigOutcome()>>(
			[this, request]()
			{
			return this->savePortalConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::SavePortalTemplateOutcome CloudwfClient::savePortalTemplate(const SavePortalTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SavePortalTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SavePortalTemplateOutcome(SavePortalTemplateResult(outcome.result()));
	else
		return SavePortalTemplateOutcome(outcome.error());
}

void CloudwfClient::savePortalTemplateAsync(const SavePortalTemplateRequest& request, const SavePortalTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, savePortalTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::SavePortalTemplateOutcomeCallable CloudwfClient::savePortalTemplateCallable(const SavePortalTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SavePortalTemplateOutcome()>>(
			[this, request]()
			{
			return this->savePortalTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::SaveProbeDataSubscriberOutcome CloudwfClient::saveProbeDataSubscriber(const SaveProbeDataSubscriberRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SaveProbeDataSubscriberOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SaveProbeDataSubscriberOutcome(SaveProbeDataSubscriberResult(outcome.result()));
	else
		return SaveProbeDataSubscriberOutcome(outcome.error());
}

void CloudwfClient::saveProbeDataSubscriberAsync(const SaveProbeDataSubscriberRequest& request, const SaveProbeDataSubscriberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, saveProbeDataSubscriber(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::SaveProbeDataSubscriberOutcomeCallable CloudwfClient::saveProbeDataSubscriberCallable(const SaveProbeDataSubscriberRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SaveProbeDataSubscriberOutcome()>>(
			[this, request]()
			{
			return this->saveProbeDataSubscriber(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::SaveStaStatusOutcome CloudwfClient::saveStaStatus(const SaveStaStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SaveStaStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SaveStaStatusOutcome(SaveStaStatusResult(outcome.result()));
	else
		return SaveStaStatusOutcome(outcome.error());
}

void CloudwfClient::saveStaStatusAsync(const SaveStaStatusRequest& request, const SaveStaStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, saveStaStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::SaveStaStatusOutcomeCallable CloudwfClient::saveStaStatusCallable(const SaveStaStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SaveStaStatusOutcome()>>(
			[this, request]()
			{
			return this->saveStaStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::SaveUmengPagePermission4RootOutcome CloudwfClient::saveUmengPagePermission4Root(const SaveUmengPagePermission4RootRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SaveUmengPagePermission4RootOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SaveUmengPagePermission4RootOutcome(SaveUmengPagePermission4RootResult(outcome.result()));
	else
		return SaveUmengPagePermission4RootOutcome(outcome.error());
}

void CloudwfClient::saveUmengPagePermission4RootAsync(const SaveUmengPagePermission4RootRequest& request, const SaveUmengPagePermission4RootAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, saveUmengPagePermission4Root(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::SaveUmengPagePermission4RootOutcomeCallable CloudwfClient::saveUmengPagePermission4RootCallable(const SaveUmengPagePermission4RootRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SaveUmengPagePermission4RootOutcome()>>(
			[this, request]()
			{
			return this->saveUmengPagePermission4Root(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::SendCommandByMacOutcome CloudwfClient::sendCommandByMac(const SendCommandByMacRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SendCommandByMacOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SendCommandByMacOutcome(SendCommandByMacResult(outcome.result()));
	else
		return SendCommandByMacOutcome(outcome.error());
}

void CloudwfClient::sendCommandByMacAsync(const SendCommandByMacRequest& request, const SendCommandByMacAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, sendCommandByMac(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::SendCommandByMacOutcomeCallable CloudwfClient::sendCommandByMacCallable(const SendCommandByMacRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SendCommandByMacOutcome()>>(
			[this, request]()
			{
			return this->sendCommandByMac(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::SetScanModeOutcome CloudwfClient::setScanMode(const SetScanModeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetScanModeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetScanModeOutcome(SetScanModeResult(outcome.result()));
	else
		return SetScanModeOutcome(outcome.error());
}

void CloudwfClient::setScanModeAsync(const SetScanModeRequest& request, const SetScanModeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setScanMode(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::SetScanModeOutcomeCallable CloudwfClient::setScanModeCallable(const SetScanModeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetScanModeOutcome()>>(
			[this, request]()
			{
			return this->setScanMode(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::SetUpgradeImgByModelOutcome CloudwfClient::setUpgradeImgByModel(const SetUpgradeImgByModelRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetUpgradeImgByModelOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetUpgradeImgByModelOutcome(SetUpgradeImgByModelResult(outcome.result()));
	else
		return SetUpgradeImgByModelOutcome(outcome.error());
}

void CloudwfClient::setUpgradeImgByModelAsync(const SetUpgradeImgByModelRequest& request, const SetUpgradeImgByModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setUpgradeImgByModel(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::SetUpgradeImgByModelOutcomeCallable CloudwfClient::setUpgradeImgByModelCallable(const SetUpgradeImgByModelRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetUpgradeImgByModelOutcome()>>(
			[this, request]()
			{
			return this->setUpgradeImgByModel(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::ShopActionCustomeOutcome CloudwfClient::shopActionCustome(const ShopActionCustomeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ShopActionCustomeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ShopActionCustomeOutcome(ShopActionCustomeResult(outcome.result()));
	else
		return ShopActionCustomeOutcome(outcome.error());
}

void CloudwfClient::shopActionCustomeAsync(const ShopActionCustomeRequest& request, const ShopActionCustomeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, shopActionCustome(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::ShopActionCustomeOutcomeCallable CloudwfClient::shopActionCustomeCallable(const ShopActionCustomeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ShopActionCustomeOutcome()>>(
			[this, request]()
			{
			return this->shopActionCustome(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::ShopActionReturningOutcome CloudwfClient::shopActionReturning(const ShopActionReturningRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ShopActionReturningOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ShopActionReturningOutcome(ShopActionReturningResult(outcome.result()));
	else
		return ShopActionReturningOutcome(outcome.error());
}

void CloudwfClient::shopActionReturningAsync(const ShopActionReturningRequest& request, const ShopActionReturningAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, shopActionReturning(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::ShopActionReturningOutcomeCallable CloudwfClient::shopActionReturningCallable(const ShopActionReturningRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ShopActionReturningOutcome()>>(
			[this, request]()
			{
			return this->shopActionReturning(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::ShopCameraOutcome CloudwfClient::shopCamera(const ShopCameraRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ShopCameraOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ShopCameraOutcome(ShopCameraResult(outcome.result()));
	else
		return ShopCameraOutcome(outcome.error());
}

void CloudwfClient::shopCameraAsync(const ShopCameraRequest& request, const ShopCameraAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, shopCamera(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::ShopCameraOutcomeCallable CloudwfClient::shopCameraCallable(const ShopCameraRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ShopCameraOutcome()>>(
			[this, request]()
			{
			return this->shopCamera(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::ShopCreateOutcome CloudwfClient::shopCreate(const ShopCreateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ShopCreateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ShopCreateOutcome(ShopCreateResult(outcome.result()));
	else
		return ShopCreateOutcome(outcome.error());
}

void CloudwfClient::shopCreateAsync(const ShopCreateRequest& request, const ShopCreateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, shopCreate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::ShopCreateOutcomeCallable CloudwfClient::shopCreateCallable(const ShopCreateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ShopCreateOutcome()>>(
			[this, request]()
			{
			return this->shopCreate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::ShopCreatemarketingOutcome CloudwfClient::shopCreatemarketing(const ShopCreatemarketingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ShopCreatemarketingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ShopCreatemarketingOutcome(ShopCreatemarketingResult(outcome.result()));
	else
		return ShopCreatemarketingOutcome(outcome.error());
}

void CloudwfClient::shopCreatemarketingAsync(const ShopCreatemarketingRequest& request, const ShopCreatemarketingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, shopCreatemarketing(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::ShopCreatemarketingOutcomeCallable CloudwfClient::shopCreatemarketingCallable(const ShopCreatemarketingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ShopCreatemarketingOutcome()>>(
			[this, request]()
			{
			return this->shopCreatemarketing(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::ShopDataAlarmOutcome CloudwfClient::shopDataAlarm(const ShopDataAlarmRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ShopDataAlarmOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ShopDataAlarmOutcome(ShopDataAlarmResult(outcome.result()));
	else
		return ShopDataAlarmOutcome(outcome.error());
}

void CloudwfClient::shopDataAlarmAsync(const ShopDataAlarmRequest& request, const ShopDataAlarmAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, shopDataAlarm(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::ShopDataAlarmOutcomeCallable CloudwfClient::shopDataAlarmCallable(const ShopDataAlarmRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ShopDataAlarmOutcome()>>(
			[this, request]()
			{
			return this->shopDataAlarm(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::ShopDeleteOutcome CloudwfClient::shopDelete(const ShopDeleteRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ShopDeleteOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ShopDeleteOutcome(ShopDeleteResult(outcome.result()));
	else
		return ShopDeleteOutcome(outcome.error());
}

void CloudwfClient::shopDeleteAsync(const ShopDeleteRequest& request, const ShopDeleteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, shopDelete(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::ShopDeleteOutcomeCallable CloudwfClient::shopDeleteCallable(const ShopDeleteRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ShopDeleteOutcome()>>(
			[this, request]()
			{
			return this->shopDelete(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::ShopDeletemarketingOutcome CloudwfClient::shopDeletemarketing(const ShopDeletemarketingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ShopDeletemarketingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ShopDeletemarketingOutcome(ShopDeletemarketingResult(outcome.result()));
	else
		return ShopDeletemarketingOutcome(outcome.error());
}

void CloudwfClient::shopDeletemarketingAsync(const ShopDeletemarketingRequest& request, const ShopDeletemarketingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, shopDeletemarketing(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::ShopDeletemarketingOutcomeCallable CloudwfClient::shopDeletemarketingCallable(const ShopDeletemarketingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ShopDeletemarketingOutcome()>>(
			[this, request]()
			{
			return this->shopDeletemarketing(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::ShopGetfiltermacOutcome CloudwfClient::shopGetfiltermac(const ShopGetfiltermacRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ShopGetfiltermacOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ShopGetfiltermacOutcome(ShopGetfiltermacResult(outcome.result()));
	else
		return ShopGetfiltermacOutcome(outcome.error());
}

void CloudwfClient::shopGetfiltermacAsync(const ShopGetfiltermacRequest& request, const ShopGetfiltermacAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, shopGetfiltermac(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::ShopGetfiltermacOutcomeCallable CloudwfClient::shopGetfiltermacCallable(const ShopGetfiltermacRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ShopGetfiltermacOutcome()>>(
			[this, request]()
			{
			return this->shopGetfiltermac(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::ShopGetredressOutcome CloudwfClient::shopGetredress(const ShopGetredressRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ShopGetredressOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ShopGetredressOutcome(ShopGetredressResult(outcome.result()));
	else
		return ShopGetredressOutcome(outcome.error());
}

void CloudwfClient::shopGetredressAsync(const ShopGetredressRequest& request, const ShopGetredressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, shopGetredress(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::ShopGetredressOutcomeCallable CloudwfClient::shopGetredressCallable(const ShopGetredressRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ShopGetredressOutcome()>>(
			[this, request]()
			{
			return this->shopGetredress(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::ShopGroupCreateOutcome CloudwfClient::shopGroupCreate(const ShopGroupCreateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ShopGroupCreateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ShopGroupCreateOutcome(ShopGroupCreateResult(outcome.result()));
	else
		return ShopGroupCreateOutcome(outcome.error());
}

void CloudwfClient::shopGroupCreateAsync(const ShopGroupCreateRequest& request, const ShopGroupCreateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, shopGroupCreate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::ShopGroupCreateOutcomeCallable CloudwfClient::shopGroupCreateCallable(const ShopGroupCreateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ShopGroupCreateOutcome()>>(
			[this, request]()
			{
			return this->shopGroupCreate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::ShopGroupDeleteOutcome CloudwfClient::shopGroupDelete(const ShopGroupDeleteRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ShopGroupDeleteOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ShopGroupDeleteOutcome(ShopGroupDeleteResult(outcome.result()));
	else
		return ShopGroupDeleteOutcome(outcome.error());
}

void CloudwfClient::shopGroupDeleteAsync(const ShopGroupDeleteRequest& request, const ShopGroupDeleteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, shopGroupDelete(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::ShopGroupDeleteOutcomeCallable CloudwfClient::shopGroupDeleteCallable(const ShopGroupDeleteRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ShopGroupDeleteOutcome()>>(
			[this, request]()
			{
			return this->shopGroupDelete(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::ShopGroupInfoOutcome CloudwfClient::shopGroupInfo(const ShopGroupInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ShopGroupInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ShopGroupInfoOutcome(ShopGroupInfoResult(outcome.result()));
	else
		return ShopGroupInfoOutcome(outcome.error());
}

void CloudwfClient::shopGroupInfoAsync(const ShopGroupInfoRequest& request, const ShopGroupInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, shopGroupInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::ShopGroupInfoOutcomeCallable CloudwfClient::shopGroupInfoCallable(const ShopGroupInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ShopGroupInfoOutcome()>>(
			[this, request]()
			{
			return this->shopGroupInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::ShopGroupShowListOutcome CloudwfClient::shopGroupShowList(const ShopGroupShowListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ShopGroupShowListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ShopGroupShowListOutcome(ShopGroupShowListResult(outcome.result()));
	else
		return ShopGroupShowListOutcome(outcome.error());
}

void CloudwfClient::shopGroupShowListAsync(const ShopGroupShowListRequest& request, const ShopGroupShowListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, shopGroupShowList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::ShopGroupShowListOutcomeCallable CloudwfClient::shopGroupShowListCallable(const ShopGroupShowListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ShopGroupShowListOutcome()>>(
			[this, request]()
			{
			return this->shopGroupShowList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::ShopGroupUpdateOutcome CloudwfClient::shopGroupUpdate(const ShopGroupUpdateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ShopGroupUpdateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ShopGroupUpdateOutcome(ShopGroupUpdateResult(outcome.result()));
	else
		return ShopGroupUpdateOutcome(outcome.error());
}

void CloudwfClient::shopGroupUpdateAsync(const ShopGroupUpdateRequest& request, const ShopGroupUpdateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, shopGroupUpdate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::ShopGroupUpdateOutcomeCallable CloudwfClient::shopGroupUpdateCallable(const ShopGroupUpdateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ShopGroupUpdateOutcome()>>(
			[this, request]()
			{
			return this->shopGroupUpdate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::ShopInfoOutcome CloudwfClient::shopInfo(const ShopInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ShopInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ShopInfoOutcome(ShopInfoResult(outcome.result()));
	else
		return ShopInfoOutcome(outcome.error());
}

void CloudwfClient::shopInfoAsync(const ShopInfoRequest& request, const ShopInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, shopInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::ShopInfoOutcomeCallable CloudwfClient::shopInfoCallable(const ShopInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ShopInfoOutcome()>>(
			[this, request]()
			{
			return this->shopInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::ShopMarketingListOutcome CloudwfClient::shopMarketingList(const ShopMarketingListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ShopMarketingListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ShopMarketingListOutcome(ShopMarketingListResult(outcome.result()));
	else
		return ShopMarketingListOutcome(outcome.error());
}

void CloudwfClient::shopMarketingListAsync(const ShopMarketingListRequest& request, const ShopMarketingListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, shopMarketingList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::ShopMarketingListOutcomeCallable CloudwfClient::shopMarketingListCallable(const ShopMarketingListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ShopMarketingListOutcome()>>(
			[this, request]()
			{
			return this->shopMarketingList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::ShopOverviewOutcome CloudwfClient::shopOverview(const ShopOverviewRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ShopOverviewOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ShopOverviewOutcome(ShopOverviewResult(outcome.result()));
	else
		return ShopOverviewOutcome(outcome.error());
}

void CloudwfClient::shopOverviewAsync(const ShopOverviewRequest& request, const ShopOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, shopOverview(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::ShopOverviewOutcomeCallable CloudwfClient::shopOverviewCallable(const ShopOverviewRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ShopOverviewOutcome()>>(
			[this, request]()
			{
			return this->shopOverview(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::ShopSetfiltermacOutcome CloudwfClient::shopSetfiltermac(const ShopSetfiltermacRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ShopSetfiltermacOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ShopSetfiltermacOutcome(ShopSetfiltermacResult(outcome.result()));
	else
		return ShopSetfiltermacOutcome(outcome.error());
}

void CloudwfClient::shopSetfiltermacAsync(const ShopSetfiltermacRequest& request, const ShopSetfiltermacAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, shopSetfiltermac(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::ShopSetfiltermacOutcomeCallable CloudwfClient::shopSetfiltermacCallable(const ShopSetfiltermacRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ShopSetfiltermacOutcome()>>(
			[this, request]()
			{
			return this->shopSetfiltermac(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::ShopSetredressOutcome CloudwfClient::shopSetredress(const ShopSetredressRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ShopSetredressOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ShopSetredressOutcome(ShopSetredressResult(outcome.result()));
	else
		return ShopSetredressOutcome(outcome.error());
}

void CloudwfClient::shopSetredressAsync(const ShopSetredressRequest& request, const ShopSetredressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, shopSetredress(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::ShopSetredressOutcomeCallable CloudwfClient::shopSetredressCallable(const ShopSetredressRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ShopSetredressOutcome()>>(
			[this, request]()
			{
			return this->shopSetredress(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::ShopShowListOutcome CloudwfClient::shopShowList(const ShopShowListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ShopShowListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ShopShowListOutcome(ShopShowListResult(outcome.result()));
	else
		return ShopShowListOutcome(outcome.error());
}

void CloudwfClient::shopShowListAsync(const ShopShowListRequest& request, const ShopShowListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, shopShowList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::ShopShowListOutcomeCallable CloudwfClient::shopShowListCallable(const ShopShowListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ShopShowListOutcome()>>(
			[this, request]()
			{
			return this->shopShowList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::ShopUpdateOutcome CloudwfClient::shopUpdate(const ShopUpdateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ShopUpdateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ShopUpdateOutcome(ShopUpdateResult(outcome.result()));
	else
		return ShopUpdateOutcome(outcome.error());
}

void CloudwfClient::shopUpdateAsync(const ShopUpdateRequest& request, const ShopUpdateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, shopUpdate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::ShopUpdateOutcomeCallable CloudwfClient::shopUpdateCallable(const ShopUpdateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ShopUpdateOutcome()>>(
			[this, request]()
			{
			return this->shopUpdate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::UpLoadMapOutcome CloudwfClient::upLoadMap(const UpLoadMapRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpLoadMapOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpLoadMapOutcome(UpLoadMapResult(outcome.result()));
	else
		return UpLoadMapOutcome(outcome.error());
}

void CloudwfClient::upLoadMapAsync(const UpLoadMapRequest& request, const UpLoadMapAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, upLoadMap(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::UpLoadMapOutcomeCallable CloudwfClient::upLoadMapCallable(const UpLoadMapRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpLoadMapOutcome()>>(
			[this, request]()
			{
			return this->upLoadMap(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::UpgradeAPOutcome CloudwfClient::upgradeAP(const UpgradeAPRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpgradeAPOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpgradeAPOutcome(UpgradeAPResult(outcome.result()));
	else
		return UpgradeAPOutcome(outcome.error());
}

void CloudwfClient::upgradeAPAsync(const UpgradeAPRequest& request, const UpgradeAPAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, upgradeAP(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::UpgradeAPOutcomeCallable CloudwfClient::upgradeAPCallable(const UpgradeAPRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpgradeAPOutcome()>>(
			[this, request]()
			{
			return this->upgradeAP(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::UpgradeAPGroupOutcome CloudwfClient::upgradeAPGroup(const UpgradeAPGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpgradeAPGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpgradeAPGroupOutcome(UpgradeAPGroupResult(outcome.result()));
	else
		return UpgradeAPGroupOutcome(outcome.error());
}

void CloudwfClient::upgradeAPGroupAsync(const UpgradeAPGroupRequest& request, const UpgradeAPGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, upgradeAPGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::UpgradeAPGroupOutcomeCallable CloudwfClient::upgradeAPGroupCallable(const UpgradeAPGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpgradeAPGroupOutcome()>>(
			[this, request]()
			{
			return this->upgradeAPGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::UserAnalyseOutcome CloudwfClient::userAnalyse(const UserAnalyseRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UserAnalyseOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UserAnalyseOutcome(UserAnalyseResult(outcome.result()));
	else
		return UserAnalyseOutcome(outcome.error());
}

void CloudwfClient::userAnalyseAsync(const UserAnalyseRequest& request, const UserAnalyseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, userAnalyse(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::UserAnalyseOutcomeCallable CloudwfClient::userAnalyseCallable(const UserAnalyseRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UserAnalyseOutcome()>>(
			[this, request]()
			{
			return this->userAnalyse(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::UserDataCreateOutcome CloudwfClient::userDataCreate(const UserDataCreateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UserDataCreateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UserDataCreateOutcome(UserDataCreateResult(outcome.result()));
	else
		return UserDataCreateOutcome(outcome.error());
}

void CloudwfClient::userDataCreateAsync(const UserDataCreateRequest& request, const UserDataCreateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, userDataCreate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::UserDataCreateOutcomeCallable CloudwfClient::userDataCreateCallable(const UserDataCreateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UserDataCreateOutcome()>>(
			[this, request]()
			{
			return this->userDataCreate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::UserDataDeleteOutcome CloudwfClient::userDataDelete(const UserDataDeleteRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UserDataDeleteOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UserDataDeleteOutcome(UserDataDeleteResult(outcome.result()));
	else
		return UserDataDeleteOutcome(outcome.error());
}

void CloudwfClient::userDataDeleteAsync(const UserDataDeleteRequest& request, const UserDataDeleteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, userDataDelete(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::UserDataDeleteOutcomeCallable CloudwfClient::userDataDeleteCallable(const UserDataDeleteRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UserDataDeleteOutcome()>>(
			[this, request]()
			{
			return this->userDataDelete(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::UserDataShowListOutcome CloudwfClient::userDataShowList(const UserDataShowListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UserDataShowListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UserDataShowListOutcome(UserDataShowListResult(outcome.result()));
	else
		return UserDataShowListOutcome(outcome.error());
}

void CloudwfClient::userDataShowListAsync(const UserDataShowListRequest& request, const UserDataShowListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, userDataShowList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::UserDataShowListOutcomeCallable CloudwfClient::userDataShowListCallable(const UserDataShowListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UserDataShowListOutcome()>>(
			[this, request]()
			{
			return this->userDataShowList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudwfClient::UserDataUpdateOutcome CloudwfClient::userDataUpdate(const UserDataUpdateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UserDataUpdateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UserDataUpdateOutcome(UserDataUpdateResult(outcome.result()));
	else
		return UserDataUpdateOutcome(outcome.error());
}

void CloudwfClient::userDataUpdateAsync(const UserDataUpdateRequest& request, const UserDataUpdateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, userDataUpdate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudwfClient::UserDataUpdateOutcomeCallable CloudwfClient::userDataUpdateCallable(const UserDataUpdateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UserDataUpdateOutcome()>>(
			[this, request]()
			{
			return this->userDataUpdate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

