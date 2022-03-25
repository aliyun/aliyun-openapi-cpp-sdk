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

#ifndef ALIBABACLOUD_IOT_IOTCLIENT_H_
#define ALIBABACLOUD_IOT_IOTCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "IotExport.h"
#include "model/AddDataForApiSourceRequest.h"
#include "model/AddDataForApiSourceResult.h"
#include "model/BatchAddDataForApiSourceRequest.h"
#include "model/BatchAddDataForApiSourceResult.h"
#include "model/BatchAddDeviceGroupRelationsRequest.h"
#include "model/BatchAddDeviceGroupRelationsResult.h"
#include "model/BatchAddThingTopoRequest.h"
#include "model/BatchAddThingTopoResult.h"
#include "model/BatchBindDeviceToEdgeInstanceWithDriverRequest.h"
#include "model/BatchBindDeviceToEdgeInstanceWithDriverResult.h"
#include "model/BatchBindDevicesIntoProjectRequest.h"
#include "model/BatchBindDevicesIntoProjectResult.h"
#include "model/BatchBindProductsIntoProjectRequest.h"
#include "model/BatchBindProductsIntoProjectResult.h"
#include "model/BatchCheckDeviceNamesRequest.h"
#include "model/BatchCheckDeviceNamesResult.h"
#include "model/BatchClearEdgeInstanceDeviceConfigRequest.h"
#include "model/BatchClearEdgeInstanceDeviceConfigResult.h"
#include "model/BatchDeleteDeviceGroupRelationsRequest.h"
#include "model/BatchDeleteDeviceGroupRelationsResult.h"
#include "model/BatchDeleteEdgeInstanceChannelRequest.h"
#include "model/BatchDeleteEdgeInstanceChannelResult.h"
#include "model/BatchGetDeviceBindStatusRequest.h"
#include "model/BatchGetDeviceBindStatusResult.h"
#include "model/BatchGetDeviceStateRequest.h"
#include "model/BatchGetDeviceStateResult.h"
#include "model/BatchGetEdgeDriverRequest.h"
#include "model/BatchGetEdgeDriverResult.h"
#include "model/BatchGetEdgeInstanceChannelRequest.h"
#include "model/BatchGetEdgeInstanceChannelResult.h"
#include "model/BatchGetEdgeInstanceDeviceChannelRequest.h"
#include "model/BatchGetEdgeInstanceDeviceChannelResult.h"
#include "model/BatchGetEdgeInstanceDeviceConfigRequest.h"
#include "model/BatchGetEdgeInstanceDeviceConfigResult.h"
#include "model/BatchGetEdgeInstanceDeviceDriverRequest.h"
#include "model/BatchGetEdgeInstanceDeviceDriverResult.h"
#include "model/BatchGetEdgeInstanceDriverConfigsRequest.h"
#include "model/BatchGetEdgeInstanceDriverConfigsResult.h"
#include "model/BatchPubRequest.h"
#include "model/BatchPubResult.h"
#include "model/BatchQueryDeviceDetailRequest.h"
#include "model/BatchQueryDeviceDetailResult.h"
#include "model/BatchRegisterDeviceRequest.h"
#include "model/BatchRegisterDeviceResult.h"
#include "model/BatchRegisterDeviceWithApplyIdRequest.h"
#include "model/BatchRegisterDeviceWithApplyIdResult.h"
#include "model/BatchSetEdgeInstanceDeviceChannelRequest.h"
#include "model/BatchSetEdgeInstanceDeviceChannelResult.h"
#include "model/BatchSetEdgeInstanceDeviceConfigRequest.h"
#include "model/BatchSetEdgeInstanceDeviceConfigResult.h"
#include "model/BatchUnbindDeviceFromEdgeInstanceRequest.h"
#include "model/BatchUnbindDeviceFromEdgeInstanceResult.h"
#include "model/BatchUnbindProjectDevicesRequest.h"
#include "model/BatchUnbindProjectDevicesResult.h"
#include "model/BatchUnbindProjectProductsRequest.h"
#include "model/BatchUnbindProjectProductsResult.h"
#include "model/BatchUpdateDeviceNicknameRequest.h"
#include "model/BatchUpdateDeviceNicknameResult.h"
#include "model/BindApplicationToEdgeInstanceRequest.h"
#include "model/BindApplicationToEdgeInstanceResult.h"
#include "model/BindDriverToEdgeInstanceRequest.h"
#include "model/BindDriverToEdgeInstanceResult.h"
#include "model/BindGatewayToEdgeInstanceRequest.h"
#include "model/BindGatewayToEdgeInstanceResult.h"
#include "model/BindRoleToEdgeInstanceRequest.h"
#include "model/BindRoleToEdgeInstanceResult.h"
#include "model/BindSceneRuleToEdgeInstanceRequest.h"
#include "model/BindSceneRuleToEdgeInstanceResult.h"
#include "model/CancelJobRequest.h"
#include "model/CancelJobResult.h"
#include "model/CancelOTAStrategyByJobRequest.h"
#include "model/CancelOTAStrategyByJobResult.h"
#include "model/CancelOTATaskByDeviceRequest.h"
#include "model/CancelOTATaskByDeviceResult.h"
#include "model/CancelOTATaskByJobRequest.h"
#include "model/CancelOTATaskByJobResult.h"
#include "model/CancelReleaseProductRequest.h"
#include "model/CancelReleaseProductResult.h"
#include "model/ClearEdgeInstanceDriverConfigsRequest.h"
#include "model/ClearEdgeInstanceDriverConfigsResult.h"
#include "model/CloseDeviceTunnelRequest.h"
#include "model/CloseDeviceTunnelResult.h"
#include "model/CloseEdgeInstanceDeploymentRequest.h"
#include "model/CloseEdgeInstanceDeploymentResult.h"
#include "model/ConfirmOTATaskRequest.h"
#include "model/ConfirmOTATaskResult.h"
#include "model/CopyThingModelRequest.h"
#include "model/CopyThingModelResult.h"
#include "model/CreateConsumerGroupRequest.h"
#include "model/CreateConsumerGroupResult.h"
#include "model/CreateConsumerGroupSubscribeRelationRequest.h"
#include "model/CreateConsumerGroupSubscribeRelationResult.h"
#include "model/CreateDataAPIServiceRequest.h"
#include "model/CreateDataAPIServiceResult.h"
#include "model/CreateDeviceDistributeJobRequest.h"
#include "model/CreateDeviceDistributeJobResult.h"
#include "model/CreateDeviceDynamicGroupRequest.h"
#include "model/CreateDeviceDynamicGroupResult.h"
#include "model/CreateDeviceGroupRequest.h"
#include "model/CreateDeviceGroupResult.h"
#include "model/CreateDeviceTunnelRequest.h"
#include "model/CreateDeviceTunnelResult.h"
#include "model/CreateEdgeDriverRequest.h"
#include "model/CreateEdgeDriverResult.h"
#include "model/CreateEdgeDriverVersionRequest.h"
#include "model/CreateEdgeDriverVersionResult.h"
#include "model/CreateEdgeInstanceRequest.h"
#include "model/CreateEdgeInstanceResult.h"
#include "model/CreateEdgeInstanceChannelRequest.h"
#include "model/CreateEdgeInstanceChannelResult.h"
#include "model/CreateEdgeInstanceDeploymentRequest.h"
#include "model/CreateEdgeInstanceDeploymentResult.h"
#include "model/CreateEdgeInstanceMessageRoutingRequest.h"
#include "model/CreateEdgeInstanceMessageRoutingResult.h"
#include "model/CreateEdgeOssPreSignedAddressRequest.h"
#include "model/CreateEdgeOssPreSignedAddressResult.h"
#include "model/CreateJobRequest.h"
#include "model/CreateJobResult.h"
#include "model/CreateLoRaNodesTaskRequest.h"
#include "model/CreateLoRaNodesTaskResult.h"
#include "model/CreateOTADynamicUpgradeJobRequest.h"
#include "model/CreateOTADynamicUpgradeJobResult.h"
#include "model/CreateOTAFirmwareRequest.h"
#include "model/CreateOTAFirmwareResult.h"
#include "model/CreateOTAModuleRequest.h"
#include "model/CreateOTAModuleResult.h"
#include "model/CreateOTAStaticUpgradeJobRequest.h"
#include "model/CreateOTAStaticUpgradeJobResult.h"
#include "model/CreateOTAVerifyJobRequest.h"
#include "model/CreateOTAVerifyJobResult.h"
#include "model/CreateProductRequest.h"
#include "model/CreateProductResult.h"
#include "model/CreateProductDistributeJobRequest.h"
#include "model/CreateProductDistributeJobResult.h"
#include "model/CreateProductTagsRequest.h"
#include "model/CreateProductTagsResult.h"
#include "model/CreateProductTopicRequest.h"
#include "model/CreateProductTopicResult.h"
#include "model/CreateRuleRequest.h"
#include "model/CreateRuleResult.h"
#include "model/CreateRuleActionRequest.h"
#include "model/CreateRuleActionResult.h"
#include "model/CreateSceneRuleRequest.h"
#include "model/CreateSceneRuleResult.h"
#include "model/CreateSoundCodeRequest.h"
#include "model/CreateSoundCodeResult.h"
#include "model/CreateSpeechRequest.h"
#include "model/CreateSpeechResult.h"
#include "model/CreateStudioAppDomainOpenRequest.h"
#include "model/CreateStudioAppDomainOpenResult.h"
#include "model/CreateSubscribeRelationRequest.h"
#include "model/CreateSubscribeRelationResult.h"
#include "model/CreateThingModelRequest.h"
#include "model/CreateThingModelResult.h"
#include "model/CreateThingScriptRequest.h"
#include "model/CreateThingScriptResult.h"
#include "model/CreateTopicRouteTableRequest.h"
#include "model/CreateTopicRouteTableResult.h"
#include "model/DeleteClientIdsRequest.h"
#include "model/DeleteClientIdsResult.h"
#include "model/DeleteConsumerGroupRequest.h"
#include "model/DeleteConsumerGroupResult.h"
#include "model/DeleteConsumerGroupSubscribeRelationRequest.h"
#include "model/DeleteConsumerGroupSubscribeRelationResult.h"
#include "model/DeleteDeviceRequest.h"
#include "model/DeleteDeviceResult.h"
#include "model/DeleteDeviceDistributeJobRequest.h"
#include "model/DeleteDeviceDistributeJobResult.h"
#include "model/DeleteDeviceDynamicGroupRequest.h"
#include "model/DeleteDeviceDynamicGroupResult.h"
#include "model/DeleteDeviceFileRequest.h"
#include "model/DeleteDeviceFileResult.h"
#include "model/DeleteDeviceGroupRequest.h"
#include "model/DeleteDeviceGroupResult.h"
#include "model/DeleteDevicePropRequest.h"
#include "model/DeleteDevicePropResult.h"
#include "model/DeleteDeviceSpeechRequest.h"
#include "model/DeleteDeviceSpeechResult.h"
#include "model/DeleteDeviceTunnelRequest.h"
#include "model/DeleteDeviceTunnelResult.h"
#include "model/DeleteEdgeDriverRequest.h"
#include "model/DeleteEdgeDriverResult.h"
#include "model/DeleteEdgeDriverVersionRequest.h"
#include "model/DeleteEdgeDriverVersionResult.h"
#include "model/DeleteEdgeInstanceRequest.h"
#include "model/DeleteEdgeInstanceResult.h"
#include "model/DeleteEdgeInstanceMessageRoutingRequest.h"
#include "model/DeleteEdgeInstanceMessageRoutingResult.h"
#include "model/DeleteJobRequest.h"
#include "model/DeleteJobResult.h"
#include "model/DeleteOTAFirmwareRequest.h"
#include "model/DeleteOTAFirmwareResult.h"
#include "model/DeleteOTAModuleRequest.h"
#include "model/DeleteOTAModuleResult.h"
#include "model/DeleteProductRequest.h"
#include "model/DeleteProductResult.h"
#include "model/DeleteProductTagsRequest.h"
#include "model/DeleteProductTagsResult.h"
#include "model/DeleteProductTopicRequest.h"
#include "model/DeleteProductTopicResult.h"
#include "model/DeleteRuleRequest.h"
#include "model/DeleteRuleResult.h"
#include "model/DeleteRuleActionRequest.h"
#include "model/DeleteRuleActionResult.h"
#include "model/DeleteSceneRuleRequest.h"
#include "model/DeleteSceneRuleResult.h"
#include "model/DeleteSoundCodeRequest.h"
#include "model/DeleteSoundCodeResult.h"
#include "model/DeleteSpeechRequest.h"
#include "model/DeleteSpeechResult.h"
#include "model/DeleteStudioAppDomainOpenRequest.h"
#include "model/DeleteStudioAppDomainOpenResult.h"
#include "model/DeleteSubscribeRelationRequest.h"
#include "model/DeleteSubscribeRelationResult.h"
#include "model/DeleteThingModelRequest.h"
#include "model/DeleteThingModelResult.h"
#include "model/DeleteTopicRouteTableRequest.h"
#include "model/DeleteTopicRouteTableResult.h"
#include "model/DisableDeviceTunnelRequest.h"
#include "model/DisableDeviceTunnelResult.h"
#include "model/DisableDeviceTunnelShareRequest.h"
#include "model/DisableDeviceTunnelShareResult.h"
#include "model/DisableSceneRuleRequest.h"
#include "model/DisableSceneRuleResult.h"
#include "model/DisableThingRequest.h"
#include "model/DisableThingResult.h"
#include "model/EnableDeviceTunnelRequest.h"
#include "model/EnableDeviceTunnelResult.h"
#include "model/EnableDeviceTunnelShareRequest.h"
#include "model/EnableDeviceTunnelShareResult.h"
#include "model/EnableSceneRuleRequest.h"
#include "model/EnableSceneRuleResult.h"
#include "model/EnableThingRequest.h"
#include "model/EnableThingResult.h"
#include "model/GenerateDeviceNameListURLRequest.h"
#include "model/GenerateDeviceNameListURLResult.h"
#include "model/GenerateFileUploadURLRequest.h"
#include "model/GenerateFileUploadURLResult.h"
#include "model/GenerateOTAUploadURLRequest.h"
#include "model/GenerateOTAUploadURLResult.h"
#include "model/GetDataAPIServiceDetailRequest.h"
#include "model/GetDataAPIServiceDetailResult.h"
#include "model/GetDeviceShadowRequest.h"
#include "model/GetDeviceShadowResult.h"
#include "model/GetDeviceStatusRequest.h"
#include "model/GetDeviceStatusResult.h"
#include "model/GetDeviceTunnelShareStatusRequest.h"
#include "model/GetDeviceTunnelShareStatusResult.h"
#include "model/GetDeviceTunnelStatusRequest.h"
#include "model/GetDeviceTunnelStatusResult.h"
#include "model/GetEdgeDriverVersionRequest.h"
#include "model/GetEdgeDriverVersionResult.h"
#include "model/GetEdgeInstanceRequest.h"
#include "model/GetEdgeInstanceResult.h"
#include "model/GetEdgeInstanceDeploymentRequest.h"
#include "model/GetEdgeInstanceDeploymentResult.h"
#include "model/GetEdgeInstanceMessageRoutingRequest.h"
#include "model/GetEdgeInstanceMessageRoutingResult.h"
#include "model/GetGatewayBySubDeviceRequest.h"
#include "model/GetGatewayBySubDeviceResult.h"
#include "model/GetLoraNodesTaskRequest.h"
#include "model/GetLoraNodesTaskResult.h"
#include "model/GetRuleRequest.h"
#include "model/GetRuleResult.h"
#include "model/GetRuleActionRequest.h"
#include "model/GetRuleActionResult.h"
#include "model/GetSceneRuleRequest.h"
#include "model/GetSceneRuleResult.h"
#include "model/GetSoundCodeAudioRequest.h"
#include "model/GetSoundCodeAudioResult.h"
#include "model/GetSpeechDeviceDetailRequest.h"
#include "model/GetSpeechDeviceDetailResult.h"
#include "model/GetSpeechVoiceRequest.h"
#include "model/GetSpeechVoiceResult.h"
#include "model/GetStudioAppTokenOpenRequest.h"
#include "model/GetStudioAppTokenOpenResult.h"
#include "model/GetThingModelTslRequest.h"
#include "model/GetThingModelTslResult.h"
#include "model/GetThingModelTslPublishedRequest.h"
#include "model/GetThingModelTslPublishedResult.h"
#include "model/GetThingScriptRequest.h"
#include "model/GetThingScriptResult.h"
#include "model/GetThingTemplateRequest.h"
#include "model/GetThingTemplateResult.h"
#include "model/GetThingTopoRequest.h"
#include "model/GetThingTopoResult.h"
#include "model/GisQueryDeviceLocationRequest.h"
#include "model/GisQueryDeviceLocationResult.h"
#include "model/GisSearchDeviceTraceRequest.h"
#include "model/GisSearchDeviceTraceResult.h"
#include "model/ImportThingModelTslRequest.h"
#include "model/ImportThingModelTslResult.h"
#include "model/InvokeDataAPIServiceRequest.h"
#include "model/InvokeDataAPIServiceResult.h"
#include "model/InvokeThingServiceRequest.h"
#include "model/InvokeThingServiceResult.h"
#include "model/InvokeThingsServiceRequest.h"
#include "model/InvokeThingsServiceResult.h"
#include "model/ListAnalyticsDataRequest.h"
#include "model/ListAnalyticsDataResult.h"
#include "model/ListDeviceDistributeJobRequest.h"
#include "model/ListDeviceDistributeJobResult.h"
#include "model/ListDistributedDeviceRequest.h"
#include "model/ListDistributedDeviceResult.h"
#include "model/ListDistributedProductRequest.h"
#include "model/ListDistributedProductResult.h"
#include "model/ListJobRequest.h"
#include "model/ListJobResult.h"
#include "model/ListOTAFirmwareRequest.h"
#include "model/ListOTAFirmwareResult.h"
#include "model/ListOTAJobByDeviceRequest.h"
#include "model/ListOTAJobByDeviceResult.h"
#include "model/ListOTAJobByFirmwareRequest.h"
#include "model/ListOTAJobByFirmwareResult.h"
#include "model/ListOTAModuleByProductRequest.h"
#include "model/ListOTAModuleByProductResult.h"
#include "model/ListOTAModuleVersionsByDeviceRequest.h"
#include "model/ListOTAModuleVersionsByDeviceResult.h"
#include "model/ListOTATaskByJobRequest.h"
#include "model/ListOTATaskByJobResult.h"
#include "model/ListOTAUnfinishedTaskByDeviceRequest.h"
#include "model/ListOTAUnfinishedTaskByDeviceResult.h"
#include "model/ListProductByTagsRequest.h"
#include "model/ListProductByTagsResult.h"
#include "model/ListProductTagsRequest.h"
#include "model/ListProductTagsResult.h"
#include "model/ListRuleRequest.h"
#include "model/ListRuleResult.h"
#include "model/ListRuleActionsRequest.h"
#include "model/ListRuleActionsResult.h"
#include "model/ListTaskRequest.h"
#include "model/ListTaskResult.h"
#include "model/ListThingModelVersionRequest.h"
#include "model/ListThingModelVersionResult.h"
#include "model/ListThingTemplatesRequest.h"
#include "model/ListThingTemplatesResult.h"
#include "model/NotifyAddThingTopoRequest.h"
#include "model/NotifyAddThingTopoResult.h"
#include "model/OpenIotServiceRequest.h"
#include "model/OpenIotServiceResult.h"
#include "model/PrintByTemplateRequest.h"
#include "model/PrintByTemplateResult.h"
#include "model/PubRequest.h"
#include "model/PubResult.h"
#include "model/PubBroadcastRequest.h"
#include "model/PubBroadcastResult.h"
#include "model/PublishStudioAppRequest.h"
#include "model/PublishStudioAppResult.h"
#include "model/PublishThingModelRequest.h"
#include "model/PublishThingModelResult.h"
#include "model/PushSpeechRequest.h"
#include "model/PushSpeechResult.h"
#include "model/QueryBatchRegisterDeviceStatusRequest.h"
#include "model/QueryBatchRegisterDeviceStatusResult.h"
#include "model/QueryCertUrlByApplyIdRequest.h"
#include "model/QueryCertUrlByApplyIdResult.h"
#include "model/QueryClientIdsRequest.h"
#include "model/QueryClientIdsResult.h"
#include "model/QueryConsumerGroupByGroupIdRequest.h"
#include "model/QueryConsumerGroupByGroupIdResult.h"
#include "model/QueryConsumerGroupListRequest.h"
#include "model/QueryConsumerGroupListResult.h"
#include "model/QueryConsumerGroupStatusRequest.h"
#include "model/QueryConsumerGroupStatusResult.h"
#include "model/QueryDetailSceneRuleLogRequest.h"
#include "model/QueryDetailSceneRuleLogResult.h"
#include "model/QueryDeviceRequest.h"
#include "model/QueryDeviceResult.h"
#include "model/QueryDeviceBySQLRequest.h"
#include "model/QueryDeviceBySQLResult.h"
#include "model/QueryDeviceByStatusRequest.h"
#include "model/QueryDeviceByStatusResult.h"
#include "model/QueryDeviceByTagsRequest.h"
#include "model/QueryDeviceByTagsResult.h"
#include "model/QueryDeviceCertRequest.h"
#include "model/QueryDeviceCertResult.h"
#include "model/QueryDeviceDesiredPropertyRequest.h"
#include "model/QueryDeviceDesiredPropertyResult.h"
#include "model/QueryDeviceDetailRequest.h"
#include "model/QueryDeviceDetailResult.h"
#include "model/QueryDeviceDistributeDetailRequest.h"
#include "model/QueryDeviceDistributeDetailResult.h"
#include "model/QueryDeviceDistributeJobRequest.h"
#include "model/QueryDeviceDistributeJobResult.h"
#include "model/QueryDeviceEventDataRequest.h"
#include "model/QueryDeviceEventDataResult.h"
#include "model/QueryDeviceFileRequest.h"
#include "model/QueryDeviceFileResult.h"
#include "model/QueryDeviceFileListRequest.h"
#include "model/QueryDeviceFileListResult.h"
#include "model/QueryDeviceGroupByDeviceRequest.h"
#include "model/QueryDeviceGroupByDeviceResult.h"
#include "model/QueryDeviceGroupByTagsRequest.h"
#include "model/QueryDeviceGroupByTagsResult.h"
#include "model/QueryDeviceGroupInfoRequest.h"
#include "model/QueryDeviceGroupInfoResult.h"
#include "model/QueryDeviceGroupListRequest.h"
#include "model/QueryDeviceGroupListResult.h"
#include "model/QueryDeviceGroupTagListRequest.h"
#include "model/QueryDeviceGroupTagListResult.h"
#include "model/QueryDeviceInfoRequest.h"
#include "model/QueryDeviceInfoResult.h"
#include "model/QueryDeviceListByDeviceGroupRequest.h"
#include "model/QueryDeviceListByDeviceGroupResult.h"
#include "model/QueryDeviceOriginalEventDataRequest.h"
#include "model/QueryDeviceOriginalEventDataResult.h"
#include "model/QueryDeviceOriginalPropertyDataRequest.h"
#include "model/QueryDeviceOriginalPropertyDataResult.h"
#include "model/QueryDeviceOriginalPropertyStatusRequest.h"
#include "model/QueryDeviceOriginalPropertyStatusResult.h"
#include "model/QueryDeviceOriginalServiceDataRequest.h"
#include "model/QueryDeviceOriginalServiceDataResult.h"
#include "model/QueryDevicePropRequest.h"
#include "model/QueryDevicePropResult.h"
#include "model/QueryDevicePropertiesDataRequest.h"
#include "model/QueryDevicePropertiesDataResult.h"
#include "model/QueryDevicePropertyDataRequest.h"
#include "model/QueryDevicePropertyDataResult.h"
#include "model/QueryDevicePropertyStatusRequest.h"
#include "model/QueryDevicePropertyStatusResult.h"
#include "model/QueryDeviceServiceDataRequest.h"
#include "model/QueryDeviceServiceDataResult.h"
#include "model/QueryDeviceSpeechRequest.h"
#include "model/QueryDeviceSpeechResult.h"
#include "model/QueryDeviceStatisticsRequest.h"
#include "model/QueryDeviceStatisticsResult.h"
#include "model/QueryDeviceTunnelRequest.h"
#include "model/QueryDeviceTunnelResult.h"
#include "model/QueryDynamicGroupDevicesRequest.h"
#include "model/QueryDynamicGroupDevicesResult.h"
#include "model/QueryEdgeDriverRequest.h"
#include "model/QueryEdgeDriverResult.h"
#include "model/QueryEdgeDriverVersionRequest.h"
#include "model/QueryEdgeDriverVersionResult.h"
#include "model/QueryEdgeInstanceRequest.h"
#include "model/QueryEdgeInstanceResult.h"
#include "model/QueryEdgeInstanceChannelRequest.h"
#include "model/QueryEdgeInstanceChannelResult.h"
#include "model/QueryEdgeInstanceDeviceRequest.h"
#include "model/QueryEdgeInstanceDeviceResult.h"
#include "model/QueryEdgeInstanceDeviceByDriverRequest.h"
#include "model/QueryEdgeInstanceDeviceByDriverResult.h"
#include "model/QueryEdgeInstanceDriverRequest.h"
#include "model/QueryEdgeInstanceDriverResult.h"
#include "model/QueryEdgeInstanceGatewayRequest.h"
#include "model/QueryEdgeInstanceGatewayResult.h"
#include "model/QueryEdgeInstanceHistoricDeploymentRequest.h"
#include "model/QueryEdgeInstanceHistoricDeploymentResult.h"
#include "model/QueryEdgeInstanceMessageRoutingRequest.h"
#include "model/QueryEdgeInstanceMessageRoutingResult.h"
#include "model/QueryEdgeInstanceSceneRuleRequest.h"
#include "model/QueryEdgeInstanceSceneRuleResult.h"
#include "model/QueryJobRequest.h"
#include "model/QueryJobResult.h"
#include "model/QueryJobStatisticsRequest.h"
#include "model/QueryJobStatisticsResult.h"
#include "model/QueryLoRaJoinPermissionsRequest.h"
#include "model/QueryLoRaJoinPermissionsResult.h"
#include "model/QueryMessageInfoRequest.h"
#include "model/QueryMessageInfoResult.h"
#include "model/QueryOTAFirmwareRequest.h"
#include "model/QueryOTAFirmwareResult.h"
#include "model/QueryOTAJobRequest.h"
#include "model/QueryOTAJobResult.h"
#include "model/QueryPageByApplyIdRequest.h"
#include "model/QueryPageByApplyIdResult.h"
#include "model/QueryProductRequest.h"
#include "model/QueryProductResult.h"
#include "model/QueryProductCertInfoRequest.h"
#include "model/QueryProductCertInfoResult.h"
#include "model/QueryProductListRequest.h"
#include "model/QueryProductListResult.h"
#include "model/QueryProductTopicRequest.h"
#include "model/QueryProductTopicResult.h"
#include "model/QuerySceneRuleRequest.h"
#include "model/QuerySceneRuleResult.h"
#include "model/QuerySolutionDeviceGroupPageRequest.h"
#include "model/QuerySolutionDeviceGroupPageResult.h"
#include "model/QuerySoundCodeListRequest.h"
#include "model/QuerySoundCodeListResult.h"
#include "model/QuerySpeechRequest.h"
#include "model/QuerySpeechResult.h"
#include "model/QuerySpeechDeviceRequest.h"
#include "model/QuerySpeechDeviceResult.h"
#include "model/QuerySpeechListRequest.h"
#include "model/QuerySpeechListResult.h"
#include "model/QuerySpeechPushJobRequest.h"
#include "model/QuerySpeechPushJobResult.h"
#include "model/QuerySpeechPushJobDeviceRequest.h"
#include "model/QuerySpeechPushJobDeviceResult.h"
#include "model/QuerySpeechPushJobSpeechRequest.h"
#include "model/QuerySpeechPushJobSpeechResult.h"
#include "model/QueryStudioAppDomainListOpenRequest.h"
#include "model/QueryStudioAppDomainListOpenResult.h"
#include "model/QueryStudioAppListRequest.h"
#include "model/QueryStudioAppListResult.h"
#include "model/QueryStudioAppPageListOpenRequest.h"
#include "model/QueryStudioAppPageListOpenResult.h"
#include "model/QueryStudioProjectListRequest.h"
#include "model/QueryStudioProjectListResult.h"
#include "model/QuerySubscribeRelationRequest.h"
#include "model/QuerySubscribeRelationResult.h"
#include "model/QuerySummarySceneRuleLogRequest.h"
#include "model/QuerySummarySceneRuleLogResult.h"
#include "model/QuerySuperDeviceGroupRequest.h"
#include "model/QuerySuperDeviceGroupResult.h"
#include "model/QueryTaskRequest.h"
#include "model/QueryTaskResult.h"
#include "model/QueryThingModelRequest.h"
#include "model/QueryThingModelResult.h"
#include "model/QueryThingModelExtendConfigRequest.h"
#include "model/QueryThingModelExtendConfigResult.h"
#include "model/QueryThingModelExtendConfigPublishedRequest.h"
#include "model/QueryThingModelExtendConfigPublishedResult.h"
#include "model/QueryThingModelPublishedRequest.h"
#include "model/QueryThingModelPublishedResult.h"
#include "model/QueryTopicReverseRouteTableRequest.h"
#include "model/QueryTopicReverseRouteTableResult.h"
#include "model/QueryTopicRouteTableRequest.h"
#include "model/QueryTopicRouteTableResult.h"
#include "model/RRpcRequest.h"
#include "model/RRpcResult.h"
#include "model/RecognizeCarNumRequest.h"
#include "model/RecognizeCarNumResult.h"
#include "model/RecognizePictureGeneralRequest.h"
#include "model/RecognizePictureGeneralResult.h"
#include "model/RefreshDeviceTunnelSharePasswordRequest.h"
#include "model/RefreshDeviceTunnelSharePasswordResult.h"
#include "model/RefreshStudioAppTokenOpenRequest.h"
#include "model/RefreshStudioAppTokenOpenResult.h"
#include "model/RegisterDeviceRequest.h"
#include "model/RegisterDeviceResult.h"
#include "model/ReleaseEdgeDriverVersionRequest.h"
#include "model/ReleaseEdgeDriverVersionResult.h"
#include "model/ReleaseProductRequest.h"
#include "model/ReleaseProductResult.h"
#include "model/RemoveThingTopoRequest.h"
#include "model/RemoveThingTopoResult.h"
#include "model/ReplaceEdgeInstanceGatewayRequest.h"
#include "model/ReplaceEdgeInstanceGatewayResult.h"
#include "model/RerunJobRequest.h"
#include "model/RerunJobResult.h"
#include "model/ResetConsumerGroupPositionRequest.h"
#include "model/ResetConsumerGroupPositionResult.h"
#include "model/ResetThingRequest.h"
#include "model/ResetThingResult.h"
#include "model/ReupgradeOTATaskRequest.h"
#include "model/ReupgradeOTATaskResult.h"
#include "model/SaveDevicePropRequest.h"
#include "model/SaveDevicePropResult.h"
#include "model/SetDeviceDesiredPropertyRequest.h"
#include "model/SetDeviceDesiredPropertyResult.h"
#include "model/SetDeviceGroupTagsRequest.h"
#include "model/SetDeviceGroupTagsResult.h"
#include "model/SetDevicePropertyRequest.h"
#include "model/SetDevicePropertyResult.h"
#include "model/SetDevicesPropertyRequest.h"
#include "model/SetDevicesPropertyResult.h"
#include "model/SetEdgeInstanceDriverConfigsRequest.h"
#include "model/SetEdgeInstanceDriverConfigsResult.h"
#include "model/SetProductCertInfoRequest.h"
#include "model/SetProductCertInfoResult.h"
#include "model/SetStudioProjectCooperationRequest.h"
#include "model/SetStudioProjectCooperationResult.h"
#include "model/SetupStudioAppAuthModeOpenRequest.h"
#include "model/SetupStudioAppAuthModeOpenResult.h"
#include "model/SpeechByCombinationRequest.h"
#include "model/SpeechByCombinationResult.h"
#include "model/SpeechBySynthesisRequest.h"
#include "model/SpeechBySynthesisResult.h"
#include "model/StartRuleRequest.h"
#include "model/StartRuleResult.h"
#include "model/StopRuleRequest.h"
#include "model/StopRuleResult.h"
#include "model/SubscribeTopicRequest.h"
#include "model/SubscribeTopicResult.h"
#include "model/SyncSpeechByCombinationRequest.h"
#include "model/SyncSpeechByCombinationResult.h"
#include "model/TestSpeechRequest.h"
#include "model/TestSpeechResult.h"
#include "model/TransformClientIdRequest.h"
#include "model/TransformClientIdResult.h"
#include "model/TriggerSceneRuleRequest.h"
#include "model/TriggerSceneRuleResult.h"
#include "model/UnbindApplicationFromEdgeInstanceRequest.h"
#include "model/UnbindApplicationFromEdgeInstanceResult.h"
#include "model/UnbindDriverFromEdgeInstanceRequest.h"
#include "model/UnbindDriverFromEdgeInstanceResult.h"
#include "model/UnbindRoleFromEdgeInstanceRequest.h"
#include "model/UnbindRoleFromEdgeInstanceResult.h"
#include "model/UnbindSceneRuleFromEdgeInstanceRequest.h"
#include "model/UnbindSceneRuleFromEdgeInstanceResult.h"
#include "model/UpdateConsumerGroupRequest.h"
#include "model/UpdateConsumerGroupResult.h"
#include "model/UpdateDeviceGroupRequest.h"
#include "model/UpdateDeviceGroupResult.h"
#include "model/UpdateDeviceShadowRequest.h"
#include "model/UpdateDeviceShadowResult.h"
#include "model/UpdateEdgeDriverVersionRequest.h"
#include "model/UpdateEdgeDriverVersionResult.h"
#include "model/UpdateEdgeInstanceRequest.h"
#include "model/UpdateEdgeInstanceResult.h"
#include "model/UpdateEdgeInstanceChannelRequest.h"
#include "model/UpdateEdgeInstanceChannelResult.h"
#include "model/UpdateEdgeInstanceMessageRoutingRequest.h"
#include "model/UpdateEdgeInstanceMessageRoutingResult.h"
#include "model/UpdateJobRequest.h"
#include "model/UpdateJobResult.h"
#include "model/UpdateOTAModuleRequest.h"
#include "model/UpdateOTAModuleResult.h"
#include "model/UpdateProductRequest.h"
#include "model/UpdateProductResult.h"
#include "model/UpdateProductFilterConfigRequest.h"
#include "model/UpdateProductFilterConfigResult.h"
#include "model/UpdateProductTagsRequest.h"
#include "model/UpdateProductTagsResult.h"
#include "model/UpdateProductTopicRequest.h"
#include "model/UpdateProductTopicResult.h"
#include "model/UpdateRuleRequest.h"
#include "model/UpdateRuleResult.h"
#include "model/UpdateRuleActionRequest.h"
#include "model/UpdateRuleActionResult.h"
#include "model/UpdateSceneRuleRequest.h"
#include "model/UpdateSceneRuleResult.h"
#include "model/UpdateSpeechRequest.h"
#include "model/UpdateSpeechResult.h"
#include "model/UpdateSubscribeRelationRequest.h"
#include "model/UpdateSubscribeRelationResult.h"
#include "model/UpdateThingModelRequest.h"
#include "model/UpdateThingModelResult.h"
#include "model/UpdateThingScriptRequest.h"
#include "model/UpdateThingScriptResult.h"


