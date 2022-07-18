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

#ifndef ALIBABACLOUD_CLOUDESL_CLOUDESLCLIENT_H_
#define ALIBABACLOUD_CLOUDESL_CLOUDESLCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "CloudeslExport.h"
#include "model/ActivateApDeviceRequest.h"
#include "model/ActivateApDeviceResult.h"
#include "model/AddApDeviceRequest.h"
#include "model/AddApDeviceResult.h"
#include "model/AddCompanyTemplateRequest.h"
#include "model/AddCompanyTemplateResult.h"
#include "model/AddMaterialRequest.h"
#include "model/AddMaterialResult.h"
#include "model/AddUserRequest.h"
#include "model/AddUserResult.h"
#include "model/ApplyCompanyTemplateVersionToStoresRequest.h"
#include "model/ApplyCompanyTemplateVersionToStoresResult.h"
#include "model/ApplyImageDitheringRequest.h"
#include "model/ApplyImageDitheringResult.h"
#include "model/AssignUserRequest.h"
#include "model/AssignUserResult.h"
#include "model/BatchInsertItemsRequest.h"
#include "model/BatchInsertItemsResult.h"
#include "model/BatchUpdateEventRequest.h"
#include "model/BatchUpdateEventResult.h"
#include "model/BindDeviceLayoutRequest.h"
#include "model/BindDeviceLayoutResult.h"
#include "model/BindEslDeviceRequest.h"
#include "model/BindEslDeviceResult.h"
#include "model/CheckServiceLinkedRoleForDeletingRequest.h"
#include "model/CheckServiceLinkedRoleForDeletingResult.h"
#include "model/CopyCompanyTemplateViewRequest.h"
#include "model/CopyCompanyTemplateViewResult.h"
#include "model/CopyLayoutRequest.h"
#include "model/CopyLayoutResult.h"
#include "model/CopyTemplateGroupRequest.h"
#include "model/CopyTemplateGroupResult.h"
#include "model/CreateStoreRequest.h"
#include "model/CreateStoreResult.h"
#include "model/DeleteApDeviceRequest.h"
#include "model/DeleteApDeviceResult.h"
#include "model/DeleteCompanyTemplateRequest.h"
#include "model/DeleteCompanyTemplateResult.h"
#include "model/DeleteItemRequest.h"
#include "model/DeleteItemResult.h"
#include "model/DeleteLayoutRequest.h"
#include "model/DeleteLayoutResult.h"
#include "model/DeleteMaterialRequest.h"
#include "model/DeleteMaterialResult.h"
#include "model/DeleteStoreRequest.h"
#include "model/DeleteStoreResult.h"
#include "model/DeleteTemplateGroupRequest.h"
#include "model/DeleteTemplateGroupResult.h"
#include "model/DeleteUserRequest.h"
#include "model/DeleteUserResult.h"
#include "model/DescribeApDevicesRequest.h"
#include "model/DescribeApDevicesResult.h"
#include "model/DescribeAvailableEslModelsRequest.h"
#include "model/DescribeAvailableEslModelsResult.h"
#include "model/DescribeBindersRequest.h"
#include "model/DescribeBindersResult.h"
#include "model/DescribeCompanyTemplateAttributeRequest.h"
#include "model/DescribeCompanyTemplateAttributeResult.h"
#include "model/DescribeCompanyTemplateVersionsRequest.h"
#include "model/DescribeCompanyTemplateVersionsResult.h"
#include "model/DescribeCompanyTemplateViewRequest.h"
#include "model/DescribeCompanyTemplateViewResult.h"
#include "model/DescribeEslDevicesRequest.h"
#include "model/DescribeEslDevicesResult.h"
#include "model/DescribeEslModelByTemplateVersionRequest.h"
#include "model/DescribeEslModelByTemplateVersionResult.h"
#include "model/DescribeEventReasonRequest.h"
#include "model/DescribeEventReasonResult.h"
#include "model/DescribeEventsRequest.h"
#include "model/DescribeEventsResult.h"
#include "model/DescribeItemMaterialsRequest.h"
#include "model/DescribeItemMaterialsResult.h"
#include "model/DescribeItemsRequest.h"
#include "model/DescribeItemsResult.h"
#include "model/DescribeMaterialsRequest.h"
#include "model/DescribeMaterialsResult.h"
#include "model/DescribeNotificationConfigRequest.h"
#include "model/DescribeNotificationConfigResult.h"
#include "model/DescribeStoreByTemplateVersionRequest.h"
#include "model/DescribeStoreByTemplateVersionResult.h"
#include "model/DescribeStoreConfigRequest.h"
#include "model/DescribeStoreConfigResult.h"
#include "model/DescribeStoresRequest.h"
#include "model/DescribeStoresResult.h"
#include "model/DescribeTemplateByModelRequest.h"
#include "model/DescribeTemplateByModelResult.h"
#include "model/DescribeUserLogRequest.h"
#include "model/DescribeUserLogResult.h"
#include "model/DescribeUsersRequest.h"
#include "model/DescribeUsersResult.h"
#include "model/ExportEslDevicesRequest.h"
#include "model/ExportEslDevicesResult.h"
#include "model/GetAddMaterialStatusRequest.h"
#include "model/GetAddMaterialStatusResult.h"
#include "model/GetCompanyTemplatePictureRequest.h"
#include "model/GetCompanyTemplatePictureResult.h"
#include "model/GetCompanyTemplatePictureByJobRequest.h"
#include "model/GetCompanyTemplatePictureByJobResult.h"
#include "model/GetCompanyTemplatePictureNewRequest.h"
#include "model/GetCompanyTemplatePictureNewResult.h"
#include "model/GetEslDevicesRequest.h"
#include "model/GetEslDevicesResult.h"
#include "model/GetItemMaterialRequest.h"
#include "model/GetItemMaterialResult.h"
#include "model/GetUserRequest.h"
#include "model/GetUserResult.h"
#include "model/QueryContainerListRequest.h"
#include "model/QueryContainerListResult.h"
#include "model/QueryLayoutByDeviceRequest.h"
#include "model/QueryLayoutByDeviceResult.h"
#include "model/QueryLayoutDetailRequest.h"
#include "model/QueryLayoutDetailResult.h"
#include "model/QueryTemplateGroupListRequest.h"
#include "model/QueryTemplateGroupListResult.h"
#include "model/QueryTemplateListByGroupIdRequest.h"
#include "model/QueryTemplateListByGroupIdResult.h"
#include "model/SaveLayoutRequest.h"
#include "model/SaveLayoutResult.h"
#include "model/SaveTemplateGroupRequest.h"
#include "model/SaveTemplateGroupResult.h"
#include "model/SyncAddMaterialRequest.h"
#include "model/SyncAddMaterialResult.h"
#include "model/UnassignUserRequest.h"
#include "model/UnassignUserResult.h"
#include "model/UnbindEslDeviceRequest.h"
#include "model/UnbindEslDeviceResult.h"
#include "model/UpdateCompanyTemplateRequest.h"
#include "model/UpdateCompanyTemplateResult.h"
#include "model/UpdateCompanyTemplateViewRequest.h"
#include "model/UpdateCompanyTemplateViewResult.h"
#include "model/UpdateEslDeviceLightRequest.h"
#include "model/UpdateEslDeviceLightResult.h"
#include "model/UpdateItemMaterialRequest.h"
#include "model/UpdateItemMaterialResult.h"
#include "model/UpdateNotificationConfigRequest.h"
#include "model/UpdateNotificationConfigResult.h"
#include "model/UpdateStoreRequest.h"
#include "model/UpdateStoreResult.h"
#include "model/UpdateStoreConfigRequest.h"
#include "model/UpdateStoreConfigResult.h"
#include "model/VerifyNotificationConfigRequest.h"
#include "model/VerifyNotificationConfigResult.h"


