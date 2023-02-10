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

#ifndef ALIBABACLOUD_EAS_EASCLIENT_H_
#define ALIBABACLOUD_EAS_EASCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RoaServiceClient.h>
#include "EasExport.h"
#include "model/CommitServiceRequest.h"
#include "model/CommitServiceResult.h"
#include "model/CreateBenchmarkTaskRequest.h"
#include "model/CreateBenchmarkTaskResult.h"
#include "model/CreateResourceRequest.h"
#include "model/CreateResourceResult.h"
#include "model/CreateResourceInstancesRequest.h"
#include "model/CreateResourceInstancesResult.h"
#include "model/CreateResourceLogRequest.h"
#include "model/CreateResourceLogResult.h"
#include "model/CreateServiceRequest.h"
#include "model/CreateServiceResult.h"
#include "model/CreateServiceAutoScalerRequest.h"
#include "model/CreateServiceAutoScalerResult.h"
#include "model/CreateServiceCronScalerRequest.h"
#include "model/CreateServiceCronScalerResult.h"
#include "model/CreateServiceMirrorRequest.h"
#include "model/CreateServiceMirrorResult.h"
#include "model/DeleteBenchmarkTaskRequest.h"
#include "model/DeleteBenchmarkTaskResult.h"
#include "model/DeleteResourceRequest.h"
#include "model/DeleteResourceResult.h"
#include "model/DeleteResourceDLinkRequest.h"
#include "model/DeleteResourceDLinkResult.h"
#include "model/DeleteResourceInstancesRequest.h"
#include "model/DeleteResourceInstancesResult.h"
#include "model/DeleteResourceLogRequest.h"
#include "model/DeleteResourceLogResult.h"
#include "model/DeleteServiceRequest.h"
#include "model/DeleteServiceResult.h"
#include "model/DeleteServiceAutoScalerRequest.h"
#include "model/DeleteServiceAutoScalerResult.h"
#include "model/DeleteServiceCronScalerRequest.h"
#include "model/DeleteServiceCronScalerResult.h"
#include "model/DeleteServiceInstancesRequest.h"
#include "model/DeleteServiceInstancesResult.h"
#include "model/DeleteServiceLabelRequest.h"
#include "model/DeleteServiceLabelResult.h"
#include "model/DeleteServiceMirrorRequest.h"
#include "model/DeleteServiceMirrorResult.h"
#include "model/DescribeBenchmarkTaskRequest.h"
#include "model/DescribeBenchmarkTaskResult.h"
#include "model/DescribeBenchmarkTaskReportRequest.h"
#include "model/DescribeBenchmarkTaskReportResult.h"
#include "model/DescribeGroupRequest.h"
#include "model/DescribeGroupResult.h"
#include "model/DescribeResourceRequest.h"
#include "model/DescribeResourceResult.h"
#include "model/DescribeResourceDLinkRequest.h"
#include "model/DescribeResourceDLinkResult.h"
#include "model/DescribeResourceLogRequest.h"
#include "model/DescribeResourceLogResult.h"
#include "model/DescribeServiceRequest.h"
#include "model/DescribeServiceResult.h"
#include "model/DescribeServiceAutoScalerRequest.h"
#include "model/DescribeServiceAutoScalerResult.h"
#include "model/DescribeServiceCronScalerRequest.h"
#include "model/DescribeServiceCronScalerResult.h"
#include "model/DescribeServiceEventRequest.h"
#include "model/DescribeServiceEventResult.h"
#include "model/DescribeServiceLogRequest.h"
#include "model/DescribeServiceLogResult.h"
#include "model/DescribeServiceMirrorRequest.h"
#include "model/DescribeServiceMirrorResult.h"
#include "model/DevelopServiceRequest.h"
#include "model/DevelopServiceResult.h"
#include "model/ListBenchmarkTaskRequest.h"
#include "model/ListBenchmarkTaskResult.h"
#include "model/ListGroupsRequest.h"
#include "model/ListGroupsResult.h"
#include "model/ListResourceInstanceWorkerRequest.h"
#include "model/ListResourceInstanceWorkerResult.h"
#include "model/ListResourceInstancesRequest.h"
#include "model/ListResourceInstancesResult.h"
#include "model/ListResourceServicesRequest.h"
#include "model/ListResourceServicesResult.h"
#include "model/ListResourcesRequest.h"
#include "model/ListResourcesResult.h"
#include "model/ListServiceInstancesRequest.h"
#include "model/ListServiceInstancesResult.h"
#include "model/ListServiceVersionsRequest.h"
#include "model/ListServiceVersionsResult.h"
#include "model/ListServicesRequest.h"
#include "model/ListServicesResult.h"
#include "model/ReleaseServiceRequest.h"
#include "model/ReleaseServiceResult.h"
#include "model/StartBenchmarkTaskRequest.h"
#include "model/StartBenchmarkTaskResult.h"
#include "model/StartServiceRequest.h"
#include "model/StartServiceResult.h"
#include "model/StopBenchmarkTaskRequest.h"
#include "model/StopBenchmarkTaskResult.h"
#include "model/StopServiceRequest.h"
#include "model/StopServiceResult.h"
#include "model/UpdateBenchmarkTaskRequest.h"
#include "model/UpdateBenchmarkTaskResult.h"
#include "model/UpdateResourceRequest.h"
#include "model/UpdateResourceResult.h"
#include "model/UpdateResourceDLinkRequest.h"
#include "model/UpdateResourceDLinkResult.h"
#include "model/UpdateResourceInstanceRequest.h"
#include "model/UpdateResourceInstanceResult.h"
#include "model/UpdateServiceRequest.h"
#include "model/UpdateServiceResult.h"
#include "model/UpdateServiceAutoScalerRequest.h"
#include "model/UpdateServiceAutoScalerResult.h"
#include "model/UpdateServiceCronScalerRequest.h"
#include "model/UpdateServiceCronScalerResult.h"
#include "model/UpdateServiceLabelRequest.h"
#include "model/UpdateServiceLabelResult.h"
#include "model/UpdateServiceMirrorRequest.h"
#include "model/UpdateServiceMirrorResult.h"
#include "model/UpdateServiceSafetyLockRequest.h"
#include "model/UpdateServiceSafetyLockResult.h"
#include "model/UpdateServiceVersionRequest.h"
#include "model/UpdateServiceVersionResult.h"