namespace AlibabaCloud
{
	namespace Iot
	{
		class ALIBABACLOUD_IOT_EXPORT IotClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::AddDataForApiSourceResult> AddDataForApiSourceOutcome;
			typedef std::future<AddDataForApiSourceOutcome> AddDataForApiSourceOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::AddDataForApiSourceRequest&, const AddDataForApiSourceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddDataForApiSourceAsyncHandler;
			typedef Outcome<Error, Model::BatchAddDataForApiSourceResult> BatchAddDataForApiSourceOutcome;
			typedef std::future<BatchAddDataForApiSourceOutcome> BatchAddDataForApiSourceOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::BatchAddDataForApiSourceRequest&, const BatchAddDataForApiSourceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BatchAddDataForApiSourceAsyncHandler;
			typedef Outcome<Error, Model::BatchAddDeviceGroupRelationsResult> BatchAddDeviceGroupRelationsOutcome;
			typedef std::future<BatchAddDeviceGroupRelationsOutcome> BatchAddDeviceGroupRelationsOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::BatchAddDeviceGroupRelationsRequest&, const BatchAddDeviceGroupRelationsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BatchAddDeviceGroupRelationsAsyncHandler;
			typedef Outcome<Error, Model::BatchAddThingTopoResult> BatchAddThingTopoOutcome;
			typedef std::future<BatchAddThingTopoOutcome> BatchAddThingTopoOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::BatchAddThingTopoRequest&, const BatchAddThingTopoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BatchAddThingTopoAsyncHandler;
			typedef Outcome<Error, Model::BatchBindDeviceToEdgeInstanceWithDriverResult> BatchBindDeviceToEdgeInstanceWithDriverOutcome;
			typedef std::future<BatchBindDeviceToEdgeInstanceWithDriverOutcome> BatchBindDeviceToEdgeInstanceWithDriverOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::BatchBindDeviceToEdgeInstanceWithDriverRequest&, const BatchBindDeviceToEdgeInstanceWithDriverOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BatchBindDeviceToEdgeInstanceWithDriverAsyncHandler;
			typedef Outcome<Error, Model::BatchBindDevicesIntoProjectResult> BatchBindDevicesIntoProjectOutcome;
			typedef std::future<BatchBindDevicesIntoProjectOutcome> BatchBindDevicesIntoProjectOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::BatchBindDevicesIntoProjectRequest&, const BatchBindDevicesIntoProjectOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BatchBindDevicesIntoProjectAsyncHandler;
			typedef Outcome<Error, Model::BatchBindProductsIntoProjectResult> BatchBindProductsIntoProjectOutcome;
			typedef std::future<BatchBindProductsIntoProjectOutcome> BatchBindProductsIntoProjectOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::BatchBindProductsIntoProjectRequest&, const BatchBindProductsIntoProjectOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BatchBindProductsIntoProjectAsyncHandler;
			typedef Outcome<Error, Model::BatchCheckDeviceNamesResult> BatchCheckDeviceNamesOutcome;
			typedef std::future<BatchCheckDeviceNamesOutcome> BatchCheckDeviceNamesOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::BatchCheckDeviceNamesRequest&, const BatchCheckDeviceNamesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BatchCheckDeviceNamesAsyncHandler;
			typedef Outcome<Error, Model::BatchClearEdgeInstanceDeviceConfigResult> BatchClearEdgeInstanceDeviceConfigOutcome;
			typedef std::future<BatchClearEdgeInstanceDeviceConfigOutcome> BatchClearEdgeInstanceDeviceConfigOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::BatchClearEdgeInstanceDeviceConfigRequest&, const BatchClearEdgeInstanceDeviceConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BatchClearEdgeInstanceDeviceConfigAsyncHandler;
			typedef Outcome<Error, Model::BatchDeleteDeviceGroupRelationsResult> BatchDeleteDeviceGroupRelationsOutcome;
			typedef std::future<BatchDeleteDeviceGroupRelationsOutcome> BatchDeleteDeviceGroupRelationsOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::BatchDeleteDeviceGroupRelationsRequest&, const BatchDeleteDeviceGroupRelationsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BatchDeleteDeviceGroupRelationsAsyncHandler;
			typedef Outcome<Error, Model::BatchDeleteEdgeInstanceChannelResult> BatchDeleteEdgeInstanceChannelOutcome;
			typedef std::future<BatchDeleteEdgeInstanceChannelOutcome> BatchDeleteEdgeInstanceChannelOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::BatchDeleteEdgeInstanceChannelRequest&, const BatchDeleteEdgeInstanceChannelOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BatchDeleteEdgeInstanceChannelAsyncHandler;
			typedef Outcome<Error, Model::BatchGetDeviceBindStatusResult> BatchGetDeviceBindStatusOutcome;
			typedef std::future<BatchGetDeviceBindStatusOutcome> BatchGetDeviceBindStatusOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::BatchGetDeviceBindStatusRequest&, const BatchGetDeviceBindStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BatchGetDeviceBindStatusAsyncHandler;
			typedef Outcome<Error, Model::BatchGetDeviceStateResult> BatchGetDeviceStateOutcome;
			typedef std::future<BatchGetDeviceStateOutcome> BatchGetDeviceStateOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::BatchGetDeviceStateRequest&, const BatchGetDeviceStateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BatchGetDeviceStateAsyncHandler;
			typedef Outcome<Error, Model::BatchGetEdgeDriverResult> BatchGetEdgeDriverOutcome;
			typedef std::future<BatchGetEdgeDriverOutcome> BatchGetEdgeDriverOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::BatchGetEdgeDriverRequest&, const BatchGetEdgeDriverOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BatchGetEdgeDriverAsyncHandler;
			typedef Outcome<Error, Model::BatchGetEdgeInstanceChannelResult> BatchGetEdgeInstanceChannelOutcome;
			typedef std::future<BatchGetEdgeInstanceChannelOutcome> BatchGetEdgeInstanceChannelOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::BatchGetEdgeInstanceChannelRequest&, const BatchGetEdgeInstanceChannelOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BatchGetEdgeInstanceChannelAsyncHandler;
			typedef Outcome<Error, Model::BatchGetEdgeInstanceDeviceChannelResult> BatchGetEdgeInstanceDeviceChannelOutcome;
			typedef std::future<BatchGetEdgeInstanceDeviceChannelOutcome> BatchGetEdgeInstanceDeviceChannelOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::BatchGetEdgeInstanceDeviceChannelRequest&, const BatchGetEdgeInstanceDeviceChannelOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BatchGetEdgeInstanceDeviceChannelAsyncHandler;
			typedef Outcome<Error, Model::BatchGetEdgeInstanceDeviceConfigResult> BatchGetEdgeInstanceDeviceConfigOutcome;
			typedef std::future<BatchGetEdgeInstanceDeviceConfigOutcome> BatchGetEdgeInstanceDeviceConfigOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::BatchGetEdgeInstanceDeviceConfigRequest&, const BatchGetEdgeInstanceDeviceConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BatchGetEdgeInstanceDeviceConfigAsyncHandler;
			typedef Outcome<Error, Model::BatchGetEdgeInstanceDeviceDriverResult> BatchGetEdgeInstanceDeviceDriverOutcome;
			typedef std::future<BatchGetEdgeInstanceDeviceDriverOutcome> BatchGetEdgeInstanceDeviceDriverOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::BatchGetEdgeInstanceDeviceDriverRequest&, const BatchGetEdgeInstanceDeviceDriverOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BatchGetEdgeInstanceDeviceDriverAsyncHandler;
			typedef Outcome<Error, Model::BatchGetEdgeInstanceDriverConfigsResult> BatchGetEdgeInstanceDriverConfigsOutcome;
			typedef std::future<BatchGetEdgeInstanceDriverConfigsOutcome> BatchGetEdgeInstanceDriverConfigsOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::BatchGetEdgeInstanceDriverConfigsRequest&, const BatchGetEdgeInstanceDriverConfigsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BatchGetEdgeInstanceDriverConfigsAsyncHandler;
			typedef Outcome<Error, Model::BatchPubResult> BatchPubOutcome;
			typedef std::future<BatchPubOutcome> BatchPubOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::BatchPubRequest&, const BatchPubOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BatchPubAsyncHandler;
			typedef Outcome<Error, Model::BatchQueryDeviceDetailResult> BatchQueryDeviceDetailOutcome;
			typedef std::future<BatchQueryDeviceDetailOutcome> BatchQueryDeviceDetailOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::BatchQueryDeviceDetailRequest&, const BatchQueryDeviceDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BatchQueryDeviceDetailAsyncHandler;
			typedef Outcome<Error, Model::BatchRegisterDeviceResult> BatchRegisterDeviceOutcome;
			typedef std::future<BatchRegisterDeviceOutcome> BatchRegisterDeviceOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::BatchRegisterDeviceRequest&, const BatchRegisterDeviceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BatchRegisterDeviceAsyncHandler;
			typedef Outcome<Error, Model::BatchRegisterDeviceWithApplyIdResult> BatchRegisterDeviceWithApplyIdOutcome;
			typedef std::future<BatchRegisterDeviceWithApplyIdOutcome> BatchRegisterDeviceWithApplyIdOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::BatchRegisterDeviceWithApplyIdRequest&, const BatchRegisterDeviceWithApplyIdOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BatchRegisterDeviceWithApplyIdAsyncHandler;
			typedef Outcome<Error, Model::BatchSetEdgeInstanceDeviceChannelResult> BatchSetEdgeInstanceDeviceChannelOutcome;
			typedef std::future<BatchSetEdgeInstanceDeviceChannelOutcome> BatchSetEdgeInstanceDeviceChannelOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::BatchSetEdgeInstanceDeviceChannelRequest&, const BatchSetEdgeInstanceDeviceChannelOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BatchSetEdgeInstanceDeviceChannelAsyncHandler;
			typedef Outcome<Error, Model::BatchSetEdgeInstanceDeviceConfigResult> BatchSetEdgeInstanceDeviceConfigOutcome;
			typedef std::future<BatchSetEdgeInstanceDeviceConfigOutcome> BatchSetEdgeInstanceDeviceConfigOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::BatchSetEdgeInstanceDeviceConfigRequest&, const BatchSetEdgeInstanceDeviceConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BatchSetEdgeInstanceDeviceConfigAsyncHandler;
			typedef Outcome<Error, Model::BatchUnbindDeviceFromEdgeInstanceResult> BatchUnbindDeviceFromEdgeInstanceOutcome;
			typedef std::future<BatchUnbindDeviceFromEdgeInstanceOutcome> BatchUnbindDeviceFromEdgeInstanceOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::BatchUnbindDeviceFromEdgeInstanceRequest&, const BatchUnbindDeviceFromEdgeInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BatchUnbindDeviceFromEdgeInstanceAsyncHandler;
			typedef Outcome<Error, Model::BatchUnbindProjectDevicesResult> BatchUnbindProjectDevicesOutcome;
			typedef std::future<BatchUnbindProjectDevicesOutcome> BatchUnbindProjectDevicesOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::BatchUnbindProjectDevicesRequest&, const BatchUnbindProjectDevicesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BatchUnbindProjectDevicesAsyncHandler;
			typedef Outcome<Error, Model::BatchUnbindProjectProductsResult> BatchUnbindProjectProductsOutcome;
			typedef std::future<BatchUnbindProjectProductsOutcome> BatchUnbindProjectProductsOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::BatchUnbindProjectProductsRequest&, const BatchUnbindProjectProductsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BatchUnbindProjectProductsAsyncHandler;
			typedef Outcome<Error, Model::BatchUpdateDeviceNicknameResult> BatchUpdateDeviceNicknameOutcome;
			typedef std::future<BatchUpdateDeviceNicknameOutcome> BatchUpdateDeviceNicknameOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::BatchUpdateDeviceNicknameRequest&, const BatchUpdateDeviceNicknameOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BatchUpdateDeviceNicknameAsyncHandler;
			typedef Outcome<Error, Model::BindApplicationToEdgeInstanceResult> BindApplicationToEdgeInstanceOutcome;
			typedef std::future<BindApplicationToEdgeInstanceOutcome> BindApplicationToEdgeInstanceOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::BindApplicationToEdgeInstanceRequest&, const BindApplicationToEdgeInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BindApplicationToEdgeInstanceAsyncHandler;
			typedef Outcome<Error, Model::BindDriverToEdgeInstanceResult> BindDriverToEdgeInstanceOutcome;
			typedef std::future<BindDriverToEdgeInstanceOutcome> BindDriverToEdgeInstanceOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::BindDriverToEdgeInstanceRequest&, const BindDriverToEdgeInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BindDriverToEdgeInstanceAsyncHandler;
			typedef Outcome<Error, Model::BindGatewayToEdgeInstanceResult> BindGatewayToEdgeInstanceOutcome;
			typedef std::future<BindGatewayToEdgeInstanceOutcome> BindGatewayToEdgeInstanceOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::BindGatewayToEdgeInstanceRequest&, const BindGatewayToEdgeInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BindGatewayToEdgeInstanceAsyncHandler;
			typedef Outcome<Error, Model::BindRoleToEdgeInstanceResult> BindRoleToEdgeInstanceOutcome;
			typedef std::future<BindRoleToEdgeInstanceOutcome> BindRoleToEdgeInstanceOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::BindRoleToEdgeInstanceRequest&, const BindRoleToEdgeInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BindRoleToEdgeInstanceAsyncHandler;
			typedef Outcome<Error, Model::BindSceneRuleToEdgeInstanceResult> BindSceneRuleToEdgeInstanceOutcome;
			typedef std::future<BindSceneRuleToEdgeInstanceOutcome> BindSceneRuleToEdgeInstanceOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::BindSceneRuleToEdgeInstanceRequest&, const BindSceneRuleToEdgeInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BindSceneRuleToEdgeInstanceAsyncHandler;
			typedef Outcome<Error, Model::CancelJobResult> CancelJobOutcome;
			typedef std::future<CancelJobOutcome> CancelJobOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::CancelJobRequest&, const CancelJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CancelJobAsyncHandler;
			typedef Outcome<Error, Model::CancelOTAStrategyByJobResult> CancelOTAStrategyByJobOutcome;
			typedef std::future<CancelOTAStrategyByJobOutcome> CancelOTAStrategyByJobOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::CancelOTAStrategyByJobRequest&, const CancelOTAStrategyByJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CancelOTAStrategyByJobAsyncHandler;
			typedef Outcome<Error, Model::CancelOTATaskByDeviceResult> CancelOTATaskByDeviceOutcome;
			typedef std::future<CancelOTATaskByDeviceOutcome> CancelOTATaskByDeviceOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::CancelOTATaskByDeviceRequest&, const CancelOTATaskByDeviceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CancelOTATaskByDeviceAsyncHandler;
			typedef Outcome<Error, Model::CancelOTATaskByJobResult> CancelOTATaskByJobOutcome;
			typedef std::future<CancelOTATaskByJobOutcome> CancelOTATaskByJobOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::CancelOTATaskByJobRequest&, const CancelOTATaskByJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CancelOTATaskByJobAsyncHandler;
			typedef Outcome<Error, Model::CancelReleaseProductResult> CancelReleaseProductOutcome;
			typedef std::future<CancelReleaseProductOutcome> CancelReleaseProductOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::CancelReleaseProductRequest&, const CancelReleaseProductOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CancelReleaseProductAsyncHandler;
			typedef Outcome<Error, Model::ClearEdgeInstanceDriverConfigsResult> ClearEdgeInstanceDriverConfigsOutcome;
			typedef std::future<ClearEdgeInstanceDriverConfigsOutcome> ClearEdgeInstanceDriverConfigsOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::ClearEdgeInstanceDriverConfigsRequest&, const ClearEdgeInstanceDriverConfigsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ClearEdgeInstanceDriverConfigsAsyncHandler;
			typedef Outcome<Error, Model::CloseDeviceTunnelResult> CloseDeviceTunnelOutcome;
			typedef std::future<CloseDeviceTunnelOutcome> CloseDeviceTunnelOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::CloseDeviceTunnelRequest&, const CloseDeviceTunnelOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CloseDeviceTunnelAsyncHandler;
			typedef Outcome<Error, Model::CloseEdgeInstanceDeploymentResult> CloseEdgeInstanceDeploymentOutcome;
			typedef std::future<CloseEdgeInstanceDeploymentOutcome> CloseEdgeInstanceDeploymentOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::CloseEdgeInstanceDeploymentRequest&, const CloseEdgeInstanceDeploymentOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CloseEdgeInstanceDeploymentAsyncHandler;
			typedef Outcome<Error, Model::ConfirmOTATaskResult> ConfirmOTATaskOutcome;
			typedef std::future<ConfirmOTATaskOutcome> ConfirmOTATaskOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::ConfirmOTATaskRequest&, const ConfirmOTATaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ConfirmOTATaskAsyncHandler;
			typedef Outcome<Error, Model::CopyThingModelResult> CopyThingModelOutcome;
			typedef std::future<CopyThingModelOutcome> CopyThingModelOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::CopyThingModelRequest&, const CopyThingModelOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CopyThingModelAsyncHandler;
			typedef Outcome<Error, Model::CreateConsumerGroupResult> CreateConsumerGroupOutcome;
			typedef std::future<CreateConsumerGroupOutcome> CreateConsumerGroupOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::CreateConsumerGroupRequest&, const CreateConsumerGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateConsumerGroupAsyncHandler;
			typedef Outcome<Error, Model::CreateConsumerGroupSubscribeRelationResult> CreateConsumerGroupSubscribeRelationOutcome;
			typedef std::future<CreateConsumerGroupSubscribeRelationOutcome> CreateConsumerGroupSubscribeRelationOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::CreateConsumerGroupSubscribeRelationRequest&, const CreateConsumerGroupSubscribeRelationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateConsumerGroupSubscribeRelationAsyncHandler;
			typedef Outcome<Error, Model::CreateDataAPIServiceResult> CreateDataAPIServiceOutcome;
			typedef std::future<CreateDataAPIServiceOutcome> CreateDataAPIServiceOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::CreateDataAPIServiceRequest&, const CreateDataAPIServiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDataAPIServiceAsyncHandler;
			typedef Outcome<Error, Model::CreateDeviceDistributeJobResult> CreateDeviceDistributeJobOutcome;
			typedef std::future<CreateDeviceDistributeJobOutcome> CreateDeviceDistributeJobOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::CreateDeviceDistributeJobRequest&, const CreateDeviceDistributeJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDeviceDistributeJobAsyncHandler;
			typedef Outcome<Error, Model::CreateDeviceDynamicGroupResult> CreateDeviceDynamicGroupOutcome;
			typedef std::future<CreateDeviceDynamicGroupOutcome> CreateDeviceDynamicGroupOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::CreateDeviceDynamicGroupRequest&, const CreateDeviceDynamicGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDeviceDynamicGroupAsyncHandler;
			typedef Outcome<Error, Model::CreateDeviceGroupResult> CreateDeviceGroupOutcome;
			typedef std::future<CreateDeviceGroupOutcome> CreateDeviceGroupOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::CreateDeviceGroupRequest&, const CreateDeviceGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDeviceGroupAsyncHandler;
			typedef Outcome<Error, Model::CreateDeviceTunnelResult> CreateDeviceTunnelOutcome;
			typedef std::future<CreateDeviceTunnelOutcome> CreateDeviceTunnelOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::CreateDeviceTunnelRequest&, const CreateDeviceTunnelOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDeviceTunnelAsyncHandler;
			typedef Outcome<Error, Model::CreateEdgeDriverResult> CreateEdgeDriverOutcome;
			typedef std::future<CreateEdgeDriverOutcome> CreateEdgeDriverOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::CreateEdgeDriverRequest&, const CreateEdgeDriverOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateEdgeDriverAsyncHandler;
			typedef Outcome<Error, Model::CreateEdgeDriverVersionResult> CreateEdgeDriverVersionOutcome;
			typedef std::future<CreateEdgeDriverVersionOutcome> CreateEdgeDriverVersionOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::CreateEdgeDriverVersionRequest&, const CreateEdgeDriverVersionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateEdgeDriverVersionAsyncHandler;
			typedef Outcome<Error, Model::CreateEdgeInstanceResult> CreateEdgeInstanceOutcome;
			typedef std::future<CreateEdgeInstanceOutcome> CreateEdgeInstanceOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::CreateEdgeInstanceRequest&, const CreateEdgeInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateEdgeInstanceAsyncHandler;
			typedef Outcome<Error, Model::CreateEdgeInstanceChannelResult> CreateEdgeInstanceChannelOutcome;
			typedef std::future<CreateEdgeInstanceChannelOutcome> CreateEdgeInstanceChannelOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::CreateEdgeInstanceChannelRequest&, const CreateEdgeInstanceChannelOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateEdgeInstanceChannelAsyncHandler;
			typedef Outcome<Error, Model::CreateEdgeInstanceDeploymentResult> CreateEdgeInstanceDeploymentOutcome;
			typedef std::future<CreateEdgeInstanceDeploymentOutcome> CreateEdgeInstanceDeploymentOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::CreateEdgeInstanceDeploymentRequest&, const CreateEdgeInstanceDeploymentOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateEdgeInstanceDeploymentAsyncHandler;
			typedef Outcome<Error, Model::CreateEdgeInstanceMessageRoutingResult> CreateEdgeInstanceMessageRoutingOutcome;
			typedef std::future<CreateEdgeInstanceMessageRoutingOutcome> CreateEdgeInstanceMessageRoutingOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::CreateEdgeInstanceMessageRoutingRequest&, const CreateEdgeInstanceMessageRoutingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateEdgeInstanceMessageRoutingAsyncHandler;
			typedef Outcome<Error, Model::CreateEdgeOssPreSignedAddressResult> CreateEdgeOssPreSignedAddressOutcome;
			typedef std::future<CreateEdgeOssPreSignedAddressOutcome> CreateEdgeOssPreSignedAddressOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::CreateEdgeOssPreSignedAddressRequest&, const CreateEdgeOssPreSignedAddressOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateEdgeOssPreSignedAddressAsyncHandler;
			typedef Outcome<Error, Model::CreateJobResult> CreateJobOutcome;
			typedef std::future<CreateJobOutcome> CreateJobOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::CreateJobRequest&, const CreateJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateJobAsyncHandler;
			typedef Outcome<Error, Model::CreateLoRaNodesTaskResult> CreateLoRaNodesTaskOutcome;
			typedef std::future<CreateLoRaNodesTaskOutcome> CreateLoRaNodesTaskOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::CreateLoRaNodesTaskRequest&, const CreateLoRaNodesTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateLoRaNodesTaskAsyncHandler;
			typedef Outcome<Error, Model::CreateOTADynamicUpgradeJobResult> CreateOTADynamicUpgradeJobOutcome;
			typedef std::future<CreateOTADynamicUpgradeJobOutcome> CreateOTADynamicUpgradeJobOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::CreateOTADynamicUpgradeJobRequest&, const CreateOTADynamicUpgradeJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateOTADynamicUpgradeJobAsyncHandler;
			typedef Outcome<Error, Model::CreateOTAFirmwareResult> CreateOTAFirmwareOutcome;
			typedef std::future<CreateOTAFirmwareOutcome> CreateOTAFirmwareOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::CreateOTAFirmwareRequest&, const CreateOTAFirmwareOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateOTAFirmwareAsyncHandler;
			typedef Outcome<Error, Model::CreateOTAModuleResult> CreateOTAModuleOutcome;
			typedef std::future<CreateOTAModuleOutcome> CreateOTAModuleOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::CreateOTAModuleRequest&, const CreateOTAModuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateOTAModuleAsyncHandler;
			typedef Outcome<Error, Model::CreateOTAStaticUpgradeJobResult> CreateOTAStaticUpgradeJobOutcome;
			typedef std::future<CreateOTAStaticUpgradeJobOutcome> CreateOTAStaticUpgradeJobOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::CreateOTAStaticUpgradeJobRequest&, const CreateOTAStaticUpgradeJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateOTAStaticUpgradeJobAsyncHandler;
			typedef Outcome<Error, Model::CreateOTAVerifyJobResult> CreateOTAVerifyJobOutcome;
			typedef std::future<CreateOTAVerifyJobOutcome> CreateOTAVerifyJobOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::CreateOTAVerifyJobRequest&, const CreateOTAVerifyJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateOTAVerifyJobAsyncHandler;
			typedef Outcome<Error, Model::CreateProductResult> CreateProductOutcome;
			typedef std::future<CreateProductOutcome> CreateProductOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::CreateProductRequest&, const CreateProductOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateProductAsyncHandler;
			typedef Outcome<Error, Model::CreateProductDistributeJobResult> CreateProductDistributeJobOutcome;
			typedef std::future<CreateProductDistributeJobOutcome> CreateProductDistributeJobOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::CreateProductDistributeJobRequest&, const CreateProductDistributeJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateProductDistributeJobAsyncHandler;
			typedef Outcome<Error, Model::CreateProductTagsResult> CreateProductTagsOutcome;
			typedef std::future<CreateProductTagsOutcome> CreateProductTagsOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::CreateProductTagsRequest&, const CreateProductTagsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateProductTagsAsyncHandler;
			typedef Outcome<Error, Model::CreateProductTopicResult> CreateProductTopicOutcome;
			typedef std::future<CreateProductTopicOutcome> CreateProductTopicOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::CreateProductTopicRequest&, const CreateProductTopicOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateProductTopicAsyncHandler;
			typedef Outcome<Error, Model::CreateRuleResult> CreateRuleOutcome;
			typedef std::future<CreateRuleOutcome> CreateRuleOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::CreateRuleRequest&, const CreateRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateRuleAsyncHandler;
			typedef Outcome<Error, Model::CreateRuleActionResult> CreateRuleActionOutcome;
			typedef std::future<CreateRuleActionOutcome> CreateRuleActionOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::CreateRuleActionRequest&, const CreateRuleActionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateRuleActionAsyncHandler;
			typedef Outcome<Error, Model::CreateSceneRuleResult> CreateSceneRuleOutcome;
			typedef std::future<CreateSceneRuleOutcome> CreateSceneRuleOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::CreateSceneRuleRequest&, const CreateSceneRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateSceneRuleAsyncHandler;
			typedef Outcome<Error, Model::CreateSoundCodeResult> CreateSoundCodeOutcome;
			typedef std::future<CreateSoundCodeOutcome> CreateSoundCodeOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::CreateSoundCodeRequest&, const CreateSoundCodeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateSoundCodeAsyncHandler;
			typedef Outcome<Error, Model::CreateSpeechResult> CreateSpeechOutcome;
			typedef std::future<CreateSpeechOutcome> CreateSpeechOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::CreateSpeechRequest&, const CreateSpeechOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateSpeechAsyncHandler;
			typedef Outcome<Error, Model::CreateStudioAppDomainOpenResult> CreateStudioAppDomainOpenOutcome;
			typedef std::future<CreateStudioAppDomainOpenOutcome> CreateStudioAppDomainOpenOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::CreateStudioAppDomainOpenRequest&, const CreateStudioAppDomainOpenOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateStudioAppDomainOpenAsyncHandler;
			typedef Outcome<Error, Model::CreateSubscribeRelationResult> CreateSubscribeRelationOutcome;
			typedef std::future<CreateSubscribeRelationOutcome> CreateSubscribeRelationOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::CreateSubscribeRelationRequest&, const CreateSubscribeRelationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateSubscribeRelationAsyncHandler;
			typedef Outcome<Error, Model::CreateThingModelResult> CreateThingModelOutcome;
			typedef std::future<CreateThingModelOutcome> CreateThingModelOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::CreateThingModelRequest&, const CreateThingModelOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateThingModelAsyncHandler;
			typedef Outcome<Error, Model::CreateThingScriptResult> CreateThingScriptOutcome;
			typedef std::future<CreateThingScriptOutcome> CreateThingScriptOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::CreateThingScriptRequest&, const CreateThingScriptOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateThingScriptAsyncHandler;
			typedef Outcome<Error, Model::CreateTopicRouteTableResult> CreateTopicRouteTableOutcome;
			typedef std::future<CreateTopicRouteTableOutcome> CreateTopicRouteTableOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::CreateTopicRouteTableRequest&, const CreateTopicRouteTableOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateTopicRouteTableAsyncHandler;
			typedef Outcome<Error, Model::DeleteClientIdsResult> DeleteClientIdsOutcome;
			typedef std::future<DeleteClientIdsOutcome> DeleteClientIdsOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::DeleteClientIdsRequest&, const DeleteClientIdsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteClientIdsAsyncHandler;
			typedef Outcome<Error, Model::DeleteConsumerGroupResult> DeleteConsumerGroupOutcome;
			typedef std::future<DeleteConsumerGroupOutcome> DeleteConsumerGroupOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::DeleteConsumerGroupRequest&, const DeleteConsumerGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteConsumerGroupAsyncHandler;
			typedef Outcome<Error, Model::DeleteConsumerGroupSubscribeRelationResult> DeleteConsumerGroupSubscribeRelationOutcome;
			typedef std::future<DeleteConsumerGroupSubscribeRelationOutcome> DeleteConsumerGroupSubscribeRelationOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::DeleteConsumerGroupSubscribeRelationRequest&, const DeleteConsumerGroupSubscribeRelationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteConsumerGroupSubscribeRelationAsyncHandler;
			typedef Outcome<Error, Model::DeleteDeviceResult> DeleteDeviceOutcome;
			typedef std::future<DeleteDeviceOutcome> DeleteDeviceOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::DeleteDeviceRequest&, const DeleteDeviceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDeviceAsyncHandler;
			typedef Outcome<Error, Model::DeleteDeviceDistributeJobResult> DeleteDeviceDistributeJobOutcome;
			typedef std::future<DeleteDeviceDistributeJobOutcome> DeleteDeviceDistributeJobOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::DeleteDeviceDistributeJobRequest&, const DeleteDeviceDistributeJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDeviceDistributeJobAsyncHandler;
			typedef Outcome<Error, Model::DeleteDeviceDynamicGroupResult> DeleteDeviceDynamicGroupOutcome;
			typedef std::future<DeleteDeviceDynamicGroupOutcome> DeleteDeviceDynamicGroupOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::DeleteDeviceDynamicGroupRequest&, const DeleteDeviceDynamicGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDeviceDynamicGroupAsyncHandler;
			typedef Outcome<Error, Model::DeleteDeviceFileResult> DeleteDeviceFileOutcome;
			typedef std::future<DeleteDeviceFileOutcome> DeleteDeviceFileOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::DeleteDeviceFileRequest&, const DeleteDeviceFileOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDeviceFileAsyncHandler;
			typedef Outcome<Error, Model::DeleteDeviceGroupResult> DeleteDeviceGroupOutcome;
			typedef std::future<DeleteDeviceGroupOutcome> DeleteDeviceGroupOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::DeleteDeviceGroupRequest&, const DeleteDeviceGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDeviceGroupAsyncHandler;
			typedef Outcome<Error, Model::DeleteDevicePropResult> DeleteDevicePropOutcome;
			typedef std::future<DeleteDevicePropOutcome> DeleteDevicePropOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::DeleteDevicePropRequest&, const DeleteDevicePropOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDevicePropAsyncHandler;
			typedef Outcome<Error, Model::DeleteDeviceSpeechResult> DeleteDeviceSpeechOutcome;
			typedef std::future<DeleteDeviceSpeechOutcome> DeleteDeviceSpeechOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::DeleteDeviceSpeechRequest&, const DeleteDeviceSpeechOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDeviceSpeechAsyncHandler;
			typedef Outcome<Error, Model::DeleteDeviceTunnelResult> DeleteDeviceTunnelOutcome;
			typedef std::future<DeleteDeviceTunnelOutcome> DeleteDeviceTunnelOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::DeleteDeviceTunnelRequest&, const DeleteDeviceTunnelOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDeviceTunnelAsyncHandler;
			typedef Outcome<Error, Model::DeleteEdgeDriverResult> DeleteEdgeDriverOutcome;
			typedef std::future<DeleteEdgeDriverOutcome> DeleteEdgeDriverOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::DeleteEdgeDriverRequest&, const DeleteEdgeDriverOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteEdgeDriverAsyncHandler;
			typedef Outcome<Error, Model::DeleteEdgeDriverVersionResult> DeleteEdgeDriverVersionOutcome;
			typedef std::future<DeleteEdgeDriverVersionOutcome> DeleteEdgeDriverVersionOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::DeleteEdgeDriverVersionRequest&, const DeleteEdgeDriverVersionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteEdgeDriverVersionAsyncHandler;
			typedef Outcome<Error, Model::DeleteEdgeInstanceResult> DeleteEdgeInstanceOutcome;
			typedef std::future<DeleteEdgeInstanceOutcome> DeleteEdgeInstanceOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::DeleteEdgeInstanceRequest&, const DeleteEdgeInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteEdgeInstanceAsyncHandler;
			typedef Outcome<Error, Model::DeleteEdgeInstanceMessageRoutingResult> DeleteEdgeInstanceMessageRoutingOutcome;
			typedef std::future<DeleteEdgeInstanceMessageRoutingOutcome> DeleteEdgeInstanceMessageRoutingOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::DeleteEdgeInstanceMessageRoutingRequest&, const DeleteEdgeInstanceMessageRoutingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteEdgeInstanceMessageRoutingAsyncHandler;
			typedef Outcome<Error, Model::DeleteJobResult> DeleteJobOutcome;
			typedef std::future<DeleteJobOutcome> DeleteJobOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::DeleteJobRequest&, const DeleteJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteJobAsyncHandler;
			typedef Outcome<Error, Model::DeleteOTAFirmwareResult> DeleteOTAFirmwareOutcome;
			typedef std::future<DeleteOTAFirmwareOutcome> DeleteOTAFirmwareOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::DeleteOTAFirmwareRequest&, const DeleteOTAFirmwareOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteOTAFirmwareAsyncHandler;
			typedef Outcome<Error, Model::DeleteOTAModuleResult> DeleteOTAModuleOutcome;
			typedef std::future<DeleteOTAModuleOutcome> DeleteOTAModuleOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::DeleteOTAModuleRequest&, const DeleteOTAModuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteOTAModuleAsyncHandler;
			typedef Outcome<Error, Model::DeleteProductResult> DeleteProductOutcome;
			typedef std::future<DeleteProductOutcome> DeleteProductOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::DeleteProductRequest&, const DeleteProductOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteProductAsyncHandler;
			typedef Outcome<Error, Model::DeleteProductTagsResult> DeleteProductTagsOutcome;
			typedef std::future<DeleteProductTagsOutcome> DeleteProductTagsOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::DeleteProductTagsRequest&, const DeleteProductTagsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteProductTagsAsyncHandler;
			typedef Outcome<Error, Model::DeleteProductTopicResult> DeleteProductTopicOutcome;
			typedef std::future<DeleteProductTopicOutcome> DeleteProductTopicOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::DeleteProductTopicRequest&, const DeleteProductTopicOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteProductTopicAsyncHandler;
			typedef Outcome<Error, Model::DeleteRuleResult> DeleteRuleOutcome;
			typedef std::future<DeleteRuleOutcome> DeleteRuleOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::DeleteRuleRequest&, const DeleteRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRuleAsyncHandler;
			typedef Outcome<Error, Model::DeleteRuleActionResult> DeleteRuleActionOutcome;
			typedef std::future<DeleteRuleActionOutcome> DeleteRuleActionOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::DeleteRuleActionRequest&, const DeleteRuleActionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRuleActionAsyncHandler;
			typedef Outcome<Error, Model::DeleteSceneRuleResult> DeleteSceneRuleOutcome;
			typedef std::future<DeleteSceneRuleOutcome> DeleteSceneRuleOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::DeleteSceneRuleRequest&, const DeleteSceneRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSceneRuleAsyncHandler;
			typedef Outcome<Error, Model::DeleteSoundCodeResult> DeleteSoundCodeOutcome;
			typedef std::future<DeleteSoundCodeOutcome> DeleteSoundCodeOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::DeleteSoundCodeRequest&, const DeleteSoundCodeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSoundCodeAsyncHandler;
			typedef Outcome<Error, Model::DeleteSpeechResult> DeleteSpeechOutcome;
			typedef std::future<DeleteSpeechOutcome> DeleteSpeechOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::DeleteSpeechRequest&, const DeleteSpeechOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSpeechAsyncHandler;
			typedef Outcome<Error, Model::DeleteStudioAppDomainOpenResult> DeleteStudioAppDomainOpenOutcome;
			typedef std::future<DeleteStudioAppDomainOpenOutcome> DeleteStudioAppDomainOpenOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::DeleteStudioAppDomainOpenRequest&, const DeleteStudioAppDomainOpenOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteStudioAppDomainOpenAsyncHandler;
			typedef Outcome<Error, Model::DeleteSubscribeRelationResult> DeleteSubscribeRelationOutcome;
			typedef std::future<DeleteSubscribeRelationOutcome> DeleteSubscribeRelationOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::DeleteSubscribeRelationRequest&, const DeleteSubscribeRelationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSubscribeRelationAsyncHandler;
			typedef Outcome<Error, Model::DeleteThingModelResult> DeleteThingModelOutcome;
			typedef std::future<DeleteThingModelOutcome> DeleteThingModelOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::DeleteThingModelRequest&, const DeleteThingModelOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteThingModelAsyncHandler;
			typedef Outcome<Error, Model::DeleteTopicRouteTableResult> DeleteTopicRouteTableOutcome;
			typedef std::future<DeleteTopicRouteTableOutcome> DeleteTopicRouteTableOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::DeleteTopicRouteTableRequest&, const DeleteTopicRouteTableOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTopicRouteTableAsyncHandler;
			typedef Outcome<Error, Model::DisableDeviceTunnelResult> DisableDeviceTunnelOutcome;
			typedef std::future<DisableDeviceTunnelOutcome> DisableDeviceTunnelOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::DisableDeviceTunnelRequest&, const DisableDeviceTunnelOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DisableDeviceTunnelAsyncHandler;
			typedef Outcome<Error, Model::DisableDeviceTunnelShareResult> DisableDeviceTunnelShareOutcome;
			typedef std::future<DisableDeviceTunnelShareOutcome> DisableDeviceTunnelShareOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::DisableDeviceTunnelShareRequest&, const DisableDeviceTunnelShareOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DisableDeviceTunnelShareAsyncHandler;
			typedef Outcome<Error, Model::DisableSceneRuleResult> DisableSceneRuleOutcome;
			typedef std::future<DisableSceneRuleOutcome> DisableSceneRuleOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::DisableSceneRuleRequest&, const DisableSceneRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DisableSceneRuleAsyncHandler;
			typedef Outcome<Error, Model::DisableThingResult> DisableThingOutcome;
			typedef std::future<DisableThingOutcome> DisableThingOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::DisableThingRequest&, const DisableThingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DisableThingAsyncHandler;
			typedef Outcome<Error, Model::EnableDeviceTunnelResult> EnableDeviceTunnelOutcome;
			typedef std::future<EnableDeviceTunnelOutcome> EnableDeviceTunnelOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::EnableDeviceTunnelRequest&, const EnableDeviceTunnelOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EnableDeviceTunnelAsyncHandler;
			typedef Outcome<Error, Model::EnableDeviceTunnelShareResult> EnableDeviceTunnelShareOutcome;
			typedef std::future<EnableDeviceTunnelShareOutcome> EnableDeviceTunnelShareOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::EnableDeviceTunnelShareRequest&, const EnableDeviceTunnelShareOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EnableDeviceTunnelShareAsyncHandler;
			typedef Outcome<Error, Model::EnableSceneRuleResult> EnableSceneRuleOutcome;
			typedef std::future<EnableSceneRuleOutcome> EnableSceneRuleOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::EnableSceneRuleRequest&, const EnableSceneRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EnableSceneRuleAsyncHandler;
			typedef Outcome<Error, Model::EnableThingResult> EnableThingOutcome;
			typedef std::future<EnableThingOutcome> EnableThingOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::EnableThingRequest&, const EnableThingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EnableThingAsyncHandler;
			typedef Outcome<Error, Model::GenerateDeviceNameListURLResult> GenerateDeviceNameListURLOutcome;
			typedef std::future<GenerateDeviceNameListURLOutcome> GenerateDeviceNameListURLOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::GenerateDeviceNameListURLRequest&, const GenerateDeviceNameListURLOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GenerateDeviceNameListURLAsyncHandler;
			typedef Outcome<Error, Model::GenerateFileUploadURLResult> GenerateFileUploadURLOutcome;
			typedef std::future<GenerateFileUploadURLOutcome> GenerateFileUploadURLOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::GenerateFileUploadURLRequest&, const GenerateFileUploadURLOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GenerateFileUploadURLAsyncHandler;
			typedef Outcome<Error, Model::GenerateOTAUploadURLResult> GenerateOTAUploadURLOutcome;
			typedef std::future<GenerateOTAUploadURLOutcome> GenerateOTAUploadURLOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::GenerateOTAUploadURLRequest&, const GenerateOTAUploadURLOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GenerateOTAUploadURLAsyncHandler;
			typedef Outcome<Error, Model::GetDataAPIServiceDetailResult> GetDataAPIServiceDetailOutcome;
			typedef std::future<GetDataAPIServiceDetailOutcome> GetDataAPIServiceDetailOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::GetDataAPIServiceDetailRequest&, const GetDataAPIServiceDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetDataAPIServiceDetailAsyncHandler;
			typedef Outcome<Error, Model::GetDeviceShadowResult> GetDeviceShadowOutcome;
			typedef std::future<GetDeviceShadowOutcome> GetDeviceShadowOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::GetDeviceShadowRequest&, const GetDeviceShadowOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetDeviceShadowAsyncHandler;
			typedef Outcome<Error, Model::GetDeviceStatusResult> GetDeviceStatusOutcome;
			typedef std::future<GetDeviceStatusOutcome> GetDeviceStatusOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::GetDeviceStatusRequest&, const GetDeviceStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetDeviceStatusAsyncHandler;
			typedef Outcome<Error, Model::GetDeviceTunnelShareStatusResult> GetDeviceTunnelShareStatusOutcome;
			typedef std::future<GetDeviceTunnelShareStatusOutcome> GetDeviceTunnelShareStatusOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::GetDeviceTunnelShareStatusRequest&, const GetDeviceTunnelShareStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetDeviceTunnelShareStatusAsyncHandler;
			typedef Outcome<Error, Model::GetDeviceTunnelStatusResult> GetDeviceTunnelStatusOutcome;
			typedef std::future<GetDeviceTunnelStatusOutcome> GetDeviceTunnelStatusOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::GetDeviceTunnelStatusRequest&, const GetDeviceTunnelStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetDeviceTunnelStatusAsyncHandler;
			typedef Outcome<Error, Model::GetEdgeDriverVersionResult> GetEdgeDriverVersionOutcome;
			typedef std::future<GetEdgeDriverVersionOutcome> GetEdgeDriverVersionOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::GetEdgeDriverVersionRequest&, const GetEdgeDriverVersionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetEdgeDriverVersionAsyncHandler;
			typedef Outcome<Error, Model::GetEdgeInstanceResult> GetEdgeInstanceOutcome;
			typedef std::future<GetEdgeInstanceOutcome> GetEdgeInstanceOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::GetEdgeInstanceRequest&, const GetEdgeInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetEdgeInstanceAsyncHandler;
			typedef Outcome<Error, Model::GetEdgeInstanceDeploymentResult> GetEdgeInstanceDeploymentOutcome;
			typedef std::future<GetEdgeInstanceDeploymentOutcome> GetEdgeInstanceDeploymentOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::GetEdgeInstanceDeploymentRequest&, const GetEdgeInstanceDeploymentOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetEdgeInstanceDeploymentAsyncHandler;
			typedef Outcome<Error, Model::GetEdgeInstanceMessageRoutingResult> GetEdgeInstanceMessageRoutingOutcome;
			typedef std::future<GetEdgeInstanceMessageRoutingOutcome> GetEdgeInstanceMessageRoutingOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::GetEdgeInstanceMessageRoutingRequest&, const GetEdgeInstanceMessageRoutingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetEdgeInstanceMessageRoutingAsyncHandler;
			typedef Outcome<Error, Model::GetGatewayBySubDeviceResult> GetGatewayBySubDeviceOutcome;
			typedef std::future<GetGatewayBySubDeviceOutcome> GetGatewayBySubDeviceOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::GetGatewayBySubDeviceRequest&, const GetGatewayBySubDeviceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetGatewayBySubDeviceAsyncHandler;
			typedef Outcome<Error, Model::GetLoraNodesTaskResult> GetLoraNodesTaskOutcome;
			typedef std::future<GetLoraNodesTaskOutcome> GetLoraNodesTaskOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::GetLoraNodesTaskRequest&, const GetLoraNodesTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetLoraNodesTaskAsyncHandler;
			typedef Outcome<Error, Model::GetRuleResult> GetRuleOutcome;
			typedef std::future<GetRuleOutcome> GetRuleOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::GetRuleRequest&, const GetRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetRuleAsyncHandler;
			typedef Outcome<Error, Model::GetRuleActionResult> GetRuleActionOutcome;
			typedef std::future<GetRuleActionOutcome> GetRuleActionOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::GetRuleActionRequest&, const GetRuleActionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetRuleActionAsyncHandler;
			typedef Outcome<Error, Model::GetSceneRuleResult> GetSceneRuleOutcome;
			typedef std::future<GetSceneRuleOutcome> GetSceneRuleOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::GetSceneRuleRequest&, const GetSceneRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetSceneRuleAsyncHandler;
			typedef Outcome<Error, Model::GetSoundCodeAudioResult> GetSoundCodeAudioOutcome;
			typedef std::future<GetSoundCodeAudioOutcome> GetSoundCodeAudioOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::GetSoundCodeAudioRequest&, const GetSoundCodeAudioOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetSoundCodeAudioAsyncHandler;
			typedef Outcome<Error, Model::GetSpeechDeviceDetailResult> GetSpeechDeviceDetailOutcome;
			typedef std::future<GetSpeechDeviceDetailOutcome> GetSpeechDeviceDetailOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::GetSpeechDeviceDetailRequest&, const GetSpeechDeviceDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetSpeechDeviceDetailAsyncHandler;
			typedef Outcome<Error, Model::GetSpeechVoiceResult> GetSpeechVoiceOutcome;
			typedef std::future<GetSpeechVoiceOutcome> GetSpeechVoiceOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::GetSpeechVoiceRequest&, const GetSpeechVoiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetSpeechVoiceAsyncHandler;
			typedef Outcome<Error, Model::GetStudioAppTokenOpenResult> GetStudioAppTokenOpenOutcome;
			typedef std::future<GetStudioAppTokenOpenOutcome> GetStudioAppTokenOpenOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::GetStudioAppTokenOpenRequest&, const GetStudioAppTokenOpenOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetStudioAppTokenOpenAsyncHandler;
			typedef Outcome<Error, Model::GetThingModelTslResult> GetThingModelTslOutcome;
			typedef std::future<GetThingModelTslOutcome> GetThingModelTslOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::GetThingModelTslRequest&, const GetThingModelTslOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetThingModelTslAsyncHandler;
			typedef Outcome<Error, Model::GetThingModelTslPublishedResult> GetThingModelTslPublishedOutcome;
			typedef std::future<GetThingModelTslPublishedOutcome> GetThingModelTslPublishedOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::GetThingModelTslPublishedRequest&, const GetThingModelTslPublishedOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetThingModelTslPublishedAsyncHandler;
			typedef Outcome<Error, Model::GetThingScriptResult> GetThingScriptOutcome;
			typedef std::future<GetThingScriptOutcome> GetThingScriptOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::GetThingScriptRequest&, const GetThingScriptOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetThingScriptAsyncHandler;
			typedef Outcome<Error, Model::GetThingTemplateResult> GetThingTemplateOutcome;
			typedef std::future<GetThingTemplateOutcome> GetThingTemplateOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::GetThingTemplateRequest&, const GetThingTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetThingTemplateAsyncHandler;
			typedef Outcome<Error, Model::GetThingTopoResult> GetThingTopoOutcome;
			typedef std::future<GetThingTopoOutcome> GetThingTopoOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::GetThingTopoRequest&, const GetThingTopoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetThingTopoAsyncHandler;
			typedef Outcome<Error, Model::GisQueryDeviceLocationResult> GisQueryDeviceLocationOutcome;
			typedef std::future<GisQueryDeviceLocationOutcome> GisQueryDeviceLocationOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::GisQueryDeviceLocationRequest&, const GisQueryDeviceLocationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GisQueryDeviceLocationAsyncHandler;
			typedef Outcome<Error, Model::GisSearchDeviceTraceResult> GisSearchDeviceTraceOutcome;
			typedef std::future<GisSearchDeviceTraceOutcome> GisSearchDeviceTraceOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::GisSearchDeviceTraceRequest&, const GisSearchDeviceTraceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GisSearchDeviceTraceAsyncHandler;
			typedef Outcome<Error, Model::ImportThingModelTslResult> ImportThingModelTslOutcome;
			typedef std::future<ImportThingModelTslOutcome> ImportThingModelTslOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::ImportThingModelTslRequest&, const ImportThingModelTslOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ImportThingModelTslAsyncHandler;
			typedef Outcome<Error, Model::InvokeDataAPIServiceResult> InvokeDataAPIServiceOutcome;
			typedef std::future<InvokeDataAPIServiceOutcome> InvokeDataAPIServiceOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::InvokeDataAPIServiceRequest&, const InvokeDataAPIServiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> InvokeDataAPIServiceAsyncHandler;
			typedef Outcome<Error, Model::InvokeThingServiceResult> InvokeThingServiceOutcome;
			typedef std::future<InvokeThingServiceOutcome> InvokeThingServiceOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::InvokeThingServiceRequest&, const InvokeThingServiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> InvokeThingServiceAsyncHandler;
			typedef Outcome<Error, Model::InvokeThingsServiceResult> InvokeThingsServiceOutcome;
			typedef std::future<InvokeThingsServiceOutcome> InvokeThingsServiceOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::InvokeThingsServiceRequest&, const InvokeThingsServiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> InvokeThingsServiceAsyncHandler;
			typedef Outcome<Error, Model::ListAnalyticsDataResult> ListAnalyticsDataOutcome;
			typedef std::future<ListAnalyticsDataOutcome> ListAnalyticsDataOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::ListAnalyticsDataRequest&, const ListAnalyticsDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAnalyticsDataAsyncHandler;
			typedef Outcome<Error, Model::ListDeviceDistributeJobResult> ListDeviceDistributeJobOutcome;
			typedef std::future<ListDeviceDistributeJobOutcome> ListDeviceDistributeJobOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::ListDeviceDistributeJobRequest&, const ListDeviceDistributeJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDeviceDistributeJobAsyncHandler;
			typedef Outcome<Error, Model::ListDistributedDeviceResult> ListDistributedDeviceOutcome;
			typedef std::future<ListDistributedDeviceOutcome> ListDistributedDeviceOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::ListDistributedDeviceRequest&, const ListDistributedDeviceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDistributedDeviceAsyncHandler;
			typedef Outcome<Error, Model::ListDistributedProductResult> ListDistributedProductOutcome;
			typedef std::future<ListDistributedProductOutcome> ListDistributedProductOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::ListDistributedProductRequest&, const ListDistributedProductOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDistributedProductAsyncHandler;
			typedef Outcome<Error, Model::ListJobResult> ListJobOutcome;
			typedef std::future<ListJobOutcome> ListJobOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::ListJobRequest&, const ListJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListJobAsyncHandler;
			typedef Outcome<Error, Model::ListOTAFirmwareResult> ListOTAFirmwareOutcome;
			typedef std::future<ListOTAFirmwareOutcome> ListOTAFirmwareOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::ListOTAFirmwareRequest&, const ListOTAFirmwareOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListOTAFirmwareAsyncHandler;
			typedef Outcome<Error, Model::ListOTAJobByDeviceResult> ListOTAJobByDeviceOutcome;
			typedef std::future<ListOTAJobByDeviceOutcome> ListOTAJobByDeviceOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::ListOTAJobByDeviceRequest&, const ListOTAJobByDeviceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListOTAJobByDeviceAsyncHandler;
			typedef Outcome<Error, Model::ListOTAJobByFirmwareResult> ListOTAJobByFirmwareOutcome;
			typedef std::future<ListOTAJobByFirmwareOutcome> ListOTAJobByFirmwareOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::ListOTAJobByFirmwareRequest&, const ListOTAJobByFirmwareOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListOTAJobByFirmwareAsyncHandler;
			typedef Outcome<Error, Model::ListOTAModuleByProductResult> ListOTAModuleByProductOutcome;
			typedef std::future<ListOTAModuleByProductOutcome> ListOTAModuleByProductOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::ListOTAModuleByProductRequest&, const ListOTAModuleByProductOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListOTAModuleByProductAsyncHandler;
			typedef Outcome<Error, Model::ListOTAModuleVersionsByDeviceResult> ListOTAModuleVersionsByDeviceOutcome;
			typedef std::future<ListOTAModuleVersionsByDeviceOutcome> ListOTAModuleVersionsByDeviceOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::ListOTAModuleVersionsByDeviceRequest&, const ListOTAModuleVersionsByDeviceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListOTAModuleVersionsByDeviceAsyncHandler;
			typedef Outcome<Error, Model::ListOTATaskByJobResult> ListOTATaskByJobOutcome;
			typedef std::future<ListOTATaskByJobOutcome> ListOTATaskByJobOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::ListOTATaskByJobRequest&, const ListOTATaskByJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListOTATaskByJobAsyncHandler;
			typedef Outcome<Error, Model::ListOTAUnfinishedTaskByDeviceResult> ListOTAUnfinishedTaskByDeviceOutcome;
			typedef std::future<ListOTAUnfinishedTaskByDeviceOutcome> ListOTAUnfinishedTaskByDeviceOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::ListOTAUnfinishedTaskByDeviceRequest&, const ListOTAUnfinishedTaskByDeviceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListOTAUnfinishedTaskByDeviceAsyncHandler;
			typedef Outcome<Error, Model::ListProductByTagsResult> ListProductByTagsOutcome;
			typedef std::future<ListProductByTagsOutcome> ListProductByTagsOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::ListProductByTagsRequest&, const ListProductByTagsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListProductByTagsAsyncHandler;
			typedef Outcome<Error, Model::ListProductTagsResult> ListProductTagsOutcome;
			typedef std::future<ListProductTagsOutcome> ListProductTagsOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::ListProductTagsRequest&, const ListProductTagsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListProductTagsAsyncHandler;
			typedef Outcome<Error, Model::ListRuleResult> ListRuleOutcome;
			typedef std::future<ListRuleOutcome> ListRuleOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::ListRuleRequest&, const ListRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListRuleAsyncHandler;
			typedef Outcome<Error, Model::ListRuleActionsResult> ListRuleActionsOutcome;
			typedef std::future<ListRuleActionsOutcome> ListRuleActionsOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::ListRuleActionsRequest&, const ListRuleActionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListRuleActionsAsyncHandler;
			typedef Outcome<Error, Model::ListTaskResult> ListTaskOutcome;
			typedef std::future<ListTaskOutcome> ListTaskOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::ListTaskRequest&, const ListTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTaskAsyncHandler;
			typedef Outcome<Error, Model::ListThingModelVersionResult> ListThingModelVersionOutcome;
			typedef std::future<ListThingModelVersionOutcome> ListThingModelVersionOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::ListThingModelVersionRequest&, const ListThingModelVersionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListThingModelVersionAsyncHandler;
			typedef Outcome<Error, Model::ListThingTemplatesResult> ListThingTemplatesOutcome;
			typedef std::future<ListThingTemplatesOutcome> ListThingTemplatesOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::ListThingTemplatesRequest&, const ListThingTemplatesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListThingTemplatesAsyncHandler;
			typedef Outcome<Error, Model::NotifyAddThingTopoResult> NotifyAddThingTopoOutcome;
			typedef std::future<NotifyAddThingTopoOutcome> NotifyAddThingTopoOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::NotifyAddThingTopoRequest&, const NotifyAddThingTopoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> NotifyAddThingTopoAsyncHandler;
			typedef Outcome<Error, Model::OpenIotServiceResult> OpenIotServiceOutcome;
			typedef std::future<OpenIotServiceOutcome> OpenIotServiceOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::OpenIotServiceRequest&, const OpenIotServiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OpenIotServiceAsyncHandler;
			typedef Outcome<Error, Model::PrintByTemplateResult> PrintByTemplateOutcome;
			typedef std::future<PrintByTemplateOutcome> PrintByTemplateOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::PrintByTemplateRequest&, const PrintByTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PrintByTemplateAsyncHandler;
			typedef Outcome<Error, Model::PubResult> PubOutcome;
			typedef std::future<PubOutcome> PubOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::PubRequest&, const PubOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PubAsyncHandler;
			typedef Outcome<Error, Model::PubBroadcastResult> PubBroadcastOutcome;
			typedef std::future<PubBroadcastOutcome> PubBroadcastOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::PubBroadcastRequest&, const PubBroadcastOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PubBroadcastAsyncHandler;
			typedef Outcome<Error, Model::PublishStudioAppResult> PublishStudioAppOutcome;
			typedef std::future<PublishStudioAppOutcome> PublishStudioAppOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::PublishStudioAppRequest&, const PublishStudioAppOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PublishStudioAppAsyncHandler;
			typedef Outcome<Error, Model::PublishThingModelResult> PublishThingModelOutcome;
			typedef std::future<PublishThingModelOutcome> PublishThingModelOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::PublishThingModelRequest&, const PublishThingModelOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PublishThingModelAsyncHandler;
			typedef Outcome<Error, Model::PushSpeechResult> PushSpeechOutcome;
			typedef std::future<PushSpeechOutcome> PushSpeechOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::PushSpeechRequest&, const PushSpeechOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PushSpeechAsyncHandler;
			typedef Outcome<Error, Model::QueryBatchRegisterDeviceStatusResult> QueryBatchRegisterDeviceStatusOutcome;
			typedef std::future<QueryBatchRegisterDeviceStatusOutcome> QueryBatchRegisterDeviceStatusOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::QueryBatchRegisterDeviceStatusRequest&, const QueryBatchRegisterDeviceStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryBatchRegisterDeviceStatusAsyncHandler;
			typedef Outcome<Error, Model::QueryCertUrlByApplyIdResult> QueryCertUrlByApplyIdOutcome;
			typedef std::future<QueryCertUrlByApplyIdOutcome> QueryCertUrlByApplyIdOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::QueryCertUrlByApplyIdRequest&, const QueryCertUrlByApplyIdOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryCertUrlByApplyIdAsyncHandler;
			typedef Outcome<Error, Model::QueryClientIdsResult> QueryClientIdsOutcome;
			typedef std::future<QueryClientIdsOutcome> QueryClientIdsOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::QueryClientIdsRequest&, const QueryClientIdsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryClientIdsAsyncHandler;
			typedef Outcome<Error, Model::QueryConsumerGroupByGroupIdResult> QueryConsumerGroupByGroupIdOutcome;
			typedef std::future<QueryConsumerGroupByGroupIdOutcome> QueryConsumerGroupByGroupIdOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::QueryConsumerGroupByGroupIdRequest&, const QueryConsumerGroupByGroupIdOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryConsumerGroupByGroupIdAsyncHandler;
			typedef Outcome<Error, Model::QueryConsumerGroupListResult> QueryConsumerGroupListOutcome;
			typedef std::future<QueryConsumerGroupListOutcome> QueryConsumerGroupListOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::QueryConsumerGroupListRequest&, const QueryConsumerGroupListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryConsumerGroupListAsyncHandler;
			typedef Outcome<Error, Model::QueryConsumerGroupStatusResult> QueryConsumerGroupStatusOutcome;
			typedef std::future<QueryConsumerGroupStatusOutcome> QueryConsumerGroupStatusOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::QueryConsumerGroupStatusRequest&, const QueryConsumerGroupStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryConsumerGroupStatusAsyncHandler;
			typedef Outcome<Error, Model::QueryDetailSceneRuleLogResult> QueryDetailSceneRuleLogOutcome;
			typedef std::future<QueryDetailSceneRuleLogOutcome> QueryDetailSceneRuleLogOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::QueryDetailSceneRuleLogRequest&, const QueryDetailSceneRuleLogOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryDetailSceneRuleLogAsyncHandler;
			typedef Outcome<Error, Model::QueryDeviceResult> QueryDeviceOutcome;
			typedef std::future<QueryDeviceOutcome> QueryDeviceOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::QueryDeviceRequest&, const QueryDeviceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryDeviceAsyncHandler;
			typedef Outcome<Error, Model::QueryDeviceBySQLResult> QueryDeviceBySQLOutcome;
			typedef std::future<QueryDeviceBySQLOutcome> QueryDeviceBySQLOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::QueryDeviceBySQLRequest&, const QueryDeviceBySQLOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryDeviceBySQLAsyncHandler;
			typedef Outcome<Error, Model::QueryDeviceByStatusResult> QueryDeviceByStatusOutcome;
			typedef std::future<QueryDeviceByStatusOutcome> QueryDeviceByStatusOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::QueryDeviceByStatusRequest&, const QueryDeviceByStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryDeviceByStatusAsyncHandler;
			typedef Outcome<Error, Model::QueryDeviceByTagsResult> QueryDeviceByTagsOutcome;
			typedef std::future<QueryDeviceByTagsOutcome> QueryDeviceByTagsOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::QueryDeviceByTagsRequest&, const QueryDeviceByTagsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryDeviceByTagsAsyncHandler;
			typedef Outcome<Error, Model::QueryDeviceCertResult> QueryDeviceCertOutcome;
			typedef std::future<QueryDeviceCertOutcome> QueryDeviceCertOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::QueryDeviceCertRequest&, const QueryDeviceCertOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryDeviceCertAsyncHandler;
			typedef Outcome<Error, Model::QueryDeviceDesiredPropertyResult> QueryDeviceDesiredPropertyOutcome;
			typedef std::future<QueryDeviceDesiredPropertyOutcome> QueryDeviceDesiredPropertyOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::QueryDeviceDesiredPropertyRequest&, const QueryDeviceDesiredPropertyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryDeviceDesiredPropertyAsyncHandler;
			typedef Outcome<Error, Model::QueryDeviceDetailResult> QueryDeviceDetailOutcome;
			typedef std::future<QueryDeviceDetailOutcome> QueryDeviceDetailOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::QueryDeviceDetailRequest&, const QueryDeviceDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryDeviceDetailAsyncHandler;
			typedef Outcome<Error, Model::QueryDeviceDistributeDetailResult> QueryDeviceDistributeDetailOutcome;
			typedef std::future<QueryDeviceDistributeDetailOutcome> QueryDeviceDistributeDetailOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::QueryDeviceDistributeDetailRequest&, const QueryDeviceDistributeDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryDeviceDistributeDetailAsyncHandler;
			typedef Outcome<Error, Model::QueryDeviceDistributeJobResult> QueryDeviceDistributeJobOutcome;
			typedef std::future<QueryDeviceDistributeJobOutcome> QueryDeviceDistributeJobOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::QueryDeviceDistributeJobRequest&, const QueryDeviceDistributeJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryDeviceDistributeJobAsyncHandler;
			typedef Outcome<Error, Model::QueryDeviceEventDataResult> QueryDeviceEventDataOutcome;
			typedef std::future<QueryDeviceEventDataOutcome> QueryDeviceEventDataOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::QueryDeviceEventDataRequest&, const QueryDeviceEventDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryDeviceEventDataAsyncHandler;
			typedef Outcome<Error, Model::QueryDeviceFileResult> QueryDeviceFileOutcome;
			typedef std::future<QueryDeviceFileOutcome> QueryDeviceFileOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::QueryDeviceFileRequest&, const QueryDeviceFileOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryDeviceFileAsyncHandler;
			typedef Outcome<Error, Model::QueryDeviceFileListResult> QueryDeviceFileListOutcome;
			typedef std::future<QueryDeviceFileListOutcome> QueryDeviceFileListOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::QueryDeviceFileListRequest&, const QueryDeviceFileListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryDeviceFileListAsyncHandler;
			typedef Outcome<Error, Model::QueryDeviceGroupByDeviceResult> QueryDeviceGroupByDeviceOutcome;
			typedef std::future<QueryDeviceGroupByDeviceOutcome> QueryDeviceGroupByDeviceOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::QueryDeviceGroupByDeviceRequest&, const QueryDeviceGroupByDeviceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryDeviceGroupByDeviceAsyncHandler;
			typedef Outcome<Error, Model::QueryDeviceGroupByTagsResult> QueryDeviceGroupByTagsOutcome;
			typedef std::future<QueryDeviceGroupByTagsOutcome> QueryDeviceGroupByTagsOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::QueryDeviceGroupByTagsRequest&, const QueryDeviceGroupByTagsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryDeviceGroupByTagsAsyncHandler;
			typedef Outcome<Error, Model::QueryDeviceGroupInfoResult> QueryDeviceGroupInfoOutcome;
			typedef std::future<QueryDeviceGroupInfoOutcome> QueryDeviceGroupInfoOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::QueryDeviceGroupInfoRequest&, const QueryDeviceGroupInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryDeviceGroupInfoAsyncHandler;
			typedef Outcome<Error, Model::QueryDeviceGroupListResult> QueryDeviceGroupListOutcome;
			typedef std::future<QueryDeviceGroupListOutcome> QueryDeviceGroupListOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::QueryDeviceGroupListRequest&, const QueryDeviceGroupListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryDeviceGroupListAsyncHandler;
			typedef Outcome<Error, Model::QueryDeviceGroupTagListResult> QueryDeviceGroupTagListOutcome;
			typedef std::future<QueryDeviceGroupTagListOutcome> QueryDeviceGroupTagListOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::QueryDeviceGroupTagListRequest&, const QueryDeviceGroupTagListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryDeviceGroupTagListAsyncHandler;
			typedef Outcome<Error, Model::QueryDeviceInfoResult> QueryDeviceInfoOutcome;
			typedef std::future<QueryDeviceInfoOutcome> QueryDeviceInfoOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::QueryDeviceInfoRequest&, const QueryDeviceInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryDeviceInfoAsyncHandler;
			typedef Outcome<Error, Model::QueryDeviceListByDeviceGroupResult> QueryDeviceListByDeviceGroupOutcome;
			typedef std::future<QueryDeviceListByDeviceGroupOutcome> QueryDeviceListByDeviceGroupOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::QueryDeviceListByDeviceGroupRequest&, const QueryDeviceListByDeviceGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryDeviceListByDeviceGroupAsyncHandler;
			typedef Outcome<Error, Model::QueryDeviceOriginalEventDataResult> QueryDeviceOriginalEventDataOutcome;
			typedef std::future<QueryDeviceOriginalEventDataOutcome> QueryDeviceOriginalEventDataOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::QueryDeviceOriginalEventDataRequest&, const QueryDeviceOriginalEventDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryDeviceOriginalEventDataAsyncHandler;
			typedef Outcome<Error, Model::QueryDeviceOriginalPropertyDataResult> QueryDeviceOriginalPropertyDataOutcome;
			typedef std::future<QueryDeviceOriginalPropertyDataOutcome> QueryDeviceOriginalPropertyDataOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::QueryDeviceOriginalPropertyDataRequest&, const QueryDeviceOriginalPropertyDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryDeviceOriginalPropertyDataAsyncHandler;
			typedef Outcome<Error, Model::QueryDeviceOriginalPropertyStatusResult> QueryDeviceOriginalPropertyStatusOutcome;
			typedef std::future<QueryDeviceOriginalPropertyStatusOutcome> QueryDeviceOriginalPropertyStatusOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::QueryDeviceOriginalPropertyStatusRequest&, const QueryDeviceOriginalPropertyStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryDeviceOriginalPropertyStatusAsyncHandler;
			typedef Outcome<Error, Model::QueryDeviceOriginalServiceDataResult> QueryDeviceOriginalServiceDataOutcome;
			typedef std::future<QueryDeviceOriginalServiceDataOutcome> QueryDeviceOriginalServiceDataOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::QueryDeviceOriginalServiceDataRequest&, const QueryDeviceOriginalServiceDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryDeviceOriginalServiceDataAsyncHandler;
			typedef Outcome<Error, Model::QueryDevicePropResult> QueryDevicePropOutcome;
			typedef std::future<QueryDevicePropOutcome> QueryDevicePropOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::QueryDevicePropRequest&, const QueryDevicePropOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryDevicePropAsyncHandler;
			typedef Outcome<Error, Model::QueryDevicePropertiesDataResult> QueryDevicePropertiesDataOutcome;
			typedef std::future<QueryDevicePropertiesDataOutcome> QueryDevicePropertiesDataOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::QueryDevicePropertiesDataRequest&, const QueryDevicePropertiesDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryDevicePropertiesDataAsyncHandler;
			typedef Outcome<Error, Model::QueryDevicePropertyDataResult> QueryDevicePropertyDataOutcome;
			typedef std::future<QueryDevicePropertyDataOutcome> QueryDevicePropertyDataOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::QueryDevicePropertyDataRequest&, const QueryDevicePropertyDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryDevicePropertyDataAsyncHandler;
			typedef Outcome<Error, Model::QueryDevicePropertyStatusResult> QueryDevicePropertyStatusOutcome;
			typedef std::future<QueryDevicePropertyStatusOutcome> QueryDevicePropertyStatusOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::QueryDevicePropertyStatusRequest&, const QueryDevicePropertyStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryDevicePropertyStatusAsyncHandler;
			typedef Outcome<Error, Model::QueryDeviceServiceDataResult> QueryDeviceServiceDataOutcome;
			typedef std::future<QueryDeviceServiceDataOutcome> QueryDeviceServiceDataOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::QueryDeviceServiceDataRequest&, const QueryDeviceServiceDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryDeviceServiceDataAsyncHandler;
			typedef Outcome<Error, Model::QueryDeviceSpeechResult> QueryDeviceSpeechOutcome;
			typedef std::future<QueryDeviceSpeechOutcome> QueryDeviceSpeechOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::QueryDeviceSpeechRequest&, const QueryDeviceSpeechOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryDeviceSpeechAsyncHandler;
			typedef Outcome<Error, Model::QueryDeviceStatisticsResult> QueryDeviceStatisticsOutcome;
			typedef std::future<QueryDeviceStatisticsOutcome> QueryDeviceStatisticsOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::QueryDeviceStatisticsRequest&, const QueryDeviceStatisticsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryDeviceStatisticsAsyncHandler;
			typedef Outcome<Error, Model::QueryDeviceTunnelResult> QueryDeviceTunnelOutcome;
			typedef std::future<QueryDeviceTunnelOutcome> QueryDeviceTunnelOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::QueryDeviceTunnelRequest&, const QueryDeviceTunnelOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryDeviceTunnelAsyncHandler;
			typedef Outcome<Error, Model::QueryDynamicGroupDevicesResult> QueryDynamicGroupDevicesOutcome;
			typedef std::future<QueryDynamicGroupDevicesOutcome> QueryDynamicGroupDevicesOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::QueryDynamicGroupDevicesRequest&, const QueryDynamicGroupDevicesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryDynamicGroupDevicesAsyncHandler;
			typedef Outcome<Error, Model::QueryEdgeDriverResult> QueryEdgeDriverOutcome;
			typedef std::future<QueryEdgeDriverOutcome> QueryEdgeDriverOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::QueryEdgeDriverRequest&, const QueryEdgeDriverOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryEdgeDriverAsyncHandler;
			typedef Outcome<Error, Model::QueryEdgeDriverVersionResult> QueryEdgeDriverVersionOutcome;
			typedef std::future<QueryEdgeDriverVersionOutcome> QueryEdgeDriverVersionOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::QueryEdgeDriverVersionRequest&, const QueryEdgeDriverVersionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryEdgeDriverVersionAsyncHandler;
			typedef Outcome<Error, Model::QueryEdgeInstanceResult> QueryEdgeInstanceOutcome;
			typedef std::future<QueryEdgeInstanceOutcome> QueryEdgeInstanceOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::QueryEdgeInstanceRequest&, const QueryEdgeInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryEdgeInstanceAsyncHandler;
			typedef Outcome<Error, Model::QueryEdgeInstanceChannelResult> QueryEdgeInstanceChannelOutcome;
			typedef std::future<QueryEdgeInstanceChannelOutcome> QueryEdgeInstanceChannelOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::QueryEdgeInstanceChannelRequest&, const QueryEdgeInstanceChannelOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryEdgeInstanceChannelAsyncHandler;
			typedef Outcome<Error, Model::QueryEdgeInstanceDeviceResult> QueryEdgeInstanceDeviceOutcome;
			typedef std::future<QueryEdgeInstanceDeviceOutcome> QueryEdgeInstanceDeviceOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::QueryEdgeInstanceDeviceRequest&, const QueryEdgeInstanceDeviceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryEdgeInstanceDeviceAsyncHandler;
			typedef Outcome<Error, Model::QueryEdgeInstanceDeviceByDriverResult> QueryEdgeInstanceDeviceByDriverOutcome;
			typedef std::future<QueryEdgeInstanceDeviceByDriverOutcome> QueryEdgeInstanceDeviceByDriverOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::QueryEdgeInstanceDeviceByDriverRequest&, const QueryEdgeInstanceDeviceByDriverOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryEdgeInstanceDeviceByDriverAsyncHandler;
			typedef Outcome<Error, Model::QueryEdgeInstanceDriverResult> QueryEdgeInstanceDriverOutcome;
			typedef std::future<QueryEdgeInstanceDriverOutcome> QueryEdgeInstanceDriverOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::QueryEdgeInstanceDriverRequest&, const QueryEdgeInstanceDriverOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryEdgeInstanceDriverAsyncHandler;
			typedef Outcome<Error, Model::QueryEdgeInstanceGatewayResult> QueryEdgeInstanceGatewayOutcome;
			typedef std::future<QueryEdgeInstanceGatewayOutcome> QueryEdgeInstanceGatewayOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::QueryEdgeInstanceGatewayRequest&, const QueryEdgeInstanceGatewayOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryEdgeInstanceGatewayAsyncHandler;
			typedef Outcome<Error, Model::QueryEdgeInstanceHistoricDeploymentResult> QueryEdgeInstanceHistoricDeploymentOutcome;
			typedef std::future<QueryEdgeInstanceHistoricDeploymentOutcome> QueryEdgeInstanceHistoricDeploymentOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::QueryEdgeInstanceHistoricDeploymentRequest&, const QueryEdgeInstanceHistoricDeploymentOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryEdgeInstanceHistoricDeploymentAsyncHandler;
			typedef Outcome<Error, Model::QueryEdgeInstanceMessageRoutingResult> QueryEdgeInstanceMessageRoutingOutcome;
			typedef std::future<QueryEdgeInstanceMessageRoutingOutcome> QueryEdgeInstanceMessageRoutingOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::QueryEdgeInstanceMessageRoutingRequest&, const QueryEdgeInstanceMessageRoutingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryEdgeInstanceMessageRoutingAsyncHandler;
			typedef Outcome<Error, Model::QueryEdgeInstanceSceneRuleResult> QueryEdgeInstanceSceneRuleOutcome;
			typedef std::future<QueryEdgeInstanceSceneRuleOutcome> QueryEdgeInstanceSceneRuleOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::QueryEdgeInstanceSceneRuleRequest&, const QueryEdgeInstanceSceneRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryEdgeInstanceSceneRuleAsyncHandler;
			typedef Outcome<Error, Model::QueryJobResult> QueryJobOutcome;
			typedef std::future<QueryJobOutcome> QueryJobOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::QueryJobRequest&, const QueryJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryJobAsyncHandler;
			typedef Outcome<Error, Model::QueryJobStatisticsResult> QueryJobStatisticsOutcome;
			typedef std::future<QueryJobStatisticsOutcome> QueryJobStatisticsOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::QueryJobStatisticsRequest&, const QueryJobStatisticsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryJobStatisticsAsyncHandler;
			typedef Outcome<Error, Model::QueryLoRaJoinPermissionsResult> QueryLoRaJoinPermissionsOutcome;
			typedef std::future<QueryLoRaJoinPermissionsOutcome> QueryLoRaJoinPermissionsOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::QueryLoRaJoinPermissionsRequest&, const QueryLoRaJoinPermissionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryLoRaJoinPermissionsAsyncHandler;
			typedef Outcome<Error, Model::QueryMessageInfoResult> QueryMessageInfoOutcome;
			typedef std::future<QueryMessageInfoOutcome> QueryMessageInfoOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::QueryMessageInfoRequest&, const QueryMessageInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryMessageInfoAsyncHandler;
			typedef Outcome<Error, Model::QueryOTAFirmwareResult> QueryOTAFirmwareOutcome;
			typedef std::future<QueryOTAFirmwareOutcome> QueryOTAFirmwareOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::QueryOTAFirmwareRequest&, const QueryOTAFirmwareOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryOTAFirmwareAsyncHandler;
			typedef Outcome<Error, Model::QueryOTAJobResult> QueryOTAJobOutcome;
			typedef std::future<QueryOTAJobOutcome> QueryOTAJobOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::QueryOTAJobRequest&, const QueryOTAJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryOTAJobAsyncHandler;
			typedef Outcome<Error, Model::QueryPageByApplyIdResult> QueryPageByApplyIdOutcome;
			typedef std::future<QueryPageByApplyIdOutcome> QueryPageByApplyIdOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::QueryPageByApplyIdRequest&, const QueryPageByApplyIdOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryPageByApplyIdAsyncHandler;
			typedef Outcome<Error, Model::QueryProductResult> QueryProductOutcome;
			typedef std::future<QueryProductOutcome> QueryProductOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::QueryProductRequest&, const QueryProductOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryProductAsyncHandler;
			typedef Outcome<Error, Model::QueryProductCertInfoResult> QueryProductCertInfoOutcome;
			typedef std::future<QueryProductCertInfoOutcome> QueryProductCertInfoOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::QueryProductCertInfoRequest&, const QueryProductCertInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryProductCertInfoAsyncHandler;
			typedef Outcome<Error, Model::QueryProductListResult> QueryProductListOutcome;
			typedef std::future<QueryProductListOutcome> QueryProductListOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::QueryProductListRequest&, const QueryProductListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryProductListAsyncHandler;
			typedef Outcome<Error, Model::QueryProductTopicResult> QueryProductTopicOutcome;
			typedef std::future<QueryProductTopicOutcome> QueryProductTopicOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::QueryProductTopicRequest&, const QueryProductTopicOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryProductTopicAsyncHandler;
			typedef Outcome<Error, Model::QuerySceneRuleResult> QuerySceneRuleOutcome;
			typedef std::future<QuerySceneRuleOutcome> QuerySceneRuleOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::QuerySceneRuleRequest&, const QuerySceneRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QuerySceneRuleAsyncHandler;
			typedef Outcome<Error, Model::QuerySolutionDeviceGroupPageResult> QuerySolutionDeviceGroupPageOutcome;
			typedef std::future<QuerySolutionDeviceGroupPageOutcome> QuerySolutionDeviceGroupPageOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::QuerySolutionDeviceGroupPageRequest&, const QuerySolutionDeviceGroupPageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QuerySolutionDeviceGroupPageAsyncHandler;
			typedef Outcome<Error, Model::QuerySoundCodeListResult> QuerySoundCodeListOutcome;
			typedef std::future<QuerySoundCodeListOutcome> QuerySoundCodeListOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::QuerySoundCodeListRequest&, const QuerySoundCodeListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QuerySoundCodeListAsyncHandler;
			typedef Outcome<Error, Model::QuerySpeechResult> QuerySpeechOutcome;
			typedef std::future<QuerySpeechOutcome> QuerySpeechOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::QuerySpeechRequest&, const QuerySpeechOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QuerySpeechAsyncHandler;
			typedef Outcome<Error, Model::QuerySpeechDeviceResult> QuerySpeechDeviceOutcome;
			typedef std::future<QuerySpeechDeviceOutcome> QuerySpeechDeviceOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::QuerySpeechDeviceRequest&, const QuerySpeechDeviceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QuerySpeechDeviceAsyncHandler;
			typedef Outcome<Error, Model::QuerySpeechListResult> QuerySpeechListOutcome;
			typedef std::future<QuerySpeechListOutcome> QuerySpeechListOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::QuerySpeechListRequest&, const QuerySpeechListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QuerySpeechListAsyncHandler;
			typedef Outcome<Error, Model::QuerySpeechPushJobResult> QuerySpeechPushJobOutcome;
			typedef std::future<QuerySpeechPushJobOutcome> QuerySpeechPushJobOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::QuerySpeechPushJobRequest&, const QuerySpeechPushJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QuerySpeechPushJobAsyncHandler;
			typedef Outcome<Error, Model::QuerySpeechPushJobDeviceResult> QuerySpeechPushJobDeviceOutcome;
			typedef std::future<QuerySpeechPushJobDeviceOutcome> QuerySpeechPushJobDeviceOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::QuerySpeechPushJobDeviceRequest&, const QuerySpeechPushJobDeviceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QuerySpeechPushJobDeviceAsyncHandler;
			typedef Outcome<Error, Model::QuerySpeechPushJobSpeechResult> QuerySpeechPushJobSpeechOutcome;
			typedef std::future<QuerySpeechPushJobSpeechOutcome> QuerySpeechPushJobSpeechOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::QuerySpeechPushJobSpeechRequest&, const QuerySpeechPushJobSpeechOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QuerySpeechPushJobSpeechAsyncHandler;
			typedef Outcome<Error, Model::QueryStudioAppDomainListOpenResult> QueryStudioAppDomainListOpenOutcome;
			typedef std::future<QueryStudioAppDomainListOpenOutcome> QueryStudioAppDomainListOpenOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::QueryStudioAppDomainListOpenRequest&, const QueryStudioAppDomainListOpenOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryStudioAppDomainListOpenAsyncHandler;
			typedef Outcome<Error, Model::QueryStudioAppListResult> QueryStudioAppListOutcome;
			typedef std::future<QueryStudioAppListOutcome> QueryStudioAppListOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::QueryStudioAppListRequest&, const QueryStudioAppListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryStudioAppListAsyncHandler;
			typedef Outcome<Error, Model::QueryStudioAppPageListOpenResult> QueryStudioAppPageListOpenOutcome;
			typedef std::future<QueryStudioAppPageListOpenOutcome> QueryStudioAppPageListOpenOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::QueryStudioAppPageListOpenRequest&, const QueryStudioAppPageListOpenOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryStudioAppPageListOpenAsyncHandler;
			typedef Outcome<Error, Model::QueryStudioProjectListResult> QueryStudioProjectListOutcome;
			typedef std::future<QueryStudioProjectListOutcome> QueryStudioProjectListOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::QueryStudioProjectListRequest&, const QueryStudioProjectListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryStudioProjectListAsyncHandler;
			typedef Outcome<Error, Model::QuerySubscribeRelationResult> QuerySubscribeRelationOutcome;
			typedef std::future<QuerySubscribeRelationOutcome> QuerySubscribeRelationOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::QuerySubscribeRelationRequest&, const QuerySubscribeRelationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QuerySubscribeRelationAsyncHandler;
			typedef Outcome<Error, Model::QuerySummarySceneRuleLogResult> QuerySummarySceneRuleLogOutcome;
			typedef std::future<QuerySummarySceneRuleLogOutcome> QuerySummarySceneRuleLogOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::QuerySummarySceneRuleLogRequest&, const QuerySummarySceneRuleLogOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QuerySummarySceneRuleLogAsyncHandler;
			typedef Outcome<Error, Model::QuerySuperDeviceGroupResult> QuerySuperDeviceGroupOutcome;
			typedef std::future<QuerySuperDeviceGroupOutcome> QuerySuperDeviceGroupOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::QuerySuperDeviceGroupRequest&, const QuerySuperDeviceGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QuerySuperDeviceGroupAsyncHandler;
			typedef Outcome<Error, Model::QueryTaskResult> QueryTaskOutcome;
			typedef std::future<QueryTaskOutcome> QueryTaskOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::QueryTaskRequest&, const QueryTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryTaskAsyncHandler;
			typedef Outcome<Error, Model::QueryThingModelResult> QueryThingModelOutcome;
			typedef std::future<QueryThingModelOutcome> QueryThingModelOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::QueryThingModelRequest&, const QueryThingModelOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryThingModelAsyncHandler;
			typedef Outcome<Error, Model::QueryThingModelExtendConfigResult> QueryThingModelExtendConfigOutcome;
			typedef std::future<QueryThingModelExtendConfigOutcome> QueryThingModelExtendConfigOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::QueryThingModelExtendConfigRequest&, const QueryThingModelExtendConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryThingModelExtendConfigAsyncHandler;
			typedef Outcome<Error, Model::QueryThingModelExtendConfigPublishedResult> QueryThingModelExtendConfigPublishedOutcome;
			typedef std::future<QueryThingModelExtendConfigPublishedOutcome> QueryThingModelExtendConfigPublishedOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::QueryThingModelExtendConfigPublishedRequest&, const QueryThingModelExtendConfigPublishedOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryThingModelExtendConfigPublishedAsyncHandler;
			typedef Outcome<Error, Model::QueryThingModelPublishedResult> QueryThingModelPublishedOutcome;
			typedef std::future<QueryThingModelPublishedOutcome> QueryThingModelPublishedOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::QueryThingModelPublishedRequest&, const QueryThingModelPublishedOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryThingModelPublishedAsyncHandler;
			typedef Outcome<Error, Model::QueryTopicReverseRouteTableResult> QueryTopicReverseRouteTableOutcome;
			typedef std::future<QueryTopicReverseRouteTableOutcome> QueryTopicReverseRouteTableOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::QueryTopicReverseRouteTableRequest&, const QueryTopicReverseRouteTableOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryTopicReverseRouteTableAsyncHandler;
			typedef Outcome<Error, Model::QueryTopicRouteTableResult> QueryTopicRouteTableOutcome;
			typedef std::future<QueryTopicRouteTableOutcome> QueryTopicRouteTableOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::QueryTopicRouteTableRequest&, const QueryTopicRouteTableOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryTopicRouteTableAsyncHandler;
			typedef Outcome<Error, Model::RRpcResult> RRpcOutcome;
			typedef std::future<RRpcOutcome> RRpcOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::RRpcRequest&, const RRpcOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RRpcAsyncHandler;
			typedef Outcome<Error, Model::RecognizeCarNumResult> RecognizeCarNumOutcome;
			typedef std::future<RecognizeCarNumOutcome> RecognizeCarNumOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::RecognizeCarNumRequest&, const RecognizeCarNumOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RecognizeCarNumAsyncHandler;
			typedef Outcome<Error, Model::RecognizePictureGeneralResult> RecognizePictureGeneralOutcome;
			typedef std::future<RecognizePictureGeneralOutcome> RecognizePictureGeneralOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::RecognizePictureGeneralRequest&, const RecognizePictureGeneralOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RecognizePictureGeneralAsyncHandler;
			typedef Outcome<Error, Model::RefreshDeviceTunnelSharePasswordResult> RefreshDeviceTunnelSharePasswordOutcome;
			typedef std::future<RefreshDeviceTunnelSharePasswordOutcome> RefreshDeviceTunnelSharePasswordOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::RefreshDeviceTunnelSharePasswordRequest&, const RefreshDeviceTunnelSharePasswordOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RefreshDeviceTunnelSharePasswordAsyncHandler;
			typedef Outcome<Error, Model::RefreshStudioAppTokenOpenResult> RefreshStudioAppTokenOpenOutcome;
			typedef std::future<RefreshStudioAppTokenOpenOutcome> RefreshStudioAppTokenOpenOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::RefreshStudioAppTokenOpenRequest&, const RefreshStudioAppTokenOpenOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RefreshStudioAppTokenOpenAsyncHandler;
			typedef Outcome<Error, Model::RegisterDeviceResult> RegisterDeviceOutcome;
			typedef std::future<RegisterDeviceOutcome> RegisterDeviceOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::RegisterDeviceRequest&, const RegisterDeviceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RegisterDeviceAsyncHandler;
			typedef Outcome<Error, Model::ReleaseEdgeDriverVersionResult> ReleaseEdgeDriverVersionOutcome;
			typedef std::future<ReleaseEdgeDriverVersionOutcome> ReleaseEdgeDriverVersionOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::ReleaseEdgeDriverVersionRequest&, const ReleaseEdgeDriverVersionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ReleaseEdgeDriverVersionAsyncHandler;
			typedef Outcome<Error, Model::ReleaseProductResult> ReleaseProductOutcome;
			typedef std::future<ReleaseProductOutcome> ReleaseProductOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::ReleaseProductRequest&, const ReleaseProductOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ReleaseProductAsyncHandler;
			typedef Outcome<Error, Model::RemoveThingTopoResult> RemoveThingTopoOutcome;
			typedef std::future<RemoveThingTopoOutcome> RemoveThingTopoOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::RemoveThingTopoRequest&, const RemoveThingTopoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RemoveThingTopoAsyncHandler;
			typedef Outcome<Error, Model::ReplaceEdgeInstanceGatewayResult> ReplaceEdgeInstanceGatewayOutcome;
			typedef std::future<ReplaceEdgeInstanceGatewayOutcome> ReplaceEdgeInstanceGatewayOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::ReplaceEdgeInstanceGatewayRequest&, const ReplaceEdgeInstanceGatewayOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ReplaceEdgeInstanceGatewayAsyncHandler;
			typedef Outcome<Error, Model::RerunJobResult> RerunJobOutcome;
			typedef std::future<RerunJobOutcome> RerunJobOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::RerunJobRequest&, const RerunJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RerunJobAsyncHandler;
			typedef Outcome<Error, Model::ResetConsumerGroupPositionResult> ResetConsumerGroupPositionOutcome;
			typedef std::future<ResetConsumerGroupPositionOutcome> ResetConsumerGroupPositionOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::ResetConsumerGroupPositionRequest&, const ResetConsumerGroupPositionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ResetConsumerGroupPositionAsyncHandler;
			typedef Outcome<Error, Model::ResetThingResult> ResetThingOutcome;
			typedef std::future<ResetThingOutcome> ResetThingOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::ResetThingRequest&, const ResetThingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ResetThingAsyncHandler;
			typedef Outcome<Error, Model::ReupgradeOTATaskResult> ReupgradeOTATaskOutcome;
			typedef std::future<ReupgradeOTATaskOutcome> ReupgradeOTATaskOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::ReupgradeOTATaskRequest&, const ReupgradeOTATaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ReupgradeOTATaskAsyncHandler;
			typedef Outcome<Error, Model::SaveDevicePropResult> SaveDevicePropOutcome;
			typedef std::future<SaveDevicePropOutcome> SaveDevicePropOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::SaveDevicePropRequest&, const SaveDevicePropOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SaveDevicePropAsyncHandler;
			typedef Outcome<Error, Model::SetDeviceDesiredPropertyResult> SetDeviceDesiredPropertyOutcome;
			typedef std::future<SetDeviceDesiredPropertyOutcome> SetDeviceDesiredPropertyOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::SetDeviceDesiredPropertyRequest&, const SetDeviceDesiredPropertyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetDeviceDesiredPropertyAsyncHandler;
			typedef Outcome<Error, Model::SetDeviceGroupTagsResult> SetDeviceGroupTagsOutcome;
			typedef std::future<SetDeviceGroupTagsOutcome> SetDeviceGroupTagsOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::SetDeviceGroupTagsRequest&, const SetDeviceGroupTagsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetDeviceGroupTagsAsyncHandler;
			typedef Outcome<Error, Model::SetDevicePropertyResult> SetDevicePropertyOutcome;
			typedef std::future<SetDevicePropertyOutcome> SetDevicePropertyOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::SetDevicePropertyRequest&, const SetDevicePropertyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetDevicePropertyAsyncHandler;
			typedef Outcome<Error, Model::SetDevicesPropertyResult> SetDevicesPropertyOutcome;
			typedef std::future<SetDevicesPropertyOutcome> SetDevicesPropertyOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::SetDevicesPropertyRequest&, const SetDevicesPropertyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetDevicesPropertyAsyncHandler;
			typedef Outcome<Error, Model::SetEdgeInstanceDriverConfigsResult> SetEdgeInstanceDriverConfigsOutcome;
			typedef std::future<SetEdgeInstanceDriverConfigsOutcome> SetEdgeInstanceDriverConfigsOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::SetEdgeInstanceDriverConfigsRequest&, const SetEdgeInstanceDriverConfigsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetEdgeInstanceDriverConfigsAsyncHandler;
			typedef Outcome<Error, Model::SetProductCertInfoResult> SetProductCertInfoOutcome;
			typedef std::future<SetProductCertInfoOutcome> SetProductCertInfoOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::SetProductCertInfoRequest&, const SetProductCertInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetProductCertInfoAsyncHandler;
			typedef Outcome<Error, Model::SetStudioProjectCooperationResult> SetStudioProjectCooperationOutcome;
			typedef std::future<SetStudioProjectCooperationOutcome> SetStudioProjectCooperationOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::SetStudioProjectCooperationRequest&, const SetStudioProjectCooperationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetStudioProjectCooperationAsyncHandler;
			typedef Outcome<Error, Model::SetupStudioAppAuthModeOpenResult> SetupStudioAppAuthModeOpenOutcome;
			typedef std::future<SetupStudioAppAuthModeOpenOutcome> SetupStudioAppAuthModeOpenOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::SetupStudioAppAuthModeOpenRequest&, const SetupStudioAppAuthModeOpenOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetupStudioAppAuthModeOpenAsyncHandler;
			typedef Outcome<Error, Model::SpeechByCombinationResult> SpeechByCombinationOutcome;
			typedef std::future<SpeechByCombinationOutcome> SpeechByCombinationOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::SpeechByCombinationRequest&, const SpeechByCombinationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SpeechByCombinationAsyncHandler;
			typedef Outcome<Error, Model::SpeechBySynthesisResult> SpeechBySynthesisOutcome;
			typedef std::future<SpeechBySynthesisOutcome> SpeechBySynthesisOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::SpeechBySynthesisRequest&, const SpeechBySynthesisOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SpeechBySynthesisAsyncHandler;
			typedef Outcome<Error, Model::StartRuleResult> StartRuleOutcome;
			typedef std::future<StartRuleOutcome> StartRuleOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::StartRuleRequest&, const StartRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StartRuleAsyncHandler;
			typedef Outcome<Error, Model::StopRuleResult> StopRuleOutcome;
			typedef std::future<StopRuleOutcome> StopRuleOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::StopRuleRequest&, const StopRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StopRuleAsyncHandler;
			typedef Outcome<Error, Model::SubscribeTopicResult> SubscribeTopicOutcome;
			typedef std::future<SubscribeTopicOutcome> SubscribeTopicOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::SubscribeTopicRequest&, const SubscribeTopicOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubscribeTopicAsyncHandler;
			typedef Outcome<Error, Model::SyncSpeechByCombinationResult> SyncSpeechByCombinationOutcome;
			typedef std::future<SyncSpeechByCombinationOutcome> SyncSpeechByCombinationOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::SyncSpeechByCombinationRequest&, const SyncSpeechByCombinationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SyncSpeechByCombinationAsyncHandler;
			typedef Outcome<Error, Model::TestSpeechResult> TestSpeechOutcome;
			typedef std::future<TestSpeechOutcome> TestSpeechOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::TestSpeechRequest&, const TestSpeechOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TestSpeechAsyncHandler;
			typedef Outcome<Error, Model::TransformClientIdResult> TransformClientIdOutcome;
			typedef std::future<TransformClientIdOutcome> TransformClientIdOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::TransformClientIdRequest&, const TransformClientIdOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TransformClientIdAsyncHandler;
			typedef Outcome<Error, Model::TriggerSceneRuleResult> TriggerSceneRuleOutcome;
			typedef std::future<TriggerSceneRuleOutcome> TriggerSceneRuleOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::TriggerSceneRuleRequest&, const TriggerSceneRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TriggerSceneRuleAsyncHandler;
			typedef Outcome<Error, Model::UnbindApplicationFromEdgeInstanceResult> UnbindApplicationFromEdgeInstanceOutcome;
			typedef std::future<UnbindApplicationFromEdgeInstanceOutcome> UnbindApplicationFromEdgeInstanceOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::UnbindApplicationFromEdgeInstanceRequest&, const UnbindApplicationFromEdgeInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UnbindApplicationFromEdgeInstanceAsyncHandler;
			typedef Outcome<Error, Model::UnbindDriverFromEdgeInstanceResult> UnbindDriverFromEdgeInstanceOutcome;
			typedef std::future<UnbindDriverFromEdgeInstanceOutcome> UnbindDriverFromEdgeInstanceOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::UnbindDriverFromEdgeInstanceRequest&, const UnbindDriverFromEdgeInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UnbindDriverFromEdgeInstanceAsyncHandler;
			typedef Outcome<Error, Model::UnbindRoleFromEdgeInstanceResult> UnbindRoleFromEdgeInstanceOutcome;
			typedef std::future<UnbindRoleFromEdgeInstanceOutcome> UnbindRoleFromEdgeInstanceOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::UnbindRoleFromEdgeInstanceRequest&, const UnbindRoleFromEdgeInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UnbindRoleFromEdgeInstanceAsyncHandler;
			typedef Outcome<Error, Model::UnbindSceneRuleFromEdgeInstanceResult> UnbindSceneRuleFromEdgeInstanceOutcome;
			typedef std::future<UnbindSceneRuleFromEdgeInstanceOutcome> UnbindSceneRuleFromEdgeInstanceOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::UnbindSceneRuleFromEdgeInstanceRequest&, const UnbindSceneRuleFromEdgeInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UnbindSceneRuleFromEdgeInstanceAsyncHandler;
			typedef Outcome<Error, Model::UpdateConsumerGroupResult> UpdateConsumerGroupOutcome;
			typedef std::future<UpdateConsumerGroupOutcome> UpdateConsumerGroupOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::UpdateConsumerGroupRequest&, const UpdateConsumerGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateConsumerGroupAsyncHandler;
			typedef Outcome<Error, Model::UpdateDeviceGroupResult> UpdateDeviceGroupOutcome;
			typedef std::future<UpdateDeviceGroupOutcome> UpdateDeviceGroupOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::UpdateDeviceGroupRequest&, const UpdateDeviceGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateDeviceGroupAsyncHandler;
			typedef Outcome<Error, Model::UpdateDeviceShadowResult> UpdateDeviceShadowOutcome;
			typedef std::future<UpdateDeviceShadowOutcome> UpdateDeviceShadowOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::UpdateDeviceShadowRequest&, const UpdateDeviceShadowOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateDeviceShadowAsyncHandler;
			typedef Outcome<Error, Model::UpdateEdgeDriverVersionResult> UpdateEdgeDriverVersionOutcome;
			typedef std::future<UpdateEdgeDriverVersionOutcome> UpdateEdgeDriverVersionOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::UpdateEdgeDriverVersionRequest&, const UpdateEdgeDriverVersionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateEdgeDriverVersionAsyncHandler;
			typedef Outcome<Error, Model::UpdateEdgeInstanceResult> UpdateEdgeInstanceOutcome;
			typedef std::future<UpdateEdgeInstanceOutcome> UpdateEdgeInstanceOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::UpdateEdgeInstanceRequest&, const UpdateEdgeInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateEdgeInstanceAsyncHandler;
			typedef Outcome<Error, Model::UpdateEdgeInstanceChannelResult> UpdateEdgeInstanceChannelOutcome;
			typedef std::future<UpdateEdgeInstanceChannelOutcome> UpdateEdgeInstanceChannelOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::UpdateEdgeInstanceChannelRequest&, const UpdateEdgeInstanceChannelOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateEdgeInstanceChannelAsyncHandler;
			typedef Outcome<Error, Model::UpdateEdgeInstanceMessageRoutingResult> UpdateEdgeInstanceMessageRoutingOutcome;
			typedef std::future<UpdateEdgeInstanceMessageRoutingOutcome> UpdateEdgeInstanceMessageRoutingOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::UpdateEdgeInstanceMessageRoutingRequest&, const UpdateEdgeInstanceMessageRoutingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateEdgeInstanceMessageRoutingAsyncHandler;
			typedef Outcome<Error, Model::UpdateJobResult> UpdateJobOutcome;
			typedef std::future<UpdateJobOutcome> UpdateJobOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::UpdateJobRequest&, const UpdateJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateJobAsyncHandler;
			typedef Outcome<Error, Model::UpdateOTAModuleResult> UpdateOTAModuleOutcome;
			typedef std::future<UpdateOTAModuleOutcome> UpdateOTAModuleOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::UpdateOTAModuleRequest&, const UpdateOTAModuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateOTAModuleAsyncHandler;
			typedef Outcome<Error, Model::UpdateProductResult> UpdateProductOutcome;
			typedef std::future<UpdateProductOutcome> UpdateProductOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::UpdateProductRequest&, const UpdateProductOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateProductAsyncHandler;
			typedef Outcome<Error, Model::UpdateProductFilterConfigResult> UpdateProductFilterConfigOutcome;
			typedef std::future<UpdateProductFilterConfigOutcome> UpdateProductFilterConfigOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::UpdateProductFilterConfigRequest&, const UpdateProductFilterConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateProductFilterConfigAsyncHandler;
			typedef Outcome<Error, Model::UpdateProductTagsResult> UpdateProductTagsOutcome;
			typedef std::future<UpdateProductTagsOutcome> UpdateProductTagsOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::UpdateProductTagsRequest&, const UpdateProductTagsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateProductTagsAsyncHandler;
			typedef Outcome<Error, Model::UpdateProductTopicResult> UpdateProductTopicOutcome;
			typedef std::future<UpdateProductTopicOutcome> UpdateProductTopicOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::UpdateProductTopicRequest&, const UpdateProductTopicOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateProductTopicAsyncHandler;
			typedef Outcome<Error, Model::UpdateRuleResult> UpdateRuleOutcome;
			typedef std::future<UpdateRuleOutcome> UpdateRuleOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::UpdateRuleRequest&, const UpdateRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateRuleAsyncHandler;
			typedef Outcome<Error, Model::UpdateRuleActionResult> UpdateRuleActionOutcome;
			typedef std::future<UpdateRuleActionOutcome> UpdateRuleActionOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::UpdateRuleActionRequest&, const UpdateRuleActionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateRuleActionAsyncHandler;
			typedef Outcome<Error, Model::UpdateSceneRuleResult> UpdateSceneRuleOutcome;
			typedef std::future<UpdateSceneRuleOutcome> UpdateSceneRuleOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::UpdateSceneRuleRequest&, const UpdateSceneRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateSceneRuleAsyncHandler;
			typedef Outcome<Error, Model::UpdateSpeechResult> UpdateSpeechOutcome;
			typedef std::future<UpdateSpeechOutcome> UpdateSpeechOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::UpdateSpeechRequest&, const UpdateSpeechOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateSpeechAsyncHandler;
			typedef Outcome<Error, Model::UpdateSubscribeRelationResult> UpdateSubscribeRelationOutcome;
			typedef std::future<UpdateSubscribeRelationOutcome> UpdateSubscribeRelationOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::UpdateSubscribeRelationRequest&, const UpdateSubscribeRelationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateSubscribeRelationAsyncHandler;
			typedef Outcome<Error, Model::UpdateThingModelResult> UpdateThingModelOutcome;
			typedef std::future<UpdateThingModelOutcome> UpdateThingModelOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::UpdateThingModelRequest&, const UpdateThingModelOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateThingModelAsyncHandler;
			typedef Outcome<Error, Model::UpdateThingScriptResult> UpdateThingScriptOutcome;
			typedef std::future<UpdateThingScriptOutcome> UpdateThingScriptOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::UpdateThingScriptRequest&, const UpdateThingScriptOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateThingScriptAsyncHandler;

