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

#include <alibabacloud/vod/VodClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Vod;
using namespace AlibabaCloud::Vod::Model;

namespace
{
	const std::string SERVICE_NAME = "vod";
}

VodClient::VodClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "vod");
}

VodClient::VodClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "vod");
}

VodClient::VodClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "vod");
}

VodClient::~VodClient()
{}

VodClient::SetDefaultAITemplateOutcome VodClient::setDefaultAITemplate(const SetDefaultAITemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetDefaultAITemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetDefaultAITemplateOutcome(SetDefaultAITemplateResult(outcome.result()));
	else
		return SetDefaultAITemplateOutcome(outcome.error());
}

void VodClient::setDefaultAITemplateAsync(const SetDefaultAITemplateRequest& request, const SetDefaultAITemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setDefaultAITemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VodClient::SetDefaultAITemplateOutcomeCallable VodClient::setDefaultAITemplateCallable(const SetDefaultAITemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetDefaultAITemplateOutcome()>>(
			[this, request]()
			{
			return this->setDefaultAITemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VodClient::DeleteImageOutcome VodClient::deleteImage(const DeleteImageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteImageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteImageOutcome(DeleteImageResult(outcome.result()));
	else
		return DeleteImageOutcome(outcome.error());
}

void VodClient::deleteImageAsync(const DeleteImageRequest& request, const DeleteImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteImage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VodClient::DeleteImageOutcomeCallable VodClient::deleteImageCallable(const DeleteImageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteImageOutcome()>>(
			[this, request]()
			{
			return this->deleteImage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VodClient::AttachAppPolicyToIdentityOutcome VodClient::attachAppPolicyToIdentity(const AttachAppPolicyToIdentityRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AttachAppPolicyToIdentityOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AttachAppPolicyToIdentityOutcome(AttachAppPolicyToIdentityResult(outcome.result()));
	else
		return AttachAppPolicyToIdentityOutcome(outcome.error());
}

void VodClient::attachAppPolicyToIdentityAsync(const AttachAppPolicyToIdentityRequest& request, const AttachAppPolicyToIdentityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, attachAppPolicyToIdentity(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VodClient::AttachAppPolicyToIdentityOutcomeCallable VodClient::attachAppPolicyToIdentityCallable(const AttachAppPolicyToIdentityRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AttachAppPolicyToIdentityOutcome()>>(
			[this, request]()
			{
			return this->attachAppPolicyToIdentity(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VodClient::DeleteCategoryOutcome VodClient::deleteCategory(const DeleteCategoryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteCategoryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteCategoryOutcome(DeleteCategoryResult(outcome.result()));
	else
		return DeleteCategoryOutcome(outcome.error());
}

void VodClient::deleteCategoryAsync(const DeleteCategoryRequest& request, const DeleteCategoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteCategory(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VodClient::DeleteCategoryOutcomeCallable VodClient::deleteCategoryCallable(const DeleteCategoryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteCategoryOutcome()>>(
			[this, request]()
			{
			return this->deleteCategory(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VodClient::DescribeVodDomainDetailOutcome VodClient::describeVodDomainDetail(const DescribeVodDomainDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeVodDomainDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeVodDomainDetailOutcome(DescribeVodDomainDetailResult(outcome.result()));
	else
		return DescribeVodDomainDetailOutcome(outcome.error());
}

void VodClient::describeVodDomainDetailAsync(const DescribeVodDomainDetailRequest& request, const DescribeVodDomainDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeVodDomainDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VodClient::DescribeVodDomainDetailOutcomeCallable VodClient::describeVodDomainDetailCallable(const DescribeVodDomainDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeVodDomainDetailOutcome()>>(
			[this, request]()
			{
			return this->describeVodDomainDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VodClient::SetDefaultTranscodeTemplateGroupOutcome VodClient::setDefaultTranscodeTemplateGroup(const SetDefaultTranscodeTemplateGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetDefaultTranscodeTemplateGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetDefaultTranscodeTemplateGroupOutcome(SetDefaultTranscodeTemplateGroupResult(outcome.result()));
	else
		return SetDefaultTranscodeTemplateGroupOutcome(outcome.error());
}

void VodClient::setDefaultTranscodeTemplateGroupAsync(const SetDefaultTranscodeTemplateGroupRequest& request, const SetDefaultTranscodeTemplateGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setDefaultTranscodeTemplateGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VodClient::SetDefaultTranscodeTemplateGroupOutcomeCallable VodClient::setDefaultTranscodeTemplateGroupCallable(const SetDefaultTranscodeTemplateGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetDefaultTranscodeTemplateGroupOutcome()>>(
			[this, request]()
			{
			return this->setDefaultTranscodeTemplateGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VodClient::BatchSetVodDomainConfigsOutcome VodClient::batchSetVodDomainConfigs(const BatchSetVodDomainConfigsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BatchSetVodDomainConfigsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BatchSetVodDomainConfigsOutcome(BatchSetVodDomainConfigsResult(outcome.result()));
	else
		return BatchSetVodDomainConfigsOutcome(outcome.error());
}

void VodClient::batchSetVodDomainConfigsAsync(const BatchSetVodDomainConfigsRequest& request, const BatchSetVodDomainConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, batchSetVodDomainConfigs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VodClient::BatchSetVodDomainConfigsOutcomeCallable VodClient::batchSetVodDomainConfigsCallable(const BatchSetVodDomainConfigsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BatchSetVodDomainConfigsOutcome()>>(
			[this, request]()
			{
			return this->batchSetVodDomainConfigs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VodClient::UpdateVideoInfosOutcome VodClient::updateVideoInfos(const UpdateVideoInfosRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateVideoInfosOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateVideoInfosOutcome(UpdateVideoInfosResult(outcome.result()));
	else
		return UpdateVideoInfosOutcome(outcome.error());
}

void VodClient::updateVideoInfosAsync(const UpdateVideoInfosRequest& request, const UpdateVideoInfosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateVideoInfos(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VodClient::UpdateVideoInfosOutcomeCallable VodClient::updateVideoInfosCallable(const UpdateVideoInfosRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateVideoInfosOutcome()>>(
			[this, request]()
			{
			return this->updateVideoInfos(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VodClient::UpdateEditingProjectOutcome VodClient::updateEditingProject(const UpdateEditingProjectRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateEditingProjectOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateEditingProjectOutcome(UpdateEditingProjectResult(outcome.result()));
	else
		return UpdateEditingProjectOutcome(outcome.error());
}

void VodClient::updateEditingProjectAsync(const UpdateEditingProjectRequest& request, const UpdateEditingProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateEditingProject(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VodClient::UpdateEditingProjectOutcomeCallable VodClient::updateEditingProjectCallable(const UpdateEditingProjectRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateEditingProjectOutcome()>>(
			[this, request]()
			{
			return this->updateEditingProject(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VodClient::GetMediaAuditResultOutcome VodClient::getMediaAuditResult(const GetMediaAuditResultRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetMediaAuditResultOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetMediaAuditResultOutcome(GetMediaAuditResultResult(outcome.result()));
	else
		return GetMediaAuditResultOutcome(outcome.error());
}

void VodClient::getMediaAuditResultAsync(const GetMediaAuditResultRequest& request, const GetMediaAuditResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getMediaAuditResult(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VodClient::GetMediaAuditResultOutcomeCallable VodClient::getMediaAuditResultCallable(const GetMediaAuditResultRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetMediaAuditResultOutcome()>>(
			[this, request]()
			{
			return this->getMediaAuditResult(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VodClient::GetMediaAuditResultTimelineOutcome VodClient::getMediaAuditResultTimeline(const GetMediaAuditResultTimelineRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetMediaAuditResultTimelineOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetMediaAuditResultTimelineOutcome(GetMediaAuditResultTimelineResult(outcome.result()));
	else
		return GetMediaAuditResultTimelineOutcome(outcome.error());
}

void VodClient::getMediaAuditResultTimelineAsync(const GetMediaAuditResultTimelineRequest& request, const GetMediaAuditResultTimelineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getMediaAuditResultTimeline(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VodClient::GetMediaAuditResultTimelineOutcomeCallable VodClient::getMediaAuditResultTimelineCallable(const GetMediaAuditResultTimelineRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetMediaAuditResultTimelineOutcome()>>(
			[this, request]()
			{
			return this->getMediaAuditResultTimeline(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VodClient::ListAuditSecurityIpOutcome VodClient::listAuditSecurityIp(const ListAuditSecurityIpRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAuditSecurityIpOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAuditSecurityIpOutcome(ListAuditSecurityIpResult(outcome.result()));
	else
		return ListAuditSecurityIpOutcome(outcome.error());
}

void VodClient::listAuditSecurityIpAsync(const ListAuditSecurityIpRequest& request, const ListAuditSecurityIpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAuditSecurityIp(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VodClient::ListAuditSecurityIpOutcomeCallable VodClient::listAuditSecurityIpCallable(const ListAuditSecurityIpRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAuditSecurityIpOutcome()>>(
			[this, request]()
			{
			return this->listAuditSecurityIp(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VodClient::GetAuditHistoryOutcome VodClient::getAuditHistory(const GetAuditHistoryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetAuditHistoryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetAuditHistoryOutcome(GetAuditHistoryResult(outcome.result()));
	else
		return GetAuditHistoryOutcome(outcome.error());
}

void VodClient::getAuditHistoryAsync(const GetAuditHistoryRequest& request, const GetAuditHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getAuditHistory(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VodClient::GetAuditHistoryOutcomeCallable VodClient::getAuditHistoryCallable(const GetAuditHistoryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetAuditHistoryOutcome()>>(
			[this, request]()
			{
			return this->getAuditHistory(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VodClient::GetMediaDNAResultOutcome VodClient::getMediaDNAResult(const GetMediaDNAResultRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetMediaDNAResultOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetMediaDNAResultOutcome(GetMediaDNAResultResult(outcome.result()));
	else
		return GetMediaDNAResultOutcome(outcome.error());
}

void VodClient::getMediaDNAResultAsync(const GetMediaDNAResultRequest& request, const GetMediaDNAResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getMediaDNAResult(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VodClient::GetMediaDNAResultOutcomeCallable VodClient::getMediaDNAResultCallable(const GetMediaDNAResultRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetMediaDNAResultOutcome()>>(
			[this, request]()
			{
			return this->getMediaDNAResult(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VodClient::SetVodDomainCertificateOutcome VodClient::setVodDomainCertificate(const SetVodDomainCertificateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetVodDomainCertificateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetVodDomainCertificateOutcome(SetVodDomainCertificateResult(outcome.result()));
	else
		return SetVodDomainCertificateOutcome(outcome.error());
}

void VodClient::setVodDomainCertificateAsync(const SetVodDomainCertificateRequest& request, const SetVodDomainCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setVodDomainCertificate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VodClient::SetVodDomainCertificateOutcomeCallable VodClient::setVodDomainCertificateCallable(const SetVodDomainCertificateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetVodDomainCertificateOutcome()>>(
			[this, request]()
			{
			return this->setVodDomainCertificate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VodClient::UpdateCategoryOutcome VodClient::updateCategory(const UpdateCategoryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateCategoryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateCategoryOutcome(UpdateCategoryResult(outcome.result()));
	else
		return UpdateCategoryOutcome(outcome.error());
}

void VodClient::updateCategoryAsync(const UpdateCategoryRequest& request, const UpdateCategoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateCategory(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VodClient::UpdateCategoryOutcomeCallable VodClient::updateCategoryCallable(const UpdateCategoryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateCategoryOutcome()>>(
			[this, request]()
			{
			return this->updateCategory(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VodClient::RegisterMediaOutcome VodClient::registerMedia(const RegisterMediaRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RegisterMediaOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RegisterMediaOutcome(RegisterMediaResult(outcome.result()));
	else
		return RegisterMediaOutcome(outcome.error());
}

void VodClient::registerMediaAsync(const RegisterMediaRequest& request, const RegisterMediaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, registerMedia(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VodClient::RegisterMediaOutcomeCallable VodClient::registerMediaCallable(const RegisterMediaRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RegisterMediaOutcome()>>(
			[this, request]()
			{
			return this->registerMedia(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VodClient::GetTranscodeTemplateGroupOutcome VodClient::getTranscodeTemplateGroup(const GetTranscodeTemplateGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetTranscodeTemplateGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetTranscodeTemplateGroupOutcome(GetTranscodeTemplateGroupResult(outcome.result()));
	else
		return GetTranscodeTemplateGroupOutcome(outcome.error());
}

void VodClient::getTranscodeTemplateGroupAsync(const GetTranscodeTemplateGroupRequest& request, const GetTranscodeTemplateGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getTranscodeTemplateGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VodClient::GetTranscodeTemplateGroupOutcomeCallable VodClient::getTranscodeTemplateGroupCallable(const GetTranscodeTemplateGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetTranscodeTemplateGroupOutcome()>>(
			[this, request]()
			{
			return this->getTranscodeTemplateGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VodClient::GetDefaultAITemplateOutcome VodClient::getDefaultAITemplate(const GetDefaultAITemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetDefaultAITemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetDefaultAITemplateOutcome(GetDefaultAITemplateResult(outcome.result()));
	else
		return GetDefaultAITemplateOutcome(outcome.error());
}

void VodClient::getDefaultAITemplateAsync(const GetDefaultAITemplateRequest& request, const GetDefaultAITemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getDefaultAITemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VodClient::GetDefaultAITemplateOutcomeCallable VodClient::getDefaultAITemplateCallable(const GetDefaultAITemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetDefaultAITemplateOutcome()>>(
			[this, request]()
			{
			return this->getDefaultAITemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VodClient::ProduceEditingProjectVideoOutcome VodClient::produceEditingProjectVideo(const ProduceEditingProjectVideoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ProduceEditingProjectVideoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ProduceEditingProjectVideoOutcome(ProduceEditingProjectVideoResult(outcome.result()));
	else
		return ProduceEditingProjectVideoOutcome(outcome.error());
}

void VodClient::produceEditingProjectVideoAsync(const ProduceEditingProjectVideoRequest& request, const ProduceEditingProjectVideoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, produceEditingProjectVideo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VodClient::ProduceEditingProjectVideoOutcomeCallable VodClient::produceEditingProjectVideoCallable(const ProduceEditingProjectVideoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ProduceEditingProjectVideoOutcome()>>(
			[this, request]()
			{
			return this->produceEditingProjectVideo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VodClient::GetVideoPlayAuthOutcome VodClient::getVideoPlayAuth(const GetVideoPlayAuthRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetVideoPlayAuthOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetVideoPlayAuthOutcome(GetVideoPlayAuthResult(outcome.result()));
	else
		return GetVideoPlayAuthOutcome(outcome.error());
}

void VodClient::getVideoPlayAuthAsync(const GetVideoPlayAuthRequest& request, const GetVideoPlayAuthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getVideoPlayAuth(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VodClient::GetVideoPlayAuthOutcomeCallable VodClient::getVideoPlayAuthCallable(const GetVideoPlayAuthRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetVideoPlayAuthOutcome()>>(
			[this, request]()
			{
			return this->getVideoPlayAuth(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VodClient::DeleteVodTemplateOutcome VodClient::deleteVodTemplate(const DeleteVodTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteVodTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteVodTemplateOutcome(DeleteVodTemplateResult(outcome.result()));
	else
		return DeleteVodTemplateOutcome(outcome.error());
}

void VodClient::deleteVodTemplateAsync(const DeleteVodTemplateRequest& request, const DeleteVodTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteVodTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VodClient::DeleteVodTemplateOutcomeCallable VodClient::deleteVodTemplateCallable(const DeleteVodTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteVodTemplateOutcome()>>(
			[this, request]()
			{
			return this->deleteVodTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VodClient::GetAITemplateOutcome VodClient::getAITemplate(const GetAITemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetAITemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetAITemplateOutcome(GetAITemplateResult(outcome.result()));
	else
		return GetAITemplateOutcome(outcome.error());
}

void VodClient::getAITemplateAsync(const GetAITemplateRequest& request, const GetAITemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getAITemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VodClient::GetAITemplateOutcomeCallable VodClient::getAITemplateCallable(const GetAITemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetAITemplateOutcome()>>(
			[this, request]()
			{
			return this->getAITemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VodClient::ListVodTemplateOutcome VodClient::listVodTemplate(const ListVodTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListVodTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListVodTemplateOutcome(ListVodTemplateResult(outcome.result()));
	else
		return ListVodTemplateOutcome(outcome.error());
}

void VodClient::listVodTemplateAsync(const ListVodTemplateRequest& request, const ListVodTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listVodTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VodClient::ListVodTemplateOutcomeCallable VodClient::listVodTemplateCallable(const ListVodTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListVodTemplateOutcome()>>(
			[this, request]()
			{
			return this->listVodTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VodClient::DeleteAppInfoOutcome VodClient::deleteAppInfo(const DeleteAppInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteAppInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteAppInfoOutcome(DeleteAppInfoResult(outcome.result()));
	else
		return DeleteAppInfoOutcome(outcome.error());
}

void VodClient::deleteAppInfoAsync(const DeleteAppInfoRequest& request, const DeleteAppInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteAppInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VodClient::DeleteAppInfoOutcomeCallable VodClient::deleteAppInfoCallable(const DeleteAppInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteAppInfoOutcome()>>(
			[this, request]()
			{
			return this->deleteAppInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VodClient::ListWatermarkOutcome VodClient::listWatermark(const ListWatermarkRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListWatermarkOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListWatermarkOutcome(ListWatermarkResult(outcome.result()));
	else
		return ListWatermarkOutcome(outcome.error());
}

void VodClient::listWatermarkAsync(const ListWatermarkRequest& request, const ListWatermarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listWatermark(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VodClient::ListWatermarkOutcomeCallable VodClient::listWatermarkCallable(const ListWatermarkRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListWatermarkOutcome()>>(
			[this, request]()
			{
			return this->listWatermark(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VodClient::AddWatermarkOutcome VodClient::addWatermark(const AddWatermarkRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddWatermarkOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddWatermarkOutcome(AddWatermarkResult(outcome.result()));
	else
		return AddWatermarkOutcome(outcome.error());
}

void VodClient::addWatermarkAsync(const AddWatermarkRequest& request, const AddWatermarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addWatermark(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VodClient::AddWatermarkOutcomeCallable VodClient::addWatermarkCallable(const AddWatermarkRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddWatermarkOutcome()>>(
			[this, request]()
			{
			return this->addWatermark(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VodClient::CreateUploadImageOutcome VodClient::createUploadImage(const CreateUploadImageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateUploadImageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateUploadImageOutcome(CreateUploadImageResult(outcome.result()));
	else
		return CreateUploadImageOutcome(outcome.error());
}

void VodClient::createUploadImageAsync(const CreateUploadImageRequest& request, const CreateUploadImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createUploadImage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VodClient::CreateUploadImageOutcomeCallable VodClient::createUploadImageCallable(const CreateUploadImageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateUploadImageOutcome()>>(
			[this, request]()
			{
			return this->createUploadImage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VodClient::DescribeVodDomainLogOutcome VodClient::describeVodDomainLog(const DescribeVodDomainLogRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeVodDomainLogOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeVodDomainLogOutcome(DescribeVodDomainLogResult(outcome.result()));
	else
		return DescribeVodDomainLogOutcome(outcome.error());
}

void VodClient::describeVodDomainLogAsync(const DescribeVodDomainLogRequest& request, const DescribeVodDomainLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeVodDomainLog(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VodClient::DescribeVodDomainLogOutcomeCallable VodClient::describeVodDomainLogCallable(const DescribeVodDomainLogRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeVodDomainLogOutcome()>>(
			[this, request]()
			{
			return this->describeVodDomainLog(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VodClient::UpdateVideoInfoOutcome VodClient::updateVideoInfo(const UpdateVideoInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateVideoInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateVideoInfoOutcome(UpdateVideoInfoResult(outcome.result()));
	else
		return UpdateVideoInfoOutcome(outcome.error());
}

void VodClient::updateVideoInfoAsync(const UpdateVideoInfoRequest& request, const UpdateVideoInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateVideoInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VodClient::UpdateVideoInfoOutcomeCallable VodClient::updateVideoInfoCallable(const UpdateVideoInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateVideoInfoOutcome()>>(
			[this, request]()
			{
			return this->updateVideoInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VodClient::AddAITemplateOutcome VodClient::addAITemplate(const AddAITemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddAITemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddAITemplateOutcome(AddAITemplateResult(outcome.result()));
	else
		return AddAITemplateOutcome(outcome.error());
}

void VodClient::addAITemplateAsync(const AddAITemplateRequest& request, const AddAITemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addAITemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VodClient::AddAITemplateOutcomeCallable VodClient::addAITemplateCallable(const AddAITemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddAITemplateOutcome()>>(
			[this, request]()
			{
			return this->addAITemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VodClient::DescribePlayTopVideosOutcome VodClient::describePlayTopVideos(const DescribePlayTopVideosRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribePlayTopVideosOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribePlayTopVideosOutcome(DescribePlayTopVideosResult(outcome.result()));
	else
		return DescribePlayTopVideosOutcome(outcome.error());
}

void VodClient::describePlayTopVideosAsync(const DescribePlayTopVideosRequest& request, const DescribePlayTopVideosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describePlayTopVideos(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VodClient::DescribePlayTopVideosOutcomeCallable VodClient::describePlayTopVideosCallable(const DescribePlayTopVideosRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribePlayTopVideosOutcome()>>(
			[this, request]()
			{
			return this->describePlayTopVideos(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VodClient::RefreshVodObjectCachesOutcome VodClient::refreshVodObjectCaches(const RefreshVodObjectCachesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RefreshVodObjectCachesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RefreshVodObjectCachesOutcome(RefreshVodObjectCachesResult(outcome.result()));
	else
		return RefreshVodObjectCachesOutcome(outcome.error());
}

void VodClient::refreshVodObjectCachesAsync(const RefreshVodObjectCachesRequest& request, const RefreshVodObjectCachesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, refreshVodObjectCaches(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VodClient::RefreshVodObjectCachesOutcomeCallable VodClient::refreshVodObjectCachesCallable(const RefreshVodObjectCachesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RefreshVodObjectCachesOutcome()>>(
			[this, request]()
			{
			return this->refreshVodObjectCaches(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VodClient::ListTranscodeTaskOutcome VodClient::listTranscodeTask(const ListTranscodeTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListTranscodeTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListTranscodeTaskOutcome(ListTranscodeTaskResult(outcome.result()));
	else
		return ListTranscodeTaskOutcome(outcome.error());
}

void VodClient::listTranscodeTaskAsync(const ListTranscodeTaskRequest& request, const ListTranscodeTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTranscodeTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VodClient::ListTranscodeTaskOutcomeCallable VodClient::listTranscodeTaskCallable(const ListTranscodeTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTranscodeTaskOutcome()>>(
			[this, request]()
			{
			return this->listTranscodeTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VodClient::SetDefaultWatermarkOutcome VodClient::setDefaultWatermark(const SetDefaultWatermarkRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetDefaultWatermarkOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetDefaultWatermarkOutcome(SetDefaultWatermarkResult(outcome.result()));
	else
		return SetDefaultWatermarkOutcome(outcome.error());
}

void VodClient::setDefaultWatermarkAsync(const SetDefaultWatermarkRequest& request, const SetDefaultWatermarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setDefaultWatermark(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VodClient::SetDefaultWatermarkOutcomeCallable VodClient::setDefaultWatermarkCallable(const SetDefaultWatermarkRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetDefaultWatermarkOutcome()>>(
			[this, request]()
			{
			return this->setDefaultWatermark(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VodClient::ListAITemplateOutcome VodClient::listAITemplate(const ListAITemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAITemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAITemplateOutcome(ListAITemplateResult(outcome.result()));
	else
		return ListAITemplateOutcome(outcome.error());
}

void VodClient::listAITemplateAsync(const ListAITemplateRequest& request, const ListAITemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAITemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VodClient::ListAITemplateOutcomeCallable VodClient::listAITemplateCallable(const ListAITemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAITemplateOutcome()>>(
			[this, request]()
			{
			return this->listAITemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VodClient::DeleteMessageCallbackOutcome VodClient::deleteMessageCallback(const DeleteMessageCallbackRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteMessageCallbackOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteMessageCallbackOutcome(DeleteMessageCallbackResult(outcome.result()));
	else
		return DeleteMessageCallbackOutcome(outcome.error());
}

void VodClient::deleteMessageCallbackAsync(const DeleteMessageCallbackRequest& request, const DeleteMessageCallbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteMessageCallback(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VodClient::DeleteMessageCallbackOutcomeCallable VodClient::deleteMessageCallbackCallable(const DeleteMessageCallbackRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteMessageCallbackOutcome()>>(
			[this, request]()
			{
			return this->deleteMessageCallback(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VodClient::RefreshUploadVideoOutcome VodClient::refreshUploadVideo(const RefreshUploadVideoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RefreshUploadVideoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RefreshUploadVideoOutcome(RefreshUploadVideoResult(outcome.result()));
	else
		return RefreshUploadVideoOutcome(outcome.error());
}

void VodClient::refreshUploadVideoAsync(const RefreshUploadVideoRequest& request, const RefreshUploadVideoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, refreshUploadVideo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VodClient::RefreshUploadVideoOutcomeCallable VodClient::refreshUploadVideoCallable(const RefreshUploadVideoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RefreshUploadVideoOutcome()>>(
			[this, request]()
			{
			return this->refreshUploadVideo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VodClient::GetEditingProjectOutcome VodClient::getEditingProject(const GetEditingProjectRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetEditingProjectOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetEditingProjectOutcome(GetEditingProjectResult(outcome.result()));
	else
		return GetEditingProjectOutcome(outcome.error());
}

void VodClient::getEditingProjectAsync(const GetEditingProjectRequest& request, const GetEditingProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getEditingProject(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VodClient::GetEditingProjectOutcomeCallable VodClient::getEditingProjectCallable(const GetEditingProjectRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetEditingProjectOutcome()>>(
			[this, request]()
			{
			return this->getEditingProject(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VodClient::DeleteAITemplateOutcome VodClient::deleteAITemplate(const DeleteAITemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteAITemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteAITemplateOutcome(DeleteAITemplateResult(outcome.result()));
	else
		return DeleteAITemplateOutcome(outcome.error());
}

void VodClient::deleteAITemplateAsync(const DeleteAITemplateRequest& request, const DeleteAITemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteAITemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VodClient::DeleteAITemplateOutcomeCallable VodClient::deleteAITemplateCallable(const DeleteAITemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteAITemplateOutcome()>>(
			[this, request]()
			{
			return this->deleteAITemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VodClient::CreateAuditOutcome VodClient::createAudit(const CreateAuditRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateAuditOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateAuditOutcome(CreateAuditResult(outcome.result()));
	else
		return CreateAuditOutcome(outcome.error());
}

void VodClient::createAuditAsync(const CreateAuditRequest& request, const CreateAuditAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createAudit(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VodClient::CreateAuditOutcomeCallable VodClient::createAuditCallable(const CreateAuditRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateAuditOutcome()>>(
			[this, request]()
			{
			return this->createAudit(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VodClient::DeleteVodDomainOutcome VodClient::deleteVodDomain(const DeleteVodDomainRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteVodDomainOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteVodDomainOutcome(DeleteVodDomainResult(outcome.result()));
	else
		return DeleteVodDomainOutcome(outcome.error());
}

void VodClient::deleteVodDomainAsync(const DeleteVodDomainRequest& request, const DeleteVodDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteVodDomain(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VodClient::DeleteVodDomainOutcomeCallable VodClient::deleteVodDomainCallable(const DeleteVodDomainRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteVodDomainOutcome()>>(
			[this, request]()
			{
			return this->deleteVodDomain(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VodClient::DescribeVodDomainCertificateInfoOutcome VodClient::describeVodDomainCertificateInfo(const DescribeVodDomainCertificateInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeVodDomainCertificateInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeVodDomainCertificateInfoOutcome(DescribeVodDomainCertificateInfoResult(outcome.result()));
	else
		return DescribeVodDomainCertificateInfoOutcome(outcome.error());
}

void VodClient::describeVodDomainCertificateInfoAsync(const DescribeVodDomainCertificateInfoRequest& request, const DescribeVodDomainCertificateInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeVodDomainCertificateInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VodClient::DescribeVodDomainCertificateInfoOutcomeCallable VodClient::describeVodDomainCertificateInfoCallable(const DescribeVodDomainCertificateInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeVodDomainCertificateInfoOutcome()>>(
			[this, request]()
			{
			return this->describeVodDomainCertificateInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VodClient::GetWatermarkOutcome VodClient::getWatermark(const GetWatermarkRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetWatermarkOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetWatermarkOutcome(GetWatermarkResult(outcome.result()));
	else
		return GetWatermarkOutcome(outcome.error());
}

void VodClient::getWatermarkAsync(const GetWatermarkRequest& request, const GetWatermarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getWatermark(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VodClient::GetWatermarkOutcomeCallable VodClient::getWatermarkCallable(const GetWatermarkRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetWatermarkOutcome()>>(
			[this, request]()
			{
			return this->getWatermark(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VodClient::UpdateVodTemplateOutcome VodClient::updateVodTemplate(const UpdateVodTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateVodTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateVodTemplateOutcome(UpdateVodTemplateResult(outcome.result()));
	else
		return UpdateVodTemplateOutcome(outcome.error());
}

void VodClient::updateVodTemplateAsync(const UpdateVodTemplateRequest& request, const UpdateVodTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateVodTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VodClient::UpdateVodTemplateOutcomeCallable VodClient::updateVodTemplateCallable(const UpdateVodTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateVodTemplateOutcome()>>(
			[this, request]()
			{
			return this->updateVodTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VodClient::ListLiveRecordVideoOutcome VodClient::listLiveRecordVideo(const ListLiveRecordVideoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListLiveRecordVideoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListLiveRecordVideoOutcome(ListLiveRecordVideoResult(outcome.result()));
	else
		return ListLiveRecordVideoOutcome(outcome.error());
}

void VodClient::listLiveRecordVideoAsync(const ListLiveRecordVideoRequest& request, const ListLiveRecordVideoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listLiveRecordVideo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VodClient::ListLiveRecordVideoOutcomeCallable VodClient::listLiveRecordVideoCallable(const ListLiveRecordVideoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListLiveRecordVideoOutcome()>>(
			[this, request]()
			{
			return this->listLiveRecordVideo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VodClient::UpdateAttachedMediaInfosOutcome VodClient::updateAttachedMediaInfos(const UpdateAttachedMediaInfosRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateAttachedMediaInfosOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateAttachedMediaInfosOutcome(UpdateAttachedMediaInfosResult(outcome.result()));
	else
		return UpdateAttachedMediaInfosOutcome(outcome.error());
}

void VodClient::updateAttachedMediaInfosAsync(const UpdateAttachedMediaInfosRequest& request, const UpdateAttachedMediaInfosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateAttachedMediaInfos(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VodClient::UpdateAttachedMediaInfosOutcomeCallable VodClient::updateAttachedMediaInfosCallable(const UpdateAttachedMediaInfosRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateAttachedMediaInfosOutcome()>>(
			[this, request]()
			{
			return this->updateAttachedMediaInfos(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VodClient::DescribePlayVideoStatisOutcome VodClient::describePlayVideoStatis(const DescribePlayVideoStatisRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribePlayVideoStatisOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribePlayVideoStatisOutcome(DescribePlayVideoStatisResult(outcome.result()));
	else
		return DescribePlayVideoStatisOutcome(outcome.error());
}

void VodClient::describePlayVideoStatisAsync(const DescribePlayVideoStatisRequest& request, const DescribePlayVideoStatisAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describePlayVideoStatis(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VodClient::DescribePlayVideoStatisOutcomeCallable VodClient::describePlayVideoStatisCallable(const DescribePlayVideoStatisRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribePlayVideoStatisOutcome()>>(
			[this, request]()
			{
			return this->describePlayVideoStatis(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VodClient::GetMediaAuditResultDetailOutcome VodClient::getMediaAuditResultDetail(const GetMediaAuditResultDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetMediaAuditResultDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetMediaAuditResultDetailOutcome(GetMediaAuditResultDetailResult(outcome.result()));
	else
		return GetMediaAuditResultDetailOutcome(outcome.error());
}

void VodClient::getMediaAuditResultDetailAsync(const GetMediaAuditResultDetailRequest& request, const GetMediaAuditResultDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getMediaAuditResultDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VodClient::GetMediaAuditResultDetailOutcomeCallable VodClient::getMediaAuditResultDetailCallable(const GetMediaAuditResultDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetMediaAuditResultDetailOutcome()>>(
			[this, request]()
			{
			return this->getMediaAuditResultDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VodClient::DeleteStreamOutcome VodClient::deleteStream(const DeleteStreamRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteStreamOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteStreamOutcome(DeleteStreamResult(outcome.result()));
	else
		return DeleteStreamOutcome(outcome.error());
}

void VodClient::deleteStreamAsync(const DeleteStreamRequest& request, const DeleteStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteStream(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VodClient::DeleteStreamOutcomeCallable VodClient::deleteStreamCallable(const DeleteStreamRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteStreamOutcome()>>(
			[this, request]()
			{
			return this->deleteStream(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VodClient::UpdateAppInfoOutcome VodClient::updateAppInfo(const UpdateAppInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateAppInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateAppInfoOutcome(UpdateAppInfoResult(outcome.result()));
	else
		return UpdateAppInfoOutcome(outcome.error());
}

void VodClient::updateAppInfoAsync(const UpdateAppInfoRequest& request, const UpdateAppInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateAppInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VodClient::UpdateAppInfoOutcomeCallable VodClient::updateAppInfoCallable(const UpdateAppInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateAppInfoOutcome()>>(
			[this, request]()
			{
			return this->updateAppInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VodClient::UploadMediaByURLOutcome VodClient::uploadMediaByURL(const UploadMediaByURLRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UploadMediaByURLOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UploadMediaByURLOutcome(UploadMediaByURLResult(outcome.result()));
	else
		return UploadMediaByURLOutcome(outcome.error());
}

void VodClient::uploadMediaByURLAsync(const UploadMediaByURLRequest& request, const UploadMediaByURLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, uploadMediaByURL(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VodClient::UploadMediaByURLOutcomeCallable VodClient::uploadMediaByURLCallable(const UploadMediaByURLRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UploadMediaByURLOutcome()>>(
			[this, request]()
			{
			return this->uploadMediaByURL(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VodClient::DescribeVodDomainBpsDataOutcome VodClient::describeVodDomainBpsData(const DescribeVodDomainBpsDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeVodDomainBpsDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeVodDomainBpsDataOutcome(DescribeVodDomainBpsDataResult(outcome.result()));
	else
		return DescribeVodDomainBpsDataOutcome(outcome.error());
}

void VodClient::describeVodDomainBpsDataAsync(const DescribeVodDomainBpsDataRequest& request, const DescribeVodDomainBpsDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeVodDomainBpsData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VodClient::DescribeVodDomainBpsDataOutcomeCallable VodClient::describeVodDomainBpsDataCallable(const DescribeVodDomainBpsDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeVodDomainBpsDataOutcome()>>(
			[this, request]()
			{
			return this->describeVodDomainBpsData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VodClient::GetPlayInfoOutcome VodClient::getPlayInfo(const GetPlayInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetPlayInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetPlayInfoOutcome(GetPlayInfoResult(outcome.result()));
	else
		return GetPlayInfoOutcome(outcome.error());
}

void VodClient::getPlayInfoAsync(const GetPlayInfoRequest& request, const GetPlayInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getPlayInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VodClient::GetPlayInfoOutcomeCallable VodClient::getPlayInfoCallable(const GetPlayInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetPlayInfoOutcome()>>(
			[this, request]()
			{
			return this->getPlayInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VodClient::UpdateVodDomainOutcome VodClient::updateVodDomain(const UpdateVodDomainRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateVodDomainOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateVodDomainOutcome(UpdateVodDomainResult(outcome.result()));
	else
		return UpdateVodDomainOutcome(outcome.error());
}

void VodClient::updateVodDomainAsync(const UpdateVodDomainRequest& request, const UpdateVodDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateVodDomain(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VodClient::UpdateVodDomainOutcomeCallable VodClient::updateVodDomainCallable(const UpdateVodDomainRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateVodDomainOutcome()>>(
			[this, request]()
			{
			return this->updateVodDomain(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VodClient::DeleteMezzaninesOutcome VodClient::deleteMezzanines(const DeleteMezzaninesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteMezzaninesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteMezzaninesOutcome(DeleteMezzaninesResult(outcome.result()));
	else
		return DeleteMezzaninesOutcome(outcome.error());
}

void VodClient::deleteMezzaninesAsync(const DeleteMezzaninesRequest& request, const DeleteMezzaninesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteMezzanines(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VodClient::DeleteMezzaninesOutcomeCallable VodClient::deleteMezzaninesCallable(const DeleteMezzaninesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteMezzaninesOutcome()>>(
			[this, request]()
			{
			return this->deleteMezzanines(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VodClient::AddEditingProjectOutcome VodClient::addEditingProject(const AddEditingProjectRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddEditingProjectOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddEditingProjectOutcome(AddEditingProjectResult(outcome.result()));
	else
		return AddEditingProjectOutcome(outcome.error());
}

void VodClient::addEditingProjectAsync(const AddEditingProjectRequest& request, const AddEditingProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addEditingProject(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VodClient::AddEditingProjectOutcomeCallable VodClient::addEditingProjectCallable(const AddEditingProjectRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddEditingProjectOutcome()>>(
			[this, request]()
			{
			return this->addEditingProject(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VodClient::GetUploadDetailsOutcome VodClient::getUploadDetails(const GetUploadDetailsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetUploadDetailsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetUploadDetailsOutcome(GetUploadDetailsResult(outcome.result()));
	else
		return GetUploadDetailsOutcome(outcome.error());
}

void VodClient::getUploadDetailsAsync(const GetUploadDetailsRequest& request, const GetUploadDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getUploadDetails(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VodClient::GetUploadDetailsOutcomeCallable VodClient::getUploadDetailsCallable(const GetUploadDetailsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetUploadDetailsOutcome()>>(
			[this, request]()
			{
			return this->getUploadDetails(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VodClient::GetAttachedMediaInfoOutcome VodClient::getAttachedMediaInfo(const GetAttachedMediaInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetAttachedMediaInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetAttachedMediaInfoOutcome(GetAttachedMediaInfoResult(outcome.result()));
	else
		return GetAttachedMediaInfoOutcome(outcome.error());
}

void VodClient::getAttachedMediaInfoAsync(const GetAttachedMediaInfoRequest& request, const GetAttachedMediaInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getAttachedMediaInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VodClient::GetAttachedMediaInfoOutcomeCallable VodClient::getAttachedMediaInfoCallable(const GetAttachedMediaInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetAttachedMediaInfoOutcome()>>(
			[this, request]()
			{
			return this->getAttachedMediaInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VodClient::DeleteTranscodeTemplateGroupOutcome VodClient::deleteTranscodeTemplateGroup(const DeleteTranscodeTemplateGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteTranscodeTemplateGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteTranscodeTemplateGroupOutcome(DeleteTranscodeTemplateGroupResult(outcome.result()));
	else
		return DeleteTranscodeTemplateGroupOutcome(outcome.error());
}

void VodClient::deleteTranscodeTemplateGroupAsync(const DeleteTranscodeTemplateGroupRequest& request, const DeleteTranscodeTemplateGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteTranscodeTemplateGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VodClient::DeleteTranscodeTemplateGroupOutcomeCallable VodClient::deleteTranscodeTemplateGroupCallable(const DeleteTranscodeTemplateGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteTranscodeTemplateGroupOutcome()>>(
			[this, request]()
			{
			return this->deleteTranscodeTemplateGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VodClient::DeleteVodSpecificConfigOutcome VodClient::deleteVodSpecificConfig(const DeleteVodSpecificConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteVodSpecificConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteVodSpecificConfigOutcome(DeleteVodSpecificConfigResult(outcome.result()));
	else
		return DeleteVodSpecificConfigOutcome(outcome.error());
}

void VodClient::deleteVodSpecificConfigAsync(const DeleteVodSpecificConfigRequest& request, const DeleteVodSpecificConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteVodSpecificConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VodClient::DeleteVodSpecificConfigOutcomeCallable VodClient::deleteVodSpecificConfigCallable(const DeleteVodSpecificConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteVodSpecificConfigOutcome()>>(
			[this, request]()
			{
			return this->deleteVodSpecificConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VodClient::AddTranscodeTemplateGroupOutcome VodClient::addTranscodeTemplateGroup(const AddTranscodeTemplateGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddTranscodeTemplateGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddTranscodeTemplateGroupOutcome(AddTranscodeTemplateGroupResult(outcome.result()));
	else
		return AddTranscodeTemplateGroupOutcome(outcome.error());
}

void VodClient::addTranscodeTemplateGroupAsync(const AddTranscodeTemplateGroupRequest& request, const AddTranscodeTemplateGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addTranscodeTemplateGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VodClient::AddTranscodeTemplateGroupOutcomeCallable VodClient::addTranscodeTemplateGroupCallable(const AddTranscodeTemplateGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddTranscodeTemplateGroupOutcome()>>(
			[this, request]()
			{
			return this->addTranscodeTemplateGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VodClient::DescribeVodCertificateListOutcome VodClient::describeVodCertificateList(const DescribeVodCertificateListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeVodCertificateListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeVodCertificateListOutcome(DescribeVodCertificateListResult(outcome.result()));
	else
		return DescribeVodCertificateListOutcome(outcome.error());
}

void VodClient::describeVodCertificateListAsync(const DescribeVodCertificateListRequest& request, const DescribeVodCertificateListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeVodCertificateList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VodClient::DescribeVodCertificateListOutcomeCallable VodClient::describeVodCertificateListCallable(const DescribeVodCertificateListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeVodCertificateListOutcome()>>(
			[this, request]()
			{
			return this->describeVodCertificateList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VodClient::SetEditingProjectMaterialsOutcome VodClient::setEditingProjectMaterials(const SetEditingProjectMaterialsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetEditingProjectMaterialsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetEditingProjectMaterialsOutcome(SetEditingProjectMaterialsResult(outcome.result()));
	else
		return SetEditingProjectMaterialsOutcome(outcome.error());
}

void VodClient::setEditingProjectMaterialsAsync(const SetEditingProjectMaterialsRequest& request, const SetEditingProjectMaterialsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setEditingProjectMaterials(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VodClient::SetEditingProjectMaterialsOutcomeCallable VodClient::setEditingProjectMaterialsCallable(const SetEditingProjectMaterialsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetEditingProjectMaterialsOutcome()>>(
			[this, request]()
			{
			return this->setEditingProjectMaterials(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VodClient::DeleteVideoOutcome VodClient::deleteVideo(const DeleteVideoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteVideoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteVideoOutcome(DeleteVideoResult(outcome.result()));
	else
		return DeleteVideoOutcome(outcome.error());
}

void VodClient::deleteVideoAsync(const DeleteVideoRequest& request, const DeleteVideoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteVideo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VodClient::DeleteVideoOutcomeCallable VodClient::deleteVideoCallable(const DeleteVideoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteVideoOutcome()>>(
			[this, request]()
			{
			return this->deleteVideo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VodClient::ListAppInfoOutcome VodClient::listAppInfo(const ListAppInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAppInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAppInfoOutcome(ListAppInfoResult(outcome.result()));
	else
		return ListAppInfoOutcome(outcome.error());
}

void VodClient::listAppInfoAsync(const ListAppInfoRequest& request, const ListAppInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAppInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VodClient::ListAppInfoOutcomeCallable VodClient::listAppInfoCallable(const ListAppInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAppInfoOutcome()>>(
			[this, request]()
			{
			return this->listAppInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VodClient::AddVodTemplateOutcome VodClient::addVodTemplate(const AddVodTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddVodTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddVodTemplateOutcome(AddVodTemplateResult(outcome.result()));
	else
		return AddVodTemplateOutcome(outcome.error());
}

void VodClient::addVodTemplateAsync(const AddVodTemplateRequest& request, const AddVodTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addVodTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VodClient::AddVodTemplateOutcomeCallable VodClient::addVodTemplateCallable(const AddVodTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddVodTemplateOutcome()>>(
			[this, request]()
			{
			return this->addVodTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VodClient::GetVodTemplateOutcome VodClient::getVodTemplate(const GetVodTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetVodTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetVodTemplateOutcome(GetVodTemplateResult(outcome.result()));
	else
		return GetVodTemplateOutcome(outcome.error());
}

void VodClient::getVodTemplateAsync(const GetVodTemplateRequest& request, const GetVodTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getVodTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VodClient::GetVodTemplateOutcomeCallable VodClient::getVodTemplateCallable(const GetVodTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetVodTemplateOutcome()>>(
			[this, request]()
			{
			return this->getVodTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VodClient::GetTranscodeSummaryOutcome VodClient::getTranscodeSummary(const GetTranscodeSummaryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetTranscodeSummaryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetTranscodeSummaryOutcome(GetTranscodeSummaryResult(outcome.result()));
	else
		return GetTranscodeSummaryOutcome(outcome.error());
}

void VodClient::getTranscodeSummaryAsync(const GetTranscodeSummaryRequest& request, const GetTranscodeSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getTranscodeSummary(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VodClient::GetTranscodeSummaryOutcomeCallable VodClient::getTranscodeSummaryCallable(const GetTranscodeSummaryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetTranscodeSummaryOutcome()>>(
			[this, request]()
			{
			return this->getTranscodeSummary(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VodClient::DescribePlayUserTotalOutcome VodClient::describePlayUserTotal(const DescribePlayUserTotalRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribePlayUserTotalOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribePlayUserTotalOutcome(DescribePlayUserTotalResult(outcome.result()));
	else
		return DescribePlayUserTotalOutcome(outcome.error());
}

void VodClient::describePlayUserTotalAsync(const DescribePlayUserTotalRequest& request, const DescribePlayUserTotalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describePlayUserTotal(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VodClient::DescribePlayUserTotalOutcomeCallable VodClient::describePlayUserTotalCallable(const DescribePlayUserTotalRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribePlayUserTotalOutcome()>>(
			[this, request]()
			{
			return this->describePlayUserTotal(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VodClient::DescribeVodStorageDataOutcome VodClient::describeVodStorageData(const DescribeVodStorageDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeVodStorageDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeVodStorageDataOutcome(DescribeVodStorageDataResult(outcome.result()));
	else
		return DescribeVodStorageDataOutcome(outcome.error());
}

void VodClient::describeVodStorageDataAsync(const DescribeVodStorageDataRequest& request, const DescribeVodStorageDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeVodStorageData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VodClient::DescribeVodStorageDataOutcomeCallable VodClient::describeVodStorageDataCallable(const DescribeVodStorageDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeVodStorageDataOutcome()>>(
			[this, request]()
			{
			return this->describeVodStorageData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VodClient::CreateUploadAttachedMediaOutcome VodClient::createUploadAttachedMedia(const CreateUploadAttachedMediaRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateUploadAttachedMediaOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateUploadAttachedMediaOutcome(CreateUploadAttachedMediaResult(outcome.result()));
	else
		return CreateUploadAttachedMediaOutcome(outcome.error());
}

void VodClient::createUploadAttachedMediaAsync(const CreateUploadAttachedMediaRequest& request, const CreateUploadAttachedMediaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createUploadAttachedMedia(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VodClient::CreateUploadAttachedMediaOutcomeCallable VodClient::createUploadAttachedMediaCallable(const CreateUploadAttachedMediaRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateUploadAttachedMediaOutcome()>>(
			[this, request]()
			{
			return this->createUploadAttachedMedia(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VodClient::DescribeVodRefreshQuotaOutcome VodClient::describeVodRefreshQuota(const DescribeVodRefreshQuotaRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeVodRefreshQuotaOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeVodRefreshQuotaOutcome(DescribeVodRefreshQuotaResult(outcome.result()));
	else
		return DescribeVodRefreshQuotaOutcome(outcome.error());
}

void VodClient::describeVodRefreshQuotaAsync(const DescribeVodRefreshQuotaRequest& request, const DescribeVodRefreshQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeVodRefreshQuota(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VodClient::DescribeVodRefreshQuotaOutcomeCallable VodClient::describeVodRefreshQuotaCallable(const DescribeVodRefreshQuotaRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeVodRefreshQuotaOutcome()>>(
			[this, request]()
			{
			return this->describeVodRefreshQuota(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VodClient::DescribeVodDomainTrafficDataOutcome VodClient::describeVodDomainTrafficData(const DescribeVodDomainTrafficDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeVodDomainTrafficDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeVodDomainTrafficDataOutcome(DescribeVodDomainTrafficDataResult(outcome.result()));
	else
		return DescribeVodDomainTrafficDataOutcome(outcome.error());
}

void VodClient::describeVodDomainTrafficDataAsync(const DescribeVodDomainTrafficDataRequest& request, const DescribeVodDomainTrafficDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeVodDomainTrafficData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VodClient::DescribeVodDomainTrafficDataOutcomeCallable VodClient::describeVodDomainTrafficDataCallable(const DescribeVodDomainTrafficDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeVodDomainTrafficDataOutcome()>>(
			[this, request]()
			{
			return this->describeVodDomainTrafficData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VodClient::ListSnapshotsOutcome VodClient::listSnapshots(const ListSnapshotsRequest &request) const
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

void VodClient::listSnapshotsAsync(const ListSnapshotsRequest& request, const ListSnapshotsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listSnapshots(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VodClient::ListSnapshotsOutcomeCallable VodClient::listSnapshotsCallable(const ListSnapshotsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListSnapshotsOutcome()>>(
			[this, request]()
			{
			return this->listSnapshots(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VodClient::DescribeVodAIDataOutcome VodClient::describeVodAIData(const DescribeVodAIDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeVodAIDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeVodAIDataOutcome(DescribeVodAIDataResult(outcome.result()));
	else
		return DescribeVodAIDataOutcome(outcome.error());
}

void VodClient::describeVodAIDataAsync(const DescribeVodAIDataRequest& request, const DescribeVodAIDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeVodAIData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VodClient::DescribeVodAIDataOutcomeCallable VodClient::describeVodAIDataCallable(const DescribeVodAIDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeVodAIDataOutcome()>>(
			[this, request]()
			{
			return this->describeVodAIData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VodClient::DescribeVodRefreshTasksOutcome VodClient::describeVodRefreshTasks(const DescribeVodRefreshTasksRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeVodRefreshTasksOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeVodRefreshTasksOutcome(DescribeVodRefreshTasksResult(outcome.result()));
	else
		return DescribeVodRefreshTasksOutcome(outcome.error());
}

void VodClient::describeVodRefreshTasksAsync(const DescribeVodRefreshTasksRequest& request, const DescribeVodRefreshTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeVodRefreshTasks(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VodClient::DescribeVodRefreshTasksOutcomeCallable VodClient::describeVodRefreshTasksCallable(const DescribeVodRefreshTasksRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeVodRefreshTasksOutcome()>>(
			[this, request]()
			{
			return this->describeVodRefreshTasks(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VodClient::GetVideoListOutcome VodClient::getVideoList(const GetVideoListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetVideoListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetVideoListOutcome(GetVideoListResult(outcome.result()));
	else
		return GetVideoListOutcome(outcome.error());
}

void VodClient::getVideoListAsync(const GetVideoListRequest& request, const GetVideoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getVideoList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VodClient::GetVideoListOutcomeCallable VodClient::getVideoListCallable(const GetVideoListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetVideoListOutcome()>>(
			[this, request]()
			{
			return this->getVideoList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VodClient::GetVideoInfoOutcome VodClient::getVideoInfo(const GetVideoInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetVideoInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetVideoInfoOutcome(GetVideoInfoResult(outcome.result()));
	else
		return GetVideoInfoOutcome(outcome.error());
}

void VodClient::getVideoInfoAsync(const GetVideoInfoRequest& request, const GetVideoInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getVideoInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VodClient::GetVideoInfoOutcomeCallable VodClient::getVideoInfoCallable(const GetVideoInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetVideoInfoOutcome()>>(
			[this, request]()
			{
			return this->getVideoInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VodClient::DeleteAttachedMediaOutcome VodClient::deleteAttachedMedia(const DeleteAttachedMediaRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteAttachedMediaOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteAttachedMediaOutcome(DeleteAttachedMediaResult(outcome.result()));
	else
		return DeleteAttachedMediaOutcome(outcome.error());
}

void VodClient::deleteAttachedMediaAsync(const DeleteAttachedMediaRequest& request, const DeleteAttachedMediaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteAttachedMedia(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VodClient::DeleteAttachedMediaOutcomeCallable VodClient::deleteAttachedMediaCallable(const DeleteAttachedMediaRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteAttachedMediaOutcome()>>(
			[this, request]()
			{
			return this->deleteAttachedMedia(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VodClient::SetMessageCallbackOutcome VodClient::setMessageCallback(const SetMessageCallbackRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetMessageCallbackOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetMessageCallbackOutcome(SetMessageCallbackResult(outcome.result()));
	else
		return SetMessageCallbackOutcome(outcome.error());
}

void VodClient::setMessageCallbackAsync(const SetMessageCallbackRequest& request, const SetMessageCallbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setMessageCallback(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VodClient::SetMessageCallbackOutcomeCallable VodClient::setMessageCallbackCallable(const SetMessageCallbackRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetMessageCallbackOutcome()>>(
			[this, request]()
			{
			return this->setMessageCallback(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VodClient::GetVideoInfosOutcome VodClient::getVideoInfos(const GetVideoInfosRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetVideoInfosOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetVideoInfosOutcome(GetVideoInfosResult(outcome.result()));
	else
		return GetVideoInfosOutcome(outcome.error());
}

void VodClient::getVideoInfosAsync(const GetVideoInfosRequest& request, const GetVideoInfosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getVideoInfos(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VodClient::GetVideoInfosOutcomeCallable VodClient::getVideoInfosCallable(const GetVideoInfosRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetVideoInfosOutcome()>>(
			[this, request]()
			{
			return this->getVideoInfos(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VodClient::GetEditingProjectMaterialsOutcome VodClient::getEditingProjectMaterials(const GetEditingProjectMaterialsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetEditingProjectMaterialsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetEditingProjectMaterialsOutcome(GetEditingProjectMaterialsResult(outcome.result()));
	else
		return GetEditingProjectMaterialsOutcome(outcome.error());
}

void VodClient::getEditingProjectMaterialsAsync(const GetEditingProjectMaterialsRequest& request, const GetEditingProjectMaterialsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getEditingProjectMaterials(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VodClient::GetEditingProjectMaterialsOutcomeCallable VodClient::getEditingProjectMaterialsCallable(const GetEditingProjectMaterialsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetEditingProjectMaterialsOutcome()>>(
			[this, request]()
			{
			return this->getEditingProjectMaterials(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VodClient::GetAppInfosOutcome VodClient::getAppInfos(const GetAppInfosRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetAppInfosOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetAppInfosOutcome(GetAppInfosResult(outcome.result()));
	else
		return GetAppInfosOutcome(outcome.error());
}

void VodClient::getAppInfosAsync(const GetAppInfosRequest& request, const GetAppInfosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getAppInfos(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VodClient::GetAppInfosOutcomeCallable VodClient::getAppInfosCallable(const GetAppInfosRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetAppInfosOutcome()>>(
			[this, request]()
			{
			return this->getAppInfos(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VodClient::CreateAppInfoOutcome VodClient::createAppInfo(const CreateAppInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateAppInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateAppInfoOutcome(CreateAppInfoResult(outcome.result()));
	else
		return CreateAppInfoOutcome(outcome.error());
}

void VodClient::createAppInfoAsync(const CreateAppInfoRequest& request, const CreateAppInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createAppInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VodClient::CreateAppInfoOutcomeCallable VodClient::createAppInfoCallable(const CreateAppInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateAppInfoOutcome()>>(
			[this, request]()
			{
			return this->createAppInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VodClient::DescribeVodDomainConfigsOutcome VodClient::describeVodDomainConfigs(const DescribeVodDomainConfigsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeVodDomainConfigsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeVodDomainConfigsOutcome(DescribeVodDomainConfigsResult(outcome.result()));
	else
		return DescribeVodDomainConfigsOutcome(outcome.error());
}

void VodClient::describeVodDomainConfigsAsync(const DescribeVodDomainConfigsRequest& request, const DescribeVodDomainConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeVodDomainConfigs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VodClient::DescribeVodDomainConfigsOutcomeCallable VodClient::describeVodDomainConfigsCallable(const DescribeVodDomainConfigsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeVodDomainConfigsOutcome()>>(
			[this, request]()
			{
			return this->describeVodDomainConfigs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VodClient::DeleteWatermarkOutcome VodClient::deleteWatermark(const DeleteWatermarkRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteWatermarkOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteWatermarkOutcome(DeleteWatermarkResult(outcome.result()));
	else
		return DeleteWatermarkOutcome(outcome.error());
}

void VodClient::deleteWatermarkAsync(const DeleteWatermarkRequest& request, const DeleteWatermarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteWatermark(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VodClient::DeleteWatermarkOutcomeCallable VodClient::deleteWatermarkCallable(const DeleteWatermarkRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteWatermarkOutcome()>>(
			[this, request]()
			{
			return this->deleteWatermark(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VodClient::BatchStopVodDomainOutcome VodClient::batchStopVodDomain(const BatchStopVodDomainRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BatchStopVodDomainOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BatchStopVodDomainOutcome(BatchStopVodDomainResult(outcome.result()));
	else
		return BatchStopVodDomainOutcome(outcome.error());
}

void VodClient::batchStopVodDomainAsync(const BatchStopVodDomainRequest& request, const BatchStopVodDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, batchStopVodDomain(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VodClient::BatchStopVodDomainOutcomeCallable VodClient::batchStopVodDomainCallable(const BatchStopVodDomainRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BatchStopVodDomainOutcome()>>(
			[this, request]()
			{
			return this->batchStopVodDomain(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VodClient::ModifyVodDomainSchdmByPropertyOutcome VodClient::modifyVodDomainSchdmByProperty(const ModifyVodDomainSchdmByPropertyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyVodDomainSchdmByPropertyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyVodDomainSchdmByPropertyOutcome(ModifyVodDomainSchdmByPropertyResult(outcome.result()));
	else
		return ModifyVodDomainSchdmByPropertyOutcome(outcome.error());
}

void VodClient::modifyVodDomainSchdmByPropertyAsync(const ModifyVodDomainSchdmByPropertyRequest& request, const ModifyVodDomainSchdmByPropertyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyVodDomainSchdmByProperty(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VodClient::ModifyVodDomainSchdmByPropertyOutcomeCallable VodClient::modifyVodDomainSchdmByPropertyCallable(const ModifyVodDomainSchdmByPropertyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyVodDomainSchdmByPropertyOutcome()>>(
			[this, request]()
			{
			return this->modifyVodDomainSchdmByProperty(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VodClient::ListTranscodeTemplateGroupOutcome VodClient::listTranscodeTemplateGroup(const ListTranscodeTemplateGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListTranscodeTemplateGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListTranscodeTemplateGroupOutcome(ListTranscodeTemplateGroupResult(outcome.result()));
	else
		return ListTranscodeTemplateGroupOutcome(outcome.error());
}

void VodClient::listTranscodeTemplateGroupAsync(const ListTranscodeTemplateGroupRequest& request, const ListTranscodeTemplateGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTranscodeTemplateGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VodClient::ListTranscodeTemplateGroupOutcomeCallable VodClient::listTranscodeTemplateGroupCallable(const ListTranscodeTemplateGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTranscodeTemplateGroupOutcome()>>(
			[this, request]()
			{
			return this->listTranscodeTemplateGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VodClient::ListAppPoliciesForIdentityOutcome VodClient::listAppPoliciesForIdentity(const ListAppPoliciesForIdentityRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAppPoliciesForIdentityOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAppPoliciesForIdentityOutcome(ListAppPoliciesForIdentityResult(outcome.result()));
	else
		return ListAppPoliciesForIdentityOutcome(outcome.error());
}

void VodClient::listAppPoliciesForIdentityAsync(const ListAppPoliciesForIdentityRequest& request, const ListAppPoliciesForIdentityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAppPoliciesForIdentity(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VodClient::ListAppPoliciesForIdentityOutcomeCallable VodClient::listAppPoliciesForIdentityCallable(const ListAppPoliciesForIdentityRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAppPoliciesForIdentityOutcome()>>(
			[this, request]()
			{
			return this->listAppPoliciesForIdentity(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VodClient::GetAIVideoTagResultOutcome VodClient::getAIVideoTagResult(const GetAIVideoTagResultRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetAIVideoTagResultOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetAIVideoTagResultOutcome(GetAIVideoTagResultResult(outcome.result()));
	else
		return GetAIVideoTagResultOutcome(outcome.error());
}

void VodClient::getAIVideoTagResultAsync(const GetAIVideoTagResultRequest& request, const GetAIVideoTagResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getAIVideoTagResult(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VodClient::GetAIVideoTagResultOutcomeCallable VodClient::getAIVideoTagResultCallable(const GetAIVideoTagResultRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetAIVideoTagResultOutcome()>>(
			[this, request]()
			{
			return this->getAIVideoTagResult(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VodClient::BatchStartVodDomainOutcome VodClient::batchStartVodDomain(const BatchStartVodDomainRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BatchStartVodDomainOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BatchStartVodDomainOutcome(BatchStartVodDomainResult(outcome.result()));
	else
		return BatchStartVodDomainOutcome(outcome.error());
}

void VodClient::batchStartVodDomainAsync(const BatchStartVodDomainRequest& request, const BatchStartVodDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, batchStartVodDomain(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VodClient::BatchStartVodDomainOutcomeCallable VodClient::batchStartVodDomainCallable(const BatchStartVodDomainRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BatchStartVodDomainOutcome()>>(
			[this, request]()
			{
			return this->batchStartVodDomain(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VodClient::SubmitPreprocessJobsOutcome VodClient::submitPreprocessJobs(const SubmitPreprocessJobsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SubmitPreprocessJobsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SubmitPreprocessJobsOutcome(SubmitPreprocessJobsResult(outcome.result()));
	else
		return SubmitPreprocessJobsOutcome(outcome.error());
}

void VodClient::submitPreprocessJobsAsync(const SubmitPreprocessJobsRequest& request, const SubmitPreprocessJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, submitPreprocessJobs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VodClient::SubmitPreprocessJobsOutcomeCallable VodClient::submitPreprocessJobsCallable(const SubmitPreprocessJobsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SubmitPreprocessJobsOutcome()>>(
			[this, request]()
			{
			return this->submitPreprocessJobs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VodClient::ListAIJobOutcome VodClient::listAIJob(const ListAIJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAIJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAIJobOutcome(ListAIJobResult(outcome.result()));
	else
		return ListAIJobOutcome(outcome.error());
}

void VodClient::listAIJobAsync(const ListAIJobRequest& request, const ListAIJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAIJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VodClient::ListAIJobOutcomeCallable VodClient::listAIJobCallable(const ListAIJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAIJobOutcome()>>(
			[this, request]()
			{
			return this->listAIJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VodClient::UpdateImageInfosOutcome VodClient::updateImageInfos(const UpdateImageInfosRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateImageInfosOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateImageInfosOutcome(UpdateImageInfosResult(outcome.result()));
	else
		return UpdateImageInfosOutcome(outcome.error());
}

void VodClient::updateImageInfosAsync(const UpdateImageInfosRequest& request, const UpdateImageInfosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateImageInfos(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VodClient::UpdateImageInfosOutcomeCallable VodClient::updateImageInfosCallable(const UpdateImageInfosRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateImageInfosOutcome()>>(
			[this, request]()
			{
			return this->updateImageInfos(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VodClient::DescribeVodDomainUsageDataOutcome VodClient::describeVodDomainUsageData(const DescribeVodDomainUsageDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeVodDomainUsageDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeVodDomainUsageDataOutcome(DescribeVodDomainUsageDataResult(outcome.result()));
	else
		return DescribeVodDomainUsageDataOutcome(outcome.error());
}

void VodClient::describeVodDomainUsageDataAsync(const DescribeVodDomainUsageDataRequest& request, const DescribeVodDomainUsageDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeVodDomainUsageData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VodClient::DescribeVodDomainUsageDataOutcomeCallable VodClient::describeVodDomainUsageDataCallable(const DescribeVodDomainUsageDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeVodDomainUsageDataOutcome()>>(
			[this, request]()
			{
			return this->describeVodDomainUsageData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VodClient::SearchMediaOutcome VodClient::searchMedia(const SearchMediaRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SearchMediaOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SearchMediaOutcome(SearchMediaResult(outcome.result()));
	else
		return SearchMediaOutcome(outcome.error());
}

void VodClient::searchMediaAsync(const SearchMediaRequest& request, const SearchMediaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, searchMedia(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VodClient::SearchMediaOutcomeCallable VodClient::searchMediaCallable(const SearchMediaRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SearchMediaOutcome()>>(
			[this, request]()
			{
			return this->searchMedia(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VodClient::PreloadVodObjectCachesOutcome VodClient::preloadVodObjectCaches(const PreloadVodObjectCachesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PreloadVodObjectCachesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PreloadVodObjectCachesOutcome(PreloadVodObjectCachesResult(outcome.result()));
	else
		return PreloadVodObjectCachesOutcome(outcome.error());
}

void VodClient::preloadVodObjectCachesAsync(const PreloadVodObjectCachesRequest& request, const PreloadVodObjectCachesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, preloadVodObjectCaches(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VodClient::PreloadVodObjectCachesOutcomeCallable VodClient::preloadVodObjectCachesCallable(const PreloadVodObjectCachesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PreloadVodObjectCachesOutcome()>>(
			[this, request]()
			{
			return this->preloadVodObjectCaches(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VodClient::UpdateTranscodeTemplateGroupOutcome VodClient::updateTranscodeTemplateGroup(const UpdateTranscodeTemplateGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateTranscodeTemplateGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateTranscodeTemplateGroupOutcome(UpdateTranscodeTemplateGroupResult(outcome.result()));
	else
		return UpdateTranscodeTemplateGroupOutcome(outcome.error());
}

void VodClient::updateTranscodeTemplateGroupAsync(const UpdateTranscodeTemplateGroupRequest& request, const UpdateTranscodeTemplateGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateTranscodeTemplateGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VodClient::UpdateTranscodeTemplateGroupOutcomeCallable VodClient::updateTranscodeTemplateGroupCallable(const UpdateTranscodeTemplateGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateTranscodeTemplateGroupOutcome()>>(
			[this, request]()
			{
			return this->updateTranscodeTemplateGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VodClient::AddCategoryOutcome VodClient::addCategory(const AddCategoryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddCategoryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddCategoryOutcome(AddCategoryResult(outcome.result()));
	else
		return AddCategoryOutcome(outcome.error());
}

void VodClient::addCategoryAsync(const AddCategoryRequest& request, const AddCategoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addCategory(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VodClient::AddCategoryOutcomeCallable VodClient::addCategoryCallable(const AddCategoryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddCategoryOutcome()>>(
			[this, request]()
			{
			return this->addCategory(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VodClient::SubmitSnapshotJobOutcome VodClient::submitSnapshotJob(const SubmitSnapshotJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SubmitSnapshotJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SubmitSnapshotJobOutcome(SubmitSnapshotJobResult(outcome.result()));
	else
		return SubmitSnapshotJobOutcome(outcome.error());
}

void VodClient::submitSnapshotJobAsync(const SubmitSnapshotJobRequest& request, const SubmitSnapshotJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, submitSnapshotJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VodClient::SubmitSnapshotJobOutcomeCallable VodClient::submitSnapshotJobCallable(const SubmitSnapshotJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SubmitSnapshotJobOutcome()>>(
			[this, request]()
			{
			return this->submitSnapshotJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VodClient::UpdateAITemplateOutcome VodClient::updateAITemplate(const UpdateAITemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateAITemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateAITemplateOutcome(UpdateAITemplateResult(outcome.result()));
	else
		return UpdateAITemplateOutcome(outcome.error());
}

void VodClient::updateAITemplateAsync(const UpdateAITemplateRequest& request, const UpdateAITemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateAITemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VodClient::UpdateAITemplateOutcomeCallable VodClient::updateAITemplateCallable(const UpdateAITemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateAITemplateOutcome()>>(
			[this, request]()
			{
			return this->updateAITemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VodClient::DeleteEditingProjectOutcome VodClient::deleteEditingProject(const DeleteEditingProjectRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteEditingProjectOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteEditingProjectOutcome(DeleteEditingProjectResult(outcome.result()));
	else
		return DeleteEditingProjectOutcome(outcome.error());
}

void VodClient::deleteEditingProjectAsync(const DeleteEditingProjectRequest& request, const DeleteEditingProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteEditingProject(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VodClient::DeleteEditingProjectOutcomeCallable VodClient::deleteEditingProjectCallable(const DeleteEditingProjectRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteEditingProjectOutcome()>>(
			[this, request]()
			{
			return this->deleteEditingProject(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VodClient::DescribeVodTranscodeDataOutcome VodClient::describeVodTranscodeData(const DescribeVodTranscodeDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeVodTranscodeDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeVodTranscodeDataOutcome(DescribeVodTranscodeDataResult(outcome.result()));
	else
		return DescribeVodTranscodeDataOutcome(outcome.error());
}

void VodClient::describeVodTranscodeDataAsync(const DescribeVodTranscodeDataRequest& request, const DescribeVodTranscodeDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeVodTranscodeData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VodClient::DescribeVodTranscodeDataOutcomeCallable VodClient::describeVodTranscodeDataCallable(const DescribeVodTranscodeDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeVodTranscodeDataOutcome()>>(
			[this, request]()
			{
			return this->describeVodTranscodeData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VodClient::SearchEditingProjectOutcome VodClient::searchEditingProject(const SearchEditingProjectRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SearchEditingProjectOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SearchEditingProjectOutcome(SearchEditingProjectResult(outcome.result()));
	else
		return SearchEditingProjectOutcome(outcome.error());
}

void VodClient::searchEditingProjectAsync(const SearchEditingProjectRequest& request, const SearchEditingProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, searchEditingProject(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VodClient::SearchEditingProjectOutcomeCallable VodClient::searchEditingProjectCallable(const SearchEditingProjectRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SearchEditingProjectOutcome()>>(
			[this, request]()
			{
			return this->searchEditingProject(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VodClient::DescribeVodUserDomainsOutcome VodClient::describeVodUserDomains(const DescribeVodUserDomainsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeVodUserDomainsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeVodUserDomainsOutcome(DescribeVodUserDomainsResult(outcome.result()));
	else
		return DescribeVodUserDomainsOutcome(outcome.error());
}

void VodClient::describeVodUserDomainsAsync(const DescribeVodUserDomainsRequest& request, const DescribeVodUserDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeVodUserDomains(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VodClient::DescribeVodUserDomainsOutcomeCallable VodClient::describeVodUserDomainsCallable(const DescribeVodUserDomainsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeVodUserDomainsOutcome()>>(
			[this, request]()
			{
			return this->describeVodUserDomains(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VodClient::GetImageInfoOutcome VodClient::getImageInfo(const GetImageInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetImageInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetImageInfoOutcome(GetImageInfoResult(outcome.result()));
	else
		return GetImageInfoOutcome(outcome.error());
}

void VodClient::getImageInfoAsync(const GetImageInfoRequest& request, const GetImageInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getImageInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VodClient::GetImageInfoOutcomeCallable VodClient::getImageInfoCallable(const GetImageInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetImageInfoOutcome()>>(
			[this, request]()
			{
			return this->getImageInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VodClient::UpdateWatermarkOutcome VodClient::updateWatermark(const UpdateWatermarkRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateWatermarkOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateWatermarkOutcome(UpdateWatermarkResult(outcome.result()));
	else
		return UpdateWatermarkOutcome(outcome.error());
}

void VodClient::updateWatermarkAsync(const UpdateWatermarkRequest& request, const UpdateWatermarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateWatermark(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VodClient::UpdateWatermarkOutcomeCallable VodClient::updateWatermarkCallable(const UpdateWatermarkRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateWatermarkOutcome()>>(
			[this, request]()
			{
			return this->updateWatermark(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VodClient::MoveAppResourceOutcome VodClient::moveAppResource(const MoveAppResourceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return MoveAppResourceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return MoveAppResourceOutcome(MoveAppResourceResult(outcome.result()));
	else
		return MoveAppResourceOutcome(outcome.error());
}

void VodClient::moveAppResourceAsync(const MoveAppResourceRequest& request, const MoveAppResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, moveAppResource(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VodClient::MoveAppResourceOutcomeCallable VodClient::moveAppResourceCallable(const MoveAppResourceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<MoveAppResourceOutcome()>>(
			[this, request]()
			{
			return this->moveAppResource(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VodClient::GetMessageCallbackOutcome VodClient::getMessageCallback(const GetMessageCallbackRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetMessageCallbackOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetMessageCallbackOutcome(GetMessageCallbackResult(outcome.result()));
	else
		return GetMessageCallbackOutcome(outcome.error());
}

void VodClient::getMessageCallbackAsync(const GetMessageCallbackRequest& request, const GetMessageCallbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getMessageCallback(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VodClient::GetMessageCallbackOutcomeCallable VodClient::getMessageCallbackCallable(const GetMessageCallbackRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetMessageCallbackOutcome()>>(
			[this, request]()
			{
			return this->getMessageCallback(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VodClient::GetCategoriesOutcome VodClient::getCategories(const GetCategoriesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetCategoriesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetCategoriesOutcome(GetCategoriesResult(outcome.result()));
	else
		return GetCategoriesOutcome(outcome.error());
}

void VodClient::getCategoriesAsync(const GetCategoriesRequest& request, const GetCategoriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getCategories(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VodClient::GetCategoriesOutcomeCallable VodClient::getCategoriesCallable(const GetCategoriesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetCategoriesOutcome()>>(
			[this, request]()
			{
			return this->getCategories(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VodClient::GetAIMediaAuditJobOutcome VodClient::getAIMediaAuditJob(const GetAIMediaAuditJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetAIMediaAuditJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetAIMediaAuditJobOutcome(GetAIMediaAuditJobResult(outcome.result()));
	else
		return GetAIMediaAuditJobOutcome(outcome.error());
}

void VodClient::getAIMediaAuditJobAsync(const GetAIMediaAuditJobRequest& request, const GetAIMediaAuditJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getAIMediaAuditJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VodClient::GetAIMediaAuditJobOutcomeCallable VodClient::getAIMediaAuditJobCallable(const GetAIMediaAuditJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetAIMediaAuditJobOutcome()>>(
			[this, request]()
			{
			return this->getAIMediaAuditJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VodClient::SubmitAIJobOutcome VodClient::submitAIJob(const SubmitAIJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SubmitAIJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SubmitAIJobOutcome(SubmitAIJobResult(outcome.result()));
	else
		return SubmitAIJobOutcome(outcome.error());
}

void VodClient::submitAIJobAsync(const SubmitAIJobRequest& request, const SubmitAIJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, submitAIJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VodClient::SubmitAIJobOutcomeCallable VodClient::submitAIJobCallable(const SubmitAIJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SubmitAIJobOutcome()>>(
			[this, request]()
			{
			return this->submitAIJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VodClient::SubmitTranscodeJobsOutcome VodClient::submitTranscodeJobs(const SubmitTranscodeJobsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SubmitTranscodeJobsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SubmitTranscodeJobsOutcome(SubmitTranscodeJobsResult(outcome.result()));
	else
		return SubmitTranscodeJobsOutcome(outcome.error());
}

void VodClient::submitTranscodeJobsAsync(const SubmitTranscodeJobsRequest& request, const SubmitTranscodeJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, submitTranscodeJobs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VodClient::SubmitTranscodeJobsOutcomeCallable VodClient::submitTranscodeJobsCallable(const SubmitTranscodeJobsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SubmitTranscodeJobsOutcome()>>(
			[this, request]()
			{
			return this->submitTranscodeJobs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VodClient::AddVodDomainOutcome VodClient::addVodDomain(const AddVodDomainRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddVodDomainOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddVodDomainOutcome(AddVodDomainResult(outcome.result()));
	else
		return AddVodDomainOutcome(outcome.error());
}

void VodClient::addVodDomainAsync(const AddVodDomainRequest& request, const AddVodDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addVodDomain(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VodClient::AddVodDomainOutcomeCallable VodClient::addVodDomainCallable(const AddVodDomainRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddVodDomainOutcome()>>(
			[this, request]()
			{
			return this->addVodDomain(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VodClient::CreateUploadVideoOutcome VodClient::createUploadVideo(const CreateUploadVideoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateUploadVideoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateUploadVideoOutcome(CreateUploadVideoResult(outcome.result()));
	else
		return CreateUploadVideoOutcome(outcome.error());
}

void VodClient::createUploadVideoAsync(const CreateUploadVideoRequest& request, const CreateUploadVideoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createUploadVideo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VodClient::CreateUploadVideoOutcomeCallable VodClient::createUploadVideoCallable(const CreateUploadVideoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateUploadVideoOutcome()>>(
			[this, request]()
			{
			return this->createUploadVideo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VodClient::SetAuditSecurityIpOutcome VodClient::setAuditSecurityIp(const SetAuditSecurityIpRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetAuditSecurityIpOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetAuditSecurityIpOutcome(SetAuditSecurityIpResult(outcome.result()));
	else
		return SetAuditSecurityIpOutcome(outcome.error());
}

void VodClient::setAuditSecurityIpAsync(const SetAuditSecurityIpRequest& request, const SetAuditSecurityIpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setAuditSecurityIp(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VodClient::SetAuditSecurityIpOutcomeCallable VodClient::setAuditSecurityIpCallable(const SetAuditSecurityIpRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetAuditSecurityIpOutcome()>>(
			[this, request]()
			{
			return this->setAuditSecurityIp(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VodClient::DeleteMultipartUploadOutcome VodClient::deleteMultipartUpload(const DeleteMultipartUploadRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteMultipartUploadOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteMultipartUploadOutcome(DeleteMultipartUploadResult(outcome.result()));
	else
		return DeleteMultipartUploadOutcome(outcome.error());
}

void VodClient::deleteMultipartUploadAsync(const DeleteMultipartUploadRequest& request, const DeleteMultipartUploadAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteMultipartUpload(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VodClient::DeleteMultipartUploadOutcomeCallable VodClient::deleteMultipartUploadCallable(const DeleteMultipartUploadRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteMultipartUploadOutcome()>>(
			[this, request]()
			{
			return this->deleteMultipartUpload(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VodClient::SubmitAIMediaAuditJobOutcome VodClient::submitAIMediaAuditJob(const SubmitAIMediaAuditJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SubmitAIMediaAuditJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SubmitAIMediaAuditJobOutcome(SubmitAIMediaAuditJobResult(outcome.result()));
	else
		return SubmitAIMediaAuditJobOutcome(outcome.error());
}

void VodClient::submitAIMediaAuditJobAsync(const SubmitAIMediaAuditJobRequest& request, const SubmitAIMediaAuditJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, submitAIMediaAuditJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VodClient::SubmitAIMediaAuditJobOutcomeCallable VodClient::submitAIMediaAuditJobCallable(const SubmitAIMediaAuditJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SubmitAIMediaAuditJobOutcome()>>(
			[this, request]()
			{
			return this->submitAIMediaAuditJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VodClient::GetTranscodeTaskOutcome VodClient::getTranscodeTask(const GetTranscodeTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetTranscodeTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetTranscodeTaskOutcome(GetTranscodeTaskResult(outcome.result()));
	else
		return GetTranscodeTaskOutcome(outcome.error());
}

void VodClient::getTranscodeTaskAsync(const GetTranscodeTaskRequest& request, const GetTranscodeTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getTranscodeTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VodClient::GetTranscodeTaskOutcomeCallable VodClient::getTranscodeTaskCallable(const GetTranscodeTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetTranscodeTaskOutcome()>>(
			[this, request]()
			{
			return this->getTranscodeTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VodClient::GetURLUploadInfosOutcome VodClient::getURLUploadInfos(const GetURLUploadInfosRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetURLUploadInfosOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetURLUploadInfosOutcome(GetURLUploadInfosResult(outcome.result()));
	else
		return GetURLUploadInfosOutcome(outcome.error());
}

void VodClient::getURLUploadInfosAsync(const GetURLUploadInfosRequest& request, const GetURLUploadInfosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getURLUploadInfos(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VodClient::GetURLUploadInfosOutcomeCallable VodClient::getURLUploadInfosCallable(const GetURLUploadInfosRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetURLUploadInfosOutcome()>>(
			[this, request]()
			{
			return this->getURLUploadInfos(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VodClient::GetMezzanineInfoOutcome VodClient::getMezzanineInfo(const GetMezzanineInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetMezzanineInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetMezzanineInfoOutcome(GetMezzanineInfoResult(outcome.result()));
	else
		return GetMezzanineInfoOutcome(outcome.error());
}

void VodClient::getMezzanineInfoAsync(const GetMezzanineInfoRequest& request, const GetMezzanineInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getMezzanineInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VodClient::GetMezzanineInfoOutcomeCallable VodClient::getMezzanineInfoCallable(const GetMezzanineInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetMezzanineInfoOutcome()>>(
			[this, request]()
			{
			return this->getMezzanineInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VodClient::DetachAppPolicyFromIdentityOutcome VodClient::detachAppPolicyFromIdentity(const DetachAppPolicyFromIdentityRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DetachAppPolicyFromIdentityOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DetachAppPolicyFromIdentityOutcome(DetachAppPolicyFromIdentityResult(outcome.result()));
	else
		return DetachAppPolicyFromIdentityOutcome(outcome.error());
}

void VodClient::detachAppPolicyFromIdentityAsync(const DetachAppPolicyFromIdentityRequest& request, const DetachAppPolicyFromIdentityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, detachAppPolicyFromIdentity(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VodClient::DetachAppPolicyFromIdentityOutcomeCallable VodClient::detachAppPolicyFromIdentityCallable(const DetachAppPolicyFromIdentityRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DetachAppPolicyFromIdentityOutcome()>>(
			[this, request]()
			{
			return this->detachAppPolicyFromIdentity(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VodClient::DescribePlayUserAvgOutcome VodClient::describePlayUserAvg(const DescribePlayUserAvgRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribePlayUserAvgOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribePlayUserAvgOutcome(DescribePlayUserAvgResult(outcome.result()));
	else
		return DescribePlayUserAvgOutcome(outcome.error());
}

void VodClient::describePlayUserAvgAsync(const DescribePlayUserAvgRequest& request, const DescribePlayUserAvgAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describePlayUserAvg(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VodClient::DescribePlayUserAvgOutcomeCallable VodClient::describePlayUserAvgCallable(const DescribePlayUserAvgRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribePlayUserAvgOutcome()>>(
			[this, request]()
			{
			return this->describePlayUserAvg(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

