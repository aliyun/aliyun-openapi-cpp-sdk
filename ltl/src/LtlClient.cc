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

#include <alibabacloud/ltl/LtlClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Ltl;
using namespace AlibabaCloud::Ltl::Model;

namespace
{
	const std::string SERVICE_NAME = "ltl";
}

LtlClient::LtlClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

LtlClient::LtlClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

LtlClient::LtlClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

LtlClient::~LtlClient()
{}

LtlClient::ApplyDataModelConfigInfoOutcome LtlClient::applyDataModelConfigInfo(const ApplyDataModelConfigInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ApplyDataModelConfigInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ApplyDataModelConfigInfoOutcome(ApplyDataModelConfigInfoResult(outcome.result()));
	else
		return ApplyDataModelConfigInfoOutcome(outcome.error());
}

void LtlClient::applyDataModelConfigInfoAsync(const ApplyDataModelConfigInfoRequest& request, const ApplyDataModelConfigInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, applyDataModelConfigInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LtlClient::ApplyDataModelConfigInfoOutcomeCallable LtlClient::applyDataModelConfigInfoCallable(const ApplyDataModelConfigInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ApplyDataModelConfigInfoOutcome()>>(
			[this, request]()
			{
			return this->applyDataModelConfigInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LtlClient::AttachDataOutcome LtlClient::attachData(const AttachDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AttachDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AttachDataOutcome(AttachDataResult(outcome.result()));
	else
		return AttachDataOutcome(outcome.error());
}

void LtlClient::attachDataAsync(const AttachDataRequest& request, const AttachDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, attachData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LtlClient::AttachDataOutcomeCallable LtlClient::attachDataCallable(const AttachDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AttachDataOutcome()>>(
			[this, request]()
			{
			return this->attachData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LtlClient::AttachDataWithSignatureOutcome LtlClient::attachDataWithSignature(const AttachDataWithSignatureRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AttachDataWithSignatureOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AttachDataWithSignatureOutcome(AttachDataWithSignatureResult(outcome.result()));
	else
		return AttachDataWithSignatureOutcome(outcome.error());
}

void LtlClient::attachDataWithSignatureAsync(const AttachDataWithSignatureRequest& request, const AttachDataWithSignatureAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, attachDataWithSignature(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LtlClient::AttachDataWithSignatureOutcomeCallable LtlClient::attachDataWithSignatureCallable(const AttachDataWithSignatureRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AttachDataWithSignatureOutcome()>>(
			[this, request]()
			{
			return this->attachDataWithSignature(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LtlClient::AuthorizeDeviceOutcome LtlClient::authorizeDevice(const AuthorizeDeviceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AuthorizeDeviceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AuthorizeDeviceOutcome(AuthorizeDeviceResult(outcome.result()));
	else
		return AuthorizeDeviceOutcome(outcome.error());
}

void LtlClient::authorizeDeviceAsync(const AuthorizeDeviceRequest& request, const AuthorizeDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, authorizeDevice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LtlClient::AuthorizeDeviceOutcomeCallable LtlClient::authorizeDeviceCallable(const AuthorizeDeviceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AuthorizeDeviceOutcome()>>(
			[this, request]()
			{
			return this->authorizeDevice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LtlClient::AuthorizeDeviceGroupOutcome LtlClient::authorizeDeviceGroup(const AuthorizeDeviceGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AuthorizeDeviceGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AuthorizeDeviceGroupOutcome(AuthorizeDeviceGroupResult(outcome.result()));
	else
		return AuthorizeDeviceGroupOutcome(outcome.error());
}

void LtlClient::authorizeDeviceGroupAsync(const AuthorizeDeviceGroupRequest& request, const AuthorizeDeviceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, authorizeDeviceGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LtlClient::AuthorizeDeviceGroupOutcomeCallable LtlClient::authorizeDeviceGroupCallable(const AuthorizeDeviceGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AuthorizeDeviceGroupOutcome()>>(
			[this, request]()
			{
			return this->authorizeDeviceGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LtlClient::BatchUploadMPCoSPhaseDigestInfoOutcome LtlClient::batchUploadMPCoSPhaseDigestInfo(const BatchUploadMPCoSPhaseDigestInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BatchUploadMPCoSPhaseDigestInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BatchUploadMPCoSPhaseDigestInfoOutcome(BatchUploadMPCoSPhaseDigestInfoResult(outcome.result()));
	else
		return BatchUploadMPCoSPhaseDigestInfoOutcome(outcome.error());
}

void LtlClient::batchUploadMPCoSPhaseDigestInfoAsync(const BatchUploadMPCoSPhaseDigestInfoRequest& request, const BatchUploadMPCoSPhaseDigestInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, batchUploadMPCoSPhaseDigestInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LtlClient::BatchUploadMPCoSPhaseDigestInfoOutcomeCallable LtlClient::batchUploadMPCoSPhaseDigestInfoCallable(const BatchUploadMPCoSPhaseDigestInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BatchUploadMPCoSPhaseDigestInfoOutcome()>>(
			[this, request]()
			{
			return this->batchUploadMPCoSPhaseDigestInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LtlClient::BatchUploadMPCoSPhaseDigestInfoByDeviceOutcome LtlClient::batchUploadMPCoSPhaseDigestInfoByDevice(const BatchUploadMPCoSPhaseDigestInfoByDeviceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BatchUploadMPCoSPhaseDigestInfoByDeviceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BatchUploadMPCoSPhaseDigestInfoByDeviceOutcome(BatchUploadMPCoSPhaseDigestInfoByDeviceResult(outcome.result()));
	else
		return BatchUploadMPCoSPhaseDigestInfoByDeviceOutcome(outcome.error());
}

void LtlClient::batchUploadMPCoSPhaseDigestInfoByDeviceAsync(const BatchUploadMPCoSPhaseDigestInfoByDeviceRequest& request, const BatchUploadMPCoSPhaseDigestInfoByDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, batchUploadMPCoSPhaseDigestInfoByDevice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LtlClient::BatchUploadMPCoSPhaseDigestInfoByDeviceOutcomeCallable LtlClient::batchUploadMPCoSPhaseDigestInfoByDeviceCallable(const BatchUploadMPCoSPhaseDigestInfoByDeviceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BatchUploadMPCoSPhaseDigestInfoByDeviceOutcome()>>(
			[this, request]()
			{
			return this->batchUploadMPCoSPhaseDigestInfoByDevice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LtlClient::BatchUploadMPCoSPhaseTextInfoOutcome LtlClient::batchUploadMPCoSPhaseTextInfo(const BatchUploadMPCoSPhaseTextInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BatchUploadMPCoSPhaseTextInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BatchUploadMPCoSPhaseTextInfoOutcome(BatchUploadMPCoSPhaseTextInfoResult(outcome.result()));
	else
		return BatchUploadMPCoSPhaseTextInfoOutcome(outcome.error());
}

void LtlClient::batchUploadMPCoSPhaseTextInfoAsync(const BatchUploadMPCoSPhaseTextInfoRequest& request, const BatchUploadMPCoSPhaseTextInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, batchUploadMPCoSPhaseTextInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LtlClient::BatchUploadMPCoSPhaseTextInfoOutcomeCallable LtlClient::batchUploadMPCoSPhaseTextInfoCallable(const BatchUploadMPCoSPhaseTextInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BatchUploadMPCoSPhaseTextInfoOutcome()>>(
			[this, request]()
			{
			return this->batchUploadMPCoSPhaseTextInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LtlClient::BatchUploadMPCoSPhaseTextInfoByDeviceOutcome LtlClient::batchUploadMPCoSPhaseTextInfoByDevice(const BatchUploadMPCoSPhaseTextInfoByDeviceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BatchUploadMPCoSPhaseTextInfoByDeviceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BatchUploadMPCoSPhaseTextInfoByDeviceOutcome(BatchUploadMPCoSPhaseTextInfoByDeviceResult(outcome.result()));
	else
		return BatchUploadMPCoSPhaseTextInfoByDeviceOutcome(outcome.error());
}

void LtlClient::batchUploadMPCoSPhaseTextInfoByDeviceAsync(const BatchUploadMPCoSPhaseTextInfoByDeviceRequest& request, const BatchUploadMPCoSPhaseTextInfoByDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, batchUploadMPCoSPhaseTextInfoByDevice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LtlClient::BatchUploadMPCoSPhaseTextInfoByDeviceOutcomeCallable LtlClient::batchUploadMPCoSPhaseTextInfoByDeviceCallable(const BatchUploadMPCoSPhaseTextInfoByDeviceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BatchUploadMPCoSPhaseTextInfoByDeviceOutcome()>>(
			[this, request]()
			{
			return this->batchUploadMPCoSPhaseTextInfoByDevice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LtlClient::CreateMPCoSPhaseOutcome LtlClient::createMPCoSPhase(const CreateMPCoSPhaseRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateMPCoSPhaseOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateMPCoSPhaseOutcome(CreateMPCoSPhaseResult(outcome.result()));
	else
		return CreateMPCoSPhaseOutcome(outcome.error());
}

void LtlClient::createMPCoSPhaseAsync(const CreateMPCoSPhaseRequest& request, const CreateMPCoSPhaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createMPCoSPhase(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LtlClient::CreateMPCoSPhaseOutcomeCallable LtlClient::createMPCoSPhaseCallable(const CreateMPCoSPhaseRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateMPCoSPhaseOutcome()>>(
			[this, request]()
			{
			return this->createMPCoSPhase(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LtlClient::CreateMPCoSPhaseGroupOutcome LtlClient::createMPCoSPhaseGroup(const CreateMPCoSPhaseGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateMPCoSPhaseGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateMPCoSPhaseGroupOutcome(CreateMPCoSPhaseGroupResult(outcome.result()));
	else
		return CreateMPCoSPhaseGroupOutcome(outcome.error());
}

void LtlClient::createMPCoSPhaseGroupAsync(const CreateMPCoSPhaseGroupRequest& request, const CreateMPCoSPhaseGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createMPCoSPhaseGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LtlClient::CreateMPCoSPhaseGroupOutcomeCallable LtlClient::createMPCoSPhaseGroupCallable(const CreateMPCoSPhaseGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateMPCoSPhaseGroupOutcome()>>(
			[this, request]()
			{
			return this->createMPCoSPhaseGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LtlClient::CreateMemberOutcome LtlClient::createMember(const CreateMemberRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateMemberOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateMemberOutcome(CreateMemberResult(outcome.result()));
	else
		return CreateMemberOutcome(outcome.error());
}

void LtlClient::createMemberAsync(const CreateMemberRequest& request, const CreateMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createMember(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LtlClient::CreateMemberOutcomeCallable LtlClient::createMemberCallable(const CreateMemberRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateMemberOutcome()>>(
			[this, request]()
			{
			return this->createMember(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LtlClient::DescribeCapacityInfoOutcome LtlClient::describeCapacityInfo(const DescribeCapacityInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCapacityInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCapacityInfoOutcome(DescribeCapacityInfoResult(outcome.result()));
	else
		return DescribeCapacityInfoOutcome(outcome.error());
}

void LtlClient::describeCapacityInfoAsync(const DescribeCapacityInfoRequest& request, const DescribeCapacityInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCapacityInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LtlClient::DescribeCapacityInfoOutcomeCallable LtlClient::describeCapacityInfoCallable(const DescribeCapacityInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCapacityInfoOutcome()>>(
			[this, request]()
			{
			return this->describeCapacityInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LtlClient::DescribeMPCoSAuthorizedInfoOutcome LtlClient::describeMPCoSAuthorizedInfo(const DescribeMPCoSAuthorizedInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeMPCoSAuthorizedInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeMPCoSAuthorizedInfoOutcome(DescribeMPCoSAuthorizedInfoResult(outcome.result()));
	else
		return DescribeMPCoSAuthorizedInfoOutcome(outcome.error());
}

void LtlClient::describeMPCoSAuthorizedInfoAsync(const DescribeMPCoSAuthorizedInfoRequest& request, const DescribeMPCoSAuthorizedInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeMPCoSAuthorizedInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LtlClient::DescribeMPCoSAuthorizedInfoOutcomeCallable LtlClient::describeMPCoSAuthorizedInfoCallable(const DescribeMPCoSAuthorizedInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeMPCoSAuthorizedInfoOutcome()>>(
			[this, request]()
			{
			return this->describeMPCoSAuthorizedInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LtlClient::DescribeMPCoSPhaseInfoOutcome LtlClient::describeMPCoSPhaseInfo(const DescribeMPCoSPhaseInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeMPCoSPhaseInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeMPCoSPhaseInfoOutcome(DescribeMPCoSPhaseInfoResult(outcome.result()));
	else
		return DescribeMPCoSPhaseInfoOutcome(outcome.error());
}

void LtlClient::describeMPCoSPhaseInfoAsync(const DescribeMPCoSPhaseInfoRequest& request, const DescribeMPCoSPhaseInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeMPCoSPhaseInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LtlClient::DescribeMPCoSPhaseInfoOutcomeCallable LtlClient::describeMPCoSPhaseInfoCallable(const DescribeMPCoSPhaseInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeMPCoSPhaseInfoOutcome()>>(
			[this, request]()
			{
			return this->describeMPCoSPhaseInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LtlClient::DescribeMPCoSResourceInfoOutcome LtlClient::describeMPCoSResourceInfo(const DescribeMPCoSResourceInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeMPCoSResourceInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeMPCoSResourceInfoOutcome(DescribeMPCoSResourceInfoResult(outcome.result()));
	else
		return DescribeMPCoSResourceInfoOutcome(outcome.error());
}

void LtlClient::describeMPCoSResourceInfoAsync(const DescribeMPCoSResourceInfoRequest& request, const DescribeMPCoSResourceInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeMPCoSResourceInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LtlClient::DescribeMPCoSResourceInfoOutcomeCallable LtlClient::describeMPCoSResourceInfoCallable(const DescribeMPCoSResourceInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeMPCoSResourceInfoOutcome()>>(
			[this, request]()
			{
			return this->describeMPCoSResourceInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LtlClient::DescribeMemberCapacityInfoOutcome LtlClient::describeMemberCapacityInfo(const DescribeMemberCapacityInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeMemberCapacityInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeMemberCapacityInfoOutcome(DescribeMemberCapacityInfoResult(outcome.result()));
	else
		return DescribeMemberCapacityInfoOutcome(outcome.error());
}

void LtlClient::describeMemberCapacityInfoAsync(const DescribeMemberCapacityInfoRequest& request, const DescribeMemberCapacityInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeMemberCapacityInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LtlClient::DescribeMemberCapacityInfoOutcomeCallable LtlClient::describeMemberCapacityInfoCallable(const DescribeMemberCapacityInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeMemberCapacityInfoOutcome()>>(
			[this, request]()
			{
			return this->describeMemberCapacityInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LtlClient::DescribeResourceInfoOutcome LtlClient::describeResourceInfo(const DescribeResourceInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeResourceInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeResourceInfoOutcome(DescribeResourceInfoResult(outcome.result()));
	else
		return DescribeResourceInfoOutcome(outcome.error());
}

void LtlClient::describeResourceInfoAsync(const DescribeResourceInfoRequest& request, const DescribeResourceInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeResourceInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LtlClient::DescribeResourceInfoOutcomeCallable LtlClient::describeResourceInfoCallable(const DescribeResourceInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeResourceInfoOutcome()>>(
			[this, request]()
			{
			return this->describeResourceInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LtlClient::GetBlockChainInfoOutcome LtlClient::getBlockChainInfo(const GetBlockChainInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetBlockChainInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetBlockChainInfoOutcome(GetBlockChainInfoResult(outcome.result()));
	else
		return GetBlockChainInfoOutcome(outcome.error());
}

void LtlClient::getBlockChainInfoAsync(const GetBlockChainInfoRequest& request, const GetBlockChainInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getBlockChainInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LtlClient::GetBlockChainInfoOutcomeCallable LtlClient::getBlockChainInfoCallable(const GetBlockChainInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetBlockChainInfoOutcome()>>(
			[this, request]()
			{
			return this->getBlockChainInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LtlClient::GetDataOutcome LtlClient::getData(const GetDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetDataOutcome(GetDataResult(outcome.result()));
	else
		return GetDataOutcome(outcome.error());
}

void LtlClient::getDataAsync(const GetDataRequest& request, const GetDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LtlClient::GetDataOutcomeCallable LtlClient::getDataCallable(const GetDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetDataOutcome()>>(
			[this, request]()
			{
			return this->getData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LtlClient::GetDataModelConfigInfoOutcome LtlClient::getDataModelConfigInfo(const GetDataModelConfigInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetDataModelConfigInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetDataModelConfigInfoOutcome(GetDataModelConfigInfoResult(outcome.result()));
	else
		return GetDataModelConfigInfoOutcome(outcome.error());
}

void LtlClient::getDataModelConfigInfoAsync(const GetDataModelConfigInfoRequest& request, const GetDataModelConfigInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getDataModelConfigInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LtlClient::GetDataModelConfigInfoOutcomeCallable LtlClient::getDataModelConfigInfoCallable(const GetDataModelConfigInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetDataModelConfigInfoOutcome()>>(
			[this, request]()
			{
			return this->getDataModelConfigInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LtlClient::GetHistoryDataCountOutcome LtlClient::getHistoryDataCount(const GetHistoryDataCountRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetHistoryDataCountOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetHistoryDataCountOutcome(GetHistoryDataCountResult(outcome.result()));
	else
		return GetHistoryDataCountOutcome(outcome.error());
}

void LtlClient::getHistoryDataCountAsync(const GetHistoryDataCountRequest& request, const GetHistoryDataCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getHistoryDataCount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LtlClient::GetHistoryDataCountOutcomeCallable LtlClient::getHistoryDataCountCallable(const GetHistoryDataCountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetHistoryDataCountOutcome()>>(
			[this, request]()
			{
			return this->getHistoryDataCount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LtlClient::GetHistoryDataListOutcome LtlClient::getHistoryDataList(const GetHistoryDataListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetHistoryDataListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetHistoryDataListOutcome(GetHistoryDataListResult(outcome.result()));
	else
		return GetHistoryDataListOutcome(outcome.error());
}

void LtlClient::getHistoryDataListAsync(const GetHistoryDataListRequest& request, const GetHistoryDataListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getHistoryDataList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LtlClient::GetHistoryDataListOutcomeCallable LtlClient::getHistoryDataListCallable(const GetHistoryDataListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetHistoryDataListOutcome()>>(
			[this, request]()
			{
			return this->getHistoryDataList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LtlClient::ListDependentDataModelsOutcome LtlClient::listDependentDataModels(const ListDependentDataModelsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDependentDataModelsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDependentDataModelsOutcome(ListDependentDataModelsResult(outcome.result()));
	else
		return ListDependentDataModelsOutcome(outcome.error());
}

void LtlClient::listDependentDataModelsAsync(const ListDependentDataModelsRequest& request, const ListDependentDataModelsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDependentDataModels(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LtlClient::ListDependentDataModelsOutcomeCallable LtlClient::listDependentDataModelsCallable(const ListDependentDataModelsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDependentDataModelsOutcome()>>(
			[this, request]()
			{
			return this->listDependentDataModels(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LtlClient::ListDeviceOutcome LtlClient::listDevice(const ListDeviceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDeviceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDeviceOutcome(ListDeviceResult(outcome.result()));
	else
		return ListDeviceOutcome(outcome.error());
}

void LtlClient::listDeviceAsync(const ListDeviceRequest& request, const ListDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDevice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LtlClient::ListDeviceOutcomeCallable LtlClient::listDeviceCallable(const ListDeviceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDeviceOutcome()>>(
			[this, request]()
			{
			return this->listDevice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LtlClient::ListDeviceGroupOutcome LtlClient::listDeviceGroup(const ListDeviceGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDeviceGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDeviceGroupOutcome(ListDeviceGroupResult(outcome.result()));
	else
		return ListDeviceGroupOutcome(outcome.error());
}

void LtlClient::listDeviceGroupAsync(const ListDeviceGroupRequest& request, const ListDeviceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDeviceGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LtlClient::ListDeviceGroupOutcomeCallable LtlClient::listDeviceGroupCallable(const ListDeviceGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDeviceGroupOutcome()>>(
			[this, request]()
			{
			return this->listDeviceGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LtlClient::ListMPCoSPhaseOutcome LtlClient::listMPCoSPhase(const ListMPCoSPhaseRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListMPCoSPhaseOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListMPCoSPhaseOutcome(ListMPCoSPhaseResult(outcome.result()));
	else
		return ListMPCoSPhaseOutcome(outcome.error());
}

void LtlClient::listMPCoSPhaseAsync(const ListMPCoSPhaseRequest& request, const ListMPCoSPhaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listMPCoSPhase(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LtlClient::ListMPCoSPhaseOutcomeCallable LtlClient::listMPCoSPhaseCallable(const ListMPCoSPhaseRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListMPCoSPhaseOutcome()>>(
			[this, request]()
			{
			return this->listMPCoSPhase(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LtlClient::ListMPCoSPhaseGroupOutcome LtlClient::listMPCoSPhaseGroup(const ListMPCoSPhaseGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListMPCoSPhaseGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListMPCoSPhaseGroupOutcome(ListMPCoSPhaseGroupResult(outcome.result()));
	else
		return ListMPCoSPhaseGroupOutcome(outcome.error());
}

void LtlClient::listMPCoSPhaseGroupAsync(const ListMPCoSPhaseGroupRequest& request, const ListMPCoSPhaseGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listMPCoSPhaseGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LtlClient::ListMPCoSPhaseGroupOutcomeCallable LtlClient::listMPCoSPhaseGroupCallable(const ListMPCoSPhaseGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListMPCoSPhaseGroupOutcome()>>(
			[this, request]()
			{
			return this->listMPCoSPhaseGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LtlClient::ListMPCoSPhaseHistoryOutcome LtlClient::listMPCoSPhaseHistory(const ListMPCoSPhaseHistoryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListMPCoSPhaseHistoryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListMPCoSPhaseHistoryOutcome(ListMPCoSPhaseHistoryResult(outcome.result()));
	else
		return ListMPCoSPhaseHistoryOutcome(outcome.error());
}

void LtlClient::listMPCoSPhaseHistoryAsync(const ListMPCoSPhaseHistoryRequest& request, const ListMPCoSPhaseHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listMPCoSPhaseHistory(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LtlClient::ListMPCoSPhaseHistoryOutcomeCallable LtlClient::listMPCoSPhaseHistoryCallable(const ListMPCoSPhaseHistoryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListMPCoSPhaseHistoryOutcome()>>(
			[this, request]()
			{
			return this->listMPCoSPhaseHistory(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LtlClient::ListMemberOutcome LtlClient::listMember(const ListMemberRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListMemberOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListMemberOutcome(ListMemberResult(outcome.result()));
	else
		return ListMemberOutcome(outcome.error());
}

void LtlClient::listMemberAsync(const ListMemberRequest& request, const ListMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listMember(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LtlClient::ListMemberOutcomeCallable LtlClient::listMemberCallable(const ListMemberRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListMemberOutcome()>>(
			[this, request]()
			{
			return this->listMember(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LtlClient::ListMultiPartyCollaborationChainOutcome LtlClient::listMultiPartyCollaborationChain(const ListMultiPartyCollaborationChainRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListMultiPartyCollaborationChainOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListMultiPartyCollaborationChainOutcome(ListMultiPartyCollaborationChainResult(outcome.result()));
	else
		return ListMultiPartyCollaborationChainOutcome(outcome.error());
}

void LtlClient::listMultiPartyCollaborationChainAsync(const ListMultiPartyCollaborationChainRequest& request, const ListMultiPartyCollaborationChainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listMultiPartyCollaborationChain(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LtlClient::ListMultiPartyCollaborationChainOutcomeCallable LtlClient::listMultiPartyCollaborationChainCallable(const ListMultiPartyCollaborationChainRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListMultiPartyCollaborationChainOutcome()>>(
			[this, request]()
			{
			return this->listMultiPartyCollaborationChain(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LtlClient::ListPSMemberDataTypeCodeOutcome LtlClient::listPSMemberDataTypeCode(const ListPSMemberDataTypeCodeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListPSMemberDataTypeCodeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListPSMemberDataTypeCodeOutcome(ListPSMemberDataTypeCodeResult(outcome.result()));
	else
		return ListPSMemberDataTypeCodeOutcome(outcome.error());
}

void LtlClient::listPSMemberDataTypeCodeAsync(const ListPSMemberDataTypeCodeRequest& request, const ListPSMemberDataTypeCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listPSMemberDataTypeCode(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LtlClient::ListPSMemberDataTypeCodeOutcomeCallable LtlClient::listPSMemberDataTypeCodeCallable(const ListPSMemberDataTypeCodeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListPSMemberDataTypeCodeOutcome()>>(
			[this, request]()
			{
			return this->listPSMemberDataTypeCode(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LtlClient::ListProofChainOutcome LtlClient::listProofChain(const ListProofChainRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListProofChainOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListProofChainOutcome(ListProofChainResult(outcome.result()));
	else
		return ListProofChainOutcome(outcome.error());
}

void LtlClient::listProofChainAsync(const ListProofChainRequest& request, const ListProofChainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listProofChain(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LtlClient::ListProofChainOutcomeCallable LtlClient::listProofChainCallable(const ListProofChainRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListProofChainOutcome()>>(
			[this, request]()
			{
			return this->listProofChain(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LtlClient::LockMemberOutcome LtlClient::lockMember(const LockMemberRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return LockMemberOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return LockMemberOutcome(LockMemberResult(outcome.result()));
	else
		return LockMemberOutcome(outcome.error());
}

void LtlClient::lockMemberAsync(const LockMemberRequest& request, const LockMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, lockMember(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LtlClient::LockMemberOutcomeCallable LtlClient::lockMemberCallable(const LockMemberRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<LockMemberOutcome()>>(
			[this, request]()
			{
			return this->lockMember(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LtlClient::ModifyMPCoSPhaseOutcome LtlClient::modifyMPCoSPhase(const ModifyMPCoSPhaseRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyMPCoSPhaseOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyMPCoSPhaseOutcome(ModifyMPCoSPhaseResult(outcome.result()));
	else
		return ModifyMPCoSPhaseOutcome(outcome.error());
}

void LtlClient::modifyMPCoSPhaseAsync(const ModifyMPCoSPhaseRequest& request, const ModifyMPCoSPhaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyMPCoSPhase(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LtlClient::ModifyMPCoSPhaseOutcomeCallable LtlClient::modifyMPCoSPhaseCallable(const ModifyMPCoSPhaseRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyMPCoSPhaseOutcome()>>(
			[this, request]()
			{
			return this->modifyMPCoSPhase(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LtlClient::ModifyMPCoSPhaseGroupOutcome LtlClient::modifyMPCoSPhaseGroup(const ModifyMPCoSPhaseGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyMPCoSPhaseGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyMPCoSPhaseGroupOutcome(ModifyMPCoSPhaseGroupResult(outcome.result()));
	else
		return ModifyMPCoSPhaseGroupOutcome(outcome.error());
}

void LtlClient::modifyMPCoSPhaseGroupAsync(const ModifyMPCoSPhaseGroupRequest& request, const ModifyMPCoSPhaseGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyMPCoSPhaseGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LtlClient::ModifyMPCoSPhaseGroupOutcomeCallable LtlClient::modifyMPCoSPhaseGroupCallable(const ModifyMPCoSPhaseGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyMPCoSPhaseGroupOutcome()>>(
			[this, request]()
			{
			return this->modifyMPCoSPhaseGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LtlClient::ModifyMemberOutcome LtlClient::modifyMember(const ModifyMemberRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyMemberOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyMemberOutcome(ModifyMemberResult(outcome.result()));
	else
		return ModifyMemberOutcome(outcome.error());
}

void LtlClient::modifyMemberAsync(const ModifyMemberRequest& request, const ModifyMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyMember(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LtlClient::ModifyMemberOutcomeCallable LtlClient::modifyMemberCallable(const ModifyMemberRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyMemberOutcome()>>(
			[this, request]()
			{
			return this->modifyMember(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LtlClient::RegisterDeviceGroupOutcome LtlClient::registerDeviceGroup(const RegisterDeviceGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RegisterDeviceGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RegisterDeviceGroupOutcome(RegisterDeviceGroupResult(outcome.result()));
	else
		return RegisterDeviceGroupOutcome(outcome.error());
}

void LtlClient::registerDeviceGroupAsync(const RegisterDeviceGroupRequest& request, const RegisterDeviceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, registerDeviceGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LtlClient::RegisterDeviceGroupOutcomeCallable LtlClient::registerDeviceGroupCallable(const RegisterDeviceGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RegisterDeviceGroupOutcome()>>(
			[this, request]()
			{
			return this->registerDeviceGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LtlClient::SetDataOutcome LtlClient::setData(const SetDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetDataOutcome(SetDataResult(outcome.result()));
	else
		return SetDataOutcome(outcome.error());
}

void LtlClient::setDataAsync(const SetDataRequest& request, const SetDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LtlClient::SetDataOutcomeCallable LtlClient::setDataCallable(const SetDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetDataOutcome()>>(
			[this, request]()
			{
			return this->setData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LtlClient::SetDataWithSignatureOutcome LtlClient::setDataWithSignature(const SetDataWithSignatureRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetDataWithSignatureOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetDataWithSignatureOutcome(SetDataWithSignatureResult(outcome.result()));
	else
		return SetDataWithSignatureOutcome(outcome.error());
}

void LtlClient::setDataWithSignatureAsync(const SetDataWithSignatureRequest& request, const SetDataWithSignatureAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setDataWithSignature(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LtlClient::SetDataWithSignatureOutcomeCallable LtlClient::setDataWithSignatureCallable(const SetDataWithSignatureRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetDataWithSignatureOutcome()>>(
			[this, request]()
			{
			return this->setDataWithSignature(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LtlClient::UnAuthorizeDeviceOutcome LtlClient::unAuthorizeDevice(const UnAuthorizeDeviceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UnAuthorizeDeviceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UnAuthorizeDeviceOutcome(UnAuthorizeDeviceResult(outcome.result()));
	else
		return UnAuthorizeDeviceOutcome(outcome.error());
}

void LtlClient::unAuthorizeDeviceAsync(const UnAuthorizeDeviceRequest& request, const UnAuthorizeDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, unAuthorizeDevice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LtlClient::UnAuthorizeDeviceOutcomeCallable LtlClient::unAuthorizeDeviceCallable(const UnAuthorizeDeviceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UnAuthorizeDeviceOutcome()>>(
			[this, request]()
			{
			return this->unAuthorizeDevice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LtlClient::UnAuthorizeDeviceGroupOutcome LtlClient::unAuthorizeDeviceGroup(const UnAuthorizeDeviceGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UnAuthorizeDeviceGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UnAuthorizeDeviceGroupOutcome(UnAuthorizeDeviceGroupResult(outcome.result()));
	else
		return UnAuthorizeDeviceGroupOutcome(outcome.error());
}

void LtlClient::unAuthorizeDeviceGroupAsync(const UnAuthorizeDeviceGroupRequest& request, const UnAuthorizeDeviceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, unAuthorizeDeviceGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LtlClient::UnAuthorizeDeviceGroupOutcomeCallable LtlClient::unAuthorizeDeviceGroupCallable(const UnAuthorizeDeviceGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UnAuthorizeDeviceGroupOutcome()>>(
			[this, request]()
			{
			return this->unAuthorizeDeviceGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LtlClient::UnLockMemberOutcome LtlClient::unLockMember(const UnLockMemberRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UnLockMemberOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UnLockMemberOutcome(UnLockMemberResult(outcome.result()));
	else
		return UnLockMemberOutcome(outcome.error());
}

void LtlClient::unLockMemberAsync(const UnLockMemberRequest& request, const UnLockMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, unLockMember(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LtlClient::UnLockMemberOutcomeCallable LtlClient::unLockMemberCallable(const UnLockMemberRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UnLockMemberOutcome()>>(
			[this, request]()
			{
			return this->unLockMember(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LtlClient::UpdateMPCoSAuthorizedInfoOutcome LtlClient::updateMPCoSAuthorizedInfo(const UpdateMPCoSAuthorizedInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateMPCoSAuthorizedInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateMPCoSAuthorizedInfoOutcome(UpdateMPCoSAuthorizedInfoResult(outcome.result()));
	else
		return UpdateMPCoSAuthorizedInfoOutcome(outcome.error());
}

void LtlClient::updateMPCoSAuthorizedInfoAsync(const UpdateMPCoSAuthorizedInfoRequest& request, const UpdateMPCoSAuthorizedInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateMPCoSAuthorizedInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LtlClient::UpdateMPCoSAuthorizedInfoOutcomeCallable LtlClient::updateMPCoSAuthorizedInfoCallable(const UpdateMPCoSAuthorizedInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateMPCoSAuthorizedInfoOutcome()>>(
			[this, request]()
			{
			return this->updateMPCoSAuthorizedInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LtlClient::UploadMPCoSPhaseDigestInfoOutcome LtlClient::uploadMPCoSPhaseDigestInfo(const UploadMPCoSPhaseDigestInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UploadMPCoSPhaseDigestInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UploadMPCoSPhaseDigestInfoOutcome(UploadMPCoSPhaseDigestInfoResult(outcome.result()));
	else
		return UploadMPCoSPhaseDigestInfoOutcome(outcome.error());
}

void LtlClient::uploadMPCoSPhaseDigestInfoAsync(const UploadMPCoSPhaseDigestInfoRequest& request, const UploadMPCoSPhaseDigestInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, uploadMPCoSPhaseDigestInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LtlClient::UploadMPCoSPhaseDigestInfoOutcomeCallable LtlClient::uploadMPCoSPhaseDigestInfoCallable(const UploadMPCoSPhaseDigestInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UploadMPCoSPhaseDigestInfoOutcome()>>(
			[this, request]()
			{
			return this->uploadMPCoSPhaseDigestInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LtlClient::UploadMPCoSPhaseDigestInfoByDeviceOutcome LtlClient::uploadMPCoSPhaseDigestInfoByDevice(const UploadMPCoSPhaseDigestInfoByDeviceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UploadMPCoSPhaseDigestInfoByDeviceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UploadMPCoSPhaseDigestInfoByDeviceOutcome(UploadMPCoSPhaseDigestInfoByDeviceResult(outcome.result()));
	else
		return UploadMPCoSPhaseDigestInfoByDeviceOutcome(outcome.error());
}

void LtlClient::uploadMPCoSPhaseDigestInfoByDeviceAsync(const UploadMPCoSPhaseDigestInfoByDeviceRequest& request, const UploadMPCoSPhaseDigestInfoByDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, uploadMPCoSPhaseDigestInfoByDevice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LtlClient::UploadMPCoSPhaseDigestInfoByDeviceOutcomeCallable LtlClient::uploadMPCoSPhaseDigestInfoByDeviceCallable(const UploadMPCoSPhaseDigestInfoByDeviceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UploadMPCoSPhaseDigestInfoByDeviceOutcome()>>(
			[this, request]()
			{
			return this->uploadMPCoSPhaseDigestInfoByDevice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LtlClient::UploadMPCoSPhaseTextInfoOutcome LtlClient::uploadMPCoSPhaseTextInfo(const UploadMPCoSPhaseTextInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UploadMPCoSPhaseTextInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UploadMPCoSPhaseTextInfoOutcome(UploadMPCoSPhaseTextInfoResult(outcome.result()));
	else
		return UploadMPCoSPhaseTextInfoOutcome(outcome.error());
}

void LtlClient::uploadMPCoSPhaseTextInfoAsync(const UploadMPCoSPhaseTextInfoRequest& request, const UploadMPCoSPhaseTextInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, uploadMPCoSPhaseTextInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LtlClient::UploadMPCoSPhaseTextInfoOutcomeCallable LtlClient::uploadMPCoSPhaseTextInfoCallable(const UploadMPCoSPhaseTextInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UploadMPCoSPhaseTextInfoOutcome()>>(
			[this, request]()
			{
			return this->uploadMPCoSPhaseTextInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LtlClient::UploadMPCoSPhaseTextInfoByDeviceOutcome LtlClient::uploadMPCoSPhaseTextInfoByDevice(const UploadMPCoSPhaseTextInfoByDeviceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UploadMPCoSPhaseTextInfoByDeviceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UploadMPCoSPhaseTextInfoByDeviceOutcome(UploadMPCoSPhaseTextInfoByDeviceResult(outcome.result()));
	else
		return UploadMPCoSPhaseTextInfoByDeviceOutcome(outcome.error());
}

void LtlClient::uploadMPCoSPhaseTextInfoByDeviceAsync(const UploadMPCoSPhaseTextInfoByDeviceRequest& request, const UploadMPCoSPhaseTextInfoByDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, uploadMPCoSPhaseTextInfoByDevice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LtlClient::UploadMPCoSPhaseTextInfoByDeviceOutcomeCallable LtlClient::uploadMPCoSPhaseTextInfoByDeviceCallable(const UploadMPCoSPhaseTextInfoByDeviceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UploadMPCoSPhaseTextInfoByDeviceOutcome()>>(
			[this, request]()
			{
			return this->uploadMPCoSPhaseTextInfoByDevice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

