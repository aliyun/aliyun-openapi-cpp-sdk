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

#ifndef ALIBABACLOUD_VIAPI_REGEN_VIAPI_REGENCLIENT_H_
#define ALIBABACLOUD_VIAPI_REGEN_VIAPI_REGENCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "Viapi_regenExport.h"
#include "model/CheckDatasetOssBucketCORSRequest.h"
#include "model/CheckDatasetOssBucketCORSResult.h"
#include "model/CreateDatasetRequest.h"
#include "model/CreateDatasetResult.h"
#include "model/CreateLabelsetRequest.h"
#include "model/CreateLabelsetResult.h"
#include "model/CreateServiceRequest.h"
#include "model/CreateServiceResult.h"
#include "model/CreateTagTaskRequest.h"
#include "model/CreateTagTaskResult.h"
#include "model/CreateTrainTaskRequest.h"
#include "model/CreateTrainTaskResult.h"
#include "model/CreateWorkspaceRequest.h"
#include "model/CreateWorkspaceResult.h"
#include "model/CustomizeClassifyImageRequest.h"
#include "model/CustomizeClassifyImageResult.h"
#include "model/CustomizeDetectImageRequest.h"
#include "model/CustomizeDetectImageResult.h"
#include "model/CustomizeInstanceSegmentImageRequest.h"
#include "model/CustomizeInstanceSegmentImageResult.h"
#include "model/DebugServiceRequest.h"
#include "model/DebugServiceResult.h"
#include "model/DeleteDataReflowDataRequest.h"
#include "model/DeleteDataReflowDataResult.h"
#include "model/DeleteDatasetRequest.h"
#include "model/DeleteDatasetResult.h"
#include "model/DeleteLabelsetRequest.h"
#include "model/DeleteLabelsetResult.h"
#include "model/DeleteLabelsetDataRequest.h"
#include "model/DeleteLabelsetDataResult.h"
#include "model/DeleteServiceRequest.h"
#include "model/DeleteServiceResult.h"
#include "model/DeleteTrainTaskRequest.h"
#include "model/DeleteTrainTaskResult.h"
#include "model/DeleteWorkspaceRequest.h"
#include "model/DeleteWorkspaceResult.h"
#include "model/DisableDataReflowRequest.h"
#include "model/DisableDataReflowResult.h"
#include "model/DownloadDatasetRequest.h"
#include "model/DownloadDatasetResult.h"
#include "model/DownloadFileNameListRequest.h"
#include "model/DownloadFileNameListResult.h"
#include "model/DownloadLabelFileRequest.h"
#include "model/DownloadLabelFileResult.h"
#include "model/EnableDataReflowRequest.h"
#include "model/EnableDataReflowResult.h"
#include "model/ExportDataReflowDataListRequest.h"
#include "model/ExportDataReflowDataListResult.h"
#include "model/GetDatasetRequest.h"
#include "model/GetDatasetResult.h"
#include "model/GetDiffCountLabelsetAndDatasetRequest.h"
#include "model/GetDiffCountLabelsetAndDatasetResult.h"
#include "model/GetLabelDetailRequest.h"
#include "model/GetLabelDetailResult.h"
#include "model/GetLabelsetRequest.h"
#include "model/GetLabelsetResult.h"
#include "model/GetServiceRequest.h"
#include "model/GetServiceResult.h"
#include "model/GetServiceInvokeRequest.h"
#include "model/GetServiceInvokeResult.h"
#include "model/GetServiceQpsRequest.h"
#include "model/GetServiceQpsResult.h"
#include "model/GetTrainModelRequest.h"
#include "model/GetTrainModelResult.h"
#include "model/GetTrainTaskRequest.h"
#include "model/GetTrainTaskResult.h"
#include "model/GetTrainTaskEstimatedTimeRequest.h"
#include "model/GetTrainTaskEstimatedTimeResult.h"
#include "model/GetUploadPolicyRequest.h"
#include "model/GetUploadPolicyResult.h"
#include "model/GetUserInfoRequest.h"
#include "model/GetUserInfoResult.h"
#include "model/GetWorkspaceRequest.h"
#include "model/GetWorkspaceResult.h"
#include "model/ListDataReflowDatasRequest.h"
#include "model/ListDataReflowDatasResult.h"
#include "model/ListDatasetDatasRequest.h"
#include "model/ListDatasetDatasResult.h"
#include "model/ListDatasetsRequest.h"
#include "model/ListDatasetsResult.h"
#include "model/ListLabelsetDatasRequest.h"
#include "model/ListLabelsetDatasResult.h"
#include "model/ListLabelsetsRequest.h"
#include "model/ListLabelsetsResult.h"
#include "model/ListServicesRequest.h"
#include "model/ListServicesResult.h"
#include "model/ListTrainTasksRequest.h"
#include "model/ListTrainTasksResult.h"
#include "model/ListWorkspacesRequest.h"
#include "model/ListWorkspacesResult.h"
#include "model/SetDatasetUserOssPathRequest.h"
#include "model/SetDatasetUserOssPathResult.h"
#include "model/StartServiceRequest.h"
#include "model/StartServiceResult.h"
#include "model/StartTrainTaskRequest.h"
#include "model/StartTrainTaskResult.h"
#include "model/StopServiceRequest.h"
#include "model/StopServiceResult.h"
#include "model/StopTrainTaskRequest.h"
#include "model/StopTrainTaskResult.h"
#include "model/UpdateDatasetRequest.h"
#include "model/UpdateDatasetResult.h"
#include "model/UpdateLabelsetRequest.h"
#include "model/UpdateLabelsetResult.h"
#include "model/UpdateServiceRequest.h"
#include "model/UpdateServiceResult.h"
#include "model/UpdateTrainTaskRequest.h"
#include "model/UpdateTrainTaskResult.h"
#include "model/UpdateWorkspaceRequest.h"
#include "model/UpdateWorkspaceResult.h"


