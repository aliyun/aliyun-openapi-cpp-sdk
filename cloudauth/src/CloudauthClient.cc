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

#include <alibabacloud/cloudauth/CloudauthClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Cloudauth;
using namespace AlibabaCloud::Cloudauth::Model;

namespace
{
	const std::string SERVICE_NAME = "Cloudauth";
}

CloudauthClient::CloudauthClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "cloudauth");
}

CloudauthClient::CloudauthClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "cloudauth");
}

CloudauthClient::CloudauthClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "cloudauth");
}

CloudauthClient::~CloudauthClient()
{}

CloudauthClient::AIGCFaceVerifyOutcome CloudauthClient::aIGCFaceVerify(const AIGCFaceVerifyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AIGCFaceVerifyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AIGCFaceVerifyOutcome(AIGCFaceVerifyResult(outcome.result()));
	else
		return AIGCFaceVerifyOutcome(outcome.error());
}

void CloudauthClient::aIGCFaceVerifyAsync(const AIGCFaceVerifyRequest& request, const AIGCFaceVerifyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, aIGCFaceVerify(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudauthClient::AIGCFaceVerifyOutcomeCallable CloudauthClient::aIGCFaceVerifyCallable(const AIGCFaceVerifyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AIGCFaceVerifyOutcome()>>(
			[this, request]()
			{
			return this->aIGCFaceVerify(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudauthClient::BankMetaVerifyOutcome CloudauthClient::bankMetaVerify(const BankMetaVerifyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BankMetaVerifyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BankMetaVerifyOutcome(BankMetaVerifyResult(outcome.result()));
	else
		return BankMetaVerifyOutcome(outcome.error());
}

void CloudauthClient::bankMetaVerifyAsync(const BankMetaVerifyRequest& request, const BankMetaVerifyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, bankMetaVerify(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudauthClient::BankMetaVerifyOutcomeCallable CloudauthClient::bankMetaVerifyCallable(const BankMetaVerifyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BankMetaVerifyOutcome()>>(
			[this, request]()
			{
			return this->bankMetaVerify(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudauthClient::CompareFaceVerifyOutcome CloudauthClient::compareFaceVerify(const CompareFaceVerifyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CompareFaceVerifyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CompareFaceVerifyOutcome(CompareFaceVerifyResult(outcome.result()));
	else
		return CompareFaceVerifyOutcome(outcome.error());
}

void CloudauthClient::compareFaceVerifyAsync(const CompareFaceVerifyRequest& request, const CompareFaceVerifyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, compareFaceVerify(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudauthClient::CompareFaceVerifyOutcomeCallable CloudauthClient::compareFaceVerifyCallable(const CompareFaceVerifyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CompareFaceVerifyOutcome()>>(
			[this, request]()
			{
			return this->compareFaceVerify(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudauthClient::CompareFacesOutcome CloudauthClient::compareFaces(const CompareFacesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CompareFacesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CompareFacesOutcome(CompareFacesResult(outcome.result()));
	else
		return CompareFacesOutcome(outcome.error());
}

void CloudauthClient::compareFacesAsync(const CompareFacesRequest& request, const CompareFacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, compareFaces(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudauthClient::CompareFacesOutcomeCallable CloudauthClient::compareFacesCallable(const CompareFacesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CompareFacesOutcome()>>(
			[this, request]()
			{
			return this->compareFaces(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudauthClient::ContrastFaceVerifyOutcome CloudauthClient::contrastFaceVerify(const ContrastFaceVerifyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ContrastFaceVerifyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ContrastFaceVerifyOutcome(ContrastFaceVerifyResult(outcome.result()));
	else
		return ContrastFaceVerifyOutcome(outcome.error());
}

void CloudauthClient::contrastFaceVerifyAsync(const ContrastFaceVerifyRequest& request, const ContrastFaceVerifyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, contrastFaceVerify(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudauthClient::ContrastFaceVerifyOutcomeCallable CloudauthClient::contrastFaceVerifyCallable(const ContrastFaceVerifyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ContrastFaceVerifyOutcome()>>(
			[this, request]()
			{
			return this->contrastFaceVerify(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudauthClient::CreateAuthKeyOutcome CloudauthClient::createAuthKey(const CreateAuthKeyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateAuthKeyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateAuthKeyOutcome(CreateAuthKeyResult(outcome.result()));
	else
		return CreateAuthKeyOutcome(outcome.error());
}

void CloudauthClient::createAuthKeyAsync(const CreateAuthKeyRequest& request, const CreateAuthKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createAuthKey(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudauthClient::CreateAuthKeyOutcomeCallable CloudauthClient::createAuthKeyCallable(const CreateAuthKeyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateAuthKeyOutcome()>>(
			[this, request]()
			{
			return this->createAuthKey(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudauthClient::CreateVerifySettingOutcome CloudauthClient::createVerifySetting(const CreateVerifySettingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateVerifySettingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateVerifySettingOutcome(CreateVerifySettingResult(outcome.result()));
	else
		return CreateVerifySettingOutcome(outcome.error());
}

void CloudauthClient::createVerifySettingAsync(const CreateVerifySettingRequest& request, const CreateVerifySettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createVerifySetting(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudauthClient::CreateVerifySettingOutcomeCallable CloudauthClient::createVerifySettingCallable(const CreateVerifySettingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateVerifySettingOutcome()>>(
			[this, request]()
			{
			return this->createVerifySetting(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudauthClient::CredentialVerifyOutcome CloudauthClient::credentialVerify(const CredentialVerifyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CredentialVerifyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CredentialVerifyOutcome(CredentialVerifyResult(outcome.result()));
	else
		return CredentialVerifyOutcome(outcome.error());
}

void CloudauthClient::credentialVerifyAsync(const CredentialVerifyRequest& request, const CredentialVerifyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, credentialVerify(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudauthClient::CredentialVerifyOutcomeCallable CloudauthClient::credentialVerifyCallable(const CredentialVerifyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CredentialVerifyOutcome()>>(
			[this, request]()
			{
			return this->credentialVerify(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudauthClient::DeepfakeDetectOutcome CloudauthClient::deepfakeDetect(const DeepfakeDetectRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeepfakeDetectOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeepfakeDetectOutcome(DeepfakeDetectResult(outcome.result()));
	else
		return DeepfakeDetectOutcome(outcome.error());
}

void CloudauthClient::deepfakeDetectAsync(const DeepfakeDetectRequest& request, const DeepfakeDetectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deepfakeDetect(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudauthClient::DeepfakeDetectOutcomeCallable CloudauthClient::deepfakeDetectCallable(const DeepfakeDetectRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeepfakeDetectOutcome()>>(
			[this, request]()
			{
			return this->deepfakeDetect(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudauthClient::DeleteFaceVerifyResultOutcome CloudauthClient::deleteFaceVerifyResult(const DeleteFaceVerifyResultRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteFaceVerifyResultOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteFaceVerifyResultOutcome(DeleteFaceVerifyResultResult(outcome.result()));
	else
		return DeleteFaceVerifyResultOutcome(outcome.error());
}

void CloudauthClient::deleteFaceVerifyResultAsync(const DeleteFaceVerifyResultRequest& request, const DeleteFaceVerifyResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteFaceVerifyResult(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudauthClient::DeleteFaceVerifyResultOutcomeCallable CloudauthClient::deleteFaceVerifyResultCallable(const DeleteFaceVerifyResultRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteFaceVerifyResultOutcome()>>(
			[this, request]()
			{
			return this->deleteFaceVerifyResult(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudauthClient::DescribeDeviceInfoOutcome CloudauthClient::describeDeviceInfo(const DescribeDeviceInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDeviceInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDeviceInfoOutcome(DescribeDeviceInfoResult(outcome.result()));
	else
		return DescribeDeviceInfoOutcome(outcome.error());
}

void CloudauthClient::describeDeviceInfoAsync(const DescribeDeviceInfoRequest& request, const DescribeDeviceInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDeviceInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudauthClient::DescribeDeviceInfoOutcomeCallable CloudauthClient::describeDeviceInfoCallable(const DescribeDeviceInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDeviceInfoOutcome()>>(
			[this, request]()
			{
			return this->describeDeviceInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudauthClient::DescribeFaceGuardRiskOutcome CloudauthClient::describeFaceGuardRisk(const DescribeFaceGuardRiskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeFaceGuardRiskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeFaceGuardRiskOutcome(DescribeFaceGuardRiskResult(outcome.result()));
	else
		return DescribeFaceGuardRiskOutcome(outcome.error());
}

void CloudauthClient::describeFaceGuardRiskAsync(const DescribeFaceGuardRiskRequest& request, const DescribeFaceGuardRiskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeFaceGuardRisk(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudauthClient::DescribeFaceGuardRiskOutcomeCallable CloudauthClient::describeFaceGuardRiskCallable(const DescribeFaceGuardRiskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeFaceGuardRiskOutcome()>>(
			[this, request]()
			{
			return this->describeFaceGuardRisk(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudauthClient::DescribeFaceVerifyOutcome CloudauthClient::describeFaceVerify(const DescribeFaceVerifyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeFaceVerifyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeFaceVerifyOutcome(DescribeFaceVerifyResult(outcome.result()));
	else
		return DescribeFaceVerifyOutcome(outcome.error());
}

void CloudauthClient::describeFaceVerifyAsync(const DescribeFaceVerifyRequest& request, const DescribeFaceVerifyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeFaceVerify(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudauthClient::DescribeFaceVerifyOutcomeCallable CloudauthClient::describeFaceVerifyCallable(const DescribeFaceVerifyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeFaceVerifyOutcome()>>(
			[this, request]()
			{
			return this->describeFaceVerify(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudauthClient::DescribeOssUploadTokenOutcome CloudauthClient::describeOssUploadToken(const DescribeOssUploadTokenRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeOssUploadTokenOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeOssUploadTokenOutcome(DescribeOssUploadTokenResult(outcome.result()));
	else
		return DescribeOssUploadTokenOutcome(outcome.error());
}

void CloudauthClient::describeOssUploadTokenAsync(const DescribeOssUploadTokenRequest& request, const DescribeOssUploadTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeOssUploadToken(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudauthClient::DescribeOssUploadTokenOutcomeCallable CloudauthClient::describeOssUploadTokenCallable(const DescribeOssUploadTokenRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeOssUploadTokenOutcome()>>(
			[this, request]()
			{
			return this->describeOssUploadToken(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudauthClient::DescribePageFaceVerifyDataOutcome CloudauthClient::describePageFaceVerifyData(const DescribePageFaceVerifyDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribePageFaceVerifyDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribePageFaceVerifyDataOutcome(DescribePageFaceVerifyDataResult(outcome.result()));
	else
		return DescribePageFaceVerifyDataOutcome(outcome.error());
}

void CloudauthClient::describePageFaceVerifyDataAsync(const DescribePageFaceVerifyDataRequest& request, const DescribePageFaceVerifyDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describePageFaceVerifyData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudauthClient::DescribePageFaceVerifyDataOutcomeCallable CloudauthClient::describePageFaceVerifyDataCallable(const DescribePageFaceVerifyDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribePageFaceVerifyDataOutcome()>>(
			[this, request]()
			{
			return this->describePageFaceVerifyData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudauthClient::DescribeSmartStatisticsPageListOutcome CloudauthClient::describeSmartStatisticsPageList(const DescribeSmartStatisticsPageListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSmartStatisticsPageListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSmartStatisticsPageListOutcome(DescribeSmartStatisticsPageListResult(outcome.result()));
	else
		return DescribeSmartStatisticsPageListOutcome(outcome.error());
}

void CloudauthClient::describeSmartStatisticsPageListAsync(const DescribeSmartStatisticsPageListRequest& request, const DescribeSmartStatisticsPageListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSmartStatisticsPageList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudauthClient::DescribeSmartStatisticsPageListOutcomeCallable CloudauthClient::describeSmartStatisticsPageListCallable(const DescribeSmartStatisticsPageListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSmartStatisticsPageListOutcome()>>(
			[this, request]()
			{
			return this->describeSmartStatisticsPageList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudauthClient::DescribeVerifyResultOutcome CloudauthClient::describeVerifyResult(const DescribeVerifyResultRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeVerifyResultOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeVerifyResultOutcome(DescribeVerifyResultResult(outcome.result()));
	else
		return DescribeVerifyResultOutcome(outcome.error());
}

void CloudauthClient::describeVerifyResultAsync(const DescribeVerifyResultRequest& request, const DescribeVerifyResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeVerifyResult(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudauthClient::DescribeVerifyResultOutcomeCallable CloudauthClient::describeVerifyResultCallable(const DescribeVerifyResultRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeVerifyResultOutcome()>>(
			[this, request]()
			{
			return this->describeVerifyResult(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudauthClient::DescribeVerifySDKOutcome CloudauthClient::describeVerifySDK(const DescribeVerifySDKRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeVerifySDKOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeVerifySDKOutcome(DescribeVerifySDKResult(outcome.result()));
	else
		return DescribeVerifySDKOutcome(outcome.error());
}

void CloudauthClient::describeVerifySDKAsync(const DescribeVerifySDKRequest& request, const DescribeVerifySDKAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeVerifySDK(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudauthClient::DescribeVerifySDKOutcomeCallable CloudauthClient::describeVerifySDKCallable(const DescribeVerifySDKRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeVerifySDKOutcome()>>(
			[this, request]()
			{
			return this->describeVerifySDK(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudauthClient::DescribeVerifyTokenOutcome CloudauthClient::describeVerifyToken(const DescribeVerifyTokenRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeVerifyTokenOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeVerifyTokenOutcome(DescribeVerifyTokenResult(outcome.result()));
	else
		return DescribeVerifyTokenOutcome(outcome.error());
}

void CloudauthClient::describeVerifyTokenAsync(const DescribeVerifyTokenRequest& request, const DescribeVerifyTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeVerifyToken(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudauthClient::DescribeVerifyTokenOutcomeCallable CloudauthClient::describeVerifyTokenCallable(const DescribeVerifyTokenRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeVerifyTokenOutcome()>>(
			[this, request]()
			{
			return this->describeVerifyToken(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudauthClient::DetectFaceAttributesOutcome CloudauthClient::detectFaceAttributes(const DetectFaceAttributesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DetectFaceAttributesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DetectFaceAttributesOutcome(DetectFaceAttributesResult(outcome.result()));
	else
		return DetectFaceAttributesOutcome(outcome.error());
}

void CloudauthClient::detectFaceAttributesAsync(const DetectFaceAttributesRequest& request, const DetectFaceAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, detectFaceAttributes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudauthClient::DetectFaceAttributesOutcomeCallable CloudauthClient::detectFaceAttributesCallable(const DetectFaceAttributesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DetectFaceAttributesOutcome()>>(
			[this, request]()
			{
			return this->detectFaceAttributes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudauthClient::Id2MetaPeriodVerifyOutcome CloudauthClient::id2MetaPeriodVerify(const Id2MetaPeriodVerifyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return Id2MetaPeriodVerifyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return Id2MetaPeriodVerifyOutcome(Id2MetaPeriodVerifyResult(outcome.result()));
	else
		return Id2MetaPeriodVerifyOutcome(outcome.error());
}

void CloudauthClient::id2MetaPeriodVerifyAsync(const Id2MetaPeriodVerifyRequest& request, const Id2MetaPeriodVerifyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, id2MetaPeriodVerify(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudauthClient::Id2MetaPeriodVerifyOutcomeCallable CloudauthClient::id2MetaPeriodVerifyCallable(const Id2MetaPeriodVerifyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<Id2MetaPeriodVerifyOutcome()>>(
			[this, request]()
			{
			return this->id2MetaPeriodVerify(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudauthClient::Id2MetaStandardVerifyOutcome CloudauthClient::id2MetaStandardVerify(const Id2MetaStandardVerifyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return Id2MetaStandardVerifyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return Id2MetaStandardVerifyOutcome(Id2MetaStandardVerifyResult(outcome.result()));
	else
		return Id2MetaStandardVerifyOutcome(outcome.error());
}

void CloudauthClient::id2MetaStandardVerifyAsync(const Id2MetaStandardVerifyRequest& request, const Id2MetaStandardVerifyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, id2MetaStandardVerify(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudauthClient::Id2MetaStandardVerifyOutcomeCallable CloudauthClient::id2MetaStandardVerifyCallable(const Id2MetaStandardVerifyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<Id2MetaStandardVerifyOutcome()>>(
			[this, request]()
			{
			return this->id2MetaStandardVerify(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudauthClient::Id2MetaVerifyOutcome CloudauthClient::id2MetaVerify(const Id2MetaVerifyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return Id2MetaVerifyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return Id2MetaVerifyOutcome(Id2MetaVerifyResult(outcome.result()));
	else
		return Id2MetaVerifyOutcome(outcome.error());
}

void CloudauthClient::id2MetaVerifyAsync(const Id2MetaVerifyRequest& request, const Id2MetaVerifyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, id2MetaVerify(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudauthClient::Id2MetaVerifyOutcomeCallable CloudauthClient::id2MetaVerifyCallable(const Id2MetaVerifyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<Id2MetaVerifyOutcome()>>(
			[this, request]()
			{
			return this->id2MetaVerify(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudauthClient::InitFaceVerifyOutcome CloudauthClient::initFaceVerify(const InitFaceVerifyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return InitFaceVerifyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return InitFaceVerifyOutcome(InitFaceVerifyResult(outcome.result()));
	else
		return InitFaceVerifyOutcome(outcome.error());
}

void CloudauthClient::initFaceVerifyAsync(const InitFaceVerifyRequest& request, const InitFaceVerifyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, initFaceVerify(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudauthClient::InitFaceVerifyOutcomeCallable CloudauthClient::initFaceVerifyCallable(const InitFaceVerifyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<InitFaceVerifyOutcome()>>(
			[this, request]()
			{
			return this->initFaceVerify(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudauthClient::InsertWhiteListSettingOutcome CloudauthClient::insertWhiteListSetting(const InsertWhiteListSettingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return InsertWhiteListSettingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return InsertWhiteListSettingOutcome(InsertWhiteListSettingResult(outcome.result()));
	else
		return InsertWhiteListSettingOutcome(outcome.error());
}

void CloudauthClient::insertWhiteListSettingAsync(const InsertWhiteListSettingRequest& request, const InsertWhiteListSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, insertWhiteListSetting(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudauthClient::InsertWhiteListSettingOutcomeCallable CloudauthClient::insertWhiteListSettingCallable(const InsertWhiteListSettingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<InsertWhiteListSettingOutcome()>>(
			[this, request]()
			{
			return this->insertWhiteListSetting(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudauthClient::LivenessFaceVerifyOutcome CloudauthClient::livenessFaceVerify(const LivenessFaceVerifyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return LivenessFaceVerifyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return LivenessFaceVerifyOutcome(LivenessFaceVerifyResult(outcome.result()));
	else
		return LivenessFaceVerifyOutcome(outcome.error());
}

void CloudauthClient::livenessFaceVerifyAsync(const LivenessFaceVerifyRequest& request, const LivenessFaceVerifyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, livenessFaceVerify(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudauthClient::LivenessFaceVerifyOutcomeCallable CloudauthClient::livenessFaceVerifyCallable(const LivenessFaceVerifyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<LivenessFaceVerifyOutcome()>>(
			[this, request]()
			{
			return this->livenessFaceVerify(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudauthClient::Mobile3MetaDetailStandardVerifyOutcome CloudauthClient::mobile3MetaDetailStandardVerify(const Mobile3MetaDetailStandardVerifyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return Mobile3MetaDetailStandardVerifyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return Mobile3MetaDetailStandardVerifyOutcome(Mobile3MetaDetailStandardVerifyResult(outcome.result()));
	else
		return Mobile3MetaDetailStandardVerifyOutcome(outcome.error());
}

void CloudauthClient::mobile3MetaDetailStandardVerifyAsync(const Mobile3MetaDetailStandardVerifyRequest& request, const Mobile3MetaDetailStandardVerifyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, mobile3MetaDetailStandardVerify(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudauthClient::Mobile3MetaDetailStandardVerifyOutcomeCallable CloudauthClient::mobile3MetaDetailStandardVerifyCallable(const Mobile3MetaDetailStandardVerifyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<Mobile3MetaDetailStandardVerifyOutcome()>>(
			[this, request]()
			{
			return this->mobile3MetaDetailStandardVerify(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudauthClient::Mobile3MetaDetailVerifyOutcome CloudauthClient::mobile3MetaDetailVerify(const Mobile3MetaDetailVerifyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return Mobile3MetaDetailVerifyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return Mobile3MetaDetailVerifyOutcome(Mobile3MetaDetailVerifyResult(outcome.result()));
	else
		return Mobile3MetaDetailVerifyOutcome(outcome.error());
}

void CloudauthClient::mobile3MetaDetailVerifyAsync(const Mobile3MetaDetailVerifyRequest& request, const Mobile3MetaDetailVerifyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, mobile3MetaDetailVerify(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudauthClient::Mobile3MetaDetailVerifyOutcomeCallable CloudauthClient::mobile3MetaDetailVerifyCallable(const Mobile3MetaDetailVerifyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<Mobile3MetaDetailVerifyOutcome()>>(
			[this, request]()
			{
			return this->mobile3MetaDetailVerify(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudauthClient::Mobile3MetaSimpleStandardVerifyOutcome CloudauthClient::mobile3MetaSimpleStandardVerify(const Mobile3MetaSimpleStandardVerifyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return Mobile3MetaSimpleStandardVerifyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return Mobile3MetaSimpleStandardVerifyOutcome(Mobile3MetaSimpleStandardVerifyResult(outcome.result()));
	else
		return Mobile3MetaSimpleStandardVerifyOutcome(outcome.error());
}

void CloudauthClient::mobile3MetaSimpleStandardVerifyAsync(const Mobile3MetaSimpleStandardVerifyRequest& request, const Mobile3MetaSimpleStandardVerifyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, mobile3MetaSimpleStandardVerify(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudauthClient::Mobile3MetaSimpleStandardVerifyOutcomeCallable CloudauthClient::mobile3MetaSimpleStandardVerifyCallable(const Mobile3MetaSimpleStandardVerifyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<Mobile3MetaSimpleStandardVerifyOutcome()>>(
			[this, request]()
			{
			return this->mobile3MetaSimpleStandardVerify(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudauthClient::Mobile3MetaSimpleVerifyOutcome CloudauthClient::mobile3MetaSimpleVerify(const Mobile3MetaSimpleVerifyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return Mobile3MetaSimpleVerifyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return Mobile3MetaSimpleVerifyOutcome(Mobile3MetaSimpleVerifyResult(outcome.result()));
	else
		return Mobile3MetaSimpleVerifyOutcome(outcome.error());
}

void CloudauthClient::mobile3MetaSimpleVerifyAsync(const Mobile3MetaSimpleVerifyRequest& request, const Mobile3MetaSimpleVerifyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, mobile3MetaSimpleVerify(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudauthClient::Mobile3MetaSimpleVerifyOutcomeCallable CloudauthClient::mobile3MetaSimpleVerifyCallable(const Mobile3MetaSimpleVerifyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<Mobile3MetaSimpleVerifyOutcome()>>(
			[this, request]()
			{
			return this->mobile3MetaSimpleVerify(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudauthClient::MobileDetectOutcome CloudauthClient::mobileDetect(const MobileDetectRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return MobileDetectOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return MobileDetectOutcome(MobileDetectResult(outcome.result()));
	else
		return MobileDetectOutcome(outcome.error());
}

void CloudauthClient::mobileDetectAsync(const MobileDetectRequest& request, const MobileDetectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, mobileDetect(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudauthClient::MobileDetectOutcomeCallable CloudauthClient::mobileDetectCallable(const MobileDetectRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<MobileDetectOutcome()>>(
			[this, request]()
			{
			return this->mobileDetect(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudauthClient::MobileOnlineStatusOutcome CloudauthClient::mobileOnlineStatus(const MobileOnlineStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return MobileOnlineStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return MobileOnlineStatusOutcome(MobileOnlineStatusResult(outcome.result()));
	else
		return MobileOnlineStatusOutcome(outcome.error());
}

void CloudauthClient::mobileOnlineStatusAsync(const MobileOnlineStatusRequest& request, const MobileOnlineStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, mobileOnlineStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudauthClient::MobileOnlineStatusOutcomeCallable CloudauthClient::mobileOnlineStatusCallable(const MobileOnlineStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<MobileOnlineStatusOutcome()>>(
			[this, request]()
			{
			return this->mobileOnlineStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudauthClient::MobileOnlineTimeOutcome CloudauthClient::mobileOnlineTime(const MobileOnlineTimeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return MobileOnlineTimeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return MobileOnlineTimeOutcome(MobileOnlineTimeResult(outcome.result()));
	else
		return MobileOnlineTimeOutcome(outcome.error());
}

void CloudauthClient::mobileOnlineTimeAsync(const MobileOnlineTimeRequest& request, const MobileOnlineTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, mobileOnlineTime(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudauthClient::MobileOnlineTimeOutcomeCallable CloudauthClient::mobileOnlineTimeCallable(const MobileOnlineTimeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<MobileOnlineTimeOutcome()>>(
			[this, request]()
			{
			return this->mobileOnlineTime(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudauthClient::ModifyDeviceInfoOutcome CloudauthClient::modifyDeviceInfo(const ModifyDeviceInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDeviceInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDeviceInfoOutcome(ModifyDeviceInfoResult(outcome.result()));
	else
		return ModifyDeviceInfoOutcome(outcome.error());
}

void CloudauthClient::modifyDeviceInfoAsync(const ModifyDeviceInfoRequest& request, const ModifyDeviceInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDeviceInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudauthClient::ModifyDeviceInfoOutcomeCallable CloudauthClient::modifyDeviceInfoCallable(const ModifyDeviceInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDeviceInfoOutcome()>>(
			[this, request]()
			{
			return this->modifyDeviceInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudauthClient::PageQueryWhiteListSettingOutcome CloudauthClient::pageQueryWhiteListSetting(const PageQueryWhiteListSettingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PageQueryWhiteListSettingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PageQueryWhiteListSettingOutcome(PageQueryWhiteListSettingResult(outcome.result()));
	else
		return PageQueryWhiteListSettingOutcome(outcome.error());
}

void CloudauthClient::pageQueryWhiteListSettingAsync(const PageQueryWhiteListSettingRequest& request, const PageQueryWhiteListSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, pageQueryWhiteListSetting(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudauthClient::PageQueryWhiteListSettingOutcomeCallable CloudauthClient::pageQueryWhiteListSettingCallable(const PageQueryWhiteListSettingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PageQueryWhiteListSettingOutcome()>>(
			[this, request]()
			{
			return this->pageQueryWhiteListSetting(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudauthClient::RemoveWhiteListSettingOutcome CloudauthClient::removeWhiteListSetting(const RemoveWhiteListSettingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RemoveWhiteListSettingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RemoveWhiteListSettingOutcome(RemoveWhiteListSettingResult(outcome.result()));
	else
		return RemoveWhiteListSettingOutcome(outcome.error());
}

void CloudauthClient::removeWhiteListSettingAsync(const RemoveWhiteListSettingRequest& request, const RemoveWhiteListSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, removeWhiteListSetting(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudauthClient::RemoveWhiteListSettingOutcomeCallable CloudauthClient::removeWhiteListSettingCallable(const RemoveWhiteListSettingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RemoveWhiteListSettingOutcome()>>(
			[this, request]()
			{
			return this->removeWhiteListSetting(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudauthClient::Vehicle5ItemQueryOutcome CloudauthClient::vehicle5ItemQuery(const Vehicle5ItemQueryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return Vehicle5ItemQueryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return Vehicle5ItemQueryOutcome(Vehicle5ItemQueryResult(outcome.result()));
	else
		return Vehicle5ItemQueryOutcome(outcome.error());
}

void CloudauthClient::vehicle5ItemQueryAsync(const Vehicle5ItemQueryRequest& request, const Vehicle5ItemQueryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, vehicle5ItemQuery(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudauthClient::Vehicle5ItemQueryOutcomeCallable CloudauthClient::vehicle5ItemQueryCallable(const Vehicle5ItemQueryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<Vehicle5ItemQueryOutcome()>>(
			[this, request]()
			{
			return this->vehicle5ItemQuery(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudauthClient::VehicleInsureQueryOutcome CloudauthClient::vehicleInsureQuery(const VehicleInsureQueryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return VehicleInsureQueryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return VehicleInsureQueryOutcome(VehicleInsureQueryResult(outcome.result()));
	else
		return VehicleInsureQueryOutcome(outcome.error());
}

void CloudauthClient::vehicleInsureQueryAsync(const VehicleInsureQueryRequest& request, const VehicleInsureQueryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, vehicleInsureQuery(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudauthClient::VehicleInsureQueryOutcomeCallable CloudauthClient::vehicleInsureQueryCallable(const VehicleInsureQueryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<VehicleInsureQueryOutcome()>>(
			[this, request]()
			{
			return this->vehicleInsureQuery(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudauthClient::VehicleMetaVerifyOutcome CloudauthClient::vehicleMetaVerify(const VehicleMetaVerifyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return VehicleMetaVerifyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return VehicleMetaVerifyOutcome(VehicleMetaVerifyResult(outcome.result()));
	else
		return VehicleMetaVerifyOutcome(outcome.error());
}

void CloudauthClient::vehicleMetaVerifyAsync(const VehicleMetaVerifyRequest& request, const VehicleMetaVerifyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, vehicleMetaVerify(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudauthClient::VehicleMetaVerifyOutcomeCallable CloudauthClient::vehicleMetaVerifyCallable(const VehicleMetaVerifyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<VehicleMetaVerifyOutcome()>>(
			[this, request]()
			{
			return this->vehicleMetaVerify(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudauthClient::VehicleMetaVerifyV2Outcome CloudauthClient::vehicleMetaVerifyV2(const VehicleMetaVerifyV2Request &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return VehicleMetaVerifyV2Outcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return VehicleMetaVerifyV2Outcome(VehicleMetaVerifyV2Result(outcome.result()));
	else
		return VehicleMetaVerifyV2Outcome(outcome.error());
}

void CloudauthClient::vehicleMetaVerifyV2Async(const VehicleMetaVerifyV2Request& request, const VehicleMetaVerifyV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, vehicleMetaVerifyV2(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudauthClient::VehicleMetaVerifyV2OutcomeCallable CloudauthClient::vehicleMetaVerifyV2Callable(const VehicleMetaVerifyV2Request &request) const
{
	auto task = std::make_shared<std::packaged_task<VehicleMetaVerifyV2Outcome()>>(
			[this, request]()
			{
			return this->vehicleMetaVerifyV2(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudauthClient::VehicleQueryOutcome CloudauthClient::vehicleQuery(const VehicleQueryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return VehicleQueryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return VehicleQueryOutcome(VehicleQueryResult(outcome.result()));
	else
		return VehicleQueryOutcome(outcome.error());
}

void CloudauthClient::vehicleQueryAsync(const VehicleQueryRequest& request, const VehicleQueryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, vehicleQuery(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudauthClient::VehicleQueryOutcomeCallable CloudauthClient::vehicleQueryCallable(const VehicleQueryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<VehicleQueryOutcome()>>(
			[this, request]()
			{
			return this->vehicleQuery(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudauthClient::VerifyMaterialOutcome CloudauthClient::verifyMaterial(const VerifyMaterialRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return VerifyMaterialOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return VerifyMaterialOutcome(VerifyMaterialResult(outcome.result()));
	else
		return VerifyMaterialOutcome(outcome.error());
}

void CloudauthClient::verifyMaterialAsync(const VerifyMaterialRequest& request, const VerifyMaterialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, verifyMaterial(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudauthClient::VerifyMaterialOutcomeCallable CloudauthClient::verifyMaterialCallable(const VerifyMaterialRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<VerifyMaterialOutcome()>>(
			[this, request]()
			{
			return this->verifyMaterial(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

