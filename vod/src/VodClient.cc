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

VodClient::ListAIVideoSummaryJobOutcome VodClient::listAIVideoSummaryJob(const ListAIVideoSummaryJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAIVideoSummaryJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAIVideoSummaryJobOutcome(ListAIVideoSummaryJobResult(outcome.result()));
	else
		return ListAIVideoSummaryJobOutcome(outcome.error());
}

void VodClient::listAIVideoSummaryJobAsync(const ListAIVideoSummaryJobRequest& request, const ListAIVideoSummaryJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAIVideoSummaryJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VodClient::ListAIVideoSummaryJobOutcomeCallable VodClient::listAIVideoSummaryJobCallable(const ListAIVideoSummaryJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAIVideoSummaryJobOutcome()>>(
			[this, request]()
			{
			return this->listAIVideoSummaryJob(request);
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

VodClient::ListAIVideoTerrorismRecogJobOutcome VodClient::listAIVideoTerrorismRecogJob(const ListAIVideoTerrorismRecogJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAIVideoTerrorismRecogJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAIVideoTerrorismRecogJobOutcome(ListAIVideoTerrorismRecogJobResult(outcome.result()));
	else
		return ListAIVideoTerrorismRecogJobOutcome(outcome.error());
}

void VodClient::listAIVideoTerrorismRecogJobAsync(const ListAIVideoTerrorismRecogJobRequest& request, const ListAIVideoTerrorismRecogJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAIVideoTerrorismRecogJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VodClient::ListAIVideoTerrorismRecogJobOutcomeCallable VodClient::listAIVideoTerrorismRecogJobCallable(const ListAIVideoTerrorismRecogJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAIVideoTerrorismRecogJobOutcome()>>(
			[this, request]()
			{
			return this->listAIVideoTerrorismRecogJob(request);
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

VodClient::RefreshObjectCachesOutcome VodClient::refreshObjectCaches(const RefreshObjectCachesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RefreshObjectCachesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RefreshObjectCachesOutcome(RefreshObjectCachesResult(outcome.result()));
	else
		return RefreshObjectCachesOutcome(outcome.error());
}

void VodClient::refreshObjectCachesAsync(const RefreshObjectCachesRequest& request, const RefreshObjectCachesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, refreshObjectCaches(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VodClient::RefreshObjectCachesOutcomeCallable VodClient::refreshObjectCachesCallable(const RefreshObjectCachesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RefreshObjectCachesOutcome()>>(
			[this, request]()
			{
			return this->refreshObjectCaches(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VodClient::DescribeDomainBpsDataOutcome VodClient::describeDomainBpsData(const DescribeDomainBpsDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDomainBpsDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDomainBpsDataOutcome(DescribeDomainBpsDataResult(outcome.result()));
	else
		return DescribeDomainBpsDataOutcome(outcome.error());
}

void VodClient::describeDomainBpsDataAsync(const DescribeDomainBpsDataRequest& request, const DescribeDomainBpsDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDomainBpsData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VodClient::DescribeDomainBpsDataOutcomeCallable VodClient::describeDomainBpsDataCallable(const DescribeDomainBpsDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDomainBpsDataOutcome()>>(
			[this, request]()
			{
			return this->describeDomainBpsData(request);
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

VodClient::OpenVodServiceOutcome VodClient::openVodService(const OpenVodServiceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OpenVodServiceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OpenVodServiceOutcome(OpenVodServiceResult(outcome.result()));
	else
		return OpenVodServiceOutcome(outcome.error());
}

void VodClient::openVodServiceAsync(const OpenVodServiceRequest& request, const OpenVodServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, openVodService(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VodClient::OpenVodServiceOutcomeCallable VodClient::openVodServiceCallable(const OpenVodServiceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OpenVodServiceOutcome()>>(
			[this, request]()
			{
			return this->openVodService(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VodClient::SubmitAIVideoCategoryJobOutcome VodClient::submitAIVideoCategoryJob(const SubmitAIVideoCategoryJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SubmitAIVideoCategoryJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SubmitAIVideoCategoryJobOutcome(SubmitAIVideoCategoryJobResult(outcome.result()));
	else
		return SubmitAIVideoCategoryJobOutcome(outcome.error());
}

void VodClient::submitAIVideoCategoryJobAsync(const SubmitAIVideoCategoryJobRequest& request, const SubmitAIVideoCategoryJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, submitAIVideoCategoryJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VodClient::SubmitAIVideoCategoryJobOutcomeCallable VodClient::submitAIVideoCategoryJobCallable(const SubmitAIVideoCategoryJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SubmitAIVideoCategoryJobOutcome()>>(
			[this, request]()
			{
			return this->submitAIVideoCategoryJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VodClient::DescribeRefreshTasksOutcome VodClient::describeRefreshTasks(const DescribeRefreshTasksRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRefreshTasksOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRefreshTasksOutcome(DescribeRefreshTasksResult(outcome.result()));
	else
		return DescribeRefreshTasksOutcome(outcome.error());
}

void VodClient::describeRefreshTasksAsync(const DescribeRefreshTasksRequest& request, const DescribeRefreshTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRefreshTasks(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VodClient::DescribeRefreshTasksOutcomeCallable VodClient::describeRefreshTasksCallable(const DescribeRefreshTasksRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRefreshTasksOutcome()>>(
			[this, request]()
			{
			return this->describeRefreshTasks(request);
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

VodClient::ListAIASRJobOutcome VodClient::listAIASRJob(const ListAIASRJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAIASRJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAIASRJobOutcome(ListAIASRJobResult(outcome.result()));
	else
		return ListAIASRJobOutcome(outcome.error());
}

void VodClient::listAIASRJobAsync(const ListAIASRJobRequest& request, const ListAIASRJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAIASRJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VodClient::ListAIASRJobOutcomeCallable VodClient::listAIASRJobCallable(const ListAIASRJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAIASRJobOutcome()>>(
			[this, request]()
			{
			return this->listAIASRJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VodClient::ListAIVideoCensorJobOutcome VodClient::listAIVideoCensorJob(const ListAIVideoCensorJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAIVideoCensorJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAIVideoCensorJobOutcome(ListAIVideoCensorJobResult(outcome.result()));
	else
		return ListAIVideoCensorJobOutcome(outcome.error());
}

void VodClient::listAIVideoCensorJobAsync(const ListAIVideoCensorJobRequest& request, const ListAIVideoCensorJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAIVideoCensorJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VodClient::ListAIVideoCensorJobOutcomeCallable VodClient::listAIVideoCensorJobCallable(const ListAIVideoCensorJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAIVideoCensorJobOutcome()>>(
			[this, request]()
			{
			return this->listAIVideoCensorJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VodClient::DescribeRefreshQuotaOutcome VodClient::describeRefreshQuota(const DescribeRefreshQuotaRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRefreshQuotaOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRefreshQuotaOutcome(DescribeRefreshQuotaResult(outcome.result()));
	else
		return DescribeRefreshQuotaOutcome(outcome.error());
}

void VodClient::describeRefreshQuotaAsync(const DescribeRefreshQuotaRequest& request, const DescribeRefreshQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRefreshQuota(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VodClient::DescribeRefreshQuotaOutcomeCallable VodClient::describeRefreshQuotaCallable(const DescribeRefreshQuotaRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRefreshQuotaOutcome()>>(
			[this, request]()
			{
			return this->describeRefreshQuota(request);
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

VodClient::GetCDNStatisSumOutcome VodClient::getCDNStatisSum(const GetCDNStatisSumRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetCDNStatisSumOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetCDNStatisSumOutcome(GetCDNStatisSumResult(outcome.result()));
	else
		return GetCDNStatisSumOutcome(outcome.error());
}

void VodClient::getCDNStatisSumAsync(const GetCDNStatisSumRequest& request, const GetCDNStatisSumAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getCDNStatisSum(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VodClient::GetCDNStatisSumOutcomeCallable VodClient::getCDNStatisSumCallable(const GetCDNStatisSumRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetCDNStatisSumOutcome()>>(
			[this, request]()
			{
			return this->getCDNStatisSum(request);
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

VodClient::GetAuditResultOutcome VodClient::getAuditResult(const GetAuditResultRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetAuditResultOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetAuditResultOutcome(GetAuditResultResult(outcome.result()));
	else
		return GetAuditResultOutcome(outcome.error());
}

void VodClient::getAuditResultAsync(const GetAuditResultRequest& request, const GetAuditResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getAuditResult(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VodClient::GetAuditResultOutcomeCallable VodClient::getAuditResultCallable(const GetAuditResultRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetAuditResultOutcome()>>(
			[this, request]()
			{
			return this->getAuditResult(request);
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

VodClient::GetVideoPlayInfoOutcome VodClient::getVideoPlayInfo(const GetVideoPlayInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetVideoPlayInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetVideoPlayInfoOutcome(GetVideoPlayInfoResult(outcome.result()));
	else
		return GetVideoPlayInfoOutcome(outcome.error());
}

void VodClient::getVideoPlayInfoAsync(const GetVideoPlayInfoRequest& request, const GetVideoPlayInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getVideoPlayInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VodClient::GetVideoPlayInfoOutcomeCallable VodClient::getVideoPlayInfoCallable(const GetVideoPlayInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetVideoPlayInfoOutcome()>>(
			[this, request]()
			{
			return this->getVideoPlayInfo(request);
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

VodClient::GetVideoConfigOutcome VodClient::getVideoConfig(const GetVideoConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetVideoConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetVideoConfigOutcome(GetVideoConfigResult(outcome.result()));
	else
		return GetVideoConfigOutcome(outcome.error());
}

void VodClient::getVideoConfigAsync(const GetVideoConfigRequest& request, const GetVideoConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getVideoConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VodClient::GetVideoConfigOutcomeCallable VodClient::getVideoConfigCallable(const GetVideoConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetVideoConfigOutcome()>>(
			[this, request]()
			{
			return this->getVideoConfig(request);
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

VodClient::PushObjectCacheOutcome VodClient::pushObjectCache(const PushObjectCacheRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PushObjectCacheOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PushObjectCacheOutcome(PushObjectCacheResult(outcome.result()));
	else
		return PushObjectCacheOutcome(outcome.error());
}

void VodClient::pushObjectCacheAsync(const PushObjectCacheRequest& request, const PushObjectCacheAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, pushObjectCache(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VodClient::PushObjectCacheOutcomeCallable VodClient::pushObjectCacheCallable(const PushObjectCacheRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PushObjectCacheOutcome()>>(
			[this, request]()
			{
			return this->pushObjectCache(request);
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

VodClient::ListAIVideoPornRecogJobOutcome VodClient::listAIVideoPornRecogJob(const ListAIVideoPornRecogJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAIVideoPornRecogJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAIVideoPornRecogJobOutcome(ListAIVideoPornRecogJobResult(outcome.result()));
	else
		return ListAIVideoPornRecogJobOutcome(outcome.error());
}

void VodClient::listAIVideoPornRecogJobAsync(const ListAIVideoPornRecogJobRequest& request, const ListAIVideoPornRecogJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAIVideoPornRecogJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VodClient::ListAIVideoPornRecogJobOutcomeCallable VodClient::listAIVideoPornRecogJobCallable(const ListAIVideoPornRecogJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAIVideoPornRecogJobOutcome()>>(
			[this, request]()
			{
			return this->listAIVideoPornRecogJob(request);
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

VodClient::SubmitAIVideoCensorJobOutcome VodClient::submitAIVideoCensorJob(const SubmitAIVideoCensorJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SubmitAIVideoCensorJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SubmitAIVideoCensorJobOutcome(SubmitAIVideoCensorJobResult(outcome.result()));
	else
		return SubmitAIVideoCensorJobOutcome(outcome.error());
}

void VodClient::submitAIVideoCensorJobAsync(const SubmitAIVideoCensorJobRequest& request, const SubmitAIVideoCensorJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, submitAIVideoCensorJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VodClient::SubmitAIVideoCensorJobOutcomeCallable VodClient::submitAIVideoCensorJobCallable(const SubmitAIVideoCensorJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SubmitAIVideoCensorJobOutcome()>>(
			[this, request]()
			{
			return this->submitAIVideoCensorJob(request);
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

VodClient::SubmitAIVideoTerrorismRecogJobOutcome VodClient::submitAIVideoTerrorismRecogJob(const SubmitAIVideoTerrorismRecogJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SubmitAIVideoTerrorismRecogJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SubmitAIVideoTerrorismRecogJobOutcome(SubmitAIVideoTerrorismRecogJobResult(outcome.result()));
	else
		return SubmitAIVideoTerrorismRecogJobOutcome(outcome.error());
}

void VodClient::submitAIVideoTerrorismRecogJobAsync(const SubmitAIVideoTerrorismRecogJobRequest& request, const SubmitAIVideoTerrorismRecogJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, submitAIVideoTerrorismRecogJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VodClient::SubmitAIVideoTerrorismRecogJobOutcomeCallable VodClient::submitAIVideoTerrorismRecogJobCallable(const SubmitAIVideoTerrorismRecogJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SubmitAIVideoTerrorismRecogJobOutcome()>>(
			[this, request]()
			{
			return this->submitAIVideoTerrorismRecogJob(request);
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

VodClient::ListAIVideoCategoryJobOutcome VodClient::listAIVideoCategoryJob(const ListAIVideoCategoryJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAIVideoCategoryJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAIVideoCategoryJobOutcome(ListAIVideoCategoryJobResult(outcome.result()));
	else
		return ListAIVideoCategoryJobOutcome(outcome.error());
}

void VodClient::listAIVideoCategoryJobAsync(const ListAIVideoCategoryJobRequest& request, const ListAIVideoCategoryJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAIVideoCategoryJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VodClient::ListAIVideoCategoryJobOutcomeCallable VodClient::listAIVideoCategoryJobCallable(const ListAIVideoCategoryJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAIVideoCategoryJobOutcome()>>(
			[this, request]()
			{
			return this->listAIVideoCategoryJob(request);
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

VodClient::ListAIVideoCoverJobOutcome VodClient::listAIVideoCoverJob(const ListAIVideoCoverJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAIVideoCoverJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAIVideoCoverJobOutcome(ListAIVideoCoverJobResult(outcome.result()));
	else
		return ListAIVideoCoverJobOutcome(outcome.error());
}

void VodClient::listAIVideoCoverJobAsync(const ListAIVideoCoverJobRequest& request, const ListAIVideoCoverJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAIVideoCoverJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VodClient::ListAIVideoCoverJobOutcomeCallable VodClient::listAIVideoCoverJobCallable(const ListAIVideoCoverJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAIVideoCoverJobOutcome()>>(
			[this, request]()
			{
			return this->listAIVideoCoverJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VodClient::SubmitAIASRJobOutcome VodClient::submitAIASRJob(const SubmitAIASRJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SubmitAIASRJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SubmitAIASRJobOutcome(SubmitAIASRJobResult(outcome.result()));
	else
		return SubmitAIASRJobOutcome(outcome.error());
}

void VodClient::submitAIASRJobAsync(const SubmitAIASRJobRequest& request, const SubmitAIASRJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, submitAIASRJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VodClient::SubmitAIASRJobOutcomeCallable VodClient::submitAIASRJobCallable(const SubmitAIASRJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SubmitAIASRJobOutcome()>>(
			[this, request]()
			{
			return this->submitAIASRJob(request);
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

VodClient::GetOSSStatisOutcome VodClient::getOSSStatis(const GetOSSStatisRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetOSSStatisOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetOSSStatisOutcome(GetOSSStatisResult(outcome.result()));
	else
		return GetOSSStatisOutcome(outcome.error());
}

void VodClient::getOSSStatisAsync(const GetOSSStatisRequest& request, const GetOSSStatisAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getOSSStatis(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VodClient::GetOSSStatisOutcomeCallable VodClient::getOSSStatisCallable(const GetOSSStatisRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetOSSStatisOutcome()>>(
			[this, request]()
			{
			return this->getOSSStatis(request);
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

VodClient::SubmitAIVideoSummaryJobOutcome VodClient::submitAIVideoSummaryJob(const SubmitAIVideoSummaryJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SubmitAIVideoSummaryJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SubmitAIVideoSummaryJobOutcome(SubmitAIVideoSummaryJobResult(outcome.result()));
	else
		return SubmitAIVideoSummaryJobOutcome(outcome.error());
}

void VodClient::submitAIVideoSummaryJobAsync(const SubmitAIVideoSummaryJobRequest& request, const SubmitAIVideoSummaryJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, submitAIVideoSummaryJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VodClient::SubmitAIVideoSummaryJobOutcomeCallable VodClient::submitAIVideoSummaryJobCallable(const SubmitAIVideoSummaryJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SubmitAIVideoSummaryJobOutcome()>>(
			[this, request]()
			{
			return this->submitAIVideoSummaryJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VodClient::DescribeCdnDomainLogsOutcome VodClient::describeCdnDomainLogs(const DescribeCdnDomainLogsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCdnDomainLogsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCdnDomainLogsOutcome(DescribeCdnDomainLogsResult(outcome.result()));
	else
		return DescribeCdnDomainLogsOutcome(outcome.error());
}

void VodClient::describeCdnDomainLogsAsync(const DescribeCdnDomainLogsRequest& request, const DescribeCdnDomainLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCdnDomainLogs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VodClient::DescribeCdnDomainLogsOutcomeCallable VodClient::describeCdnDomainLogsCallable(const DescribeCdnDomainLogsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCdnDomainLogsOutcome()>>(
			[this, request]()
			{
			return this->describeCdnDomainLogs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VodClient::DescribeDomainFlowDataOutcome VodClient::describeDomainFlowData(const DescribeDomainFlowDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDomainFlowDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDomainFlowDataOutcome(DescribeDomainFlowDataResult(outcome.result()));
	else
		return DescribeDomainFlowDataOutcome(outcome.error());
}

void VodClient::describeDomainFlowDataAsync(const DescribeDomainFlowDataRequest& request, const DescribeDomainFlowDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDomainFlowData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VodClient::DescribeDomainFlowDataOutcomeCallable VodClient::describeDomainFlowDataCallable(const DescribeDomainFlowDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDomainFlowDataOutcome()>>(
			[this, request]()
			{
			return this->describeDomainFlowData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VodClient::SubmitAIVideoPornRecogJobOutcome VodClient::submitAIVideoPornRecogJob(const SubmitAIVideoPornRecogJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SubmitAIVideoPornRecogJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SubmitAIVideoPornRecogJobOutcome(SubmitAIVideoPornRecogJobResult(outcome.result()));
	else
		return SubmitAIVideoPornRecogJobOutcome(outcome.error());
}

void VodClient::submitAIVideoPornRecogJobAsync(const SubmitAIVideoPornRecogJobRequest& request, const SubmitAIVideoPornRecogJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, submitAIVideoPornRecogJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VodClient::SubmitAIVideoPornRecogJobOutcomeCallable VodClient::submitAIVideoPornRecogJobCallable(const SubmitAIVideoPornRecogJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SubmitAIVideoPornRecogJobOutcome()>>(
			[this, request]()
			{
			return this->submitAIVideoPornRecogJob(request);
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

VodClient::SubmitAIVideoCoverJobOutcome VodClient::submitAIVideoCoverJob(const SubmitAIVideoCoverJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SubmitAIVideoCoverJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SubmitAIVideoCoverJobOutcome(SubmitAIVideoCoverJobResult(outcome.result()));
	else
		return SubmitAIVideoCoverJobOutcome(outcome.error());
}

void VodClient::submitAIVideoCoverJobAsync(const SubmitAIVideoCoverJobRequest& request, const SubmitAIVideoCoverJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, submitAIVideoCoverJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VodClient::SubmitAIVideoCoverJobOutcomeCallable VodClient::submitAIVideoCoverJobCallable(const SubmitAIVideoCoverJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SubmitAIVideoCoverJobOutcome()>>(
			[this, request]()
			{
			return this->submitAIVideoCoverJob(request);
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