namespace AlibabaCloud
{
	namespace Eas
	{
		class ALIBABACLOUD_EAS_EXPORT EasClient : public RoaServiceClient
		{
		public:
			typedef Outcome<Error, Model::CommitServiceResult> CommitServiceOutcome;
			typedef std::future<CommitServiceOutcome> CommitServiceOutcomeCallable;
			typedef std::function<void(const EasClient*, const Model::CommitServiceRequest&, const CommitServiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CommitServiceAsyncHandler;
			typedef Outcome<Error, Model::CreateBenchmarkTaskResult> CreateBenchmarkTaskOutcome;
			typedef std::future<CreateBenchmarkTaskOutcome> CreateBenchmarkTaskOutcomeCallable;
			typedef std::function<void(const EasClient*, const Model::CreateBenchmarkTaskRequest&, const CreateBenchmarkTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateBenchmarkTaskAsyncHandler;
			typedef Outcome<Error, Model::CreateResourceResult> CreateResourceOutcome;
			typedef std::future<CreateResourceOutcome> CreateResourceOutcomeCallable;
			typedef std::function<void(const EasClient*, const Model::CreateResourceRequest&, const CreateResourceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateResourceAsyncHandler;
			typedef Outcome<Error, Model::CreateResourceInstancesResult> CreateResourceInstancesOutcome;
			typedef std::future<CreateResourceInstancesOutcome> CreateResourceInstancesOutcomeCallable;
			typedef std::function<void(const EasClient*, const Model::CreateResourceInstancesRequest&, const CreateResourceInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateResourceInstancesAsyncHandler;
			typedef Outcome<Error, Model::CreateResourceLogResult> CreateResourceLogOutcome;
			typedef std::future<CreateResourceLogOutcome> CreateResourceLogOutcomeCallable;
			typedef std::function<void(const EasClient*, const Model::CreateResourceLogRequest&, const CreateResourceLogOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateResourceLogAsyncHandler;
			typedef Outcome<Error, Model::CreateServiceResult> CreateServiceOutcome;
			typedef std::future<CreateServiceOutcome> CreateServiceOutcomeCallable;
			typedef std::function<void(const EasClient*, const Model::CreateServiceRequest&, const CreateServiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateServiceAsyncHandler;
			typedef Outcome<Error, Model::CreateServiceAutoScalerResult> CreateServiceAutoScalerOutcome;
			typedef std::future<CreateServiceAutoScalerOutcome> CreateServiceAutoScalerOutcomeCallable;
			typedef std::function<void(const EasClient*, const Model::CreateServiceAutoScalerRequest&, const CreateServiceAutoScalerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateServiceAutoScalerAsyncHandler;
			typedef Outcome<Error, Model::CreateServiceCronScalerResult> CreateServiceCronScalerOutcome;
			typedef std::future<CreateServiceCronScalerOutcome> CreateServiceCronScalerOutcomeCallable;
			typedef std::function<void(const EasClient*, const Model::CreateServiceCronScalerRequest&, const CreateServiceCronScalerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateServiceCronScalerAsyncHandler;
			typedef Outcome<Error, Model::CreateServiceMirrorResult> CreateServiceMirrorOutcome;
			typedef std::future<CreateServiceMirrorOutcome> CreateServiceMirrorOutcomeCallable;
			typedef std::function<void(const EasClient*, const Model::CreateServiceMirrorRequest&, const CreateServiceMirrorOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateServiceMirrorAsyncHandler;
			typedef Outcome<Error, Model::DeleteBenchmarkTaskResult> DeleteBenchmarkTaskOutcome;
			typedef std::future<DeleteBenchmarkTaskOutcome> DeleteBenchmarkTaskOutcomeCallable;
			typedef std::function<void(const EasClient*, const Model::DeleteBenchmarkTaskRequest&, const DeleteBenchmarkTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteBenchmarkTaskAsyncHandler;
			typedef Outcome<Error, Model::DeleteResourceResult> DeleteResourceOutcome;
			typedef std::future<DeleteResourceOutcome> DeleteResourceOutcomeCallable;
			typedef std::function<void(const EasClient*, const Model::DeleteResourceRequest&, const DeleteResourceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteResourceAsyncHandler;
			typedef Outcome<Error, Model::DeleteResourceDLinkResult> DeleteResourceDLinkOutcome;
			typedef std::future<DeleteResourceDLinkOutcome> DeleteResourceDLinkOutcomeCallable;
			typedef std::function<void(const EasClient*, const Model::DeleteResourceDLinkRequest&, const DeleteResourceDLinkOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteResourceDLinkAsyncHandler;
			typedef Outcome<Error, Model::DeleteResourceInstancesResult> DeleteResourceInstancesOutcome;
			typedef std::future<DeleteResourceInstancesOutcome> DeleteResourceInstancesOutcomeCallable;
			typedef std::function<void(const EasClient*, const Model::DeleteResourceInstancesRequest&, const DeleteResourceInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteResourceInstancesAsyncHandler;
			typedef Outcome<Error, Model::DeleteResourceLogResult> DeleteResourceLogOutcome;
			typedef std::future<DeleteResourceLogOutcome> DeleteResourceLogOutcomeCallable;
			typedef std::function<void(const EasClient*, const Model::DeleteResourceLogRequest&, const DeleteResourceLogOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteResourceLogAsyncHandler;
			typedef Outcome<Error, Model::DeleteServiceResult> DeleteServiceOutcome;
			typedef std::future<DeleteServiceOutcome> DeleteServiceOutcomeCallable;
			typedef std::function<void(const EasClient*, const Model::DeleteServiceRequest&, const DeleteServiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteServiceAsyncHandler;
			typedef Outcome<Error, Model::DeleteServiceAutoScalerResult> DeleteServiceAutoScalerOutcome;
			typedef std::future<DeleteServiceAutoScalerOutcome> DeleteServiceAutoScalerOutcomeCallable;
			typedef std::function<void(const EasClient*, const Model::DeleteServiceAutoScalerRequest&, const DeleteServiceAutoScalerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteServiceAutoScalerAsyncHandler;
			typedef Outcome<Error, Model::DeleteServiceCronScalerResult> DeleteServiceCronScalerOutcome;
			typedef std::future<DeleteServiceCronScalerOutcome> DeleteServiceCronScalerOutcomeCallable;
			typedef std::function<void(const EasClient*, const Model::DeleteServiceCronScalerRequest&, const DeleteServiceCronScalerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteServiceCronScalerAsyncHandler;
			typedef Outcome<Error, Model::DeleteServiceInstancesResult> DeleteServiceInstancesOutcome;
			typedef std::future<DeleteServiceInstancesOutcome> DeleteServiceInstancesOutcomeCallable;
			typedef std::function<void(const EasClient*, const Model::DeleteServiceInstancesRequest&, const DeleteServiceInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteServiceInstancesAsyncHandler;
			typedef Outcome<Error, Model::DeleteServiceLabelResult> DeleteServiceLabelOutcome;
			typedef std::future<DeleteServiceLabelOutcome> DeleteServiceLabelOutcomeCallable;
			typedef std::function<void(const EasClient*, const Model::DeleteServiceLabelRequest&, const DeleteServiceLabelOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteServiceLabelAsyncHandler;
			typedef Outcome<Error, Model::DeleteServiceMirrorResult> DeleteServiceMirrorOutcome;
			typedef std::future<DeleteServiceMirrorOutcome> DeleteServiceMirrorOutcomeCallable;
			typedef std::function<void(const EasClient*, const Model::DeleteServiceMirrorRequest&, const DeleteServiceMirrorOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteServiceMirrorAsyncHandler;
			typedef Outcome<Error, Model::DescribeBenchmarkTaskResult> DescribeBenchmarkTaskOutcome;
			typedef std::future<DescribeBenchmarkTaskOutcome> DescribeBenchmarkTaskOutcomeCallable;
			typedef std::function<void(const EasClient*, const Model::DescribeBenchmarkTaskRequest&, const DescribeBenchmarkTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBenchmarkTaskAsyncHandler;
			typedef Outcome<Error, Model::DescribeBenchmarkTaskReportResult> DescribeBenchmarkTaskReportOutcome;
			typedef std::future<DescribeBenchmarkTaskReportOutcome> DescribeBenchmarkTaskReportOutcomeCallable;
			typedef std::function<void(const EasClient*, const Model::DescribeBenchmarkTaskReportRequest&, const DescribeBenchmarkTaskReportOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBenchmarkTaskReportAsyncHandler;
			typedef Outcome<Error, Model::DescribeGroupResult> DescribeGroupOutcome;
			typedef std::future<DescribeGroupOutcome> DescribeGroupOutcomeCallable;
			typedef std::function<void(const EasClient*, const Model::DescribeGroupRequest&, const DescribeGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGroupAsyncHandler;
			typedef Outcome<Error, Model::DescribeResourceResult> DescribeResourceOutcome;
			typedef std::future<DescribeResourceOutcome> DescribeResourceOutcomeCallable;
			typedef std::function<void(const EasClient*, const Model::DescribeResourceRequest&, const DescribeResourceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeResourceAsyncHandler;
			typedef Outcome<Error, Model::DescribeResourceDLinkResult> DescribeResourceDLinkOutcome;
			typedef std::future<DescribeResourceDLinkOutcome> DescribeResourceDLinkOutcomeCallable;
			typedef std::function<void(const EasClient*, const Model::DescribeResourceDLinkRequest&, const DescribeResourceDLinkOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeResourceDLinkAsyncHandler;
			typedef Outcome<Error, Model::DescribeResourceLogResult> DescribeResourceLogOutcome;
			typedef std::future<DescribeResourceLogOutcome> DescribeResourceLogOutcomeCallable;
			typedef std::function<void(const EasClient*, const Model::DescribeResourceLogRequest&, const DescribeResourceLogOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeResourceLogAsyncHandler;
			typedef Outcome<Error, Model::DescribeServiceResult> DescribeServiceOutcome;
			typedef std::future<DescribeServiceOutcome> DescribeServiceOutcomeCallable;
			typedef std::function<void(const EasClient*, const Model::DescribeServiceRequest&, const DescribeServiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeServiceAsyncHandler;
			typedef Outcome<Error, Model::DescribeServiceAutoScalerResult> DescribeServiceAutoScalerOutcome;
			typedef std::future<DescribeServiceAutoScalerOutcome> DescribeServiceAutoScalerOutcomeCallable;
			typedef std::function<void(const EasClient*, const Model::DescribeServiceAutoScalerRequest&, const DescribeServiceAutoScalerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeServiceAutoScalerAsyncHandler;
			typedef Outcome<Error, Model::DescribeServiceCronScalerResult> DescribeServiceCronScalerOutcome;
			typedef std::future<DescribeServiceCronScalerOutcome> DescribeServiceCronScalerOutcomeCallable;
			typedef std::function<void(const EasClient*, const Model::DescribeServiceCronScalerRequest&, const DescribeServiceCronScalerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeServiceCronScalerAsyncHandler;
			typedef Outcome<Error, Model::DescribeServiceEventResult> DescribeServiceEventOutcome;
			typedef std::future<DescribeServiceEventOutcome> DescribeServiceEventOutcomeCallable;
			typedef std::function<void(const EasClient*, const Model::DescribeServiceEventRequest&, const DescribeServiceEventOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeServiceEventAsyncHandler;
			typedef Outcome<Error, Model::DescribeServiceLogResult> DescribeServiceLogOutcome;
			typedef std::future<DescribeServiceLogOutcome> DescribeServiceLogOutcomeCallable;
			typedef std::function<void(const EasClient*, const Model::DescribeServiceLogRequest&, const DescribeServiceLogOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeServiceLogAsyncHandler;
			typedef Outcome<Error, Model::DescribeServiceMirrorResult> DescribeServiceMirrorOutcome;
			typedef std::future<DescribeServiceMirrorOutcome> DescribeServiceMirrorOutcomeCallable;
			typedef std::function<void(const EasClient*, const Model::DescribeServiceMirrorRequest&, const DescribeServiceMirrorOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeServiceMirrorAsyncHandler;
			typedef Outcome<Error, Model::DevelopServiceResult> DevelopServiceOutcome;
			typedef std::future<DevelopServiceOutcome> DevelopServiceOutcomeCallable;
			typedef std::function<void(const EasClient*, const Model::DevelopServiceRequest&, const DevelopServiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DevelopServiceAsyncHandler;
			typedef Outcome<Error, Model::ListBenchmarkTaskResult> ListBenchmarkTaskOutcome;
			typedef std::future<ListBenchmarkTaskOutcome> ListBenchmarkTaskOutcomeCallable;
			typedef std::function<void(const EasClient*, const Model::ListBenchmarkTaskRequest&, const ListBenchmarkTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListBenchmarkTaskAsyncHandler;
			typedef Outcome<Error, Model::ListGroupsResult> ListGroupsOutcome;
			typedef std::future<ListGroupsOutcome> ListGroupsOutcomeCallable;
			typedef std::function<void(const EasClient*, const Model::ListGroupsRequest&, const ListGroupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListGroupsAsyncHandler;
			typedef Outcome<Error, Model::ListResourceInstanceWorkerResult> ListResourceInstanceWorkerOutcome;
			typedef std::future<ListResourceInstanceWorkerOutcome> ListResourceInstanceWorkerOutcomeCallable;
			typedef std::function<void(const EasClient*, const Model::ListResourceInstanceWorkerRequest&, const ListResourceInstanceWorkerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListResourceInstanceWorkerAsyncHandler;
			typedef Outcome<Error, Model::ListResourceInstancesResult> ListResourceInstancesOutcome;
			typedef std::future<ListResourceInstancesOutcome> ListResourceInstancesOutcomeCallable;
			typedef std::function<void(const EasClient*, const Model::ListResourceInstancesRequest&, const ListResourceInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListResourceInstancesAsyncHandler;
			typedef Outcome<Error, Model::ListResourceServicesResult> ListResourceServicesOutcome;
			typedef std::future<ListResourceServicesOutcome> ListResourceServicesOutcomeCallable;
			typedef std::function<void(const EasClient*, const Model::ListResourceServicesRequest&, const ListResourceServicesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListResourceServicesAsyncHandler;
			typedef Outcome<Error, Model::ListResourcesResult> ListResourcesOutcome;
			typedef std::future<ListResourcesOutcome> ListResourcesOutcomeCallable;
			typedef std::function<void(const EasClient*, const Model::ListResourcesRequest&, const ListResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListResourcesAsyncHandler;
			typedef Outcome<Error, Model::ListServiceInstancesResult> ListServiceInstancesOutcome;
			typedef std::future<ListServiceInstancesOutcome> ListServiceInstancesOutcomeCallable;
			typedef std::function<void(const EasClient*, const Model::ListServiceInstancesRequest&, const ListServiceInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListServiceInstancesAsyncHandler;
			typedef Outcome<Error, Model::ListServiceVersionsResult> ListServiceVersionsOutcome;
			typedef std::future<ListServiceVersionsOutcome> ListServiceVersionsOutcomeCallable;
			typedef std::function<void(const EasClient*, const Model::ListServiceVersionsRequest&, const ListServiceVersionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListServiceVersionsAsyncHandler;
			typedef Outcome<Error, Model::ListServicesResult> ListServicesOutcome;
			typedef std::future<ListServicesOutcome> ListServicesOutcomeCallable;
			typedef std::function<void(const EasClient*, const Model::ListServicesRequest&, const ListServicesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListServicesAsyncHandler;
			typedef Outcome<Error, Model::ReleaseServiceResult> ReleaseServiceOutcome;
			typedef std::future<ReleaseServiceOutcome> ReleaseServiceOutcomeCallable;
			typedef std::function<void(const EasClient*, const Model::ReleaseServiceRequest&, const ReleaseServiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ReleaseServiceAsyncHandler;
			typedef Outcome<Error, Model::StartBenchmarkTaskResult> StartBenchmarkTaskOutcome;
			typedef std::future<StartBenchmarkTaskOutcome> StartBenchmarkTaskOutcomeCallable;
			typedef std::function<void(const EasClient*, const Model::StartBenchmarkTaskRequest&, const StartBenchmarkTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StartBenchmarkTaskAsyncHandler;
			typedef Outcome<Error, Model::StartServiceResult> StartServiceOutcome;
			typedef std::future<StartServiceOutcome> StartServiceOutcomeCallable;
			typedef std::function<void(const EasClient*, const Model::StartServiceRequest&, const StartServiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StartServiceAsyncHandler;
			typedef Outcome<Error, Model::StopBenchmarkTaskResult> StopBenchmarkTaskOutcome;
			typedef std::future<StopBenchmarkTaskOutcome> StopBenchmarkTaskOutcomeCallable;
			typedef std::function<void(const EasClient*, const Model::StopBenchmarkTaskRequest&, const StopBenchmarkTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StopBenchmarkTaskAsyncHandler;
			typedef Outcome<Error, Model::StopServiceResult> StopServiceOutcome;
			typedef std::future<StopServiceOutcome> StopServiceOutcomeCallable;
			typedef std::function<void(const EasClient*, const Model::StopServiceRequest&, const StopServiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StopServiceAsyncHandler;
			typedef Outcome<Error, Model::UpdateBenchmarkTaskResult> UpdateBenchmarkTaskOutcome;
			typedef std::future<UpdateBenchmarkTaskOutcome> UpdateBenchmarkTaskOutcomeCallable;
			typedef std::function<void(const EasClient*, const Model::UpdateBenchmarkTaskRequest&, const UpdateBenchmarkTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateBenchmarkTaskAsyncHandler;
			typedef Outcome<Error, Model::UpdateResourceResult> UpdateResourceOutcome;
			typedef std::future<UpdateResourceOutcome> UpdateResourceOutcomeCallable;
			typedef std::function<void(const EasClient*, const Model::UpdateResourceRequest&, const UpdateResourceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateResourceAsyncHandler;
			typedef Outcome<Error, Model::UpdateResourceDLinkResult> UpdateResourceDLinkOutcome;
			typedef std::future<UpdateResourceDLinkOutcome> UpdateResourceDLinkOutcomeCallable;
			typedef std::function<void(const EasClient*, const Model::UpdateResourceDLinkRequest&, const UpdateResourceDLinkOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateResourceDLinkAsyncHandler;
			typedef Outcome<Error, Model::UpdateResourceInstanceResult> UpdateResourceInstanceOutcome;
			typedef std::future<UpdateResourceInstanceOutcome> UpdateResourceInstanceOutcomeCallable;
			typedef std::function<void(const EasClient*, const Model::UpdateResourceInstanceRequest&, const UpdateResourceInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateResourceInstanceAsyncHandler;
			typedef Outcome<Error, Model::UpdateServiceResult> UpdateServiceOutcome;
			typedef std::future<UpdateServiceOutcome> UpdateServiceOutcomeCallable;
			typedef std::function<void(const EasClient*, const Model::UpdateServiceRequest&, const UpdateServiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateServiceAsyncHandler;
			typedef Outcome<Error, Model::UpdateServiceAutoScalerResult> UpdateServiceAutoScalerOutcome;
			typedef std::future<UpdateServiceAutoScalerOutcome> UpdateServiceAutoScalerOutcomeCallable;
			typedef std::function<void(const EasClient*, const Model::UpdateServiceAutoScalerRequest&, const UpdateServiceAutoScalerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateServiceAutoScalerAsyncHandler;
			typedef Outcome<Error, Model::UpdateServiceCronScalerResult> UpdateServiceCronScalerOutcome;
			typedef std::future<UpdateServiceCronScalerOutcome> UpdateServiceCronScalerOutcomeCallable;
			typedef std::function<void(const EasClient*, const Model::UpdateServiceCronScalerRequest&, const UpdateServiceCronScalerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateServiceCronScalerAsyncHandler;
			typedef Outcome<Error, Model::UpdateServiceLabelResult> UpdateServiceLabelOutcome;
			typedef std::future<UpdateServiceLabelOutcome> UpdateServiceLabelOutcomeCallable;
			typedef std::function<void(const EasClient*, const Model::UpdateServiceLabelRequest&, const UpdateServiceLabelOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateServiceLabelAsyncHandler;
			typedef Outcome<Error, Model::UpdateServiceMirrorResult> UpdateServiceMirrorOutcome;
			typedef std::future<UpdateServiceMirrorOutcome> UpdateServiceMirrorOutcomeCallable;
			typedef std::function<void(const EasClient*, const Model::UpdateServiceMirrorRequest&, const UpdateServiceMirrorOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateServiceMirrorAsyncHandler;
			typedef Outcome<Error, Model::UpdateServiceSafetyLockResult> UpdateServiceSafetyLockOutcome;
			typedef std::future<UpdateServiceSafetyLockOutcome> UpdateServiceSafetyLockOutcomeCallable;
			typedef std::function<void(const EasClient*, const Model::UpdateServiceSafetyLockRequest&, const UpdateServiceSafetyLockOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateServiceSafetyLockAsyncHandler;
			typedef Outcome<Error, Model::UpdateServiceVersionResult> UpdateServiceVersionOutcome;
			typedef std::future<UpdateServiceVersionOutcome> UpdateServiceVersionOutcomeCallable;
			typedef std::function<void(const EasClient*, const Model::UpdateServiceVersionRequest&, const UpdateServiceVersionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateServiceVersionAsyncHandler;

			EasClient(const Credentials &credentials, const ClientConfiguration &configuration);
			EasClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			EasClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~EasClient();
			CommitServiceOutcome commitService(const Model::CommitServiceRequest &request)const;
			void commitServiceAsync(const Model::CommitServiceRequest& request, const CommitServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CommitServiceOutcomeCallable commitServiceCallable(const Model::CommitServiceRequest& request) const;
			CreateBenchmarkTaskOutcome createBenchmarkTask(const Model::CreateBenchmarkTaskRequest &request)const;
			void createBenchmarkTaskAsync(const Model::CreateBenchmarkTaskRequest& request, const CreateBenchmarkTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateBenchmarkTaskOutcomeCallable createBenchmarkTaskCallable(const Model::CreateBenchmarkTaskRequest& request) const;
			CreateResourceOutcome createResource(const Model::CreateResourceRequest &request)const;
			void createResourceAsync(const Model::CreateResourceRequest& request, const CreateResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateResourceOutcomeCallable createResourceCallable(const Model::CreateResourceRequest& request) const;
			CreateResourceInstancesOutcome createResourceInstances(const Model::CreateResourceInstancesRequest &request)const;
			void createResourceInstancesAsync(const Model::CreateResourceInstancesRequest& request, const CreateResourceInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateResourceInstancesOutcomeCallable createResourceInstancesCallable(const Model::CreateResourceInstancesRequest& request) const;
			CreateResourceLogOutcome createResourceLog(const Model::CreateResourceLogRequest &request)const;
			void createResourceLogAsync(const Model::CreateResourceLogRequest& request, const CreateResourceLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateResourceLogOutcomeCallable createResourceLogCallable(const Model::CreateResourceLogRequest& request) const;
			CreateServiceOutcome createService(const Model::CreateServiceRequest &request)const;
			void createServiceAsync(const Model::CreateServiceRequest& request, const CreateServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateServiceOutcomeCallable createServiceCallable(const Model::CreateServiceRequest& request) const;
			CreateServiceAutoScalerOutcome createServiceAutoScaler(const Model::CreateServiceAutoScalerRequest &request)const;
			void createServiceAutoScalerAsync(const Model::CreateServiceAutoScalerRequest& request, const CreateServiceAutoScalerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateServiceAutoScalerOutcomeCallable createServiceAutoScalerCallable(const Model::CreateServiceAutoScalerRequest& request) const;
			CreateServiceCronScalerOutcome createServiceCronScaler(const Model::CreateServiceCronScalerRequest &request)const;
			void createServiceCronScalerAsync(const Model::CreateServiceCronScalerRequest& request, const CreateServiceCronScalerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateServiceCronScalerOutcomeCallable createServiceCronScalerCallable(const Model::CreateServiceCronScalerRequest& request) const;
			CreateServiceMirrorOutcome createServiceMirror(const Model::CreateServiceMirrorRequest &request)const;
			void createServiceMirrorAsync(const Model::CreateServiceMirrorRequest& request, const CreateServiceMirrorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateServiceMirrorOutcomeCallable createServiceMirrorCallable(const Model::CreateServiceMirrorRequest& request) const;
			DeleteBenchmarkTaskOutcome deleteBenchmarkTask(const Model::DeleteBenchmarkTaskRequest &request)const;
			void deleteBenchmarkTaskAsync(const Model::DeleteBenchmarkTaskRequest& request, const DeleteBenchmarkTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteBenchmarkTaskOutcomeCallable deleteBenchmarkTaskCallable(const Model::DeleteBenchmarkTaskRequest& request) const;
			DeleteResourceOutcome deleteResource(const Model::DeleteResourceRequest &request)const;
			void deleteResourceAsync(const Model::DeleteResourceRequest& request, const DeleteResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteResourceOutcomeCallable deleteResourceCallable(const Model::DeleteResourceRequest& request) const;
			DeleteResourceDLinkOutcome deleteResourceDLink(const Model::DeleteResourceDLinkRequest &request)const;
			void deleteResourceDLinkAsync(const Model::DeleteResourceDLinkRequest& request, const DeleteResourceDLinkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteResourceDLinkOutcomeCallable deleteResourceDLinkCallable(const Model::DeleteResourceDLinkRequest& request) const;
			DeleteResourceInstancesOutcome deleteResourceInstances(const Model::DeleteResourceInstancesRequest &request)const;
			void deleteResourceInstancesAsync(const Model::DeleteResourceInstancesRequest& request, const DeleteResourceInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteResourceInstancesOutcomeCallable deleteResourceInstancesCallable(const Model::DeleteResourceInstancesRequest& request) const;
			DeleteResourceLogOutcome deleteResourceLog(const Model::DeleteResourceLogRequest &request)const;
			void deleteResourceLogAsync(const Model::DeleteResourceLogRequest& request, const DeleteResourceLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteResourceLogOutcomeCallable deleteResourceLogCallable(const Model::DeleteResourceLogRequest& request) const;
			DeleteServiceOutcome deleteService(const Model::DeleteServiceRequest &request)const;
			void deleteServiceAsync(const Model::DeleteServiceRequest& request, const DeleteServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteServiceOutcomeCallable deleteServiceCallable(const Model::DeleteServiceRequest& request) const;
			DeleteServiceAutoScalerOutcome deleteServiceAutoScaler(const Model::DeleteServiceAutoScalerRequest &request)const;
			void deleteServiceAutoScalerAsync(const Model::DeleteServiceAutoScalerRequest& request, const DeleteServiceAutoScalerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteServiceAutoScalerOutcomeCallable deleteServiceAutoScalerCallable(const Model::DeleteServiceAutoScalerRequest& request) const;
			DeleteServiceCronScalerOutcome deleteServiceCronScaler(const Model::DeleteServiceCronScalerRequest &request)const;
			void deleteServiceCronScalerAsync(const Model::DeleteServiceCronScalerRequest& request, const DeleteServiceCronScalerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteServiceCronScalerOutcomeCallable deleteServiceCronScalerCallable(const Model::DeleteServiceCronScalerRequest& request) const;
			DeleteServiceInstancesOutcome deleteServiceInstances(const Model::DeleteServiceInstancesRequest &request)const;
			void deleteServiceInstancesAsync(const Model::DeleteServiceInstancesRequest& request, const DeleteServiceInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteServiceInstancesOutcomeCallable deleteServiceInstancesCallable(const Model::DeleteServiceInstancesRequest& request) const;
			DeleteServiceLabelOutcome deleteServiceLabel(const Model::DeleteServiceLabelRequest &request)const;
			void deleteServiceLabelAsync(const Model::DeleteServiceLabelRequest& request, const DeleteServiceLabelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteServiceLabelOutcomeCallable deleteServiceLabelCallable(const Model::DeleteServiceLabelRequest& request) const;
			DeleteServiceMirrorOutcome deleteServiceMirror(const Model::DeleteServiceMirrorRequest &request)const;
			void deleteServiceMirrorAsync(const Model::DeleteServiceMirrorRequest& request, const DeleteServiceMirrorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteServiceMirrorOutcomeCallable deleteServiceMirrorCallable(const Model::DeleteServiceMirrorRequest& request) const;
			DescribeBenchmarkTaskOutcome describeBenchmarkTask(const Model::DescribeBenchmarkTaskRequest &request)const;
			void describeBenchmarkTaskAsync(const Model::DescribeBenchmarkTaskRequest& request, const DescribeBenchmarkTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeBenchmarkTaskOutcomeCallable describeBenchmarkTaskCallable(const Model::DescribeBenchmarkTaskRequest& request) const;
			DescribeBenchmarkTaskReportOutcome describeBenchmarkTaskReport(const Model::DescribeBenchmarkTaskReportRequest &request)const;
			void describeBenchmarkTaskReportAsync(const Model::DescribeBenchmarkTaskReportRequest& request, const DescribeBenchmarkTaskReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeBenchmarkTaskReportOutcomeCallable describeBenchmarkTaskReportCallable(const Model::DescribeBenchmarkTaskReportRequest& request) const;
			DescribeGroupOutcome describeGroup(const Model::DescribeGroupRequest &request)const;
			void describeGroupAsync(const Model::DescribeGroupRequest& request, const DescribeGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeGroupOutcomeCallable describeGroupCallable(const Model::DescribeGroupRequest& request) const;
			DescribeResourceOutcome describeResource(const Model::DescribeResourceRequest &request)const;
			void describeResourceAsync(const Model::DescribeResourceRequest& request, const DescribeResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeResourceOutcomeCallable describeResourceCallable(const Model::DescribeResourceRequest& request) const;
			DescribeResourceDLinkOutcome describeResourceDLink(const Model::DescribeResourceDLinkRequest &request)const;
			void describeResourceDLinkAsync(const Model::DescribeResourceDLinkRequest& request, const DescribeResourceDLinkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeResourceDLinkOutcomeCallable describeResourceDLinkCallable(const Model::DescribeResourceDLinkRequest& request) const;
			DescribeResourceLogOutcome describeResourceLog(const Model::DescribeResourceLogRequest &request)const;
			void describeResourceLogAsync(const Model::DescribeResourceLogRequest& request, const DescribeResourceLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeResourceLogOutcomeCallable describeResourceLogCallable(const Model::DescribeResourceLogRequest& request) const;
			DescribeServiceOutcome describeService(const Model::DescribeServiceRequest &request)const;
			void describeServiceAsync(const Model::DescribeServiceRequest& request, const DescribeServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeServiceOutcomeCallable describeServiceCallable(const Model::DescribeServiceRequest& request) const;
			DescribeServiceAutoScalerOutcome describeServiceAutoScaler(const Model::DescribeServiceAutoScalerRequest &request)const;
			void describeServiceAutoScalerAsync(const Model::DescribeServiceAutoScalerRequest& request, const DescribeServiceAutoScalerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeServiceAutoScalerOutcomeCallable describeServiceAutoScalerCallable(const Model::DescribeServiceAutoScalerRequest& request) const;
			DescribeServiceCronScalerOutcome describeServiceCronScaler(const Model::DescribeServiceCronScalerRequest &request)const;
			void describeServiceCronScalerAsync(const Model::DescribeServiceCronScalerRequest& request, const DescribeServiceCronScalerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeServiceCronScalerOutcomeCallable describeServiceCronScalerCallable(const Model::DescribeServiceCronScalerRequest& request) const;
			DescribeServiceEventOutcome describeServiceEvent(const Model::DescribeServiceEventRequest &request)const;
			void describeServiceEventAsync(const Model::DescribeServiceEventRequest& request, const DescribeServiceEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeServiceEventOutcomeCallable describeServiceEventCallable(const Model::DescribeServiceEventRequest& request) const;
			DescribeServiceLogOutcome describeServiceLog(const Model::DescribeServiceLogRequest &request)const;
			void describeServiceLogAsync(const Model::DescribeServiceLogRequest& request, const DescribeServiceLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeServiceLogOutcomeCallable describeServiceLogCallable(const Model::DescribeServiceLogRequest& request) const;
			DescribeServiceMirrorOutcome describeServiceMirror(const Model::DescribeServiceMirrorRequest &request)const;
			void describeServiceMirrorAsync(const Model::DescribeServiceMirrorRequest& request, const DescribeServiceMirrorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeServiceMirrorOutcomeCallable describeServiceMirrorCallable(const Model::DescribeServiceMirrorRequest& request) const;
			DevelopServiceOutcome developService(const Model::DevelopServiceRequest &request)const;
			void developServiceAsync(const Model::DevelopServiceRequest& request, const DevelopServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DevelopServiceOutcomeCallable developServiceCallable(const Model::DevelopServiceRequest& request) const;
			ListBenchmarkTaskOutcome listBenchmarkTask(const Model::ListBenchmarkTaskRequest &request)const;
			void listBenchmarkTaskAsync(const Model::ListBenchmarkTaskRequest& request, const ListBenchmarkTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListBenchmarkTaskOutcomeCallable listBenchmarkTaskCallable(const Model::ListBenchmarkTaskRequest& request) const;
			ListGroupsOutcome listGroups(const Model::ListGroupsRequest &request)const;
			void listGroupsAsync(const Model::ListGroupsRequest& request, const ListGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListGroupsOutcomeCallable listGroupsCallable(const Model::ListGroupsRequest& request) const;
			ListResourceInstanceWorkerOutcome listResourceInstanceWorker(const Model::ListResourceInstanceWorkerRequest &request)const;
			void listResourceInstanceWorkerAsync(const Model::ListResourceInstanceWorkerRequest& request, const ListResourceInstanceWorkerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListResourceInstanceWorkerOutcomeCallable listResourceInstanceWorkerCallable(const Model::ListResourceInstanceWorkerRequest& request) const;
			ListResourceInstancesOutcome listResourceInstances(const Model::ListResourceInstancesRequest &request)const;
			void listResourceInstancesAsync(const Model::ListResourceInstancesRequest& request, const ListResourceInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListResourceInstancesOutcomeCallable listResourceInstancesCallable(const Model::ListResourceInstancesRequest& request) const;
			ListResourceServicesOutcome listResourceServices(const Model::ListResourceServicesRequest &request)const;
			void listResourceServicesAsync(const Model::ListResourceServicesRequest& request, const ListResourceServicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListResourceServicesOutcomeCallable listResourceServicesCallable(const Model::ListResourceServicesRequest& request) const;
			ListResourcesOutcome listResources(const Model::ListResourcesRequest &request)const;
			void listResourcesAsync(const Model::ListResourcesRequest& request, const ListResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListResourcesOutcomeCallable listResourcesCallable(const Model::ListResourcesRequest& request) const;
			ListServiceInstancesOutcome listServiceInstances(const Model::ListServiceInstancesRequest &request)const;
			void listServiceInstancesAsync(const Model::ListServiceInstancesRequest& request, const ListServiceInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListServiceInstancesOutcomeCallable listServiceInstancesCallable(const Model::ListServiceInstancesRequest& request) const;
			ListServiceVersionsOutcome listServiceVersions(const Model::ListServiceVersionsRequest &request)const;
			void listServiceVersionsAsync(const Model::ListServiceVersionsRequest& request, const ListServiceVersionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListServiceVersionsOutcomeCallable listServiceVersionsCallable(const Model::ListServiceVersionsRequest& request) const;
			ListServicesOutcome listServices(const Model::ListServicesRequest &request)const;
			void listServicesAsync(const Model::ListServicesRequest& request, const ListServicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListServicesOutcomeCallable listServicesCallable(const Model::ListServicesRequest& request) const;
			ReleaseServiceOutcome releaseService(const Model::ReleaseServiceRequest &request)const;
			void releaseServiceAsync(const Model::ReleaseServiceRequest& request, const ReleaseServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ReleaseServiceOutcomeCallable releaseServiceCallable(const Model::ReleaseServiceRequest& request) const;
			StartBenchmarkTaskOutcome startBenchmarkTask(const Model::StartBenchmarkTaskRequest &request)const;
			void startBenchmarkTaskAsync(const Model::StartBenchmarkTaskRequest& request, const StartBenchmarkTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StartBenchmarkTaskOutcomeCallable startBenchmarkTaskCallable(const Model::StartBenchmarkTaskRequest& request) const;
			StartServiceOutcome startService(const Model::StartServiceRequest &request)const;
			void startServiceAsync(const Model::StartServiceRequest& request, const StartServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StartServiceOutcomeCallable startServiceCallable(const Model::StartServiceRequest& request) const;
			StopBenchmarkTaskOutcome stopBenchmarkTask(const Model::StopBenchmarkTaskRequest &request)const;
			void stopBenchmarkTaskAsync(const Model::StopBenchmarkTaskRequest& request, const StopBenchmarkTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StopBenchmarkTaskOutcomeCallable stopBenchmarkTaskCallable(const Model::StopBenchmarkTaskRequest& request) const;
			StopServiceOutcome stopService(const Model::StopServiceRequest &request)const;
			void stopServiceAsync(const Model::StopServiceRequest& request, const StopServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StopServiceOutcomeCallable stopServiceCallable(const Model::StopServiceRequest& request) const;
			UpdateBenchmarkTaskOutcome updateBenchmarkTask(const Model::UpdateBenchmarkTaskRequest &request)const;
			void updateBenchmarkTaskAsync(const Model::UpdateBenchmarkTaskRequest& request, const UpdateBenchmarkTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateBenchmarkTaskOutcomeCallable updateBenchmarkTaskCallable(const Model::UpdateBenchmarkTaskRequest& request) const;
			UpdateResourceOutcome updateResource(const Model::UpdateResourceRequest &request)const;
			void updateResourceAsync(const Model::UpdateResourceRequest& request, const UpdateResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateResourceOutcomeCallable updateResourceCallable(const Model::UpdateResourceRequest& request) const;
			UpdateResourceDLinkOutcome updateResourceDLink(const Model::UpdateResourceDLinkRequest &request)const;
			void updateResourceDLinkAsync(const Model::UpdateResourceDLinkRequest& request, const UpdateResourceDLinkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateResourceDLinkOutcomeCallable updateResourceDLinkCallable(const Model::UpdateResourceDLinkRequest& request) const;
			UpdateResourceInstanceOutcome updateResourceInstance(const Model::UpdateResourceInstanceRequest &request)const;
			void updateResourceInstanceAsync(const Model::UpdateResourceInstanceRequest& request, const UpdateResourceInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateResourceInstanceOutcomeCallable updateResourceInstanceCallable(const Model::UpdateResourceInstanceRequest& request) const;
			UpdateServiceOutcome updateService(const Model::UpdateServiceRequest &request)const;
			void updateServiceAsync(const Model::UpdateServiceRequest& request, const UpdateServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateServiceOutcomeCallable updateServiceCallable(const Model::UpdateServiceRequest& request) const;
			UpdateServiceAutoScalerOutcome updateServiceAutoScaler(const Model::UpdateServiceAutoScalerRequest &request)const;
			void updateServiceAutoScalerAsync(const Model::UpdateServiceAutoScalerRequest& request, const UpdateServiceAutoScalerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateServiceAutoScalerOutcomeCallable updateServiceAutoScalerCallable(const Model::UpdateServiceAutoScalerRequest& request) const;
			UpdateServiceCronScalerOutcome updateServiceCronScaler(const Model::UpdateServiceCronScalerRequest &request)const;
			void updateServiceCronScalerAsync(const Model::UpdateServiceCronScalerRequest& request, const UpdateServiceCronScalerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateServiceCronScalerOutcomeCallable updateServiceCronScalerCallable(const Model::UpdateServiceCronScalerRequest& request) const;
			UpdateServiceLabelOutcome updateServiceLabel(const Model::UpdateServiceLabelRequest &request)const;
			void updateServiceLabelAsync(const Model::UpdateServiceLabelRequest& request, const UpdateServiceLabelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateServiceLabelOutcomeCallable updateServiceLabelCallable(const Model::UpdateServiceLabelRequest& request) const;
			UpdateServiceMirrorOutcome updateServiceMirror(const Model::UpdateServiceMirrorRequest &request)const;
			void updateServiceMirrorAsync(const Model::UpdateServiceMirrorRequest& request, const UpdateServiceMirrorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateServiceMirrorOutcomeCallable updateServiceMirrorCallable(const Model::UpdateServiceMirrorRequest& request) const;
			UpdateServiceSafetyLockOutcome updateServiceSafetyLock(const Model::UpdateServiceSafetyLockRequest &request)const;
			void updateServiceSafetyLockAsync(const Model::UpdateServiceSafetyLockRequest& request, const UpdateServiceSafetyLockAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateServiceSafetyLockOutcomeCallable updateServiceSafetyLockCallable(const Model::UpdateServiceSafetyLockRequest& request) const;
			UpdateServiceVersionOutcome updateServiceVersion(const Model::UpdateServiceVersionRequest &request)const;
			void updateServiceVersionAsync(const Model::UpdateServiceVersionRequest& request, const UpdateServiceVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateServiceVersionOutcomeCallable updateServiceVersionCallable(const Model::UpdateServiceVersionRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_EAS_EASCLIENT_H_
