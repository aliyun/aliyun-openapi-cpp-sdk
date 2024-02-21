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

#ifndef ALIBABACLOUD_LINKVISUAL_LINKVISUALCLIENT_H_
#define ALIBABACLOUD_LINKVISUAL_LINKVISUALCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "LinkvisualExport.h"
#include "model/AddEventRecordPlanDeviceRequest.h"
#include "model/AddEventRecordPlanDeviceResult.h"
#include "model/AddFaceDeviceGroupRequest.h"
#include "model/AddFaceDeviceGroupResult.h"
#include "model/AddFaceDeviceToDeviceGroupRequest.h"
#include "model/AddFaceDeviceToDeviceGroupResult.h"
#include "model/AddFaceUserRequest.h"
#include "model/AddFaceUserResult.h"
#include "model/AddFaceUserGroupRequest.h"
#include "model/AddFaceUserGroupResult.h"
#include "model/AddFaceUserGroupAndDeviceGroupRelationRequest.h"
#include "model/AddFaceUserGroupAndDeviceGroupRelationResult.h"
#include "model/AddFaceUserPictureRequest.h"
#include "model/AddFaceUserPictureResult.h"
#include "model/AddFaceUserToUserGroupRequest.h"
#include "model/AddFaceUserToUserGroupResult.h"
#include "model/AddRecordPlanDeviceRequest.h"
#include "model/AddRecordPlanDeviceResult.h"
#include "model/BatchQueryVisionDeviceInfoRequest.h"
#include "model/BatchQueryVisionDeviceInfoResult.h"
#include "model/BindPictureSearchAppWithDevicesRequest.h"
#include "model/BindPictureSearchAppWithDevicesResult.h"
#include "model/CheckFaceUserDoExistOnDeviceRequest.h"
#include "model/CheckFaceUserDoExistOnDeviceResult.h"
#include "model/ClearFaceDeviceDBRequest.h"
#include "model/ClearFaceDeviceDBResult.h"
#include "model/CreateEventRecordPlanRequest.h"
#include "model/CreateEventRecordPlanResult.h"
#include "model/CreateGbDeviceRequest.h"
#include "model/CreateGbDeviceResult.h"
#include "model/CreateLocalFileUploadJobRequest.h"
#include "model/CreateLocalFileUploadJobResult.h"
#include "model/CreateLocalRecordDownloadByTimeJobRequest.h"
#include "model/CreateLocalRecordDownloadByTimeJobResult.h"
#include "model/CreatePictureSearchAppRequest.h"
#include "model/CreatePictureSearchAppResult.h"
#include "model/CreatePictureSearchJobRequest.h"
#include "model/CreatePictureSearchJobResult.h"
#include "model/CreateRecordDownloadByTimeJobRequest.h"
#include "model/CreateRecordDownloadByTimeJobResult.h"
#include "model/CreateRecordPlanRequest.h"
#include "model/CreateRecordPlanResult.h"
#include "model/CreateRtmpDeviceRequest.h"
#include "model/CreateRtmpDeviceResult.h"
#include "model/CreateStreamPushJobRequest.h"
#include "model/CreateStreamPushJobResult.h"
#include "model/CreateStreamSnapshotJobRequest.h"
#include "model/CreateStreamSnapshotJobResult.h"
#include "model/CreateTimeTemplateRequest.h"
#include "model/CreateTimeTemplateResult.h"
#include "model/DeleteEventRecordPlanRequest.h"
#include "model/DeleteEventRecordPlanResult.h"
#include "model/DeleteEventRecordPlanDeviceRequest.h"
#include "model/DeleteEventRecordPlanDeviceResult.h"
#include "model/DeleteFaceDeviceGroupRequest.h"
#include "model/DeleteFaceDeviceGroupResult.h"
#include "model/DeleteFaceUserRequest.h"
#include "model/DeleteFaceUserResult.h"
#include "model/DeleteFaceUserGroupRequest.h"
#include "model/DeleteFaceUserGroupResult.h"
#include "model/DeleteFaceUserGroupAndDeviceGroupRelationRequest.h"
#include "model/DeleteFaceUserGroupAndDeviceGroupRelationResult.h"
#include "model/DeleteFaceUserPictureRequest.h"
#include "model/DeleteFaceUserPictureResult.h"
#include "model/DeleteGbDeviceRequest.h"
#include "model/DeleteGbDeviceResult.h"
#include "model/DeleteLocalFileUploadJobRequest.h"
#include "model/DeleteLocalFileUploadJobResult.h"
#include "model/DeletePictureRequest.h"
#include "model/DeletePictureResult.h"
#include "model/DeleteRecordRequest.h"
#include "model/DeleteRecordResult.h"
#include "model/DeleteRecordPlanRequest.h"
#include "model/DeleteRecordPlanResult.h"
#include "model/DeleteRecordPlanDeviceRequest.h"
#include "model/DeleteRecordPlanDeviceResult.h"
#include "model/DeleteRtmpDeviceRequest.h"
#include "model/DeleteRtmpDeviceResult.h"
#include "model/DeleteRtmpKeyRequest.h"
#include "model/DeleteRtmpKeyResult.h"
#include "model/DeleteStreamPushJobRequest.h"
#include "model/DeleteStreamPushJobResult.h"
#include "model/DeleteStreamSnapshotJobRequest.h"
#include "model/DeleteStreamSnapshotJobResult.h"
#include "model/DeleteTimeTemplateRequest.h"
#include "model/DeleteTimeTemplateResult.h"
#include "model/DetectUserFaceByUrlRequest.h"
#include "model/DetectUserFaceByUrlResult.h"
#include "model/EnableGbSubDeviceRequest.h"
#include "model/EnableGbSubDeviceResult.h"
#include "model/GetPictureSearchJobStatusRequest.h"
#include "model/GetPictureSearchJobStatusResult.h"
#include "model/PictureSearchPictureRequest.h"
#include "model/PictureSearchPictureResult.h"
#include "model/QueryCarProcessEventsRequest.h"
#include "model/QueryCarProcessEventsResult.h"
#include "model/QueryDeviceEventRequest.h"
#include "model/QueryDeviceEventResult.h"
#include "model/QueryDeviceEventPictureRequest.h"
#include "model/QueryDeviceEventPictureResult.h"
#include "model/QueryDeviceEventRecordRequest.h"
#include "model/QueryDeviceEventRecordResult.h"
#include "model/QueryDevicePictureByListRequest.h"
#include "model/QueryDevicePictureByListResult.h"
#include "model/QueryDevicePictureFileRequest.h"
#include "model/QueryDevicePictureFileResult.h"
#include "model/QueryDevicePictureLifeCycleRequest.h"
#include "model/QueryDevicePictureLifeCycleResult.h"
#include "model/QueryDeviceRecordLifeCycleRequest.h"
#include "model/QueryDeviceRecordLifeCycleResult.h"
#include "model/QueryDeviceVodUrlRequest.h"
#include "model/QueryDeviceVodUrlResult.h"
#include "model/QueryDeviceVodUrlByTimeRequest.h"
#include "model/QueryDeviceVodUrlByTimeResult.h"
#include "model/QueryEventRecordPlanDetailRequest.h"
#include "model/QueryEventRecordPlanDetailResult.h"
#include "model/QueryEventRecordPlanDeviceByDeviceRequest.h"
#include "model/QueryEventRecordPlanDeviceByDeviceResult.h"
#include "model/QueryEventRecordPlanDeviceByPlanRequest.h"
#include "model/QueryEventRecordPlanDeviceByPlanResult.h"
#include "model/QueryEventRecordPlansRequest.h"
#include "model/QueryEventRecordPlansResult.h"
#include "model/QueryFaceAllDeviceGroupRequest.h"
#include "model/QueryFaceAllDeviceGroupResult.h"
#include "model/QueryFaceAllUserGroupRequest.h"
#include "model/QueryFaceAllUserGroupResult.h"
#include "model/QueryFaceAllUserGroupAndDeviceGroupRelationRequest.h"
#include "model/QueryFaceAllUserGroupAndDeviceGroupRelationResult.h"
#include "model/QueryFaceAllUserIdsByGroupIdRequest.h"
#include "model/QueryFaceAllUserIdsByGroupIdResult.h"
#include "model/QueryFaceCustomUserIdByUserIdRequest.h"
#include "model/QueryFaceCustomUserIdByUserIdResult.h"
#include "model/QueryFaceDeviceGroupsByDeviceRequest.h"
#include "model/QueryFaceDeviceGroupsByDeviceResult.h"
#include "model/QueryFaceUserRequest.h"
#include "model/QueryFaceUserResult.h"
#include "model/QueryFaceUserBatchRequest.h"
#include "model/QueryFaceUserBatchResult.h"
#include "model/QueryFaceUserByNameRequest.h"
#include "model/QueryFaceUserByNameResult.h"
#include "model/QueryFaceUserGroupRequest.h"
#include "model/QueryFaceUserGroupResult.h"
#include "model/QueryFaceUserGroupAndDeviceGroupRelationRequest.h"
#include "model/QueryFaceUserGroupAndDeviceGroupRelationResult.h"
#include "model/QueryFaceUserIdByCustomUserIdRequest.h"
#include "model/QueryFaceUserIdByCustomUserIdResult.h"
#include "model/QueryGbSubDeviceListRequest.h"
#include "model/QueryGbSubDeviceListResult.h"
#include "model/QueryLiveStreamingRequest.h"
#include "model/QueryLiveStreamingResult.h"
#include "model/QueryLocalFileUploadJobRequest.h"
#include "model/QueryLocalFileUploadJobResult.h"
#include "model/QueryMonthRecordRequest.h"
#include "model/QueryMonthRecordResult.h"
#include "model/QueryPictureFilesRequest.h"
#include "model/QueryPictureFilesResult.h"
#include "model/QueryPictureSearchAiboxesRequest.h"
#include "model/QueryPictureSearchAiboxesResult.h"
#include "model/QueryPictureSearchAppsRequest.h"
#include "model/QueryPictureSearchAppsResult.h"
#include "model/QueryPictureSearchDevicesRequest.h"
#include "model/QueryPictureSearchDevicesResult.h"
#include "model/QueryPictureSearchJobRequest.h"
#include "model/QueryPictureSearchJobResult.h"
#include "model/QueryPictureSearchJobResultRequest.h"
#include "model/QueryPictureSearchJobResultResult.h"
#include "model/QueryRecordRequest.h"
#include "model/QueryRecordResult.h"
#include "model/QueryRecordByRecordIdRequest.h"
#include "model/QueryRecordByRecordIdResult.h"
#include "model/QueryRecordDownloadJobByIdRequest.h"
#include "model/QueryRecordDownloadJobByIdResult.h"
#include "model/QueryRecordDownloadJobListRequest.h"
#include "model/QueryRecordDownloadJobListResult.h"
#include "model/QueryRecordDownloadUrlRequest.h"
#include "model/QueryRecordDownloadUrlResult.h"
#include "model/QueryRecordPlanDetailRequest.h"
#include "model/QueryRecordPlanDetailResult.h"
#include "model/QueryRecordPlanDeviceByDeviceRequest.h"
#include "model/QueryRecordPlanDeviceByDeviceResult.h"
#include "model/QueryRecordPlanDeviceByPlanRequest.h"
#include "model/QueryRecordPlanDeviceByPlanResult.h"
#include "model/QueryRecordPlansRequest.h"
#include "model/QueryRecordPlansResult.h"
#include "model/QueryRecordUrlRequest.h"
#include "model/QueryRecordUrlResult.h"
#include "model/QueryRecordUrlByTimeRequest.h"
#include "model/QueryRecordUrlByTimeResult.h"
#include "model/QueryRtmpKeyRequest.h"
#include "model/QueryRtmpKeyResult.h"
#include "model/QueryStreamPushJobRequest.h"
#include "model/QueryStreamPushJobResult.h"
#include "model/QueryStreamPushJobListRequest.h"
#include "model/QueryStreamPushJobListResult.h"
#include "model/QueryStreamSnapshotJobRequest.h"
#include "model/QueryStreamSnapshotJobResult.h"
#include "model/QueryTimeTemplateRequest.h"
#include "model/QueryTimeTemplateResult.h"
#include "model/QueryTimeTemplateDetailRequest.h"
#include "model/QueryTimeTemplateDetailResult.h"
#include "model/QueryVisionDeviceInfoRequest.h"
#include "model/QueryVisionDeviceInfoResult.h"
#include "model/QueryVoiceIntercomRequest.h"
#include "model/QueryVoiceIntercomResult.h"
#include "model/RefreshGbSubDeviceListRequest.h"
#include "model/RefreshGbSubDeviceListResult.h"
#include "model/RemoveFaceDeviceFromDeviceGroupRequest.h"
#include "model/RemoveFaceDeviceFromDeviceGroupResult.h"
#include "model/RemoveFaceUserFromUserGroupRequest.h"
#include "model/RemoveFaceUserFromUserGroupResult.h"
#include "model/SetDevicePictureLifeCycleRequest.h"
#include "model/SetDevicePictureLifeCycleResult.h"
#include "model/SetDeviceRecordLifeCycleRequest.h"
#include "model/SetDeviceRecordLifeCycleResult.h"
#include "model/StopLiveStreamingRequest.h"
#include "model/StopLiveStreamingResult.h"
#include "model/StopTriggeredRecordRequest.h"
#include "model/StopTriggeredRecordResult.h"
#include "model/TransferDeviceInstanceRequest.h"
#include "model/TransferDeviceInstanceResult.h"
#include "model/TriggerCapturePictureRequest.h"
#include "model/TriggerCapturePictureResult.h"
#include "model/TriggerRecordRequest.h"
#include "model/TriggerRecordResult.h"
#include "model/UnbindPictureSearchAppWithDevicesRequest.h"
#include "model/UnbindPictureSearchAppWithDevicesResult.h"
#include "model/UpdateEventRecordPlanRequest.h"
#include "model/UpdateEventRecordPlanResult.h"
#include "model/UpdateFaceUserRequest.h"
#include "model/UpdateFaceUserResult.h"
#include "model/UpdateFaceUserGroupAndDeviceGroupRelationRequest.h"
#include "model/UpdateFaceUserGroupAndDeviceGroupRelationResult.h"
#include "model/UpdateGbDeviceRequest.h"
#include "model/UpdateGbDeviceResult.h"
#include "model/UpdateInstanceInternetProtocolRequest.h"
#include "model/UpdateInstanceInternetProtocolResult.h"
#include "model/UpdatePictureSearchAppRequest.h"
#include "model/UpdatePictureSearchAppResult.h"
#include "model/UpdateRecordPlanRequest.h"
#include "model/UpdateRecordPlanResult.h"
#include "model/UpdateRtmpKeyRequest.h"
#include "model/UpdateRtmpKeyResult.h"
#include "model/UpdateTimeTemplateRequest.h"
#include "model/UpdateTimeTemplateResult.h"