namespace AlibabaCloud
{
	namespace Viapi_regen
	{
		class ALIBABACLOUD_VIAPI_REGEN_EXPORT Viapi_regenClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::CheckDatasetOssBucketCORSResult> CheckDatasetOssBucketCORSOutcome;
			typedef std::future<CheckDatasetOssBucketCORSOutcome> CheckDatasetOssBucketCORSOutcomeCallable;
			typedef std::function<void(const Viapi_regenClient*, const Model::CheckDatasetOssBucketCORSRequest&, const CheckDatasetOssBucketCORSOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CheckDatasetOssBucketCORSAsyncHandler;
			typedef Outcome<Error, Model::CreateDatasetResult> CreateDatasetOutcome;
			typedef std::future<CreateDatasetOutcome> CreateDatasetOutcomeCallable;
			typedef std::function<void(const Viapi_regenClient*, const Model::CreateDatasetRequest&, const CreateDatasetOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDatasetAsyncHandler;
			typedef Outcome<Error, Model::CreateLabelsetResult> CreateLabelsetOutcome;
			typedef std::future<CreateLabelsetOutcome> CreateLabelsetOutcomeCallable;
			typedef std::function<void(const Viapi_regenClient*, const Model::CreateLabelsetRequest&, const CreateLabelsetOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateLabelsetAsyncHandler;
			typedef Outcome<Error, Model::CreateServiceResult> CreateServiceOutcome;
			typedef std::future<CreateServiceOutcome> CreateServiceOutcomeCallable;
			typedef std::function<void(const Viapi_regenClient*, const Model::CreateServiceRequest&, const CreateServiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateServiceAsyncHandler;
			typedef Outcome<Error, Model::CreateTagTaskResult> CreateTagTaskOutcome;
			typedef std::future<CreateTagTaskOutcome> CreateTagTaskOutcomeCallable;
			typedef std::function<void(const Viapi_regenClient*, const Model::CreateTagTaskRequest&, const CreateTagTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateTagTaskAsyncHandler;
			typedef Outcome<Error, Model::CreateTrainTaskResult> CreateTrainTaskOutcome;
			typedef std::future<CreateTrainTaskOutcome> CreateTrainTaskOutcomeCallable;
			typedef std::function<void(const Viapi_regenClient*, const Model::CreateTrainTaskRequest&, const CreateTrainTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateTrainTaskAsyncHandler;
			typedef Outcome<Error, Model::CreateWorkspaceResult> CreateWorkspaceOutcome;
			typedef std::future<CreateWorkspaceOutcome> CreateWorkspaceOutcomeCallable;
			typedef std::function<void(const Viapi_regenClient*, const Model::CreateWorkspaceRequest&, const CreateWorkspaceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateWorkspaceAsyncHandler;
			typedef Outcome<Error, Model::CustomizeClassifyImageResult> CustomizeClassifyImageOutcome;
			typedef std::future<CustomizeClassifyImageOutcome> CustomizeClassifyImageOutcomeCallable;
			typedef std::function<void(const Viapi_regenClient*, const Model::CustomizeClassifyImageRequest&, const CustomizeClassifyImageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CustomizeClassifyImageAsyncHandler;
			typedef Outcome<Error, Model::CustomizeDetectImageResult> CustomizeDetectImageOutcome;
			typedef std::future<CustomizeDetectImageOutcome> CustomizeDetectImageOutcomeCallable;
			typedef std::function<void(const Viapi_regenClient*, const Model::CustomizeDetectImageRequest&, const CustomizeDetectImageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CustomizeDetectImageAsyncHandler;
			typedef Outcome<Error, Model::CustomizeInstanceSegmentImageResult> CustomizeInstanceSegmentImageOutcome;
			typedef std::future<CustomizeInstanceSegmentImageOutcome> CustomizeInstanceSegmentImageOutcomeCallable;
			typedef std::function<void(const Viapi_regenClient*, const Model::CustomizeInstanceSegmentImageRequest&, const CustomizeInstanceSegmentImageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CustomizeInstanceSegmentImageAsyncHandler;
			typedef Outcome<Error, Model::DebugServiceResult> DebugServiceOutcome;
			typedef std::future<DebugServiceOutcome> DebugServiceOutcomeCallable;
			typedef std::function<void(const Viapi_regenClient*, const Model::DebugServiceRequest&, const DebugServiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DebugServiceAsyncHandler;
			typedef Outcome<Error, Model::DeleteDataReflowDataResult> DeleteDataReflowDataOutcome;
			typedef std::future<DeleteDataReflowDataOutcome> DeleteDataReflowDataOutcomeCallable;
			typedef std::function<void(const Viapi_regenClient*, const Model::DeleteDataReflowDataRequest&, const DeleteDataReflowDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDataReflowDataAsyncHandler;
			typedef Outcome<Error, Model::DeleteDatasetResult> DeleteDatasetOutcome;
			typedef std::future<DeleteDatasetOutcome> DeleteDatasetOutcomeCallable;
			typedef std::function<void(const Viapi_regenClient*, const Model::DeleteDatasetRequest&, const DeleteDatasetOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDatasetAsyncHandler;
			typedef Outcome<Error, Model::DeleteLabelsetResult> DeleteLabelsetOutcome;
			typedef std::future<DeleteLabelsetOutcome> DeleteLabelsetOutcomeCallable;
			typedef std::function<void(const Viapi_regenClient*, const Model::DeleteLabelsetRequest&, const DeleteLabelsetOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLabelsetAsyncHandler;
			typedef Outcome<Error, Model::DeleteLabelsetDataResult> DeleteLabelsetDataOutcome;
			typedef std::future<DeleteLabelsetDataOutcome> DeleteLabelsetDataOutcomeCallable;
			typedef std::function<void(const Viapi_regenClient*, const Model::DeleteLabelsetDataRequest&, const DeleteLabelsetDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLabelsetDataAsyncHandler;
			typedef Outcome<Error, Model::DeleteServiceResult> DeleteServiceOutcome;
			typedef std::future<DeleteServiceOutcome> DeleteServiceOutcomeCallable;
			typedef std::function<void(const Viapi_regenClient*, const Model::DeleteServiceRequest&, const DeleteServiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteServiceAsyncHandler;
			typedef Outcome<Error, Model::DeleteTrainTaskResult> DeleteTrainTaskOutcome;
			typedef std::future<DeleteTrainTaskOutcome> DeleteTrainTaskOutcomeCallable;
			typedef std::function<void(const Viapi_regenClient*, const Model::DeleteTrainTaskRequest&, const DeleteTrainTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTrainTaskAsyncHandler;
			typedef Outcome<Error, Model::DeleteWorkspaceResult> DeleteWorkspaceOutcome;
			typedef std::future<DeleteWorkspaceOutcome> DeleteWorkspaceOutcomeCallable;
			typedef std::function<void(const Viapi_regenClient*, const Model::DeleteWorkspaceRequest&, const DeleteWorkspaceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteWorkspaceAsyncHandler;
			typedef Outcome<Error, Model::DisableDataReflowResult> DisableDataReflowOutcome;
			typedef std::future<DisableDataReflowOutcome> DisableDataReflowOutcomeCallable;
			typedef std::function<void(const Viapi_regenClient*, const Model::DisableDataReflowRequest&, const DisableDataReflowOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DisableDataReflowAsyncHandler;
			typedef Outcome<Error, Model::DownloadDatasetResult> DownloadDatasetOutcome;
			typedef std::future<DownloadDatasetOutcome> DownloadDatasetOutcomeCallable;
			typedef std::function<void(const Viapi_regenClient*, const Model::DownloadDatasetRequest&, const DownloadDatasetOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DownloadDatasetAsyncHandler;
			typedef Outcome<Error, Model::DownloadFileNameListResult> DownloadFileNameListOutcome;
			typedef std::future<DownloadFileNameListOutcome> DownloadFileNameListOutcomeCallable;
			typedef std::function<void(const Viapi_regenClient*, const Model::DownloadFileNameListRequest&, const DownloadFileNameListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DownloadFileNameListAsyncHandler;
			typedef Outcome<Error, Model::DownloadLabelFileResult> DownloadLabelFileOutcome;
			typedef std::future<DownloadLabelFileOutcome> DownloadLabelFileOutcomeCallable;
			typedef std::function<void(const Viapi_regenClient*, const Model::DownloadLabelFileRequest&, const DownloadLabelFileOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DownloadLabelFileAsyncHandler;
			typedef Outcome<Error, Model::EnableDataReflowResult> EnableDataReflowOutcome;
			typedef std::future<EnableDataReflowOutcome> EnableDataReflowOutcomeCallable;
			typedef std::function<void(const Viapi_regenClient*, const Model::EnableDataReflowRequest&, const EnableDataReflowOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EnableDataReflowAsyncHandler;
			typedef Outcome<Error, Model::ExportDataReflowDataListResult> ExportDataReflowDataListOutcome;
			typedef std::future<ExportDataReflowDataListOutcome> ExportDataReflowDataListOutcomeCallable;
			typedef std::function<void(const Viapi_regenClient*, const Model::ExportDataReflowDataListRequest&, const ExportDataReflowDataListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ExportDataReflowDataListAsyncHandler;
			typedef Outcome<Error, Model::GetDatasetResult> GetDatasetOutcome;
			typedef std::future<GetDatasetOutcome> GetDatasetOutcomeCallable;
			typedef std::function<void(const Viapi_regenClient*, const Model::GetDatasetRequest&, const GetDatasetOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetDatasetAsyncHandler;
			typedef Outcome<Error, Model::GetDiffCountLabelsetAndDatasetResult> GetDiffCountLabelsetAndDatasetOutcome;
			typedef std::future<GetDiffCountLabelsetAndDatasetOutcome> GetDiffCountLabelsetAndDatasetOutcomeCallable;
			typedef std::function<void(const Viapi_regenClient*, const Model::GetDiffCountLabelsetAndDatasetRequest&, const GetDiffCountLabelsetAndDatasetOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetDiffCountLabelsetAndDatasetAsyncHandler;
			typedef Outcome<Error, Model::GetLabelDetailResult> GetLabelDetailOutcome;
			typedef std::future<GetLabelDetailOutcome> GetLabelDetailOutcomeCallable;
			typedef std::function<void(const Viapi_regenClient*, const Model::GetLabelDetailRequest&, const GetLabelDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetLabelDetailAsyncHandler;
			typedef Outcome<Error, Model::GetLabelsetResult> GetLabelsetOutcome;
			typedef std::future<GetLabelsetOutcome> GetLabelsetOutcomeCallable;
			typedef std::function<void(const Viapi_regenClient*, const Model::GetLabelsetRequest&, const GetLabelsetOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetLabelsetAsyncHandler;
			typedef Outcome<Error, Model::GetServiceResult> GetServiceOutcome;
			typedef std::future<GetServiceOutcome> GetServiceOutcomeCallable;
			typedef std::function<void(const Viapi_regenClient*, const Model::GetServiceRequest&, const GetServiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetServiceAsyncHandler;
			typedef Outcome<Error, Model::GetServiceInvokeResult> GetServiceInvokeOutcome;
			typedef std::future<GetServiceInvokeOutcome> GetServiceInvokeOutcomeCallable;
			typedef std::function<void(const Viapi_regenClient*, const Model::GetServiceInvokeRequest&, const GetServiceInvokeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetServiceInvokeAsyncHandler;
			typedef Outcome<Error, Model::GetServiceQpsResult> GetServiceQpsOutcome;
			typedef std::future<GetServiceQpsOutcome> GetServiceQpsOutcomeCallable;
			typedef std::function<void(const Viapi_regenClient*, const Model::GetServiceQpsRequest&, const GetServiceQpsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetServiceQpsAsyncHandler;
			typedef Outcome<Error, Model::GetTrainModelResult> GetTrainModelOutcome;
			typedef std::future<GetTrainModelOutcome> GetTrainModelOutcomeCallable;
			typedef std::function<void(const Viapi_regenClient*, const Model::GetTrainModelRequest&, const GetTrainModelOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetTrainModelAsyncHandler;
			typedef Outcome<Error, Model::GetTrainTaskResult> GetTrainTaskOutcome;
			typedef std::future<GetTrainTaskOutcome> GetTrainTaskOutcomeCallable;
			typedef std::function<void(const Viapi_regenClient*, const Model::GetTrainTaskRequest&, const GetTrainTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetTrainTaskAsyncHandler;
			typedef Outcome<Error, Model::GetTrainTaskEstimatedTimeResult> GetTrainTaskEstimatedTimeOutcome;
			typedef std::future<GetTrainTaskEstimatedTimeOutcome> GetTrainTaskEstimatedTimeOutcomeCallable;
			typedef std::function<void(const Viapi_regenClient*, const Model::GetTrainTaskEstimatedTimeRequest&, const GetTrainTaskEstimatedTimeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetTrainTaskEstimatedTimeAsyncHandler;
			typedef Outcome<Error, Model::GetUploadPolicyResult> GetUploadPolicyOutcome;
			typedef std::future<GetUploadPolicyOutcome> GetUploadPolicyOutcomeCallable;
			typedef std::function<void(const Viapi_regenClient*, const Model::GetUploadPolicyRequest&, const GetUploadPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetUploadPolicyAsyncHandler;
			typedef Outcome<Error, Model::GetUserInfoResult> GetUserInfoOutcome;
			typedef std::future<GetUserInfoOutcome> GetUserInfoOutcomeCallable;
			typedef std::function<void(const Viapi_regenClient*, const Model::GetUserInfoRequest&, const GetUserInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetUserInfoAsyncHandler;
			typedef Outcome<Error, Model::GetWorkspaceResult> GetWorkspaceOutcome;
			typedef std::future<GetWorkspaceOutcome> GetWorkspaceOutcomeCallable;
			typedef std::function<void(const Viapi_regenClient*, const Model::GetWorkspaceRequest&, const GetWorkspaceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetWorkspaceAsyncHandler;
			typedef Outcome<Error, Model::ListDataReflowDatasResult> ListDataReflowDatasOutcome;
			typedef std::future<ListDataReflowDatasOutcome> ListDataReflowDatasOutcomeCallable;
			typedef std::function<void(const Viapi_regenClient*, const Model::ListDataReflowDatasRequest&, const ListDataReflowDatasOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDataReflowDatasAsyncHandler;
			typedef Outcome<Error, Model::ListDatasetDatasResult> ListDatasetDatasOutcome;
			typedef std::future<ListDatasetDatasOutcome> ListDatasetDatasOutcomeCallable;
			typedef std::function<void(const Viapi_regenClient*, const Model::ListDatasetDatasRequest&, const ListDatasetDatasOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDatasetDatasAsyncHandler;
			typedef Outcome<Error, Model::ListDatasetsResult> ListDatasetsOutcome;
			typedef std::future<ListDatasetsOutcome> ListDatasetsOutcomeCallable;
			typedef std::function<void(const Viapi_regenClient*, const Model::ListDatasetsRequest&, const ListDatasetsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDatasetsAsyncHandler;
			typedef Outcome<Error, Model::ListLabelsetDatasResult> ListLabelsetDatasOutcome;
			typedef std::future<ListLabelsetDatasOutcome> ListLabelsetDatasOutcomeCallable;
			typedef std::function<void(const Viapi_regenClient*, const Model::ListLabelsetDatasRequest&, const ListLabelsetDatasOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListLabelsetDatasAsyncHandler;
			typedef Outcome<Error, Model::ListLabelsetsResult> ListLabelsetsOutcome;
			typedef std::future<ListLabelsetsOutcome> ListLabelsetsOutcomeCallable;
			typedef std::function<void(const Viapi_regenClient*, const Model::ListLabelsetsRequest&, const ListLabelsetsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListLabelsetsAsyncHandler;
			typedef Outcome<Error, Model::ListServicesResult> ListServicesOutcome;
			typedef std::future<ListServicesOutcome> ListServicesOutcomeCallable;
			typedef std::function<void(const Viapi_regenClient*, const Model::ListServicesRequest&, const ListServicesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListServicesAsyncHandler;
			typedef Outcome<Error, Model::ListTrainTasksResult> ListTrainTasksOutcome;
			typedef std::future<ListTrainTasksOutcome> ListTrainTasksOutcomeCallable;
			typedef std::function<void(const Viapi_regenClient*, const Model::ListTrainTasksRequest&, const ListTrainTasksOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTrainTasksAsyncHandler;
			typedef Outcome<Error, Model::ListWorkspacesResult> ListWorkspacesOutcome;
			typedef std::future<ListWorkspacesOutcome> ListWorkspacesOutcomeCallable;
			typedef std::function<void(const Viapi_regenClient*, const Model::ListWorkspacesRequest&, const ListWorkspacesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListWorkspacesAsyncHandler;
			typedef Outcome<Error, Model::SetDatasetUserOssPathResult> SetDatasetUserOssPathOutcome;
			typedef std::future<SetDatasetUserOssPathOutcome> SetDatasetUserOssPathOutcomeCallable;
			typedef std::function<void(const Viapi_regenClient*, const Model::SetDatasetUserOssPathRequest&, const SetDatasetUserOssPathOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetDatasetUserOssPathAsyncHandler;
			typedef Outcome<Error, Model::StartServiceResult> StartServiceOutcome;
			typedef std::future<StartServiceOutcome> StartServiceOutcomeCallable;
			typedef std::function<void(const Viapi_regenClient*, const Model::StartServiceRequest&, const StartServiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StartServiceAsyncHandler;
			typedef Outcome<Error, Model::StartTrainTaskResult> StartTrainTaskOutcome;
			typedef std::future<StartTrainTaskOutcome> StartTrainTaskOutcomeCallable;
			typedef std::function<void(const Viapi_regenClient*, const Model::StartTrainTaskRequest&, const StartTrainTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StartTrainTaskAsyncHandler;
			typedef Outcome<Error, Model::StopServiceResult> StopServiceOutcome;
			typedef std::future<StopServiceOutcome> StopServiceOutcomeCallable;
			typedef std::function<void(const Viapi_regenClient*, const Model::StopServiceRequest&, const StopServiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StopServiceAsyncHandler;
			typedef Outcome<Error, Model::StopTrainTaskResult> StopTrainTaskOutcome;
			typedef std::future<StopTrainTaskOutcome> StopTrainTaskOutcomeCallable;
			typedef std::function<void(const Viapi_regenClient*, const Model::StopTrainTaskRequest&, const StopTrainTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StopTrainTaskAsyncHandler;
			typedef Outcome<Error, Model::UpdateDatasetResult> UpdateDatasetOutcome;
			typedef std::future<UpdateDatasetOutcome> UpdateDatasetOutcomeCallable;
			typedef std::function<void(const Viapi_regenClient*, const Model::UpdateDatasetRequest&, const UpdateDatasetOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateDatasetAsyncHandler;
			typedef Outcome<Error, Model::UpdateLabelsetResult> UpdateLabelsetOutcome;
			typedef std::future<UpdateLabelsetOutcome> UpdateLabelsetOutcomeCallable;
			typedef std::function<void(const Viapi_regenClient*, const Model::UpdateLabelsetRequest&, const UpdateLabelsetOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateLabelsetAsyncHandler;
			typedef Outcome<Error, Model::UpdateServiceResult> UpdateServiceOutcome;
			typedef std::future<UpdateServiceOutcome> UpdateServiceOutcomeCallable;
			typedef std::function<void(const Viapi_regenClient*, const Model::UpdateServiceRequest&, const UpdateServiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateServiceAsyncHandler;
			typedef Outcome<Error, Model::UpdateTrainTaskResult> UpdateTrainTaskOutcome;
			typedef std::future<UpdateTrainTaskOutcome> UpdateTrainTaskOutcomeCallable;
			typedef std::function<void(const Viapi_regenClient*, const Model::UpdateTrainTaskRequest&, const UpdateTrainTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateTrainTaskAsyncHandler;
			typedef Outcome<Error, Model::UpdateWorkspaceResult> UpdateWorkspaceOutcome;
			typedef std::future<UpdateWorkspaceOutcome> UpdateWorkspaceOutcomeCallable;
			typedef std::function<void(const Viapi_regenClient*, const Model::UpdateWorkspaceRequest&, const UpdateWorkspaceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateWorkspaceAsyncHandler;

			Viapi_regenClient(const Credentials &credentials, const ClientConfiguration &configuration);
			Viapi_regenClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			Viapi_regenClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~Viapi_regenClient();
			CheckDatasetOssBucketCORSOutcome checkDatasetOssBucketCORS(const Model::CheckDatasetOssBucketCORSRequest &request)const;
			void checkDatasetOssBucketCORSAsync(const Model::CheckDatasetOssBucketCORSRequest& request, const CheckDatasetOssBucketCORSAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CheckDatasetOssBucketCORSOutcomeCallable checkDatasetOssBucketCORSCallable(const Model::CheckDatasetOssBucketCORSRequest& request) const;
			CreateDatasetOutcome createDataset(const Model::CreateDatasetRequest &request)const;
			void createDatasetAsync(const Model::CreateDatasetRequest& request, const CreateDatasetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateDatasetOutcomeCallable createDatasetCallable(const Model::CreateDatasetRequest& request) const;
			CreateLabelsetOutcome createLabelset(const Model::CreateLabelsetRequest &request)const;
			void createLabelsetAsync(const Model::CreateLabelsetRequest& request, const CreateLabelsetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateLabelsetOutcomeCallable createLabelsetCallable(const Model::CreateLabelsetRequest& request) const;
			CreateServiceOutcome createService(const Model::CreateServiceRequest &request)const;
			void createServiceAsync(const Model::CreateServiceRequest& request, const CreateServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateServiceOutcomeCallable createServiceCallable(const Model::CreateServiceRequest& request) const;
			CreateTagTaskOutcome createTagTask(const Model::CreateTagTaskRequest &request)const;
			void createTagTaskAsync(const Model::CreateTagTaskRequest& request, const CreateTagTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateTagTaskOutcomeCallable createTagTaskCallable(const Model::CreateTagTaskRequest& request) const;
			CreateTrainTaskOutcome createTrainTask(const Model::CreateTrainTaskRequest &request)const;
			void createTrainTaskAsync(const Model::CreateTrainTaskRequest& request, const CreateTrainTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateTrainTaskOutcomeCallable createTrainTaskCallable(const Model::CreateTrainTaskRequest& request) const;
			CreateWorkspaceOutcome createWorkspace(const Model::CreateWorkspaceRequest &request)const;
			void createWorkspaceAsync(const Model::CreateWorkspaceRequest& request, const CreateWorkspaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateWorkspaceOutcomeCallable createWorkspaceCallable(const Model::CreateWorkspaceRequest& request) const;
			CustomizeClassifyImageOutcome customizeClassifyImage(const Model::CustomizeClassifyImageRequest &request)const;
			void customizeClassifyImageAsync(const Model::CustomizeClassifyImageRequest& request, const CustomizeClassifyImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CustomizeClassifyImageOutcomeCallable customizeClassifyImageCallable(const Model::CustomizeClassifyImageRequest& request) const;
			CustomizeDetectImageOutcome customizeDetectImage(const Model::CustomizeDetectImageRequest &request)const;
			void customizeDetectImageAsync(const Model::CustomizeDetectImageRequest& request, const CustomizeDetectImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CustomizeDetectImageOutcomeCallable customizeDetectImageCallable(const Model::CustomizeDetectImageRequest& request) const;
			CustomizeInstanceSegmentImageOutcome customizeInstanceSegmentImage(const Model::CustomizeInstanceSegmentImageRequest &request)const;
			void customizeInstanceSegmentImageAsync(const Model::CustomizeInstanceSegmentImageRequest& request, const CustomizeInstanceSegmentImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CustomizeInstanceSegmentImageOutcomeCallable customizeInstanceSegmentImageCallable(const Model::CustomizeInstanceSegmentImageRequest& request) const;
			DebugServiceOutcome debugService(const Model::DebugServiceRequest &request)const;
			void debugServiceAsync(const Model::DebugServiceRequest& request, const DebugServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DebugServiceOutcomeCallable debugServiceCallable(const Model::DebugServiceRequest& request) const;
			DeleteDataReflowDataOutcome deleteDataReflowData(const Model::DeleteDataReflowDataRequest &request)const;
			void deleteDataReflowDataAsync(const Model::DeleteDataReflowDataRequest& request, const DeleteDataReflowDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDataReflowDataOutcomeCallable deleteDataReflowDataCallable(const Model::DeleteDataReflowDataRequest& request) const;
			DeleteDatasetOutcome deleteDataset(const Model::DeleteDatasetRequest &request)const;
			void deleteDatasetAsync(const Model::DeleteDatasetRequest& request, const DeleteDatasetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDatasetOutcomeCallable deleteDatasetCallable(const Model::DeleteDatasetRequest& request) const;
			DeleteLabelsetOutcome deleteLabelset(const Model::DeleteLabelsetRequest &request)const;
			void deleteLabelsetAsync(const Model::DeleteLabelsetRequest& request, const DeleteLabelsetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteLabelsetOutcomeCallable deleteLabelsetCallable(const Model::DeleteLabelsetRequest& request) const;
			DeleteLabelsetDataOutcome deleteLabelsetData(const Model::DeleteLabelsetDataRequest &request)const;
			void deleteLabelsetDataAsync(const Model::DeleteLabelsetDataRequest& request, const DeleteLabelsetDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteLabelsetDataOutcomeCallable deleteLabelsetDataCallable(const Model::DeleteLabelsetDataRequest& request) const;
			DeleteServiceOutcome deleteService(const Model::DeleteServiceRequest &request)const;
			void deleteServiceAsync(const Model::DeleteServiceRequest& request, const DeleteServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteServiceOutcomeCallable deleteServiceCallable(const Model::DeleteServiceRequest& request) const;
			DeleteTrainTaskOutcome deleteTrainTask(const Model::DeleteTrainTaskRequest &request)const;
			void deleteTrainTaskAsync(const Model::DeleteTrainTaskRequest& request, const DeleteTrainTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteTrainTaskOutcomeCallable deleteTrainTaskCallable(const Model::DeleteTrainTaskRequest& request) const;
			DeleteWorkspaceOutcome deleteWorkspace(const Model::DeleteWorkspaceRequest &request)const;
			void deleteWorkspaceAsync(const Model::DeleteWorkspaceRequest& request, const DeleteWorkspaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteWorkspaceOutcomeCallable deleteWorkspaceCallable(const Model::DeleteWorkspaceRequest& request) const;
			DisableDataReflowOutcome disableDataReflow(const Model::DisableDataReflowRequest &request)const;
			void disableDataReflowAsync(const Model::DisableDataReflowRequest& request, const DisableDataReflowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DisableDataReflowOutcomeCallable disableDataReflowCallable(const Model::DisableDataReflowRequest& request) const;
			DownloadDatasetOutcome downloadDataset(const Model::DownloadDatasetRequest &request)const;
			void downloadDatasetAsync(const Model::DownloadDatasetRequest& request, const DownloadDatasetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DownloadDatasetOutcomeCallable downloadDatasetCallable(const Model::DownloadDatasetRequest& request) const;
			DownloadFileNameListOutcome downloadFileNameList(const Model::DownloadFileNameListRequest &request)const;
			void downloadFileNameListAsync(const Model::DownloadFileNameListRequest& request, const DownloadFileNameListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DownloadFileNameListOutcomeCallable downloadFileNameListCallable(const Model::DownloadFileNameListRequest& request) const;
			DownloadLabelFileOutcome downloadLabelFile(const Model::DownloadLabelFileRequest &request)const;
			void downloadLabelFileAsync(const Model::DownloadLabelFileRequest& request, const DownloadLabelFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DownloadLabelFileOutcomeCallable downloadLabelFileCallable(const Model::DownloadLabelFileRequest& request) const;
			EnableDataReflowOutcome enableDataReflow(const Model::EnableDataReflowRequest &request)const;
			void enableDataReflowAsync(const Model::EnableDataReflowRequest& request, const EnableDataReflowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EnableDataReflowOutcomeCallable enableDataReflowCallable(const Model::EnableDataReflowRequest& request) const;
			ExportDataReflowDataListOutcome exportDataReflowDataList(const Model::ExportDataReflowDataListRequest &request)const;
			void exportDataReflowDataListAsync(const Model::ExportDataReflowDataListRequest& request, const ExportDataReflowDataListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ExportDataReflowDataListOutcomeCallable exportDataReflowDataListCallable(const Model::ExportDataReflowDataListRequest& request) const;
			GetDatasetOutcome getDataset(const Model::GetDatasetRequest &request)const;
			void getDatasetAsync(const Model::GetDatasetRequest& request, const GetDatasetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetDatasetOutcomeCallable getDatasetCallable(const Model::GetDatasetRequest& request) const;
			GetDiffCountLabelsetAndDatasetOutcome getDiffCountLabelsetAndDataset(const Model::GetDiffCountLabelsetAndDatasetRequest &request)const;
			void getDiffCountLabelsetAndDatasetAsync(const Model::GetDiffCountLabelsetAndDatasetRequest& request, const GetDiffCountLabelsetAndDatasetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetDiffCountLabelsetAndDatasetOutcomeCallable getDiffCountLabelsetAndDatasetCallable(const Model::GetDiffCountLabelsetAndDatasetRequest& request) const;
			GetLabelDetailOutcome getLabelDetail(const Model::GetLabelDetailRequest &request)const;
			void getLabelDetailAsync(const Model::GetLabelDetailRequest& request, const GetLabelDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetLabelDetailOutcomeCallable getLabelDetailCallable(const Model::GetLabelDetailRequest& request) const;
			GetLabelsetOutcome getLabelset(const Model::GetLabelsetRequest &request)const;
			void getLabelsetAsync(const Model::GetLabelsetRequest& request, const GetLabelsetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetLabelsetOutcomeCallable getLabelsetCallable(const Model::GetLabelsetRequest& request) const;
			GetServiceOutcome getService(const Model::GetServiceRequest &request)const;
			void getServiceAsync(const Model::GetServiceRequest& request, const GetServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetServiceOutcomeCallable getServiceCallable(const Model::GetServiceRequest& request) const;
			GetServiceInvokeOutcome getServiceInvoke(const Model::GetServiceInvokeRequest &request)const;
			void getServiceInvokeAsync(const Model::GetServiceInvokeRequest& request, const GetServiceInvokeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetServiceInvokeOutcomeCallable getServiceInvokeCallable(const Model::GetServiceInvokeRequest& request) const;
			GetServiceQpsOutcome getServiceQps(const Model::GetServiceQpsRequest &request)const;
			void getServiceQpsAsync(const Model::GetServiceQpsRequest& request, const GetServiceQpsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetServiceQpsOutcomeCallable getServiceQpsCallable(const Model::GetServiceQpsRequest& request) const;
			GetTrainModelOutcome getTrainModel(const Model::GetTrainModelRequest &request)const;
			void getTrainModelAsync(const Model::GetTrainModelRequest& request, const GetTrainModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetTrainModelOutcomeCallable getTrainModelCallable(const Model::GetTrainModelRequest& request) const;
			GetTrainTaskOutcome getTrainTask(const Model::GetTrainTaskRequest &request)const;
			void getTrainTaskAsync(const Model::GetTrainTaskRequest& request, const GetTrainTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetTrainTaskOutcomeCallable getTrainTaskCallable(const Model::GetTrainTaskRequest& request) const;
			GetTrainTaskEstimatedTimeOutcome getTrainTaskEstimatedTime(const Model::GetTrainTaskEstimatedTimeRequest &request)const;
			void getTrainTaskEstimatedTimeAsync(const Model::GetTrainTaskEstimatedTimeRequest& request, const GetTrainTaskEstimatedTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetTrainTaskEstimatedTimeOutcomeCallable getTrainTaskEstimatedTimeCallable(const Model::GetTrainTaskEstimatedTimeRequest& request) const;
			GetUploadPolicyOutcome getUploadPolicy(const Model::GetUploadPolicyRequest &request)const;
			void getUploadPolicyAsync(const Model::GetUploadPolicyRequest& request, const GetUploadPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetUploadPolicyOutcomeCallable getUploadPolicyCallable(const Model::GetUploadPolicyRequest& request) const;
			GetUserInfoOutcome getUserInfo(const Model::GetUserInfoRequest &request)const;
			void getUserInfoAsync(const Model::GetUserInfoRequest& request, const GetUserInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetUserInfoOutcomeCallable getUserInfoCallable(const Model::GetUserInfoRequest& request) const;
			GetWorkspaceOutcome getWorkspace(const Model::GetWorkspaceRequest &request)const;
			void getWorkspaceAsync(const Model::GetWorkspaceRequest& request, const GetWorkspaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetWorkspaceOutcomeCallable getWorkspaceCallable(const Model::GetWorkspaceRequest& request) const;
			ListDataReflowDatasOutcome listDataReflowDatas(const Model::ListDataReflowDatasRequest &request)const;
			void listDataReflowDatasAsync(const Model::ListDataReflowDatasRequest& request, const ListDataReflowDatasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDataReflowDatasOutcomeCallable listDataReflowDatasCallable(const Model::ListDataReflowDatasRequest& request) const;
			ListDatasetDatasOutcome listDatasetDatas(const Model::ListDatasetDatasRequest &request)const;
			void listDatasetDatasAsync(const Model::ListDatasetDatasRequest& request, const ListDatasetDatasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDatasetDatasOutcomeCallable listDatasetDatasCallable(const Model::ListDatasetDatasRequest& request) const;
			ListDatasetsOutcome listDatasets(const Model::ListDatasetsRequest &request)const;
			void listDatasetsAsync(const Model::ListDatasetsRequest& request, const ListDatasetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDatasetsOutcomeCallable listDatasetsCallable(const Model::ListDatasetsRequest& request) const;
			ListLabelsetDatasOutcome listLabelsetDatas(const Model::ListLabelsetDatasRequest &request)const;
			void listLabelsetDatasAsync(const Model::ListLabelsetDatasRequest& request, const ListLabelsetDatasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListLabelsetDatasOutcomeCallable listLabelsetDatasCallable(const Model::ListLabelsetDatasRequest& request) const;
			ListLabelsetsOutcome listLabelsets(const Model::ListLabelsetsRequest &request)const;
			void listLabelsetsAsync(const Model::ListLabelsetsRequest& request, const ListLabelsetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListLabelsetsOutcomeCallable listLabelsetsCallable(const Model::ListLabelsetsRequest& request) const;
			ListServicesOutcome listServices(const Model::ListServicesRequest &request)const;
			void listServicesAsync(const Model::ListServicesRequest& request, const ListServicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListServicesOutcomeCallable listServicesCallable(const Model::ListServicesRequest& request) const;
			ListTrainTasksOutcome listTrainTasks(const Model::ListTrainTasksRequest &request)const;
			void listTrainTasksAsync(const Model::ListTrainTasksRequest& request, const ListTrainTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTrainTasksOutcomeCallable listTrainTasksCallable(const Model::ListTrainTasksRequest& request) const;
			ListWorkspacesOutcome listWorkspaces(const Model::ListWorkspacesRequest &request)const;
			void listWorkspacesAsync(const Model::ListWorkspacesRequest& request, const ListWorkspacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListWorkspacesOutcomeCallable listWorkspacesCallable(const Model::ListWorkspacesRequest& request) const;
			SetDatasetUserOssPathOutcome setDatasetUserOssPath(const Model::SetDatasetUserOssPathRequest &request)const;
			void setDatasetUserOssPathAsync(const Model::SetDatasetUserOssPathRequest& request, const SetDatasetUserOssPathAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetDatasetUserOssPathOutcomeCallable setDatasetUserOssPathCallable(const Model::SetDatasetUserOssPathRequest& request) const;
			StartServiceOutcome startService(const Model::StartServiceRequest &request)const;
			void startServiceAsync(const Model::StartServiceRequest& request, const StartServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StartServiceOutcomeCallable startServiceCallable(const Model::StartServiceRequest& request) const;
			StartTrainTaskOutcome startTrainTask(const Model::StartTrainTaskRequest &request)const;
			void startTrainTaskAsync(const Model::StartTrainTaskRequest& request, const StartTrainTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StartTrainTaskOutcomeCallable startTrainTaskCallable(const Model::StartTrainTaskRequest& request) const;
			StopServiceOutcome stopService(const Model::StopServiceRequest &request)const;
			void stopServiceAsync(const Model::StopServiceRequest& request, const StopServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StopServiceOutcomeCallable stopServiceCallable(const Model::StopServiceRequest& request) const;
			StopTrainTaskOutcome stopTrainTask(const Model::StopTrainTaskRequest &request)const;
			void stopTrainTaskAsync(const Model::StopTrainTaskRequest& request, const StopTrainTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StopTrainTaskOutcomeCallable stopTrainTaskCallable(const Model::StopTrainTaskRequest& request) const;
			UpdateDatasetOutcome updateDataset(const Model::UpdateDatasetRequest &request)const;
			void updateDatasetAsync(const Model::UpdateDatasetRequest& request, const UpdateDatasetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateDatasetOutcomeCallable updateDatasetCallable(const Model::UpdateDatasetRequest& request) const;
			UpdateLabelsetOutcome updateLabelset(const Model::UpdateLabelsetRequest &request)const;
			void updateLabelsetAsync(const Model::UpdateLabelsetRequest& request, const UpdateLabelsetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateLabelsetOutcomeCallable updateLabelsetCallable(const Model::UpdateLabelsetRequest& request) const;
			UpdateServiceOutcome updateService(const Model::UpdateServiceRequest &request)const;
			void updateServiceAsync(const Model::UpdateServiceRequest& request, const UpdateServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateServiceOutcomeCallable updateServiceCallable(const Model::UpdateServiceRequest& request) const;
			UpdateTrainTaskOutcome updateTrainTask(const Model::UpdateTrainTaskRequest &request)const;
			void updateTrainTaskAsync(const Model::UpdateTrainTaskRequest& request, const UpdateTrainTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateTrainTaskOutcomeCallable updateTrainTaskCallable(const Model::UpdateTrainTaskRequest& request) const;
			UpdateWorkspaceOutcome updateWorkspace(const Model::UpdateWorkspaceRequest &request)const;
			void updateWorkspaceAsync(const Model::UpdateWorkspaceRequest& request, const UpdateWorkspaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateWorkspaceOutcomeCallable updateWorkspaceCallable(const Model::UpdateWorkspaceRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_VIAPI_REGEN_VIAPI_REGENCLIENT_H_
