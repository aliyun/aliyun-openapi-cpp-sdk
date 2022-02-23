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