namespace AlibabaCloud
{
	namespace Cloudesl
	{
		class ALIBABACLOUD_CLOUDESL_EXPORT CloudeslClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::ActivateApDeviceResult> ActivateApDeviceOutcome;
			typedef std::future<ActivateApDeviceOutcome> ActivateApDeviceOutcomeCallable;
			typedef std::function<void(const CloudeslClient*, const Model::ActivateApDeviceRequest&, const ActivateApDeviceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ActivateApDeviceAsyncHandler;
			typedef Outcome<Error, Model::AddApDeviceResult> AddApDeviceOutcome;
			typedef std::future<AddApDeviceOutcome> AddApDeviceOutcomeCallable;
			typedef std::function<void(const CloudeslClient*, const Model::AddApDeviceRequest&, const AddApDeviceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddApDeviceAsyncHandler;
			typedef Outcome<Error, Model::AddCompanyTemplateResult> AddCompanyTemplateOutcome;
			typedef std::future<AddCompanyTemplateOutcome> AddCompanyTemplateOutcomeCallable;
			typedef std::function<void(const CloudeslClient*, const Model::AddCompanyTemplateRequest&, const AddCompanyTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddCompanyTemplateAsyncHandler;
			typedef Outcome<Error, Model::AddMaterialResult> AddMaterialOutcome;
			typedef std::future<AddMaterialOutcome> AddMaterialOutcomeCallable;
			typedef std::function<void(const CloudeslClient*, const Model::AddMaterialRequest&, const AddMaterialOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddMaterialAsyncHandler;
			typedef Outcome<Error, Model::AddUserResult> AddUserOutcome;
			typedef std::future<AddUserOutcome> AddUserOutcomeCallable;
			typedef std::function<void(const CloudeslClient*, const Model::AddUserRequest&, const AddUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddUserAsyncHandler;
			typedef Outcome<Error, Model::ApplyCompanyTemplateVersionToStoresResult> ApplyCompanyTemplateVersionToStoresOutcome;
			typedef std::future<ApplyCompanyTemplateVersionToStoresOutcome> ApplyCompanyTemplateVersionToStoresOutcomeCallable;
			typedef std::function<void(const CloudeslClient*, const Model::ApplyCompanyTemplateVersionToStoresRequest&, const ApplyCompanyTemplateVersionToStoresOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ApplyCompanyTemplateVersionToStoresAsyncHandler;
			typedef Outcome<Error, Model::ApplyImageDitheringResult> ApplyImageDitheringOutcome;
			typedef std::future<ApplyImageDitheringOutcome> ApplyImageDitheringOutcomeCallable;
			typedef std::function<void(const CloudeslClient*, const Model::ApplyImageDitheringRequest&, const ApplyImageDitheringOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ApplyImageDitheringAsyncHandler;
			typedef Outcome<Error, Model::AssignUserResult> AssignUserOutcome;
			typedef std::future<AssignUserOutcome> AssignUserOutcomeCallable;
			typedef std::function<void(const CloudeslClient*, const Model::AssignUserRequest&, const AssignUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AssignUserAsyncHandler;
			typedef Outcome<Error, Model::BatchInsertItemsResult> BatchInsertItemsOutcome;
			typedef std::future<BatchInsertItemsOutcome> BatchInsertItemsOutcomeCallable;
			typedef std::function<void(const CloudeslClient*, const Model::BatchInsertItemsRequest&, const BatchInsertItemsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BatchInsertItemsAsyncHandler;
			typedef Outcome<Error, Model::BatchUpdateEventResult> BatchUpdateEventOutcome;
			typedef std::future<BatchUpdateEventOutcome> BatchUpdateEventOutcomeCallable;
			typedef std::function<void(const CloudeslClient*, const Model::BatchUpdateEventRequest&, const BatchUpdateEventOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BatchUpdateEventAsyncHandler;
			typedef Outcome<Error, Model::BindDeviceLayoutResult> BindDeviceLayoutOutcome;
			typedef std::future<BindDeviceLayoutOutcome> BindDeviceLayoutOutcomeCallable;
			typedef std::function<void(const CloudeslClient*, const Model::BindDeviceLayoutRequest&, const BindDeviceLayoutOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BindDeviceLayoutAsyncHandler;
			typedef Outcome<Error, Model::BindEslDeviceResult> BindEslDeviceOutcome;
			typedef std::future<BindEslDeviceOutcome> BindEslDeviceOutcomeCallable;
			typedef std::function<void(const CloudeslClient*, const Model::BindEslDeviceRequest&, const BindEslDeviceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BindEslDeviceAsyncHandler;
			typedef Outcome<Error, Model::CheckServiceLinkedRoleForDeletingResult> CheckServiceLinkedRoleForDeletingOutcome;
			typedef std::future<CheckServiceLinkedRoleForDeletingOutcome> CheckServiceLinkedRoleForDeletingOutcomeCallable;
			typedef std::function<void(const CloudeslClient*, const Model::CheckServiceLinkedRoleForDeletingRequest&, const CheckServiceLinkedRoleForDeletingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CheckServiceLinkedRoleForDeletingAsyncHandler;
			typedef Outcome<Error, Model::CopyCompanyTemplateViewResult> CopyCompanyTemplateViewOutcome;
			typedef std::future<CopyCompanyTemplateViewOutcome> CopyCompanyTemplateViewOutcomeCallable;
			typedef std::function<void(const CloudeslClient*, const Model::CopyCompanyTemplateViewRequest&, const CopyCompanyTemplateViewOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CopyCompanyTemplateViewAsyncHandler;
			typedef Outcome<Error, Model::CopyLayoutResult> CopyLayoutOutcome;
			typedef std::future<CopyLayoutOutcome> CopyLayoutOutcomeCallable;
			typedef std::function<void(const CloudeslClient*, const Model::CopyLayoutRequest&, const CopyLayoutOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CopyLayoutAsyncHandler;
			typedef Outcome<Error, Model::CopyTemplateGroupResult> CopyTemplateGroupOutcome;
			typedef std::future<CopyTemplateGroupOutcome> CopyTemplateGroupOutcomeCallable;
			typedef std::function<void(const CloudeslClient*, const Model::CopyTemplateGroupRequest&, const CopyTemplateGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CopyTemplateGroupAsyncHandler;
			typedef Outcome<Error, Model::CreateStoreResult> CreateStoreOutcome;
			typedef std::future<CreateStoreOutcome> CreateStoreOutcomeCallable;
			typedef std::function<void(const CloudeslClient*, const Model::CreateStoreRequest&, const CreateStoreOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateStoreAsyncHandler;
			typedef Outcome<Error, Model::DeleteApDeviceResult> DeleteApDeviceOutcome;
			typedef std::future<DeleteApDeviceOutcome> DeleteApDeviceOutcomeCallable;
			typedef std::function<void(const CloudeslClient*, const Model::DeleteApDeviceRequest&, const DeleteApDeviceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteApDeviceAsyncHandler;
			typedef Outcome<Error, Model::DeleteCompanyTemplateResult> DeleteCompanyTemplateOutcome;
			typedef std::future<DeleteCompanyTemplateOutcome> DeleteCompanyTemplateOutcomeCallable;
			typedef std::function<void(const CloudeslClient*, const Model::DeleteCompanyTemplateRequest&, const DeleteCompanyTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCompanyTemplateAsyncHandler;
			typedef Outcome<Error, Model::DeleteItemResult> DeleteItemOutcome;
			typedef std::future<DeleteItemOutcome> DeleteItemOutcomeCallable;
			typedef std::function<void(const CloudeslClient*, const Model::DeleteItemRequest&, const DeleteItemOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteItemAsyncHandler;
			typedef Outcome<Error, Model::DeleteLayoutResult> DeleteLayoutOutcome;
			typedef std::future<DeleteLayoutOutcome> DeleteLayoutOutcomeCallable;
			typedef std::function<void(const CloudeslClient*, const Model::DeleteLayoutRequest&, const DeleteLayoutOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLayoutAsyncHandler;
			typedef Outcome<Error, Model::DeleteMaterialResult> DeleteMaterialOutcome;
			typedef std::future<DeleteMaterialOutcome> DeleteMaterialOutcomeCallable;
			typedef std::function<void(const CloudeslClient*, const Model::DeleteMaterialRequest&, const DeleteMaterialOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteMaterialAsyncHandler;
			typedef Outcome<Error, Model::DeleteStoreResult> DeleteStoreOutcome;
			typedef std::future<DeleteStoreOutcome> DeleteStoreOutcomeCallable;
			typedef std::function<void(const CloudeslClient*, const Model::DeleteStoreRequest&, const DeleteStoreOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteStoreAsyncHandler;
			typedef Outcome<Error, Model::DeleteTemplateGroupResult> DeleteTemplateGroupOutcome;
			typedef std::future<DeleteTemplateGroupOutcome> DeleteTemplateGroupOutcomeCallable;
			typedef std::function<void(const CloudeslClient*, const Model::DeleteTemplateGroupRequest&, const DeleteTemplateGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTemplateGroupAsyncHandler;
			typedef Outcome<Error, Model::DeleteUserResult> DeleteUserOutcome;
			typedef std::future<DeleteUserOutcome> DeleteUserOutcomeCallable;
			typedef std::function<void(const CloudeslClient*, const Model::DeleteUserRequest&, const DeleteUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteUserAsyncHandler;
			typedef Outcome<Error, Model::DescribeApDevicesResult> DescribeApDevicesOutcome;
			typedef std::future<DescribeApDevicesOutcome> DescribeApDevicesOutcomeCallable;
			typedef std::function<void(const CloudeslClient*, const Model::DescribeApDevicesRequest&, const DescribeApDevicesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApDevicesAsyncHandler;
			typedef Outcome<Error, Model::DescribeAvailableEslModelsResult> DescribeAvailableEslModelsOutcome;
			typedef std::future<DescribeAvailableEslModelsOutcome> DescribeAvailableEslModelsOutcomeCallable;
			typedef std::function<void(const CloudeslClient*, const Model::DescribeAvailableEslModelsRequest&, const DescribeAvailableEslModelsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAvailableEslModelsAsyncHandler;
			typedef Outcome<Error, Model::DescribeBindersResult> DescribeBindersOutcome;
			typedef std::future<DescribeBindersOutcome> DescribeBindersOutcomeCallable;
			typedef std::function<void(const CloudeslClient*, const Model::DescribeBindersRequest&, const DescribeBindersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBindersAsyncHandler;
			typedef Outcome<Error, Model::DescribeCompanyTemplateAttributeResult> DescribeCompanyTemplateAttributeOutcome;
			typedef std::future<DescribeCompanyTemplateAttributeOutcome> DescribeCompanyTemplateAttributeOutcomeCallable;
			typedef std::function<void(const CloudeslClient*, const Model::DescribeCompanyTemplateAttributeRequest&, const DescribeCompanyTemplateAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCompanyTemplateAttributeAsyncHandler;
			typedef Outcome<Error, Model::DescribeCompanyTemplateVersionsResult> DescribeCompanyTemplateVersionsOutcome;
			typedef std::future<DescribeCompanyTemplateVersionsOutcome> DescribeCompanyTemplateVersionsOutcomeCallable;
			typedef std::function<void(const CloudeslClient*, const Model::DescribeCompanyTemplateVersionsRequest&, const DescribeCompanyTemplateVersionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCompanyTemplateVersionsAsyncHandler;
			typedef Outcome<Error, Model::DescribeCompanyTemplateViewResult> DescribeCompanyTemplateViewOutcome;
			typedef std::future<DescribeCompanyTemplateViewOutcome> DescribeCompanyTemplateViewOutcomeCallable;
			typedef std::function<void(const CloudeslClient*, const Model::DescribeCompanyTemplateViewRequest&, const DescribeCompanyTemplateViewOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCompanyTemplateViewAsyncHandler;
			typedef Outcome<Error, Model::DescribeEslDevicesResult> DescribeEslDevicesOutcome;
			typedef std::future<DescribeEslDevicesOutcome> DescribeEslDevicesOutcomeCallable;
			typedef std::function<void(const CloudeslClient*, const Model::DescribeEslDevicesRequest&, const DescribeEslDevicesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEslDevicesAsyncHandler;
			typedef Outcome<Error, Model::DescribeEslModelByTemplateVersionResult> DescribeEslModelByTemplateVersionOutcome;
			typedef std::future<DescribeEslModelByTemplateVersionOutcome> DescribeEslModelByTemplateVersionOutcomeCallable;
			typedef std::function<void(const CloudeslClient*, const Model::DescribeEslModelByTemplateVersionRequest&, const DescribeEslModelByTemplateVersionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEslModelByTemplateVersionAsyncHandler;
			typedef Outcome<Error, Model::DescribeEventReasonResult> DescribeEventReasonOutcome;
			typedef std::future<DescribeEventReasonOutcome> DescribeEventReasonOutcomeCallable;
			typedef std::function<void(const CloudeslClient*, const Model::DescribeEventReasonRequest&, const DescribeEventReasonOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEventReasonAsyncHandler;
			typedef Outcome<Error, Model::DescribeEventsResult> DescribeEventsOutcome;
			typedef std::future<DescribeEventsOutcome> DescribeEventsOutcomeCallable;
			typedef std::function<void(const CloudeslClient*, const Model::DescribeEventsRequest&, const DescribeEventsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEventsAsyncHandler;
			typedef Outcome<Error, Model::DescribeItemMaterialsResult> DescribeItemMaterialsOutcome;
			typedef std::future<DescribeItemMaterialsOutcome> DescribeItemMaterialsOutcomeCallable;
			typedef std::function<void(const CloudeslClient*, const Model::DescribeItemMaterialsRequest&, const DescribeItemMaterialsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeItemMaterialsAsyncHandler;
			typedef Outcome<Error, Model::DescribeItemsResult> DescribeItemsOutcome;
			typedef std::future<DescribeItemsOutcome> DescribeItemsOutcomeCallable;
			typedef std::function<void(const CloudeslClient*, const Model::DescribeItemsRequest&, const DescribeItemsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeItemsAsyncHandler;
			typedef Outcome<Error, Model::DescribeMaterialsResult> DescribeMaterialsOutcome;
			typedef std::future<DescribeMaterialsOutcome> DescribeMaterialsOutcomeCallable;
			typedef std::function<void(const CloudeslClient*, const Model::DescribeMaterialsRequest&, const DescribeMaterialsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMaterialsAsyncHandler;
			typedef Outcome<Error, Model::DescribeNotificationConfigResult> DescribeNotificationConfigOutcome;
			typedef std::future<DescribeNotificationConfigOutcome> DescribeNotificationConfigOutcomeCallable;
			typedef std::function<void(const CloudeslClient*, const Model::DescribeNotificationConfigRequest&, const DescribeNotificationConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNotificationConfigAsyncHandler;
			typedef Outcome<Error, Model::DescribeStoreByTemplateVersionResult> DescribeStoreByTemplateVersionOutcome;
			typedef std::future<DescribeStoreByTemplateVersionOutcome> DescribeStoreByTemplateVersionOutcomeCallable;
			typedef std::function<void(const CloudeslClient*, const Model::DescribeStoreByTemplateVersionRequest&, const DescribeStoreByTemplateVersionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStoreByTemplateVersionAsyncHandler;
			typedef Outcome<Error, Model::DescribeStoreConfigResult> DescribeStoreConfigOutcome;
			typedef std::future<DescribeStoreConfigOutcome> DescribeStoreConfigOutcomeCallable;
			typedef std::function<void(const CloudeslClient*, const Model::DescribeStoreConfigRequest&, const DescribeStoreConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStoreConfigAsyncHandler;
			typedef Outcome<Error, Model::DescribeStoresResult> DescribeStoresOutcome;
			typedef std::future<DescribeStoresOutcome> DescribeStoresOutcomeCallable;
			typedef std::function<void(const CloudeslClient*, const Model::DescribeStoresRequest&, const DescribeStoresOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStoresAsyncHandler;
			typedef Outcome<Error, Model::DescribeTemplateByModelResult> DescribeTemplateByModelOutcome;
			typedef std::future<DescribeTemplateByModelOutcome> DescribeTemplateByModelOutcomeCallable;
			typedef std::function<void(const CloudeslClient*, const Model::DescribeTemplateByModelRequest&, const DescribeTemplateByModelOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTemplateByModelAsyncHandler;
			typedef Outcome<Error, Model::DescribeUserLogResult> DescribeUserLogOutcome;
			typedef std::future<DescribeUserLogOutcome> DescribeUserLogOutcomeCallable;
			typedef std::function<void(const CloudeslClient*, const Model::DescribeUserLogRequest&, const DescribeUserLogOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserLogAsyncHandler;
			typedef Outcome<Error, Model::DescribeUsersResult> DescribeUsersOutcome;
			typedef std::future<DescribeUsersOutcome> DescribeUsersOutcomeCallable;
			typedef std::function<void(const CloudeslClient*, const Model::DescribeUsersRequest&, const DescribeUsersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUsersAsyncHandler;
			typedef Outcome<Error, Model::ExportEslDevicesResult> ExportEslDevicesOutcome;
			typedef std::future<ExportEslDevicesOutcome> ExportEslDevicesOutcomeCallable;
			typedef std::function<void(const CloudeslClient*, const Model::ExportEslDevicesRequest&, const ExportEslDevicesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ExportEslDevicesAsyncHandler;
			typedef Outcome<Error, Model::GetAddMaterialStatusResult> GetAddMaterialStatusOutcome;
			typedef std::future<GetAddMaterialStatusOutcome> GetAddMaterialStatusOutcomeCallable;
			typedef std::function<void(const CloudeslClient*, const Model::GetAddMaterialStatusRequest&, const GetAddMaterialStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetAddMaterialStatusAsyncHandler;
			typedef Outcome<Error, Model::GetCompanyTemplatePictureResult> GetCompanyTemplatePictureOutcome;
			typedef std::future<GetCompanyTemplatePictureOutcome> GetCompanyTemplatePictureOutcomeCallable;
			typedef std::function<void(const CloudeslClient*, const Model::GetCompanyTemplatePictureRequest&, const GetCompanyTemplatePictureOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetCompanyTemplatePictureAsyncHandler;
			typedef Outcome<Error, Model::GetCompanyTemplatePictureByJobResult> GetCompanyTemplatePictureByJobOutcome;
			typedef std::future<GetCompanyTemplatePictureByJobOutcome> GetCompanyTemplatePictureByJobOutcomeCallable;
			typedef std::function<void(const CloudeslClient*, const Model::GetCompanyTemplatePictureByJobRequest&, const GetCompanyTemplatePictureByJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetCompanyTemplatePictureByJobAsyncHandler;
			typedef Outcome<Error, Model::GetCompanyTemplatePictureNewResult> GetCompanyTemplatePictureNewOutcome;
			typedef std::future<GetCompanyTemplatePictureNewOutcome> GetCompanyTemplatePictureNewOutcomeCallable;
			typedef std::function<void(const CloudeslClient*, const Model::GetCompanyTemplatePictureNewRequest&, const GetCompanyTemplatePictureNewOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetCompanyTemplatePictureNewAsyncHandler;
			typedef Outcome<Error, Model::GetEslDevicesResult> GetEslDevicesOutcome;
			typedef std::future<GetEslDevicesOutcome> GetEslDevicesOutcomeCallable;
			typedef std::function<void(const CloudeslClient*, const Model::GetEslDevicesRequest&, const GetEslDevicesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetEslDevicesAsyncHandler;
			typedef Outcome<Error, Model::GetItemMaterialResult> GetItemMaterialOutcome;
			typedef std::future<GetItemMaterialOutcome> GetItemMaterialOutcomeCallable;
			typedef std::function<void(const CloudeslClient*, const Model::GetItemMaterialRequest&, const GetItemMaterialOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetItemMaterialAsyncHandler;
			typedef Outcome<Error, Model::GetUserResult> GetUserOutcome;
			typedef std::future<GetUserOutcome> GetUserOutcomeCallable;
			typedef std::function<void(const CloudeslClient*, const Model::GetUserRequest&, const GetUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetUserAsyncHandler;
			typedef Outcome<Error, Model::QueryContainerListResult> QueryContainerListOutcome;
			typedef std::future<QueryContainerListOutcome> QueryContainerListOutcomeCallable;
			typedef std::function<void(const CloudeslClient*, const Model::QueryContainerListRequest&, const QueryContainerListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryContainerListAsyncHandler;
			typedef Outcome<Error, Model::QueryLayoutByDeviceResult> QueryLayoutByDeviceOutcome;
			typedef std::future<QueryLayoutByDeviceOutcome> QueryLayoutByDeviceOutcomeCallable;
			typedef std::function<void(const CloudeslClient*, const Model::QueryLayoutByDeviceRequest&, const QueryLayoutByDeviceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryLayoutByDeviceAsyncHandler;
			typedef Outcome<Error, Model::QueryLayoutDetailResult> QueryLayoutDetailOutcome;
			typedef std::future<QueryLayoutDetailOutcome> QueryLayoutDetailOutcomeCallable;
			typedef std::function<void(const CloudeslClient*, const Model::QueryLayoutDetailRequest&, const QueryLayoutDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryLayoutDetailAsyncHandler;
			typedef Outcome<Error, Model::QueryTemplateGroupListResult> QueryTemplateGroupListOutcome;
			typedef std::future<QueryTemplateGroupListOutcome> QueryTemplateGroupListOutcomeCallable;
			typedef std::function<void(const CloudeslClient*, const Model::QueryTemplateGroupListRequest&, const QueryTemplateGroupListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryTemplateGroupListAsyncHandler;
			typedef Outcome<Error, Model::QueryTemplateListByGroupIdResult> QueryTemplateListByGroupIdOutcome;
			typedef std::future<QueryTemplateListByGroupIdOutcome> QueryTemplateListByGroupIdOutcomeCallable;
			typedef std::function<void(const CloudeslClient*, const Model::QueryTemplateListByGroupIdRequest&, const QueryTemplateListByGroupIdOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryTemplateListByGroupIdAsyncHandler;
			typedef Outcome<Error, Model::SaveLayoutResult> SaveLayoutOutcome;
			typedef std::future<SaveLayoutOutcome> SaveLayoutOutcomeCallable;
			typedef std::function<void(const CloudeslClient*, const Model::SaveLayoutRequest&, const SaveLayoutOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SaveLayoutAsyncHandler;
			typedef Outcome<Error, Model::SaveTemplateGroupResult> SaveTemplateGroupOutcome;
			typedef std::future<SaveTemplateGroupOutcome> SaveTemplateGroupOutcomeCallable;
			typedef std::function<void(const CloudeslClient*, const Model::SaveTemplateGroupRequest&, const SaveTemplateGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SaveTemplateGroupAsyncHandler;
			typedef Outcome<Error, Model::SyncAddMaterialResult> SyncAddMaterialOutcome;
			typedef std::future<SyncAddMaterialOutcome> SyncAddMaterialOutcomeCallable;
			typedef std::function<void(const CloudeslClient*, const Model::SyncAddMaterialRequest&, const SyncAddMaterialOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SyncAddMaterialAsyncHandler;
			typedef Outcome<Error, Model::UnassignUserResult> UnassignUserOutcome;
			typedef std::future<UnassignUserOutcome> UnassignUserOutcomeCallable;
			typedef std::function<void(const CloudeslClient*, const Model::UnassignUserRequest&, const UnassignUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UnassignUserAsyncHandler;
			typedef Outcome<Error, Model::UnbindEslDeviceResult> UnbindEslDeviceOutcome;
			typedef std::future<UnbindEslDeviceOutcome> UnbindEslDeviceOutcomeCallable;
			typedef std::function<void(const CloudeslClient*, const Model::UnbindEslDeviceRequest&, const UnbindEslDeviceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UnbindEslDeviceAsyncHandler;
			typedef Outcome<Error, Model::UpdateCompanyTemplateResult> UpdateCompanyTemplateOutcome;
			typedef std::future<UpdateCompanyTemplateOutcome> UpdateCompanyTemplateOutcomeCallable;
			typedef std::function<void(const CloudeslClient*, const Model::UpdateCompanyTemplateRequest&, const UpdateCompanyTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateCompanyTemplateAsyncHandler;
			typedef Outcome<Error, Model::UpdateCompanyTemplateViewResult> UpdateCompanyTemplateViewOutcome;
			typedef std::future<UpdateCompanyTemplateViewOutcome> UpdateCompanyTemplateViewOutcomeCallable;
			typedef std::function<void(const CloudeslClient*, const Model::UpdateCompanyTemplateViewRequest&, const UpdateCompanyTemplateViewOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateCompanyTemplateViewAsyncHandler;
			typedef Outcome<Error, Model::UpdateEslDeviceLightResult> UpdateEslDeviceLightOutcome;
			typedef std::future<UpdateEslDeviceLightOutcome> UpdateEslDeviceLightOutcomeCallable;
			typedef std::function<void(const CloudeslClient*, const Model::UpdateEslDeviceLightRequest&, const UpdateEslDeviceLightOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateEslDeviceLightAsyncHandler;
			typedef Outcome<Error, Model::UpdateItemMaterialResult> UpdateItemMaterialOutcome;
			typedef std::future<UpdateItemMaterialOutcome> UpdateItemMaterialOutcomeCallable;
			typedef std::function<void(const CloudeslClient*, const Model::UpdateItemMaterialRequest&, const UpdateItemMaterialOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateItemMaterialAsyncHandler;
			typedef Outcome<Error, Model::UpdateNotificationConfigResult> UpdateNotificationConfigOutcome;
			typedef std::future<UpdateNotificationConfigOutcome> UpdateNotificationConfigOutcomeCallable;
			typedef std::function<void(const CloudeslClient*, const Model::UpdateNotificationConfigRequest&, const UpdateNotificationConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateNotificationConfigAsyncHandler;
			typedef Outcome<Error, Model::UpdateStoreResult> UpdateStoreOutcome;
			typedef std::future<UpdateStoreOutcome> UpdateStoreOutcomeCallable;
			typedef std::function<void(const CloudeslClient*, const Model::UpdateStoreRequest&, const UpdateStoreOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateStoreAsyncHandler;
			typedef Outcome<Error, Model::UpdateStoreConfigResult> UpdateStoreConfigOutcome;
			typedef std::future<UpdateStoreConfigOutcome> UpdateStoreConfigOutcomeCallable;
			typedef std::function<void(const CloudeslClient*, const Model::UpdateStoreConfigRequest&, const UpdateStoreConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateStoreConfigAsyncHandler;
			typedef Outcome<Error, Model::VerifyNotificationConfigResult> VerifyNotificationConfigOutcome;
			typedef std::future<VerifyNotificationConfigOutcome> VerifyNotificationConfigOutcomeCallable;
			typedef std::function<void(const CloudeslClient*, const Model::VerifyNotificationConfigRequest&, const VerifyNotificationConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> VerifyNotificationConfigAsyncHandler;

			CloudeslClient(const Credentials &credentials, const ClientConfiguration &configuration);
			CloudeslClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			CloudeslClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~CloudeslClient();
			ActivateApDeviceOutcome activateApDevice(const Model::ActivateApDeviceRequest &request)const;
			void activateApDeviceAsync(const Model::ActivateApDeviceRequest& request, const ActivateApDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ActivateApDeviceOutcomeCallable activateApDeviceCallable(const Model::ActivateApDeviceRequest& request) const;
			AddApDeviceOutcome addApDevice(const Model::AddApDeviceRequest &request)const;
			void addApDeviceAsync(const Model::AddApDeviceRequest& request, const AddApDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddApDeviceOutcomeCallable addApDeviceCallable(const Model::AddApDeviceRequest& request) const;
			AddCompanyTemplateOutcome addCompanyTemplate(const Model::AddCompanyTemplateRequest &request)const;
			void addCompanyTemplateAsync(const Model::AddCompanyTemplateRequest& request, const AddCompanyTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddCompanyTemplateOutcomeCallable addCompanyTemplateCallable(const Model::AddCompanyTemplateRequest& request) const;
			AddMaterialOutcome addMaterial(const Model::AddMaterialRequest &request)const;
			void addMaterialAsync(const Model::AddMaterialRequest& request, const AddMaterialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddMaterialOutcomeCallable addMaterialCallable(const Model::AddMaterialRequest& request) const;
			AddUserOutcome addUser(const Model::AddUserRequest &request)const;
			void addUserAsync(const Model::AddUserRequest& request, const AddUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddUserOutcomeCallable addUserCallable(const Model::AddUserRequest& request) const;
			ApplyCompanyTemplateVersionToStoresOutcome applyCompanyTemplateVersionToStores(const Model::ApplyCompanyTemplateVersionToStoresRequest &request)const;
			void applyCompanyTemplateVersionToStoresAsync(const Model::ApplyCompanyTemplateVersionToStoresRequest& request, const ApplyCompanyTemplateVersionToStoresAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ApplyCompanyTemplateVersionToStoresOutcomeCallable applyCompanyTemplateVersionToStoresCallable(const Model::ApplyCompanyTemplateVersionToStoresRequest& request) const;
			ApplyImageDitheringOutcome applyImageDithering(const Model::ApplyImageDitheringRequest &request)const;
			void applyImageDitheringAsync(const Model::ApplyImageDitheringRequest& request, const ApplyImageDitheringAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ApplyImageDitheringOutcomeCallable applyImageDitheringCallable(const Model::ApplyImageDitheringRequest& request) const;
			AssignUserOutcome assignUser(const Model::AssignUserRequest &request)const;
			void assignUserAsync(const Model::AssignUserRequest& request, const AssignUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AssignUserOutcomeCallable assignUserCallable(const Model::AssignUserRequest& request) const;
			BatchInsertItemsOutcome batchInsertItems(const Model::BatchInsertItemsRequest &request)const;
			void batchInsertItemsAsync(const Model::BatchInsertItemsRequest& request, const BatchInsertItemsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BatchInsertItemsOutcomeCallable batchInsertItemsCallable(const Model::BatchInsertItemsRequest& request) const;
			BatchUpdateEventOutcome batchUpdateEvent(const Model::BatchUpdateEventRequest &request)const;
			void batchUpdateEventAsync(const Model::BatchUpdateEventRequest& request, const BatchUpdateEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BatchUpdateEventOutcomeCallable batchUpdateEventCallable(const Model::BatchUpdateEventRequest& request) const;
			BindDeviceLayoutOutcome bindDeviceLayout(const Model::BindDeviceLayoutRequest &request)const;
			void bindDeviceLayoutAsync(const Model::BindDeviceLayoutRequest& request, const BindDeviceLayoutAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BindDeviceLayoutOutcomeCallable bindDeviceLayoutCallable(const Model::BindDeviceLayoutRequest& request) const;
			BindEslDeviceOutcome bindEslDevice(const Model::BindEslDeviceRequest &request)const;
			void bindEslDeviceAsync(const Model::BindEslDeviceRequest& request, const BindEslDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BindEslDeviceOutcomeCallable bindEslDeviceCallable(const Model::BindEslDeviceRequest& request) const;
			CheckServiceLinkedRoleForDeletingOutcome checkServiceLinkedRoleForDeleting(const Model::CheckServiceLinkedRoleForDeletingRequest &request)const;
			void checkServiceLinkedRoleForDeletingAsync(const Model::CheckServiceLinkedRoleForDeletingRequest& request, const CheckServiceLinkedRoleForDeletingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CheckServiceLinkedRoleForDeletingOutcomeCallable checkServiceLinkedRoleForDeletingCallable(const Model::CheckServiceLinkedRoleForDeletingRequest& request) const;
			CopyCompanyTemplateViewOutcome copyCompanyTemplateView(const Model::CopyCompanyTemplateViewRequest &request)const;
			void copyCompanyTemplateViewAsync(const Model::CopyCompanyTemplateViewRequest& request, const CopyCompanyTemplateViewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CopyCompanyTemplateViewOutcomeCallable copyCompanyTemplateViewCallable(const Model::CopyCompanyTemplateViewRequest& request) const;
			CopyLayoutOutcome copyLayout(const Model::CopyLayoutRequest &request)const;
			void copyLayoutAsync(const Model::CopyLayoutRequest& request, const CopyLayoutAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CopyLayoutOutcomeCallable copyLayoutCallable(const Model::CopyLayoutRequest& request) const;
			CopyTemplateGroupOutcome copyTemplateGroup(const Model::CopyTemplateGroupRequest &request)const;
			void copyTemplateGroupAsync(const Model::CopyTemplateGroupRequest& request, const CopyTemplateGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CopyTemplateGroupOutcomeCallable copyTemplateGroupCallable(const Model::CopyTemplateGroupRequest& request) const;
			CreateStoreOutcome createStore(const Model::CreateStoreRequest &request)const;
			void createStoreAsync(const Model::CreateStoreRequest& request, const CreateStoreAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateStoreOutcomeCallable createStoreCallable(const Model::CreateStoreRequest& request) const;
			DeleteApDeviceOutcome deleteApDevice(const Model::DeleteApDeviceRequest &request)const;
			void deleteApDeviceAsync(const Model::DeleteApDeviceRequest& request, const DeleteApDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteApDeviceOutcomeCallable deleteApDeviceCallable(const Model::DeleteApDeviceRequest& request) const;
			DeleteCompanyTemplateOutcome deleteCompanyTemplate(const Model::DeleteCompanyTemplateRequest &request)const;
			void deleteCompanyTemplateAsync(const Model::DeleteCompanyTemplateRequest& request, const DeleteCompanyTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteCompanyTemplateOutcomeCallable deleteCompanyTemplateCallable(const Model::DeleteCompanyTemplateRequest& request) const;
			DeleteItemOutcome deleteItem(const Model::DeleteItemRequest &request)const;
			void deleteItemAsync(const Model::DeleteItemRequest& request, const DeleteItemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteItemOutcomeCallable deleteItemCallable(const Model::DeleteItemRequest& request) const;
			DeleteLayoutOutcome deleteLayout(const Model::DeleteLayoutRequest &request)const;
			void deleteLayoutAsync(const Model::DeleteLayoutRequest& request, const DeleteLayoutAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteLayoutOutcomeCallable deleteLayoutCallable(const Model::DeleteLayoutRequest& request) const;
			DeleteMaterialOutcome deleteMaterial(const Model::DeleteMaterialRequest &request)const;
			void deleteMaterialAsync(const Model::DeleteMaterialRequest& request, const DeleteMaterialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteMaterialOutcomeCallable deleteMaterialCallable(const Model::DeleteMaterialRequest& request) const;
			DeleteStoreOutcome deleteStore(const Model::DeleteStoreRequest &request)const;
			void deleteStoreAsync(const Model::DeleteStoreRequest& request, const DeleteStoreAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteStoreOutcomeCallable deleteStoreCallable(const Model::DeleteStoreRequest& request) const;
			DeleteTemplateGroupOutcome deleteTemplateGroup(const Model::DeleteTemplateGroupRequest &request)const;
			void deleteTemplateGroupAsync(const Model::DeleteTemplateGroupRequest& request, const DeleteTemplateGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteTemplateGroupOutcomeCallable deleteTemplateGroupCallable(const Model::DeleteTemplateGroupRequest& request) const;
			DeleteUserOutcome deleteUser(const Model::DeleteUserRequest &request)const;
			void deleteUserAsync(const Model::DeleteUserRequest& request, const DeleteUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteUserOutcomeCallable deleteUserCallable(const Model::DeleteUserRequest& request) const;
			DescribeApDevicesOutcome describeApDevices(const Model::DescribeApDevicesRequest &request)const;
			void describeApDevicesAsync(const Model::DescribeApDevicesRequest& request, const DescribeApDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeApDevicesOutcomeCallable describeApDevicesCallable(const Model::DescribeApDevicesRequest& request) const;
			DescribeAvailableEslModelsOutcome describeAvailableEslModels(const Model::DescribeAvailableEslModelsRequest &request)const;
			void describeAvailableEslModelsAsync(const Model::DescribeAvailableEslModelsRequest& request, const DescribeAvailableEslModelsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAvailableEslModelsOutcomeCallable describeAvailableEslModelsCallable(const Model::DescribeAvailableEslModelsRequest& request) const;
			DescribeBindersOutcome describeBinders(const Model::DescribeBindersRequest &request)const;
			void describeBindersAsync(const Model::DescribeBindersRequest& request, const DescribeBindersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeBindersOutcomeCallable describeBindersCallable(const Model::DescribeBindersRequest& request) const;
			DescribeCompanyTemplateAttributeOutcome describeCompanyTemplateAttribute(const Model::DescribeCompanyTemplateAttributeRequest &request)const;
			void describeCompanyTemplateAttributeAsync(const Model::DescribeCompanyTemplateAttributeRequest& request, const DescribeCompanyTemplateAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCompanyTemplateAttributeOutcomeCallable describeCompanyTemplateAttributeCallable(const Model::DescribeCompanyTemplateAttributeRequest& request) const;
			DescribeCompanyTemplateVersionsOutcome describeCompanyTemplateVersions(const Model::DescribeCompanyTemplateVersionsRequest &request)const;
			void describeCompanyTemplateVersionsAsync(const Model::DescribeCompanyTemplateVersionsRequest& request, const DescribeCompanyTemplateVersionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCompanyTemplateVersionsOutcomeCallable describeCompanyTemplateVersionsCallable(const Model::DescribeCompanyTemplateVersionsRequest& request) const;
			DescribeCompanyTemplateViewOutcome describeCompanyTemplateView(const Model::DescribeCompanyTemplateViewRequest &request)const;
			void describeCompanyTemplateViewAsync(const Model::DescribeCompanyTemplateViewRequest& request, const DescribeCompanyTemplateViewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCompanyTemplateViewOutcomeCallable describeCompanyTemplateViewCallable(const Model::DescribeCompanyTemplateViewRequest& request) const;
			DescribeEslDevicesOutcome describeEslDevices(const Model::DescribeEslDevicesRequest &request)const;
			void describeEslDevicesAsync(const Model::DescribeEslDevicesRequest& request, const DescribeEslDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeEslDevicesOutcomeCallable describeEslDevicesCallable(const Model::DescribeEslDevicesRequest& request) const;
			DescribeEslModelByTemplateVersionOutcome describeEslModelByTemplateVersion(const Model::DescribeEslModelByTemplateVersionRequest &request)const;
			void describeEslModelByTemplateVersionAsync(const Model::DescribeEslModelByTemplateVersionRequest& request, const DescribeEslModelByTemplateVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeEslModelByTemplateVersionOutcomeCallable describeEslModelByTemplateVersionCallable(const Model::DescribeEslModelByTemplateVersionRequest& request) const;
			DescribeEventReasonOutcome describeEventReason(const Model::DescribeEventReasonRequest &request)const;
			void describeEventReasonAsync(const Model::DescribeEventReasonRequest& request, const DescribeEventReasonAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeEventReasonOutcomeCallable describeEventReasonCallable(const Model::DescribeEventReasonRequest& request) const;
			DescribeEventsOutcome describeEvents(const Model::DescribeEventsRequest &request)const;
			void describeEventsAsync(const Model::DescribeEventsRequest& request, const DescribeEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeEventsOutcomeCallable describeEventsCallable(const Model::DescribeEventsRequest& request) const;
			DescribeItemMaterialsOutcome describeItemMaterials(const Model::DescribeItemMaterialsRequest &request)const;
			void describeItemMaterialsAsync(const Model::DescribeItemMaterialsRequest& request, const DescribeItemMaterialsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeItemMaterialsOutcomeCallable describeItemMaterialsCallable(const Model::DescribeItemMaterialsRequest& request) const;
			DescribeItemsOutcome describeItems(const Model::DescribeItemsRequest &request)const;
			void describeItemsAsync(const Model::DescribeItemsRequest& request, const DescribeItemsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeItemsOutcomeCallable describeItemsCallable(const Model::DescribeItemsRequest& request) const;
			DescribeMaterialsOutcome describeMaterials(const Model::DescribeMaterialsRequest &request)const;
			void describeMaterialsAsync(const Model::DescribeMaterialsRequest& request, const DescribeMaterialsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeMaterialsOutcomeCallable describeMaterialsCallable(const Model::DescribeMaterialsRequest& request) const;
			DescribeNotificationConfigOutcome describeNotificationConfig(const Model::DescribeNotificationConfigRequest &request)const;
			void describeNotificationConfigAsync(const Model::DescribeNotificationConfigRequest& request, const DescribeNotificationConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeNotificationConfigOutcomeCallable describeNotificationConfigCallable(const Model::DescribeNotificationConfigRequest& request) const;
			DescribeStoreByTemplateVersionOutcome describeStoreByTemplateVersion(const Model::DescribeStoreByTemplateVersionRequest &request)const;
			void describeStoreByTemplateVersionAsync(const Model::DescribeStoreByTemplateVersionRequest& request, const DescribeStoreByTemplateVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeStoreByTemplateVersionOutcomeCallable describeStoreByTemplateVersionCallable(const Model::DescribeStoreByTemplateVersionRequest& request) const;
			DescribeStoreConfigOutcome describeStoreConfig(const Model::DescribeStoreConfigRequest &request)const;
			void describeStoreConfigAsync(const Model::DescribeStoreConfigRequest& request, const DescribeStoreConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeStoreConfigOutcomeCallable describeStoreConfigCallable(const Model::DescribeStoreConfigRequest& request) const;
			DescribeStoresOutcome describeStores(const Model::DescribeStoresRequest &request)const;
			void describeStoresAsync(const Model::DescribeStoresRequest& request, const DescribeStoresAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeStoresOutcomeCallable describeStoresCallable(const Model::DescribeStoresRequest& request) const;
			DescribeTemplateByModelOutcome describeTemplateByModel(const Model::DescribeTemplateByModelRequest &request)const;
			void describeTemplateByModelAsync(const Model::DescribeTemplateByModelRequest& request, const DescribeTemplateByModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeTemplateByModelOutcomeCallable describeTemplateByModelCallable(const Model::DescribeTemplateByModelRequest& request) const;
			DescribeUserLogOutcome describeUserLog(const Model::DescribeUserLogRequest &request)const;
			void describeUserLogAsync(const Model::DescribeUserLogRequest& request, const DescribeUserLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeUserLogOutcomeCallable describeUserLogCallable(const Model::DescribeUserLogRequest& request) const;
			DescribeUsersOutcome describeUsers(const Model::DescribeUsersRequest &request)const;
			void describeUsersAsync(const Model::DescribeUsersRequest& request, const DescribeUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeUsersOutcomeCallable describeUsersCallable(const Model::DescribeUsersRequest& request) const;
			ExportEslDevicesOutcome exportEslDevices(const Model::ExportEslDevicesRequest &request)const;
			void exportEslDevicesAsync(const Model::ExportEslDevicesRequest& request, const ExportEslDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ExportEslDevicesOutcomeCallable exportEslDevicesCallable(const Model::ExportEslDevicesRequest& request) const;
			GetAddMaterialStatusOutcome getAddMaterialStatus(const Model::GetAddMaterialStatusRequest &request)const;
			void getAddMaterialStatusAsync(const Model::GetAddMaterialStatusRequest& request, const GetAddMaterialStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetAddMaterialStatusOutcomeCallable getAddMaterialStatusCallable(const Model::GetAddMaterialStatusRequest& request) const;
			GetCompanyTemplatePictureOutcome getCompanyTemplatePicture(const Model::GetCompanyTemplatePictureRequest &request)const;
			void getCompanyTemplatePictureAsync(const Model::GetCompanyTemplatePictureRequest& request, const GetCompanyTemplatePictureAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetCompanyTemplatePictureOutcomeCallable getCompanyTemplatePictureCallable(const Model::GetCompanyTemplatePictureRequest& request) const;
			GetCompanyTemplatePictureByJobOutcome getCompanyTemplatePictureByJob(const Model::GetCompanyTemplatePictureByJobRequest &request)const;
			void getCompanyTemplatePictureByJobAsync(const Model::GetCompanyTemplatePictureByJobRequest& request, const GetCompanyTemplatePictureByJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetCompanyTemplatePictureByJobOutcomeCallable getCompanyTemplatePictureByJobCallable(const Model::GetCompanyTemplatePictureByJobRequest& request) const;
			GetCompanyTemplatePictureNewOutcome getCompanyTemplatePictureNew(const Model::GetCompanyTemplatePictureNewRequest &request)const;
			void getCompanyTemplatePictureNewAsync(const Model::GetCompanyTemplatePictureNewRequest& request, const GetCompanyTemplatePictureNewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetCompanyTemplatePictureNewOutcomeCallable getCompanyTemplatePictureNewCallable(const Model::GetCompanyTemplatePictureNewRequest& request) const;
			GetEslDevicesOutcome getEslDevices(const Model::GetEslDevicesRequest &request)const;
			void getEslDevicesAsync(const Model::GetEslDevicesRequest& request, const GetEslDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetEslDevicesOutcomeCallable getEslDevicesCallable(const Model::GetEslDevicesRequest& request) const;
			GetItemMaterialOutcome getItemMaterial(const Model::GetItemMaterialRequest &request)const;
			void getItemMaterialAsync(const Model::GetItemMaterialRequest& request, const GetItemMaterialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetItemMaterialOutcomeCallable getItemMaterialCallable(const Model::GetItemMaterialRequest& request) const;
			GetUserOutcome getUser(const Model::GetUserRequest &request)const;
			void getUserAsync(const Model::GetUserRequest& request, const GetUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetUserOutcomeCallable getUserCallable(const Model::GetUserRequest& request) const;
			QueryContainerListOutcome queryContainerList(const Model::QueryContainerListRequest &request)const;
			void queryContainerListAsync(const Model::QueryContainerListRequest& request, const QueryContainerListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryContainerListOutcomeCallable queryContainerListCallable(const Model::QueryContainerListRequest& request) const;
			QueryLayoutByDeviceOutcome queryLayoutByDevice(const Model::QueryLayoutByDeviceRequest &request)const;
			void queryLayoutByDeviceAsync(const Model::QueryLayoutByDeviceRequest& request, const QueryLayoutByDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryLayoutByDeviceOutcomeCallable queryLayoutByDeviceCallable(const Model::QueryLayoutByDeviceRequest& request) const;
			QueryLayoutDetailOutcome queryLayoutDetail(const Model::QueryLayoutDetailRequest &request)const;
			void queryLayoutDetailAsync(const Model::QueryLayoutDetailRequest& request, const QueryLayoutDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryLayoutDetailOutcomeCallable queryLayoutDetailCallable(const Model::QueryLayoutDetailRequest& request) const;
			QueryTemplateGroupListOutcome queryTemplateGroupList(const Model::QueryTemplateGroupListRequest &request)const;
			void queryTemplateGroupListAsync(const Model::QueryTemplateGroupListRequest& request, const QueryTemplateGroupListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryTemplateGroupListOutcomeCallable queryTemplateGroupListCallable(const Model::QueryTemplateGroupListRequest& request) const;
			QueryTemplateListByGroupIdOutcome queryTemplateListByGroupId(const Model::QueryTemplateListByGroupIdRequest &request)const;
			void queryTemplateListByGroupIdAsync(const Model::QueryTemplateListByGroupIdRequest& request, const QueryTemplateListByGroupIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryTemplateListByGroupIdOutcomeCallable queryTemplateListByGroupIdCallable(const Model::QueryTemplateListByGroupIdRequest& request) const;
			SaveLayoutOutcome saveLayout(const Model::SaveLayoutRequest &request)const;
			void saveLayoutAsync(const Model::SaveLayoutRequest& request, const SaveLayoutAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SaveLayoutOutcomeCallable saveLayoutCallable(const Model::SaveLayoutRequest& request) const;
			SaveTemplateGroupOutcome saveTemplateGroup(const Model::SaveTemplateGroupRequest &request)const;
			void saveTemplateGroupAsync(const Model::SaveTemplateGroupRequest& request, const SaveTemplateGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SaveTemplateGroupOutcomeCallable saveTemplateGroupCallable(const Model::SaveTemplateGroupRequest& request) const;
			SyncAddMaterialOutcome syncAddMaterial(const Model::SyncAddMaterialRequest &request)const;
			void syncAddMaterialAsync(const Model::SyncAddMaterialRequest& request, const SyncAddMaterialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SyncAddMaterialOutcomeCallable syncAddMaterialCallable(const Model::SyncAddMaterialRequest& request) const;
			UnassignUserOutcome unassignUser(const Model::UnassignUserRequest &request)const;
			void unassignUserAsync(const Model::UnassignUserRequest& request, const UnassignUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UnassignUserOutcomeCallable unassignUserCallable(const Model::UnassignUserRequest& request) const;
			UnbindEslDeviceOutcome unbindEslDevice(const Model::UnbindEslDeviceRequest &request)const;
			void unbindEslDeviceAsync(const Model::UnbindEslDeviceRequest& request, const UnbindEslDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UnbindEslDeviceOutcomeCallable unbindEslDeviceCallable(const Model::UnbindEslDeviceRequest& request) const;
			UpdateCompanyTemplateOutcome updateCompanyTemplate(const Model::UpdateCompanyTemplateRequest &request)const;
			void updateCompanyTemplateAsync(const Model::UpdateCompanyTemplateRequest& request, const UpdateCompanyTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateCompanyTemplateOutcomeCallable updateCompanyTemplateCallable(const Model::UpdateCompanyTemplateRequest& request) const;
			UpdateCompanyTemplateViewOutcome updateCompanyTemplateView(const Model::UpdateCompanyTemplateViewRequest &request)const;
			void updateCompanyTemplateViewAsync(const Model::UpdateCompanyTemplateViewRequest& request, const UpdateCompanyTemplateViewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateCompanyTemplateViewOutcomeCallable updateCompanyTemplateViewCallable(const Model::UpdateCompanyTemplateViewRequest& request) const;
			UpdateEslDeviceLightOutcome updateEslDeviceLight(const Model::UpdateEslDeviceLightRequest &request)const;
			void updateEslDeviceLightAsync(const Model::UpdateEslDeviceLightRequest& request, const UpdateEslDeviceLightAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateEslDeviceLightOutcomeCallable updateEslDeviceLightCallable(const Model::UpdateEslDeviceLightRequest& request) const;
			UpdateItemMaterialOutcome updateItemMaterial(const Model::UpdateItemMaterialRequest &request)const;
			void updateItemMaterialAsync(const Model::UpdateItemMaterialRequest& request, const UpdateItemMaterialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateItemMaterialOutcomeCallable updateItemMaterialCallable(const Model::UpdateItemMaterialRequest& request) const;
			UpdateNotificationConfigOutcome updateNotificationConfig(const Model::UpdateNotificationConfigRequest &request)const;
			void updateNotificationConfigAsync(const Model::UpdateNotificationConfigRequest& request, const UpdateNotificationConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateNotificationConfigOutcomeCallable updateNotificationConfigCallable(const Model::UpdateNotificationConfigRequest& request) const;
			UpdateStoreOutcome updateStore(const Model::UpdateStoreRequest &request)const;
			void updateStoreAsync(const Model::UpdateStoreRequest& request, const UpdateStoreAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateStoreOutcomeCallable updateStoreCallable(const Model::UpdateStoreRequest& request) const;
			UpdateStoreConfigOutcome updateStoreConfig(const Model::UpdateStoreConfigRequest &request)const;
			void updateStoreConfigAsync(const Model::UpdateStoreConfigRequest& request, const UpdateStoreConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateStoreConfigOutcomeCallable updateStoreConfigCallable(const Model::UpdateStoreConfigRequest& request) const;
			VerifyNotificationConfigOutcome verifyNotificationConfig(const Model::VerifyNotificationConfigRequest &request)const;
			void verifyNotificationConfigAsync(const Model::VerifyNotificationConfigRequest& request, const VerifyNotificationConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			VerifyNotificationConfigOutcomeCallable verifyNotificationConfigCallable(const Model::VerifyNotificationConfigRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_CLOUDESL_CLOUDESLCLIENT_H_
