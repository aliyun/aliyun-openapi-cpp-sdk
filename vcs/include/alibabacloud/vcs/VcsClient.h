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

#ifndef ALIBABACLOUD_VCS_VCSCLIENT_H_
#define ALIBABACLOUD_VCS_VCSCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "VcsExport.h"
#include "model/AddDataSourceRequest.h"
#include "model/AddDataSourceResult.h"
#include "model/AddDeviceRequest.h"
#include "model/AddDeviceResult.h"
#include "model/AddMonitorRequest.h"
#include "model/AddMonitorResult.h"
#include "model/AddProfileRequest.h"
#include "model/AddProfileResult.h"
#include "model/AddProfileCatalogRequest.h"
#include "model/AddProfileCatalogResult.h"
#include "model/BindCorpGroupRequest.h"
#include "model/BindCorpGroupResult.h"
#include "model/BindPersonRequest.h"
#include "model/BindPersonResult.h"
#include "model/BindUserRequest.h"
#include "model/BindUserResult.h"
#include "model/CreateCorpRequest.h"
#include "model/CreateCorpResult.h"
#include "model/CreateCorpGroupRequest.h"
#include "model/CreateCorpGroupResult.h"
#include "model/CreateUserRequest.h"
#include "model/CreateUserResult.h"
#include "model/CreateUserGroupRequest.h"
#include "model/CreateUserGroupResult.h"
#include "model/CreateVideoComposeTaskRequest.h"
#include "model/CreateVideoComposeTaskResult.h"
#include "model/CreateVideoSummaryTaskRequest.h"
#include "model/CreateVideoSummaryTaskResult.h"
#include "model/DeleteCorpGroupRequest.h"
#include "model/DeleteCorpGroupResult.h"
#include "model/DeleteDataSourceRequest.h"
#include "model/DeleteDataSourceResult.h"
#include "model/DeleteDeviceRequest.h"
#include "model/DeleteDeviceResult.h"
#include "model/DeleteProfileRequest.h"
#include "model/DeleteProfileResult.h"
#include "model/DeleteProfileCatalogRequest.h"
#include "model/DeleteProfileCatalogResult.h"
#include "model/DeleteRecordsRequest.h"
#include "model/DeleteRecordsResult.h"
#include "model/DeleteUserRequest.h"
#include "model/DeleteUserResult.h"
#include "model/DeleteUserGroupRequest.h"
#include "model/DeleteUserGroupResult.h"
#include "model/DeleteVideoSummaryTaskRequest.h"
#include "model/DeleteVideoSummaryTaskResult.h"
#include "model/DescribeDevicesRequest.h"
#include "model/DescribeDevicesResult.h"
#include "model/GetBodyOptionsRequest.h"
#include "model/GetBodyOptionsResult.h"
#include "model/GetCatalogListRequest.h"
#include "model/GetCatalogListResult.h"
#include "model/GetDeviceConfigRequest.h"
#include "model/GetDeviceConfigResult.h"
#include "model/GetDeviceLiveUrlRequest.h"
#include "model/GetDeviceLiveUrlResult.h"
#include "model/GetDeviceVideoUrlRequest.h"
#include "model/GetDeviceVideoUrlResult.h"
#include "model/GetFaceModelResultRequest.h"
#include "model/GetFaceModelResultResult.h"
#include "model/GetFaceOptionsRequest.h"
#include "model/GetFaceOptionsResult.h"
#include "model/GetInventoryRequest.h"
#include "model/GetInventoryResult.h"
#include "model/GetMonitorListRequest.h"
#include "model/GetMonitorListResult.h"
#include "model/GetMonitorResultRequest.h"
#include "model/GetMonitorResultResult.h"
#include "model/GetPersonDetailRequest.h"
#include "model/GetPersonDetailResult.h"
#include "model/GetPersonListRequest.h"
#include "model/GetPersonListResult.h"
#include "model/GetProfileDetailRequest.h"
#include "model/GetProfileDetailResult.h"
#include "model/GetProfileListRequest.h"
#include "model/GetProfileListResult.h"
#include "model/GetUserDetailRequest.h"
#include "model/GetUserDetailResult.h"
#include "model/GetVideoComposeResultRequest.h"
#include "model/GetVideoComposeResultResult.h"
#include "model/GetVideoSummaryTaskResultRequest.h"
#include "model/GetVideoSummaryTaskResultResult.h"
#include "model/InvokeMotorModelRequest.h"
#include "model/InvokeMotorModelResult.h"
#include "model/ListBodyAlgorithmResultsRequest.h"
#include "model/ListBodyAlgorithmResultsResult.h"
#include "model/ListCorpGroupMetricsRequest.h"
#include "model/ListCorpGroupMetricsResult.h"
#include "model/ListCorpGroupsRequest.h"
#include "model/ListCorpGroupsResult.h"
#include "model/ListCorpMetricsRequest.h"
#include "model/ListCorpMetricsResult.h"
#include "model/ListCorpsRequest.h"
#include "model/ListCorpsResult.h"
#include "model/ListDeviceGroupsRequest.h"
#include "model/ListDeviceGroupsResult.h"
#include "model/ListDevicesRequest.h"
#include "model/ListDevicesResult.h"
#include "model/ListEventAlgorithmDetailsRequest.h"
#include "model/ListEventAlgorithmDetailsResult.h"
#include "model/ListEventAlgorithmResultsRequest.h"
#include "model/ListEventAlgorithmResultsResult.h"
#include "model/ListFaceAlgorithmResultsRequest.h"
#include "model/ListFaceAlgorithmResultsResult.h"
#include "model/ListMetricsRequest.h"
#include "model/ListMetricsResult.h"
#include "model/ListMotorAlgorithmResultsRequest.h"
#include "model/ListMotorAlgorithmResultsResult.h"
#include "model/ListPersonTraceRequest.h"
#include "model/ListPersonTraceResult.h"
#include "model/ListPersonTraceDetailsRequest.h"
#include "model/ListPersonTraceDetailsResult.h"
#include "model/ListPersonVisitCountRequest.h"
#include "model/ListPersonVisitCountResult.h"
#include "model/ListPersonsRequest.h"
#include "model/ListPersonsResult.h"
#include "model/ListSubscribeDeviceRequest.h"
#include "model/ListSubscribeDeviceResult.h"
#include "model/ListUserGroupsRequest.h"
#include "model/ListUserGroupsResult.h"
#include "model/ListUsersRequest.h"
#include "model/ListUsersResult.h"
#include "model/RecognizeFaceQualityRequest.h"
#include "model/RecognizeFaceQualityResult.h"
#include "model/RecognizeImageRequest.h"
#include "model/RecognizeImageResult.h"
#include "model/RegisterDeviceRequest.h"
#include "model/RegisterDeviceResult.h"
#include "model/ReportDeviceCapacityRequest.h"
#include "model/ReportDeviceCapacityResult.h"
#include "model/SaveVideoSummaryTaskVideoRequest.h"
#include "model/SaveVideoSummaryTaskVideoResult.h"
#include "model/SearchBodyRequest.h"
#include "model/SearchBodyResult.h"
#include "model/SearchFaceRequest.h"
#include "model/SearchFaceResult.h"
#include "model/SearchObjectRequest.h"
#include "model/SearchObjectResult.h"
#include "model/StopMonitorRequest.h"
#include "model/StopMonitorResult.h"
#include "model/SubscribeDeviceEventRequest.h"
#include "model/SubscribeDeviceEventResult.h"
#include "model/SubscribeSpaceEventRequest.h"
#include "model/SubscribeSpaceEventResult.h"
#include "model/SyncDeviceTimeRequest.h"
#include "model/SyncDeviceTimeResult.h"
#include "model/UnbindCorpGroupRequest.h"
#include "model/UnbindCorpGroupResult.h"
#include "model/UnbindPersonRequest.h"
#include "model/UnbindPersonResult.h"
#include "model/UnbindUserRequest.h"
#include "model/UnbindUserResult.h"
#include "model/UnsubscribeDeviceEventRequest.h"
#include "model/UnsubscribeDeviceEventResult.h"
#include "model/UnsubscribeSpaceEventRequest.h"
#include "model/UnsubscribeSpaceEventResult.h"
#include "model/UpdateCorpRequest.h"
#include "model/UpdateCorpResult.h"
#include "model/UpdateDeviceRequest.h"
#include "model/UpdateDeviceResult.h"
#include "model/UpdateMonitorRequest.h"
#include "model/UpdateMonitorResult.h"
#include "model/UpdateProfileRequest.h"
#include "model/UpdateProfileResult.h"
#include "model/UpdateProfileCatalogRequest.h"
#include "model/UpdateProfileCatalogResult.h"
#include "model/UpdateUserRequest.h"
#include "model/UpdateUserResult.h"
#include "model/UpdateUserGroupRequest.h"
#include "model/UpdateUserGroupResult.h"
#include "model/UploadFileRequest.h"
#include "model/UploadFileResult.h"
#include "model/UploadImageRequest.h"
#include "model/UploadImageResult.h"


