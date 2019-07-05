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

#include <alibabacloud/green/GreenClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Green;
using namespace AlibabaCloud::Green::Model;

namespace
{
	const std::string SERVICE_NAME = "Green";
}

GreenClient::GreenClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "green");
}

GreenClient::GreenClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "green");
}

GreenClient::GreenClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "green");
}

GreenClient::~GreenClient()
{}

GreenClient::DescribeWebsiteIndexPageBaselineOutcome GreenClient::describeWebsiteIndexPageBaseline(const DescribeWebsiteIndexPageBaselineRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeWebsiteIndexPageBaselineOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeWebsiteIndexPageBaselineOutcome(DescribeWebsiteIndexPageBaselineResult(outcome.result()));
	else
		return DescribeWebsiteIndexPageBaselineOutcome(outcome.error());
}

void GreenClient::describeWebsiteIndexPageBaselineAsync(const DescribeWebsiteIndexPageBaselineRequest& request, const DescribeWebsiteIndexPageBaselineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeWebsiteIndexPageBaseline(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GreenClient::DescribeWebsiteIndexPageBaselineOutcomeCallable GreenClient::describeWebsiteIndexPageBaselineCallable(const DescribeWebsiteIndexPageBaselineRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeWebsiteIndexPageBaselineOutcome()>>(
			[this, request]()
			{
			return this->describeWebsiteIndexPageBaseline(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GreenClient::VerifyCustomOcrTemplateOutcome GreenClient::verifyCustomOcrTemplate(const VerifyCustomOcrTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return VerifyCustomOcrTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return VerifyCustomOcrTemplateOutcome(VerifyCustomOcrTemplateResult(outcome.result()));
	else
		return VerifyCustomOcrTemplateOutcome(outcome.error());
}

void GreenClient::verifyCustomOcrTemplateAsync(const VerifyCustomOcrTemplateRequest& request, const VerifyCustomOcrTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, verifyCustomOcrTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GreenClient::VerifyCustomOcrTemplateOutcomeCallable GreenClient::verifyCustomOcrTemplateCallable(const VerifyCustomOcrTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<VerifyCustomOcrTemplateOutcome()>>(
			[this, request]()
			{
			return this->verifyCustomOcrTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GreenClient::DescribeOssIncrementCheckSettingOutcome GreenClient::describeOssIncrementCheckSetting(const DescribeOssIncrementCheckSettingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeOssIncrementCheckSettingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeOssIncrementCheckSettingOutcome(DescribeOssIncrementCheckSettingResult(outcome.result()));
	else
		return DescribeOssIncrementCheckSettingOutcome(outcome.error());
}

void GreenClient::describeOssIncrementCheckSettingAsync(const DescribeOssIncrementCheckSettingRequest& request, const DescribeOssIncrementCheckSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeOssIncrementCheckSetting(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GreenClient::DescribeOssIncrementCheckSettingOutcomeCallable GreenClient::describeOssIncrementCheckSettingCallable(const DescribeOssIncrementCheckSettingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeOssIncrementCheckSettingOutcome()>>(
			[this, request]()
			{
			return this->describeOssIncrementCheckSetting(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GreenClient::DescribeWebsiteScanResultOutcome GreenClient::describeWebsiteScanResult(const DescribeWebsiteScanResultRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeWebsiteScanResultOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeWebsiteScanResultOutcome(DescribeWebsiteScanResultResult(outcome.result()));
	else
		return DescribeWebsiteScanResultOutcome(outcome.error());
}

void GreenClient::describeWebsiteScanResultAsync(const DescribeWebsiteScanResultRequest& request, const DescribeWebsiteScanResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeWebsiteScanResult(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GreenClient::DescribeWebsiteScanResultOutcomeCallable GreenClient::describeWebsiteScanResultCallable(const DescribeWebsiteScanResultRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeWebsiteScanResultOutcome()>>(
			[this, request]()
			{
			return this->describeWebsiteScanResult(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GreenClient::UpdateAppPackageOutcome GreenClient::updateAppPackage(const UpdateAppPackageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateAppPackageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateAppPackageOutcome(UpdateAppPackageResult(outcome.result()));
	else
		return UpdateAppPackageOutcome(outcome.error());
}

void GreenClient::updateAppPackageAsync(const UpdateAppPackageRequest& request, const UpdateAppPackageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateAppPackage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GreenClient::UpdateAppPackageOutcomeCallable GreenClient::updateAppPackageCallable(const UpdateAppPackageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateAppPackageOutcome()>>(
			[this, request]()
			{
			return this->updateAppPackage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GreenClient::DeleteVideoDnaGroupOutcome GreenClient::deleteVideoDnaGroup(const DeleteVideoDnaGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteVideoDnaGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteVideoDnaGroupOutcome(DeleteVideoDnaGroupResult(outcome.result()));
	else
		return DeleteVideoDnaGroupOutcome(outcome.error());
}

void GreenClient::deleteVideoDnaGroupAsync(const DeleteVideoDnaGroupRequest& request, const DeleteVideoDnaGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteVideoDnaGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GreenClient::DeleteVideoDnaGroupOutcomeCallable GreenClient::deleteVideoDnaGroupCallable(const DeleteVideoDnaGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteVideoDnaGroupOutcome()>>(
			[this, request]()
			{
			return this->deleteVideoDnaGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GreenClient::UpdateOssCallbackSettingOutcome GreenClient::updateOssCallbackSetting(const UpdateOssCallbackSettingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateOssCallbackSettingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateOssCallbackSettingOutcome(UpdateOssCallbackSettingResult(outcome.result()));
	else
		return UpdateOssCallbackSettingOutcome(outcome.error());
}

void GreenClient::updateOssCallbackSettingAsync(const UpdateOssCallbackSettingRequest& request, const UpdateOssCallbackSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateOssCallbackSetting(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GreenClient::UpdateOssCallbackSettingOutcomeCallable GreenClient::updateOssCallbackSettingCallable(const UpdateOssCallbackSettingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateOssCallbackSettingOutcome()>>(
			[this, request]()
			{
			return this->updateOssCallbackSetting(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GreenClient::DescribeWebsiteInstanceKeyUrlOutcome GreenClient::describeWebsiteInstanceKeyUrl(const DescribeWebsiteInstanceKeyUrlRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeWebsiteInstanceKeyUrlOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeWebsiteInstanceKeyUrlOutcome(DescribeWebsiteInstanceKeyUrlResult(outcome.result()));
	else
		return DescribeWebsiteInstanceKeyUrlOutcome(outcome.error());
}

void GreenClient::describeWebsiteInstanceKeyUrlAsync(const DescribeWebsiteInstanceKeyUrlRequest& request, const DescribeWebsiteInstanceKeyUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeWebsiteInstanceKeyUrl(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GreenClient::DescribeWebsiteInstanceKeyUrlOutcomeCallable GreenClient::describeWebsiteInstanceKeyUrlCallable(const DescribeWebsiteInstanceKeyUrlRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeWebsiteInstanceKeyUrlOutcome()>>(
			[this, request]()
			{
			return this->describeWebsiteInstanceKeyUrl(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GreenClient::DeleteVideoDnaOutcome GreenClient::deleteVideoDna(const DeleteVideoDnaRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteVideoDnaOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteVideoDnaOutcome(DeleteVideoDnaResult(outcome.result()));
	else
		return DeleteVideoDnaOutcome(outcome.error());
}

void GreenClient::deleteVideoDnaAsync(const DeleteVideoDnaRequest& request, const DeleteVideoDnaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteVideoDna(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GreenClient::DeleteVideoDnaOutcomeCallable GreenClient::deleteVideoDnaCallable(const DeleteVideoDnaRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteVideoDnaOutcome()>>(
			[this, request]()
			{
			return this->deleteVideoDna(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GreenClient::RefundCdiBaseBagOutcome GreenClient::refundCdiBaseBag(const RefundCdiBaseBagRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RefundCdiBaseBagOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RefundCdiBaseBagOutcome(RefundCdiBaseBagResult(outcome.result()));
	else
		return RefundCdiBaseBagOutcome(outcome.error());
}

void GreenClient::refundCdiBaseBagAsync(const RefundCdiBaseBagRequest& request, const RefundCdiBaseBagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, refundCdiBaseBag(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GreenClient::RefundCdiBaseBagOutcomeCallable GreenClient::refundCdiBaseBagCallable(const RefundCdiBaseBagRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RefundCdiBaseBagOutcome()>>(
			[this, request]()
			{
			return this->refundCdiBaseBag(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GreenClient::UpdateBizTypeSettingOutcome GreenClient::updateBizTypeSetting(const UpdateBizTypeSettingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateBizTypeSettingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateBizTypeSettingOutcome(UpdateBizTypeSettingResult(outcome.result()));
	else
		return UpdateBizTypeSettingOutcome(outcome.error());
}

void GreenClient::updateBizTypeSettingAsync(const UpdateBizTypeSettingRequest& request, const UpdateBizTypeSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateBizTypeSetting(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GreenClient::UpdateBizTypeSettingOutcomeCallable GreenClient::updateBizTypeSettingCallable(const UpdateBizTypeSettingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateBizTypeSettingOutcome()>>(
			[this, request]()
			{
			return this->updateBizTypeSetting(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GreenClient::FileAsyncScanOutcome GreenClient::fileAsyncScan(const FileAsyncScanRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return FileAsyncScanOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return FileAsyncScanOutcome(FileAsyncScanResult(outcome.result()));
	else
		return FileAsyncScanOutcome(outcome.error());
}

void GreenClient::fileAsyncScanAsync(const FileAsyncScanRequest& request, const FileAsyncScanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, fileAsyncScan(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GreenClient::FileAsyncScanOutcomeCallable GreenClient::fileAsyncScanCallable(const FileAsyncScanRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<FileAsyncScanOutcome()>>(
			[this, request]()
			{
			return this->fileAsyncScan(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GreenClient::DescribeOssResultItemsOutcome GreenClient::describeOssResultItems(const DescribeOssResultItemsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeOssResultItemsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeOssResultItemsOutcome(DescribeOssResultItemsResult(outcome.result()));
	else
		return DescribeOssResultItemsOutcome(outcome.error());
}

void GreenClient::describeOssResultItemsAsync(const DescribeOssResultItemsRequest& request, const DescribeOssResultItemsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeOssResultItems(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GreenClient::DescribeOssResultItemsOutcomeCallable GreenClient::describeOssResultItemsCallable(const DescribeOssResultItemsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeOssResultItemsOutcome()>>(
			[this, request]()
			{
			return this->describeOssResultItems(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GreenClient::UpdateWebsiteInstanceStatusOutcome GreenClient::updateWebsiteInstanceStatus(const UpdateWebsiteInstanceStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateWebsiteInstanceStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateWebsiteInstanceStatusOutcome(UpdateWebsiteInstanceStatusResult(outcome.result()));
	else
		return UpdateWebsiteInstanceStatusOutcome(outcome.error());
}

void GreenClient::updateWebsiteInstanceStatusAsync(const UpdateWebsiteInstanceStatusRequest& request, const UpdateWebsiteInstanceStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateWebsiteInstanceStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GreenClient::UpdateWebsiteInstanceStatusOutcomeCallable GreenClient::updateWebsiteInstanceStatusCallable(const UpdateWebsiteInstanceStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateWebsiteInstanceStatusOutcome()>>(
			[this, request]()
			{
			return this->updateWebsiteInstanceStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GreenClient::DescribeBizTypesOutcome GreenClient::describeBizTypes(const DescribeBizTypesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeBizTypesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeBizTypesOutcome(DescribeBizTypesResult(outcome.result()));
	else
		return DescribeBizTypesOutcome(outcome.error());
}

void GreenClient::describeBizTypesAsync(const DescribeBizTypesRequest& request, const DescribeBizTypesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeBizTypes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GreenClient::DescribeBizTypesOutcomeCallable GreenClient::describeBizTypesCallable(const DescribeBizTypesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeBizTypesOutcome()>>(
			[this, request]()
			{
			return this->describeBizTypes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GreenClient::RefundCdiBagOutcome GreenClient::refundCdiBag(const RefundCdiBagRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RefundCdiBagOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RefundCdiBagOutcome(RefundCdiBagResult(outcome.result()));
	else
		return RefundCdiBagOutcome(outcome.error());
}

void GreenClient::refundCdiBagAsync(const RefundCdiBagRequest& request, const RefundCdiBagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, refundCdiBag(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GreenClient::RefundCdiBagOutcomeCallable GreenClient::refundCdiBagCallable(const RefundCdiBagRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RefundCdiBagOutcome()>>(
			[this, request]()
			{
			return this->refundCdiBag(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GreenClient::DeleteImageFromLibOutcome GreenClient::deleteImageFromLib(const DeleteImageFromLibRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteImageFromLibOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteImageFromLibOutcome(DeleteImageFromLibResult(outcome.result()));
	else
		return DeleteImageFromLibOutcome(outcome.error());
}

void GreenClient::deleteImageFromLibAsync(const DeleteImageFromLibRequest& request, const DeleteImageFromLibAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteImageFromLib(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GreenClient::DeleteImageFromLibOutcomeCallable GreenClient::deleteImageFromLibCallable(const DeleteImageFromLibRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteImageFromLibOutcome()>>(
			[this, request]()
			{
			return this->deleteImageFromLib(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GreenClient::CreateCdiBaseBagOutcome GreenClient::createCdiBaseBag(const CreateCdiBaseBagRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateCdiBaseBagOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateCdiBaseBagOutcome(CreateCdiBaseBagResult(outcome.result()));
	else
		return CreateCdiBaseBagOutcome(outcome.error());
}

void GreenClient::createCdiBaseBagAsync(const CreateCdiBaseBagRequest& request, const CreateCdiBaseBagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createCdiBaseBag(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GreenClient::CreateCdiBaseBagOutcomeCallable GreenClient::createCdiBaseBagCallable(const CreateCdiBaseBagRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateCdiBaseBagOutcome()>>(
			[this, request]()
			{
			return this->createCdiBaseBag(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GreenClient::VerifyPhoneOutcome GreenClient::verifyPhone(const VerifyPhoneRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return VerifyPhoneOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return VerifyPhoneOutcome(VerifyPhoneResult(outcome.result()));
	else
		return VerifyPhoneOutcome(outcome.error());
}

void GreenClient::verifyPhoneAsync(const VerifyPhoneRequest& request, const VerifyPhoneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, verifyPhone(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GreenClient::VerifyPhoneOutcomeCallable GreenClient::verifyPhoneCallable(const VerifyPhoneRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<VerifyPhoneOutcome()>>(
			[this, request]()
			{
			return this->verifyPhone(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GreenClient::ImageDetectionOutcome GreenClient::imageDetection(const ImageDetectionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ImageDetectionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ImageDetectionOutcome(ImageDetectionResult(outcome.result()));
	else
		return ImageDetectionOutcome(outcome.error());
}

void GreenClient::imageDetectionAsync(const ImageDetectionRequest& request, const ImageDetectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, imageDetection(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GreenClient::ImageDetectionOutcomeCallable GreenClient::imageDetectionCallable(const ImageDetectionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ImageDetectionOutcome()>>(
			[this, request]()
			{
			return this->imageDetection(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GreenClient::DeleteKeywordLibOutcome GreenClient::deleteKeywordLib(const DeleteKeywordLibRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteKeywordLibOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteKeywordLibOutcome(DeleteKeywordLibResult(outcome.result()));
	else
		return DeleteKeywordLibOutcome(outcome.error());
}

void GreenClient::deleteKeywordLibAsync(const DeleteKeywordLibRequest& request, const DeleteKeywordLibAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteKeywordLib(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GreenClient::DeleteKeywordLibOutcomeCallable GreenClient::deleteKeywordLibCallable(const DeleteKeywordLibRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteKeywordLibOutcome()>>(
			[this, request]()
			{
			return this->deleteKeywordLib(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GreenClient::ImportKeywordsOutcome GreenClient::importKeywords(const ImportKeywordsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ImportKeywordsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ImportKeywordsOutcome(ImportKeywordsResult(outcome.result()));
	else
		return ImportKeywordsOutcome(outcome.error());
}

void GreenClient::importKeywordsAsync(const ImportKeywordsRequest& request, const ImportKeywordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, importKeywords(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GreenClient::ImportKeywordsOutcomeCallable GreenClient::importKeywordsCallable(const ImportKeywordsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ImportKeywordsOutcome()>>(
			[this, request]()
			{
			return this->importKeywords(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GreenClient::VoiceCancelScanOutcome GreenClient::voiceCancelScan(const VoiceCancelScanRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return VoiceCancelScanOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return VoiceCancelScanOutcome(VoiceCancelScanResult(outcome.result()));
	else
		return VoiceCancelScanOutcome(outcome.error());
}

void GreenClient::voiceCancelScanAsync(const VoiceCancelScanRequest& request, const VoiceCancelScanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, voiceCancelScan(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GreenClient::VoiceCancelScanOutcomeCallable GreenClient::voiceCancelScanCallable(const VoiceCancelScanRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<VoiceCancelScanOutcome()>>(
			[this, request]()
			{
			return this->voiceCancelScan(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GreenClient::SendWebsiteFeedbackOutcome GreenClient::sendWebsiteFeedback(const SendWebsiteFeedbackRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SendWebsiteFeedbackOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SendWebsiteFeedbackOutcome(SendWebsiteFeedbackResult(outcome.result()));
	else
		return SendWebsiteFeedbackOutcome(outcome.error());
}

void GreenClient::sendWebsiteFeedbackAsync(const SendWebsiteFeedbackRequest& request, const SendWebsiteFeedbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, sendWebsiteFeedback(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GreenClient::SendWebsiteFeedbackOutcomeCallable GreenClient::sendWebsiteFeedbackCallable(const SendWebsiteFeedbackRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SendWebsiteFeedbackOutcome()>>(
			[this, request]()
			{
			return this->sendWebsiteFeedback(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GreenClient::DescribeImageFromLibOutcome GreenClient::describeImageFromLib(const DescribeImageFromLibRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeImageFromLibOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeImageFromLibOutcome(DescribeImageFromLibResult(outcome.result()));
	else
		return DescribeImageFromLibOutcome(outcome.error());
}

void GreenClient::describeImageFromLibAsync(const DescribeImageFromLibRequest& request, const DescribeImageFromLibAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeImageFromLib(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GreenClient::DescribeImageFromLibOutcomeCallable GreenClient::describeImageFromLibCallable(const DescribeImageFromLibRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeImageFromLibOutcome()>>(
			[this, request]()
			{
			return this->describeImageFromLib(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GreenClient::RenewWebSiteInstanceOutcome GreenClient::renewWebSiteInstance(const RenewWebSiteInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RenewWebSiteInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RenewWebSiteInstanceOutcome(RenewWebSiteInstanceResult(outcome.result()));
	else
		return RenewWebSiteInstanceOutcome(outcome.error());
}

void GreenClient::renewWebSiteInstanceAsync(const RenewWebSiteInstanceRequest& request, const RenewWebSiteInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, renewWebSiteInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GreenClient::RenewWebSiteInstanceOutcomeCallable GreenClient::renewWebSiteInstanceCallable(const RenewWebSiteInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RenewWebSiteInstanceOutcome()>>(
			[this, request]()
			{
			return this->renewWebSiteInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GreenClient::DescribeViewContentOutcome GreenClient::describeViewContent(const DescribeViewContentRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeViewContentOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeViewContentOutcome(DescribeViewContentResult(outcome.result()));
	else
		return DescribeViewContentOutcome(outcome.error());
}

void GreenClient::describeViewContentAsync(const DescribeViewContentRequest& request, const DescribeViewContentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeViewContent(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GreenClient::DescribeViewContentOutcomeCallable GreenClient::describeViewContentCallable(const DescribeViewContentRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeViewContentOutcome()>>(
			[this, request]()
			{
			return this->describeViewContent(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GreenClient::VoiceIdentityRegisterOutcome GreenClient::voiceIdentityRegister(const VoiceIdentityRegisterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return VoiceIdentityRegisterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return VoiceIdentityRegisterOutcome(VoiceIdentityRegisterResult(outcome.result()));
	else
		return VoiceIdentityRegisterOutcome(outcome.error());
}

void GreenClient::voiceIdentityRegisterAsync(const VoiceIdentityRegisterRequest& request, const VoiceIdentityRegisterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, voiceIdentityRegister(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GreenClient::VoiceIdentityRegisterOutcomeCallable GreenClient::voiceIdentityRegisterCallable(const VoiceIdentityRegisterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<VoiceIdentityRegisterOutcome()>>(
			[this, request]()
			{
			return this->voiceIdentityRegister(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GreenClient::DescribeWebsiteStatOutcome GreenClient::describeWebsiteStat(const DescribeWebsiteStatRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeWebsiteStatOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeWebsiteStatOutcome(DescribeWebsiteStatResult(outcome.result()));
	else
		return DescribeWebsiteStatOutcome(outcome.error());
}

void GreenClient::describeWebsiteStatAsync(const DescribeWebsiteStatRequest& request, const DescribeWebsiteStatAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeWebsiteStat(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GreenClient::DescribeWebsiteStatOutcomeCallable GreenClient::describeWebsiteStatCallable(const DescribeWebsiteStatRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeWebsiteStatOutcome()>>(
			[this, request]()
			{
			return this->describeWebsiteStat(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GreenClient::UpdateNotificationSettingOutcome GreenClient::updateNotificationSetting(const UpdateNotificationSettingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateNotificationSettingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateNotificationSettingOutcome(UpdateNotificationSettingResult(outcome.result()));
	else
		return UpdateNotificationSettingOutcome(outcome.error());
}

void GreenClient::updateNotificationSettingAsync(const UpdateNotificationSettingRequest& request, const UpdateNotificationSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateNotificationSetting(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GreenClient::UpdateNotificationSettingOutcomeCallable GreenClient::updateNotificationSettingCallable(const UpdateNotificationSettingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateNotificationSettingOutcome()>>(
			[this, request]()
			{
			return this->updateNotificationSetting(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GreenClient::DescribeAuditContentItemOutcome GreenClient::describeAuditContentItem(const DescribeAuditContentItemRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAuditContentItemOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAuditContentItemOutcome(DescribeAuditContentItemResult(outcome.result()));
	else
		return DescribeAuditContentItemOutcome(outcome.error());
}

void GreenClient::describeAuditContentItemAsync(const DescribeAuditContentItemRequest& request, const DescribeAuditContentItemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAuditContentItem(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GreenClient::DescribeAuditContentItemOutcomeCallable GreenClient::describeAuditContentItemCallable(const DescribeAuditContentItemRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAuditContentItemOutcome()>>(
			[this, request]()
			{
			return this->describeAuditContentItem(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GreenClient::SearchPersonOutcome GreenClient::searchPerson(const SearchPersonRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SearchPersonOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SearchPersonOutcome(SearchPersonResult(outcome.result()));
	else
		return SearchPersonOutcome(outcome.error());
}

void GreenClient::searchPersonAsync(const SearchPersonRequest& request, const SearchPersonAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, searchPerson(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GreenClient::SearchPersonOutcomeCallable GreenClient::searchPersonCallable(const SearchPersonRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SearchPersonOutcome()>>(
			[this, request]()
			{
			return this->searchPerson(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GreenClient::MarkOssResultOutcome GreenClient::markOssResult(const MarkOssResultRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return MarkOssResultOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return MarkOssResultOutcome(MarkOssResultResult(outcome.result()));
	else
		return MarkOssResultOutcome(outcome.error());
}

void GreenClient::markOssResultAsync(const MarkOssResultRequest& request, const MarkOssResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, markOssResult(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GreenClient::MarkOssResultOutcomeCallable GreenClient::markOssResultCallable(const MarkOssResultRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<MarkOssResultOutcome()>>(
			[this, request]()
			{
			return this->markOssResult(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GreenClient::DescribeAppInfoOutcome GreenClient::describeAppInfo(const DescribeAppInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAppInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAppInfoOutcome(DescribeAppInfoResult(outcome.result()));
	else
		return DescribeAppInfoOutcome(outcome.error());
}

void GreenClient::describeAppInfoAsync(const DescribeAppInfoRequest& request, const DescribeAppInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAppInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GreenClient::DescribeAppInfoOutcomeCallable GreenClient::describeAppInfoCallable(const DescribeAppInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAppInfoOutcome()>>(
			[this, request]()
			{
			return this->describeAppInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GreenClient::AddSimilarityImageOutcome GreenClient::addSimilarityImage(const AddSimilarityImageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddSimilarityImageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddSimilarityImageOutcome(AddSimilarityImageResult(outcome.result()));
	else
		return AddSimilarityImageOutcome(outcome.error());
}

void GreenClient::addSimilarityImageAsync(const AddSimilarityImageRequest& request, const AddSimilarityImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addSimilarityImage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GreenClient::AddSimilarityImageOutcomeCallable GreenClient::addSimilarityImageCallable(const AddSimilarityImageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddSimilarityImageOutcome()>>(
			[this, request]()
			{
			return this->addSimilarityImage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GreenClient::DescribeCustomOcrTemplateOutcome GreenClient::describeCustomOcrTemplate(const DescribeCustomOcrTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCustomOcrTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCustomOcrTemplateOutcome(DescribeCustomOcrTemplateResult(outcome.result()));
	else
		return DescribeCustomOcrTemplateOutcome(outcome.error());
}

void GreenClient::describeCustomOcrTemplateAsync(const DescribeCustomOcrTemplateRequest& request, const DescribeCustomOcrTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCustomOcrTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GreenClient::DescribeCustomOcrTemplateOutcomeCallable GreenClient::describeCustomOcrTemplateCallable(const DescribeCustomOcrTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCustomOcrTemplateOutcome()>>(
			[this, request]()
			{
			return this->describeCustomOcrTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GreenClient::VoiceIdentityUnregisterOutcome GreenClient::voiceIdentityUnregister(const VoiceIdentityUnregisterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return VoiceIdentityUnregisterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return VoiceIdentityUnregisterOutcome(VoiceIdentityUnregisterResult(outcome.result()));
	else
		return VoiceIdentityUnregisterOutcome(outcome.error());
}

void GreenClient::voiceIdentityUnregisterAsync(const VoiceIdentityUnregisterRequest& request, const VoiceIdentityUnregisterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, voiceIdentityUnregister(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GreenClient::VoiceIdentityUnregisterOutcomeCallable GreenClient::voiceIdentityUnregisterCallable(const VoiceIdentityUnregisterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<VoiceIdentityUnregisterOutcome()>>(
			[this, request]()
			{
			return this->voiceIdentityUnregister(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GreenClient::DeleteKeywordOutcome GreenClient::deleteKeyword(const DeleteKeywordRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteKeywordOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteKeywordOutcome(DeleteKeywordResult(outcome.result()));
	else
		return DeleteKeywordOutcome(outcome.error());
}

void GreenClient::deleteKeywordAsync(const DeleteKeywordRequest& request, const DeleteKeywordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteKeyword(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GreenClient::DeleteKeywordOutcomeCallable GreenClient::deleteKeywordCallable(const DeleteKeywordRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteKeywordOutcome()>>(
			[this, request]()
			{
			return this->deleteKeyword(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GreenClient::CreateWebSiteInstanceOutcome GreenClient::createWebSiteInstance(const CreateWebSiteInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateWebSiteInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateWebSiteInstanceOutcome(CreateWebSiteInstanceResult(outcome.result()));
	else
		return CreateWebSiteInstanceOutcome(outcome.error());
}

void GreenClient::createWebSiteInstanceAsync(const CreateWebSiteInstanceRequest& request, const CreateWebSiteInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createWebSiteInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GreenClient::CreateWebSiteInstanceOutcomeCallable GreenClient::createWebSiteInstanceCallable(const CreateWebSiteInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateWebSiteInstanceOutcome()>>(
			[this, request]()
			{
			return this->createWebSiteInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GreenClient::ImageSyncScanOutcome GreenClient::imageSyncScan(const ImageSyncScanRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ImageSyncScanOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ImageSyncScanOutcome(ImageSyncScanResult(outcome.result()));
	else
		return ImageSyncScanOutcome(outcome.error());
}

void GreenClient::imageSyncScanAsync(const ImageSyncScanRequest& request, const ImageSyncScanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, imageSyncScan(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GreenClient::ImageSyncScanOutcomeCallable GreenClient::imageSyncScanCallable(const ImageSyncScanRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ImageSyncScanOutcome()>>(
			[this, request]()
			{
			return this->imageSyncScan(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GreenClient::GetPersonOutcome GreenClient::getPerson(const GetPersonRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetPersonOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetPersonOutcome(GetPersonResult(outcome.result()));
	else
		return GetPersonOutcome(outcome.error());
}

void GreenClient::getPersonAsync(const GetPersonRequest& request, const GetPersonAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getPerson(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GreenClient::GetPersonOutcomeCallable GreenClient::getPersonCallable(const GetPersonRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetPersonOutcome()>>(
			[this, request]()
			{
			return this->getPerson(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GreenClient::DescribeWebsiteInstanceIdOutcome GreenClient::describeWebsiteInstanceId(const DescribeWebsiteInstanceIdRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeWebsiteInstanceIdOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeWebsiteInstanceIdOutcome(DescribeWebsiteInstanceIdResult(outcome.result()));
	else
		return DescribeWebsiteInstanceIdOutcome(outcome.error());
}

void GreenClient::describeWebsiteInstanceIdAsync(const DescribeWebsiteInstanceIdRequest& request, const DescribeWebsiteInstanceIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeWebsiteInstanceId(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GreenClient::DescribeWebsiteInstanceIdOutcomeCallable GreenClient::describeWebsiteInstanceIdCallable(const DescribeWebsiteInstanceIdRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeWebsiteInstanceIdOutcome()>>(
			[this, request]()
			{
			return this->describeWebsiteInstanceId(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GreenClient::MarkWebsiteScanResultOutcome GreenClient::markWebsiteScanResult(const MarkWebsiteScanResultRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return MarkWebsiteScanResultOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return MarkWebsiteScanResultOutcome(MarkWebsiteScanResultResult(outcome.result()));
	else
		return MarkWebsiteScanResultOutcome(outcome.error());
}

void GreenClient::markWebsiteScanResultAsync(const MarkWebsiteScanResultRequest& request, const MarkWebsiteScanResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, markWebsiteScanResult(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GreenClient::MarkWebsiteScanResultOutcomeCallable GreenClient::markWebsiteScanResultCallable(const MarkWebsiteScanResultRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<MarkWebsiteScanResultOutcome()>>(
			[this, request]()
			{
			return this->markWebsiteScanResult(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GreenClient::VideoFeedbackOutcome GreenClient::videoFeedback(const VideoFeedbackRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return VideoFeedbackOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return VideoFeedbackOutcome(VideoFeedbackResult(outcome.result()));
	else
		return VideoFeedbackOutcome(outcome.error());
}

void GreenClient::videoFeedbackAsync(const VideoFeedbackRequest& request, const VideoFeedbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, videoFeedback(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GreenClient::VideoFeedbackOutcomeCallable GreenClient::videoFeedbackCallable(const VideoFeedbackRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<VideoFeedbackOutcome()>>(
			[this, request]()
			{
			return this->videoFeedback(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GreenClient::ExportKeywordsOutcome GreenClient::exportKeywords(const ExportKeywordsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ExportKeywordsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ExportKeywordsOutcome(ExportKeywordsResult(outcome.result()));
	else
		return ExportKeywordsOutcome(outcome.error());
}

void GreenClient::exportKeywordsAsync(const ExportKeywordsRequest& request, const ExportKeywordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, exportKeywords(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GreenClient::ExportKeywordsOutcomeCallable GreenClient::exportKeywordsCallable(const ExportKeywordsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ExportKeywordsOutcome()>>(
			[this, request]()
			{
			return this->exportKeywords(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GreenClient::MarkAuditContentOutcome GreenClient::markAuditContent(const MarkAuditContentRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return MarkAuditContentOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return MarkAuditContentOutcome(MarkAuditContentResult(outcome.result()));
	else
		return MarkAuditContentOutcome(outcome.error());
}

void GreenClient::markAuditContentAsync(const MarkAuditContentRequest& request, const MarkAuditContentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, markAuditContent(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GreenClient::MarkAuditContentOutcomeCallable GreenClient::markAuditContentCallable(const MarkAuditContentRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<MarkAuditContentOutcome()>>(
			[this, request]()
			{
			return this->markAuditContent(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GreenClient::AddGroupsOutcome GreenClient::addGroups(const AddGroupsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddGroupsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddGroupsOutcome(AddGroupsResult(outcome.result()));
	else
		return AddGroupsOutcome(outcome.error());
}

void GreenClient::addGroupsAsync(const AddGroupsRequest& request, const AddGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addGroups(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GreenClient::AddGroupsOutcomeCallable GreenClient::addGroupsCallable(const AddGroupsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddGroupsOutcome()>>(
			[this, request]()
			{
			return this->addGroups(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GreenClient::VerifyEmailOutcome GreenClient::verifyEmail(const VerifyEmailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return VerifyEmailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return VerifyEmailOutcome(VerifyEmailResult(outcome.result()));
	else
		return VerifyEmailOutcome(outcome.error());
}

void GreenClient::verifyEmailAsync(const VerifyEmailRequest& request, const VerifyEmailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, verifyEmail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GreenClient::VerifyEmailOutcomeCallable GreenClient::verifyEmailCallable(const VerifyEmailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<VerifyEmailOutcome()>>(
			[this, request]()
			{
			return this->verifyEmail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GreenClient::DescribeWebsiteVerifyInfoOutcome GreenClient::describeWebsiteVerifyInfo(const DescribeWebsiteVerifyInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeWebsiteVerifyInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeWebsiteVerifyInfoOutcome(DescribeWebsiteVerifyInfoResult(outcome.result()));
	else
		return DescribeWebsiteVerifyInfoOutcome(outcome.error());
}

void GreenClient::describeWebsiteVerifyInfoAsync(const DescribeWebsiteVerifyInfoRequest& request, const DescribeWebsiteVerifyInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeWebsiteVerifyInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GreenClient::DescribeWebsiteVerifyInfoOutcomeCallable GreenClient::describeWebsiteVerifyInfoCallable(const DescribeWebsiteVerifyInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeWebsiteVerifyInfoOutcome()>>(
			[this, request]()
			{
			return this->describeWebsiteVerifyInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GreenClient::FileAsyncScanResultsOutcome GreenClient::fileAsyncScanResults(const FileAsyncScanResultsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return FileAsyncScanResultsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return FileAsyncScanResultsOutcome(FileAsyncScanResultsResult(outcome.result()));
	else
		return FileAsyncScanResultsOutcome(outcome.error());
}

void GreenClient::fileAsyncScanResultsAsync(const FileAsyncScanResultsRequest& request, const FileAsyncScanResultsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, fileAsyncScanResults(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GreenClient::FileAsyncScanResultsOutcomeCallable GreenClient::fileAsyncScanResultsCallable(const FileAsyncScanResultsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<FileAsyncScanResultsOutcome()>>(
			[this, request]()
			{
			return this->fileAsyncScanResults(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GreenClient::DescribeBizTypeSettingOutcome GreenClient::describeBizTypeSetting(const DescribeBizTypeSettingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeBizTypeSettingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeBizTypeSettingOutcome(DescribeBizTypeSettingResult(outcome.result()));
	else
		return DescribeBizTypeSettingOutcome(outcome.error());
}

void GreenClient::describeBizTypeSettingAsync(const DescribeBizTypeSettingRequest& request, const DescribeBizTypeSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeBizTypeSetting(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GreenClient::DescribeBizTypeSettingOutcomeCallable GreenClient::describeBizTypeSettingCallable(const DescribeBizTypeSettingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeBizTypeSettingOutcome()>>(
			[this, request]()
			{
			return this->describeBizTypeSetting(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GreenClient::DescribeSdkUrlOutcome GreenClient::describeSdkUrl(const DescribeSdkUrlRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSdkUrlOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSdkUrlOutcome(DescribeSdkUrlResult(outcome.result()));
	else
		return DescribeSdkUrlOutcome(outcome.error());
}

void GreenClient::describeSdkUrlAsync(const DescribeSdkUrlRequest& request, const DescribeSdkUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSdkUrl(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GreenClient::DescribeSdkUrlOutcomeCallable GreenClient::describeSdkUrlCallable(const DescribeSdkUrlRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSdkUrlOutcome()>>(
			[this, request]()
			{
			return this->describeSdkUrl(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GreenClient::GetSimilarityLibraryOutcome GreenClient::getSimilarityLibrary(const GetSimilarityLibraryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetSimilarityLibraryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetSimilarityLibraryOutcome(GetSimilarityLibraryResult(outcome.result()));
	else
		return GetSimilarityLibraryOutcome(outcome.error());
}

void GreenClient::getSimilarityLibraryAsync(const GetSimilarityLibraryRequest& request, const GetSimilarityLibraryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getSimilarityLibrary(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GreenClient::GetSimilarityLibraryOutcomeCallable GreenClient::getSimilarityLibraryCallable(const GetSimilarityLibraryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetSimilarityLibraryOutcome()>>(
			[this, request]()
			{
			return this->getSimilarityLibrary(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GreenClient::DescribeOssIncrementStatsOutcome GreenClient::describeOssIncrementStats(const DescribeOssIncrementStatsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeOssIncrementStatsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeOssIncrementStatsOutcome(DescribeOssIncrementStatsResult(outcome.result()));
	else
		return DescribeOssIncrementStatsOutcome(outcome.error());
}

void GreenClient::describeOssIncrementStatsAsync(const DescribeOssIncrementStatsRequest& request, const DescribeOssIncrementStatsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeOssIncrementStats(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GreenClient::DescribeOssIncrementStatsOutcomeCallable GreenClient::describeOssIncrementStatsCallable(const DescribeOssIncrementStatsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeOssIncrementStatsOutcome()>>(
			[this, request]()
			{
			return this->describeOssIncrementStats(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GreenClient::GetSimilarityImageOutcome GreenClient::getSimilarityImage(const GetSimilarityImageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetSimilarityImageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetSimilarityImageOutcome(GetSimilarityImageResult(outcome.result()));
	else
		return GetSimilarityImageOutcome(outcome.error());
}

void GreenClient::getSimilarityImageAsync(const GetSimilarityImageRequest& request, const GetSimilarityImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getSimilarityImage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GreenClient::GetSimilarityImageOutcomeCallable GreenClient::getSimilarityImageCallable(const GetSimilarityImageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetSimilarityImageOutcome()>>(
			[this, request]()
			{
			return this->getSimilarityImage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GreenClient::SendVerifyCodeToEmailOutcome GreenClient::sendVerifyCodeToEmail(const SendVerifyCodeToEmailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SendVerifyCodeToEmailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SendVerifyCodeToEmailOutcome(SendVerifyCodeToEmailResult(outcome.result()));
	else
		return SendVerifyCodeToEmailOutcome(outcome.error());
}

void GreenClient::sendVerifyCodeToEmailAsync(const SendVerifyCodeToEmailRequest& request, const SendVerifyCodeToEmailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, sendVerifyCodeToEmail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GreenClient::SendVerifyCodeToEmailOutcomeCallable GreenClient::sendVerifyCodeToEmailCallable(const SendVerifyCodeToEmailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SendVerifyCodeToEmailOutcome()>>(
			[this, request]()
			{
			return this->sendVerifyCodeToEmail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GreenClient::CreateImageLibOutcome GreenClient::createImageLib(const CreateImageLibRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateImageLibOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateImageLibOutcome(CreateImageLibResult(outcome.result()));
	else
		return CreateImageLibOutcome(outcome.error());
}

void GreenClient::createImageLibAsync(const CreateImageLibRequest& request, const CreateImageLibAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createImageLib(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GreenClient::CreateImageLibOutcomeCallable GreenClient::createImageLibCallable(const CreateImageLibRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateImageLibOutcome()>>(
			[this, request]()
			{
			return this->createImageLib(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GreenClient::GetFacesOutcome GreenClient::getFaces(const GetFacesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetFacesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetFacesOutcome(GetFacesResult(outcome.result()));
	else
		return GetFacesOutcome(outcome.error());
}

void GreenClient::getFacesAsync(const GetFacesRequest& request, const GetFacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getFaces(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GreenClient::GetFacesOutcomeCallable GreenClient::getFacesCallable(const GetFacesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetFacesOutcome()>>(
			[this, request]()
			{
			return this->getFaces(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GreenClient::VoiceAsyncScanOutcome GreenClient::voiceAsyncScan(const VoiceAsyncScanRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return VoiceAsyncScanOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return VoiceAsyncScanOutcome(VoiceAsyncScanResult(outcome.result()));
	else
		return VoiceAsyncScanOutcome(outcome.error());
}

void GreenClient::voiceAsyncScanAsync(const VoiceAsyncScanRequest& request, const VoiceAsyncScanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, voiceAsyncScan(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GreenClient::VoiceAsyncScanOutcomeCallable GreenClient::voiceAsyncScanCallable(const VoiceAsyncScanRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<VoiceAsyncScanOutcome()>>(
			[this, request]()
			{
			return this->voiceAsyncScan(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GreenClient::UpdateCustomOcrTemplateOutcome GreenClient::updateCustomOcrTemplate(const UpdateCustomOcrTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateCustomOcrTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateCustomOcrTemplateOutcome(UpdateCustomOcrTemplateResult(outcome.result()));
	else
		return UpdateCustomOcrTemplateOutcome(outcome.error());
}

void GreenClient::updateCustomOcrTemplateAsync(const UpdateCustomOcrTemplateRequest& request, const UpdateCustomOcrTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateCustomOcrTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GreenClient::UpdateCustomOcrTemplateOutcomeCallable GreenClient::updateCustomOcrTemplateCallable(const UpdateCustomOcrTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateCustomOcrTemplateOutcome()>>(
			[this, request]()
			{
			return this->updateCustomOcrTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GreenClient::UpdateAuditSettingOutcome GreenClient::updateAuditSetting(const UpdateAuditSettingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateAuditSettingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateAuditSettingOutcome(UpdateAuditSettingResult(outcome.result()));
	else
		return UpdateAuditSettingOutcome(outcome.error());
}

void GreenClient::updateAuditSettingAsync(const UpdateAuditSettingRequest& request, const UpdateAuditSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateAuditSetting(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GreenClient::UpdateAuditSettingOutcomeCallable GreenClient::updateAuditSettingCallable(const UpdateAuditSettingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateAuditSettingOutcome()>>(
			[this, request]()
			{
			return this->updateAuditSetting(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GreenClient::GetGroupsOutcome GreenClient::getGroups(const GetGroupsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetGroupsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetGroupsOutcome(GetGroupsResult(outcome.result()));
	else
		return GetGroupsOutcome(outcome.error());
}

void GreenClient::getGroupsAsync(const GetGroupsRequest& request, const GetGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getGroups(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GreenClient::GetGroupsOutcomeCallable GreenClient::getGroupsCallable(const GetGroupsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetGroupsOutcome()>>(
			[this, request]()
			{
			return this->getGroups(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GreenClient::TextScanOutcome GreenClient::textScan(const TextScanRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return TextScanOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return TextScanOutcome(TextScanResult(outcome.result()));
	else
		return TextScanOutcome(outcome.error());
}

void GreenClient::textScanAsync(const TextScanRequest& request, const TextScanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, textScan(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GreenClient::TextScanOutcomeCallable GreenClient::textScanCallable(const TextScanRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TextScanOutcome()>>(
			[this, request]()
			{
			return this->textScan(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GreenClient::ExportOssResultOutcome GreenClient::exportOssResult(const ExportOssResultRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ExportOssResultOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ExportOssResultOutcome(ExportOssResultResult(outcome.result()));
	else
		return ExportOssResultOutcome(outcome.error());
}

void GreenClient::exportOssResultAsync(const ExportOssResultRequest& request, const ExportOssResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, exportOssResult(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GreenClient::ExportOssResultOutcomeCallable GreenClient::exportOssResultCallable(const ExportOssResultRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ExportOssResultOutcome()>>(
			[this, request]()
			{
			return this->exportOssResult(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GreenClient::VoiceIdentityStartRegisterOutcome GreenClient::voiceIdentityStartRegister(const VoiceIdentityStartRegisterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return VoiceIdentityStartRegisterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return VoiceIdentityStartRegisterOutcome(VoiceIdentityStartRegisterResult(outcome.result()));
	else
		return VoiceIdentityStartRegisterOutcome(outcome.error());
}

void GreenClient::voiceIdentityStartRegisterAsync(const VoiceIdentityStartRegisterRequest& request, const VoiceIdentityStartRegisterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, voiceIdentityStartRegister(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GreenClient::VoiceIdentityStartRegisterOutcomeCallable GreenClient::voiceIdentityStartRegisterCallable(const VoiceIdentityStartRegisterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<VoiceIdentityStartRegisterOutcome()>>(
			[this, request]()
			{
			return this->voiceIdentityStartRegister(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GreenClient::DescribeWebsiteInstanceOutcome GreenClient::describeWebsiteInstance(const DescribeWebsiteInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeWebsiteInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeWebsiteInstanceOutcome(DescribeWebsiteInstanceResult(outcome.result()));
	else
		return DescribeWebsiteInstanceOutcome(outcome.error());
}

void GreenClient::describeWebsiteInstanceAsync(const DescribeWebsiteInstanceRequest& request, const DescribeWebsiteInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeWebsiteInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GreenClient::DescribeWebsiteInstanceOutcomeCallable GreenClient::describeWebsiteInstanceCallable(const DescribeWebsiteInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeWebsiteInstanceOutcome()>>(
			[this, request]()
			{
			return this->describeWebsiteInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GreenClient::DescribeImageLibOutcome GreenClient::describeImageLib(const DescribeImageLibRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeImageLibOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeImageLibOutcome(DescribeImageLibResult(outcome.result()));
	else
		return DescribeImageLibOutcome(outcome.error());
}

void GreenClient::describeImageLibAsync(const DescribeImageLibRequest& request, const DescribeImageLibAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeImageLib(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GreenClient::DescribeImageLibOutcomeCallable GreenClient::describeImageLibCallable(const DescribeImageLibRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeImageLibOutcome()>>(
			[this, request]()
			{
			return this->describeImageLib(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GreenClient::UpgradeCdiBaseBagOutcome GreenClient::upgradeCdiBaseBag(const UpgradeCdiBaseBagRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpgradeCdiBaseBagOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpgradeCdiBaseBagOutcome(UpgradeCdiBaseBagResult(outcome.result()));
	else
		return UpgradeCdiBaseBagOutcome(outcome.error());
}

void GreenClient::upgradeCdiBaseBagAsync(const UpgradeCdiBaseBagRequest& request, const UpgradeCdiBaseBagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, upgradeCdiBaseBag(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GreenClient::UpgradeCdiBaseBagOutcomeCallable GreenClient::upgradeCdiBaseBagCallable(const UpgradeCdiBaseBagRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpgradeCdiBaseBagOutcome()>>(
			[this, request]()
			{
			return this->upgradeCdiBaseBag(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GreenClient::DescribeUserStatusOutcome GreenClient::describeUserStatus(const DescribeUserStatusRequest &request) const
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

void GreenClient::describeUserStatusAsync(const DescribeUserStatusRequest& request, const DescribeUserStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeUserStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GreenClient::DescribeUserStatusOutcomeCallable GreenClient::describeUserStatusCallable(const DescribeUserStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeUserStatusOutcome()>>(
			[this, request]()
			{
			return this->describeUserStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GreenClient::GetAddVideoDnaResultsOutcome GreenClient::getAddVideoDnaResults(const GetAddVideoDnaResultsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetAddVideoDnaResultsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetAddVideoDnaResultsOutcome(GetAddVideoDnaResultsResult(outcome.result()));
	else
		return GetAddVideoDnaResultsOutcome(outcome.error());
}

void GreenClient::getAddVideoDnaResultsAsync(const GetAddVideoDnaResultsRequest& request, const GetAddVideoDnaResultsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getAddVideoDnaResults(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GreenClient::GetAddVideoDnaResultsOutcomeCallable GreenClient::getAddVideoDnaResultsCallable(const GetAddVideoDnaResultsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetAddVideoDnaResultsOutcome()>>(
			[this, request]()
			{
			return this->getAddVideoDnaResults(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GreenClient::DescribeKeywordOutcome GreenClient::describeKeyword(const DescribeKeywordRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeKeywordOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeKeywordOutcome(DescribeKeywordResult(outcome.result()));
	else
		return DescribeKeywordOutcome(outcome.error());
}

void GreenClient::describeKeywordAsync(const DescribeKeywordRequest& request, const DescribeKeywordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeKeyword(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GreenClient::DescribeKeywordOutcomeCallable GreenClient::describeKeywordCallable(const DescribeKeywordRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeKeywordOutcome()>>(
			[this, request]()
			{
			return this->describeKeyword(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GreenClient::AddFacesOutcome GreenClient::addFaces(const AddFacesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddFacesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddFacesOutcome(AddFacesResult(outcome.result()));
	else
		return AddFacesOutcome(outcome.error());
}

void GreenClient::addFacesAsync(const AddFacesRequest& request, const AddFacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addFaces(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GreenClient::AddFacesOutcomeCallable GreenClient::addFacesCallable(const AddFacesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddFacesOutcome()>>(
			[this, request]()
			{
			return this->addFaces(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GreenClient::DescribeAuditSettingOutcome GreenClient::describeAuditSetting(const DescribeAuditSettingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAuditSettingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAuditSettingOutcome(DescribeAuditSettingResult(outcome.result()));
	else
		return DescribeAuditSettingOutcome(outcome.error());
}

void GreenClient::describeAuditSettingAsync(const DescribeAuditSettingRequest& request, const DescribeAuditSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAuditSetting(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GreenClient::DescribeAuditSettingOutcomeCallable GreenClient::describeAuditSettingCallable(const DescribeAuditSettingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAuditSettingOutcome()>>(
			[this, request]()
			{
			return this->describeAuditSetting(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GreenClient::CreateKeywordLibOutcome GreenClient::createKeywordLib(const CreateKeywordLibRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateKeywordLibOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateKeywordLibOutcome(CreateKeywordLibResult(outcome.result()));
	else
		return CreateKeywordLibOutcome(outcome.error());
}

void GreenClient::createKeywordLibAsync(const CreateKeywordLibRequest& request, const CreateKeywordLibAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createKeywordLib(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GreenClient::CreateKeywordLibOutcomeCallable GreenClient::createKeywordLibCallable(const CreateKeywordLibRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateKeywordLibOutcome()>>(
			[this, request]()
			{
			return this->createKeywordLib(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GreenClient::UpdateOssIncrementCheckSettingOutcome GreenClient::updateOssIncrementCheckSetting(const UpdateOssIncrementCheckSettingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateOssIncrementCheckSettingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateOssIncrementCheckSettingOutcome(UpdateOssIncrementCheckSettingResult(outcome.result()));
	else
		return UpdateOssIncrementCheckSettingOutcome(outcome.error());
}

void GreenClient::updateOssIncrementCheckSettingAsync(const UpdateOssIncrementCheckSettingRequest& request, const UpdateOssIncrementCheckSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateOssIncrementCheckSetting(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GreenClient::UpdateOssIncrementCheckSettingOutcomeCallable GreenClient::updateOssIncrementCheckSettingCallable(const UpdateOssIncrementCheckSettingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateOssIncrementCheckSettingOutcome()>>(
			[this, request]()
			{
			return this->updateOssIncrementCheckSetting(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GreenClient::UploadCredentialsOutcome GreenClient::uploadCredentials(const UploadCredentialsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UploadCredentialsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UploadCredentialsOutcome(UploadCredentialsResult(outcome.result()));
	else
		return UploadCredentialsOutcome(outcome.error());
}

void GreenClient::uploadCredentialsAsync(const UploadCredentialsRequest& request, const UploadCredentialsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, uploadCredentials(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GreenClient::UploadCredentialsOutcomeCallable GreenClient::uploadCredentialsCallable(const UploadCredentialsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UploadCredentialsOutcome()>>(
			[this, request]()
			{
			return this->uploadCredentials(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GreenClient::CreateBizTypeOutcome GreenClient::createBizType(const CreateBizTypeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateBizTypeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateBizTypeOutcome(CreateBizTypeResult(outcome.result()));
	else
		return CreateBizTypeOutcome(outcome.error());
}

void GreenClient::createBizTypeAsync(const CreateBizTypeRequest& request, const CreateBizTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createBizType(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GreenClient::CreateBizTypeOutcomeCallable GreenClient::createBizTypeCallable(const CreateBizTypeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateBizTypeOutcome()>>(
			[this, request]()
			{
			return this->createBizType(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GreenClient::GetPersonsOutcome GreenClient::getPersons(const GetPersonsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetPersonsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetPersonsOutcome(GetPersonsResult(outcome.result()));
	else
		return GetPersonsOutcome(outcome.error());
}

void GreenClient::getPersonsAsync(const GetPersonsRequest& request, const GetPersonsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getPersons(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GreenClient::GetPersonsOutcomeCallable GreenClient::getPersonsCallable(const GetPersonsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetPersonsOutcome()>>(
			[this, request]()
			{
			return this->getPersons(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GreenClient::DeleteFacesOutcome GreenClient::deleteFaces(const DeleteFacesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteFacesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteFacesOutcome(DeleteFacesResult(outcome.result()));
	else
		return DeleteFacesOutcome(outcome.error());
}

void GreenClient::deleteFacesAsync(const DeleteFacesRequest& request, const DeleteFacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteFaces(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GreenClient::DeleteFacesOutcomeCallable GreenClient::deleteFacesCallable(const DeleteFacesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteFacesOutcome()>>(
			[this, request]()
			{
			return this->deleteFaces(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GreenClient::DeletePersonOutcome GreenClient::deletePerson(const DeletePersonRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeletePersonOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeletePersonOutcome(DeletePersonResult(outcome.result()));
	else
		return DeletePersonOutcome(outcome.error());
}

void GreenClient::deletePersonAsync(const DeletePersonRequest& request, const DeletePersonAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deletePerson(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GreenClient::DeletePersonOutcomeCallable GreenClient::deletePersonCallable(const DeletePersonRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeletePersonOutcome()>>(
			[this, request]()
			{
			return this->deletePerson(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GreenClient::RefundWebSiteInstanceOutcome GreenClient::refundWebSiteInstance(const RefundWebSiteInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RefundWebSiteInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RefundWebSiteInstanceOutcome(RefundWebSiteInstanceResult(outcome.result()));
	else
		return RefundWebSiteInstanceOutcome(outcome.error());
}

void GreenClient::refundWebSiteInstanceAsync(const RefundWebSiteInstanceRequest& request, const RefundWebSiteInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, refundWebSiteInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GreenClient::RefundWebSiteInstanceOutcomeCallable GreenClient::refundWebSiteInstanceCallable(const RefundWebSiteInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RefundWebSiteInstanceOutcome()>>(
			[this, request]()
			{
			return this->refundWebSiteInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GreenClient::SetPersonOutcome GreenClient::setPerson(const SetPersonRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetPersonOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetPersonOutcome(SetPersonResult(outcome.result()));
	else
		return SetPersonOutcome(outcome.error());
}

void GreenClient::setPersonAsync(const SetPersonRequest& request, const SetPersonAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setPerson(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GreenClient::SetPersonOutcomeCallable GreenClient::setPersonCallable(const SetPersonRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetPersonOutcome()>>(
			[this, request]()
			{
			return this->setPerson(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GreenClient::VoiceIdentityCheckOutcome GreenClient::voiceIdentityCheck(const VoiceIdentityCheckRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return VoiceIdentityCheckOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return VoiceIdentityCheckOutcome(VoiceIdentityCheckResult(outcome.result()));
	else
		return VoiceIdentityCheckOutcome(outcome.error());
}

void GreenClient::voiceIdentityCheckAsync(const VoiceIdentityCheckRequest& request, const VoiceIdentityCheckAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, voiceIdentityCheck(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GreenClient::VoiceIdentityCheckOutcomeCallable GreenClient::voiceIdentityCheckCallable(const VoiceIdentityCheckRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<VoiceIdentityCheckOutcome()>>(
			[this, request]()
			{
			return this->voiceIdentityCheck(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GreenClient::TextFeedbackOutcome GreenClient::textFeedback(const TextFeedbackRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return TextFeedbackOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return TextFeedbackOutcome(TextFeedbackResult(outcome.result()));
	else
		return TextFeedbackOutcome(outcome.error());
}

void GreenClient::textFeedbackAsync(const TextFeedbackRequest& request, const TextFeedbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, textFeedback(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GreenClient::TextFeedbackOutcomeCallable GreenClient::textFeedbackCallable(const TextFeedbackRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TextFeedbackOutcome()>>(
			[this, request]()
			{
			return this->textFeedback(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GreenClient::CreateWebsiteIndexPageBaselineOutcome GreenClient::createWebsiteIndexPageBaseline(const CreateWebsiteIndexPageBaselineRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateWebsiteIndexPageBaselineOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateWebsiteIndexPageBaselineOutcome(CreateWebsiteIndexPageBaselineResult(outcome.result()));
	else
		return CreateWebsiteIndexPageBaselineOutcome(outcome.error());
}

void GreenClient::createWebsiteIndexPageBaselineAsync(const CreateWebsiteIndexPageBaselineRequest& request, const CreateWebsiteIndexPageBaselineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createWebsiteIndexPageBaseline(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GreenClient::CreateWebsiteIndexPageBaselineOutcomeCallable GreenClient::createWebsiteIndexPageBaselineCallable(const CreateWebsiteIndexPageBaselineRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateWebsiteIndexPageBaselineOutcome()>>(
			[this, request]()
			{
			return this->createWebsiteIndexPageBaseline(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GreenClient::DeleteGroupsOutcome GreenClient::deleteGroups(const DeleteGroupsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteGroupsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteGroupsOutcome(DeleteGroupsResult(outcome.result()));
	else
		return DeleteGroupsOutcome(outcome.error());
}

void GreenClient::deleteGroupsAsync(const DeleteGroupsRequest& request, const DeleteGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteGroups(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GreenClient::DeleteGroupsOutcomeCallable GreenClient::deleteGroupsCallable(const DeleteGroupsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteGroupsOutcome()>>(
			[this, request]()
			{
			return this->deleteGroups(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GreenClient::VoiceIdentityStartCheckOutcome GreenClient::voiceIdentityStartCheck(const VoiceIdentityStartCheckRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return VoiceIdentityStartCheckOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return VoiceIdentityStartCheckOutcome(VoiceIdentityStartCheckResult(outcome.result()));
	else
		return VoiceIdentityStartCheckOutcome(outcome.error());
}

void GreenClient::voiceIdentityStartCheckAsync(const VoiceIdentityStartCheckRequest& request, const VoiceIdentityStartCheckAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, voiceIdentityStartCheck(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GreenClient::VoiceIdentityStartCheckOutcomeCallable GreenClient::voiceIdentityStartCheckCallable(const VoiceIdentityStartCheckRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<VoiceIdentityStartCheckOutcome()>>(
			[this, request]()
			{
			return this->voiceIdentityStartCheck(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GreenClient::UpdateOssStockStatusOutcome GreenClient::updateOssStockStatus(const UpdateOssStockStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateOssStockStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateOssStockStatusOutcome(UpdateOssStockStatusResult(outcome.result()));
	else
		return UpdateOssStockStatusOutcome(outcome.error());
}

void GreenClient::updateOssStockStatusAsync(const UpdateOssStockStatusRequest& request, const UpdateOssStockStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateOssStockStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GreenClient::UpdateOssStockStatusOutcomeCallable GreenClient::updateOssStockStatusCallable(const UpdateOssStockStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateOssStockStatusOutcome()>>(
			[this, request]()
			{
			return this->updateOssStockStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GreenClient::DescribeKeywordLibOutcome GreenClient::describeKeywordLib(const DescribeKeywordLibRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeKeywordLibOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeKeywordLibOutcome(DescribeKeywordLibResult(outcome.result()));
	else
		return DescribeKeywordLibOutcome(outcome.error());
}

void GreenClient::describeKeywordLibAsync(const DescribeKeywordLibRequest& request, const DescribeKeywordLibAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeKeywordLib(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GreenClient::DescribeKeywordLibOutcomeCallable GreenClient::describeKeywordLibCallable(const DescribeKeywordLibRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeKeywordLibOutcome()>>(
			[this, request]()
			{
			return this->describeKeywordLib(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GreenClient::DescribeUpdatePackageResultOutcome GreenClient::describeUpdatePackageResult(const DescribeUpdatePackageResultRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeUpdatePackageResultOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeUpdatePackageResultOutcome(DescribeUpdatePackageResultResult(outcome.result()));
	else
		return DescribeUpdatePackageResultOutcome(outcome.error());
}

void GreenClient::describeUpdatePackageResultAsync(const DescribeUpdatePackageResultRequest& request, const DescribeUpdatePackageResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeUpdatePackageResult(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GreenClient::DescribeUpdatePackageResultOutcomeCallable GreenClient::describeUpdatePackageResultCallable(const DescribeUpdatePackageResultRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeUpdatePackageResultOutcome()>>(
			[this, request]()
			{
			return this->describeUpdatePackageResult(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GreenClient::VideoAsyncScanOutcome GreenClient::videoAsyncScan(const VideoAsyncScanRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return VideoAsyncScanOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return VideoAsyncScanOutcome(VideoAsyncScanResult(outcome.result()));
	else
		return VideoAsyncScanOutcome(outcome.error());
}

void GreenClient::videoAsyncScanAsync(const VideoAsyncScanRequest& request, const VideoAsyncScanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, videoAsyncScan(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GreenClient::VideoAsyncScanOutcomeCallable GreenClient::videoAsyncScanCallable(const VideoAsyncScanRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<VideoAsyncScanOutcome()>>(
			[this, request]()
			{
			return this->videoAsyncScan(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GreenClient::DescribeUploadInfoOutcome GreenClient::describeUploadInfo(const DescribeUploadInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeUploadInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeUploadInfoOutcome(DescribeUploadInfoResult(outcome.result()));
	else
		return DescribeUploadInfoOutcome(outcome.error());
}

void GreenClient::describeUploadInfoAsync(const DescribeUploadInfoRequest& request, const DescribeUploadInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeUploadInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GreenClient::DescribeUploadInfoOutcomeCallable GreenClient::describeUploadInfoCallable(const DescribeUploadInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeUploadInfoOutcome()>>(
			[this, request]()
			{
			return this->describeUploadInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GreenClient::ImageScanFeedbackOutcome GreenClient::imageScanFeedback(const ImageScanFeedbackRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ImageScanFeedbackOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ImageScanFeedbackOutcome(ImageScanFeedbackResult(outcome.result()));
	else
		return ImageScanFeedbackOutcome(outcome.error());
}

void GreenClient::imageScanFeedbackAsync(const ImageScanFeedbackRequest& request, const ImageScanFeedbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, imageScanFeedback(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GreenClient::ImageScanFeedbackOutcomeCallable GreenClient::imageScanFeedbackCallable(const ImageScanFeedbackRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ImageScanFeedbackOutcome()>>(
			[this, request]()
			{
			return this->imageScanFeedback(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GreenClient::DescribeOpenApiUsageOutcome GreenClient::describeOpenApiUsage(const DescribeOpenApiUsageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeOpenApiUsageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeOpenApiUsageOutcome(DescribeOpenApiUsageResult(outcome.result()));
	else
		return DescribeOpenApiUsageOutcome(outcome.error());
}

void GreenClient::describeOpenApiUsageAsync(const DescribeOpenApiUsageRequest& request, const DescribeOpenApiUsageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeOpenApiUsage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GreenClient::DescribeOpenApiUsageOutcomeCallable GreenClient::describeOpenApiUsageCallable(const DescribeOpenApiUsageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeOpenApiUsageOutcome()>>(
			[this, request]()
			{
			return this->describeOpenApiUsage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GreenClient::DeleteSimilarityLibraryOutcome GreenClient::deleteSimilarityLibrary(const DeleteSimilarityLibraryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteSimilarityLibraryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteSimilarityLibraryOutcome(DeleteSimilarityLibraryResult(outcome.result()));
	else
		return DeleteSimilarityLibraryOutcome(outcome.error());
}

void GreenClient::deleteSimilarityLibraryAsync(const DeleteSimilarityLibraryRequest& request, const DeleteSimilarityLibraryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteSimilarityLibrary(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GreenClient::DeleteSimilarityLibraryOutcomeCallable GreenClient::deleteSimilarityLibraryCallable(const DeleteSimilarityLibraryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteSimilarityLibraryOutcome()>>(
			[this, request]()
			{
			return this->deleteSimilarityLibrary(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GreenClient::DescribeOssCallbackSettingOutcome GreenClient::describeOssCallbackSetting(const DescribeOssCallbackSettingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeOssCallbackSettingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeOssCallbackSettingOutcome(DescribeOssCallbackSettingResult(outcome.result()));
	else
		return DescribeOssCallbackSettingOutcome(outcome.error());
}

void GreenClient::describeOssCallbackSettingAsync(const DescribeOssCallbackSettingRequest& request, const DescribeOssCallbackSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeOssCallbackSetting(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GreenClient::DescribeOssCallbackSettingOutcomeCallable GreenClient::describeOssCallbackSettingCallable(const DescribeOssCallbackSettingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeOssCallbackSettingOutcome()>>(
			[this, request]()
			{
			return this->describeOssCallbackSetting(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GreenClient::DescribeImageUploadInfoOutcome GreenClient::describeImageUploadInfo(const DescribeImageUploadInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeImageUploadInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeImageUploadInfoOutcome(DescribeImageUploadInfoResult(outcome.result()));
	else
		return DescribeImageUploadInfoOutcome(outcome.error());
}

void GreenClient::describeImageUploadInfoAsync(const DescribeImageUploadInfoRequest& request, const DescribeImageUploadInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeImageUploadInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GreenClient::DescribeImageUploadInfoOutcomeCallable GreenClient::describeImageUploadInfoCallable(const DescribeImageUploadInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeImageUploadInfoOutcome()>>(
			[this, request]()
			{
			return this->describeImageUploadInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GreenClient::ImageResultOutcome GreenClient::imageResult(const ImageResultRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ImageResultOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ImageResultOutcome(ImageResultResult(outcome.result()));
	else
		return ImageResultOutcome(outcome.error());
}

void GreenClient::imageResultAsync(const ImageResultRequest& request, const ImageResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, imageResult(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GreenClient::ImageResultOutcomeCallable GreenClient::imageResultCallable(const ImageResultRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ImageResultOutcome()>>(
			[this, request]()
			{
			return this->imageResult(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GreenClient::DeleteSimilarityImageOutcome GreenClient::deleteSimilarityImage(const DeleteSimilarityImageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteSimilarityImageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteSimilarityImageOutcome(DeleteSimilarityImageResult(outcome.result()));
	else
		return DeleteSimilarityImageOutcome(outcome.error());
}

void GreenClient::deleteSimilarityImageAsync(const DeleteSimilarityImageRequest& request, const DeleteSimilarityImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteSimilarityImage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GreenClient::DeleteSimilarityImageOutcomeCallable GreenClient::deleteSimilarityImageCallable(const DeleteSimilarityImageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteSimilarityImageOutcome()>>(
			[this, request]()
			{
			return this->deleteSimilarityImage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GreenClient::DeleteImageLibOutcome GreenClient::deleteImageLib(const DeleteImageLibRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteImageLibOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteImageLibOutcome(DeleteImageLibResult(outcome.result()));
	else
		return DeleteImageLibOutcome(outcome.error());
}

void GreenClient::deleteImageLibAsync(const DeleteImageLibRequest& request, const DeleteImageLibAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteImageLib(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GreenClient::DeleteImageLibOutcomeCallable GreenClient::deleteImageLibCallable(const DeleteImageLibRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteImageLibOutcome()>>(
			[this, request]()
			{
			return this->deleteImageLib(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GreenClient::AddPersonOutcome GreenClient::addPerson(const AddPersonRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddPersonOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddPersonOutcome(AddPersonResult(outcome.result()));
	else
		return AddPersonOutcome(outcome.error());
}

void GreenClient::addPersonAsync(const AddPersonRequest& request, const AddPersonAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addPerson(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GreenClient::AddPersonOutcomeCallable GreenClient::addPersonCallable(const AddPersonRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddPersonOutcome()>>(
			[this, request]()
			{
			return this->addPerson(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GreenClient::ListSimilarityLibrariesOutcome GreenClient::listSimilarityLibraries(const ListSimilarityLibrariesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListSimilarityLibrariesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListSimilarityLibrariesOutcome(ListSimilarityLibrariesResult(outcome.result()));
	else
		return ListSimilarityLibrariesOutcome(outcome.error());
}

void GreenClient::listSimilarityLibrariesAsync(const ListSimilarityLibrariesRequest& request, const ListSimilarityLibrariesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listSimilarityLibraries(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GreenClient::ListSimilarityLibrariesOutcomeCallable GreenClient::listSimilarityLibrariesCallable(const ListSimilarityLibrariesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListSimilarityLibrariesOutcome()>>(
			[this, request]()
			{
			return this->listSimilarityLibraries(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GreenClient::DeleteCustomOcrTemplateOutcome GreenClient::deleteCustomOcrTemplate(const DeleteCustomOcrTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteCustomOcrTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteCustomOcrTemplateOutcome(DeleteCustomOcrTemplateResult(outcome.result()));
	else
		return DeleteCustomOcrTemplateOutcome(outcome.error());
}

void GreenClient::deleteCustomOcrTemplateAsync(const DeleteCustomOcrTemplateRequest& request, const DeleteCustomOcrTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteCustomOcrTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GreenClient::DeleteCustomOcrTemplateOutcomeCallable GreenClient::deleteCustomOcrTemplateCallable(const DeleteCustomOcrTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteCustomOcrTemplateOutcome()>>(
			[this, request]()
			{
			return this->deleteCustomOcrTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GreenClient::SampleFeedbackOutcome GreenClient::sampleFeedback(const SampleFeedbackRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SampleFeedbackOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SampleFeedbackOutcome(SampleFeedbackResult(outcome.result()));
	else
		return SampleFeedbackOutcome(outcome.error());
}

void GreenClient::sampleFeedbackAsync(const SampleFeedbackRequest& request, const SampleFeedbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, sampleFeedback(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GreenClient::SampleFeedbackOutcomeCallable GreenClient::sampleFeedbackCallable(const SampleFeedbackRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SampleFeedbackOutcome()>>(
			[this, request]()
			{
			return this->sampleFeedback(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GreenClient::ListSimilarityImagesOutcome GreenClient::listSimilarityImages(const ListSimilarityImagesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListSimilarityImagesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListSimilarityImagesOutcome(ListSimilarityImagesResult(outcome.result()));
	else
		return ListSimilarityImagesOutcome(outcome.error());
}

void GreenClient::listSimilarityImagesAsync(const ListSimilarityImagesRequest& request, const ListSimilarityImagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listSimilarityImages(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GreenClient::ListSimilarityImagesOutcomeCallable GreenClient::listSimilarityImagesCallable(const ListSimilarityImagesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListSimilarityImagesOutcome()>>(
			[this, request]()
			{
			return this->listSimilarityImages(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GreenClient::MarkAuditContentItemOutcome GreenClient::markAuditContentItem(const MarkAuditContentItemRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return MarkAuditContentItemOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return MarkAuditContentItemOutcome(MarkAuditContentItemResult(outcome.result()));
	else
		return MarkAuditContentItemOutcome(outcome.error());
}

void GreenClient::markAuditContentItemAsync(const MarkAuditContentItemRequest& request, const MarkAuditContentItemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, markAuditContentItem(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GreenClient::MarkAuditContentItemOutcomeCallable GreenClient::markAuditContentItemCallable(const MarkAuditContentItemRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<MarkAuditContentItemOutcome()>>(
			[this, request]()
			{
			return this->markAuditContentItem(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GreenClient::AddVideoDnaOutcome GreenClient::addVideoDna(const AddVideoDnaRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddVideoDnaOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddVideoDnaOutcome(AddVideoDnaResult(outcome.result()));
	else
		return AddVideoDnaOutcome(outcome.error());
}

void GreenClient::addVideoDnaAsync(const AddVideoDnaRequest& request, const AddVideoDnaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addVideoDna(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GreenClient::AddVideoDnaOutcomeCallable GreenClient::addVideoDnaCallable(const AddVideoDnaRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddVideoDnaOutcome()>>(
			[this, request]()
			{
			return this->addVideoDna(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GreenClient::VideoSyncScanOutcome GreenClient::videoSyncScan(const VideoSyncScanRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return VideoSyncScanOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return VideoSyncScanOutcome(VideoSyncScanResult(outcome.result()));
	else
		return VideoSyncScanOutcome(outcome.error());
}

void GreenClient::videoSyncScanAsync(const VideoSyncScanRequest& request, const VideoSyncScanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, videoSyncScan(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GreenClient::VideoSyncScanOutcomeCallable GreenClient::videoSyncScanCallable(const VideoSyncScanRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<VideoSyncScanOutcome()>>(
			[this, request]()
			{
			return this->videoSyncScan(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GreenClient::DeleteNotificationContactsOutcome GreenClient::deleteNotificationContacts(const DeleteNotificationContactsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteNotificationContactsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteNotificationContactsOutcome(DeleteNotificationContactsResult(outcome.result()));
	else
		return DeleteNotificationContactsOutcome(outcome.error());
}

void GreenClient::deleteNotificationContactsAsync(const DeleteNotificationContactsRequest& request, const DeleteNotificationContactsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteNotificationContacts(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GreenClient::DeleteNotificationContactsOutcomeCallable GreenClient::deleteNotificationContactsCallable(const DeleteNotificationContactsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteNotificationContactsOutcome()>>(
			[this, request]()
			{
			return this->deleteNotificationContacts(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GreenClient::VideoAsyncScanResultsOutcome GreenClient::videoAsyncScanResults(const VideoAsyncScanResultsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return VideoAsyncScanResultsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return VideoAsyncScanResultsOutcome(VideoAsyncScanResultsResult(outcome.result()));
	else
		return VideoAsyncScanResultsOutcome(outcome.error());
}

void GreenClient::videoAsyncScanResultsAsync(const VideoAsyncScanResultsRequest& request, const VideoAsyncScanResultsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, videoAsyncScanResults(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GreenClient::VideoAsyncScanResultsOutcomeCallable GreenClient::videoAsyncScanResultsCallable(const VideoAsyncScanResultsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<VideoAsyncScanResultsOutcome()>>(
			[this, request]()
			{
			return this->videoAsyncScanResults(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GreenClient::DescribeOssStockStatusOutcome GreenClient::describeOssStockStatus(const DescribeOssStockStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeOssStockStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeOssStockStatusOutcome(DescribeOssStockStatusResult(outcome.result()));
	else
		return DescribeOssStockStatusOutcome(outcome.error());
}

void GreenClient::describeOssStockStatusAsync(const DescribeOssStockStatusRequest& request, const DescribeOssStockStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeOssStockStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GreenClient::DescribeOssStockStatusOutcomeCallable GreenClient::describeOssStockStatusCallable(const DescribeOssStockStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeOssStockStatusOutcome()>>(
			[this, request]()
			{
			return this->describeOssStockStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GreenClient::TextKeywordFilterOutcome GreenClient::textKeywordFilter(const TextKeywordFilterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return TextKeywordFilterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return TextKeywordFilterOutcome(TextKeywordFilterResult(outcome.result()));
	else
		return TextKeywordFilterOutcome(outcome.error());
}

void GreenClient::textKeywordFilterAsync(const TextKeywordFilterRequest& request, const TextKeywordFilterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, textKeywordFilter(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GreenClient::TextKeywordFilterOutcomeCallable GreenClient::textKeywordFilterCallable(const TextKeywordFilterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TextKeywordFilterOutcome()>>(
			[this, request]()
			{
			return this->textKeywordFilter(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GreenClient::UpdateImageLibOutcome GreenClient::updateImageLib(const UpdateImageLibRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateImageLibOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateImageLibOutcome(UpdateImageLibResult(outcome.result()));
	else
		return UpdateImageLibOutcome(outcome.error());
}

void GreenClient::updateImageLibAsync(const UpdateImageLibRequest& request, const UpdateImageLibAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateImageLib(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GreenClient::UpdateImageLibOutcomeCallable GreenClient::updateImageLibCallable(const UpdateImageLibRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateImageLibOutcome()>>(
			[this, request]()
			{
			return this->updateImageLib(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GreenClient::CreatCustomOcrTemplateOutcome GreenClient::creatCustomOcrTemplate(const CreatCustomOcrTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreatCustomOcrTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreatCustomOcrTemplateOutcome(CreatCustomOcrTemplateResult(outcome.result()));
	else
		return CreatCustomOcrTemplateOutcome(outcome.error());
}

void GreenClient::creatCustomOcrTemplateAsync(const CreatCustomOcrTemplateRequest& request, const CreatCustomOcrTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, creatCustomOcrTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GreenClient::CreatCustomOcrTemplateOutcomeCallable GreenClient::creatCustomOcrTemplateCallable(const CreatCustomOcrTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreatCustomOcrTemplateOutcome()>>(
			[this, request]()
			{
			return this->creatCustomOcrTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GreenClient::CreateKeywordOutcome GreenClient::createKeyword(const CreateKeywordRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateKeywordOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateKeywordOutcome(CreateKeywordResult(outcome.result()));
	else
		return CreateKeywordOutcome(outcome.error());
}

void GreenClient::createKeywordAsync(const CreateKeywordRequest& request, const CreateKeywordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createKeyword(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GreenClient::CreateKeywordOutcomeCallable GreenClient::createKeywordCallable(const CreateKeywordRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateKeywordOutcome()>>(
			[this, request]()
			{
			return this->createKeyword(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GreenClient::UploadImageToLibOutcome GreenClient::uploadImageToLib(const UploadImageToLibRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UploadImageToLibOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UploadImageToLibOutcome(UploadImageToLibResult(outcome.result()));
	else
		return UploadImageToLibOutcome(outcome.error());
}

void GreenClient::uploadImageToLibAsync(const UploadImageToLibRequest& request, const UploadImageToLibAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, uploadImageToLib(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GreenClient::UploadImageToLibOutcomeCallable GreenClient::uploadImageToLibCallable(const UploadImageToLibRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UploadImageToLibOutcome()>>(
			[this, request]()
			{
			return this->uploadImageToLib(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GreenClient::UpdateWebsiteInstanceOutcome GreenClient::updateWebsiteInstance(const UpdateWebsiteInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateWebsiteInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateWebsiteInstanceOutcome(UpdateWebsiteInstanceResult(outcome.result()));
	else
		return UpdateWebsiteInstanceOutcome(outcome.error());
}

void GreenClient::updateWebsiteInstanceAsync(const UpdateWebsiteInstanceRequest& request, const UpdateWebsiteInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateWebsiteInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GreenClient::UpdateWebsiteInstanceOutcomeCallable GreenClient::updateWebsiteInstanceCallable(const UpdateWebsiteInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateWebsiteInstanceOutcome()>>(
			[this, request]()
			{
			return this->updateWebsiteInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GreenClient::DescribeWebsiteScanResultDetailOutcome GreenClient::describeWebsiteScanResultDetail(const DescribeWebsiteScanResultDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeWebsiteScanResultDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeWebsiteScanResultDetailOutcome(DescribeWebsiteScanResultDetailResult(outcome.result()));
	else
		return DescribeWebsiteScanResultDetailOutcome(outcome.error());
}

void GreenClient::describeWebsiteScanResultDetailAsync(const DescribeWebsiteScanResultDetailRequest& request, const DescribeWebsiteScanResultDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeWebsiteScanResultDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GreenClient::DescribeWebsiteScanResultDetailOutcomeCallable GreenClient::describeWebsiteScanResultDetailCallable(const DescribeWebsiteScanResultDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeWebsiteScanResultDetailOutcome()>>(
			[this, request]()
			{
			return this->describeWebsiteScanResultDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GreenClient::AddSimilarityLibraryOutcome GreenClient::addSimilarityLibrary(const AddSimilarityLibraryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddSimilarityLibraryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddSimilarityLibraryOutcome(AddSimilarityLibraryResult(outcome.result()));
	else
		return AddSimilarityLibraryOutcome(outcome.error());
}

void GreenClient::addSimilarityLibraryAsync(const AddSimilarityLibraryRequest& request, const AddSimilarityLibraryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addSimilarityLibrary(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GreenClient::AddSimilarityLibraryOutcomeCallable GreenClient::addSimilarityLibraryCallable(const AddSimilarityLibraryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddSimilarityLibraryOutcome()>>(
			[this, request]()
			{
			return this->addSimilarityLibrary(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GreenClient::AddVideoDnaGroupOutcome GreenClient::addVideoDnaGroup(const AddVideoDnaGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddVideoDnaGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddVideoDnaGroupOutcome(AddVideoDnaGroupResult(outcome.result()));
	else
		return AddVideoDnaGroupOutcome(outcome.error());
}

void GreenClient::addVideoDnaGroupAsync(const AddVideoDnaGroupRequest& request, const AddVideoDnaGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addVideoDnaGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GreenClient::AddVideoDnaGroupOutcomeCallable GreenClient::addVideoDnaGroupCallable(const AddVideoDnaGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddVideoDnaGroupOutcome()>>(
			[this, request]()
			{
			return this->addVideoDnaGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GreenClient::CreateCdiBagOutcome GreenClient::createCdiBag(const CreateCdiBagRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateCdiBagOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateCdiBagOutcome(CreateCdiBagResult(outcome.result()));
	else
		return CreateCdiBagOutcome(outcome.error());
}

void GreenClient::createCdiBagAsync(const CreateCdiBagRequest& request, const CreateCdiBagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createCdiBag(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GreenClient::CreateCdiBagOutcomeCallable GreenClient::createCdiBagCallable(const CreateCdiBagRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateCdiBagOutcome()>>(
			[this, request]()
			{
			return this->createCdiBag(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GreenClient::UpdateKeywordLibOutcome GreenClient::updateKeywordLib(const UpdateKeywordLibRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateKeywordLibOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateKeywordLibOutcome(UpdateKeywordLibResult(outcome.result()));
	else
		return UpdateKeywordLibOutcome(outcome.error());
}

void GreenClient::updateKeywordLibAsync(const UpdateKeywordLibRequest& request, const UpdateKeywordLibAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateKeywordLib(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GreenClient::UpdateKeywordLibOutcomeCallable GreenClient::updateKeywordLibCallable(const UpdateKeywordLibRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateKeywordLibOutcome()>>(
			[this, request]()
			{
			return this->updateKeywordLib(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GreenClient::ImageAsyncScanOutcome GreenClient::imageAsyncScan(const ImageAsyncScanRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ImageAsyncScanOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ImageAsyncScanOutcome(ImageAsyncScanResult(outcome.result()));
	else
		return ImageAsyncScanOutcome(outcome.error());
}

void GreenClient::imageAsyncScanAsync(const ImageAsyncScanRequest& request, const ImageAsyncScanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, imageAsyncScan(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GreenClient::ImageAsyncScanOutcomeCallable GreenClient::imageAsyncScanCallable(const ImageAsyncScanRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ImageAsyncScanOutcome()>>(
			[this, request]()
			{
			return this->imageAsyncScan(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GreenClient::ImageAsyncScanResultsOutcome GreenClient::imageAsyncScanResults(const ImageAsyncScanResultsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ImageAsyncScanResultsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ImageAsyncScanResultsOutcome(ImageAsyncScanResultsResult(outcome.result()));
	else
		return ImageAsyncScanResultsOutcome(outcome.error());
}

void GreenClient::imageAsyncScanResultsAsync(const ImageAsyncScanResultsRequest& request, const ImageAsyncScanResultsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, imageAsyncScanResults(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GreenClient::ImageAsyncScanResultsOutcomeCallable GreenClient::imageAsyncScanResultsCallable(const ImageAsyncScanResultsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ImageAsyncScanResultsOutcome()>>(
			[this, request]()
			{
			return this->imageAsyncScanResults(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GreenClient::VoiceAsyncScanResultsOutcome GreenClient::voiceAsyncScanResults(const VoiceAsyncScanResultsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return VoiceAsyncScanResultsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return VoiceAsyncScanResultsOutcome(VoiceAsyncScanResultsResult(outcome.result()));
	else
		return VoiceAsyncScanResultsOutcome(outcome.error());
}

void GreenClient::voiceAsyncScanResultsAsync(const VoiceAsyncScanResultsRequest& request, const VoiceAsyncScanResultsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, voiceAsyncScanResults(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GreenClient::VoiceAsyncScanResultsOutcomeCallable GreenClient::voiceAsyncScanResultsCallable(const VoiceAsyncScanResultsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<VoiceAsyncScanResultsOutcome()>>(
			[this, request]()
			{
			return this->voiceAsyncScanResults(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GreenClient::ImageResultsOutcome GreenClient::imageResults(const ImageResultsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ImageResultsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ImageResultsOutcome(ImageResultsResult(outcome.result()));
	else
		return ImageResultsOutcome(outcome.error());
}

void GreenClient::imageResultsAsync(const ImageResultsRequest& request, const ImageResultsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, imageResults(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GreenClient::ImageResultsOutcomeCallable GreenClient::imageResultsCallable(const ImageResultsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ImageResultsOutcome()>>(
			[this, request]()
			{
			return this->imageResults(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GreenClient::VerifyWebsiteInstanceOutcome GreenClient::verifyWebsiteInstance(const VerifyWebsiteInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return VerifyWebsiteInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return VerifyWebsiteInstanceOutcome(VerifyWebsiteInstanceResult(outcome.result()));
	else
		return VerifyWebsiteInstanceOutcome(outcome.error());
}

void GreenClient::verifyWebsiteInstanceAsync(const VerifyWebsiteInstanceRequest& request, const VerifyWebsiteInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, verifyWebsiteInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GreenClient::VerifyWebsiteInstanceOutcomeCallable GreenClient::verifyWebsiteInstanceCallable(const VerifyWebsiteInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<VerifyWebsiteInstanceOutcome()>>(
			[this, request]()
			{
			return this->verifyWebsiteInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GreenClient::UpdateWebsiteInstanceKeyUrlOutcome GreenClient::updateWebsiteInstanceKeyUrl(const UpdateWebsiteInstanceKeyUrlRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateWebsiteInstanceKeyUrlOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateWebsiteInstanceKeyUrlOutcome(UpdateWebsiteInstanceKeyUrlResult(outcome.result()));
	else
		return UpdateWebsiteInstanceKeyUrlOutcome(outcome.error());
}

void GreenClient::updateWebsiteInstanceKeyUrlAsync(const UpdateWebsiteInstanceKeyUrlRequest& request, const UpdateWebsiteInstanceKeyUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateWebsiteInstanceKeyUrl(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GreenClient::UpdateWebsiteInstanceKeyUrlOutcomeCallable GreenClient::updateWebsiteInstanceKeyUrlCallable(const UpdateWebsiteInstanceKeyUrlRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateWebsiteInstanceKeyUrlOutcome()>>(
			[this, request]()
			{
			return this->updateWebsiteInstanceKeyUrl(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GreenClient::SendVerifyCodeToPhoneOutcome GreenClient::sendVerifyCodeToPhone(const SendVerifyCodeToPhoneRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SendVerifyCodeToPhoneOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SendVerifyCodeToPhoneOutcome(SendVerifyCodeToPhoneResult(outcome.result()));
	else
		return SendVerifyCodeToPhoneOutcome(outcome.error());
}

void GreenClient::sendVerifyCodeToPhoneAsync(const SendVerifyCodeToPhoneRequest& request, const SendVerifyCodeToPhoneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, sendVerifyCodeToPhone(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GreenClient::SendVerifyCodeToPhoneOutcomeCallable GreenClient::sendVerifyCodeToPhoneCallable(const SendVerifyCodeToPhoneRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SendVerifyCodeToPhoneOutcome()>>(
			[this, request]()
			{
			return this->sendVerifyCodeToPhone(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GreenClient::DescribeOssIncrementOverviewOutcome GreenClient::describeOssIncrementOverview(const DescribeOssIncrementOverviewRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeOssIncrementOverviewOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeOssIncrementOverviewOutcome(DescribeOssIncrementOverviewResult(outcome.result()));
	else
		return DescribeOssIncrementOverviewOutcome(outcome.error());
}

void GreenClient::describeOssIncrementOverviewAsync(const DescribeOssIncrementOverviewRequest& request, const DescribeOssIncrementOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeOssIncrementOverview(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GreenClient::DescribeOssIncrementOverviewOutcomeCallable GreenClient::describeOssIncrementOverviewCallable(const DescribeOssIncrementOverviewRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeOssIncrementOverviewOutcome()>>(
			[this, request]()
			{
			return this->describeOssIncrementOverview(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GreenClient::DescribeNotificationSettingOutcome GreenClient::describeNotificationSetting(const DescribeNotificationSettingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeNotificationSettingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeNotificationSettingOutcome(DescribeNotificationSettingResult(outcome.result()));
	else
		return DescribeNotificationSettingOutcome(outcome.error());
}

void GreenClient::describeNotificationSettingAsync(const DescribeNotificationSettingRequest& request, const DescribeNotificationSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeNotificationSetting(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GreenClient::DescribeNotificationSettingOutcomeCallable GreenClient::describeNotificationSettingCallable(const DescribeNotificationSettingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeNotificationSettingOutcome()>>(
			[this, request]()
			{
			return this->describeNotificationSetting(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GreenClient::DescribeAuditContentOutcome GreenClient::describeAuditContent(const DescribeAuditContentRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAuditContentOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAuditContentOutcome(DescribeAuditContentResult(outcome.result()));
	else
		return DescribeAuditContentOutcome(outcome.error());
}

void GreenClient::describeAuditContentAsync(const DescribeAuditContentRequest& request, const DescribeAuditContentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAuditContent(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GreenClient::DescribeAuditContentOutcomeCallable GreenClient::describeAuditContentCallable(const DescribeAuditContentRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAuditContentOutcome()>>(
			[this, request]()
			{
			return this->describeAuditContent(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