			IotClient(const Credentials &credentials, const ClientConfiguration &configuration);
			IotClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			IotClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~IotClient();
			AddDataForApiSourceOutcome addDataForApiSource(const Model::AddDataForApiSourceRequest &request)const;
			void addDataForApiSourceAsync(const Model::AddDataForApiSourceRequest& request, const AddDataForApiSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddDataForApiSourceOutcomeCallable addDataForApiSourceCallable(const Model::AddDataForApiSourceRequest& request) const;
			BatchAddDataForApiSourceOutcome batchAddDataForApiSource(const Model::BatchAddDataForApiSourceRequest &request)const;
			void batchAddDataForApiSourceAsync(const Model::BatchAddDataForApiSourceRequest& request, const BatchAddDataForApiSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BatchAddDataForApiSourceOutcomeCallable batchAddDataForApiSourceCallable(const Model::BatchAddDataForApiSourceRequest& request) const;
			BatchAddDeviceGroupRelationsOutcome batchAddDeviceGroupRelations(const Model::BatchAddDeviceGroupRelationsRequest &request)const;
			void batchAddDeviceGroupRelationsAsync(const Model::BatchAddDeviceGroupRelationsRequest& request, const BatchAddDeviceGroupRelationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BatchAddDeviceGroupRelationsOutcomeCallable batchAddDeviceGroupRelationsCallable(const Model::BatchAddDeviceGroupRelationsRequest& request) const;
			BatchAddThingTopoOutcome batchAddThingTopo(const Model::BatchAddThingTopoRequest &request)const;
			void batchAddThingTopoAsync(const Model::BatchAddThingTopoRequest& request, const BatchAddThingTopoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BatchAddThingTopoOutcomeCallable batchAddThingTopoCallable(const Model::BatchAddThingTopoRequest& request) const;
			BatchBindDeviceToEdgeInstanceWithDriverOutcome batchBindDeviceToEdgeInstanceWithDriver(const Model::BatchBindDeviceToEdgeInstanceWithDriverRequest &request)const;
			void batchBindDeviceToEdgeInstanceWithDriverAsync(const Model::BatchBindDeviceToEdgeInstanceWithDriverRequest& request, const BatchBindDeviceToEdgeInstanceWithDriverAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BatchBindDeviceToEdgeInstanceWithDriverOutcomeCallable batchBindDeviceToEdgeInstanceWithDriverCallable(const Model::BatchBindDeviceToEdgeInstanceWithDriverRequest& request) const;
			BatchBindDevicesIntoProjectOutcome batchBindDevicesIntoProject(const Model::BatchBindDevicesIntoProjectRequest &request)const;
			void batchBindDevicesIntoProjectAsync(const Model::BatchBindDevicesIntoProjectRequest& request, const BatchBindDevicesIntoProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BatchBindDevicesIntoProjectOutcomeCallable batchBindDevicesIntoProjectCallable(const Model::BatchBindDevicesIntoProjectRequest& request) const;
			BatchBindProductsIntoProjectOutcome batchBindProductsIntoProject(const Model::BatchBindProductsIntoProjectRequest &request)const;
			void batchBindProductsIntoProjectAsync(const Model::BatchBindProductsIntoProjectRequest& request, const BatchBindProductsIntoProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BatchBindProductsIntoProjectOutcomeCallable batchBindProductsIntoProjectCallable(const Model::BatchBindProductsIntoProjectRequest& request) const;
			BatchCheckDeviceNamesOutcome batchCheckDeviceNames(const Model::BatchCheckDeviceNamesRequest &request)const;
			void batchCheckDeviceNamesAsync(const Model::BatchCheckDeviceNamesRequest& request, const BatchCheckDeviceNamesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BatchCheckDeviceNamesOutcomeCallable batchCheckDeviceNamesCallable(const Model::BatchCheckDeviceNamesRequest& request) const;
			BatchClearEdgeInstanceDeviceConfigOutcome batchClearEdgeInstanceDeviceConfig(const Model::BatchClearEdgeInstanceDeviceConfigRequest &request)const;
			void batchClearEdgeInstanceDeviceConfigAsync(const Model::BatchClearEdgeInstanceDeviceConfigRequest& request, const BatchClearEdgeInstanceDeviceConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BatchClearEdgeInstanceDeviceConfigOutcomeCallable batchClearEdgeInstanceDeviceConfigCallable(const Model::BatchClearEdgeInstanceDeviceConfigRequest& request) const;
			BatchDeleteDeviceGroupRelationsOutcome batchDeleteDeviceGroupRelations(const Model::BatchDeleteDeviceGroupRelationsRequest &request)const;
			void batchDeleteDeviceGroupRelationsAsync(const Model::BatchDeleteDeviceGroupRelationsRequest& request, const BatchDeleteDeviceGroupRelationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BatchDeleteDeviceGroupRelationsOutcomeCallable batchDeleteDeviceGroupRelationsCallable(const Model::BatchDeleteDeviceGroupRelationsRequest& request) const;
			BatchDeleteEdgeInstanceChannelOutcome batchDeleteEdgeInstanceChannel(const Model::BatchDeleteEdgeInstanceChannelRequest &request)const;
			void batchDeleteEdgeInstanceChannelAsync(const Model::BatchDeleteEdgeInstanceChannelRequest& request, const BatchDeleteEdgeInstanceChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BatchDeleteEdgeInstanceChannelOutcomeCallable batchDeleteEdgeInstanceChannelCallable(const Model::BatchDeleteEdgeInstanceChannelRequest& request) const;
			BatchGetDeviceBindStatusOutcome batchGetDeviceBindStatus(const Model::BatchGetDeviceBindStatusRequest &request)const;
			void batchGetDeviceBindStatusAsync(const Model::BatchGetDeviceBindStatusRequest& request, const BatchGetDeviceBindStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BatchGetDeviceBindStatusOutcomeCallable batchGetDeviceBindStatusCallable(const Model::BatchGetDeviceBindStatusRequest& request) const;
			BatchGetDeviceStateOutcome batchGetDeviceState(const Model::BatchGetDeviceStateRequest &request)const;
			void batchGetDeviceStateAsync(const Model::BatchGetDeviceStateRequest& request, const BatchGetDeviceStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BatchGetDeviceStateOutcomeCallable batchGetDeviceStateCallable(const Model::BatchGetDeviceStateRequest& request) const;
			BatchGetEdgeDriverOutcome batchGetEdgeDriver(const Model::BatchGetEdgeDriverRequest &request)const;
			void batchGetEdgeDriverAsync(const Model::BatchGetEdgeDriverRequest& request, const BatchGetEdgeDriverAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BatchGetEdgeDriverOutcomeCallable batchGetEdgeDriverCallable(const Model::BatchGetEdgeDriverRequest& request) const;
			BatchGetEdgeInstanceChannelOutcome batchGetEdgeInstanceChannel(const Model::BatchGetEdgeInstanceChannelRequest &request)const;
			void batchGetEdgeInstanceChannelAsync(const Model::BatchGetEdgeInstanceChannelRequest& request, const BatchGetEdgeInstanceChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BatchGetEdgeInstanceChannelOutcomeCallable batchGetEdgeInstanceChannelCallable(const Model::BatchGetEdgeInstanceChannelRequest& request) const;
			BatchGetEdgeInstanceDeviceChannelOutcome batchGetEdgeInstanceDeviceChannel(const Model::BatchGetEdgeInstanceDeviceChannelRequest &request)const;
			void batchGetEdgeInstanceDeviceChannelAsync(const Model::BatchGetEdgeInstanceDeviceChannelRequest& request, const BatchGetEdgeInstanceDeviceChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BatchGetEdgeInstanceDeviceChannelOutcomeCallable batchGetEdgeInstanceDeviceChannelCallable(const Model::BatchGetEdgeInstanceDeviceChannelRequest& request) const;
			BatchGetEdgeInstanceDeviceConfigOutcome batchGetEdgeInstanceDeviceConfig(const Model::BatchGetEdgeInstanceDeviceConfigRequest &request)const;
			void batchGetEdgeInstanceDeviceConfigAsync(const Model::BatchGetEdgeInstanceDeviceConfigRequest& request, const BatchGetEdgeInstanceDeviceConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BatchGetEdgeInstanceDeviceConfigOutcomeCallable batchGetEdgeInstanceDeviceConfigCallable(const Model::BatchGetEdgeInstanceDeviceConfigRequest& request) const;
			BatchGetEdgeInstanceDeviceDriverOutcome batchGetEdgeInstanceDeviceDriver(const Model::BatchGetEdgeInstanceDeviceDriverRequest &request)const;
			void batchGetEdgeInstanceDeviceDriverAsync(const Model::BatchGetEdgeInstanceDeviceDriverRequest& request, const BatchGetEdgeInstanceDeviceDriverAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BatchGetEdgeInstanceDeviceDriverOutcomeCallable batchGetEdgeInstanceDeviceDriverCallable(const Model::BatchGetEdgeInstanceDeviceDriverRequest& request) const;
			BatchGetEdgeInstanceDriverConfigsOutcome batchGetEdgeInstanceDriverConfigs(const Model::BatchGetEdgeInstanceDriverConfigsRequest &request)const;
			void batchGetEdgeInstanceDriverConfigsAsync(const Model::BatchGetEdgeInstanceDriverConfigsRequest& request, const BatchGetEdgeInstanceDriverConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BatchGetEdgeInstanceDriverConfigsOutcomeCallable batchGetEdgeInstanceDriverConfigsCallable(const Model::BatchGetEdgeInstanceDriverConfigsRequest& request) const;
			BatchPubOutcome batchPub(const Model::BatchPubRequest &request)const;
			void batchPubAsync(const Model::BatchPubRequest& request, const BatchPubAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BatchPubOutcomeCallable batchPubCallable(const Model::BatchPubRequest& request) const;
			BatchQueryDeviceDetailOutcome batchQueryDeviceDetail(const Model::BatchQueryDeviceDetailRequest &request)const;
			void batchQueryDeviceDetailAsync(const Model::BatchQueryDeviceDetailRequest& request, const BatchQueryDeviceDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BatchQueryDeviceDetailOutcomeCallable batchQueryDeviceDetailCallable(const Model::BatchQueryDeviceDetailRequest& request) const;
			BatchRegisterDeviceOutcome batchRegisterDevice(const Model::BatchRegisterDeviceRequest &request)const;
			void batchRegisterDeviceAsync(const Model::BatchRegisterDeviceRequest& request, const BatchRegisterDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BatchRegisterDeviceOutcomeCallable batchRegisterDeviceCallable(const Model::BatchRegisterDeviceRequest& request) const;
			BatchRegisterDeviceWithApplyIdOutcome batchRegisterDeviceWithApplyId(const Model::BatchRegisterDeviceWithApplyIdRequest &request)const;
			void batchRegisterDeviceWithApplyIdAsync(const Model::BatchRegisterDeviceWithApplyIdRequest& request, const BatchRegisterDeviceWithApplyIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BatchRegisterDeviceWithApplyIdOutcomeCallable batchRegisterDeviceWithApplyIdCallable(const Model::BatchRegisterDeviceWithApplyIdRequest& request) const;
			BatchSetEdgeInstanceDeviceChannelOutcome batchSetEdgeInstanceDeviceChannel(const Model::BatchSetEdgeInstanceDeviceChannelRequest &request)const;
			void batchSetEdgeInstanceDeviceChannelAsync(const Model::BatchSetEdgeInstanceDeviceChannelRequest& request, const BatchSetEdgeInstanceDeviceChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BatchSetEdgeInstanceDeviceChannelOutcomeCallable batchSetEdgeInstanceDeviceChannelCallable(const Model::BatchSetEdgeInstanceDeviceChannelRequest& request) const;
			BatchSetEdgeInstanceDeviceConfigOutcome batchSetEdgeInstanceDeviceConfig(const Model::BatchSetEdgeInstanceDeviceConfigRequest &request)const;
			void batchSetEdgeInstanceDeviceConfigAsync(const Model::BatchSetEdgeInstanceDeviceConfigRequest& request, const BatchSetEdgeInstanceDeviceConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BatchSetEdgeInstanceDeviceConfigOutcomeCallable batchSetEdgeInstanceDeviceConfigCallable(const Model::BatchSetEdgeInstanceDeviceConfigRequest& request) const;
			BatchUnbindDeviceFromEdgeInstanceOutcome batchUnbindDeviceFromEdgeInstance(const Model::BatchUnbindDeviceFromEdgeInstanceRequest &request)const;
			void batchUnbindDeviceFromEdgeInstanceAsync(const Model::BatchUnbindDeviceFromEdgeInstanceRequest& request, const BatchUnbindDeviceFromEdgeInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BatchUnbindDeviceFromEdgeInstanceOutcomeCallable batchUnbindDeviceFromEdgeInstanceCallable(const Model::BatchUnbindDeviceFromEdgeInstanceRequest& request) const;
			BatchUnbindProjectDevicesOutcome batchUnbindProjectDevices(const Model::BatchUnbindProjectDevicesRequest &request)const;
			void batchUnbindProjectDevicesAsync(const Model::BatchUnbindProjectDevicesRequest& request, const BatchUnbindProjectDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BatchUnbindProjectDevicesOutcomeCallable batchUnbindProjectDevicesCallable(const Model::BatchUnbindProjectDevicesRequest& request) const;
			BatchUnbindProjectProductsOutcome batchUnbindProjectProducts(const Model::BatchUnbindProjectProductsRequest &request)const;
			void batchUnbindProjectProductsAsync(const Model::BatchUnbindProjectProductsRequest& request, const BatchUnbindProjectProductsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BatchUnbindProjectProductsOutcomeCallable batchUnbindProjectProductsCallable(const Model::BatchUnbindProjectProductsRequest& request) const;
			BatchUpdateDeviceNicknameOutcome batchUpdateDeviceNickname(const Model::BatchUpdateDeviceNicknameRequest &request)const;
			void batchUpdateDeviceNicknameAsync(const Model::BatchUpdateDeviceNicknameRequest& request, const BatchUpdateDeviceNicknameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BatchUpdateDeviceNicknameOutcomeCallable batchUpdateDeviceNicknameCallable(const Model::BatchUpdateDeviceNicknameRequest& request) const;
			BindApplicationToEdgeInstanceOutcome bindApplicationToEdgeInstance(const Model::BindApplicationToEdgeInstanceRequest &request)const;
			void bindApplicationToEdgeInstanceAsync(const Model::BindApplicationToEdgeInstanceRequest& request, const BindApplicationToEdgeInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BindApplicationToEdgeInstanceOutcomeCallable bindApplicationToEdgeInstanceCallable(const Model::BindApplicationToEdgeInstanceRequest& request) const;
			BindDriverToEdgeInstanceOutcome bindDriverToEdgeInstance(const Model::BindDriverToEdgeInstanceRequest &request)const;
			void bindDriverToEdgeInstanceAsync(const Model::BindDriverToEdgeInstanceRequest& request, const BindDriverToEdgeInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BindDriverToEdgeInstanceOutcomeCallable bindDriverToEdgeInstanceCallable(const Model::BindDriverToEdgeInstanceRequest& request) const;
			BindGatewayToEdgeInstanceOutcome bindGatewayToEdgeInstance(const Model::BindGatewayToEdgeInstanceRequest &request)const;
			void bindGatewayToEdgeInstanceAsync(const Model::BindGatewayToEdgeInstanceRequest& request, const BindGatewayToEdgeInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BindGatewayToEdgeInstanceOutcomeCallable bindGatewayToEdgeInstanceCallable(const Model::BindGatewayToEdgeInstanceRequest& request) const;
			BindRoleToEdgeInstanceOutcome bindRoleToEdgeInstance(const Model::BindRoleToEdgeInstanceRequest &request)const;
			void bindRoleToEdgeInstanceAsync(const Model::BindRoleToEdgeInstanceRequest& request, const BindRoleToEdgeInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BindRoleToEdgeInstanceOutcomeCallable bindRoleToEdgeInstanceCallable(const Model::BindRoleToEdgeInstanceRequest& request) const;
			BindSceneRuleToEdgeInstanceOutcome bindSceneRuleToEdgeInstance(const Model::BindSceneRuleToEdgeInstanceRequest &request)const;
			void bindSceneRuleToEdgeInstanceAsync(const Model::BindSceneRuleToEdgeInstanceRequest& request, const BindSceneRuleToEdgeInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BindSceneRuleToEdgeInstanceOutcomeCallable bindSceneRuleToEdgeInstanceCallable(const Model::BindSceneRuleToEdgeInstanceRequest& request) const;
			CancelJobOutcome cancelJob(const Model::CancelJobRequest &request)const;
			void cancelJobAsync(const Model::CancelJobRequest& request, const CancelJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CancelJobOutcomeCallable cancelJobCallable(const Model::CancelJobRequest& request) const;
			CancelOTAStrategyByJobOutcome cancelOTAStrategyByJob(const Model::CancelOTAStrategyByJobRequest &request)const;
			void cancelOTAStrategyByJobAsync(const Model::CancelOTAStrategyByJobRequest& request, const CancelOTAStrategyByJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CancelOTAStrategyByJobOutcomeCallable cancelOTAStrategyByJobCallable(const Model::CancelOTAStrategyByJobRequest& request) const;
			CancelOTATaskByDeviceOutcome cancelOTATaskByDevice(const Model::CancelOTATaskByDeviceRequest &request)const;
			void cancelOTATaskByDeviceAsync(const Model::CancelOTATaskByDeviceRequest& request, const CancelOTATaskByDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CancelOTATaskByDeviceOutcomeCallable cancelOTATaskByDeviceCallable(const Model::CancelOTATaskByDeviceRequest& request) const;
			CancelOTATaskByJobOutcome cancelOTATaskByJob(const Model::CancelOTATaskByJobRequest &request)const;
			void cancelOTATaskByJobAsync(const Model::CancelOTATaskByJobRequest& request, const CancelOTATaskByJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CancelOTATaskByJobOutcomeCallable cancelOTATaskByJobCallable(const Model::CancelOTATaskByJobRequest& request) const;
			CancelReleaseProductOutcome cancelReleaseProduct(const Model::CancelReleaseProductRequest &request)const;
			void cancelReleaseProductAsync(const Model::CancelReleaseProductRequest& request, const CancelReleaseProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CancelReleaseProductOutcomeCallable cancelReleaseProductCallable(const Model::CancelReleaseProductRequest& request) const;
			ClearEdgeInstanceDriverConfigsOutcome clearEdgeInstanceDriverConfigs(const Model::ClearEdgeInstanceDriverConfigsRequest &request)const;
			void clearEdgeInstanceDriverConfigsAsync(const Model::ClearEdgeInstanceDriverConfigsRequest& request, const ClearEdgeInstanceDriverConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ClearEdgeInstanceDriverConfigsOutcomeCallable clearEdgeInstanceDriverConfigsCallable(const Model::ClearEdgeInstanceDriverConfigsRequest& request) const;
			CloseDeviceTunnelOutcome closeDeviceTunnel(const Model::CloseDeviceTunnelRequest &request)const;
			void closeDeviceTunnelAsync(const Model::CloseDeviceTunnelRequest& request, const CloseDeviceTunnelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CloseDeviceTunnelOutcomeCallable closeDeviceTunnelCallable(const Model::CloseDeviceTunnelRequest& request) const;
			CloseEdgeInstanceDeploymentOutcome closeEdgeInstanceDeployment(const Model::CloseEdgeInstanceDeploymentRequest &request)const;
			void closeEdgeInstanceDeploymentAsync(const Model::CloseEdgeInstanceDeploymentRequest& request, const CloseEdgeInstanceDeploymentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CloseEdgeInstanceDeploymentOutcomeCallable closeEdgeInstanceDeploymentCallable(const Model::CloseEdgeInstanceDeploymentRequest& request) const;
			ConfirmOTATaskOutcome confirmOTATask(const Model::ConfirmOTATaskRequest &request)const;
			void confirmOTATaskAsync(const Model::ConfirmOTATaskRequest& request, const ConfirmOTATaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ConfirmOTATaskOutcomeCallable confirmOTATaskCallable(const Model::ConfirmOTATaskRequest& request) const;
			CopyThingModelOutcome copyThingModel(const Model::CopyThingModelRequest &request)const;
			void copyThingModelAsync(const Model::CopyThingModelRequest& request, const CopyThingModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CopyThingModelOutcomeCallable copyThingModelCallable(const Model::CopyThingModelRequest& request) const;
			CreateConsumerGroupOutcome createConsumerGroup(const Model::CreateConsumerGroupRequest &request)const;
			void createConsumerGroupAsync(const Model::CreateConsumerGroupRequest& request, const CreateConsumerGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateConsumerGroupOutcomeCallable createConsumerGroupCallable(const Model::CreateConsumerGroupRequest& request) const;
			CreateConsumerGroupSubscribeRelationOutcome createConsumerGroupSubscribeRelation(const Model::CreateConsumerGroupSubscribeRelationRequest &request)const;
			void createConsumerGroupSubscribeRelationAsync(const Model::CreateConsumerGroupSubscribeRelationRequest& request, const CreateConsumerGroupSubscribeRelationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateConsumerGroupSubscribeRelationOutcomeCallable createConsumerGroupSubscribeRelationCallable(const Model::CreateConsumerGroupSubscribeRelationRequest& request) const;
			CreateDataAPIServiceOutcome createDataAPIService(const Model::CreateDataAPIServiceRequest &request)const;
			void createDataAPIServiceAsync(const Model::CreateDataAPIServiceRequest& request, const CreateDataAPIServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateDataAPIServiceOutcomeCallable createDataAPIServiceCallable(const Model::CreateDataAPIServiceRequest& request) const;
			CreateDeviceDistributeJobOutcome createDeviceDistributeJob(const Model::CreateDeviceDistributeJobRequest &request)const;
			void createDeviceDistributeJobAsync(const Model::CreateDeviceDistributeJobRequest& request, const CreateDeviceDistributeJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateDeviceDistributeJobOutcomeCallable createDeviceDistributeJobCallable(const Model::CreateDeviceDistributeJobRequest& request) const;
			CreateDeviceDynamicGroupOutcome createDeviceDynamicGroup(const Model::CreateDeviceDynamicGroupRequest &request)const;
			void createDeviceDynamicGroupAsync(const Model::CreateDeviceDynamicGroupRequest& request, const CreateDeviceDynamicGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateDeviceDynamicGroupOutcomeCallable createDeviceDynamicGroupCallable(const Model::CreateDeviceDynamicGroupRequest& request) const;
			CreateDeviceGroupOutcome createDeviceGroup(const Model::CreateDeviceGroupRequest &request)const;
			void createDeviceGroupAsync(const Model::CreateDeviceGroupRequest& request, const CreateDeviceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateDeviceGroupOutcomeCallable createDeviceGroupCallable(const Model::CreateDeviceGroupRequest& request) const;
			CreateDeviceTunnelOutcome createDeviceTunnel(const Model::CreateDeviceTunnelRequest &request)const;
			void createDeviceTunnelAsync(const Model::CreateDeviceTunnelRequest& request, const CreateDeviceTunnelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateDeviceTunnelOutcomeCallable createDeviceTunnelCallable(const Model::CreateDeviceTunnelRequest& request) const;
			CreateEdgeDriverOutcome createEdgeDriver(const Model::CreateEdgeDriverRequest &request)const;
			void createEdgeDriverAsync(const Model::CreateEdgeDriverRequest& request, const CreateEdgeDriverAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateEdgeDriverOutcomeCallable createEdgeDriverCallable(const Model::CreateEdgeDriverRequest& request) const;
			CreateEdgeDriverVersionOutcome createEdgeDriverVersion(const Model::CreateEdgeDriverVersionRequest &request)const;
			void createEdgeDriverVersionAsync(const Model::CreateEdgeDriverVersionRequest& request, const CreateEdgeDriverVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateEdgeDriverVersionOutcomeCallable createEdgeDriverVersionCallable(const Model::CreateEdgeDriverVersionRequest& request) const;
			CreateEdgeInstanceOutcome createEdgeInstance(const Model::CreateEdgeInstanceRequest &request)const;
			void createEdgeInstanceAsync(const Model::CreateEdgeInstanceRequest& request, const CreateEdgeInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateEdgeInstanceOutcomeCallable createEdgeInstanceCallable(const Model::CreateEdgeInstanceRequest& request) const;
			CreateEdgeInstanceChannelOutcome createEdgeInstanceChannel(const Model::CreateEdgeInstanceChannelRequest &request)const;
			void createEdgeInstanceChannelAsync(const Model::CreateEdgeInstanceChannelRequest& request, const CreateEdgeInstanceChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateEdgeInstanceChannelOutcomeCallable createEdgeInstanceChannelCallable(const Model::CreateEdgeInstanceChannelRequest& request) const;
			CreateEdgeInstanceDeploymentOutcome createEdgeInstanceDeployment(const Model::CreateEdgeInstanceDeploymentRequest &request)const;
			void createEdgeInstanceDeploymentAsync(const Model::CreateEdgeInstanceDeploymentRequest& request, const CreateEdgeInstanceDeploymentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateEdgeInstanceDeploymentOutcomeCallable createEdgeInstanceDeploymentCallable(const Model::CreateEdgeInstanceDeploymentRequest& request) const;
			CreateEdgeInstanceMessageRoutingOutcome createEdgeInstanceMessageRouting(const Model::CreateEdgeInstanceMessageRoutingRequest &request)const;
			void createEdgeInstanceMessageRoutingAsync(const Model::CreateEdgeInstanceMessageRoutingRequest& request, const CreateEdgeInstanceMessageRoutingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateEdgeInstanceMessageRoutingOutcomeCallable createEdgeInstanceMessageRoutingCallable(const Model::CreateEdgeInstanceMessageRoutingRequest& request) const;
			CreateEdgeOssPreSignedAddressOutcome createEdgeOssPreSignedAddress(const Model::CreateEdgeOssPreSignedAddressRequest &request)const;
			void createEdgeOssPreSignedAddressAsync(const Model::CreateEdgeOssPreSignedAddressRequest& request, const CreateEdgeOssPreSignedAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateEdgeOssPreSignedAddressOutcomeCallable createEdgeOssPreSignedAddressCallable(const Model::CreateEdgeOssPreSignedAddressRequest& request) const;
			CreateJobOutcome createJob(const Model::CreateJobRequest &request)const;
			void createJobAsync(const Model::CreateJobRequest& request, const CreateJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateJobOutcomeCallable createJobCallable(const Model::CreateJobRequest& request) const;
			CreateLoRaNodesTaskOutcome createLoRaNodesTask(const Model::CreateLoRaNodesTaskRequest &request)const;
			void createLoRaNodesTaskAsync(const Model::CreateLoRaNodesTaskRequest& request, const CreateLoRaNodesTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateLoRaNodesTaskOutcomeCallable createLoRaNodesTaskCallable(const Model::CreateLoRaNodesTaskRequest& request) const;
			CreateOTADynamicUpgradeJobOutcome createOTADynamicUpgradeJob(const Model::CreateOTADynamicUpgradeJobRequest &request)const;
			void createOTADynamicUpgradeJobAsync(const Model::CreateOTADynamicUpgradeJobRequest& request, const CreateOTADynamicUpgradeJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateOTADynamicUpgradeJobOutcomeCallable createOTADynamicUpgradeJobCallable(const Model::CreateOTADynamicUpgradeJobRequest& request) const;
			CreateOTAFirmwareOutcome createOTAFirmware(const Model::CreateOTAFirmwareRequest &request)const;
			void createOTAFirmwareAsync(const Model::CreateOTAFirmwareRequest& request, const CreateOTAFirmwareAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateOTAFirmwareOutcomeCallable createOTAFirmwareCallable(const Model::CreateOTAFirmwareRequest& request) const;
			CreateOTAModuleOutcome createOTAModule(const Model::CreateOTAModuleRequest &request)const;
			void createOTAModuleAsync(const Model::CreateOTAModuleRequest& request, const CreateOTAModuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateOTAModuleOutcomeCallable createOTAModuleCallable(const Model::CreateOTAModuleRequest& request) const;
			CreateOTAStaticUpgradeJobOutcome createOTAStaticUpgradeJob(const Model::CreateOTAStaticUpgradeJobRequest &request)const;
			void createOTAStaticUpgradeJobAsync(const Model::CreateOTAStaticUpgradeJobRequest& request, const CreateOTAStaticUpgradeJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateOTAStaticUpgradeJobOutcomeCallable createOTAStaticUpgradeJobCallable(const Model::CreateOTAStaticUpgradeJobRequest& request) const;
			CreateOTAVerifyJobOutcome createOTAVerifyJob(const Model::CreateOTAVerifyJobRequest &request)const;
			void createOTAVerifyJobAsync(const Model::CreateOTAVerifyJobRequest& request, const CreateOTAVerifyJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateOTAVerifyJobOutcomeCallable createOTAVerifyJobCallable(const Model::CreateOTAVerifyJobRequest& request) const;
			CreateProductOutcome createProduct(const Model::CreateProductRequest &request)const;
			void createProductAsync(const Model::CreateProductRequest& request, const CreateProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateProductOutcomeCallable createProductCallable(const Model::CreateProductRequest& request) const;
			CreateProductDistributeJobOutcome createProductDistributeJob(const Model::CreateProductDistributeJobRequest &request)const;
			void createProductDistributeJobAsync(const Model::CreateProductDistributeJobRequest& request, const CreateProductDistributeJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateProductDistributeJobOutcomeCallable createProductDistributeJobCallable(const Model::CreateProductDistributeJobRequest& request) const;
			CreateProductTagsOutcome createProductTags(const Model::CreateProductTagsRequest &request)const;
			void createProductTagsAsync(const Model::CreateProductTagsRequest& request, const CreateProductTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateProductTagsOutcomeCallable createProductTagsCallable(const Model::CreateProductTagsRequest& request) const;
			CreateProductTopicOutcome createProductTopic(const Model::CreateProductTopicRequest &request)const;
			void createProductTopicAsync(const Model::CreateProductTopicRequest& request, const CreateProductTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateProductTopicOutcomeCallable createProductTopicCallable(const Model::CreateProductTopicRequest& request) const;
			CreateRuleOutcome createRule(const Model::CreateRuleRequest &request)const;
			void createRuleAsync(const Model::CreateRuleRequest& request, const CreateRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateRuleOutcomeCallable createRuleCallable(const Model::CreateRuleRequest& request) const;
			CreateRuleActionOutcome createRuleAction(const Model::CreateRuleActionRequest &request)const;
			void createRuleActionAsync(const Model::CreateRuleActionRequest& request, const CreateRuleActionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateRuleActionOutcomeCallable createRuleActionCallable(const Model::CreateRuleActionRequest& request) const;
			CreateSceneRuleOutcome createSceneRule(const Model::CreateSceneRuleRequest &request)const;
			void createSceneRuleAsync(const Model::CreateSceneRuleRequest& request, const CreateSceneRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateSceneRuleOutcomeCallable createSceneRuleCallable(const Model::CreateSceneRuleRequest& request) const;
			CreateSoundCodeOutcome createSoundCode(const Model::CreateSoundCodeRequest &request)const;
			void createSoundCodeAsync(const Model::CreateSoundCodeRequest& request, const CreateSoundCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateSoundCodeOutcomeCallable createSoundCodeCallable(const Model::CreateSoundCodeRequest& request) const;
			CreateSpeechOutcome createSpeech(const Model::CreateSpeechRequest &request)const;
			void createSpeechAsync(const Model::CreateSpeechRequest& request, const CreateSpeechAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateSpeechOutcomeCallable createSpeechCallable(const Model::CreateSpeechRequest& request) const;
			CreateStudioAppDomainOpenOutcome createStudioAppDomainOpen(const Model::CreateStudioAppDomainOpenRequest &request)const;
			void createStudioAppDomainOpenAsync(const Model::CreateStudioAppDomainOpenRequest& request, const CreateStudioAppDomainOpenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateStudioAppDomainOpenOutcomeCallable createStudioAppDomainOpenCallable(const Model::CreateStudioAppDomainOpenRequest& request) const;
			CreateSubscribeRelationOutcome createSubscribeRelation(const Model::CreateSubscribeRelationRequest &request)const;
			void createSubscribeRelationAsync(const Model::CreateSubscribeRelationRequest& request, const CreateSubscribeRelationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateSubscribeRelationOutcomeCallable createSubscribeRelationCallable(const Model::CreateSubscribeRelationRequest& request) const;
			CreateThingModelOutcome createThingModel(const Model::CreateThingModelRequest &request)const;
			void createThingModelAsync(const Model::CreateThingModelRequest& request, const CreateThingModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateThingModelOutcomeCallable createThingModelCallable(const Model::CreateThingModelRequest& request) const;
			CreateThingScriptOutcome createThingScript(const Model::CreateThingScriptRequest &request)const;
			void createThingScriptAsync(const Model::CreateThingScriptRequest& request, const CreateThingScriptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateThingScriptOutcomeCallable createThingScriptCallable(const Model::CreateThingScriptRequest& request) const;
			CreateTopicRouteTableOutcome createTopicRouteTable(const Model::CreateTopicRouteTableRequest &request)const;
			void createTopicRouteTableAsync(const Model::CreateTopicRouteTableRequest& request, const CreateTopicRouteTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateTopicRouteTableOutcomeCallable createTopicRouteTableCallable(const Model::CreateTopicRouteTableRequest& request) const;
			DeleteClientIdsOutcome deleteClientIds(const Model::DeleteClientIdsRequest &request)const;
			void deleteClientIdsAsync(const Model::DeleteClientIdsRequest& request, const DeleteClientIdsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteClientIdsOutcomeCallable deleteClientIdsCallable(const Model::DeleteClientIdsRequest& request) const;
			DeleteConsumerGroupOutcome deleteConsumerGroup(const Model::DeleteConsumerGroupRequest &request)const;
			void deleteConsumerGroupAsync(const Model::DeleteConsumerGroupRequest& request, const DeleteConsumerGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteConsumerGroupOutcomeCallable deleteConsumerGroupCallable(const Model::DeleteConsumerGroupRequest& request) const;
			DeleteConsumerGroupSubscribeRelationOutcome deleteConsumerGroupSubscribeRelation(const Model::DeleteConsumerGroupSubscribeRelationRequest &request)const;
			void deleteConsumerGroupSubscribeRelationAsync(const Model::DeleteConsumerGroupSubscribeRelationRequest& request, const DeleteConsumerGroupSubscribeRelationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteConsumerGroupSubscribeRelationOutcomeCallable deleteConsumerGroupSubscribeRelationCallable(const Model::DeleteConsumerGroupSubscribeRelationRequest& request) const;
			DeleteDeviceOutcome deleteDevice(const Model::DeleteDeviceRequest &request)const;
			void deleteDeviceAsync(const Model::DeleteDeviceRequest& request, const DeleteDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDeviceOutcomeCallable deleteDeviceCallable(const Model::DeleteDeviceRequest& request) const;
			DeleteDeviceDistributeJobOutcome deleteDeviceDistributeJob(const Model::DeleteDeviceDistributeJobRequest &request)const;
			void deleteDeviceDistributeJobAsync(const Model::DeleteDeviceDistributeJobRequest& request, const DeleteDeviceDistributeJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDeviceDistributeJobOutcomeCallable deleteDeviceDistributeJobCallable(const Model::DeleteDeviceDistributeJobRequest& request) const;
			DeleteDeviceDynamicGroupOutcome deleteDeviceDynamicGroup(const Model::DeleteDeviceDynamicGroupRequest &request)const;
			void deleteDeviceDynamicGroupAsync(const Model::DeleteDeviceDynamicGroupRequest& request, const DeleteDeviceDynamicGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDeviceDynamicGroupOutcomeCallable deleteDeviceDynamicGroupCallable(const Model::DeleteDeviceDynamicGroupRequest& request) const;
			DeleteDeviceFileOutcome deleteDeviceFile(const Model::DeleteDeviceFileRequest &request)const;
			void deleteDeviceFileAsync(const Model::DeleteDeviceFileRequest& request, const DeleteDeviceFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDeviceFileOutcomeCallable deleteDeviceFileCallable(const Model::DeleteDeviceFileRequest& request) const;
			DeleteDeviceGroupOutcome deleteDeviceGroup(const Model::DeleteDeviceGroupRequest &request)const;
			void deleteDeviceGroupAsync(const Model::DeleteDeviceGroupRequest& request, const DeleteDeviceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDeviceGroupOutcomeCallable deleteDeviceGroupCallable(const Model::DeleteDeviceGroupRequest& request) const;
			DeleteDevicePropOutcome deleteDeviceProp(const Model::DeleteDevicePropRequest &request)const;
			void deleteDevicePropAsync(const Model::DeleteDevicePropRequest& request, const DeleteDevicePropAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDevicePropOutcomeCallable deleteDevicePropCallable(const Model::DeleteDevicePropRequest& request) const;
			DeleteDeviceSpeechOutcome deleteDeviceSpeech(const Model::DeleteDeviceSpeechRequest &request)const;
			void deleteDeviceSpeechAsync(const Model::DeleteDeviceSpeechRequest& request, const DeleteDeviceSpeechAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDeviceSpeechOutcomeCallable deleteDeviceSpeechCallable(const Model::DeleteDeviceSpeechRequest& request) const;
			DeleteDeviceTunnelOutcome deleteDeviceTunnel(const Model::DeleteDeviceTunnelRequest &request)const;
			void deleteDeviceTunnelAsync(const Model::DeleteDeviceTunnelRequest& request, const DeleteDeviceTunnelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDeviceTunnelOutcomeCallable deleteDeviceTunnelCallable(const Model::DeleteDeviceTunnelRequest& request) const;
			DeleteEdgeDriverOutcome deleteEdgeDriver(const Model::DeleteEdgeDriverRequest &request)const;
			void deleteEdgeDriverAsync(const Model::DeleteEdgeDriverRequest& request, const DeleteEdgeDriverAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteEdgeDriverOutcomeCallable deleteEdgeDriverCallable(const Model::DeleteEdgeDriverRequest& request) const;
			DeleteEdgeDriverVersionOutcome deleteEdgeDriverVersion(const Model::DeleteEdgeDriverVersionRequest &request)const;
			void deleteEdgeDriverVersionAsync(const Model::DeleteEdgeDriverVersionRequest& request, const DeleteEdgeDriverVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteEdgeDriverVersionOutcomeCallable deleteEdgeDriverVersionCallable(const Model::DeleteEdgeDriverVersionRequest& request) const;
			DeleteEdgeInstanceOutcome deleteEdgeInstance(const Model::DeleteEdgeInstanceRequest &request)const;
			void deleteEdgeInstanceAsync(const Model::DeleteEdgeInstanceRequest& request, const DeleteEdgeInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteEdgeInstanceOutcomeCallable deleteEdgeInstanceCallable(const Model::DeleteEdgeInstanceRequest& request) const;
			DeleteEdgeInstanceMessageRoutingOutcome deleteEdgeInstanceMessageRouting(const Model::DeleteEdgeInstanceMessageRoutingRequest &request)const;
			void deleteEdgeInstanceMessageRoutingAsync(const Model::DeleteEdgeInstanceMessageRoutingRequest& request, const DeleteEdgeInstanceMessageRoutingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteEdgeInstanceMessageRoutingOutcomeCallable deleteEdgeInstanceMessageRoutingCallable(const Model::DeleteEdgeInstanceMessageRoutingRequest& request) const;
			DeleteJobOutcome deleteJob(const Model::DeleteJobRequest &request)const;
			void deleteJobAsync(const Model::DeleteJobRequest& request, const DeleteJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteJobOutcomeCallable deleteJobCallable(const Model::DeleteJobRequest& request) const;
			DeleteOTAFirmwareOutcome deleteOTAFirmware(const Model::DeleteOTAFirmwareRequest &request)const;
			void deleteOTAFirmwareAsync(const Model::DeleteOTAFirmwareRequest& request, const DeleteOTAFirmwareAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteOTAFirmwareOutcomeCallable deleteOTAFirmwareCallable(const Model::DeleteOTAFirmwareRequest& request) const;
			DeleteOTAModuleOutcome deleteOTAModule(const Model::DeleteOTAModuleRequest &request)const;
			void deleteOTAModuleAsync(const Model::DeleteOTAModuleRequest& request, const DeleteOTAModuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteOTAModuleOutcomeCallable deleteOTAModuleCallable(const Model::DeleteOTAModuleRequest& request) const;
			DeleteProductOutcome deleteProduct(const Model::DeleteProductRequest &request)const;
			void deleteProductAsync(const Model::DeleteProductRequest& request, const DeleteProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteProductOutcomeCallable deleteProductCallable(const Model::DeleteProductRequest& request) const;
			DeleteProductTagsOutcome deleteProductTags(const Model::DeleteProductTagsRequest &request)const;
			void deleteProductTagsAsync(const Model::DeleteProductTagsRequest& request, const DeleteProductTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteProductTagsOutcomeCallable deleteProductTagsCallable(const Model::DeleteProductTagsRequest& request) const;
			DeleteProductTopicOutcome deleteProductTopic(const Model::DeleteProductTopicRequest &request)const;
			void deleteProductTopicAsync(const Model::DeleteProductTopicRequest& request, const DeleteProductTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteProductTopicOutcomeCallable deleteProductTopicCallable(const Model::DeleteProductTopicRequest& request) const;
			DeleteRuleOutcome deleteRule(const Model::DeleteRuleRequest &request)const;
			void deleteRuleAsync(const Model::DeleteRuleRequest& request, const DeleteRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteRuleOutcomeCallable deleteRuleCallable(const Model::DeleteRuleRequest& request) const;
			DeleteRuleActionOutcome deleteRuleAction(const Model::DeleteRuleActionRequest &request)const;
			void deleteRuleActionAsync(const Model::DeleteRuleActionRequest& request, const DeleteRuleActionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteRuleActionOutcomeCallable deleteRuleActionCallable(const Model::DeleteRuleActionRequest& request) const;
			DeleteSceneRuleOutcome deleteSceneRule(const Model::DeleteSceneRuleRequest &request)const;
			void deleteSceneRuleAsync(const Model::DeleteSceneRuleRequest& request, const DeleteSceneRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteSceneRuleOutcomeCallable deleteSceneRuleCallable(const Model::DeleteSceneRuleRequest& request) const;
			DeleteSoundCodeOutcome deleteSoundCode(const Model::DeleteSoundCodeRequest &request)const;
			void deleteSoundCodeAsync(const Model::DeleteSoundCodeRequest& request, const DeleteSoundCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteSoundCodeOutcomeCallable deleteSoundCodeCallable(const Model::DeleteSoundCodeRequest& request) const;
			DeleteSpeechOutcome deleteSpeech(const Model::DeleteSpeechRequest &request)const;
			void deleteSpeechAsync(const Model::DeleteSpeechRequest& request, const DeleteSpeechAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteSpeechOutcomeCallable deleteSpeechCallable(const Model::DeleteSpeechRequest& request) const;
			DeleteStudioAppDomainOpenOutcome deleteStudioAppDomainOpen(const Model::DeleteStudioAppDomainOpenRequest &request)const;
			void deleteStudioAppDomainOpenAsync(const Model::DeleteStudioAppDomainOpenRequest& request, const DeleteStudioAppDomainOpenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteStudioAppDomainOpenOutcomeCallable deleteStudioAppDomainOpenCallable(const Model::DeleteStudioAppDomainOpenRequest& request) const;
			DeleteSubscribeRelationOutcome deleteSubscribeRelation(const Model::DeleteSubscribeRelationRequest &request)const;
			void deleteSubscribeRelationAsync(const Model::DeleteSubscribeRelationRequest& request, const DeleteSubscribeRelationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteSubscribeRelationOutcomeCallable deleteSubscribeRelationCallable(const Model::DeleteSubscribeRelationRequest& request) const;
			DeleteThingModelOutcome deleteThingModel(const Model::DeleteThingModelRequest &request)const;
			void deleteThingModelAsync(const Model::DeleteThingModelRequest& request, const DeleteThingModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteThingModelOutcomeCallable deleteThingModelCallable(const Model::DeleteThingModelRequest& request) const;
			DeleteTopicRouteTableOutcome deleteTopicRouteTable(const Model::DeleteTopicRouteTableRequest &request)const;
			void deleteTopicRouteTableAsync(const Model::DeleteTopicRouteTableRequest& request, const DeleteTopicRouteTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteTopicRouteTableOutcomeCallable deleteTopicRouteTableCallable(const Model::DeleteTopicRouteTableRequest& request) const;
			DisableDeviceTunnelOutcome disableDeviceTunnel(const Model::DisableDeviceTunnelRequest &request)const;
			void disableDeviceTunnelAsync(const Model::DisableDeviceTunnelRequest& request, const DisableDeviceTunnelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DisableDeviceTunnelOutcomeCallable disableDeviceTunnelCallable(const Model::DisableDeviceTunnelRequest& request) const;
			DisableDeviceTunnelShareOutcome disableDeviceTunnelShare(const Model::DisableDeviceTunnelShareRequest &request)const;
			void disableDeviceTunnelShareAsync(const Model::DisableDeviceTunnelShareRequest& request, const DisableDeviceTunnelShareAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DisableDeviceTunnelShareOutcomeCallable disableDeviceTunnelShareCallable(const Model::DisableDeviceTunnelShareRequest& request) const;
			DisableSceneRuleOutcome disableSceneRule(const Model::DisableSceneRuleRequest &request)const;
			void disableSceneRuleAsync(const Model::DisableSceneRuleRequest& request, const DisableSceneRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DisableSceneRuleOutcomeCallable disableSceneRuleCallable(const Model::DisableSceneRuleRequest& request) const;
			DisableThingOutcome disableThing(const Model::DisableThingRequest &request)const;
			void disableThingAsync(const Model::DisableThingRequest& request, const DisableThingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DisableThingOutcomeCallable disableThingCallable(const Model::DisableThingRequest& request) const;
			EnableDeviceTunnelOutcome enableDeviceTunnel(const Model::EnableDeviceTunnelRequest &request)const;
			void enableDeviceTunnelAsync(const Model::EnableDeviceTunnelRequest& request, const EnableDeviceTunnelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EnableDeviceTunnelOutcomeCallable enableDeviceTunnelCallable(const Model::EnableDeviceTunnelRequest& request) const;
			EnableDeviceTunnelShareOutcome enableDeviceTunnelShare(const Model::EnableDeviceTunnelShareRequest &request)const;
			void enableDeviceTunnelShareAsync(const Model::EnableDeviceTunnelShareRequest& request, const EnableDeviceTunnelShareAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EnableDeviceTunnelShareOutcomeCallable enableDeviceTunnelShareCallable(const Model::EnableDeviceTunnelShareRequest& request) const;
			EnableSceneRuleOutcome enableSceneRule(const Model::EnableSceneRuleRequest &request)const;
			void enableSceneRuleAsync(const Model::EnableSceneRuleRequest& request, const EnableSceneRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EnableSceneRuleOutcomeCallable enableSceneRuleCallable(const Model::EnableSceneRuleRequest& request) const;
			EnableThingOutcome enableThing(const Model::EnableThingRequest &request)const;
			void enableThingAsync(const Model::EnableThingRequest& request, const EnableThingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EnableThingOutcomeCallable enableThingCallable(const Model::EnableThingRequest& request) const;
			GenerateDeviceNameListURLOutcome generateDeviceNameListURL(const Model::GenerateDeviceNameListURLRequest &request)const;
			void generateDeviceNameListURLAsync(const Model::GenerateDeviceNameListURLRequest& request, const GenerateDeviceNameListURLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GenerateDeviceNameListURLOutcomeCallable generateDeviceNameListURLCallable(const Model::GenerateDeviceNameListURLRequest& request) const;
			GenerateFileUploadURLOutcome generateFileUploadURL(const Model::GenerateFileUploadURLRequest &request)const;
			void generateFileUploadURLAsync(const Model::GenerateFileUploadURLRequest& request, const GenerateFileUploadURLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GenerateFileUploadURLOutcomeCallable generateFileUploadURLCallable(const Model::GenerateFileUploadURLRequest& request) const;
			GenerateOTAUploadURLOutcome generateOTAUploadURL(const Model::GenerateOTAUploadURLRequest &request)const;
			void generateOTAUploadURLAsync(const Model::GenerateOTAUploadURLRequest& request, const GenerateOTAUploadURLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GenerateOTAUploadURLOutcomeCallable generateOTAUploadURLCallable(const Model::GenerateOTAUploadURLRequest& request) const;
			GetDataAPIServiceDetailOutcome getDataAPIServiceDetail(const Model::GetDataAPIServiceDetailRequest &request)const;
			void getDataAPIServiceDetailAsync(const Model::GetDataAPIServiceDetailRequest& request, const GetDataAPIServiceDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetDataAPIServiceDetailOutcomeCallable getDataAPIServiceDetailCallable(const Model::GetDataAPIServiceDetailRequest& request) const;
			GetDeviceShadowOutcome getDeviceShadow(const Model::GetDeviceShadowRequest &request)const;
			void getDeviceShadowAsync(const Model::GetDeviceShadowRequest& request, const GetDeviceShadowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetDeviceShadowOutcomeCallable getDeviceShadowCallable(const Model::GetDeviceShadowRequest& request) const;
			GetDeviceStatusOutcome getDeviceStatus(const Model::GetDeviceStatusRequest &request)const;
			void getDeviceStatusAsync(const Model::GetDeviceStatusRequest& request, const GetDeviceStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetDeviceStatusOutcomeCallable getDeviceStatusCallable(const Model::GetDeviceStatusRequest& request) const;
			GetDeviceTunnelShareStatusOutcome getDeviceTunnelShareStatus(const Model::GetDeviceTunnelShareStatusRequest &request)const;
			void getDeviceTunnelShareStatusAsync(const Model::GetDeviceTunnelShareStatusRequest& request, const GetDeviceTunnelShareStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetDeviceTunnelShareStatusOutcomeCallable getDeviceTunnelShareStatusCallable(const Model::GetDeviceTunnelShareStatusRequest& request) const;
			GetDeviceTunnelStatusOutcome getDeviceTunnelStatus(const Model::GetDeviceTunnelStatusRequest &request)const;
			void getDeviceTunnelStatusAsync(const Model::GetDeviceTunnelStatusRequest& request, const GetDeviceTunnelStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetDeviceTunnelStatusOutcomeCallable getDeviceTunnelStatusCallable(const Model::GetDeviceTunnelStatusRequest& request) const;
			GetEdgeDriverVersionOutcome getEdgeDriverVersion(const Model::GetEdgeDriverVersionRequest &request)const;
			void getEdgeDriverVersionAsync(const Model::GetEdgeDriverVersionRequest& request, const GetEdgeDriverVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetEdgeDriverVersionOutcomeCallable getEdgeDriverVersionCallable(const Model::GetEdgeDriverVersionRequest& request) const;
			GetEdgeInstanceOutcome getEdgeInstance(const Model::GetEdgeInstanceRequest &request)const;
			void getEdgeInstanceAsync(const Model::GetEdgeInstanceRequest& request, const GetEdgeInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetEdgeInstanceOutcomeCallable getEdgeInstanceCallable(const Model::GetEdgeInstanceRequest& request) const;
			GetEdgeInstanceDeploymentOutcome getEdgeInstanceDeployment(const Model::GetEdgeInstanceDeploymentRequest &request)const;
			void getEdgeInstanceDeploymentAsync(const Model::GetEdgeInstanceDeploymentRequest& request, const GetEdgeInstanceDeploymentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetEdgeInstanceDeploymentOutcomeCallable getEdgeInstanceDeploymentCallable(const Model::GetEdgeInstanceDeploymentRequest& request) const;
			GetEdgeInstanceMessageRoutingOutcome getEdgeInstanceMessageRouting(const Model::GetEdgeInstanceMessageRoutingRequest &request)const;
			void getEdgeInstanceMessageRoutingAsync(const Model::GetEdgeInstanceMessageRoutingRequest& request, const GetEdgeInstanceMessageRoutingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetEdgeInstanceMessageRoutingOutcomeCallable getEdgeInstanceMessageRoutingCallable(const Model::GetEdgeInstanceMessageRoutingRequest& request) const;
			GetGatewayBySubDeviceOutcome getGatewayBySubDevice(const Model::GetGatewayBySubDeviceRequest &request)const;
			void getGatewayBySubDeviceAsync(const Model::GetGatewayBySubDeviceRequest& request, const GetGatewayBySubDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetGatewayBySubDeviceOutcomeCallable getGatewayBySubDeviceCallable(const Model::GetGatewayBySubDeviceRequest& request) const;
			GetLoraNodesTaskOutcome getLoraNodesTask(const Model::GetLoraNodesTaskRequest &request)const;
			void getLoraNodesTaskAsync(const Model::GetLoraNodesTaskRequest& request, const GetLoraNodesTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetLoraNodesTaskOutcomeCallable getLoraNodesTaskCallable(const Model::GetLoraNodesTaskRequest& request) const;
			GetRuleOutcome getRule(const Model::GetRuleRequest &request)const;
			void getRuleAsync(const Model::GetRuleRequest& request, const GetRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetRuleOutcomeCallable getRuleCallable(const Model::GetRuleRequest& request) const;
			GetRuleActionOutcome getRuleAction(const Model::GetRuleActionRequest &request)const;
			void getRuleActionAsync(const Model::GetRuleActionRequest& request, const GetRuleActionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetRuleActionOutcomeCallable getRuleActionCallable(const Model::GetRuleActionRequest& request) const;
			GetSceneRuleOutcome getSceneRule(const Model::GetSceneRuleRequest &request)const;
			void getSceneRuleAsync(const Model::GetSceneRuleRequest& request, const GetSceneRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetSceneRuleOutcomeCallable getSceneRuleCallable(const Model::GetSceneRuleRequest& request) const;
			GetSoundCodeAudioOutcome getSoundCodeAudio(const Model::GetSoundCodeAudioRequest &request)const;
			void getSoundCodeAudioAsync(const Model::GetSoundCodeAudioRequest& request, const GetSoundCodeAudioAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetSoundCodeAudioOutcomeCallable getSoundCodeAudioCallable(const Model::GetSoundCodeAudioRequest& request) const;
			GetSpeechDeviceDetailOutcome getSpeechDeviceDetail(const Model::GetSpeechDeviceDetailRequest &request)const;
			void getSpeechDeviceDetailAsync(const Model::GetSpeechDeviceDetailRequest& request, const GetSpeechDeviceDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetSpeechDeviceDetailOutcomeCallable getSpeechDeviceDetailCallable(const Model::GetSpeechDeviceDetailRequest& request) const;
			GetSpeechVoiceOutcome getSpeechVoice(const Model::GetSpeechVoiceRequest &request)const;
			void getSpeechVoiceAsync(const Model::GetSpeechVoiceRequest& request, const GetSpeechVoiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetSpeechVoiceOutcomeCallable getSpeechVoiceCallable(const Model::GetSpeechVoiceRequest& request) const;
			GetStudioAppTokenOpenOutcome getStudioAppTokenOpen(const Model::GetStudioAppTokenOpenRequest &request)const;
			void getStudioAppTokenOpenAsync(const Model::GetStudioAppTokenOpenRequest& request, const GetStudioAppTokenOpenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetStudioAppTokenOpenOutcomeCallable getStudioAppTokenOpenCallable(const Model::GetStudioAppTokenOpenRequest& request) const;
			GetThingModelTslOutcome getThingModelTsl(const Model::GetThingModelTslRequest &request)const;
			void getThingModelTslAsync(const Model::GetThingModelTslRequest& request, const GetThingModelTslAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetThingModelTslOutcomeCallable getThingModelTslCallable(const Model::GetThingModelTslRequest& request) const;
			GetThingModelTslPublishedOutcome getThingModelTslPublished(const Model::GetThingModelTslPublishedRequest &request)const;
			void getThingModelTslPublishedAsync(const Model::GetThingModelTslPublishedRequest& request, const GetThingModelTslPublishedAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetThingModelTslPublishedOutcomeCallable getThingModelTslPublishedCallable(const Model::GetThingModelTslPublishedRequest& request) const;
			GetThingScriptOutcome getThingScript(const Model::GetThingScriptRequest &request)const;
			void getThingScriptAsync(const Model::GetThingScriptRequest& request, const GetThingScriptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetThingScriptOutcomeCallable getThingScriptCallable(const Model::GetThingScriptRequest& request) const;
			GetThingTemplateOutcome getThingTemplate(const Model::GetThingTemplateRequest &request)const;
			void getThingTemplateAsync(const Model::GetThingTemplateRequest& request, const GetThingTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetThingTemplateOutcomeCallable getThingTemplateCallable(const Model::GetThingTemplateRequest& request) const;
			GetThingTopoOutcome getThingTopo(const Model::GetThingTopoRequest &request)const;
			void getThingTopoAsync(const Model::GetThingTopoRequest& request, const GetThingTopoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetThingTopoOutcomeCallable getThingTopoCallable(const Model::GetThingTopoRequest& request) const;
			GisQueryDeviceLocationOutcome gisQueryDeviceLocation(const Model::GisQueryDeviceLocationRequest &request)const;
			void gisQueryDeviceLocationAsync(const Model::GisQueryDeviceLocationRequest& request, const GisQueryDeviceLocationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GisQueryDeviceLocationOutcomeCallable gisQueryDeviceLocationCallable(const Model::GisQueryDeviceLocationRequest& request) const;
			GisSearchDeviceTraceOutcome gisSearchDeviceTrace(const Model::GisSearchDeviceTraceRequest &request)const;
			void gisSearchDeviceTraceAsync(const Model::GisSearchDeviceTraceRequest& request, const GisSearchDeviceTraceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GisSearchDeviceTraceOutcomeCallable gisSearchDeviceTraceCallable(const Model::GisSearchDeviceTraceRequest& request) const;
			ImportThingModelTslOutcome importThingModelTsl(const Model::ImportThingModelTslRequest &request)const;
			void importThingModelTslAsync(const Model::ImportThingModelTslRequest& request, const ImportThingModelTslAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ImportThingModelTslOutcomeCallable importThingModelTslCallable(const Model::ImportThingModelTslRequest& request) const;
			InvokeDataAPIServiceOutcome invokeDataAPIService(const Model::InvokeDataAPIServiceRequest &request)const;
			void invokeDataAPIServiceAsync(const Model::InvokeDataAPIServiceRequest& request, const InvokeDataAPIServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			InvokeDataAPIServiceOutcomeCallable invokeDataAPIServiceCallable(const Model::InvokeDataAPIServiceRequest& request) const;
			InvokeThingServiceOutcome invokeThingService(const Model::InvokeThingServiceRequest &request)const;
			void invokeThingServiceAsync(const Model::InvokeThingServiceRequest& request, const InvokeThingServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			InvokeThingServiceOutcomeCallable invokeThingServiceCallable(const Model::InvokeThingServiceRequest& request) const;
			InvokeThingsServiceOutcome invokeThingsService(const Model::InvokeThingsServiceRequest &request)const;
			void invokeThingsServiceAsync(const Model::InvokeThingsServiceRequest& request, const InvokeThingsServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			InvokeThingsServiceOutcomeCallable invokeThingsServiceCallable(const Model::InvokeThingsServiceRequest& request) const;
			ListAnalyticsDataOutcome listAnalyticsData(const Model::ListAnalyticsDataRequest &request)const;
			void listAnalyticsDataAsync(const Model::ListAnalyticsDataRequest& request, const ListAnalyticsDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAnalyticsDataOutcomeCallable listAnalyticsDataCallable(const Model::ListAnalyticsDataRequest& request) const;
			ListDeviceDistributeJobOutcome listDeviceDistributeJob(const Model::ListDeviceDistributeJobRequest &request)const;
			void listDeviceDistributeJobAsync(const Model::ListDeviceDistributeJobRequest& request, const ListDeviceDistributeJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDeviceDistributeJobOutcomeCallable listDeviceDistributeJobCallable(const Model::ListDeviceDistributeJobRequest& request) const;
			ListDistributedDeviceOutcome listDistributedDevice(const Model::ListDistributedDeviceRequest &request)const;
			void listDistributedDeviceAsync(const Model::ListDistributedDeviceRequest& request, const ListDistributedDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDistributedDeviceOutcomeCallable listDistributedDeviceCallable(const Model::ListDistributedDeviceRequest& request) const;
			ListDistributedProductOutcome listDistributedProduct(const Model::ListDistributedProductRequest &request)const;
			void listDistributedProductAsync(const Model::ListDistributedProductRequest& request, const ListDistributedProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDistributedProductOutcomeCallable listDistributedProductCallable(const Model::ListDistributedProductRequest& request) const;
			ListJobOutcome listJob(const Model::ListJobRequest &request)const;
			void listJobAsync(const Model::ListJobRequest& request, const ListJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListJobOutcomeCallable listJobCallable(const Model::ListJobRequest& request) const;
			ListOTAFirmwareOutcome listOTAFirmware(const Model::ListOTAFirmwareRequest &request)const;
			void listOTAFirmwareAsync(const Model::ListOTAFirmwareRequest& request, const ListOTAFirmwareAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListOTAFirmwareOutcomeCallable listOTAFirmwareCallable(const Model::ListOTAFirmwareRequest& request) const;
			ListOTAJobByDeviceOutcome listOTAJobByDevice(const Model::ListOTAJobByDeviceRequest &request)const;
			void listOTAJobByDeviceAsync(const Model::ListOTAJobByDeviceRequest& request, const ListOTAJobByDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListOTAJobByDeviceOutcomeCallable listOTAJobByDeviceCallable(const Model::ListOTAJobByDeviceRequest& request) const;
			ListOTAJobByFirmwareOutcome listOTAJobByFirmware(const Model::ListOTAJobByFirmwareRequest &request)const;
			void listOTAJobByFirmwareAsync(const Model::ListOTAJobByFirmwareRequest& request, const ListOTAJobByFirmwareAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListOTAJobByFirmwareOutcomeCallable listOTAJobByFirmwareCallable(const Model::ListOTAJobByFirmwareRequest& request) const;
			ListOTAModuleByProductOutcome listOTAModuleByProduct(const Model::ListOTAModuleByProductRequest &request)const;
			void listOTAModuleByProductAsync(const Model::ListOTAModuleByProductRequest& request, const ListOTAModuleByProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListOTAModuleByProductOutcomeCallable listOTAModuleByProductCallable(const Model::ListOTAModuleByProductRequest& request) const;
			ListOTAModuleVersionsByDeviceOutcome listOTAModuleVersionsByDevice(const Model::ListOTAModuleVersionsByDeviceRequest &request)const;
			void listOTAModuleVersionsByDeviceAsync(const Model::ListOTAModuleVersionsByDeviceRequest& request, const ListOTAModuleVersionsByDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListOTAModuleVersionsByDeviceOutcomeCallable listOTAModuleVersionsByDeviceCallable(const Model::ListOTAModuleVersionsByDeviceRequest& request) const;
			ListOTATaskByJobOutcome listOTATaskByJob(const Model::ListOTATaskByJobRequest &request)const;
			void listOTATaskByJobAsync(const Model::ListOTATaskByJobRequest& request, const ListOTATaskByJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListOTATaskByJobOutcomeCallable listOTATaskByJobCallable(const Model::ListOTATaskByJobRequest& request) const;
			ListOTAUnfinishedTaskByDeviceOutcome listOTAUnfinishedTaskByDevice(const Model::ListOTAUnfinishedTaskByDeviceRequest &request)const;
			void listOTAUnfinishedTaskByDeviceAsync(const Model::ListOTAUnfinishedTaskByDeviceRequest& request, const ListOTAUnfinishedTaskByDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListOTAUnfinishedTaskByDeviceOutcomeCallable listOTAUnfinishedTaskByDeviceCallable(const Model::ListOTAUnfinishedTaskByDeviceRequest& request) const;
			ListProductByTagsOutcome listProductByTags(const Model::ListProductByTagsRequest &request)const;
			void listProductByTagsAsync(const Model::ListProductByTagsRequest& request, const ListProductByTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListProductByTagsOutcomeCallable listProductByTagsCallable(const Model::ListProductByTagsRequest& request) const;
			ListProductTagsOutcome listProductTags(const Model::ListProductTagsRequest &request)const;
			void listProductTagsAsync(const Model::ListProductTagsRequest& request, const ListProductTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListProductTagsOutcomeCallable listProductTagsCallable(const Model::ListProductTagsRequest& request) const;
			ListRuleOutcome listRule(const Model::ListRuleRequest &request)const;
			void listRuleAsync(const Model::ListRuleRequest& request, const ListRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListRuleOutcomeCallable listRuleCallable(const Model::ListRuleRequest& request) const;
			ListRuleActionsOutcome listRuleActions(const Model::ListRuleActionsRequest &request)const;
			void listRuleActionsAsync(const Model::ListRuleActionsRequest& request, const ListRuleActionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListRuleActionsOutcomeCallable listRuleActionsCallable(const Model::ListRuleActionsRequest& request) const;
			ListTaskOutcome listTask(const Model::ListTaskRequest &request)const;
			void listTaskAsync(const Model::ListTaskRequest& request, const ListTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTaskOutcomeCallable listTaskCallable(const Model::ListTaskRequest& request) const;
			ListThingModelVersionOutcome listThingModelVersion(const Model::ListThingModelVersionRequest &request)const;
			void listThingModelVersionAsync(const Model::ListThingModelVersionRequest& request, const ListThingModelVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListThingModelVersionOutcomeCallable listThingModelVersionCallable(const Model::ListThingModelVersionRequest& request) const;
			ListThingTemplatesOutcome listThingTemplates(const Model::ListThingTemplatesRequest &request)const;
			void listThingTemplatesAsync(const Model::ListThingTemplatesRequest& request, const ListThingTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListThingTemplatesOutcomeCallable listThingTemplatesCallable(const Model::ListThingTemplatesRequest& request) const;
			NotifyAddThingTopoOutcome notifyAddThingTopo(const Model::NotifyAddThingTopoRequest &request)const;
			void notifyAddThingTopoAsync(const Model::NotifyAddThingTopoRequest& request, const NotifyAddThingTopoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			NotifyAddThingTopoOutcomeCallable notifyAddThingTopoCallable(const Model::NotifyAddThingTopoRequest& request) const;
			OpenIotServiceOutcome openIotService(const Model::OpenIotServiceRequest &request)const;
			void openIotServiceAsync(const Model::OpenIotServiceRequest& request, const OpenIotServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OpenIotServiceOutcomeCallable openIotServiceCallable(const Model::OpenIotServiceRequest& request) const;
			PrintByTemplateOutcome printByTemplate(const Model::PrintByTemplateRequest &request)const;
			void printByTemplateAsync(const Model::PrintByTemplateRequest& request, const PrintByTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PrintByTemplateOutcomeCallable printByTemplateCallable(const Model::PrintByTemplateRequest& request) const;
			PubOutcome pub(const Model::PubRequest &request)const;
			void pubAsync(const Model::PubRequest& request, const PubAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PubOutcomeCallable pubCallable(const Model::PubRequest& request) const;
			PubBroadcastOutcome pubBroadcast(const Model::PubBroadcastRequest &request)const;
			void pubBroadcastAsync(const Model::PubBroadcastRequest& request, const PubBroadcastAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PubBroadcastOutcomeCallable pubBroadcastCallable(const Model::PubBroadcastRequest& request) const;
			PublishStudioAppOutcome publishStudioApp(const Model::PublishStudioAppRequest &request)const;
			void publishStudioAppAsync(const Model::PublishStudioAppRequest& request, const PublishStudioAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PublishStudioAppOutcomeCallable publishStudioAppCallable(const Model::PublishStudioAppRequest& request) const;
			PublishThingModelOutcome publishThingModel(const Model::PublishThingModelRequest &request)const;
			void publishThingModelAsync(const Model::PublishThingModelRequest& request, const PublishThingModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PublishThingModelOutcomeCallable publishThingModelCallable(const Model::PublishThingModelRequest& request) const;
			PushSpeechOutcome pushSpeech(const Model::PushSpeechRequest &request)const;
			void pushSpeechAsync(const Model::PushSpeechRequest& request, const PushSpeechAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PushSpeechOutcomeCallable pushSpeechCallable(const Model::PushSpeechRequest& request) const;
			QueryBatchRegisterDeviceStatusOutcome queryBatchRegisterDeviceStatus(const Model::QueryBatchRegisterDeviceStatusRequest &request)const;
			void queryBatchRegisterDeviceStatusAsync(const Model::QueryBatchRegisterDeviceStatusRequest& request, const QueryBatchRegisterDeviceStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryBatchRegisterDeviceStatusOutcomeCallable queryBatchRegisterDeviceStatusCallable(const Model::QueryBatchRegisterDeviceStatusRequest& request) const;
			QueryCertUrlByApplyIdOutcome queryCertUrlByApplyId(const Model::QueryCertUrlByApplyIdRequest &request)const;
			void queryCertUrlByApplyIdAsync(const Model::QueryCertUrlByApplyIdRequest& request, const QueryCertUrlByApplyIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryCertUrlByApplyIdOutcomeCallable queryCertUrlByApplyIdCallable(const Model::QueryCertUrlByApplyIdRequest& request) const;
			QueryClientIdsOutcome queryClientIds(const Model::QueryClientIdsRequest &request)const;
			void queryClientIdsAsync(const Model::QueryClientIdsRequest& request, const QueryClientIdsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryClientIdsOutcomeCallable queryClientIdsCallable(const Model::QueryClientIdsRequest& request) const;
			QueryConsumerGroupByGroupIdOutcome queryConsumerGroupByGroupId(const Model::QueryConsumerGroupByGroupIdRequest &request)const;
			void queryConsumerGroupByGroupIdAsync(const Model::QueryConsumerGroupByGroupIdRequest& request, const QueryConsumerGroupByGroupIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryConsumerGroupByGroupIdOutcomeCallable queryConsumerGroupByGroupIdCallable(const Model::QueryConsumerGroupByGroupIdRequest& request) const;
			QueryConsumerGroupListOutcome queryConsumerGroupList(const Model::QueryConsumerGroupListRequest &request)const;
			void queryConsumerGroupListAsync(const Model::QueryConsumerGroupListRequest& request, const QueryConsumerGroupListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryConsumerGroupListOutcomeCallable queryConsumerGroupListCallable(const Model::QueryConsumerGroupListRequest& request) const;
			QueryConsumerGroupStatusOutcome queryConsumerGroupStatus(const Model::QueryConsumerGroupStatusRequest &request)const;
			void queryConsumerGroupStatusAsync(const Model::QueryConsumerGroupStatusRequest& request, const QueryConsumerGroupStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryConsumerGroupStatusOutcomeCallable queryConsumerGroupStatusCallable(const Model::QueryConsumerGroupStatusRequest& request) const;
			QueryDetailSceneRuleLogOutcome queryDetailSceneRuleLog(const Model::QueryDetailSceneRuleLogRequest &request)const;
			void queryDetailSceneRuleLogAsync(const Model::QueryDetailSceneRuleLogRequest& request, const QueryDetailSceneRuleLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryDetailSceneRuleLogOutcomeCallable queryDetailSceneRuleLogCallable(const Model::QueryDetailSceneRuleLogRequest& request) const;
			QueryDeviceOutcome queryDevice(const Model::QueryDeviceRequest &request)const;
			void queryDeviceAsync(const Model::QueryDeviceRequest& request, const QueryDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryDeviceOutcomeCallable queryDeviceCallable(const Model::QueryDeviceRequest& request) const;
			QueryDeviceBySQLOutcome queryDeviceBySQL(const Model::QueryDeviceBySQLRequest &request)const;
			void queryDeviceBySQLAsync(const Model::QueryDeviceBySQLRequest& request, const QueryDeviceBySQLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryDeviceBySQLOutcomeCallable queryDeviceBySQLCallable(const Model::QueryDeviceBySQLRequest& request) const;
			QueryDeviceByStatusOutcome queryDeviceByStatus(const Model::QueryDeviceByStatusRequest &request)const;
			void queryDeviceByStatusAsync(const Model::QueryDeviceByStatusRequest& request, const QueryDeviceByStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryDeviceByStatusOutcomeCallable queryDeviceByStatusCallable(const Model::QueryDeviceByStatusRequest& request) const;
			QueryDeviceByTagsOutcome queryDeviceByTags(const Model::QueryDeviceByTagsRequest &request)const;
			void queryDeviceByTagsAsync(const Model::QueryDeviceByTagsRequest& request, const QueryDeviceByTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryDeviceByTagsOutcomeCallable queryDeviceByTagsCallable(const Model::QueryDeviceByTagsRequest& request) const;
			QueryDeviceCertOutcome queryDeviceCert(const Model::QueryDeviceCertRequest &request)const;
			void queryDeviceCertAsync(const Model::QueryDeviceCertRequest& request, const QueryDeviceCertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryDeviceCertOutcomeCallable queryDeviceCertCallable(const Model::QueryDeviceCertRequest& request) const;
			QueryDeviceDesiredPropertyOutcome queryDeviceDesiredProperty(const Model::QueryDeviceDesiredPropertyRequest &request)const;
			void queryDeviceDesiredPropertyAsync(const Model::QueryDeviceDesiredPropertyRequest& request, const QueryDeviceDesiredPropertyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryDeviceDesiredPropertyOutcomeCallable queryDeviceDesiredPropertyCallable(const Model::QueryDeviceDesiredPropertyRequest& request) const;
			QueryDeviceDetailOutcome queryDeviceDetail(const Model::QueryDeviceDetailRequest &request)const;
			void queryDeviceDetailAsync(const Model::QueryDeviceDetailRequest& request, const QueryDeviceDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryDeviceDetailOutcomeCallable queryDeviceDetailCallable(const Model::QueryDeviceDetailRequest& request) const;
			QueryDeviceDistributeDetailOutcome queryDeviceDistributeDetail(const Model::QueryDeviceDistributeDetailRequest &request)const;
			void queryDeviceDistributeDetailAsync(const Model::QueryDeviceDistributeDetailRequest& request, const QueryDeviceDistributeDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryDeviceDistributeDetailOutcomeCallable queryDeviceDistributeDetailCallable(const Model::QueryDeviceDistributeDetailRequest& request) const;
			QueryDeviceDistributeJobOutcome queryDeviceDistributeJob(const Model::QueryDeviceDistributeJobRequest &request)const;
			void queryDeviceDistributeJobAsync(const Model::QueryDeviceDistributeJobRequest& request, const QueryDeviceDistributeJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryDeviceDistributeJobOutcomeCallable queryDeviceDistributeJobCallable(const Model::QueryDeviceDistributeJobRequest& request) const;
			QueryDeviceEventDataOutcome queryDeviceEventData(const Model::QueryDeviceEventDataRequest &request)const;
			void queryDeviceEventDataAsync(const Model::QueryDeviceEventDataRequest& request, const QueryDeviceEventDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryDeviceEventDataOutcomeCallable queryDeviceEventDataCallable(const Model::QueryDeviceEventDataRequest& request) const;
			QueryDeviceFileOutcome queryDeviceFile(const Model::QueryDeviceFileRequest &request)const;
			void queryDeviceFileAsync(const Model::QueryDeviceFileRequest& request, const QueryDeviceFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryDeviceFileOutcomeCallable queryDeviceFileCallable(const Model::QueryDeviceFileRequest& request) const;
			QueryDeviceFileListOutcome queryDeviceFileList(const Model::QueryDeviceFileListRequest &request)const;
			void queryDeviceFileListAsync(const Model::QueryDeviceFileListRequest& request, const QueryDeviceFileListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryDeviceFileListOutcomeCallable queryDeviceFileListCallable(const Model::QueryDeviceFileListRequest& request) const;
			QueryDeviceGroupByDeviceOutcome queryDeviceGroupByDevice(const Model::QueryDeviceGroupByDeviceRequest &request)const;
			void queryDeviceGroupByDeviceAsync(const Model::QueryDeviceGroupByDeviceRequest& request, const QueryDeviceGroupByDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryDeviceGroupByDeviceOutcomeCallable queryDeviceGroupByDeviceCallable(const Model::QueryDeviceGroupByDeviceRequest& request) const;
			QueryDeviceGroupByTagsOutcome queryDeviceGroupByTags(const Model::QueryDeviceGroupByTagsRequest &request)const;
			void queryDeviceGroupByTagsAsync(const Model::QueryDeviceGroupByTagsRequest& request, const QueryDeviceGroupByTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryDeviceGroupByTagsOutcomeCallable queryDeviceGroupByTagsCallable(const Model::QueryDeviceGroupByTagsRequest& request) const;
			QueryDeviceGroupInfoOutcome queryDeviceGroupInfo(const Model::QueryDeviceGroupInfoRequest &request)const;
			void queryDeviceGroupInfoAsync(const Model::QueryDeviceGroupInfoRequest& request, const QueryDeviceGroupInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryDeviceGroupInfoOutcomeCallable queryDeviceGroupInfoCallable(const Model::QueryDeviceGroupInfoRequest& request) const;
			QueryDeviceGroupListOutcome queryDeviceGroupList(const Model::QueryDeviceGroupListRequest &request)const;
			void queryDeviceGroupListAsync(const Model::QueryDeviceGroupListRequest& request, const QueryDeviceGroupListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryDeviceGroupListOutcomeCallable queryDeviceGroupListCallable(const Model::QueryDeviceGroupListRequest& request) const;
			QueryDeviceGroupTagListOutcome queryDeviceGroupTagList(const Model::QueryDeviceGroupTagListRequest &request)const;
			void queryDeviceGroupTagListAsync(const Model::QueryDeviceGroupTagListRequest& request, const QueryDeviceGroupTagListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryDeviceGroupTagListOutcomeCallable queryDeviceGroupTagListCallable(const Model::QueryDeviceGroupTagListRequest& request) const;
			QueryDeviceInfoOutcome queryDeviceInfo(const Model::QueryDeviceInfoRequest &request)const;
			void queryDeviceInfoAsync(const Model::QueryDeviceInfoRequest& request, const QueryDeviceInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryDeviceInfoOutcomeCallable queryDeviceInfoCallable(const Model::QueryDeviceInfoRequest& request) const;
			QueryDeviceListByDeviceGroupOutcome queryDeviceListByDeviceGroup(const Model::QueryDeviceListByDeviceGroupRequest &request)const;
			void queryDeviceListByDeviceGroupAsync(const Model::QueryDeviceListByDeviceGroupRequest& request, const QueryDeviceListByDeviceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryDeviceListByDeviceGroupOutcomeCallable queryDeviceListByDeviceGroupCallable(const Model::QueryDeviceListByDeviceGroupRequest& request) const;
			QueryDeviceOriginalEventDataOutcome queryDeviceOriginalEventData(const Model::QueryDeviceOriginalEventDataRequest &request)const;
			void queryDeviceOriginalEventDataAsync(const Model::QueryDeviceOriginalEventDataRequest& request, const QueryDeviceOriginalEventDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryDeviceOriginalEventDataOutcomeCallable queryDeviceOriginalEventDataCallable(const Model::QueryDeviceOriginalEventDataRequest& request) const;
			QueryDeviceOriginalPropertyDataOutcome queryDeviceOriginalPropertyData(const Model::QueryDeviceOriginalPropertyDataRequest &request)const;
			void queryDeviceOriginalPropertyDataAsync(const Model::QueryDeviceOriginalPropertyDataRequest& request, const QueryDeviceOriginalPropertyDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryDeviceOriginalPropertyDataOutcomeCallable queryDeviceOriginalPropertyDataCallable(const Model::QueryDeviceOriginalPropertyDataRequest& request) const;
			QueryDeviceOriginalPropertyStatusOutcome queryDeviceOriginalPropertyStatus(const Model::QueryDeviceOriginalPropertyStatusRequest &request)const;
			void queryDeviceOriginalPropertyStatusAsync(const Model::QueryDeviceOriginalPropertyStatusRequest& request, const QueryDeviceOriginalPropertyStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryDeviceOriginalPropertyStatusOutcomeCallable queryDeviceOriginalPropertyStatusCallable(const Model::QueryDeviceOriginalPropertyStatusRequest& request) const;
			QueryDeviceOriginalServiceDataOutcome queryDeviceOriginalServiceData(const Model::QueryDeviceOriginalServiceDataRequest &request)const;
			void queryDeviceOriginalServiceDataAsync(const Model::QueryDeviceOriginalServiceDataRequest& request, const QueryDeviceOriginalServiceDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryDeviceOriginalServiceDataOutcomeCallable queryDeviceOriginalServiceDataCallable(const Model::QueryDeviceOriginalServiceDataRequest& request) const;
			QueryDevicePropOutcome queryDeviceProp(const Model::QueryDevicePropRequest &request)const;
			void queryDevicePropAsync(const Model::QueryDevicePropRequest& request, const QueryDevicePropAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryDevicePropOutcomeCallable queryDevicePropCallable(const Model::QueryDevicePropRequest& request) const;
			QueryDevicePropertiesDataOutcome queryDevicePropertiesData(const Model::QueryDevicePropertiesDataRequest &request)const;
			void queryDevicePropertiesDataAsync(const Model::QueryDevicePropertiesDataRequest& request, const QueryDevicePropertiesDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryDevicePropertiesDataOutcomeCallable queryDevicePropertiesDataCallable(const Model::QueryDevicePropertiesDataRequest& request) const;
			QueryDevicePropertyDataOutcome queryDevicePropertyData(const Model::QueryDevicePropertyDataRequest &request)const;
			void queryDevicePropertyDataAsync(const Model::QueryDevicePropertyDataRequest& request, const QueryDevicePropertyDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryDevicePropertyDataOutcomeCallable queryDevicePropertyDataCallable(const Model::QueryDevicePropertyDataRequest& request) const;
			QueryDevicePropertyStatusOutcome queryDevicePropertyStatus(const Model::QueryDevicePropertyStatusRequest &request)const;
			void queryDevicePropertyStatusAsync(const Model::QueryDevicePropertyStatusRequest& request, const QueryDevicePropertyStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryDevicePropertyStatusOutcomeCallable queryDevicePropertyStatusCallable(const Model::QueryDevicePropertyStatusRequest& request) const;
			QueryDeviceServiceDataOutcome queryDeviceServiceData(const Model::QueryDeviceServiceDataRequest &request)const;
			void queryDeviceServiceDataAsync(const Model::QueryDeviceServiceDataRequest& request, const QueryDeviceServiceDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryDeviceServiceDataOutcomeCallable queryDeviceServiceDataCallable(const Model::QueryDeviceServiceDataRequest& request) const;
			QueryDeviceSpeechOutcome queryDeviceSpeech(const Model::QueryDeviceSpeechRequest &request)const;
			void queryDeviceSpeechAsync(const Model::QueryDeviceSpeechRequest& request, const QueryDeviceSpeechAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryDeviceSpeechOutcomeCallable queryDeviceSpeechCallable(const Model::QueryDeviceSpeechRequest& request) const;
			QueryDeviceStatisticsOutcome queryDeviceStatistics(const Model::QueryDeviceStatisticsRequest &request)const;
			void queryDeviceStatisticsAsync(const Model::QueryDeviceStatisticsRequest& request, const QueryDeviceStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryDeviceStatisticsOutcomeCallable queryDeviceStatisticsCallable(const Model::QueryDeviceStatisticsRequest& request) const;
			QueryDeviceTunnelOutcome queryDeviceTunnel(const Model::QueryDeviceTunnelRequest &request)const;
			void queryDeviceTunnelAsync(const Model::QueryDeviceTunnelRequest& request, const QueryDeviceTunnelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryDeviceTunnelOutcomeCallable queryDeviceTunnelCallable(const Model::QueryDeviceTunnelRequest& request) const;
			QueryDynamicGroupDevicesOutcome queryDynamicGroupDevices(const Model::QueryDynamicGroupDevicesRequest &request)const;
			void queryDynamicGroupDevicesAsync(const Model::QueryDynamicGroupDevicesRequest& request, const QueryDynamicGroupDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryDynamicGroupDevicesOutcomeCallable queryDynamicGroupDevicesCallable(const Model::QueryDynamicGroupDevicesRequest& request) const;
			QueryEdgeDriverOutcome queryEdgeDriver(const Model::QueryEdgeDriverRequest &request)const;
			void queryEdgeDriverAsync(const Model::QueryEdgeDriverRequest& request, const QueryEdgeDriverAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryEdgeDriverOutcomeCallable queryEdgeDriverCallable(const Model::QueryEdgeDriverRequest& request) const;
			QueryEdgeDriverVersionOutcome queryEdgeDriverVersion(const Model::QueryEdgeDriverVersionRequest &request)const;
			void queryEdgeDriverVersionAsync(const Model::QueryEdgeDriverVersionRequest& request, const QueryEdgeDriverVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryEdgeDriverVersionOutcomeCallable queryEdgeDriverVersionCallable(const Model::QueryEdgeDriverVersionRequest& request) const;
			QueryEdgeInstanceOutcome queryEdgeInstance(const Model::QueryEdgeInstanceRequest &request)const;
			void queryEdgeInstanceAsync(const Model::QueryEdgeInstanceRequest& request, const QueryEdgeInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryEdgeInstanceOutcomeCallable queryEdgeInstanceCallable(const Model::QueryEdgeInstanceRequest& request) const;
			QueryEdgeInstanceChannelOutcome queryEdgeInstanceChannel(const Model::QueryEdgeInstanceChannelRequest &request)const;
			void queryEdgeInstanceChannelAsync(const Model::QueryEdgeInstanceChannelRequest& request, const QueryEdgeInstanceChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryEdgeInstanceChannelOutcomeCallable queryEdgeInstanceChannelCallable(const Model::QueryEdgeInstanceChannelRequest& request) const;
			QueryEdgeInstanceDeviceOutcome queryEdgeInstanceDevice(const Model::QueryEdgeInstanceDeviceRequest &request)const;
			void queryEdgeInstanceDeviceAsync(const Model::QueryEdgeInstanceDeviceRequest& request, const QueryEdgeInstanceDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryEdgeInstanceDeviceOutcomeCallable queryEdgeInstanceDeviceCallable(const Model::QueryEdgeInstanceDeviceRequest& request) const;
			QueryEdgeInstanceDeviceByDriverOutcome queryEdgeInstanceDeviceByDriver(const Model::QueryEdgeInstanceDeviceByDriverRequest &request)const;
			void queryEdgeInstanceDeviceByDriverAsync(const Model::QueryEdgeInstanceDeviceByDriverRequest& request, const QueryEdgeInstanceDeviceByDriverAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryEdgeInstanceDeviceByDriverOutcomeCallable queryEdgeInstanceDeviceByDriverCallable(const Model::QueryEdgeInstanceDeviceByDriverRequest& request) const;
			QueryEdgeInstanceDriverOutcome queryEdgeInstanceDriver(const Model::QueryEdgeInstanceDriverRequest &request)const;
			void queryEdgeInstanceDriverAsync(const Model::QueryEdgeInstanceDriverRequest& request, const QueryEdgeInstanceDriverAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryEdgeInstanceDriverOutcomeCallable queryEdgeInstanceDriverCallable(const Model::QueryEdgeInstanceDriverRequest& request) const;
			QueryEdgeInstanceGatewayOutcome queryEdgeInstanceGateway(const Model::QueryEdgeInstanceGatewayRequest &request)const;
			void queryEdgeInstanceGatewayAsync(const Model::QueryEdgeInstanceGatewayRequest& request, const QueryEdgeInstanceGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryEdgeInstanceGatewayOutcomeCallable queryEdgeInstanceGatewayCallable(const Model::QueryEdgeInstanceGatewayRequest& request) const;
			QueryEdgeInstanceHistoricDeploymentOutcome queryEdgeInstanceHistoricDeployment(const Model::QueryEdgeInstanceHistoricDeploymentRequest &request)const;
			void queryEdgeInstanceHistoricDeploymentAsync(const Model::QueryEdgeInstanceHistoricDeploymentRequest& request, const QueryEdgeInstanceHistoricDeploymentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryEdgeInstanceHistoricDeploymentOutcomeCallable queryEdgeInstanceHistoricDeploymentCallable(const Model::QueryEdgeInstanceHistoricDeploymentRequest& request) const;
			QueryEdgeInstanceMessageRoutingOutcome queryEdgeInstanceMessageRouting(const Model::QueryEdgeInstanceMessageRoutingRequest &request)const;
			void queryEdgeInstanceMessageRoutingAsync(const Model::QueryEdgeInstanceMessageRoutingRequest& request, const QueryEdgeInstanceMessageRoutingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryEdgeInstanceMessageRoutingOutcomeCallable queryEdgeInstanceMessageRoutingCallable(const Model::QueryEdgeInstanceMessageRoutingRequest& request) const;
			QueryEdgeInstanceSceneRuleOutcome queryEdgeInstanceSceneRule(const Model::QueryEdgeInstanceSceneRuleRequest &request)const;
			void queryEdgeInstanceSceneRuleAsync(const Model::QueryEdgeInstanceSceneRuleRequest& request, const QueryEdgeInstanceSceneRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryEdgeInstanceSceneRuleOutcomeCallable queryEdgeInstanceSceneRuleCallable(const Model::QueryEdgeInstanceSceneRuleRequest& request) const;
			QueryJobOutcome queryJob(const Model::QueryJobRequest &request)const;
			void queryJobAsync(const Model::QueryJobRequest& request, const QueryJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryJobOutcomeCallable queryJobCallable(const Model::QueryJobRequest& request) const;
			QueryJobStatisticsOutcome queryJobStatistics(const Model::QueryJobStatisticsRequest &request)const;
			void queryJobStatisticsAsync(const Model::QueryJobStatisticsRequest& request, const QueryJobStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryJobStatisticsOutcomeCallable queryJobStatisticsCallable(const Model::QueryJobStatisticsRequest& request) const;
			QueryLoRaJoinPermissionsOutcome queryLoRaJoinPermissions(const Model::QueryLoRaJoinPermissionsRequest &request)const;
			void queryLoRaJoinPermissionsAsync(const Model::QueryLoRaJoinPermissionsRequest& request, const QueryLoRaJoinPermissionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryLoRaJoinPermissionsOutcomeCallable queryLoRaJoinPermissionsCallable(const Model::QueryLoRaJoinPermissionsRequest& request) const;
			QueryMessageInfoOutcome queryMessageInfo(const Model::QueryMessageInfoRequest &request)const;
			void queryMessageInfoAsync(const Model::QueryMessageInfoRequest& request, const QueryMessageInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryMessageInfoOutcomeCallable queryMessageInfoCallable(const Model::QueryMessageInfoRequest& request) const;
			QueryOTAFirmwareOutcome queryOTAFirmware(const Model::QueryOTAFirmwareRequest &request)const;
			void queryOTAFirmwareAsync(const Model::QueryOTAFirmwareRequest& request, const QueryOTAFirmwareAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryOTAFirmwareOutcomeCallable queryOTAFirmwareCallable(const Model::QueryOTAFirmwareRequest& request) const;
			QueryOTAJobOutcome queryOTAJob(const Model::QueryOTAJobRequest &request)const;
			void queryOTAJobAsync(const Model::QueryOTAJobRequest& request, const QueryOTAJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryOTAJobOutcomeCallable queryOTAJobCallable(const Model::QueryOTAJobRequest& request) const;
			QueryPageByApplyIdOutcome queryPageByApplyId(const Model::QueryPageByApplyIdRequest &request)const;
			void queryPageByApplyIdAsync(const Model::QueryPageByApplyIdRequest& request, const QueryPageByApplyIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryPageByApplyIdOutcomeCallable queryPageByApplyIdCallable(const Model::QueryPageByApplyIdRequest& request) const;
			QueryProductOutcome queryProduct(const Model::QueryProductRequest &request)const;
			void queryProductAsync(const Model::QueryProductRequest& request, const QueryProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryProductOutcomeCallable queryProductCallable(const Model::QueryProductRequest& request) const;
			QueryProductCertInfoOutcome queryProductCertInfo(const Model::QueryProductCertInfoRequest &request)const;
			void queryProductCertInfoAsync(const Model::QueryProductCertInfoRequest& request, const QueryProductCertInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryProductCertInfoOutcomeCallable queryProductCertInfoCallable(const Model::QueryProductCertInfoRequest& request) const;
			QueryProductListOutcome queryProductList(const Model::QueryProductListRequest &request)const;
			void queryProductListAsync(const Model::QueryProductListRequest& request, const QueryProductListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryProductListOutcomeCallable queryProductListCallable(const Model::QueryProductListRequest& request) const;
			QueryProductTopicOutcome queryProductTopic(const Model::QueryProductTopicRequest &request)const;
			void queryProductTopicAsync(const Model::QueryProductTopicRequest& request, const QueryProductTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryProductTopicOutcomeCallable queryProductTopicCallable(const Model::QueryProductTopicRequest& request) const;
			QuerySceneRuleOutcome querySceneRule(const Model::QuerySceneRuleRequest &request)const;
			void querySceneRuleAsync(const Model::QuerySceneRuleRequest& request, const QuerySceneRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QuerySceneRuleOutcomeCallable querySceneRuleCallable(const Model::QuerySceneRuleRequest& request) const;
			QuerySolutionDeviceGroupPageOutcome querySolutionDeviceGroupPage(const Model::QuerySolutionDeviceGroupPageRequest &request)const;
			void querySolutionDeviceGroupPageAsync(const Model::QuerySolutionDeviceGroupPageRequest& request, const QuerySolutionDeviceGroupPageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QuerySolutionDeviceGroupPageOutcomeCallable querySolutionDeviceGroupPageCallable(const Model::QuerySolutionDeviceGroupPageRequest& request) const;
			QuerySoundCodeListOutcome querySoundCodeList(const Model::QuerySoundCodeListRequest &request)const;
			void querySoundCodeListAsync(const Model::QuerySoundCodeListRequest& request, const QuerySoundCodeListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QuerySoundCodeListOutcomeCallable querySoundCodeListCallable(const Model::QuerySoundCodeListRequest& request) const;
			QuerySpeechOutcome querySpeech(const Model::QuerySpeechRequest &request)const;
			void querySpeechAsync(const Model::QuerySpeechRequest& request, const QuerySpeechAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QuerySpeechOutcomeCallable querySpeechCallable(const Model::QuerySpeechRequest& request) const;
			QuerySpeechDeviceOutcome querySpeechDevice(const Model::QuerySpeechDeviceRequest &request)const;
			void querySpeechDeviceAsync(const Model::QuerySpeechDeviceRequest& request, const QuerySpeechDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QuerySpeechDeviceOutcomeCallable querySpeechDeviceCallable(const Model::QuerySpeechDeviceRequest& request) const;
			QuerySpeechListOutcome querySpeechList(const Model::QuerySpeechListRequest &request)const;
			void querySpeechListAsync(const Model::QuerySpeechListRequest& request, const QuerySpeechListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QuerySpeechListOutcomeCallable querySpeechListCallable(const Model::QuerySpeechListRequest& request) const;
			QuerySpeechPushJobOutcome querySpeechPushJob(const Model::QuerySpeechPushJobRequest &request)const;
			void querySpeechPushJobAsync(const Model::QuerySpeechPushJobRequest& request, const QuerySpeechPushJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QuerySpeechPushJobOutcomeCallable querySpeechPushJobCallable(const Model::QuerySpeechPushJobRequest& request) const;
			QuerySpeechPushJobDeviceOutcome querySpeechPushJobDevice(const Model::QuerySpeechPushJobDeviceRequest &request)const;
			void querySpeechPushJobDeviceAsync(const Model::QuerySpeechPushJobDeviceRequest& request, const QuerySpeechPushJobDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QuerySpeechPushJobDeviceOutcomeCallable querySpeechPushJobDeviceCallable(const Model::QuerySpeechPushJobDeviceRequest& request) const;
			QuerySpeechPushJobSpeechOutcome querySpeechPushJobSpeech(const Model::QuerySpeechPushJobSpeechRequest &request)const;
			void querySpeechPushJobSpeechAsync(const Model::QuerySpeechPushJobSpeechRequest& request, const QuerySpeechPushJobSpeechAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QuerySpeechPushJobSpeechOutcomeCallable querySpeechPushJobSpeechCallable(const Model::QuerySpeechPushJobSpeechRequest& request) const;
			QueryStudioAppDomainListOpenOutcome queryStudioAppDomainListOpen(const Model::QueryStudioAppDomainListOpenRequest &request)const;
			void queryStudioAppDomainListOpenAsync(const Model::QueryStudioAppDomainListOpenRequest& request, const QueryStudioAppDomainListOpenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryStudioAppDomainListOpenOutcomeCallable queryStudioAppDomainListOpenCallable(const Model::QueryStudioAppDomainListOpenRequest& request) const;
			QueryStudioAppListOutcome queryStudioAppList(const Model::QueryStudioAppListRequest &request)const;
			void queryStudioAppListAsync(const Model::QueryStudioAppListRequest& request, const QueryStudioAppListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryStudioAppListOutcomeCallable queryStudioAppListCallable(const Model::QueryStudioAppListRequest& request) const;
			QueryStudioAppPageListOpenOutcome queryStudioAppPageListOpen(const Model::QueryStudioAppPageListOpenRequest &request)const;
			void queryStudioAppPageListOpenAsync(const Model::QueryStudioAppPageListOpenRequest& request, const QueryStudioAppPageListOpenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryStudioAppPageListOpenOutcomeCallable queryStudioAppPageListOpenCallable(const Model::QueryStudioAppPageListOpenRequest& request) const;
			QueryStudioProjectListOutcome queryStudioProjectList(const Model::QueryStudioProjectListRequest &request)const;
			void queryStudioProjectListAsync(const Model::QueryStudioProjectListRequest& request, const QueryStudioProjectListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryStudioProjectListOutcomeCallable queryStudioProjectListCallable(const Model::QueryStudioProjectListRequest& request) const;
			QuerySubscribeRelationOutcome querySubscribeRelation(const Model::QuerySubscribeRelationRequest &request)const;
			void querySubscribeRelationAsync(const Model::QuerySubscribeRelationRequest& request, const QuerySubscribeRelationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QuerySubscribeRelationOutcomeCallable querySubscribeRelationCallable(const Model::QuerySubscribeRelationRequest& request) const;
			QuerySummarySceneRuleLogOutcome querySummarySceneRuleLog(const Model::QuerySummarySceneRuleLogRequest &request)const;
			void querySummarySceneRuleLogAsync(const Model::QuerySummarySceneRuleLogRequest& request, const QuerySummarySceneRuleLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QuerySummarySceneRuleLogOutcomeCallable querySummarySceneRuleLogCallable(const Model::QuerySummarySceneRuleLogRequest& request) const;
			QuerySuperDeviceGroupOutcome querySuperDeviceGroup(const Model::QuerySuperDeviceGroupRequest &request)const;
			void querySuperDeviceGroupAsync(const Model::QuerySuperDeviceGroupRequest& request, const QuerySuperDeviceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QuerySuperDeviceGroupOutcomeCallable querySuperDeviceGroupCallable(const Model::QuerySuperDeviceGroupRequest& request) const;
			QueryTaskOutcome queryTask(const Model::QueryTaskRequest &request)const;
			void queryTaskAsync(const Model::QueryTaskRequest& request, const QueryTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryTaskOutcomeCallable queryTaskCallable(const Model::QueryTaskRequest& request) const;
			QueryThingModelOutcome queryThingModel(const Model::QueryThingModelRequest &request)const;
			void queryThingModelAsync(const Model::QueryThingModelRequest& request, const QueryThingModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryThingModelOutcomeCallable queryThingModelCallable(const Model::QueryThingModelRequest& request) const;
			QueryThingModelExtendConfigOutcome queryThingModelExtendConfig(const Model::QueryThingModelExtendConfigRequest &request)const;
			void queryThingModelExtendConfigAsync(const Model::QueryThingModelExtendConfigRequest& request, const QueryThingModelExtendConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryThingModelExtendConfigOutcomeCallable queryThingModelExtendConfigCallable(const Model::QueryThingModelExtendConfigRequest& request) const;
			QueryThingModelExtendConfigPublishedOutcome queryThingModelExtendConfigPublished(const Model::QueryThingModelExtendConfigPublishedRequest &request)const;
			void queryThingModelExtendConfigPublishedAsync(const Model::QueryThingModelExtendConfigPublishedRequest& request, const QueryThingModelExtendConfigPublishedAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryThingModelExtendConfigPublishedOutcomeCallable queryThingModelExtendConfigPublishedCallable(const Model::QueryThingModelExtendConfigPublishedRequest& request) const;
			QueryThingModelPublishedOutcome queryThingModelPublished(const Model::QueryThingModelPublishedRequest &request)const;
			void queryThingModelPublishedAsync(const Model::QueryThingModelPublishedRequest& request, const QueryThingModelPublishedAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryThingModelPublishedOutcomeCallable queryThingModelPublishedCallable(const Model::QueryThingModelPublishedRequest& request) const;
			QueryTopicReverseRouteTableOutcome queryTopicReverseRouteTable(const Model::QueryTopicReverseRouteTableRequest &request)const;
			void queryTopicReverseRouteTableAsync(const Model::QueryTopicReverseRouteTableRequest& request, const QueryTopicReverseRouteTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryTopicReverseRouteTableOutcomeCallable queryTopicReverseRouteTableCallable(const Model::QueryTopicReverseRouteTableRequest& request) const;
			QueryTopicRouteTableOutcome queryTopicRouteTable(const Model::QueryTopicRouteTableRequest &request)const;
			void queryTopicRouteTableAsync(const Model::QueryTopicRouteTableRequest& request, const QueryTopicRouteTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryTopicRouteTableOutcomeCallable queryTopicRouteTableCallable(const Model::QueryTopicRouteTableRequest& request) const;
			RRpcOutcome rRpc(const Model::RRpcRequest &request)const;
			void rRpcAsync(const Model::RRpcRequest& request, const RRpcAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RRpcOutcomeCallable rRpcCallable(const Model::RRpcRequest& request) const;
			RecognizeCarNumOutcome recognizeCarNum(const Model::RecognizeCarNumRequest &request)const;
			void recognizeCarNumAsync(const Model::RecognizeCarNumRequest& request, const RecognizeCarNumAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RecognizeCarNumOutcomeCallable recognizeCarNumCallable(const Model::RecognizeCarNumRequest& request) const;
			RecognizePictureGeneralOutcome recognizePictureGeneral(const Model::RecognizePictureGeneralRequest &request)const;
			void recognizePictureGeneralAsync(const Model::RecognizePictureGeneralRequest& request, const RecognizePictureGeneralAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RecognizePictureGeneralOutcomeCallable recognizePictureGeneralCallable(const Model::RecognizePictureGeneralRequest& request) const;
			RefreshDeviceTunnelSharePasswordOutcome refreshDeviceTunnelSharePassword(const Model::RefreshDeviceTunnelSharePasswordRequest &request)const;
			void refreshDeviceTunnelSharePasswordAsync(const Model::RefreshDeviceTunnelSharePasswordRequest& request, const RefreshDeviceTunnelSharePasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RefreshDeviceTunnelSharePasswordOutcomeCallable refreshDeviceTunnelSharePasswordCallable(const Model::RefreshDeviceTunnelSharePasswordRequest& request) const;
			RefreshStudioAppTokenOpenOutcome refreshStudioAppTokenOpen(const Model::RefreshStudioAppTokenOpenRequest &request)const;
			void refreshStudioAppTokenOpenAsync(const Model::RefreshStudioAppTokenOpenRequest& request, const RefreshStudioAppTokenOpenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RefreshStudioAppTokenOpenOutcomeCallable refreshStudioAppTokenOpenCallable(const Model::RefreshStudioAppTokenOpenRequest& request) const;
			RegisterDeviceOutcome registerDevice(const Model::RegisterDeviceRequest &request)const;
			void registerDeviceAsync(const Model::RegisterDeviceRequest& request, const RegisterDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RegisterDeviceOutcomeCallable registerDeviceCallable(const Model::RegisterDeviceRequest& request) const;
			ReleaseEdgeDriverVersionOutcome releaseEdgeDriverVersion(const Model::ReleaseEdgeDriverVersionRequest &request)const;
			void releaseEdgeDriverVersionAsync(const Model::ReleaseEdgeDriverVersionRequest& request, const ReleaseEdgeDriverVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ReleaseEdgeDriverVersionOutcomeCallable releaseEdgeDriverVersionCallable(const Model::ReleaseEdgeDriverVersionRequest& request) const;
			ReleaseProductOutcome releaseProduct(const Model::ReleaseProductRequest &request)const;
			void releaseProductAsync(const Model::ReleaseProductRequest& request, const ReleaseProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ReleaseProductOutcomeCallable releaseProductCallable(const Model::ReleaseProductRequest& request) const;
			RemoveThingTopoOutcome removeThingTopo(const Model::RemoveThingTopoRequest &request)const;
			void removeThingTopoAsync(const Model::RemoveThingTopoRequest& request, const RemoveThingTopoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RemoveThingTopoOutcomeCallable removeThingTopoCallable(const Model::RemoveThingTopoRequest& request) const;
			ReplaceEdgeInstanceGatewayOutcome replaceEdgeInstanceGateway(const Model::ReplaceEdgeInstanceGatewayRequest &request)const;
			void replaceEdgeInstanceGatewayAsync(const Model::ReplaceEdgeInstanceGatewayRequest& request, const ReplaceEdgeInstanceGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ReplaceEdgeInstanceGatewayOutcomeCallable replaceEdgeInstanceGatewayCallable(const Model::ReplaceEdgeInstanceGatewayRequest& request) const;
			RerunJobOutcome rerunJob(const Model::RerunJobRequest &request)const;
			void rerunJobAsync(const Model::RerunJobRequest& request, const RerunJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RerunJobOutcomeCallable rerunJobCallable(const Model::RerunJobRequest& request) const;
			ResetConsumerGroupPositionOutcome resetConsumerGroupPosition(const Model::ResetConsumerGroupPositionRequest &request)const;
			void resetConsumerGroupPositionAsync(const Model::ResetConsumerGroupPositionRequest& request, const ResetConsumerGroupPositionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ResetConsumerGroupPositionOutcomeCallable resetConsumerGroupPositionCallable(const Model::ResetConsumerGroupPositionRequest& request) const;
			ResetThingOutcome resetThing(const Model::ResetThingRequest &request)const;
			void resetThingAsync(const Model::ResetThingRequest& request, const ResetThingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ResetThingOutcomeCallable resetThingCallable(const Model::ResetThingRequest& request) const;
			ReupgradeOTATaskOutcome reupgradeOTATask(const Model::ReupgradeOTATaskRequest &request)const;
			void reupgradeOTATaskAsync(const Model::ReupgradeOTATaskRequest& request, const ReupgradeOTATaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ReupgradeOTATaskOutcomeCallable reupgradeOTATaskCallable(const Model::ReupgradeOTATaskRequest& request) const;
			SaveDevicePropOutcome saveDeviceProp(const Model::SaveDevicePropRequest &request)const;
			void saveDevicePropAsync(const Model::SaveDevicePropRequest& request, const SaveDevicePropAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SaveDevicePropOutcomeCallable saveDevicePropCallable(const Model::SaveDevicePropRequest& request) const;
			SetDeviceDesiredPropertyOutcome setDeviceDesiredProperty(const Model::SetDeviceDesiredPropertyRequest &request)const;
			void setDeviceDesiredPropertyAsync(const Model::SetDeviceDesiredPropertyRequest& request, const SetDeviceDesiredPropertyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetDeviceDesiredPropertyOutcomeCallable setDeviceDesiredPropertyCallable(const Model::SetDeviceDesiredPropertyRequest& request) const;
			SetDeviceGroupTagsOutcome setDeviceGroupTags(const Model::SetDeviceGroupTagsRequest &request)const;
			void setDeviceGroupTagsAsync(const Model::SetDeviceGroupTagsRequest& request, const SetDeviceGroupTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetDeviceGroupTagsOutcomeCallable setDeviceGroupTagsCallable(const Model::SetDeviceGroupTagsRequest& request) const;
			SetDevicePropertyOutcome setDeviceProperty(const Model::SetDevicePropertyRequest &request)const;
			void setDevicePropertyAsync(const Model::SetDevicePropertyRequest& request, const SetDevicePropertyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetDevicePropertyOutcomeCallable setDevicePropertyCallable(const Model::SetDevicePropertyRequest& request) const;
			SetDevicesPropertyOutcome setDevicesProperty(const Model::SetDevicesPropertyRequest &request)const;
			void setDevicesPropertyAsync(const Model::SetDevicesPropertyRequest& request, const SetDevicesPropertyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetDevicesPropertyOutcomeCallable setDevicesPropertyCallable(const Model::SetDevicesPropertyRequest& request) const;
			SetEdgeInstanceDriverConfigsOutcome setEdgeInstanceDriverConfigs(const Model::SetEdgeInstanceDriverConfigsRequest &request)const;
			void setEdgeInstanceDriverConfigsAsync(const Model::SetEdgeInstanceDriverConfigsRequest& request, const SetEdgeInstanceDriverConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetEdgeInstanceDriverConfigsOutcomeCallable setEdgeInstanceDriverConfigsCallable(const Model::SetEdgeInstanceDriverConfigsRequest& request) const;
			SetProductCertInfoOutcome setProductCertInfo(const Model::SetProductCertInfoRequest &request)const;
			void setProductCertInfoAsync(const Model::SetProductCertInfoRequest& request, const SetProductCertInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetProductCertInfoOutcomeCallable setProductCertInfoCallable(const Model::SetProductCertInfoRequest& request) const;
			SetStudioProjectCooperationOutcome setStudioProjectCooperation(const Model::SetStudioProjectCooperationRequest &request)const;
			void setStudioProjectCooperationAsync(const Model::SetStudioProjectCooperationRequest& request, const SetStudioProjectCooperationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetStudioProjectCooperationOutcomeCallable setStudioProjectCooperationCallable(const Model::SetStudioProjectCooperationRequest& request) const;
			SetupStudioAppAuthModeOpenOutcome setupStudioAppAuthModeOpen(const Model::SetupStudioAppAuthModeOpenRequest &request)const;
			void setupStudioAppAuthModeOpenAsync(const Model::SetupStudioAppAuthModeOpenRequest& request, const SetupStudioAppAuthModeOpenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetupStudioAppAuthModeOpenOutcomeCallable setupStudioAppAuthModeOpenCallable(const Model::SetupStudioAppAuthModeOpenRequest& request) const;
			SpeechByCombinationOutcome speechByCombination(const Model::SpeechByCombinationRequest &request)const;
			void speechByCombinationAsync(const Model::SpeechByCombinationRequest& request, const SpeechByCombinationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SpeechByCombinationOutcomeCallable speechByCombinationCallable(const Model::SpeechByCombinationRequest& request) const;
			SpeechBySynthesisOutcome speechBySynthesis(const Model::SpeechBySynthesisRequest &request)const;
			void speechBySynthesisAsync(const Model::SpeechBySynthesisRequest& request, const SpeechBySynthesisAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SpeechBySynthesisOutcomeCallable speechBySynthesisCallable(const Model::SpeechBySynthesisRequest& request) const;
			StartRuleOutcome startRule(const Model::StartRuleRequest &request)const;
			void startRuleAsync(const Model::StartRuleRequest& request, const StartRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StartRuleOutcomeCallable startRuleCallable(const Model::StartRuleRequest& request) const;
			StopRuleOutcome stopRule(const Model::StopRuleRequest &request)const;
			void stopRuleAsync(const Model::StopRuleRequest& request, const StopRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StopRuleOutcomeCallable stopRuleCallable(const Model::StopRuleRequest& request) const;
			SubscribeTopicOutcome subscribeTopic(const Model::SubscribeTopicRequest &request)const;
			void subscribeTopicAsync(const Model::SubscribeTopicRequest& request, const SubscribeTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubscribeTopicOutcomeCallable subscribeTopicCallable(const Model::SubscribeTopicRequest& request) const;
			SyncSpeechByCombinationOutcome syncSpeechByCombination(const Model::SyncSpeechByCombinationRequest &request)const;
			void syncSpeechByCombinationAsync(const Model::SyncSpeechByCombinationRequest& request, const SyncSpeechByCombinationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SyncSpeechByCombinationOutcomeCallable syncSpeechByCombinationCallable(const Model::SyncSpeechByCombinationRequest& request) const;
			TestSpeechOutcome testSpeech(const Model::TestSpeechRequest &request)const;
			void testSpeechAsync(const Model::TestSpeechRequest& request, const TestSpeechAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TestSpeechOutcomeCallable testSpeechCallable(const Model::TestSpeechRequest& request) const;
			TransformClientIdOutcome transformClientId(const Model::TransformClientIdRequest &request)const;
			void transformClientIdAsync(const Model::TransformClientIdRequest& request, const TransformClientIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TransformClientIdOutcomeCallable transformClientIdCallable(const Model::TransformClientIdRequest& request) const;
			TriggerSceneRuleOutcome triggerSceneRule(const Model::TriggerSceneRuleRequest &request)const;
			void triggerSceneRuleAsync(const Model::TriggerSceneRuleRequest& request, const TriggerSceneRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TriggerSceneRuleOutcomeCallable triggerSceneRuleCallable(const Model::TriggerSceneRuleRequest& request) const;
			UnbindApplicationFromEdgeInstanceOutcome unbindApplicationFromEdgeInstance(const Model::UnbindApplicationFromEdgeInstanceRequest &request)const;
			void unbindApplicationFromEdgeInstanceAsync(const Model::UnbindApplicationFromEdgeInstanceRequest& request, const UnbindApplicationFromEdgeInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UnbindApplicationFromEdgeInstanceOutcomeCallable unbindApplicationFromEdgeInstanceCallable(const Model::UnbindApplicationFromEdgeInstanceRequest& request) const;
			UnbindDriverFromEdgeInstanceOutcome unbindDriverFromEdgeInstance(const Model::UnbindDriverFromEdgeInstanceRequest &request)const;
			void unbindDriverFromEdgeInstanceAsync(const Model::UnbindDriverFromEdgeInstanceRequest& request, const UnbindDriverFromEdgeInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UnbindDriverFromEdgeInstanceOutcomeCallable unbindDriverFromEdgeInstanceCallable(const Model::UnbindDriverFromEdgeInstanceRequest& request) const;
			UnbindRoleFromEdgeInstanceOutcome unbindRoleFromEdgeInstance(const Model::UnbindRoleFromEdgeInstanceRequest &request)const;
			void unbindRoleFromEdgeInstanceAsync(const Model::UnbindRoleFromEdgeInstanceRequest& request, const UnbindRoleFromEdgeInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UnbindRoleFromEdgeInstanceOutcomeCallable unbindRoleFromEdgeInstanceCallable(const Model::UnbindRoleFromEdgeInstanceRequest& request) const;
			UnbindSceneRuleFromEdgeInstanceOutcome unbindSceneRuleFromEdgeInstance(const Model::UnbindSceneRuleFromEdgeInstanceRequest &request)const;
			void unbindSceneRuleFromEdgeInstanceAsync(const Model::UnbindSceneRuleFromEdgeInstanceRequest& request, const UnbindSceneRuleFromEdgeInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UnbindSceneRuleFromEdgeInstanceOutcomeCallable unbindSceneRuleFromEdgeInstanceCallable(const Model::UnbindSceneRuleFromEdgeInstanceRequest& request) const;
			UpdateConsumerGroupOutcome updateConsumerGroup(const Model::UpdateConsumerGroupRequest &request)const;
			void updateConsumerGroupAsync(const Model::UpdateConsumerGroupRequest& request, const UpdateConsumerGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateConsumerGroupOutcomeCallable updateConsumerGroupCallable(const Model::UpdateConsumerGroupRequest& request) const;
			UpdateDeviceGroupOutcome updateDeviceGroup(const Model::UpdateDeviceGroupRequest &request)const;
			void updateDeviceGroupAsync(const Model::UpdateDeviceGroupRequest& request, const UpdateDeviceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateDeviceGroupOutcomeCallable updateDeviceGroupCallable(const Model::UpdateDeviceGroupRequest& request) const;
			UpdateDeviceShadowOutcome updateDeviceShadow(const Model::UpdateDeviceShadowRequest &request)const;
			void updateDeviceShadowAsync(const Model::UpdateDeviceShadowRequest& request, const UpdateDeviceShadowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateDeviceShadowOutcomeCallable updateDeviceShadowCallable(const Model::UpdateDeviceShadowRequest& request) const;
			UpdateEdgeDriverVersionOutcome updateEdgeDriverVersion(const Model::UpdateEdgeDriverVersionRequest &request)const;
			void updateEdgeDriverVersionAsync(const Model::UpdateEdgeDriverVersionRequest& request, const UpdateEdgeDriverVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateEdgeDriverVersionOutcomeCallable updateEdgeDriverVersionCallable(const Model::UpdateEdgeDriverVersionRequest& request) const;
			UpdateEdgeInstanceOutcome updateEdgeInstance(const Model::UpdateEdgeInstanceRequest &request)const;
			void updateEdgeInstanceAsync(const Model::UpdateEdgeInstanceRequest& request, const UpdateEdgeInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateEdgeInstanceOutcomeCallable updateEdgeInstanceCallable(const Model::UpdateEdgeInstanceRequest& request) const;
			UpdateEdgeInstanceChannelOutcome updateEdgeInstanceChannel(const Model::UpdateEdgeInstanceChannelRequest &request)const;
			void updateEdgeInstanceChannelAsync(const Model::UpdateEdgeInstanceChannelRequest& request, const UpdateEdgeInstanceChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateEdgeInstanceChannelOutcomeCallable updateEdgeInstanceChannelCallable(const Model::UpdateEdgeInstanceChannelRequest& request) const;
			UpdateEdgeInstanceMessageRoutingOutcome updateEdgeInstanceMessageRouting(const Model::UpdateEdgeInstanceMessageRoutingRequest &request)const;
			void updateEdgeInstanceMessageRoutingAsync(const Model::UpdateEdgeInstanceMessageRoutingRequest& request, const UpdateEdgeInstanceMessageRoutingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateEdgeInstanceMessageRoutingOutcomeCallable updateEdgeInstanceMessageRoutingCallable(const Model::UpdateEdgeInstanceMessageRoutingRequest& request) const;
			UpdateJobOutcome updateJob(const Model::UpdateJobRequest &request)const;
			void updateJobAsync(const Model::UpdateJobRequest& request, const UpdateJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateJobOutcomeCallable updateJobCallable(const Model::UpdateJobRequest& request) const;
			UpdateOTAModuleOutcome updateOTAModule(const Model::UpdateOTAModuleRequest &request)const;
			void updateOTAModuleAsync(const Model::UpdateOTAModuleRequest& request, const UpdateOTAModuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateOTAModuleOutcomeCallable updateOTAModuleCallable(const Model::UpdateOTAModuleRequest& request) const;
			UpdateProductOutcome updateProduct(const Model::UpdateProductRequest &request)const;
			void updateProductAsync(const Model::UpdateProductRequest& request, const UpdateProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateProductOutcomeCallable updateProductCallable(const Model::UpdateProductRequest& request) const;
			UpdateProductFilterConfigOutcome updateProductFilterConfig(const Model::UpdateProductFilterConfigRequest &request)const;
			void updateProductFilterConfigAsync(const Model::UpdateProductFilterConfigRequest& request, const UpdateProductFilterConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateProductFilterConfigOutcomeCallable updateProductFilterConfigCallable(const Model::UpdateProductFilterConfigRequest& request) const;
			UpdateProductTagsOutcome updateProductTags(const Model::UpdateProductTagsRequest &request)const;
			void updateProductTagsAsync(const Model::UpdateProductTagsRequest& request, const UpdateProductTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateProductTagsOutcomeCallable updateProductTagsCallable(const Model::UpdateProductTagsRequest& request) const;
			UpdateProductTopicOutcome updateProductTopic(const Model::UpdateProductTopicRequest &request)const;
			void updateProductTopicAsync(const Model::UpdateProductTopicRequest& request, const UpdateProductTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateProductTopicOutcomeCallable updateProductTopicCallable(const Model::UpdateProductTopicRequest& request) const;
			UpdateRuleOutcome updateRule(const Model::UpdateRuleRequest &request)const;
			void updateRuleAsync(const Model::UpdateRuleRequest& request, const UpdateRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateRuleOutcomeCallable updateRuleCallable(const Model::UpdateRuleRequest& request) const;
			UpdateRuleActionOutcome updateRuleAction(const Model::UpdateRuleActionRequest &request)const;
			void updateRuleActionAsync(const Model::UpdateRuleActionRequest& request, const UpdateRuleActionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateRuleActionOutcomeCallable updateRuleActionCallable(const Model::UpdateRuleActionRequest& request) const;
			UpdateSceneRuleOutcome updateSceneRule(const Model::UpdateSceneRuleRequest &request)const;
			void updateSceneRuleAsync(const Model::UpdateSceneRuleRequest& request, const UpdateSceneRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateSceneRuleOutcomeCallable updateSceneRuleCallable(const Model::UpdateSceneRuleRequest& request) const;
			UpdateSpeechOutcome updateSpeech(const Model::UpdateSpeechRequest &request)const;
			void updateSpeechAsync(const Model::UpdateSpeechRequest& request, const UpdateSpeechAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateSpeechOutcomeCallable updateSpeechCallable(const Model::UpdateSpeechRequest& request) const;
			UpdateSubscribeRelationOutcome updateSubscribeRelation(const Model::UpdateSubscribeRelationRequest &request)const;
			void updateSubscribeRelationAsync(const Model::UpdateSubscribeRelationRequest& request, const UpdateSubscribeRelationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateSubscribeRelationOutcomeCallable updateSubscribeRelationCallable(const Model::UpdateSubscribeRelationRequest& request) const;
			UpdateThingModelOutcome updateThingModel(const Model::UpdateThingModelRequest &request)const;
			void updateThingModelAsync(const Model::UpdateThingModelRequest& request, const UpdateThingModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateThingModelOutcomeCallable updateThingModelCallable(const Model::UpdateThingModelRequest& request) const;
			UpdateThingScriptOutcome updateThingScript(const Model::UpdateThingScriptRequest &request)const;
			void updateThingScriptAsync(const Model::UpdateThingScriptRequest& request, const UpdateThingScriptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateThingScriptOutcomeCallable updateThingScriptCallable(const Model::UpdateThingScriptRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_IOT_IOTCLIENT_H_