namespace AlibabaCloud
{
	namespace Vcs
	{
		class ALIBABACLOUD_VCS_EXPORT VcsClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::AddDataSourceResult> AddDataSourceOutcome;
			typedef std::future<AddDataSourceOutcome> AddDataSourceOutcomeCallable;
			typedef std::function<void(const VcsClient*, const Model::AddDataSourceRequest&, const AddDataSourceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddDataSourceAsyncHandler;
			typedef Outcome<Error, Model::AddDeviceResult> AddDeviceOutcome;
			typedef std::future<AddDeviceOutcome> AddDeviceOutcomeCallable;
			typedef std::function<void(const VcsClient*, const Model::AddDeviceRequest&, const AddDeviceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddDeviceAsyncHandler;
			typedef Outcome<Error, Model::AddMonitorResult> AddMonitorOutcome;
			typedef std::future<AddMonitorOutcome> AddMonitorOutcomeCallable;
			typedef std::function<void(const VcsClient*, const Model::AddMonitorRequest&, const AddMonitorOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddMonitorAsyncHandler;
			typedef Outcome<Error, Model::AddProfileResult> AddProfileOutcome;
			typedef std::future<AddProfileOutcome> AddProfileOutcomeCallable;
			typedef std::function<void(const VcsClient*, const Model::AddProfileRequest&, const AddProfileOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddProfileAsyncHandler;
			typedef Outcome<Error, Model::AddProfileCatalogResult> AddProfileCatalogOutcome;
			typedef std::future<AddProfileCatalogOutcome> AddProfileCatalogOutcomeCallable;
			typedef std::function<void(const VcsClient*, const Model::AddProfileCatalogRequest&, const AddProfileCatalogOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddProfileCatalogAsyncHandler;
			typedef Outcome<Error, Model::BindCorpGroupResult> BindCorpGroupOutcome;
			typedef std::future<BindCorpGroupOutcome> BindCorpGroupOutcomeCallable;
			typedef std::function<void(const VcsClient*, const Model::BindCorpGroupRequest&, const BindCorpGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BindCorpGroupAsyncHandler;
			typedef Outcome<Error, Model::BindPersonResult> BindPersonOutcome;
			typedef std::future<BindPersonOutcome> BindPersonOutcomeCallable;
			typedef std::function<void(const VcsClient*, const Model::BindPersonRequest&, const BindPersonOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BindPersonAsyncHandler;
			typedef Outcome<Error, Model::BindUserResult> BindUserOutcome;
			typedef std::future<BindUserOutcome> BindUserOutcomeCallable;
			typedef std::function<void(const VcsClient*, const Model::BindUserRequest&, const BindUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BindUserAsyncHandler;
			typedef Outcome<Error, Model::CreateCorpResult> CreateCorpOutcome;
			typedef std::future<CreateCorpOutcome> CreateCorpOutcomeCallable;
			typedef std::function<void(const VcsClient*, const Model::CreateCorpRequest&, const CreateCorpOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateCorpAsyncHandler;
			typedef Outcome<Error, Model::CreateCorpGroupResult> CreateCorpGroupOutcome;
			typedef std::future<CreateCorpGroupOutcome> CreateCorpGroupOutcomeCallable;
			typedef std::function<void(const VcsClient*, const Model::CreateCorpGroupRequest&, const CreateCorpGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateCorpGroupAsyncHandler;
			typedef Outcome<Error, Model::CreateUserResult> CreateUserOutcome;
			typedef std::future<CreateUserOutcome> CreateUserOutcomeCallable;
			typedef std::function<void(const VcsClient*, const Model::CreateUserRequest&, const CreateUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateUserAsyncHandler;
			typedef Outcome<Error, Model::CreateUserGroupResult> CreateUserGroupOutcome;
			typedef std::future<CreateUserGroupOutcome> CreateUserGroupOutcomeCallable;
			typedef std::function<void(const VcsClient*, const Model::CreateUserGroupRequest&, const CreateUserGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateUserGroupAsyncHandler;
			typedef Outcome<Error, Model::CreateVideoComposeTaskResult> CreateVideoComposeTaskOutcome;
			typedef std::future<CreateVideoComposeTaskOutcome> CreateVideoComposeTaskOutcomeCallable;
			typedef std::function<void(const VcsClient*, const Model::CreateVideoComposeTaskRequest&, const CreateVideoComposeTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateVideoComposeTaskAsyncHandler;
			typedef Outcome<Error, Model::CreateVideoSummaryTaskResult> CreateVideoSummaryTaskOutcome;
			typedef std::future<CreateVideoSummaryTaskOutcome> CreateVideoSummaryTaskOutcomeCallable;
			typedef std::function<void(const VcsClient*, const Model::CreateVideoSummaryTaskRequest&, const CreateVideoSummaryTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateVideoSummaryTaskAsyncHandler;
			typedef Outcome<Error, Model::DeleteCorpGroupResult> DeleteCorpGroupOutcome;
			typedef std::future<DeleteCorpGroupOutcome> DeleteCorpGroupOutcomeCallable;
			typedef std::function<void(const VcsClient*, const Model::DeleteCorpGroupRequest&, const DeleteCorpGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCorpGroupAsyncHandler;
			typedef Outcome<Error, Model::DeleteDataSourceResult> DeleteDataSourceOutcome;
			typedef std::future<DeleteDataSourceOutcome> DeleteDataSourceOutcomeCallable;
			typedef std::function<void(const VcsClient*, const Model::DeleteDataSourceRequest&, const DeleteDataSourceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDataSourceAsyncHandler;
			typedef Outcome<Error, Model::DeleteDeviceResult> DeleteDeviceOutcome;
			typedef std::future<DeleteDeviceOutcome> DeleteDeviceOutcomeCallable;
			typedef std::function<void(const VcsClient*, const Model::DeleteDeviceRequest&, const DeleteDeviceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDeviceAsyncHandler;
			typedef Outcome<Error, Model::DeleteProfileResult> DeleteProfileOutcome;
			typedef std::future<DeleteProfileOutcome> DeleteProfileOutcomeCallable;
			typedef std::function<void(const VcsClient*, const Model::DeleteProfileRequest&, const DeleteProfileOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteProfileAsyncHandler;
			typedef Outcome<Error, Model::DeleteProfileCatalogResult> DeleteProfileCatalogOutcome;
			typedef std::future<DeleteProfileCatalogOutcome> DeleteProfileCatalogOutcomeCallable;
			typedef std::function<void(const VcsClient*, const Model::DeleteProfileCatalogRequest&, const DeleteProfileCatalogOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteProfileCatalogAsyncHandler;
			typedef Outcome<Error, Model::DeleteRecordsResult> DeleteRecordsOutcome;
			typedef std::future<DeleteRecordsOutcome> DeleteRecordsOutcomeCallable;
			typedef std::function<void(const VcsClient*, const Model::DeleteRecordsRequest&, const DeleteRecordsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRecordsAsyncHandler;
			typedef Outcome<Error, Model::DeleteUserResult> DeleteUserOutcome;
			typedef std::future<DeleteUserOutcome> DeleteUserOutcomeCallable;
			typedef std::function<void(const VcsClient*, const Model::DeleteUserRequest&, const DeleteUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteUserAsyncHandler;
			typedef Outcome<Error, Model::DeleteUserGroupResult> DeleteUserGroupOutcome;
			typedef std::future<DeleteUserGroupOutcome> DeleteUserGroupOutcomeCallable;
			typedef std::function<void(const VcsClient*, const Model::DeleteUserGroupRequest&, const DeleteUserGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteUserGroupAsyncHandler;
			typedef Outcome<Error, Model::DeleteVideoSummaryTaskResult> DeleteVideoSummaryTaskOutcome;
			typedef std::future<DeleteVideoSummaryTaskOutcome> DeleteVideoSummaryTaskOutcomeCallable;
			typedef std::function<void(const VcsClient*, const Model::DeleteVideoSummaryTaskRequest&, const DeleteVideoSummaryTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteVideoSummaryTaskAsyncHandler;
			typedef Outcome<Error, Model::DescribeDevicesResult> DescribeDevicesOutcome;
			typedef std::future<DescribeDevicesOutcome> DescribeDevicesOutcomeCallable;
			typedef std::function<void(const VcsClient*, const Model::DescribeDevicesRequest&, const DescribeDevicesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDevicesAsyncHandler;
			typedef Outcome<Error, Model::GetBodyOptionsResult> GetBodyOptionsOutcome;
			typedef std::future<GetBodyOptionsOutcome> GetBodyOptionsOutcomeCallable;
			typedef std::function<void(const VcsClient*, const Model::GetBodyOptionsRequest&, const GetBodyOptionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetBodyOptionsAsyncHandler;
			typedef Outcome<Error, Model::GetCatalogListResult> GetCatalogListOutcome;
			typedef std::future<GetCatalogListOutcome> GetCatalogListOutcomeCallable;
			typedef std::function<void(const VcsClient*, const Model::GetCatalogListRequest&, const GetCatalogListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetCatalogListAsyncHandler;
			typedef Outcome<Error, Model::GetDeviceConfigResult> GetDeviceConfigOutcome;
			typedef std::future<GetDeviceConfigOutcome> GetDeviceConfigOutcomeCallable;
			typedef std::function<void(const VcsClient*, const Model::GetDeviceConfigRequest&, const GetDeviceConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetDeviceConfigAsyncHandler;
			typedef Outcome<Error, Model::GetDeviceLiveUrlResult> GetDeviceLiveUrlOutcome;
			typedef std::future<GetDeviceLiveUrlOutcome> GetDeviceLiveUrlOutcomeCallable;
			typedef std::function<void(const VcsClient*, const Model::GetDeviceLiveUrlRequest&, const GetDeviceLiveUrlOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetDeviceLiveUrlAsyncHandler;
			typedef Outcome<Error, Model::GetDeviceVideoUrlResult> GetDeviceVideoUrlOutcome;
			typedef std::future<GetDeviceVideoUrlOutcome> GetDeviceVideoUrlOutcomeCallable;
			typedef std::function<void(const VcsClient*, const Model::GetDeviceVideoUrlRequest&, const GetDeviceVideoUrlOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetDeviceVideoUrlAsyncHandler;
			typedef Outcome<Error, Model::GetFaceModelResultResult> GetFaceModelResultOutcome;
			typedef std::future<GetFaceModelResultOutcome> GetFaceModelResultOutcomeCallable;
			typedef std::function<void(const VcsClient*, const Model::GetFaceModelResultRequest&, const GetFaceModelResultOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetFaceModelResultAsyncHandler;
			typedef Outcome<Error, Model::GetFaceOptionsResult> GetFaceOptionsOutcome;
			typedef std::future<GetFaceOptionsOutcome> GetFaceOptionsOutcomeCallable;
			typedef std::function<void(const VcsClient*, const Model::GetFaceOptionsRequest&, const GetFaceOptionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetFaceOptionsAsyncHandler;
			typedef Outcome<Error, Model::GetInventoryResult> GetInventoryOutcome;
			typedef std::future<GetInventoryOutcome> GetInventoryOutcomeCallable;
			typedef std::function<void(const VcsClient*, const Model::GetInventoryRequest&, const GetInventoryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetInventoryAsyncHandler;
			typedef Outcome<Error, Model::GetMonitorListResult> GetMonitorListOutcome;
			typedef std::future<GetMonitorListOutcome> GetMonitorListOutcomeCallable;
			typedef std::function<void(const VcsClient*, const Model::GetMonitorListRequest&, const GetMonitorListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetMonitorListAsyncHandler;
			typedef Outcome<Error, Model::GetMonitorResultResult> GetMonitorResultOutcome;
			typedef std::future<GetMonitorResultOutcome> GetMonitorResultOutcomeCallable;
			typedef std::function<void(const VcsClient*, const Model::GetMonitorResultRequest&, const GetMonitorResultOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetMonitorResultAsyncHandler;
			typedef Outcome<Error, Model::GetPersonDetailResult> GetPersonDetailOutcome;
			typedef std::future<GetPersonDetailOutcome> GetPersonDetailOutcomeCallable;
			typedef std::function<void(const VcsClient*, const Model::GetPersonDetailRequest&, const GetPersonDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetPersonDetailAsyncHandler;
			typedef Outcome<Error, Model::GetPersonListResult> GetPersonListOutcome;
			typedef std::future<GetPersonListOutcome> GetPersonListOutcomeCallable;
			typedef std::function<void(const VcsClient*, const Model::GetPersonListRequest&, const GetPersonListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetPersonListAsyncHandler;
			typedef Outcome<Error, Model::GetProfileDetailResult> GetProfileDetailOutcome;
			typedef std::future<GetProfileDetailOutcome> GetProfileDetailOutcomeCallable;
			typedef std::function<void(const VcsClient*, const Model::GetProfileDetailRequest&, const GetProfileDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetProfileDetailAsyncHandler;
			typedef Outcome<Error, Model::GetProfileListResult> GetProfileListOutcome;
			typedef std::future<GetProfileListOutcome> GetProfileListOutcomeCallable;
			typedef std::function<void(const VcsClient*, const Model::GetProfileListRequest&, const GetProfileListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetProfileListAsyncHandler;
			typedef Outcome<Error, Model::GetUserDetailResult> GetUserDetailOutcome;
			typedef std::future<GetUserDetailOutcome> GetUserDetailOutcomeCallable;
			typedef std::function<void(const VcsClient*, const Model::GetUserDetailRequest&, const GetUserDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetUserDetailAsyncHandler;
			typedef Outcome<Error, Model::GetVideoComposeResultResult> GetVideoComposeResultOutcome;
			typedef std::future<GetVideoComposeResultOutcome> GetVideoComposeResultOutcomeCallable;
			typedef std::function<void(const VcsClient*, const Model::GetVideoComposeResultRequest&, const GetVideoComposeResultOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetVideoComposeResultAsyncHandler;
			typedef Outcome<Error, Model::GetVideoSummaryTaskResultResult> GetVideoSummaryTaskResultOutcome;
			typedef std::future<GetVideoSummaryTaskResultOutcome> GetVideoSummaryTaskResultOutcomeCallable;
			typedef std::function<void(const VcsClient*, const Model::GetVideoSummaryTaskResultRequest&, const GetVideoSummaryTaskResultOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetVideoSummaryTaskResultAsyncHandler;
			typedef Outcome<Error, Model::InvokeMotorModelResult> InvokeMotorModelOutcome;
			typedef std::future<InvokeMotorModelOutcome> InvokeMotorModelOutcomeCallable;
			typedef std::function<void(const VcsClient*, const Model::InvokeMotorModelRequest&, const InvokeMotorModelOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> InvokeMotorModelAsyncHandler;
			typedef Outcome<Error, Model::ListBodyAlgorithmResultsResult> ListBodyAlgorithmResultsOutcome;
			typedef std::future<ListBodyAlgorithmResultsOutcome> ListBodyAlgorithmResultsOutcomeCallable;
			typedef std::function<void(const VcsClient*, const Model::ListBodyAlgorithmResultsRequest&, const ListBodyAlgorithmResultsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListBodyAlgorithmResultsAsyncHandler;
			typedef Outcome<Error, Model::ListCorpGroupMetricsResult> ListCorpGroupMetricsOutcome;
			typedef std::future<ListCorpGroupMetricsOutcome> ListCorpGroupMetricsOutcomeCallable;
			typedef std::function<void(const VcsClient*, const Model::ListCorpGroupMetricsRequest&, const ListCorpGroupMetricsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListCorpGroupMetricsAsyncHandler;
			typedef Outcome<Error, Model::ListCorpGroupsResult> ListCorpGroupsOutcome;
			typedef std::future<ListCorpGroupsOutcome> ListCorpGroupsOutcomeCallable;
			typedef std::function<void(const VcsClient*, const Model::ListCorpGroupsRequest&, const ListCorpGroupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListCorpGroupsAsyncHandler;
			typedef Outcome<Error, Model::ListCorpMetricsResult> ListCorpMetricsOutcome;
			typedef std::future<ListCorpMetricsOutcome> ListCorpMetricsOutcomeCallable;
			typedef std::function<void(const VcsClient*, const Model::ListCorpMetricsRequest&, const ListCorpMetricsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListCorpMetricsAsyncHandler;
			typedef Outcome<Error, Model::ListCorpsResult> ListCorpsOutcome;
			typedef std::future<ListCorpsOutcome> ListCorpsOutcomeCallable;
			typedef std::function<void(const VcsClient*, const Model::ListCorpsRequest&, const ListCorpsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListCorpsAsyncHandler;
			typedef Outcome<Error, Model::ListDeviceGroupsResult> ListDeviceGroupsOutcome;
			typedef std::future<ListDeviceGroupsOutcome> ListDeviceGroupsOutcomeCallable;
			typedef std::function<void(const VcsClient*, const Model::ListDeviceGroupsRequest&, const ListDeviceGroupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDeviceGroupsAsyncHandler;
			typedef Outcome<Error, Model::ListDevicesResult> ListDevicesOutcome;
			typedef std::future<ListDevicesOutcome> ListDevicesOutcomeCallable;
			typedef std::function<void(const VcsClient*, const Model::ListDevicesRequest&, const ListDevicesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDevicesAsyncHandler;
			typedef Outcome<Error, Model::ListEventAlgorithmDetailsResult> ListEventAlgorithmDetailsOutcome;
			typedef std::future<ListEventAlgorithmDetailsOutcome> ListEventAlgorithmDetailsOutcomeCallable;
			typedef std::function<void(const VcsClient*, const Model::ListEventAlgorithmDetailsRequest&, const ListEventAlgorithmDetailsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListEventAlgorithmDetailsAsyncHandler;
			typedef Outcome<Error, Model::ListEventAlgorithmResultsResult> ListEventAlgorithmResultsOutcome;
			typedef std::future<ListEventAlgorithmResultsOutcome> ListEventAlgorithmResultsOutcomeCallable;
			typedef std::function<void(const VcsClient*, const Model::ListEventAlgorithmResultsRequest&, const ListEventAlgorithmResultsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListEventAlgorithmResultsAsyncHandler;
			typedef Outcome<Error, Model::ListFaceAlgorithmResultsResult> ListFaceAlgorithmResultsOutcome;
			typedef std::future<ListFaceAlgorithmResultsOutcome> ListFaceAlgorithmResultsOutcomeCallable;
			typedef std::function<void(const VcsClient*, const Model::ListFaceAlgorithmResultsRequest&, const ListFaceAlgorithmResultsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListFaceAlgorithmResultsAsyncHandler;
			typedef Outcome<Error, Model::ListMetricsResult> ListMetricsOutcome;
			typedef std::future<ListMetricsOutcome> ListMetricsOutcomeCallable;
			typedef std::function<void(const VcsClient*, const Model::ListMetricsRequest&, const ListMetricsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListMetricsAsyncHandler;
			typedef Outcome<Error, Model::ListMotorAlgorithmResultsResult> ListMotorAlgorithmResultsOutcome;
			typedef std::future<ListMotorAlgorithmResultsOutcome> ListMotorAlgorithmResultsOutcomeCallable;
			typedef std::function<void(const VcsClient*, const Model::ListMotorAlgorithmResultsRequest&, const ListMotorAlgorithmResultsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListMotorAlgorithmResultsAsyncHandler;
			typedef Outcome<Error, Model::ListPersonTraceResult> ListPersonTraceOutcome;
			typedef std::future<ListPersonTraceOutcome> ListPersonTraceOutcomeCallable;
			typedef std::function<void(const VcsClient*, const Model::ListPersonTraceRequest&, const ListPersonTraceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListPersonTraceAsyncHandler;
			typedef Outcome<Error, Model::ListPersonTraceDetailsResult> ListPersonTraceDetailsOutcome;
			typedef std::future<ListPersonTraceDetailsOutcome> ListPersonTraceDetailsOutcomeCallable;
			typedef std::function<void(const VcsClient*, const Model::ListPersonTraceDetailsRequest&, const ListPersonTraceDetailsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListPersonTraceDetailsAsyncHandler;
			typedef Outcome<Error, Model::ListPersonVisitCountResult> ListPersonVisitCountOutcome;
			typedef std::future<ListPersonVisitCountOutcome> ListPersonVisitCountOutcomeCallable;
			typedef std::function<void(const VcsClient*, const Model::ListPersonVisitCountRequest&, const ListPersonVisitCountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListPersonVisitCountAsyncHandler;
			typedef Outcome<Error, Model::ListPersonsResult> ListPersonsOutcome;
			typedef std::future<ListPersonsOutcome> ListPersonsOutcomeCallable;
			typedef std::function<void(const VcsClient*, const Model::ListPersonsRequest&, const ListPersonsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListPersonsAsyncHandler;
			typedef Outcome<Error, Model::ListSubscribeDeviceResult> ListSubscribeDeviceOutcome;
			typedef std::future<ListSubscribeDeviceOutcome> ListSubscribeDeviceOutcomeCallable;
			typedef std::function<void(const VcsClient*, const Model::ListSubscribeDeviceRequest&, const ListSubscribeDeviceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListSubscribeDeviceAsyncHandler;
			typedef Outcome<Error, Model::ListUserGroupsResult> ListUserGroupsOutcome;
			typedef std::future<ListUserGroupsOutcome> ListUserGroupsOutcomeCallable;
			typedef std::function<void(const VcsClient*, const Model::ListUserGroupsRequest&, const ListUserGroupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListUserGroupsAsyncHandler;
			typedef Outcome<Error, Model::ListUsersResult> ListUsersOutcome;
			typedef std::future<ListUsersOutcome> ListUsersOutcomeCallable;
			typedef std::function<void(const VcsClient*, const Model::ListUsersRequest&, const ListUsersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListUsersAsyncHandler;
			typedef Outcome<Error, Model::RecognizeFaceQualityResult> RecognizeFaceQualityOutcome;
			typedef std::future<RecognizeFaceQualityOutcome> RecognizeFaceQualityOutcomeCallable;
			typedef std::function<void(const VcsClient*, const Model::RecognizeFaceQualityRequest&, const RecognizeFaceQualityOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RecognizeFaceQualityAsyncHandler;
			typedef Outcome<Error, Model::RecognizeImageResult> RecognizeImageOutcome;
			typedef std::future<RecognizeImageOutcome> RecognizeImageOutcomeCallable;
			typedef std::function<void(const VcsClient*, const Model::RecognizeImageRequest&, const RecognizeImageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RecognizeImageAsyncHandler;
			typedef Outcome<Error, Model::RegisterDeviceResult> RegisterDeviceOutcome;
			typedef std::future<RegisterDeviceOutcome> RegisterDeviceOutcomeCallable;
			typedef std::function<void(const VcsClient*, const Model::RegisterDeviceRequest&, const RegisterDeviceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RegisterDeviceAsyncHandler;
			typedef Outcome<Error, Model::ReportDeviceCapacityResult> ReportDeviceCapacityOutcome;
			typedef std::future<ReportDeviceCapacityOutcome> ReportDeviceCapacityOutcomeCallable;
			typedef std::function<void(const VcsClient*, const Model::ReportDeviceCapacityRequest&, const ReportDeviceCapacityOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ReportDeviceCapacityAsyncHandler;
			typedef Outcome<Error, Model::SaveVideoSummaryTaskVideoResult> SaveVideoSummaryTaskVideoOutcome;
			typedef std::future<SaveVideoSummaryTaskVideoOutcome> SaveVideoSummaryTaskVideoOutcomeCallable;
			typedef std::function<void(const VcsClient*, const Model::SaveVideoSummaryTaskVideoRequest&, const SaveVideoSummaryTaskVideoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SaveVideoSummaryTaskVideoAsyncHandler;
			typedef Outcome<Error, Model::SearchBodyResult> SearchBodyOutcome;
			typedef std::future<SearchBodyOutcome> SearchBodyOutcomeCallable;
			typedef std::function<void(const VcsClient*, const Model::SearchBodyRequest&, const SearchBodyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SearchBodyAsyncHandler;
			typedef Outcome<Error, Model::SearchFaceResult> SearchFaceOutcome;
			typedef std::future<SearchFaceOutcome> SearchFaceOutcomeCallable;
			typedef std::function<void(const VcsClient*, const Model::SearchFaceRequest&, const SearchFaceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SearchFaceAsyncHandler;
			typedef Outcome<Error, Model::SearchObjectResult> SearchObjectOutcome;
			typedef std::future<SearchObjectOutcome> SearchObjectOutcomeCallable;
			typedef std::function<void(const VcsClient*, const Model::SearchObjectRequest&, const SearchObjectOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SearchObjectAsyncHandler;
			typedef Outcome<Error, Model::StopMonitorResult> StopMonitorOutcome;
			typedef std::future<StopMonitorOutcome> StopMonitorOutcomeCallable;
			typedef std::function<void(const VcsClient*, const Model::StopMonitorRequest&, const StopMonitorOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StopMonitorAsyncHandler;
			typedef Outcome<Error, Model::SubscribeDeviceEventResult> SubscribeDeviceEventOutcome;
			typedef std::future<SubscribeDeviceEventOutcome> SubscribeDeviceEventOutcomeCallable;
			typedef std::function<void(const VcsClient*, const Model::SubscribeDeviceEventRequest&, const SubscribeDeviceEventOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubscribeDeviceEventAsyncHandler;
			typedef Outcome<Error, Model::SubscribeSpaceEventResult> SubscribeSpaceEventOutcome;
			typedef std::future<SubscribeSpaceEventOutcome> SubscribeSpaceEventOutcomeCallable;
			typedef std::function<void(const VcsClient*, const Model::SubscribeSpaceEventRequest&, const SubscribeSpaceEventOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubscribeSpaceEventAsyncHandler;
			typedef Outcome<Error, Model::SyncDeviceTimeResult> SyncDeviceTimeOutcome;
			typedef std::future<SyncDeviceTimeOutcome> SyncDeviceTimeOutcomeCallable;
			typedef std::function<void(const VcsClient*, const Model::SyncDeviceTimeRequest&, const SyncDeviceTimeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SyncDeviceTimeAsyncHandler;
			typedef Outcome<Error, Model::UnbindCorpGroupResult> UnbindCorpGroupOutcome;
			typedef std::future<UnbindCorpGroupOutcome> UnbindCorpGroupOutcomeCallable;
			typedef std::function<void(const VcsClient*, const Model::UnbindCorpGroupRequest&, const UnbindCorpGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UnbindCorpGroupAsyncHandler;
			typedef Outcome<Error, Model::UnbindPersonResult> UnbindPersonOutcome;
			typedef std::future<UnbindPersonOutcome> UnbindPersonOutcomeCallable;
			typedef std::function<void(const VcsClient*, const Model::UnbindPersonRequest&, const UnbindPersonOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UnbindPersonAsyncHandler;
			typedef Outcome<Error, Model::UnbindUserResult> UnbindUserOutcome;
			typedef std::future<UnbindUserOutcome> UnbindUserOutcomeCallable;
			typedef std::function<void(const VcsClient*, const Model::UnbindUserRequest&, const UnbindUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UnbindUserAsyncHandler;
			typedef Outcome<Error, Model::UnsubscribeDeviceEventResult> UnsubscribeDeviceEventOutcome;
			typedef std::future<UnsubscribeDeviceEventOutcome> UnsubscribeDeviceEventOutcomeCallable;
			typedef std::function<void(const VcsClient*, const Model::UnsubscribeDeviceEventRequest&, const UnsubscribeDeviceEventOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UnsubscribeDeviceEventAsyncHandler;
			typedef Outcome<Error, Model::UnsubscribeSpaceEventResult> UnsubscribeSpaceEventOutcome;
			typedef std::future<UnsubscribeSpaceEventOutcome> UnsubscribeSpaceEventOutcomeCallable;
			typedef std::function<void(const VcsClient*, const Model::UnsubscribeSpaceEventRequest&, const UnsubscribeSpaceEventOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UnsubscribeSpaceEventAsyncHandler;
			typedef Outcome<Error, Model::UpdateCorpResult> UpdateCorpOutcome;
			typedef std::future<UpdateCorpOutcome> UpdateCorpOutcomeCallable;
			typedef std::function<void(const VcsClient*, const Model::UpdateCorpRequest&, const UpdateCorpOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateCorpAsyncHandler;
			typedef Outcome<Error, Model::UpdateDeviceResult> UpdateDeviceOutcome;
			typedef std::future<UpdateDeviceOutcome> UpdateDeviceOutcomeCallable;
			typedef std::function<void(const VcsClient*, const Model::UpdateDeviceRequest&, const UpdateDeviceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateDeviceAsyncHandler;
			typedef Outcome<Error, Model::UpdateMonitorResult> UpdateMonitorOutcome;
			typedef std::future<UpdateMonitorOutcome> UpdateMonitorOutcomeCallable;
			typedef std::function<void(const VcsClient*, const Model::UpdateMonitorRequest&, const UpdateMonitorOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateMonitorAsyncHandler;
			typedef Outcome<Error, Model::UpdateProfileResult> UpdateProfileOutcome;
			typedef std::future<UpdateProfileOutcome> UpdateProfileOutcomeCallable;
			typedef std::function<void(const VcsClient*, const Model::UpdateProfileRequest&, const UpdateProfileOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateProfileAsyncHandler;
			typedef Outcome<Error, Model::UpdateProfileCatalogResult> UpdateProfileCatalogOutcome;
			typedef std::future<UpdateProfileCatalogOutcome> UpdateProfileCatalogOutcomeCallable;
			typedef std::function<void(const VcsClient*, const Model::UpdateProfileCatalogRequest&, const UpdateProfileCatalogOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateProfileCatalogAsyncHandler;
			typedef Outcome<Error, Model::UpdateUserResult> UpdateUserOutcome;
			typedef std::future<UpdateUserOutcome> UpdateUserOutcomeCallable;
			typedef std::function<void(const VcsClient*, const Model::UpdateUserRequest&, const UpdateUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateUserAsyncHandler;
			typedef Outcome<Error, Model::UpdateUserGroupResult> UpdateUserGroupOutcome;
			typedef std::future<UpdateUserGroupOutcome> UpdateUserGroupOutcomeCallable;
			typedef std::function<void(const VcsClient*, const Model::UpdateUserGroupRequest&, const UpdateUserGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateUserGroupAsyncHandler;
			typedef Outcome<Error, Model::UploadFileResult> UploadFileOutcome;
			typedef std::future<UploadFileOutcome> UploadFileOutcomeCallable;
			typedef std::function<void(const VcsClient*, const Model::UploadFileRequest&, const UploadFileOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UploadFileAsyncHandler;
			typedef Outcome<Error, Model::UploadImageResult> UploadImageOutcome;
			typedef std::future<UploadImageOutcome> UploadImageOutcomeCallable;
			typedef std::function<void(const VcsClient*, const Model::UploadImageRequest&, const UploadImageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UploadImageAsyncHandler;

			VcsClient(const Credentials &credentials, const ClientConfiguration &configuration);
			VcsClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			VcsClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~VcsClient();
			AddDataSourceOutcome addDataSource(const Model::AddDataSourceRequest &request)const;
			void addDataSourceAsync(const Model::AddDataSourceRequest& request, const AddDataSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddDataSourceOutcomeCallable addDataSourceCallable(const Model::AddDataSourceRequest& request) const;
			AddDeviceOutcome addDevice(const Model::AddDeviceRequest &request)const;
			void addDeviceAsync(const Model::AddDeviceRequest& request, const AddDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddDeviceOutcomeCallable addDeviceCallable(const Model::AddDeviceRequest& request) const;
			AddMonitorOutcome addMonitor(const Model::AddMonitorRequest &request)const;
			void addMonitorAsync(const Model::AddMonitorRequest& request, const AddMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddMonitorOutcomeCallable addMonitorCallable(const Model::AddMonitorRequest& request) const;
			AddProfileOutcome addProfile(const Model::AddProfileRequest &request)const;
			void addProfileAsync(const Model::AddProfileRequest& request, const AddProfileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddProfileOutcomeCallable addProfileCallable(const Model::AddProfileRequest& request) const;
			AddProfileCatalogOutcome addProfileCatalog(const Model::AddProfileCatalogRequest &request)const;
			void addProfileCatalogAsync(const Model::AddProfileCatalogRequest& request, const AddProfileCatalogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddProfileCatalogOutcomeCallable addProfileCatalogCallable(const Model::AddProfileCatalogRequest& request) const;
			BindCorpGroupOutcome bindCorpGroup(const Model::BindCorpGroupRequest &request)const;
			void bindCorpGroupAsync(const Model::BindCorpGroupRequest& request, const BindCorpGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BindCorpGroupOutcomeCallable bindCorpGroupCallable(const Model::BindCorpGroupRequest& request) const;
			BindPersonOutcome bindPerson(const Model::BindPersonRequest &request)const;
			void bindPersonAsync(const Model::BindPersonRequest& request, const BindPersonAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BindPersonOutcomeCallable bindPersonCallable(const Model::BindPersonRequest& request) const;
			BindUserOutcome bindUser(const Model::BindUserRequest &request)const;
			void bindUserAsync(const Model::BindUserRequest& request, const BindUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BindUserOutcomeCallable bindUserCallable(const Model::BindUserRequest& request) const;
			CreateCorpOutcome createCorp(const Model::CreateCorpRequest &request)const;
			void createCorpAsync(const Model::CreateCorpRequest& request, const CreateCorpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateCorpOutcomeCallable createCorpCallable(const Model::CreateCorpRequest& request) const;
			CreateCorpGroupOutcome createCorpGroup(const Model::CreateCorpGroupRequest &request)const;
			void createCorpGroupAsync(const Model::CreateCorpGroupRequest& request, const CreateCorpGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateCorpGroupOutcomeCallable createCorpGroupCallable(const Model::CreateCorpGroupRequest& request) const;
			CreateUserOutcome createUser(const Model::CreateUserRequest &request)const;
			void createUserAsync(const Model::CreateUserRequest& request, const CreateUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateUserOutcomeCallable createUserCallable(const Model::CreateUserRequest& request) const;
			CreateUserGroupOutcome createUserGroup(const Model::CreateUserGroupRequest &request)const;
			void createUserGroupAsync(const Model::CreateUserGroupRequest& request, const CreateUserGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateUserGroupOutcomeCallable createUserGroupCallable(const Model::CreateUserGroupRequest& request) const;
			CreateVideoComposeTaskOutcome createVideoComposeTask(const Model::CreateVideoComposeTaskRequest &request)const;
			void createVideoComposeTaskAsync(const Model::CreateVideoComposeTaskRequest& request, const CreateVideoComposeTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateVideoComposeTaskOutcomeCallable createVideoComposeTaskCallable(const Model::CreateVideoComposeTaskRequest& request) const;
			CreateVideoSummaryTaskOutcome createVideoSummaryTask(const Model::CreateVideoSummaryTaskRequest &request)const;
			void createVideoSummaryTaskAsync(const Model::CreateVideoSummaryTaskRequest& request, const CreateVideoSummaryTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateVideoSummaryTaskOutcomeCallable createVideoSummaryTaskCallable(const Model::CreateVideoSummaryTaskRequest& request) const;
			DeleteCorpGroupOutcome deleteCorpGroup(const Model::DeleteCorpGroupRequest &request)const;
			void deleteCorpGroupAsync(const Model::DeleteCorpGroupRequest& request, const DeleteCorpGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteCorpGroupOutcomeCallable deleteCorpGroupCallable(const Model::DeleteCorpGroupRequest& request) const;
			DeleteDataSourceOutcome deleteDataSource(const Model::DeleteDataSourceRequest &request)const;
			void deleteDataSourceAsync(const Model::DeleteDataSourceRequest& request, const DeleteDataSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDataSourceOutcomeCallable deleteDataSourceCallable(const Model::DeleteDataSourceRequest& request) const;
			DeleteDeviceOutcome deleteDevice(const Model::DeleteDeviceRequest &request)const;
			void deleteDeviceAsync(const Model::DeleteDeviceRequest& request, const DeleteDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDeviceOutcomeCallable deleteDeviceCallable(const Model::DeleteDeviceRequest& request) const;
			DeleteProfileOutcome deleteProfile(const Model::DeleteProfileRequest &request)const;
			void deleteProfileAsync(const Model::DeleteProfileRequest& request, const DeleteProfileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteProfileOutcomeCallable deleteProfileCallable(const Model::DeleteProfileRequest& request) const;
			DeleteProfileCatalogOutcome deleteProfileCatalog(const Model::DeleteProfileCatalogRequest &request)const;
			void deleteProfileCatalogAsync(const Model::DeleteProfileCatalogRequest& request, const DeleteProfileCatalogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteProfileCatalogOutcomeCallable deleteProfileCatalogCallable(const Model::DeleteProfileCatalogRequest& request) const;
			DeleteRecordsOutcome deleteRecords(const Model::DeleteRecordsRequest &request)const;
			void deleteRecordsAsync(const Model::DeleteRecordsRequest& request, const DeleteRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteRecordsOutcomeCallable deleteRecordsCallable(const Model::DeleteRecordsRequest& request) const;
			DeleteUserOutcome deleteUser(const Model::DeleteUserRequest &request)const;
			void deleteUserAsync(const Model::DeleteUserRequest& request, const DeleteUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteUserOutcomeCallable deleteUserCallable(const Model::DeleteUserRequest& request) const;
			DeleteUserGroupOutcome deleteUserGroup(const Model::DeleteUserGroupRequest &request)const;
			void deleteUserGroupAsync(const Model::DeleteUserGroupRequest& request, const DeleteUserGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteUserGroupOutcomeCallable deleteUserGroupCallable(const Model::DeleteUserGroupRequest& request) const;
			DeleteVideoSummaryTaskOutcome deleteVideoSummaryTask(const Model::DeleteVideoSummaryTaskRequest &request)const;
			void deleteVideoSummaryTaskAsync(const Model::DeleteVideoSummaryTaskRequest& request, const DeleteVideoSummaryTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteVideoSummaryTaskOutcomeCallable deleteVideoSummaryTaskCallable(const Model::DeleteVideoSummaryTaskRequest& request) const;
			DescribeDevicesOutcome describeDevices(const Model::DescribeDevicesRequest &request)const;
			void describeDevicesAsync(const Model::DescribeDevicesRequest& request, const DescribeDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDevicesOutcomeCallable describeDevicesCallable(const Model::DescribeDevicesRequest& request) const;
			GetBodyOptionsOutcome getBodyOptions(const Model::GetBodyOptionsRequest &request)const;
			void getBodyOptionsAsync(const Model::GetBodyOptionsRequest& request, const GetBodyOptionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetBodyOptionsOutcomeCallable getBodyOptionsCallable(const Model::GetBodyOptionsRequest& request) const;
			GetCatalogListOutcome getCatalogList(const Model::GetCatalogListRequest &request)const;
			void getCatalogListAsync(const Model::GetCatalogListRequest& request, const GetCatalogListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetCatalogListOutcomeCallable getCatalogListCallable(const Model::GetCatalogListRequest& request) const;
			GetDeviceConfigOutcome getDeviceConfig(const Model::GetDeviceConfigRequest &request)const;
			void getDeviceConfigAsync(const Model::GetDeviceConfigRequest& request, const GetDeviceConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetDeviceConfigOutcomeCallable getDeviceConfigCallable(const Model::GetDeviceConfigRequest& request) const;
			GetDeviceLiveUrlOutcome getDeviceLiveUrl(const Model::GetDeviceLiveUrlRequest &request)const;
			void getDeviceLiveUrlAsync(const Model::GetDeviceLiveUrlRequest& request, const GetDeviceLiveUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetDeviceLiveUrlOutcomeCallable getDeviceLiveUrlCallable(const Model::GetDeviceLiveUrlRequest& request) const;
			GetDeviceVideoUrlOutcome getDeviceVideoUrl(const Model::GetDeviceVideoUrlRequest &request)const;
			void getDeviceVideoUrlAsync(const Model::GetDeviceVideoUrlRequest& request, const GetDeviceVideoUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetDeviceVideoUrlOutcomeCallable getDeviceVideoUrlCallable(const Model::GetDeviceVideoUrlRequest& request) const;
			GetFaceModelResultOutcome getFaceModelResult(const Model::GetFaceModelResultRequest &request)const;
			void getFaceModelResultAsync(const Model::GetFaceModelResultRequest& request, const GetFaceModelResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetFaceModelResultOutcomeCallable getFaceModelResultCallable(const Model::GetFaceModelResultRequest& request) const;
			GetFaceOptionsOutcome getFaceOptions(const Model::GetFaceOptionsRequest &request)const;
			void getFaceOptionsAsync(const Model::GetFaceOptionsRequest& request, const GetFaceOptionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetFaceOptionsOutcomeCallable getFaceOptionsCallable(const Model::GetFaceOptionsRequest& request) const;
			GetInventoryOutcome getInventory(const Model::GetInventoryRequest &request)const;
			void getInventoryAsync(const Model::GetInventoryRequest& request, const GetInventoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetInventoryOutcomeCallable getInventoryCallable(const Model::GetInventoryRequest& request) const;
			GetMonitorListOutcome getMonitorList(const Model::GetMonitorListRequest &request)const;
			void getMonitorListAsync(const Model::GetMonitorListRequest& request, const GetMonitorListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetMonitorListOutcomeCallable getMonitorListCallable(const Model::GetMonitorListRequest& request) const;
			GetMonitorResultOutcome getMonitorResult(const Model::GetMonitorResultRequest &request)const;
			void getMonitorResultAsync(const Model::GetMonitorResultRequest& request, const GetMonitorResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetMonitorResultOutcomeCallable getMonitorResultCallable(const Model::GetMonitorResultRequest& request) const;
			GetPersonDetailOutcome getPersonDetail(const Model::GetPersonDetailRequest &request)const;
			void getPersonDetailAsync(const Model::GetPersonDetailRequest& request, const GetPersonDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetPersonDetailOutcomeCallable getPersonDetailCallable(const Model::GetPersonDetailRequest& request) const;
			GetPersonListOutcome getPersonList(const Model::GetPersonListRequest &request)const;
			void getPersonListAsync(const Model::GetPersonListRequest& request, const GetPersonListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetPersonListOutcomeCallable getPersonListCallable(const Model::GetPersonListRequest& request) const;
			GetProfileDetailOutcome getProfileDetail(const Model::GetProfileDetailRequest &request)const;
			void getProfileDetailAsync(const Model::GetProfileDetailRequest& request, const GetProfileDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetProfileDetailOutcomeCallable getProfileDetailCallable(const Model::GetProfileDetailRequest& request) const;
			GetProfileListOutcome getProfileList(const Model::GetProfileListRequest &request)const;
			void getProfileListAsync(const Model::GetProfileListRequest& request, const GetProfileListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetProfileListOutcomeCallable getProfileListCallable(const Model::GetProfileListRequest& request) const;
			GetUserDetailOutcome getUserDetail(const Model::GetUserDetailRequest &request)const;
			void getUserDetailAsync(const Model::GetUserDetailRequest& request, const GetUserDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetUserDetailOutcomeCallable getUserDetailCallable(const Model::GetUserDetailRequest& request) const;
			GetVideoComposeResultOutcome getVideoComposeResult(const Model::GetVideoComposeResultRequest &request)const;
			void getVideoComposeResultAsync(const Model::GetVideoComposeResultRequest& request, const GetVideoComposeResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetVideoComposeResultOutcomeCallable getVideoComposeResultCallable(const Model::GetVideoComposeResultRequest& request) const;
			GetVideoSummaryTaskResultOutcome getVideoSummaryTaskResult(const Model::GetVideoSummaryTaskResultRequest &request)const;
			void getVideoSummaryTaskResultAsync(const Model::GetVideoSummaryTaskResultRequest& request, const GetVideoSummaryTaskResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetVideoSummaryTaskResultOutcomeCallable getVideoSummaryTaskResultCallable(const Model::GetVideoSummaryTaskResultRequest& request) const;
			InvokeMotorModelOutcome invokeMotorModel(const Model::InvokeMotorModelRequest &request)const;
			void invokeMotorModelAsync(const Model::InvokeMotorModelRequest& request, const InvokeMotorModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			InvokeMotorModelOutcomeCallable invokeMotorModelCallable(const Model::InvokeMotorModelRequest& request) const;
			ListBodyAlgorithmResultsOutcome listBodyAlgorithmResults(const Model::ListBodyAlgorithmResultsRequest &request)const;
			void listBodyAlgorithmResultsAsync(const Model::ListBodyAlgorithmResultsRequest& request, const ListBodyAlgorithmResultsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListBodyAlgorithmResultsOutcomeCallable listBodyAlgorithmResultsCallable(const Model::ListBodyAlgorithmResultsRequest& request) const;
			ListCorpGroupMetricsOutcome listCorpGroupMetrics(const Model::ListCorpGroupMetricsRequest &request)const;
			void listCorpGroupMetricsAsync(const Model::ListCorpGroupMetricsRequest& request, const ListCorpGroupMetricsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListCorpGroupMetricsOutcomeCallable listCorpGroupMetricsCallable(const Model::ListCorpGroupMetricsRequest& request) const;
			ListCorpGroupsOutcome listCorpGroups(const Model::ListCorpGroupsRequest &request)const;
			void listCorpGroupsAsync(const Model::ListCorpGroupsRequest& request, const ListCorpGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListCorpGroupsOutcomeCallable listCorpGroupsCallable(const Model::ListCorpGroupsRequest& request) const;
			ListCorpMetricsOutcome listCorpMetrics(const Model::ListCorpMetricsRequest &request)const;
			void listCorpMetricsAsync(const Model::ListCorpMetricsRequest& request, const ListCorpMetricsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListCorpMetricsOutcomeCallable listCorpMetricsCallable(const Model::ListCorpMetricsRequest& request) const;
			ListCorpsOutcome listCorps(const Model::ListCorpsRequest &request)const;
			void listCorpsAsync(const Model::ListCorpsRequest& request, const ListCorpsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListCorpsOutcomeCallable listCorpsCallable(const Model::ListCorpsRequest& request) const;
			ListDeviceGroupsOutcome listDeviceGroups(const Model::ListDeviceGroupsRequest &request)const;
			void listDeviceGroupsAsync(const Model::ListDeviceGroupsRequest& request, const ListDeviceGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDeviceGroupsOutcomeCallable listDeviceGroupsCallable(const Model::ListDeviceGroupsRequest& request) const;
			ListDevicesOutcome listDevices(const Model::ListDevicesRequest &request)const;
			void listDevicesAsync(const Model::ListDevicesRequest& request, const ListDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDevicesOutcomeCallable listDevicesCallable(const Model::ListDevicesRequest& request) const;
			ListEventAlgorithmDetailsOutcome listEventAlgorithmDetails(const Model::ListEventAlgorithmDetailsRequest &request)const;
			void listEventAlgorithmDetailsAsync(const Model::ListEventAlgorithmDetailsRequest& request, const ListEventAlgorithmDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListEventAlgorithmDetailsOutcomeCallable listEventAlgorithmDetailsCallable(const Model::ListEventAlgorithmDetailsRequest& request) const;
			ListEventAlgorithmResultsOutcome listEventAlgorithmResults(const Model::ListEventAlgorithmResultsRequest &request)const;
			void listEventAlgorithmResultsAsync(const Model::ListEventAlgorithmResultsRequest& request, const ListEventAlgorithmResultsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListEventAlgorithmResultsOutcomeCallable listEventAlgorithmResultsCallable(const Model::ListEventAlgorithmResultsRequest& request) const;
			ListFaceAlgorithmResultsOutcome listFaceAlgorithmResults(const Model::ListFaceAlgorithmResultsRequest &request)const;
			void listFaceAlgorithmResultsAsync(const Model::ListFaceAlgorithmResultsRequest& request, const ListFaceAlgorithmResultsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListFaceAlgorithmResultsOutcomeCallable listFaceAlgorithmResultsCallable(const Model::ListFaceAlgorithmResultsRequest& request) const;
			ListMetricsOutcome listMetrics(const Model::ListMetricsRequest &request)const;
			void listMetricsAsync(const Model::ListMetricsRequest& request, const ListMetricsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListMetricsOutcomeCallable listMetricsCallable(const Model::ListMetricsRequest& request) const;
			ListMotorAlgorithmResultsOutcome listMotorAlgorithmResults(const Model::ListMotorAlgorithmResultsRequest &request)const;
			void listMotorAlgorithmResultsAsync(const Model::ListMotorAlgorithmResultsRequest& request, const ListMotorAlgorithmResultsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListMotorAlgorithmResultsOutcomeCallable listMotorAlgorithmResultsCallable(const Model::ListMotorAlgorithmResultsRequest& request) const;
			ListPersonTraceOutcome listPersonTrace(const Model::ListPersonTraceRequest &request)const;
			void listPersonTraceAsync(const Model::ListPersonTraceRequest& request, const ListPersonTraceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListPersonTraceOutcomeCallable listPersonTraceCallable(const Model::ListPersonTraceRequest& request) const;
			ListPersonTraceDetailsOutcome listPersonTraceDetails(const Model::ListPersonTraceDetailsRequest &request)const;
			void listPersonTraceDetailsAsync(const Model::ListPersonTraceDetailsRequest& request, const ListPersonTraceDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListPersonTraceDetailsOutcomeCallable listPersonTraceDetailsCallable(const Model::ListPersonTraceDetailsRequest& request) const;
			ListPersonVisitCountOutcome listPersonVisitCount(const Model::ListPersonVisitCountRequest &request)const;
			void listPersonVisitCountAsync(const Model::ListPersonVisitCountRequest& request, const ListPersonVisitCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListPersonVisitCountOutcomeCallable listPersonVisitCountCallable(const Model::ListPersonVisitCountRequest& request) const;
			ListPersonsOutcome listPersons(const Model::ListPersonsRequest &request)const;
			void listPersonsAsync(const Model::ListPersonsRequest& request, const ListPersonsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListPersonsOutcomeCallable listPersonsCallable(const Model::ListPersonsRequest& request) const;
			ListSubscribeDeviceOutcome listSubscribeDevice(const Model::ListSubscribeDeviceRequest &request)const;
			void listSubscribeDeviceAsync(const Model::ListSubscribeDeviceRequest& request, const ListSubscribeDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListSubscribeDeviceOutcomeCallable listSubscribeDeviceCallable(const Model::ListSubscribeDeviceRequest& request) const;
			ListUserGroupsOutcome listUserGroups(const Model::ListUserGroupsRequest &request)const;
			void listUserGroupsAsync(const Model::ListUserGroupsRequest& request, const ListUserGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListUserGroupsOutcomeCallable listUserGroupsCallable(const Model::ListUserGroupsRequest& request) const;
			ListUsersOutcome listUsers(const Model::ListUsersRequest &request)const;
			void listUsersAsync(const Model::ListUsersRequest& request, const ListUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListUsersOutcomeCallable listUsersCallable(const Model::ListUsersRequest& request) const;
			RecognizeFaceQualityOutcome recognizeFaceQuality(const Model::RecognizeFaceQualityRequest &request)const;
			void recognizeFaceQualityAsync(const Model::RecognizeFaceQualityRequest& request, const RecognizeFaceQualityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RecognizeFaceQualityOutcomeCallable recognizeFaceQualityCallable(const Model::RecognizeFaceQualityRequest& request) const;
			RecognizeImageOutcome recognizeImage(const Model::RecognizeImageRequest &request)const;
			void recognizeImageAsync(const Model::RecognizeImageRequest& request, const RecognizeImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RecognizeImageOutcomeCallable recognizeImageCallable(const Model::RecognizeImageRequest& request) const;
			RegisterDeviceOutcome registerDevice(const Model::RegisterDeviceRequest &request)const;
			void registerDeviceAsync(const Model::RegisterDeviceRequest& request, const RegisterDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RegisterDeviceOutcomeCallable registerDeviceCallable(const Model::RegisterDeviceRequest& request) const;
			ReportDeviceCapacityOutcome reportDeviceCapacity(const Model::ReportDeviceCapacityRequest &request)const;
			void reportDeviceCapacityAsync(const Model::ReportDeviceCapacityRequest& request, const ReportDeviceCapacityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ReportDeviceCapacityOutcomeCallable reportDeviceCapacityCallable(const Model::ReportDeviceCapacityRequest& request) const;
			SaveVideoSummaryTaskVideoOutcome saveVideoSummaryTaskVideo(const Model::SaveVideoSummaryTaskVideoRequest &request)const;
			void saveVideoSummaryTaskVideoAsync(const Model::SaveVideoSummaryTaskVideoRequest& request, const SaveVideoSummaryTaskVideoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SaveVideoSummaryTaskVideoOutcomeCallable saveVideoSummaryTaskVideoCallable(const Model::SaveVideoSummaryTaskVideoRequest& request) const;
			SearchBodyOutcome searchBody(const Model::SearchBodyRequest &request)const;
			void searchBodyAsync(const Model::SearchBodyRequest& request, const SearchBodyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SearchBodyOutcomeCallable searchBodyCallable(const Model::SearchBodyRequest& request) const;
			SearchFaceOutcome searchFace(const Model::SearchFaceRequest &request)const;
			void searchFaceAsync(const Model::SearchFaceRequest& request, const SearchFaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SearchFaceOutcomeCallable searchFaceCallable(const Model::SearchFaceRequest& request) const;
			SearchObjectOutcome searchObject(const Model::SearchObjectRequest &request)const;
			void searchObjectAsync(const Model::SearchObjectRequest& request, const SearchObjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SearchObjectOutcomeCallable searchObjectCallable(const Model::SearchObjectRequest& request) const;
			StopMonitorOutcome stopMonitor(const Model::StopMonitorRequest &request)const;
			void stopMonitorAsync(const Model::StopMonitorRequest& request, const StopMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StopMonitorOutcomeCallable stopMonitorCallable(const Model::StopMonitorRequest& request) const;
			SubscribeDeviceEventOutcome subscribeDeviceEvent(const Model::SubscribeDeviceEventRequest &request)const;
			void subscribeDeviceEventAsync(const Model::SubscribeDeviceEventRequest& request, const SubscribeDeviceEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubscribeDeviceEventOutcomeCallable subscribeDeviceEventCallable(const Model::SubscribeDeviceEventRequest& request) const;
			SubscribeSpaceEventOutcome subscribeSpaceEvent(const Model::SubscribeSpaceEventRequest &request)const;
			void subscribeSpaceEventAsync(const Model::SubscribeSpaceEventRequest& request, const SubscribeSpaceEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubscribeSpaceEventOutcomeCallable subscribeSpaceEventCallable(const Model::SubscribeSpaceEventRequest& request) const;
			SyncDeviceTimeOutcome syncDeviceTime(const Model::SyncDeviceTimeRequest &request)const;
			void syncDeviceTimeAsync(const Model::SyncDeviceTimeRequest& request, const SyncDeviceTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SyncDeviceTimeOutcomeCallable syncDeviceTimeCallable(const Model::SyncDeviceTimeRequest& request) const;
			UnbindCorpGroupOutcome unbindCorpGroup(const Model::UnbindCorpGroupRequest &request)const;
			void unbindCorpGroupAsync(const Model::UnbindCorpGroupRequest& request, const UnbindCorpGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UnbindCorpGroupOutcomeCallable unbindCorpGroupCallable(const Model::UnbindCorpGroupRequest& request) const;
			UnbindPersonOutcome unbindPerson(const Model::UnbindPersonRequest &request)const;
			void unbindPersonAsync(const Model::UnbindPersonRequest& request, const UnbindPersonAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UnbindPersonOutcomeCallable unbindPersonCallable(const Model::UnbindPersonRequest& request) const;
			UnbindUserOutcome unbindUser(const Model::UnbindUserRequest &request)const;
			void unbindUserAsync(const Model::UnbindUserRequest& request, const UnbindUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UnbindUserOutcomeCallable unbindUserCallable(const Model::UnbindUserRequest& request) const;
			UnsubscribeDeviceEventOutcome unsubscribeDeviceEvent(const Model::UnsubscribeDeviceEventRequest &request)const;
			void unsubscribeDeviceEventAsync(const Model::UnsubscribeDeviceEventRequest& request, const UnsubscribeDeviceEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UnsubscribeDeviceEventOutcomeCallable unsubscribeDeviceEventCallable(const Model::UnsubscribeDeviceEventRequest& request) const;
			UnsubscribeSpaceEventOutcome unsubscribeSpaceEvent(const Model::UnsubscribeSpaceEventRequest &request)const;
			void unsubscribeSpaceEventAsync(const Model::UnsubscribeSpaceEventRequest& request, const UnsubscribeSpaceEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UnsubscribeSpaceEventOutcomeCallable unsubscribeSpaceEventCallable(const Model::UnsubscribeSpaceEventRequest& request) const;
			UpdateCorpOutcome updateCorp(const Model::UpdateCorpRequest &request)const;
			void updateCorpAsync(const Model::UpdateCorpRequest& request, const UpdateCorpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateCorpOutcomeCallable updateCorpCallable(const Model::UpdateCorpRequest& request) const;
			UpdateDeviceOutcome updateDevice(const Model::UpdateDeviceRequest &request)const;
			void updateDeviceAsync(const Model::UpdateDeviceRequest& request, const UpdateDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateDeviceOutcomeCallable updateDeviceCallable(const Model::UpdateDeviceRequest& request) const;
			UpdateMonitorOutcome updateMonitor(const Model::UpdateMonitorRequest &request)const;
			void updateMonitorAsync(const Model::UpdateMonitorRequest& request, const UpdateMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateMonitorOutcomeCallable updateMonitorCallable(const Model::UpdateMonitorRequest& request) const;
			UpdateProfileOutcome updateProfile(const Model::UpdateProfileRequest &request)const;
			void updateProfileAsync(const Model::UpdateProfileRequest& request, const UpdateProfileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateProfileOutcomeCallable updateProfileCallable(const Model::UpdateProfileRequest& request) const;
			UpdateProfileCatalogOutcome updateProfileCatalog(const Model::UpdateProfileCatalogRequest &request)const;
			void updateProfileCatalogAsync(const Model::UpdateProfileCatalogRequest& request, const UpdateProfileCatalogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateProfileCatalogOutcomeCallable updateProfileCatalogCallable(const Model::UpdateProfileCatalogRequest& request) const;
			UpdateUserOutcome updateUser(const Model::UpdateUserRequest &request)const;
			void updateUserAsync(const Model::UpdateUserRequest& request, const UpdateUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateUserOutcomeCallable updateUserCallable(const Model::UpdateUserRequest& request) const;
			UpdateUserGroupOutcome updateUserGroup(const Model::UpdateUserGroupRequest &request)const;
			void updateUserGroupAsync(const Model::UpdateUserGroupRequest& request, const UpdateUserGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateUserGroupOutcomeCallable updateUserGroupCallable(const Model::UpdateUserGroupRequest& request) const;
			UploadFileOutcome uploadFile(const Model::UploadFileRequest &request)const;
			void uploadFileAsync(const Model::UploadFileRequest& request, const UploadFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UploadFileOutcomeCallable uploadFileCallable(const Model::UploadFileRequest& request) const;
			UploadImageOutcome uploadImage(const Model::UploadImageRequest &request)const;
			void uploadImageAsync(const Model::UploadImageRequest& request, const UploadImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UploadImageOutcomeCallable uploadImageCallable(const Model::UploadImageRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_VCS_VCSCLIENT_H_