namespace AlibabaCloud
{
	namespace Linkvisual
	{
		class ALIBABACLOUD_LINKVISUAL_EXPORT LinkvisualClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::AddEventRecordPlanDeviceResult> AddEventRecordPlanDeviceOutcome;
			typedef std::future<AddEventRecordPlanDeviceOutcome> AddEventRecordPlanDeviceOutcomeCallable;
			typedef std::function<void(const LinkvisualClient*, const Model::AddEventRecordPlanDeviceRequest&, const AddEventRecordPlanDeviceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddEventRecordPlanDeviceAsyncHandler;
			typedef Outcome<Error, Model::AddFaceDeviceGroupResult> AddFaceDeviceGroupOutcome;
			typedef std::future<AddFaceDeviceGroupOutcome> AddFaceDeviceGroupOutcomeCallable;
			typedef std::function<void(const LinkvisualClient*, const Model::AddFaceDeviceGroupRequest&, const AddFaceDeviceGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddFaceDeviceGroupAsyncHandler;
			typedef Outcome<Error, Model::AddFaceDeviceToDeviceGroupResult> AddFaceDeviceToDeviceGroupOutcome;
			typedef std::future<AddFaceDeviceToDeviceGroupOutcome> AddFaceDeviceToDeviceGroupOutcomeCallable;
			typedef std::function<void(const LinkvisualClient*, const Model::AddFaceDeviceToDeviceGroupRequest&, const AddFaceDeviceToDeviceGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddFaceDeviceToDeviceGroupAsyncHandler;
			typedef Outcome<Error, Model::AddFaceUserResult> AddFaceUserOutcome;
			typedef std::future<AddFaceUserOutcome> AddFaceUserOutcomeCallable;
			typedef std::function<void(const LinkvisualClient*, const Model::AddFaceUserRequest&, const AddFaceUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddFaceUserAsyncHandler;
			typedef Outcome<Error, Model::AddFaceUserGroupResult> AddFaceUserGroupOutcome;
			typedef std::future<AddFaceUserGroupOutcome> AddFaceUserGroupOutcomeCallable;
			typedef std::function<void(const LinkvisualClient*, const Model::AddFaceUserGroupRequest&, const AddFaceUserGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddFaceUserGroupAsyncHandler;
			typedef Outcome<Error, Model::AddFaceUserGroupAndDeviceGroupRelationResult> AddFaceUserGroupAndDeviceGroupRelationOutcome;
			typedef std::future<AddFaceUserGroupAndDeviceGroupRelationOutcome> AddFaceUserGroupAndDeviceGroupRelationOutcomeCallable;
			typedef std::function<void(const LinkvisualClient*, const Model::AddFaceUserGroupAndDeviceGroupRelationRequest&, const AddFaceUserGroupAndDeviceGroupRelationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddFaceUserGroupAndDeviceGroupRelationAsyncHandler;
			typedef Outcome<Error, Model::AddFaceUserPictureResult> AddFaceUserPictureOutcome;
			typedef std::future<AddFaceUserPictureOutcome> AddFaceUserPictureOutcomeCallable;
			typedef std::function<void(const LinkvisualClient*, const Model::AddFaceUserPictureRequest&, const AddFaceUserPictureOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddFaceUserPictureAsyncHandler;
			typedef Outcome<Error, Model::AddFaceUserToUserGroupResult> AddFaceUserToUserGroupOutcome;
			typedef std::future<AddFaceUserToUserGroupOutcome> AddFaceUserToUserGroupOutcomeCallable;
			typedef std::function<void(const LinkvisualClient*, const Model::AddFaceUserToUserGroupRequest&, const AddFaceUserToUserGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddFaceUserToUserGroupAsyncHandler;
			typedef Outcome<Error, Model::AddRecordPlanDeviceResult> AddRecordPlanDeviceOutcome;
			typedef std::future<AddRecordPlanDeviceOutcome> AddRecordPlanDeviceOutcomeCallable;
			typedef std::function<void(const LinkvisualClient*, const Model::AddRecordPlanDeviceRequest&, const AddRecordPlanDeviceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddRecordPlanDeviceAsyncHandler;
			typedef Outcome<Error, Model::BatchQueryVisionDeviceInfoResult> BatchQueryVisionDeviceInfoOutcome;
			typedef std::future<BatchQueryVisionDeviceInfoOutcome> BatchQueryVisionDeviceInfoOutcomeCallable;
			typedef std::function<void(const LinkvisualClient*, const Model::BatchQueryVisionDeviceInfoRequest&, const BatchQueryVisionDeviceInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BatchQueryVisionDeviceInfoAsyncHandler;
			typedef Outcome<Error, Model::BindPictureSearchAppWithDevicesResult> BindPictureSearchAppWithDevicesOutcome;
			typedef std::future<BindPictureSearchAppWithDevicesOutcome> BindPictureSearchAppWithDevicesOutcomeCallable;
			typedef std::function<void(const LinkvisualClient*, const Model::BindPictureSearchAppWithDevicesRequest&, const BindPictureSearchAppWithDevicesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BindPictureSearchAppWithDevicesAsyncHandler;
			typedef Outcome<Error, Model::CheckFaceUserDoExistOnDeviceResult> CheckFaceUserDoExistOnDeviceOutcome;
			typedef std::future<CheckFaceUserDoExistOnDeviceOutcome> CheckFaceUserDoExistOnDeviceOutcomeCallable;
			typedef std::function<void(const LinkvisualClient*, const Model::CheckFaceUserDoExistOnDeviceRequest&, const CheckFaceUserDoExistOnDeviceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CheckFaceUserDoExistOnDeviceAsyncHandler;
			typedef Outcome<Error, Model::ClearFaceDeviceDBResult> ClearFaceDeviceDBOutcome;
			typedef std::future<ClearFaceDeviceDBOutcome> ClearFaceDeviceDBOutcomeCallable;
			typedef std::function<void(const LinkvisualClient*, const Model::ClearFaceDeviceDBRequest&, const ClearFaceDeviceDBOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ClearFaceDeviceDBAsyncHandler;
			typedef Outcome<Error, Model::CreateEventRecordPlanResult> CreateEventRecordPlanOutcome;
			typedef std::future<CreateEventRecordPlanOutcome> CreateEventRecordPlanOutcomeCallable;
			typedef std::function<void(const LinkvisualClient*, const Model::CreateEventRecordPlanRequest&, const CreateEventRecordPlanOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateEventRecordPlanAsyncHandler;
			typedef Outcome<Error, Model::CreateGbDeviceResult> CreateGbDeviceOutcome;
			typedef std::future<CreateGbDeviceOutcome> CreateGbDeviceOutcomeCallable;
			typedef std::function<void(const LinkvisualClient*, const Model::CreateGbDeviceRequest&, const CreateGbDeviceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateGbDeviceAsyncHandler;
			typedef Outcome<Error, Model::CreateLocalFileUploadJobResult> CreateLocalFileUploadJobOutcome;
			typedef std::future<CreateLocalFileUploadJobOutcome> CreateLocalFileUploadJobOutcomeCallable;
			typedef std::function<void(const LinkvisualClient*, const Model::CreateLocalFileUploadJobRequest&, const CreateLocalFileUploadJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateLocalFileUploadJobAsyncHandler;
			typedef Outcome<Error, Model::CreateLocalRecordDownloadByTimeJobResult> CreateLocalRecordDownloadByTimeJobOutcome;
			typedef std::future<CreateLocalRecordDownloadByTimeJobOutcome> CreateLocalRecordDownloadByTimeJobOutcomeCallable;
			typedef std::function<void(const LinkvisualClient*, const Model::CreateLocalRecordDownloadByTimeJobRequest&, const CreateLocalRecordDownloadByTimeJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateLocalRecordDownloadByTimeJobAsyncHandler;
			typedef Outcome<Error, Model::CreatePictureSearchAppResult> CreatePictureSearchAppOutcome;
			typedef std::future<CreatePictureSearchAppOutcome> CreatePictureSearchAppOutcomeCallable;
			typedef std::function<void(const LinkvisualClient*, const Model::CreatePictureSearchAppRequest&, const CreatePictureSearchAppOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreatePictureSearchAppAsyncHandler;
			typedef Outcome<Error, Model::CreatePictureSearchJobResult> CreatePictureSearchJobOutcome;
			typedef std::future<CreatePictureSearchJobOutcome> CreatePictureSearchJobOutcomeCallable;
			typedef std::function<void(const LinkvisualClient*, const Model::CreatePictureSearchJobRequest&, const CreatePictureSearchJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreatePictureSearchJobAsyncHandler;
			typedef Outcome<Error, Model::CreateRecordDownloadByTimeJobResult> CreateRecordDownloadByTimeJobOutcome;
			typedef std::future<CreateRecordDownloadByTimeJobOutcome> CreateRecordDownloadByTimeJobOutcomeCallable;
			typedef std::function<void(const LinkvisualClient*, const Model::CreateRecordDownloadByTimeJobRequest&, const CreateRecordDownloadByTimeJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateRecordDownloadByTimeJobAsyncHandler;
			typedef Outcome<Error, Model::CreateRecordPlanResult> CreateRecordPlanOutcome;
			typedef std::future<CreateRecordPlanOutcome> CreateRecordPlanOutcomeCallable;
			typedef std::function<void(const LinkvisualClient*, const Model::CreateRecordPlanRequest&, const CreateRecordPlanOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateRecordPlanAsyncHandler;
			typedef Outcome<Error, Model::CreateRtmpDeviceResult> CreateRtmpDeviceOutcome;
			typedef std::future<CreateRtmpDeviceOutcome> CreateRtmpDeviceOutcomeCallable;
			typedef std::function<void(const LinkvisualClient*, const Model::CreateRtmpDeviceRequest&, const CreateRtmpDeviceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateRtmpDeviceAsyncHandler;
			typedef Outcome<Error, Model::CreateStreamPushJobResult> CreateStreamPushJobOutcome;
			typedef std::future<CreateStreamPushJobOutcome> CreateStreamPushJobOutcomeCallable;
			typedef std::function<void(const LinkvisualClient*, const Model::CreateStreamPushJobRequest&, const CreateStreamPushJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateStreamPushJobAsyncHandler;
			typedef Outcome<Error, Model::CreateStreamSnapshotJobResult> CreateStreamSnapshotJobOutcome;
			typedef std::future<CreateStreamSnapshotJobOutcome> CreateStreamSnapshotJobOutcomeCallable;
			typedef std::function<void(const LinkvisualClient*, const Model::CreateStreamSnapshotJobRequest&, const CreateStreamSnapshotJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateStreamSnapshotJobAsyncHandler;
			typedef Outcome<Error, Model::CreateTimeTemplateResult> CreateTimeTemplateOutcome;
			typedef std::future<CreateTimeTemplateOutcome> CreateTimeTemplateOutcomeCallable;
			typedef std::function<void(const LinkvisualClient*, const Model::CreateTimeTemplateRequest&, const CreateTimeTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateTimeTemplateAsyncHandler;
			typedef Outcome<Error, Model::DeleteEventRecordPlanResult> DeleteEventRecordPlanOutcome;
			typedef std::future<DeleteEventRecordPlanOutcome> DeleteEventRecordPlanOutcomeCallable;
			typedef std::function<void(const LinkvisualClient*, const Model::DeleteEventRecordPlanRequest&, const DeleteEventRecordPlanOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteEventRecordPlanAsyncHandler;
			typedef Outcome<Error, Model::DeleteEventRecordPlanDeviceResult> DeleteEventRecordPlanDeviceOutcome;
			typedef std::future<DeleteEventRecordPlanDeviceOutcome> DeleteEventRecordPlanDeviceOutcomeCallable;
			typedef std::function<void(const LinkvisualClient*, const Model::DeleteEventRecordPlanDeviceRequest&, const DeleteEventRecordPlanDeviceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteEventRecordPlanDeviceAsyncHandler;
			typedef Outcome<Error, Model::DeleteFaceDeviceGroupResult> DeleteFaceDeviceGroupOutcome;
			typedef std::future<DeleteFaceDeviceGroupOutcome> DeleteFaceDeviceGroupOutcomeCallable;
			typedef std::function<void(const LinkvisualClient*, const Model::DeleteFaceDeviceGroupRequest&, const DeleteFaceDeviceGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteFaceDeviceGroupAsyncHandler;
			typedef Outcome<Error, Model::DeleteFaceUserResult> DeleteFaceUserOutcome;
			typedef std::future<DeleteFaceUserOutcome> DeleteFaceUserOutcomeCallable;
			typedef std::function<void(const LinkvisualClient*, const Model::DeleteFaceUserRequest&, const DeleteFaceUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteFaceUserAsyncHandler;
			typedef Outcome<Error, Model::DeleteFaceUserGroupResult> DeleteFaceUserGroupOutcome;
			typedef std::future<DeleteFaceUserGroupOutcome> DeleteFaceUserGroupOutcomeCallable;
			typedef std::function<void(const LinkvisualClient*, const Model::DeleteFaceUserGroupRequest&, const DeleteFaceUserGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteFaceUserGroupAsyncHandler;
			typedef Outcome<Error, Model::DeleteFaceUserGroupAndDeviceGroupRelationResult> DeleteFaceUserGroupAndDeviceGroupRelationOutcome;
			typedef std::future<DeleteFaceUserGroupAndDeviceGroupRelationOutcome> DeleteFaceUserGroupAndDeviceGroupRelationOutcomeCallable;
			typedef std::function<void(const LinkvisualClient*, const Model::DeleteFaceUserGroupAndDeviceGroupRelationRequest&, const DeleteFaceUserGroupAndDeviceGroupRelationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteFaceUserGroupAndDeviceGroupRelationAsyncHandler;
			typedef Outcome<Error, Model::DeleteFaceUserPictureResult> DeleteFaceUserPictureOutcome;
			typedef std::future<DeleteFaceUserPictureOutcome> DeleteFaceUserPictureOutcomeCallable;
			typedef std::function<void(const LinkvisualClient*, const Model::DeleteFaceUserPictureRequest&, const DeleteFaceUserPictureOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteFaceUserPictureAsyncHandler;
			typedef Outcome<Error, Model::DeleteGbDeviceResult> DeleteGbDeviceOutcome;
			typedef std::future<DeleteGbDeviceOutcome> DeleteGbDeviceOutcomeCallable;
			typedef std::function<void(const LinkvisualClient*, const Model::DeleteGbDeviceRequest&, const DeleteGbDeviceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteGbDeviceAsyncHandler;
			typedef Outcome<Error, Model::DeleteLocalFileUploadJobResult> DeleteLocalFileUploadJobOutcome;
			typedef std::future<DeleteLocalFileUploadJobOutcome> DeleteLocalFileUploadJobOutcomeCallable;
			typedef std::function<void(const LinkvisualClient*, const Model::DeleteLocalFileUploadJobRequest&, const DeleteLocalFileUploadJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLocalFileUploadJobAsyncHandler;
			typedef Outcome<Error, Model::DeletePictureResult> DeletePictureOutcome;
			typedef std::future<DeletePictureOutcome> DeletePictureOutcomeCallable;
			typedef std::function<void(const LinkvisualClient*, const Model::DeletePictureRequest&, const DeletePictureOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeletePictureAsyncHandler;
			typedef Outcome<Error, Model::DeleteRecordResult> DeleteRecordOutcome;
			typedef std::future<DeleteRecordOutcome> DeleteRecordOutcomeCallable;
			typedef std::function<void(const LinkvisualClient*, const Model::DeleteRecordRequest&, const DeleteRecordOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRecordAsyncHandler;
			typedef Outcome<Error, Model::DeleteRecordPlanResult> DeleteRecordPlanOutcome;
			typedef std::future<DeleteRecordPlanOutcome> DeleteRecordPlanOutcomeCallable;
			typedef std::function<void(const LinkvisualClient*, const Model::DeleteRecordPlanRequest&, const DeleteRecordPlanOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRecordPlanAsyncHandler;
			typedef Outcome<Error, Model::DeleteRecordPlanDeviceResult> DeleteRecordPlanDeviceOutcome;
			typedef std::future<DeleteRecordPlanDeviceOutcome> DeleteRecordPlanDeviceOutcomeCallable;
			typedef std::function<void(const LinkvisualClient*, const Model::DeleteRecordPlanDeviceRequest&, const DeleteRecordPlanDeviceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRecordPlanDeviceAsyncHandler;
			typedef Outcome<Error, Model::DeleteRtmpDeviceResult> DeleteRtmpDeviceOutcome;
			typedef std::future<DeleteRtmpDeviceOutcome> DeleteRtmpDeviceOutcomeCallable;
			typedef std::function<void(const LinkvisualClient*, const Model::DeleteRtmpDeviceRequest&, const DeleteRtmpDeviceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRtmpDeviceAsyncHandler;
			typedef Outcome<Error, Model::DeleteRtmpKeyResult> DeleteRtmpKeyOutcome;
			typedef std::future<DeleteRtmpKeyOutcome> DeleteRtmpKeyOutcomeCallable;
			typedef std::function<void(const LinkvisualClient*, const Model::DeleteRtmpKeyRequest&, const DeleteRtmpKeyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRtmpKeyAsyncHandler;
			typedef Outcome<Error, Model::DeleteStreamPushJobResult> DeleteStreamPushJobOutcome;
			typedef std::future<DeleteStreamPushJobOutcome> DeleteStreamPushJobOutcomeCallable;
			typedef std::function<void(const LinkvisualClient*, const Model::DeleteStreamPushJobRequest&, const DeleteStreamPushJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteStreamPushJobAsyncHandler;
			typedef Outcome<Error, Model::DeleteStreamSnapshotJobResult> DeleteStreamSnapshotJobOutcome;
			typedef std::future<DeleteStreamSnapshotJobOutcome> DeleteStreamSnapshotJobOutcomeCallable;
			typedef std::function<void(const LinkvisualClient*, const Model::DeleteStreamSnapshotJobRequest&, const DeleteStreamSnapshotJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteStreamSnapshotJobAsyncHandler;
			typedef Outcome<Error, Model::DeleteTimeTemplateResult> DeleteTimeTemplateOutcome;
			typedef std::future<DeleteTimeTemplateOutcome> DeleteTimeTemplateOutcomeCallable;
			typedef std::function<void(const LinkvisualClient*, const Model::DeleteTimeTemplateRequest&, const DeleteTimeTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTimeTemplateAsyncHandler;
			typedef Outcome<Error, Model::DetectUserFaceByUrlResult> DetectUserFaceByUrlOutcome;
			typedef std::future<DetectUserFaceByUrlOutcome> DetectUserFaceByUrlOutcomeCallable;
			typedef std::function<void(const LinkvisualClient*, const Model::DetectUserFaceByUrlRequest&, const DetectUserFaceByUrlOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DetectUserFaceByUrlAsyncHandler;
			typedef Outcome<Error, Model::EnableGbSubDeviceResult> EnableGbSubDeviceOutcome;
			typedef std::future<EnableGbSubDeviceOutcome> EnableGbSubDeviceOutcomeCallable;
			typedef std::function<void(const LinkvisualClient*, const Model::EnableGbSubDeviceRequest&, const EnableGbSubDeviceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EnableGbSubDeviceAsyncHandler;
			typedef Outcome<Error, Model::GetPictureSearchJobStatusResult> GetPictureSearchJobStatusOutcome;
			typedef std::future<GetPictureSearchJobStatusOutcome> GetPictureSearchJobStatusOutcomeCallable;
			typedef std::function<void(const LinkvisualClient*, const Model::GetPictureSearchJobStatusRequest&, const GetPictureSearchJobStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetPictureSearchJobStatusAsyncHandler;
			typedef Outcome<Error, Model::PictureSearchPictureResult> PictureSearchPictureOutcome;
			typedef std::future<PictureSearchPictureOutcome> PictureSearchPictureOutcomeCallable;
			typedef std::function<void(const LinkvisualClient*, const Model::PictureSearchPictureRequest&, const PictureSearchPictureOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PictureSearchPictureAsyncHandler;
			typedef Outcome<Error, Model::QueryCarProcessEventsResult> QueryCarProcessEventsOutcome;
			typedef std::future<QueryCarProcessEventsOutcome> QueryCarProcessEventsOutcomeCallable;
			typedef std::function<void(const LinkvisualClient*, const Model::QueryCarProcessEventsRequest&, const QueryCarProcessEventsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryCarProcessEventsAsyncHandler;
			typedef Outcome<Error, Model::QueryDeviceEventResult> QueryDeviceEventOutcome;
			typedef std::future<QueryDeviceEventOutcome> QueryDeviceEventOutcomeCallable;
			typedef std::function<void(const LinkvisualClient*, const Model::QueryDeviceEventRequest&, const QueryDeviceEventOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryDeviceEventAsyncHandler;
			typedef Outcome<Error, Model::QueryDeviceEventPictureResult> QueryDeviceEventPictureOutcome;
			typedef std::future<QueryDeviceEventPictureOutcome> QueryDeviceEventPictureOutcomeCallable;
			typedef std::function<void(const LinkvisualClient*, const Model::QueryDeviceEventPictureRequest&, const QueryDeviceEventPictureOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryDeviceEventPictureAsyncHandler;
			typedef Outcome<Error, Model::QueryDeviceEventRecordResult> QueryDeviceEventRecordOutcome;
			typedef std::future<QueryDeviceEventRecordOutcome> QueryDeviceEventRecordOutcomeCallable;
			typedef std::function<void(const LinkvisualClient*, const Model::QueryDeviceEventRecordRequest&, const QueryDeviceEventRecordOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryDeviceEventRecordAsyncHandler;
			typedef Outcome<Error, Model::QueryDevicePictureByListResult> QueryDevicePictureByListOutcome;
			typedef std::future<QueryDevicePictureByListOutcome> QueryDevicePictureByListOutcomeCallable;
			typedef std::function<void(const LinkvisualClient*, const Model::QueryDevicePictureByListRequest&, const QueryDevicePictureByListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryDevicePictureByListAsyncHandler;
			typedef Outcome<Error, Model::QueryDevicePictureFileResult> QueryDevicePictureFileOutcome;
			typedef std::future<QueryDevicePictureFileOutcome> QueryDevicePictureFileOutcomeCallable;
			typedef std::function<void(const LinkvisualClient*, const Model::QueryDevicePictureFileRequest&, const QueryDevicePictureFileOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryDevicePictureFileAsyncHandler;
			typedef Outcome<Error, Model::QueryDevicePictureLifeCycleResult> QueryDevicePictureLifeCycleOutcome;
			typedef std::future<QueryDevicePictureLifeCycleOutcome> QueryDevicePictureLifeCycleOutcomeCallable;
			typedef std::function<void(const LinkvisualClient*, const Model::QueryDevicePictureLifeCycleRequest&, const QueryDevicePictureLifeCycleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryDevicePictureLifeCycleAsyncHandler;
			typedef Outcome<Error, Model::QueryDeviceRecordLifeCycleResult> QueryDeviceRecordLifeCycleOutcome;
			typedef std::future<QueryDeviceRecordLifeCycleOutcome> QueryDeviceRecordLifeCycleOutcomeCallable;
			typedef std::function<void(const LinkvisualClient*, const Model::QueryDeviceRecordLifeCycleRequest&, const QueryDeviceRecordLifeCycleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryDeviceRecordLifeCycleAsyncHandler;
			typedef Outcome<Error, Model::QueryDeviceVodUrlResult> QueryDeviceVodUrlOutcome;
			typedef std::future<QueryDeviceVodUrlOutcome> QueryDeviceVodUrlOutcomeCallable;
			typedef std::function<void(const LinkvisualClient*, const Model::QueryDeviceVodUrlRequest&, const QueryDeviceVodUrlOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryDeviceVodUrlAsyncHandler;
			typedef Outcome<Error, Model::QueryDeviceVodUrlByTimeResult> QueryDeviceVodUrlByTimeOutcome;
			typedef std::future<QueryDeviceVodUrlByTimeOutcome> QueryDeviceVodUrlByTimeOutcomeCallable;
			typedef std::function<void(const LinkvisualClient*, const Model::QueryDeviceVodUrlByTimeRequest&, const QueryDeviceVodUrlByTimeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryDeviceVodUrlByTimeAsyncHandler;
			typedef Outcome<Error, Model::QueryEventRecordPlanDetailResult> QueryEventRecordPlanDetailOutcome;
			typedef std::future<QueryEventRecordPlanDetailOutcome> QueryEventRecordPlanDetailOutcomeCallable;
			typedef std::function<void(const LinkvisualClient*, const Model::QueryEventRecordPlanDetailRequest&, const QueryEventRecordPlanDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryEventRecordPlanDetailAsyncHandler;
			typedef Outcome<Error, Model::QueryEventRecordPlanDeviceByDeviceResult> QueryEventRecordPlanDeviceByDeviceOutcome;
			typedef std::future<QueryEventRecordPlanDeviceByDeviceOutcome> QueryEventRecordPlanDeviceByDeviceOutcomeCallable;
			typedef std::function<void(const LinkvisualClient*, const Model::QueryEventRecordPlanDeviceByDeviceRequest&, const QueryEventRecordPlanDeviceByDeviceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryEventRecordPlanDeviceByDeviceAsyncHandler;
			typedef Outcome<Error, Model::QueryEventRecordPlanDeviceByPlanResult> QueryEventRecordPlanDeviceByPlanOutcome;
			typedef std::future<QueryEventRecordPlanDeviceByPlanOutcome> QueryEventRecordPlanDeviceByPlanOutcomeCallable;
			typedef std::function<void(const LinkvisualClient*, const Model::QueryEventRecordPlanDeviceByPlanRequest&, const QueryEventRecordPlanDeviceByPlanOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryEventRecordPlanDeviceByPlanAsyncHandler;
			typedef Outcome<Error, Model::QueryEventRecordPlansResult> QueryEventRecordPlansOutcome;
			typedef std::future<QueryEventRecordPlansOutcome> QueryEventRecordPlansOutcomeCallable;
			typedef std::function<void(const LinkvisualClient*, const Model::QueryEventRecordPlansRequest&, const QueryEventRecordPlansOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryEventRecordPlansAsyncHandler;
			typedef Outcome<Error, Model::QueryFaceAllDeviceGroupResult> QueryFaceAllDeviceGroupOutcome;
			typedef std::future<QueryFaceAllDeviceGroupOutcome> QueryFaceAllDeviceGroupOutcomeCallable;
			typedef std::function<void(const LinkvisualClient*, const Model::QueryFaceAllDeviceGroupRequest&, const QueryFaceAllDeviceGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryFaceAllDeviceGroupAsyncHandler;
			typedef Outcome<Error, Model::QueryFaceAllUserGroupResult> QueryFaceAllUserGroupOutcome;
			typedef std::future<QueryFaceAllUserGroupOutcome> QueryFaceAllUserGroupOutcomeCallable;
			typedef std::function<void(const LinkvisualClient*, const Model::QueryFaceAllUserGroupRequest&, const QueryFaceAllUserGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryFaceAllUserGroupAsyncHandler;
			typedef Outcome<Error, Model::QueryFaceAllUserGroupAndDeviceGroupRelationResult> QueryFaceAllUserGroupAndDeviceGroupRelationOutcome;
			typedef std::future<QueryFaceAllUserGroupAndDeviceGroupRelationOutcome> QueryFaceAllUserGroupAndDeviceGroupRelationOutcomeCallable;
			typedef std::function<void(const LinkvisualClient*, const Model::QueryFaceAllUserGroupAndDeviceGroupRelationRequest&, const QueryFaceAllUserGroupAndDeviceGroupRelationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryFaceAllUserGroupAndDeviceGroupRelationAsyncHandler;
			typedef Outcome<Error, Model::QueryFaceAllUserIdsByGroupIdResult> QueryFaceAllUserIdsByGroupIdOutcome;
			typedef std::future<QueryFaceAllUserIdsByGroupIdOutcome> QueryFaceAllUserIdsByGroupIdOutcomeCallable;
			typedef std::function<void(const LinkvisualClient*, const Model::QueryFaceAllUserIdsByGroupIdRequest&, const QueryFaceAllUserIdsByGroupIdOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryFaceAllUserIdsByGroupIdAsyncHandler;
			typedef Outcome<Error, Model::QueryFaceCustomUserIdByUserIdResult> QueryFaceCustomUserIdByUserIdOutcome;
			typedef std::future<QueryFaceCustomUserIdByUserIdOutcome> QueryFaceCustomUserIdByUserIdOutcomeCallable;
			typedef std::function<void(const LinkvisualClient*, const Model::QueryFaceCustomUserIdByUserIdRequest&, const QueryFaceCustomUserIdByUserIdOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryFaceCustomUserIdByUserIdAsyncHandler;
			typedef Outcome<Error, Model::QueryFaceDeviceGroupsByDeviceResult> QueryFaceDeviceGroupsByDeviceOutcome;
			typedef std::future<QueryFaceDeviceGroupsByDeviceOutcome> QueryFaceDeviceGroupsByDeviceOutcomeCallable;
			typedef std::function<void(const LinkvisualClient*, const Model::QueryFaceDeviceGroupsByDeviceRequest&, const QueryFaceDeviceGroupsByDeviceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryFaceDeviceGroupsByDeviceAsyncHandler;
			typedef Outcome<Error, Model::QueryFaceUserResult> QueryFaceUserOutcome;
			typedef std::future<QueryFaceUserOutcome> QueryFaceUserOutcomeCallable;
			typedef std::function<void(const LinkvisualClient*, const Model::QueryFaceUserRequest&, const QueryFaceUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryFaceUserAsyncHandler;
			typedef Outcome<Error, Model::QueryFaceUserBatchResult> QueryFaceUserBatchOutcome;
			typedef std::future<QueryFaceUserBatchOutcome> QueryFaceUserBatchOutcomeCallable;
			typedef std::function<void(const LinkvisualClient*, const Model::QueryFaceUserBatchRequest&, const QueryFaceUserBatchOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryFaceUserBatchAsyncHandler;
			typedef Outcome<Error, Model::QueryFaceUserByNameResult> QueryFaceUserByNameOutcome;
			typedef std::future<QueryFaceUserByNameOutcome> QueryFaceUserByNameOutcomeCallable;
			typedef std::function<void(const LinkvisualClient*, const Model::QueryFaceUserByNameRequest&, const QueryFaceUserByNameOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryFaceUserByNameAsyncHandler;
			typedef Outcome<Error, Model::QueryFaceUserGroupResult> QueryFaceUserGroupOutcome;
			typedef std::future<QueryFaceUserGroupOutcome> QueryFaceUserGroupOutcomeCallable;
			typedef std::function<void(const LinkvisualClient*, const Model::QueryFaceUserGroupRequest&, const QueryFaceUserGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryFaceUserGroupAsyncHandler;
			typedef Outcome<Error, Model::QueryFaceUserGroupAndDeviceGroupRelationResult> QueryFaceUserGroupAndDeviceGroupRelationOutcome;
			typedef std::future<QueryFaceUserGroupAndDeviceGroupRelationOutcome> QueryFaceUserGroupAndDeviceGroupRelationOutcomeCallable;
			typedef std::function<void(const LinkvisualClient*, const Model::QueryFaceUserGroupAndDeviceGroupRelationRequest&, const QueryFaceUserGroupAndDeviceGroupRelationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryFaceUserGroupAndDeviceGroupRelationAsyncHandler;
			typedef Outcome<Error, Model::QueryFaceUserIdByCustomUserIdResult> QueryFaceUserIdByCustomUserIdOutcome;
			typedef std::future<QueryFaceUserIdByCustomUserIdOutcome> QueryFaceUserIdByCustomUserIdOutcomeCallable;
			typedef std::function<void(const LinkvisualClient*, const Model::QueryFaceUserIdByCustomUserIdRequest&, const QueryFaceUserIdByCustomUserIdOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryFaceUserIdByCustomUserIdAsyncHandler;
			typedef Outcome<Error, Model::QueryGbSubDeviceListResult> QueryGbSubDeviceListOutcome;
			typedef std::future<QueryGbSubDeviceListOutcome> QueryGbSubDeviceListOutcomeCallable;
			typedef std::function<void(const LinkvisualClient*, const Model::QueryGbSubDeviceListRequest&, const QueryGbSubDeviceListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryGbSubDeviceListAsyncHandler;
			typedef Outcome<Error, Model::QueryLiveStreamingResult> QueryLiveStreamingOutcome;
			typedef std::future<QueryLiveStreamingOutcome> QueryLiveStreamingOutcomeCallable;
			typedef std::function<void(const LinkvisualClient*, const Model::QueryLiveStreamingRequest&, const QueryLiveStreamingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryLiveStreamingAsyncHandler;
			typedef Outcome<Error, Model::QueryLocalFileUploadJobResult> QueryLocalFileUploadJobOutcome;
			typedef std::future<QueryLocalFileUploadJobOutcome> QueryLocalFileUploadJobOutcomeCallable;
			typedef std::function<void(const LinkvisualClient*, const Model::QueryLocalFileUploadJobRequest&, const QueryLocalFileUploadJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryLocalFileUploadJobAsyncHandler;
			typedef Outcome<Error, Model::QueryMonthRecordResult> QueryMonthRecordOutcome;
			typedef std::future<QueryMonthRecordOutcome> QueryMonthRecordOutcomeCallable;
			typedef std::function<void(const LinkvisualClient*, const Model::QueryMonthRecordRequest&, const QueryMonthRecordOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryMonthRecordAsyncHandler;
			typedef Outcome<Error, Model::QueryPictureFilesResult> QueryPictureFilesOutcome;
			typedef std::future<QueryPictureFilesOutcome> QueryPictureFilesOutcomeCallable;
			typedef std::function<void(const LinkvisualClient*, const Model::QueryPictureFilesRequest&, const QueryPictureFilesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryPictureFilesAsyncHandler;
			typedef Outcome<Error, Model::QueryPictureSearchAiboxesResult> QueryPictureSearchAiboxesOutcome;
			typedef std::future<QueryPictureSearchAiboxesOutcome> QueryPictureSearchAiboxesOutcomeCallable;
			typedef std::function<void(const LinkvisualClient*, const Model::QueryPictureSearchAiboxesRequest&, const QueryPictureSearchAiboxesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryPictureSearchAiboxesAsyncHandler;
			typedef Outcome<Error, Model::QueryPictureSearchAppsResult> QueryPictureSearchAppsOutcome;
			typedef std::future<QueryPictureSearchAppsOutcome> QueryPictureSearchAppsOutcomeCallable;
			typedef std::function<void(const LinkvisualClient*, const Model::QueryPictureSearchAppsRequest&, const QueryPictureSearchAppsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryPictureSearchAppsAsyncHandler;
			typedef Outcome<Error, Model::QueryPictureSearchDevicesResult> QueryPictureSearchDevicesOutcome;
			typedef std::future<QueryPictureSearchDevicesOutcome> QueryPictureSearchDevicesOutcomeCallable;
			typedef std::function<void(const LinkvisualClient*, const Model::QueryPictureSearchDevicesRequest&, const QueryPictureSearchDevicesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryPictureSearchDevicesAsyncHandler;
			typedef Outcome<Error, Model::QueryPictureSearchJobResult> QueryPictureSearchJobOutcome;
			typedef std::future<QueryPictureSearchJobOutcome> QueryPictureSearchJobOutcomeCallable;
			typedef std::function<void(const LinkvisualClient*, const Model::QueryPictureSearchJobRequest&, const QueryPictureSearchJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryPictureSearchJobAsyncHandler;
			typedef Outcome<Error, Model::QueryPictureSearchJobResultResult> QueryPictureSearchJobResultOutcome;
			typedef std::future<QueryPictureSearchJobResultOutcome> QueryPictureSearchJobResultOutcomeCallable;
			typedef std::function<void(const LinkvisualClient*, const Model::QueryPictureSearchJobResultRequest&, const QueryPictureSearchJobResultOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryPictureSearchJobResultAsyncHandler;
			typedef Outcome<Error, Model::QueryRecordResult> QueryRecordOutcome;
			typedef std::future<QueryRecordOutcome> QueryRecordOutcomeCallable;
			typedef std::function<void(const LinkvisualClient*, const Model::QueryRecordRequest&, const QueryRecordOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryRecordAsyncHandler;
			typedef Outcome<Error, Model::QueryRecordByRecordIdResult> QueryRecordByRecordIdOutcome;
			typedef std::future<QueryRecordByRecordIdOutcome> QueryRecordByRecordIdOutcomeCallable;
			typedef std::function<void(const LinkvisualClient*, const Model::QueryRecordByRecordIdRequest&, const QueryRecordByRecordIdOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryRecordByRecordIdAsyncHandler;
			typedef Outcome<Error, Model::QueryRecordDownloadJobByIdResult> QueryRecordDownloadJobByIdOutcome;
			typedef std::future<QueryRecordDownloadJobByIdOutcome> QueryRecordDownloadJobByIdOutcomeCallable;
			typedef std::function<void(const LinkvisualClient*, const Model::QueryRecordDownloadJobByIdRequest&, const QueryRecordDownloadJobByIdOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryRecordDownloadJobByIdAsyncHandler;
			typedef Outcome<Error, Model::QueryRecordDownloadJobListResult> QueryRecordDownloadJobListOutcome;
			typedef std::future<QueryRecordDownloadJobListOutcome> QueryRecordDownloadJobListOutcomeCallable;
			typedef std::function<void(const LinkvisualClient*, const Model::QueryRecordDownloadJobListRequest&, const QueryRecordDownloadJobListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryRecordDownloadJobListAsyncHandler;
			typedef Outcome<Error, Model::QueryRecordDownloadUrlResult> QueryRecordDownloadUrlOutcome;
			typedef std::future<QueryRecordDownloadUrlOutcome> QueryRecordDownloadUrlOutcomeCallable;
			typedef std::function<void(const LinkvisualClient*, const Model::QueryRecordDownloadUrlRequest&, const QueryRecordDownloadUrlOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryRecordDownloadUrlAsyncHandler;
			typedef Outcome<Error, Model::QueryRecordPlanDetailResult> QueryRecordPlanDetailOutcome;
			typedef std::future<QueryRecordPlanDetailOutcome> QueryRecordPlanDetailOutcomeCallable;
			typedef std::function<void(const LinkvisualClient*, const Model::QueryRecordPlanDetailRequest&, const QueryRecordPlanDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryRecordPlanDetailAsyncHandler;
			typedef Outcome<Error, Model::QueryRecordPlanDeviceByDeviceResult> QueryRecordPlanDeviceByDeviceOutcome;
			typedef std::future<QueryRecordPlanDeviceByDeviceOutcome> QueryRecordPlanDeviceByDeviceOutcomeCallable;
			typedef std::function<void(const LinkvisualClient*, const Model::QueryRecordPlanDeviceByDeviceRequest&, const QueryRecordPlanDeviceByDeviceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryRecordPlanDeviceByDeviceAsyncHandler;
			typedef Outcome<Error, Model::QueryRecordPlanDeviceByPlanResult> QueryRecordPlanDeviceByPlanOutcome;
			typedef std::future<QueryRecordPlanDeviceByPlanOutcome> QueryRecordPlanDeviceByPlanOutcomeCallable;
			typedef std::function<void(const LinkvisualClient*, const Model::QueryRecordPlanDeviceByPlanRequest&, const QueryRecordPlanDeviceByPlanOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryRecordPlanDeviceByPlanAsyncHandler;
			typedef Outcome<Error, Model::QueryRecordPlansResult> QueryRecordPlansOutcome;
			typedef std::future<QueryRecordPlansOutcome> QueryRecordPlansOutcomeCallable;
			typedef std::function<void(const LinkvisualClient*, const Model::QueryRecordPlansRequest&, const QueryRecordPlansOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryRecordPlansAsyncHandler;
			typedef Outcome<Error, Model::QueryRecordUrlResult> QueryRecordUrlOutcome;
			typedef std::future<QueryRecordUrlOutcome> QueryRecordUrlOutcomeCallable;
			typedef std::function<void(const LinkvisualClient*, const Model::QueryRecordUrlRequest&, const QueryRecordUrlOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryRecordUrlAsyncHandler;
			typedef Outcome<Error, Model::QueryRecordUrlByTimeResult> QueryRecordUrlByTimeOutcome;
			typedef std::future<QueryRecordUrlByTimeOutcome> QueryRecordUrlByTimeOutcomeCallable;
			typedef std::function<void(const LinkvisualClient*, const Model::QueryRecordUrlByTimeRequest&, const QueryRecordUrlByTimeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryRecordUrlByTimeAsyncHandler;
			typedef Outcome<Error, Model::QueryRtmpKeyResult> QueryRtmpKeyOutcome;
			typedef std::future<QueryRtmpKeyOutcome> QueryRtmpKeyOutcomeCallable;
			typedef std::function<void(const LinkvisualClient*, const Model::QueryRtmpKeyRequest&, const QueryRtmpKeyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryRtmpKeyAsyncHandler;
			typedef Outcome<Error, Model::QueryStreamPushJobResult> QueryStreamPushJobOutcome;
			typedef std::future<QueryStreamPushJobOutcome> QueryStreamPushJobOutcomeCallable;
			typedef std::function<void(const LinkvisualClient*, const Model::QueryStreamPushJobRequest&, const QueryStreamPushJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryStreamPushJobAsyncHandler;
			typedef Outcome<Error, Model::QueryStreamPushJobListResult> QueryStreamPushJobListOutcome;
			typedef std::future<QueryStreamPushJobListOutcome> QueryStreamPushJobListOutcomeCallable;
			typedef std::function<void(const LinkvisualClient*, const Model::QueryStreamPushJobListRequest&, const QueryStreamPushJobListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryStreamPushJobListAsyncHandler;
			typedef Outcome<Error, Model::QueryStreamSnapshotJobResult> QueryStreamSnapshotJobOutcome;
			typedef std::future<QueryStreamSnapshotJobOutcome> QueryStreamSnapshotJobOutcomeCallable;
			typedef std::function<void(const LinkvisualClient*, const Model::QueryStreamSnapshotJobRequest&, const QueryStreamSnapshotJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryStreamSnapshotJobAsyncHandler;
			typedef Outcome<Error, Model::QueryTimeTemplateResult> QueryTimeTemplateOutcome;
			typedef std::future<QueryTimeTemplateOutcome> QueryTimeTemplateOutcomeCallable;
			typedef std::function<void(const LinkvisualClient*, const Model::QueryTimeTemplateRequest&, const QueryTimeTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryTimeTemplateAsyncHandler;
			typedef Outcome<Error, Model::QueryTimeTemplateDetailResult> QueryTimeTemplateDetailOutcome;
			typedef std::future<QueryTimeTemplateDetailOutcome> QueryTimeTemplateDetailOutcomeCallable;
			typedef std::function<void(const LinkvisualClient*, const Model::QueryTimeTemplateDetailRequest&, const QueryTimeTemplateDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryTimeTemplateDetailAsyncHandler;
			typedef Outcome<Error, Model::QueryVisionDeviceInfoResult> QueryVisionDeviceInfoOutcome;
			typedef std::future<QueryVisionDeviceInfoOutcome> QueryVisionDeviceInfoOutcomeCallable;
			typedef std::function<void(const LinkvisualClient*, const Model::QueryVisionDeviceInfoRequest&, const QueryVisionDeviceInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryVisionDeviceInfoAsyncHandler;
			typedef Outcome<Error, Model::QueryVoiceIntercomResult> QueryVoiceIntercomOutcome;
			typedef std::future<QueryVoiceIntercomOutcome> QueryVoiceIntercomOutcomeCallable;
			typedef std::function<void(const LinkvisualClient*, const Model::QueryVoiceIntercomRequest&, const QueryVoiceIntercomOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryVoiceIntercomAsyncHandler;
			typedef Outcome<Error, Model::RefreshGbSubDeviceListResult> RefreshGbSubDeviceListOutcome;
			typedef std::future<RefreshGbSubDeviceListOutcome> RefreshGbSubDeviceListOutcomeCallable;
			typedef std::function<void(const LinkvisualClient*, const Model::RefreshGbSubDeviceListRequest&, const RefreshGbSubDeviceListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RefreshGbSubDeviceListAsyncHandler;
			typedef Outcome<Error, Model::RemoveFaceDeviceFromDeviceGroupResult> RemoveFaceDeviceFromDeviceGroupOutcome;
			typedef std::future<RemoveFaceDeviceFromDeviceGroupOutcome> RemoveFaceDeviceFromDeviceGroupOutcomeCallable;
			typedef std::function<void(const LinkvisualClient*, const Model::RemoveFaceDeviceFromDeviceGroupRequest&, const RemoveFaceDeviceFromDeviceGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RemoveFaceDeviceFromDeviceGroupAsyncHandler;
			typedef Outcome<Error, Model::RemoveFaceUserFromUserGroupResult> RemoveFaceUserFromUserGroupOutcome;
			typedef std::future<RemoveFaceUserFromUserGroupOutcome> RemoveFaceUserFromUserGroupOutcomeCallable;
			typedef std::function<void(const LinkvisualClient*, const Model::RemoveFaceUserFromUserGroupRequest&, const RemoveFaceUserFromUserGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RemoveFaceUserFromUserGroupAsyncHandler;
			typedef Outcome<Error, Model::SetDevicePictureLifeCycleResult> SetDevicePictureLifeCycleOutcome;
			typedef std::future<SetDevicePictureLifeCycleOutcome> SetDevicePictureLifeCycleOutcomeCallable;
			typedef std::function<void(const LinkvisualClient*, const Model::SetDevicePictureLifeCycleRequest&, const SetDevicePictureLifeCycleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetDevicePictureLifeCycleAsyncHandler;
			typedef Outcome<Error, Model::SetDeviceRecordLifeCycleResult> SetDeviceRecordLifeCycleOutcome;
			typedef std::future<SetDeviceRecordLifeCycleOutcome> SetDeviceRecordLifeCycleOutcomeCallable;
			typedef std::function<void(const LinkvisualClient*, const Model::SetDeviceRecordLifeCycleRequest&, const SetDeviceRecordLifeCycleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetDeviceRecordLifeCycleAsyncHandler;
			typedef Outcome<Error, Model::StopLiveStreamingResult> StopLiveStreamingOutcome;
			typedef std::future<StopLiveStreamingOutcome> StopLiveStreamingOutcomeCallable;
			typedef std::function<void(const LinkvisualClient*, const Model::StopLiveStreamingRequest&, const StopLiveStreamingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StopLiveStreamingAsyncHandler;
			typedef Outcome<Error, Model::StopTriggeredRecordResult> StopTriggeredRecordOutcome;
			typedef std::future<StopTriggeredRecordOutcome> StopTriggeredRecordOutcomeCallable;
			typedef std::function<void(const LinkvisualClient*, const Model::StopTriggeredRecordRequest&, const StopTriggeredRecordOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StopTriggeredRecordAsyncHandler;
			typedef Outcome<Error, Model::TransferDeviceInstanceResult> TransferDeviceInstanceOutcome;
			typedef std::future<TransferDeviceInstanceOutcome> TransferDeviceInstanceOutcomeCallable;
			typedef std::function<void(const LinkvisualClient*, const Model::TransferDeviceInstanceRequest&, const TransferDeviceInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TransferDeviceInstanceAsyncHandler;
			typedef Outcome<Error, Model::TriggerCapturePictureResult> TriggerCapturePictureOutcome;
			typedef std::future<TriggerCapturePictureOutcome> TriggerCapturePictureOutcomeCallable;
			typedef std::function<void(const LinkvisualClient*, const Model::TriggerCapturePictureRequest&, const TriggerCapturePictureOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TriggerCapturePictureAsyncHandler;
			typedef Outcome<Error, Model::TriggerRecordResult> TriggerRecordOutcome;
			typedef std::future<TriggerRecordOutcome> TriggerRecordOutcomeCallable;
			typedef std::function<void(const LinkvisualClient*, const Model::TriggerRecordRequest&, const TriggerRecordOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TriggerRecordAsyncHandler;
			typedef Outcome<Error, Model::UnbindPictureSearchAppWithDevicesResult> UnbindPictureSearchAppWithDevicesOutcome;
			typedef std::future<UnbindPictureSearchAppWithDevicesOutcome> UnbindPictureSearchAppWithDevicesOutcomeCallable;
			typedef std::function<void(const LinkvisualClient*, const Model::UnbindPictureSearchAppWithDevicesRequest&, const UnbindPictureSearchAppWithDevicesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UnbindPictureSearchAppWithDevicesAsyncHandler;
			typedef Outcome<Error, Model::UpdateEventRecordPlanResult> UpdateEventRecordPlanOutcome;
			typedef std::future<UpdateEventRecordPlanOutcome> UpdateEventRecordPlanOutcomeCallable;
			typedef std::function<void(const LinkvisualClient*, const Model::UpdateEventRecordPlanRequest&, const UpdateEventRecordPlanOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateEventRecordPlanAsyncHandler;
			typedef Outcome<Error, Model::UpdateFaceUserResult> UpdateFaceUserOutcome;
			typedef std::future<UpdateFaceUserOutcome> UpdateFaceUserOutcomeCallable;
			typedef std::function<void(const LinkvisualClient*, const Model::UpdateFaceUserRequest&, const UpdateFaceUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateFaceUserAsyncHandler;
			typedef Outcome<Error, Model::UpdateFaceUserGroupAndDeviceGroupRelationResult> UpdateFaceUserGroupAndDeviceGroupRelationOutcome;
			typedef std::future<UpdateFaceUserGroupAndDeviceGroupRelationOutcome> UpdateFaceUserGroupAndDeviceGroupRelationOutcomeCallable;
			typedef std::function<void(const LinkvisualClient*, const Model::UpdateFaceUserGroupAndDeviceGroupRelationRequest&, const UpdateFaceUserGroupAndDeviceGroupRelationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateFaceUserGroupAndDeviceGroupRelationAsyncHandler;
			typedef Outcome<Error, Model::UpdateGbDeviceResult> UpdateGbDeviceOutcome;
			typedef std::future<UpdateGbDeviceOutcome> UpdateGbDeviceOutcomeCallable;
			typedef std::function<void(const LinkvisualClient*, const Model::UpdateGbDeviceRequest&, const UpdateGbDeviceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateGbDeviceAsyncHandler;
			typedef Outcome<Error, Model::UpdateInstanceInternetProtocolResult> UpdateInstanceInternetProtocolOutcome;
			typedef std::future<UpdateInstanceInternetProtocolOutcome> UpdateInstanceInternetProtocolOutcomeCallable;
			typedef std::function<void(const LinkvisualClient*, const Model::UpdateInstanceInternetProtocolRequest&, const UpdateInstanceInternetProtocolOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateInstanceInternetProtocolAsyncHandler;
			typedef Outcome<Error, Model::UpdatePictureSearchAppResult> UpdatePictureSearchAppOutcome;
			typedef std::future<UpdatePictureSearchAppOutcome> UpdatePictureSearchAppOutcomeCallable;
			typedef std::function<void(const LinkvisualClient*, const Model::UpdatePictureSearchAppRequest&, const UpdatePictureSearchAppOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdatePictureSearchAppAsyncHandler;
			typedef Outcome<Error, Model::UpdateRecordPlanResult> UpdateRecordPlanOutcome;
			typedef std::future<UpdateRecordPlanOutcome> UpdateRecordPlanOutcomeCallable;
			typedef std::function<void(const LinkvisualClient*, const Model::UpdateRecordPlanRequest&, const UpdateRecordPlanOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateRecordPlanAsyncHandler;
			typedef Outcome<Error, Model::UpdateRtmpKeyResult> UpdateRtmpKeyOutcome;
			typedef std::future<UpdateRtmpKeyOutcome> UpdateRtmpKeyOutcomeCallable;
			typedef std::function<void(const LinkvisualClient*, const Model::UpdateRtmpKeyRequest&, const UpdateRtmpKeyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateRtmpKeyAsyncHandler;
			typedef Outcome<Error, Model::UpdateTimeTemplateResult> UpdateTimeTemplateOutcome;
			typedef std::future<UpdateTimeTemplateOutcome> UpdateTimeTemplateOutcomeCallable;
			typedef std::function<void(const LinkvisualClient*, const Model::UpdateTimeTemplateRequest&, const UpdateTimeTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateTimeTemplateAsyncHandler;

			LinkvisualClient(const Credentials &credentials, const ClientConfiguration &configuration);
			LinkvisualClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			LinkvisualClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~LinkvisualClient();
			AddEventRecordPlanDeviceOutcome addEventRecordPlanDevice(const Model::AddEventRecordPlanDeviceRequest &request)const;
			void addEventRecordPlanDeviceAsync(const Model::AddEventRecordPlanDeviceRequest& request, const AddEventRecordPlanDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddEventRecordPlanDeviceOutcomeCallable addEventRecordPlanDeviceCallable(const Model::AddEventRecordPlanDeviceRequest& request) const;
			AddFaceDeviceGroupOutcome addFaceDeviceGroup(const Model::AddFaceDeviceGroupRequest &request)const;
			void addFaceDeviceGroupAsync(const Model::AddFaceDeviceGroupRequest& request, const AddFaceDeviceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddFaceDeviceGroupOutcomeCallable addFaceDeviceGroupCallable(const Model::AddFaceDeviceGroupRequest& request) const;
			AddFaceDeviceToDeviceGroupOutcome addFaceDeviceToDeviceGroup(const Model::AddFaceDeviceToDeviceGroupRequest &request)const;
			void addFaceDeviceToDeviceGroupAsync(const Model::AddFaceDeviceToDeviceGroupRequest& request, const AddFaceDeviceToDeviceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddFaceDeviceToDeviceGroupOutcomeCallable addFaceDeviceToDeviceGroupCallable(const Model::AddFaceDeviceToDeviceGroupRequest& request) const;
			AddFaceUserOutcome addFaceUser(const Model::AddFaceUserRequest &request)const;
			void addFaceUserAsync(const Model::AddFaceUserRequest& request, const AddFaceUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddFaceUserOutcomeCallable addFaceUserCallable(const Model::AddFaceUserRequest& request) const;
			AddFaceUserGroupOutcome addFaceUserGroup(const Model::AddFaceUserGroupRequest &request)const;
			void addFaceUserGroupAsync(const Model::AddFaceUserGroupRequest& request, const AddFaceUserGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddFaceUserGroupOutcomeCallable addFaceUserGroupCallable(const Model::AddFaceUserGroupRequest& request) const;
			AddFaceUserGroupAndDeviceGroupRelationOutcome addFaceUserGroupAndDeviceGroupRelation(const Model::AddFaceUserGroupAndDeviceGroupRelationRequest &request)const;
			void addFaceUserGroupAndDeviceGroupRelationAsync(const Model::AddFaceUserGroupAndDeviceGroupRelationRequest& request, const AddFaceUserGroupAndDeviceGroupRelationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddFaceUserGroupAndDeviceGroupRelationOutcomeCallable addFaceUserGroupAndDeviceGroupRelationCallable(const Model::AddFaceUserGroupAndDeviceGroupRelationRequest& request) const;
			AddFaceUserPictureOutcome addFaceUserPicture(const Model::AddFaceUserPictureRequest &request)const;
			void addFaceUserPictureAsync(const Model::AddFaceUserPictureRequest& request, const AddFaceUserPictureAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddFaceUserPictureOutcomeCallable addFaceUserPictureCallable(const Model::AddFaceUserPictureRequest& request) const;
			AddFaceUserToUserGroupOutcome addFaceUserToUserGroup(const Model::AddFaceUserToUserGroupRequest &request)const;
			void addFaceUserToUserGroupAsync(const Model::AddFaceUserToUserGroupRequest& request, const AddFaceUserToUserGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddFaceUserToUserGroupOutcomeCallable addFaceUserToUserGroupCallable(const Model::AddFaceUserToUserGroupRequest& request) const;
			AddRecordPlanDeviceOutcome addRecordPlanDevice(const Model::AddRecordPlanDeviceRequest &request)const;
			void addRecordPlanDeviceAsync(const Model::AddRecordPlanDeviceRequest& request, const AddRecordPlanDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddRecordPlanDeviceOutcomeCallable addRecordPlanDeviceCallable(const Model::AddRecordPlanDeviceRequest& request) const;
			BatchQueryVisionDeviceInfoOutcome batchQueryVisionDeviceInfo(const Model::BatchQueryVisionDeviceInfoRequest &request)const;
			void batchQueryVisionDeviceInfoAsync(const Model::BatchQueryVisionDeviceInfoRequest& request, const BatchQueryVisionDeviceInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BatchQueryVisionDeviceInfoOutcomeCallable batchQueryVisionDeviceInfoCallable(const Model::BatchQueryVisionDeviceInfoRequest& request) const;
			BindPictureSearchAppWithDevicesOutcome bindPictureSearchAppWithDevices(const Model::BindPictureSearchAppWithDevicesRequest &request)const;
			void bindPictureSearchAppWithDevicesAsync(const Model::BindPictureSearchAppWithDevicesRequest& request, const BindPictureSearchAppWithDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BindPictureSearchAppWithDevicesOutcomeCallable bindPictureSearchAppWithDevicesCallable(const Model::BindPictureSearchAppWithDevicesRequest& request) const;
			CheckFaceUserDoExistOnDeviceOutcome checkFaceUserDoExistOnDevice(const Model::CheckFaceUserDoExistOnDeviceRequest &request)const;
			void checkFaceUserDoExistOnDeviceAsync(const Model::CheckFaceUserDoExistOnDeviceRequest& request, const CheckFaceUserDoExistOnDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CheckFaceUserDoExistOnDeviceOutcomeCallable checkFaceUserDoExistOnDeviceCallable(const Model::CheckFaceUserDoExistOnDeviceRequest& request) const;
			ClearFaceDeviceDBOutcome clearFaceDeviceDB(const Model::ClearFaceDeviceDBRequest &request)const;
			void clearFaceDeviceDBAsync(const Model::ClearFaceDeviceDBRequest& request, const ClearFaceDeviceDBAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ClearFaceDeviceDBOutcomeCallable clearFaceDeviceDBCallable(const Model::ClearFaceDeviceDBRequest& request) const;
			CreateEventRecordPlanOutcome createEventRecordPlan(const Model::CreateEventRecordPlanRequest &request)const;
			void createEventRecordPlanAsync(const Model::CreateEventRecordPlanRequest& request, const CreateEventRecordPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateEventRecordPlanOutcomeCallable createEventRecordPlanCallable(const Model::CreateEventRecordPlanRequest& request) const;
			CreateGbDeviceOutcome createGbDevice(const Model::CreateGbDeviceRequest &request)const;
			void createGbDeviceAsync(const Model::CreateGbDeviceRequest& request, const CreateGbDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateGbDeviceOutcomeCallable createGbDeviceCallable(const Model::CreateGbDeviceRequest& request) const;
			CreateLocalFileUploadJobOutcome createLocalFileUploadJob(const Model::CreateLocalFileUploadJobRequest &request)const;
			void createLocalFileUploadJobAsync(const Model::CreateLocalFileUploadJobRequest& request, const CreateLocalFileUploadJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateLocalFileUploadJobOutcomeCallable createLocalFileUploadJobCallable(const Model::CreateLocalFileUploadJobRequest& request) const;
			CreateLocalRecordDownloadByTimeJobOutcome createLocalRecordDownloadByTimeJob(const Model::CreateLocalRecordDownloadByTimeJobRequest &request)const;
			void createLocalRecordDownloadByTimeJobAsync(const Model::CreateLocalRecordDownloadByTimeJobRequest& request, const CreateLocalRecordDownloadByTimeJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateLocalRecordDownloadByTimeJobOutcomeCallable createLocalRecordDownloadByTimeJobCallable(const Model::CreateLocalRecordDownloadByTimeJobRequest& request) const;
			CreatePictureSearchAppOutcome createPictureSearchApp(const Model::CreatePictureSearchAppRequest &request)const;
			void createPictureSearchAppAsync(const Model::CreatePictureSearchAppRequest& request, const CreatePictureSearchAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreatePictureSearchAppOutcomeCallable createPictureSearchAppCallable(const Model::CreatePictureSearchAppRequest& request) const;
			CreatePictureSearchJobOutcome createPictureSearchJob(const Model::CreatePictureSearchJobRequest &request)const;
			void createPictureSearchJobAsync(const Model::CreatePictureSearchJobRequest& request, const CreatePictureSearchJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreatePictureSearchJobOutcomeCallable createPictureSearchJobCallable(const Model::CreatePictureSearchJobRequest& request) const;
			CreateRecordDownloadByTimeJobOutcome createRecordDownloadByTimeJob(const Model::CreateRecordDownloadByTimeJobRequest &request)const;
			void createRecordDownloadByTimeJobAsync(const Model::CreateRecordDownloadByTimeJobRequest& request, const CreateRecordDownloadByTimeJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateRecordDownloadByTimeJobOutcomeCallable createRecordDownloadByTimeJobCallable(const Model::CreateRecordDownloadByTimeJobRequest& request) const;
			CreateRecordPlanOutcome createRecordPlan(const Model::CreateRecordPlanRequest &request)const;
			void createRecordPlanAsync(const Model::CreateRecordPlanRequest& request, const CreateRecordPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateRecordPlanOutcomeCallable createRecordPlanCallable(const Model::CreateRecordPlanRequest& request) const;
			CreateRtmpDeviceOutcome createRtmpDevice(const Model::CreateRtmpDeviceRequest &request)const;
			void createRtmpDeviceAsync(const Model::CreateRtmpDeviceRequest& request, const CreateRtmpDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateRtmpDeviceOutcomeCallable createRtmpDeviceCallable(const Model::CreateRtmpDeviceRequest& request) const;
			CreateStreamPushJobOutcome createStreamPushJob(const Model::CreateStreamPushJobRequest &request)const;
			void createStreamPushJobAsync(const Model::CreateStreamPushJobRequest& request, const CreateStreamPushJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateStreamPushJobOutcomeCallable createStreamPushJobCallable(const Model::CreateStreamPushJobRequest& request) const;
			CreateStreamSnapshotJobOutcome createStreamSnapshotJob(const Model::CreateStreamSnapshotJobRequest &request)const;
			void createStreamSnapshotJobAsync(const Model::CreateStreamSnapshotJobRequest& request, const CreateStreamSnapshotJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateStreamSnapshotJobOutcomeCallable createStreamSnapshotJobCallable(const Model::CreateStreamSnapshotJobRequest& request) const;
			CreateTimeTemplateOutcome createTimeTemplate(const Model::CreateTimeTemplateRequest &request)const;
			void createTimeTemplateAsync(const Model::CreateTimeTemplateRequest& request, const CreateTimeTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateTimeTemplateOutcomeCallable createTimeTemplateCallable(const Model::CreateTimeTemplateRequest& request) const;
			DeleteEventRecordPlanOutcome deleteEventRecordPlan(const Model::DeleteEventRecordPlanRequest &request)const;
			void deleteEventRecordPlanAsync(const Model::DeleteEventRecordPlanRequest& request, const DeleteEventRecordPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteEventRecordPlanOutcomeCallable deleteEventRecordPlanCallable(const Model::DeleteEventRecordPlanRequest& request) const;
			DeleteEventRecordPlanDeviceOutcome deleteEventRecordPlanDevice(const Model::DeleteEventRecordPlanDeviceRequest &request)const;
			void deleteEventRecordPlanDeviceAsync(const Model::DeleteEventRecordPlanDeviceRequest& request, const DeleteEventRecordPlanDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteEventRecordPlanDeviceOutcomeCallable deleteEventRecordPlanDeviceCallable(const Model::DeleteEventRecordPlanDeviceRequest& request) const;
			DeleteFaceDeviceGroupOutcome deleteFaceDeviceGroup(const Model::DeleteFaceDeviceGroupRequest &request)const;
			void deleteFaceDeviceGroupAsync(const Model::DeleteFaceDeviceGroupRequest& request, const DeleteFaceDeviceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteFaceDeviceGroupOutcomeCallable deleteFaceDeviceGroupCallable(const Model::DeleteFaceDeviceGroupRequest& request) const;
			DeleteFaceUserOutcome deleteFaceUser(const Model::DeleteFaceUserRequest &request)const;
			void deleteFaceUserAsync(const Model::DeleteFaceUserRequest& request, const DeleteFaceUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteFaceUserOutcomeCallable deleteFaceUserCallable(const Model::DeleteFaceUserRequest& request) const;
			DeleteFaceUserGroupOutcome deleteFaceUserGroup(const Model::DeleteFaceUserGroupRequest &request)const;
			void deleteFaceUserGroupAsync(const Model::DeleteFaceUserGroupRequest& request, const DeleteFaceUserGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteFaceUserGroupOutcomeCallable deleteFaceUserGroupCallable(const Model::DeleteFaceUserGroupRequest& request) const;
			DeleteFaceUserGroupAndDeviceGroupRelationOutcome deleteFaceUserGroupAndDeviceGroupRelation(const Model::DeleteFaceUserGroupAndDeviceGroupRelationRequest &request)const;
			void deleteFaceUserGroupAndDeviceGroupRelationAsync(const Model::DeleteFaceUserGroupAndDeviceGroupRelationRequest& request, const DeleteFaceUserGroupAndDeviceGroupRelationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteFaceUserGroupAndDeviceGroupRelationOutcomeCallable deleteFaceUserGroupAndDeviceGroupRelationCallable(const Model::DeleteFaceUserGroupAndDeviceGroupRelationRequest& request) const;
			DeleteFaceUserPictureOutcome deleteFaceUserPicture(const Model::DeleteFaceUserPictureRequest &request)const;
			void deleteFaceUserPictureAsync(const Model::DeleteFaceUserPictureRequest& request, const DeleteFaceUserPictureAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteFaceUserPictureOutcomeCallable deleteFaceUserPictureCallable(const Model::DeleteFaceUserPictureRequest& request) const;
			DeleteGbDeviceOutcome deleteGbDevice(const Model::DeleteGbDeviceRequest &request)const;
			void deleteGbDeviceAsync(const Model::DeleteGbDeviceRequest& request, const DeleteGbDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteGbDeviceOutcomeCallable deleteGbDeviceCallable(const Model::DeleteGbDeviceRequest& request) const;
			DeleteLocalFileUploadJobOutcome deleteLocalFileUploadJob(const Model::DeleteLocalFileUploadJobRequest &request)const;
			void deleteLocalFileUploadJobAsync(const Model::DeleteLocalFileUploadJobRequest& request, const DeleteLocalFileUploadJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteLocalFileUploadJobOutcomeCallable deleteLocalFileUploadJobCallable(const Model::DeleteLocalFileUploadJobRequest& request) const;
			DeletePictureOutcome deletePicture(const Model::DeletePictureRequest &request)const;
			void deletePictureAsync(const Model::DeletePictureRequest& request, const DeletePictureAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeletePictureOutcomeCallable deletePictureCallable(const Model::DeletePictureRequest& request) const;
			DeleteRecordOutcome deleteRecord(const Model::DeleteRecordRequest &request)const;
			void deleteRecordAsync(const Model::DeleteRecordRequest& request, const DeleteRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteRecordOutcomeCallable deleteRecordCallable(const Model::DeleteRecordRequest& request) const;
			DeleteRecordPlanOutcome deleteRecordPlan(const Model::DeleteRecordPlanRequest &request)const;
			void deleteRecordPlanAsync(const Model::DeleteRecordPlanRequest& request, const DeleteRecordPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteRecordPlanOutcomeCallable deleteRecordPlanCallable(const Model::DeleteRecordPlanRequest& request) const;
			DeleteRecordPlanDeviceOutcome deleteRecordPlanDevice(const Model::DeleteRecordPlanDeviceRequest &request)const;
			void deleteRecordPlanDeviceAsync(const Model::DeleteRecordPlanDeviceRequest& request, const DeleteRecordPlanDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteRecordPlanDeviceOutcomeCallable deleteRecordPlanDeviceCallable(const Model::DeleteRecordPlanDeviceRequest& request) const;
			DeleteRtmpDeviceOutcome deleteRtmpDevice(const Model::DeleteRtmpDeviceRequest &request)const;
			void deleteRtmpDeviceAsync(const Model::DeleteRtmpDeviceRequest& request, const DeleteRtmpDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteRtmpDeviceOutcomeCallable deleteRtmpDeviceCallable(const Model::DeleteRtmpDeviceRequest& request) const;
			DeleteRtmpKeyOutcome deleteRtmpKey(const Model::DeleteRtmpKeyRequest &request)const;
			void deleteRtmpKeyAsync(const Model::DeleteRtmpKeyRequest& request, const DeleteRtmpKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteRtmpKeyOutcomeCallable deleteRtmpKeyCallable(const Model::DeleteRtmpKeyRequest& request) const;
			DeleteStreamPushJobOutcome deleteStreamPushJob(const Model::DeleteStreamPushJobRequest &request)const;
			void deleteStreamPushJobAsync(const Model::DeleteStreamPushJobRequest& request, const DeleteStreamPushJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteStreamPushJobOutcomeCallable deleteStreamPushJobCallable(const Model::DeleteStreamPushJobRequest& request) const;
			DeleteStreamSnapshotJobOutcome deleteStreamSnapshotJob(const Model::DeleteStreamSnapshotJobRequest &request)const;
			void deleteStreamSnapshotJobAsync(const Model::DeleteStreamSnapshotJobRequest& request, const DeleteStreamSnapshotJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteStreamSnapshotJobOutcomeCallable deleteStreamSnapshotJobCallable(const Model::DeleteStreamSnapshotJobRequest& request) const;
			DeleteTimeTemplateOutcome deleteTimeTemplate(const Model::DeleteTimeTemplateRequest &request)const;
			void deleteTimeTemplateAsync(const Model::DeleteTimeTemplateRequest& request, const DeleteTimeTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteTimeTemplateOutcomeCallable deleteTimeTemplateCallable(const Model::DeleteTimeTemplateRequest& request) const;
			DetectUserFaceByUrlOutcome detectUserFaceByUrl(const Model::DetectUserFaceByUrlRequest &request)const;
			void detectUserFaceByUrlAsync(const Model::DetectUserFaceByUrlRequest& request, const DetectUserFaceByUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DetectUserFaceByUrlOutcomeCallable detectUserFaceByUrlCallable(const Model::DetectUserFaceByUrlRequest& request) const;
			EnableGbSubDeviceOutcome enableGbSubDevice(const Model::EnableGbSubDeviceRequest &request)const;
			void enableGbSubDeviceAsync(const Model::EnableGbSubDeviceRequest& request, const EnableGbSubDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EnableGbSubDeviceOutcomeCallable enableGbSubDeviceCallable(const Model::EnableGbSubDeviceRequest& request) const;
			GetPictureSearchJobStatusOutcome getPictureSearchJobStatus(const Model::GetPictureSearchJobStatusRequest &request)const;
			void getPictureSearchJobStatusAsync(const Model::GetPictureSearchJobStatusRequest& request, const GetPictureSearchJobStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetPictureSearchJobStatusOutcomeCallable getPictureSearchJobStatusCallable(const Model::GetPictureSearchJobStatusRequest& request) const;
			PictureSearchPictureOutcome pictureSearchPicture(const Model::PictureSearchPictureRequest &request)const;
			void pictureSearchPictureAsync(const Model::PictureSearchPictureRequest& request, const PictureSearchPictureAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PictureSearchPictureOutcomeCallable pictureSearchPictureCallable(const Model::PictureSearchPictureRequest& request) const;
			QueryCarProcessEventsOutcome queryCarProcessEvents(const Model::QueryCarProcessEventsRequest &request)const;
			void queryCarProcessEventsAsync(const Model::QueryCarProcessEventsRequest& request, const QueryCarProcessEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryCarProcessEventsOutcomeCallable queryCarProcessEventsCallable(const Model::QueryCarProcessEventsRequest& request) const;
			QueryDeviceEventOutcome queryDeviceEvent(const Model::QueryDeviceEventRequest &request)const;
			void queryDeviceEventAsync(const Model::QueryDeviceEventRequest& request, const QueryDeviceEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryDeviceEventOutcomeCallable queryDeviceEventCallable(const Model::QueryDeviceEventRequest& request) const;
			QueryDeviceEventPictureOutcome queryDeviceEventPicture(const Model::QueryDeviceEventPictureRequest &request)const;
			void queryDeviceEventPictureAsync(const Model::QueryDeviceEventPictureRequest& request, const QueryDeviceEventPictureAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryDeviceEventPictureOutcomeCallable queryDeviceEventPictureCallable(const Model::QueryDeviceEventPictureRequest& request) const;
			QueryDeviceEventRecordOutcome queryDeviceEventRecord(const Model::QueryDeviceEventRecordRequest &request)const;
			void queryDeviceEventRecordAsync(const Model::QueryDeviceEventRecordRequest& request, const QueryDeviceEventRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryDeviceEventRecordOutcomeCallable queryDeviceEventRecordCallable(const Model::QueryDeviceEventRecordRequest& request) const;
			QueryDevicePictureByListOutcome queryDevicePictureByList(const Model::QueryDevicePictureByListRequest &request)const;
			void queryDevicePictureByListAsync(const Model::QueryDevicePictureByListRequest& request, const QueryDevicePictureByListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryDevicePictureByListOutcomeCallable queryDevicePictureByListCallable(const Model::QueryDevicePictureByListRequest& request) const;
			QueryDevicePictureFileOutcome queryDevicePictureFile(const Model::QueryDevicePictureFileRequest &request)const;
			void queryDevicePictureFileAsync(const Model::QueryDevicePictureFileRequest& request, const QueryDevicePictureFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryDevicePictureFileOutcomeCallable queryDevicePictureFileCallable(const Model::QueryDevicePictureFileRequest& request) const;
			QueryDevicePictureLifeCycleOutcome queryDevicePictureLifeCycle(const Model::QueryDevicePictureLifeCycleRequest &request)const;
			void queryDevicePictureLifeCycleAsync(const Model::QueryDevicePictureLifeCycleRequest& request, const QueryDevicePictureLifeCycleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryDevicePictureLifeCycleOutcomeCallable queryDevicePictureLifeCycleCallable(const Model::QueryDevicePictureLifeCycleRequest& request) const;
			QueryDeviceRecordLifeCycleOutcome queryDeviceRecordLifeCycle(const Model::QueryDeviceRecordLifeCycleRequest &request)const;
			void queryDeviceRecordLifeCycleAsync(const Model::QueryDeviceRecordLifeCycleRequest& request, const QueryDeviceRecordLifeCycleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryDeviceRecordLifeCycleOutcomeCallable queryDeviceRecordLifeCycleCallable(const Model::QueryDeviceRecordLifeCycleRequest& request) const;
			QueryDeviceVodUrlOutcome queryDeviceVodUrl(const Model::QueryDeviceVodUrlRequest &request)const;
			void queryDeviceVodUrlAsync(const Model::QueryDeviceVodUrlRequest& request, const QueryDeviceVodUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryDeviceVodUrlOutcomeCallable queryDeviceVodUrlCallable(const Model::QueryDeviceVodUrlRequest& request) const;
			QueryDeviceVodUrlByTimeOutcome queryDeviceVodUrlByTime(const Model::QueryDeviceVodUrlByTimeRequest &request)const;
			void queryDeviceVodUrlByTimeAsync(const Model::QueryDeviceVodUrlByTimeRequest& request, const QueryDeviceVodUrlByTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryDeviceVodUrlByTimeOutcomeCallable queryDeviceVodUrlByTimeCallable(const Model::QueryDeviceVodUrlByTimeRequest& request) const;
			QueryEventRecordPlanDetailOutcome queryEventRecordPlanDetail(const Model::QueryEventRecordPlanDetailRequest &request)const;
			void queryEventRecordPlanDetailAsync(const Model::QueryEventRecordPlanDetailRequest& request, const QueryEventRecordPlanDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryEventRecordPlanDetailOutcomeCallable queryEventRecordPlanDetailCallable(const Model::QueryEventRecordPlanDetailRequest& request) const;
			QueryEventRecordPlanDeviceByDeviceOutcome queryEventRecordPlanDeviceByDevice(const Model::QueryEventRecordPlanDeviceByDeviceRequest &request)const;
			void queryEventRecordPlanDeviceByDeviceAsync(const Model::QueryEventRecordPlanDeviceByDeviceRequest& request, const QueryEventRecordPlanDeviceByDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryEventRecordPlanDeviceByDeviceOutcomeCallable queryEventRecordPlanDeviceByDeviceCallable(const Model::QueryEventRecordPlanDeviceByDeviceRequest& request) const;
			QueryEventRecordPlanDeviceByPlanOutcome queryEventRecordPlanDeviceByPlan(const Model::QueryEventRecordPlanDeviceByPlanRequest &request)const;
			void queryEventRecordPlanDeviceByPlanAsync(const Model::QueryEventRecordPlanDeviceByPlanRequest& request, const QueryEventRecordPlanDeviceByPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryEventRecordPlanDeviceByPlanOutcomeCallable queryEventRecordPlanDeviceByPlanCallable(const Model::QueryEventRecordPlanDeviceByPlanRequest& request) const;
			QueryEventRecordPlansOutcome queryEventRecordPlans(const Model::QueryEventRecordPlansRequest &request)const;
			void queryEventRecordPlansAsync(const Model::QueryEventRecordPlansRequest& request, const QueryEventRecordPlansAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryEventRecordPlansOutcomeCallable queryEventRecordPlansCallable(const Model::QueryEventRecordPlansRequest& request) const;
			QueryFaceAllDeviceGroupOutcome queryFaceAllDeviceGroup(const Model::QueryFaceAllDeviceGroupRequest &request)const;
			void queryFaceAllDeviceGroupAsync(const Model::QueryFaceAllDeviceGroupRequest& request, const QueryFaceAllDeviceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryFaceAllDeviceGroupOutcomeCallable queryFaceAllDeviceGroupCallable(const Model::QueryFaceAllDeviceGroupRequest& request) const;
			QueryFaceAllUserGroupOutcome queryFaceAllUserGroup(const Model::QueryFaceAllUserGroupRequest &request)const;
			void queryFaceAllUserGroupAsync(const Model::QueryFaceAllUserGroupRequest& request, const QueryFaceAllUserGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryFaceAllUserGroupOutcomeCallable queryFaceAllUserGroupCallable(const Model::QueryFaceAllUserGroupRequest& request) const;
			QueryFaceAllUserGroupAndDeviceGroupRelationOutcome queryFaceAllUserGroupAndDeviceGroupRelation(const Model::QueryFaceAllUserGroupAndDeviceGroupRelationRequest &request)const;
			void queryFaceAllUserGroupAndDeviceGroupRelationAsync(const Model::QueryFaceAllUserGroupAndDeviceGroupRelationRequest& request, const QueryFaceAllUserGroupAndDeviceGroupRelationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryFaceAllUserGroupAndDeviceGroupRelationOutcomeCallable queryFaceAllUserGroupAndDeviceGroupRelationCallable(const Model::QueryFaceAllUserGroupAndDeviceGroupRelationRequest& request) const;
			QueryFaceAllUserIdsByGroupIdOutcome queryFaceAllUserIdsByGroupId(const Model::QueryFaceAllUserIdsByGroupIdRequest &request)const;
			void queryFaceAllUserIdsByGroupIdAsync(const Model::QueryFaceAllUserIdsByGroupIdRequest& request, const QueryFaceAllUserIdsByGroupIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryFaceAllUserIdsByGroupIdOutcomeCallable queryFaceAllUserIdsByGroupIdCallable(const Model::QueryFaceAllUserIdsByGroupIdRequest& request) const;
			QueryFaceCustomUserIdByUserIdOutcome queryFaceCustomUserIdByUserId(const Model::QueryFaceCustomUserIdByUserIdRequest &request)const;
			void queryFaceCustomUserIdByUserIdAsync(const Model::QueryFaceCustomUserIdByUserIdRequest& request, const QueryFaceCustomUserIdByUserIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryFaceCustomUserIdByUserIdOutcomeCallable queryFaceCustomUserIdByUserIdCallable(const Model::QueryFaceCustomUserIdByUserIdRequest& request) const;
			QueryFaceDeviceGroupsByDeviceOutcome queryFaceDeviceGroupsByDevice(const Model::QueryFaceDeviceGroupsByDeviceRequest &request)const;
			void queryFaceDeviceGroupsByDeviceAsync(const Model::QueryFaceDeviceGroupsByDeviceRequest& request, const QueryFaceDeviceGroupsByDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryFaceDeviceGroupsByDeviceOutcomeCallable queryFaceDeviceGroupsByDeviceCallable(const Model::QueryFaceDeviceGroupsByDeviceRequest& request) const;
			QueryFaceUserOutcome queryFaceUser(const Model::QueryFaceUserRequest &request)const;
			void queryFaceUserAsync(const Model::QueryFaceUserRequest& request, const QueryFaceUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryFaceUserOutcomeCallable queryFaceUserCallable(const Model::QueryFaceUserRequest& request) const;
			QueryFaceUserBatchOutcome queryFaceUserBatch(const Model::QueryFaceUserBatchRequest &request)const;
			void queryFaceUserBatchAsync(const Model::QueryFaceUserBatchRequest& request, const QueryFaceUserBatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryFaceUserBatchOutcomeCallable queryFaceUserBatchCallable(const Model::QueryFaceUserBatchRequest& request) const;
			QueryFaceUserByNameOutcome queryFaceUserByName(const Model::QueryFaceUserByNameRequest &request)const;
			void queryFaceUserByNameAsync(const Model::QueryFaceUserByNameRequest& request, const QueryFaceUserByNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryFaceUserByNameOutcomeCallable queryFaceUserByNameCallable(const Model::QueryFaceUserByNameRequest& request) const;
			QueryFaceUserGroupOutcome queryFaceUserGroup(const Model::QueryFaceUserGroupRequest &request)const;
			void queryFaceUserGroupAsync(const Model::QueryFaceUserGroupRequest& request, const QueryFaceUserGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryFaceUserGroupOutcomeCallable queryFaceUserGroupCallable(const Model::QueryFaceUserGroupRequest& request) const;
			QueryFaceUserGroupAndDeviceGroupRelationOutcome queryFaceUserGroupAndDeviceGroupRelation(const Model::QueryFaceUserGroupAndDeviceGroupRelationRequest &request)const;
			void queryFaceUserGroupAndDeviceGroupRelationAsync(const Model::QueryFaceUserGroupAndDeviceGroupRelationRequest& request, const QueryFaceUserGroupAndDeviceGroupRelationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryFaceUserGroupAndDeviceGroupRelationOutcomeCallable queryFaceUserGroupAndDeviceGroupRelationCallable(const Model::QueryFaceUserGroupAndDeviceGroupRelationRequest& request) const;
			QueryFaceUserIdByCustomUserIdOutcome queryFaceUserIdByCustomUserId(const Model::QueryFaceUserIdByCustomUserIdRequest &request)const;
			void queryFaceUserIdByCustomUserIdAsync(const Model::QueryFaceUserIdByCustomUserIdRequest& request, const QueryFaceUserIdByCustomUserIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryFaceUserIdByCustomUserIdOutcomeCallable queryFaceUserIdByCustomUserIdCallable(const Model::QueryFaceUserIdByCustomUserIdRequest& request) const;
			QueryGbSubDeviceListOutcome queryGbSubDeviceList(const Model::QueryGbSubDeviceListRequest &request)const;
			void queryGbSubDeviceListAsync(const Model::QueryGbSubDeviceListRequest& request, const QueryGbSubDeviceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryGbSubDeviceListOutcomeCallable queryGbSubDeviceListCallable(const Model::QueryGbSubDeviceListRequest& request) const;
			QueryLiveStreamingOutcome queryLiveStreaming(const Model::QueryLiveStreamingRequest &request)const;
			void queryLiveStreamingAsync(const Model::QueryLiveStreamingRequest& request, const QueryLiveStreamingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryLiveStreamingOutcomeCallable queryLiveStreamingCallable(const Model::QueryLiveStreamingRequest& request) const;
			QueryLocalFileUploadJobOutcome queryLocalFileUploadJob(const Model::QueryLocalFileUploadJobRequest &request)const;
			void queryLocalFileUploadJobAsync(const Model::QueryLocalFileUploadJobRequest& request, const QueryLocalFileUploadJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryLocalFileUploadJobOutcomeCallable queryLocalFileUploadJobCallable(const Model::QueryLocalFileUploadJobRequest& request) const;
			QueryMonthRecordOutcome queryMonthRecord(const Model::QueryMonthRecordRequest &request)const;
			void queryMonthRecordAsync(const Model::QueryMonthRecordRequest& request, const QueryMonthRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryMonthRecordOutcomeCallable queryMonthRecordCallable(const Model::QueryMonthRecordRequest& request) const;
			QueryPictureFilesOutcome queryPictureFiles(const Model::QueryPictureFilesRequest &request)const;
			void queryPictureFilesAsync(const Model::QueryPictureFilesRequest& request, const QueryPictureFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryPictureFilesOutcomeCallable queryPictureFilesCallable(const Model::QueryPictureFilesRequest& request) const;
			QueryPictureSearchAiboxesOutcome queryPictureSearchAiboxes(const Model::QueryPictureSearchAiboxesRequest &request)const;
			void queryPictureSearchAiboxesAsync(const Model::QueryPictureSearchAiboxesRequest& request, const QueryPictureSearchAiboxesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryPictureSearchAiboxesOutcomeCallable queryPictureSearchAiboxesCallable(const Model::QueryPictureSearchAiboxesRequest& request) const;
			QueryPictureSearchAppsOutcome queryPictureSearchApps(const Model::QueryPictureSearchAppsRequest &request)const;
			void queryPictureSearchAppsAsync(const Model::QueryPictureSearchAppsRequest& request, const QueryPictureSearchAppsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryPictureSearchAppsOutcomeCallable queryPictureSearchAppsCallable(const Model::QueryPictureSearchAppsRequest& request) const;
			QueryPictureSearchDevicesOutcome queryPictureSearchDevices(const Model::QueryPictureSearchDevicesRequest &request)const;
			void queryPictureSearchDevicesAsync(const Model::QueryPictureSearchDevicesRequest& request, const QueryPictureSearchDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryPictureSearchDevicesOutcomeCallable queryPictureSearchDevicesCallable(const Model::QueryPictureSearchDevicesRequest& request) const;
			QueryPictureSearchJobOutcome queryPictureSearchJob(const Model::QueryPictureSearchJobRequest &request)const;
			void queryPictureSearchJobAsync(const Model::QueryPictureSearchJobRequest& request, const QueryPictureSearchJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryPictureSearchJobOutcomeCallable queryPictureSearchJobCallable(const Model::QueryPictureSearchJobRequest& request) const;
			QueryPictureSearchJobResultOutcome queryPictureSearchJobResult(const Model::QueryPictureSearchJobResultRequest &request)const;
			void queryPictureSearchJobResultAsync(const Model::QueryPictureSearchJobResultRequest& request, const QueryPictureSearchJobResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryPictureSearchJobResultOutcomeCallable queryPictureSearchJobResultCallable(const Model::QueryPictureSearchJobResultRequest& request) const;
			QueryRecordOutcome queryRecord(const Model::QueryRecordRequest &request)const;
			void queryRecordAsync(const Model::QueryRecordRequest& request, const QueryRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryRecordOutcomeCallable queryRecordCallable(const Model::QueryRecordRequest& request) const;
			QueryRecordByRecordIdOutcome queryRecordByRecordId(const Model::QueryRecordByRecordIdRequest &request)const;
			void queryRecordByRecordIdAsync(const Model::QueryRecordByRecordIdRequest& request, const QueryRecordByRecordIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryRecordByRecordIdOutcomeCallable queryRecordByRecordIdCallable(const Model::QueryRecordByRecordIdRequest& request) const;
			QueryRecordDownloadJobByIdOutcome queryRecordDownloadJobById(const Model::QueryRecordDownloadJobByIdRequest &request)const;
			void queryRecordDownloadJobByIdAsync(const Model::QueryRecordDownloadJobByIdRequest& request, const QueryRecordDownloadJobByIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryRecordDownloadJobByIdOutcomeCallable queryRecordDownloadJobByIdCallable(const Model::QueryRecordDownloadJobByIdRequest& request) const;
			QueryRecordDownloadJobListOutcome queryRecordDownloadJobList(const Model::QueryRecordDownloadJobListRequest &request)const;
			void queryRecordDownloadJobListAsync(const Model::QueryRecordDownloadJobListRequest& request, const QueryRecordDownloadJobListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryRecordDownloadJobListOutcomeCallable queryRecordDownloadJobListCallable(const Model::QueryRecordDownloadJobListRequest& request) const;
			QueryRecordDownloadUrlOutcome queryRecordDownloadUrl(const Model::QueryRecordDownloadUrlRequest &request)const;
			void queryRecordDownloadUrlAsync(const Model::QueryRecordDownloadUrlRequest& request, const QueryRecordDownloadUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryRecordDownloadUrlOutcomeCallable queryRecordDownloadUrlCallable(const Model::QueryRecordDownloadUrlRequest& request) const;
			QueryRecordPlanDetailOutcome queryRecordPlanDetail(const Model::QueryRecordPlanDetailRequest &request)const;
			void queryRecordPlanDetailAsync(const Model::QueryRecordPlanDetailRequest& request, const QueryRecordPlanDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryRecordPlanDetailOutcomeCallable queryRecordPlanDetailCallable(const Model::QueryRecordPlanDetailRequest& request) const;
			QueryRecordPlanDeviceByDeviceOutcome queryRecordPlanDeviceByDevice(const Model::QueryRecordPlanDeviceByDeviceRequest &request)const;
			void queryRecordPlanDeviceByDeviceAsync(const Model::QueryRecordPlanDeviceByDeviceRequest& request, const QueryRecordPlanDeviceByDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryRecordPlanDeviceByDeviceOutcomeCallable queryRecordPlanDeviceByDeviceCallable(const Model::QueryRecordPlanDeviceByDeviceRequest& request) const;
			QueryRecordPlanDeviceByPlanOutcome queryRecordPlanDeviceByPlan(const Model::QueryRecordPlanDeviceByPlanRequest &request)const;
			void queryRecordPlanDeviceByPlanAsync(const Model::QueryRecordPlanDeviceByPlanRequest& request, const QueryRecordPlanDeviceByPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryRecordPlanDeviceByPlanOutcomeCallable queryRecordPlanDeviceByPlanCallable(const Model::QueryRecordPlanDeviceByPlanRequest& request) const;
			QueryRecordPlansOutcome queryRecordPlans(const Model::QueryRecordPlansRequest &request)const;
			void queryRecordPlansAsync(const Model::QueryRecordPlansRequest& request, const QueryRecordPlansAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryRecordPlansOutcomeCallable queryRecordPlansCallable(const Model::QueryRecordPlansRequest& request) const;
			QueryRecordUrlOutcome queryRecordUrl(const Model::QueryRecordUrlRequest &request)const;
			void queryRecordUrlAsync(const Model::QueryRecordUrlRequest& request, const QueryRecordUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryRecordUrlOutcomeCallable queryRecordUrlCallable(const Model::QueryRecordUrlRequest& request) const;
			QueryRecordUrlByTimeOutcome queryRecordUrlByTime(const Model::QueryRecordUrlByTimeRequest &request)const;
			void queryRecordUrlByTimeAsync(const Model::QueryRecordUrlByTimeRequest& request, const QueryRecordUrlByTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryRecordUrlByTimeOutcomeCallable queryRecordUrlByTimeCallable(const Model::QueryRecordUrlByTimeRequest& request) const;
			QueryRtmpKeyOutcome queryRtmpKey(const Model::QueryRtmpKeyRequest &request)const;
			void queryRtmpKeyAsync(const Model::QueryRtmpKeyRequest& request, const QueryRtmpKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryRtmpKeyOutcomeCallable queryRtmpKeyCallable(const Model::QueryRtmpKeyRequest& request) const;
			QueryStreamPushJobOutcome queryStreamPushJob(const Model::QueryStreamPushJobRequest &request)const;
			void queryStreamPushJobAsync(const Model::QueryStreamPushJobRequest& request, const QueryStreamPushJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryStreamPushJobOutcomeCallable queryStreamPushJobCallable(const Model::QueryStreamPushJobRequest& request) const;
			QueryStreamPushJobListOutcome queryStreamPushJobList(const Model::QueryStreamPushJobListRequest &request)const;
			void queryStreamPushJobListAsync(const Model::QueryStreamPushJobListRequest& request, const QueryStreamPushJobListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryStreamPushJobListOutcomeCallable queryStreamPushJobListCallable(const Model::QueryStreamPushJobListRequest& request) const;
			QueryStreamSnapshotJobOutcome queryStreamSnapshotJob(const Model::QueryStreamSnapshotJobRequest &request)const;
			void queryStreamSnapshotJobAsync(const Model::QueryStreamSnapshotJobRequest& request, const QueryStreamSnapshotJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryStreamSnapshotJobOutcomeCallable queryStreamSnapshotJobCallable(const Model::QueryStreamSnapshotJobRequest& request) const;
			QueryTimeTemplateOutcome queryTimeTemplate(const Model::QueryTimeTemplateRequest &request)const;
			void queryTimeTemplateAsync(const Model::QueryTimeTemplateRequest& request, const QueryTimeTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryTimeTemplateOutcomeCallable queryTimeTemplateCallable(const Model::QueryTimeTemplateRequest& request) const;
			QueryTimeTemplateDetailOutcome queryTimeTemplateDetail(const Model::QueryTimeTemplateDetailRequest &request)const;
			void queryTimeTemplateDetailAsync(const Model::QueryTimeTemplateDetailRequest& request, const QueryTimeTemplateDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryTimeTemplateDetailOutcomeCallable queryTimeTemplateDetailCallable(const Model::QueryTimeTemplateDetailRequest& request) const;
			QueryVisionDeviceInfoOutcome queryVisionDeviceInfo(const Model::QueryVisionDeviceInfoRequest &request)const;
			void queryVisionDeviceInfoAsync(const Model::QueryVisionDeviceInfoRequest& request, const QueryVisionDeviceInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryVisionDeviceInfoOutcomeCallable queryVisionDeviceInfoCallable(const Model::QueryVisionDeviceInfoRequest& request) const;
			QueryVoiceIntercomOutcome queryVoiceIntercom(const Model::QueryVoiceIntercomRequest &request)const;
			void queryVoiceIntercomAsync(const Model::QueryVoiceIntercomRequest& request, const QueryVoiceIntercomAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryVoiceIntercomOutcomeCallable queryVoiceIntercomCallable(const Model::QueryVoiceIntercomRequest& request) const;
			RefreshGbSubDeviceListOutcome refreshGbSubDeviceList(const Model::RefreshGbSubDeviceListRequest &request)const;
			void refreshGbSubDeviceListAsync(const Model::RefreshGbSubDeviceListRequest& request, const RefreshGbSubDeviceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RefreshGbSubDeviceListOutcomeCallable refreshGbSubDeviceListCallable(const Model::RefreshGbSubDeviceListRequest& request) const;
			RemoveFaceDeviceFromDeviceGroupOutcome removeFaceDeviceFromDeviceGroup(const Model::RemoveFaceDeviceFromDeviceGroupRequest &request)const;
			void removeFaceDeviceFromDeviceGroupAsync(const Model::RemoveFaceDeviceFromDeviceGroupRequest& request, const RemoveFaceDeviceFromDeviceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RemoveFaceDeviceFromDeviceGroupOutcomeCallable removeFaceDeviceFromDeviceGroupCallable(const Model::RemoveFaceDeviceFromDeviceGroupRequest& request) const;
			RemoveFaceUserFromUserGroupOutcome removeFaceUserFromUserGroup(const Model::RemoveFaceUserFromUserGroupRequest &request)const;
			void removeFaceUserFromUserGroupAsync(const Model::RemoveFaceUserFromUserGroupRequest& request, const RemoveFaceUserFromUserGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RemoveFaceUserFromUserGroupOutcomeCallable removeFaceUserFromUserGroupCallable(const Model::RemoveFaceUserFromUserGroupRequest& request) const;
			SetDevicePictureLifeCycleOutcome setDevicePictureLifeCycle(const Model::SetDevicePictureLifeCycleRequest &request)const;
			void setDevicePictureLifeCycleAsync(const Model::SetDevicePictureLifeCycleRequest& request, const SetDevicePictureLifeCycleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetDevicePictureLifeCycleOutcomeCallable setDevicePictureLifeCycleCallable(const Model::SetDevicePictureLifeCycleRequest& request) const;
			SetDeviceRecordLifeCycleOutcome setDeviceRecordLifeCycle(const Model::SetDeviceRecordLifeCycleRequest &request)const;
			void setDeviceRecordLifeCycleAsync(const Model::SetDeviceRecordLifeCycleRequest& request, const SetDeviceRecordLifeCycleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetDeviceRecordLifeCycleOutcomeCallable setDeviceRecordLifeCycleCallable(const Model::SetDeviceRecordLifeCycleRequest& request) const;
			StopLiveStreamingOutcome stopLiveStreaming(const Model::StopLiveStreamingRequest &request)const;
			void stopLiveStreamingAsync(const Model::StopLiveStreamingRequest& request, const StopLiveStreamingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StopLiveStreamingOutcomeCallable stopLiveStreamingCallable(const Model::StopLiveStreamingRequest& request) const;
			StopTriggeredRecordOutcome stopTriggeredRecord(const Model::StopTriggeredRecordRequest &request)const;
			void stopTriggeredRecordAsync(const Model::StopTriggeredRecordRequest& request, const StopTriggeredRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StopTriggeredRecordOutcomeCallable stopTriggeredRecordCallable(const Model::StopTriggeredRecordRequest& request) const;
			TransferDeviceInstanceOutcome transferDeviceInstance(const Model::TransferDeviceInstanceRequest &request)const;
			void transferDeviceInstanceAsync(const Model::TransferDeviceInstanceRequest& request, const TransferDeviceInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TransferDeviceInstanceOutcomeCallable transferDeviceInstanceCallable(const Model::TransferDeviceInstanceRequest& request) const;
			TriggerCapturePictureOutcome triggerCapturePicture(const Model::TriggerCapturePictureRequest &request)const;
			void triggerCapturePictureAsync(const Model::TriggerCapturePictureRequest& request, const TriggerCapturePictureAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TriggerCapturePictureOutcomeCallable triggerCapturePictureCallable(const Model::TriggerCapturePictureRequest& request) const;
			TriggerRecordOutcome triggerRecord(const Model::TriggerRecordRequest &request)const;
			void triggerRecordAsync(const Model::TriggerRecordRequest& request, const TriggerRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TriggerRecordOutcomeCallable triggerRecordCallable(const Model::TriggerRecordRequest& request) const;
			UnbindPictureSearchAppWithDevicesOutcome unbindPictureSearchAppWithDevices(const Model::UnbindPictureSearchAppWithDevicesRequest &request)const;
			void unbindPictureSearchAppWithDevicesAsync(const Model::UnbindPictureSearchAppWithDevicesRequest& request, const UnbindPictureSearchAppWithDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UnbindPictureSearchAppWithDevicesOutcomeCallable unbindPictureSearchAppWithDevicesCallable(const Model::UnbindPictureSearchAppWithDevicesRequest& request) const;
			UpdateEventRecordPlanOutcome updateEventRecordPlan(const Model::UpdateEventRecordPlanRequest &request)const;
			void updateEventRecordPlanAsync(const Model::UpdateEventRecordPlanRequest& request, const UpdateEventRecordPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateEventRecordPlanOutcomeCallable updateEventRecordPlanCallable(const Model::UpdateEventRecordPlanRequest& request) const;
			UpdateFaceUserOutcome updateFaceUser(const Model::UpdateFaceUserRequest &request)const;
			void updateFaceUserAsync(const Model::UpdateFaceUserRequest& request, const UpdateFaceUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateFaceUserOutcomeCallable updateFaceUserCallable(const Model::UpdateFaceUserRequest& request) const;
			UpdateFaceUserGroupAndDeviceGroupRelationOutcome updateFaceUserGroupAndDeviceGroupRelation(const Model::UpdateFaceUserGroupAndDeviceGroupRelationRequest &request)const;
			void updateFaceUserGroupAndDeviceGroupRelationAsync(const Model::UpdateFaceUserGroupAndDeviceGroupRelationRequest& request, const UpdateFaceUserGroupAndDeviceGroupRelationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateFaceUserGroupAndDeviceGroupRelationOutcomeCallable updateFaceUserGroupAndDeviceGroupRelationCallable(const Model::UpdateFaceUserGroupAndDeviceGroupRelationRequest& request) const;
			UpdateGbDeviceOutcome updateGbDevice(const Model::UpdateGbDeviceRequest &request)const;
			void updateGbDeviceAsync(const Model::UpdateGbDeviceRequest& request, const UpdateGbDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateGbDeviceOutcomeCallable updateGbDeviceCallable(const Model::UpdateGbDeviceRequest& request) const;
			UpdateInstanceInternetProtocolOutcome updateInstanceInternetProtocol(const Model::UpdateInstanceInternetProtocolRequest &request)const;
			void updateInstanceInternetProtocolAsync(const Model::UpdateInstanceInternetProtocolRequest& request, const UpdateInstanceInternetProtocolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateInstanceInternetProtocolOutcomeCallable updateInstanceInternetProtocolCallable(const Model::UpdateInstanceInternetProtocolRequest& request) const;
			UpdatePictureSearchAppOutcome updatePictureSearchApp(const Model::UpdatePictureSearchAppRequest &request)const;
			void updatePictureSearchAppAsync(const Model::UpdatePictureSearchAppRequest& request, const UpdatePictureSearchAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdatePictureSearchAppOutcomeCallable updatePictureSearchAppCallable(const Model::UpdatePictureSearchAppRequest& request) const;
			UpdateRecordPlanOutcome updateRecordPlan(const Model::UpdateRecordPlanRequest &request)const;
			void updateRecordPlanAsync(const Model::UpdateRecordPlanRequest& request, const UpdateRecordPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateRecordPlanOutcomeCallable updateRecordPlanCallable(const Model::UpdateRecordPlanRequest& request) const;
			UpdateRtmpKeyOutcome updateRtmpKey(const Model::UpdateRtmpKeyRequest &request)const;
			void updateRtmpKeyAsync(const Model::UpdateRtmpKeyRequest& request, const UpdateRtmpKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateRtmpKeyOutcomeCallable updateRtmpKeyCallable(const Model::UpdateRtmpKeyRequest& request) const;
			UpdateTimeTemplateOutcome updateTimeTemplate(const Model::UpdateTimeTemplateRequest &request)const;
			void updateTimeTemplateAsync(const Model::UpdateTimeTemplateRequest& request, const UpdateTimeTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateTimeTemplateOutcomeCallable updateTimeTemplateCallable(const Model::UpdateTimeTemplateRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_LINKVISUAL_LINKVISUALCLIENT_H_
