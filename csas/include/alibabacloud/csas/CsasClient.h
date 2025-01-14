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

#ifndef ALIBABACLOUD_CSAS_CSASCLIENT_H_
#define ALIBABACLOUD_CSAS_CSASCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "CsasExport.h"
#include "model/AttachApplication2ConnectorRequest.h"
#include "model/AttachApplication2ConnectorResult.h"
#include "model/AttachPolicy2ApprovalProcessRequest.h"
#include "model/AttachPolicy2ApprovalProcessResult.h"
#include "model/CreateApprovalProcessRequest.h"
#include "model/CreateApprovalProcessResult.h"
#include "model/CreateClientUserRequest.h"
#include "model/CreateClientUserResult.h"
#include "model/CreateDynamicRouteRequest.h"
#include "model/CreateDynamicRouteResult.h"
#include "model/CreateIdpDepartmentRequest.h"
#include "model/CreateIdpDepartmentResult.h"
#include "model/CreatePrivateAccessApplicationRequest.h"
#include "model/CreatePrivateAccessApplicationResult.h"
#include "model/CreatePrivateAccessPolicyRequest.h"
#include "model/CreatePrivateAccessPolicyResult.h"
#include "model/CreatePrivateAccessTagRequest.h"
#include "model/CreatePrivateAccessTagResult.h"
#include "model/CreateRegistrationPolicyRequest.h"
#include "model/CreateRegistrationPolicyResult.h"
#include "model/CreateUserGroupRequest.h"
#include "model/CreateUserGroupResult.h"
#include "model/CreateWmBaseImageRequest.h"
#include "model/CreateWmBaseImageResult.h"
#include "model/CreateWmEmbedTaskRequest.h"
#include "model/CreateWmEmbedTaskResult.h"
#include "model/CreateWmExtractTaskRequest.h"
#include "model/CreateWmExtractTaskResult.h"
#include "model/CreateWmInfoMappingRequest.h"
#include "model/CreateWmInfoMappingResult.h"
#include "model/DeleteApprovalProcessesRequest.h"
#include "model/DeleteApprovalProcessesResult.h"
#include "model/DeleteClientUserRequest.h"
#include "model/DeleteClientUserResult.h"
#include "model/DeleteDynamicRouteRequest.h"
#include "model/DeleteDynamicRouteResult.h"
#include "model/DeleteIdpDepartmentRequest.h"
#include "model/DeleteIdpDepartmentResult.h"
#include "model/DeletePrivateAccessApplicationRequest.h"
#include "model/DeletePrivateAccessApplicationResult.h"
#include "model/DeletePrivateAccessPolicyRequest.h"
#include "model/DeletePrivateAccessPolicyResult.h"
#include "model/DeletePrivateAccessTagRequest.h"
#include "model/DeletePrivateAccessTagResult.h"
#include "model/DeleteRegistrationPoliciesRequest.h"
#include "model/DeleteRegistrationPoliciesResult.h"
#include "model/DeleteUserDevicesRequest.h"
#include "model/DeleteUserDevicesResult.h"
#include "model/DeleteUserGroupRequest.h"
#include "model/DeleteUserGroupResult.h"
#include "model/DetachApplication2ConnectorRequest.h"
#include "model/DetachApplication2ConnectorResult.h"
#include "model/DetachPolicy2ApprovalProcessRequest.h"
#include "model/DetachPolicy2ApprovalProcessResult.h"
#include "model/ExportUserDevicesRequest.h"
#include "model/ExportUserDevicesResult.h"
#include "model/GetActiveIdpConfigRequest.h"
#include "model/GetActiveIdpConfigResult.h"
#include "model/GetApprovalRequest.h"
#include "model/GetApprovalResult.h"
#include "model/GetApprovalProcessRequest.h"
#include "model/GetApprovalProcessResult.h"
#include "model/GetApprovalSchemaRequest.h"
#include "model/GetApprovalSchemaResult.h"
#include "model/GetBootAndAntiUninstallPolicyRequest.h"
#include "model/GetBootAndAntiUninstallPolicyResult.h"
#include "model/GetClientUserRequest.h"
#include "model/GetClientUserResult.h"
#include "model/GetDynamicRouteRequest.h"
#include "model/GetDynamicRouteResult.h"
#include "model/GetIdpConfigRequest.h"
#include "model/GetIdpConfigResult.h"
#include "model/GetPrivateAccessApplicationRequest.h"
#include "model/GetPrivateAccessApplicationResult.h"
#include "model/GetPrivateAccessPolicyRequest.h"
#include "model/GetPrivateAccessPolicyResult.h"
#include "model/GetRegistrationPolicyRequest.h"
#include "model/GetRegistrationPolicyResult.h"
#include "model/GetUserDeviceRequest.h"
#include "model/GetUserDeviceResult.h"
#include "model/GetUserGroupRequest.h"
#include "model/GetUserGroupResult.h"
#include "model/GetWmEmbedTaskRequest.h"
#include "model/GetWmEmbedTaskResult.h"
#include "model/GetWmExtractTaskRequest.h"
#include "model/GetWmExtractTaskResult.h"
#include "model/ListApplicationsForPrivateAccessPolicyRequest.h"
#include "model/ListApplicationsForPrivateAccessPolicyResult.h"
#include "model/ListApplicationsForPrivateAccessTagRequest.h"
#include "model/ListApplicationsForPrivateAccessTagResult.h"
#include "model/ListApprovalProcessesRequest.h"
#include "model/ListApprovalProcessesResult.h"
#include "model/ListApprovalProcessesForApprovalSchemasRequest.h"
#include "model/ListApprovalProcessesForApprovalSchemasResult.h"
#include "model/ListApprovalSchemasRequest.h"
#include "model/ListApprovalSchemasResult.h"
#include "model/ListApprovalSchemasForApprovalProcessesRequest.h"
#include "model/ListApprovalSchemasForApprovalProcessesResult.h"
#include "model/ListApprovalsRequest.h"
#include "model/ListApprovalsResult.h"
#include "model/ListClientUsersRequest.h"
#include "model/ListClientUsersResult.h"
#include "model/ListConnectorsRequest.h"
#include "model/ListConnectorsResult.h"
#include "model/ListDynamicRouteRegionsRequest.h"
#include "model/ListDynamicRouteRegionsResult.h"
#include "model/ListDynamicRoutesRequest.h"
#include "model/ListDynamicRoutesResult.h"
#include "model/ListExcessiveDeviceRegistrationApplicationsRequest.h"
#include "model/ListExcessiveDeviceRegistrationApplicationsResult.h"
#include "model/ListIdpConfigsRequest.h"
#include "model/ListIdpConfigsResult.h"
#include "model/ListIdpDepartmentsRequest.h"
#include "model/ListIdpDepartmentsResult.h"
#include "model/ListNacUserCertRequest.h"
#include "model/ListNacUserCertResult.h"
#include "model/ListPolicesForPrivateAccessApplicationRequest.h"
#include "model/ListPolicesForPrivateAccessApplicationResult.h"
#include "model/ListPolicesForPrivateAccessTagRequest.h"
#include "model/ListPolicesForPrivateAccessTagResult.h"
#include "model/ListPolicesForUserGroupRequest.h"
#include "model/ListPolicesForUserGroupResult.h"
#include "model/ListPopTrafficStatisticsRequest.h"
#include "model/ListPopTrafficStatisticsResult.h"
#include "model/ListPrivateAccessApplicationsRequest.h"
#include "model/ListPrivateAccessApplicationsResult.h"
#include "model/ListPrivateAccessApplicationsForDynamicRouteRequest.h"
#include "model/ListPrivateAccessApplicationsForDynamicRouteResult.h"
#include "model/ListPrivateAccessPolicesRequest.h"
#include "model/ListPrivateAccessPolicesResult.h"
#include "model/ListPrivateAccessTagsRequest.h"
#include "model/ListPrivateAccessTagsResult.h"
#include "model/ListPrivateAccessTagsForDynamicRouteRequest.h"
#include "model/ListPrivateAccessTagsForDynamicRouteResult.h"
#include "model/ListRegistrationPoliciesRequest.h"
#include "model/ListRegistrationPoliciesResult.h"
#include "model/ListRegistrationPoliciesForUserGroupRequest.h"
#include "model/ListRegistrationPoliciesForUserGroupResult.h"
#include "model/ListSoftwareForUserDeviceRequest.h"
#include "model/ListSoftwareForUserDeviceResult.h"
#include "model/ListTagsForPrivateAccessApplicationRequest.h"
#include "model/ListTagsForPrivateAccessApplicationResult.h"
#include "model/ListTagsForPrivateAccessPolicyRequest.h"
#include "model/ListTagsForPrivateAccessPolicyResult.h"
#include "model/ListUninstallApplicationsRequest.h"
#include "model/ListUninstallApplicationsResult.h"
#include "model/ListUserApplicationsRequest.h"
#include "model/ListUserApplicationsResult.h"
#include "model/ListUserDevicesRequest.h"
#include "model/ListUserDevicesResult.h"
#include "model/ListUserGroupsRequest.h"
#include "model/ListUserGroupsResult.h"
#include "model/ListUserGroupsForPrivateAccessPolicyRequest.h"
#include "model/ListUserGroupsForPrivateAccessPolicyResult.h"
#include "model/ListUserGroupsForRegistrationPolicyRequest.h"
#include "model/ListUserGroupsForRegistrationPolicyResult.h"
#include "model/ListUserPrivateAccessPoliciesRequest.h"
#include "model/ListUserPrivateAccessPoliciesResult.h"
#include "model/ListUsersRequest.h"
#include "model/ListUsersResult.h"
#include "model/LookupWmInfoMappingRequest.h"
#include "model/LookupWmInfoMappingResult.h"
#include "model/RevokeUserSessionRequest.h"
#include "model/RevokeUserSessionResult.h"
#include "model/UpdateApprovalProcessRequest.h"
#include "model/UpdateApprovalProcessResult.h"
#include "model/UpdateApprovalStatusRequest.h"
#include "model/UpdateApprovalStatusResult.h"
#include "model/UpdateBootAndAntiUninstallPolicyRequest.h"
#include "model/UpdateBootAndAntiUninstallPolicyResult.h"
#include "model/UpdateClientUserRequest.h"
#include "model/UpdateClientUserResult.h"
#include "model/UpdateClientUserPasswordRequest.h"
#include "model/UpdateClientUserPasswordResult.h"
#include "model/UpdateClientUserStatusRequest.h"
#include "model/UpdateClientUserStatusResult.h"
#include "model/UpdateDynamicRouteRequest.h"
#include "model/UpdateDynamicRouteResult.h"
#include "model/UpdateExcessiveDeviceRegistrationApplicationsStatusRequest.h"
#include "model/UpdateExcessiveDeviceRegistrationApplicationsStatusResult.h"
#include "model/UpdateIdpDepartmentRequest.h"
#include "model/UpdateIdpDepartmentResult.h"
#include "model/UpdateNacUserCertStatusRequest.h"
#include "model/UpdateNacUserCertStatusResult.h"
#include "model/UpdatePrivateAccessApplicationRequest.h"
#include "model/UpdatePrivateAccessApplicationResult.h"
#include "model/UpdatePrivateAccessPolicyRequest.h"
#include "model/UpdatePrivateAccessPolicyResult.h"
#include "model/UpdateRegistrationPolicyRequest.h"
#include "model/UpdateRegistrationPolicyResult.h"
#include "model/UpdateUninstallApplicationsStatusRequest.h"
#include "model/UpdateUninstallApplicationsStatusResult.h"
#include "model/UpdateUserDevicesSharingStatusRequest.h"
#include "model/UpdateUserDevicesSharingStatusResult.h"
#include "model/UpdateUserDevicesStatusRequest.h"
#include "model/UpdateUserDevicesStatusResult.h"
#include "model/UpdateUserGroupRequest.h"
#include "model/UpdateUserGroupResult.h"
#include "model/UpdateUsersStatusRequest.h"
#include "model/UpdateUsersStatusResult.h"


namespace AlibabaCloud
{
	namespace Csas
	{
		class ALIBABACLOUD_CSAS_EXPORT CsasClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::AttachApplication2ConnectorResult> AttachApplication2ConnectorOutcome;
			typedef std::future<AttachApplication2ConnectorOutcome> AttachApplication2ConnectorOutcomeCallable;
			typedef std::function<void(const CsasClient*, const Model::AttachApplication2ConnectorRequest&, const AttachApplication2ConnectorOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AttachApplication2ConnectorAsyncHandler;
			typedef Outcome<Error, Model::AttachPolicy2ApprovalProcessResult> AttachPolicy2ApprovalProcessOutcome;
			typedef std::future<AttachPolicy2ApprovalProcessOutcome> AttachPolicy2ApprovalProcessOutcomeCallable;
			typedef std::function<void(const CsasClient*, const Model::AttachPolicy2ApprovalProcessRequest&, const AttachPolicy2ApprovalProcessOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AttachPolicy2ApprovalProcessAsyncHandler;
			typedef Outcome<Error, Model::CreateApprovalProcessResult> CreateApprovalProcessOutcome;
			typedef std::future<CreateApprovalProcessOutcome> CreateApprovalProcessOutcomeCallable;
			typedef std::function<void(const CsasClient*, const Model::CreateApprovalProcessRequest&, const CreateApprovalProcessOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateApprovalProcessAsyncHandler;
			typedef Outcome<Error, Model::CreateClientUserResult> CreateClientUserOutcome;
			typedef std::future<CreateClientUserOutcome> CreateClientUserOutcomeCallable;
			typedef std::function<void(const CsasClient*, const Model::CreateClientUserRequest&, const CreateClientUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateClientUserAsyncHandler;
			typedef Outcome<Error, Model::CreateDynamicRouteResult> CreateDynamicRouteOutcome;
			typedef std::future<CreateDynamicRouteOutcome> CreateDynamicRouteOutcomeCallable;
			typedef std::function<void(const CsasClient*, const Model::CreateDynamicRouteRequest&, const CreateDynamicRouteOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDynamicRouteAsyncHandler;
			typedef Outcome<Error, Model::CreateIdpDepartmentResult> CreateIdpDepartmentOutcome;
			typedef std::future<CreateIdpDepartmentOutcome> CreateIdpDepartmentOutcomeCallable;
			typedef std::function<void(const CsasClient*, const Model::CreateIdpDepartmentRequest&, const CreateIdpDepartmentOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateIdpDepartmentAsyncHandler;
			typedef Outcome<Error, Model::CreatePrivateAccessApplicationResult> CreatePrivateAccessApplicationOutcome;
			typedef std::future<CreatePrivateAccessApplicationOutcome> CreatePrivateAccessApplicationOutcomeCallable;
			typedef std::function<void(const CsasClient*, const Model::CreatePrivateAccessApplicationRequest&, const CreatePrivateAccessApplicationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreatePrivateAccessApplicationAsyncHandler;
			typedef Outcome<Error, Model::CreatePrivateAccessPolicyResult> CreatePrivateAccessPolicyOutcome;
			typedef std::future<CreatePrivateAccessPolicyOutcome> CreatePrivateAccessPolicyOutcomeCallable;
			typedef std::function<void(const CsasClient*, const Model::CreatePrivateAccessPolicyRequest&, const CreatePrivateAccessPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreatePrivateAccessPolicyAsyncHandler;
			typedef Outcome<Error, Model::CreatePrivateAccessTagResult> CreatePrivateAccessTagOutcome;
			typedef std::future<CreatePrivateAccessTagOutcome> CreatePrivateAccessTagOutcomeCallable;
			typedef std::function<void(const CsasClient*, const Model::CreatePrivateAccessTagRequest&, const CreatePrivateAccessTagOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreatePrivateAccessTagAsyncHandler;
			typedef Outcome<Error, Model::CreateRegistrationPolicyResult> CreateRegistrationPolicyOutcome;
			typedef std::future<CreateRegistrationPolicyOutcome> CreateRegistrationPolicyOutcomeCallable;
			typedef std::function<void(const CsasClient*, const Model::CreateRegistrationPolicyRequest&, const CreateRegistrationPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateRegistrationPolicyAsyncHandler;
			typedef Outcome<Error, Model::CreateUserGroupResult> CreateUserGroupOutcome;
			typedef std::future<CreateUserGroupOutcome> CreateUserGroupOutcomeCallable;
			typedef std::function<void(const CsasClient*, const Model::CreateUserGroupRequest&, const CreateUserGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateUserGroupAsyncHandler;
			typedef Outcome<Error, Model::CreateWmBaseImageResult> CreateWmBaseImageOutcome;
			typedef std::future<CreateWmBaseImageOutcome> CreateWmBaseImageOutcomeCallable;
			typedef std::function<void(const CsasClient*, const Model::CreateWmBaseImageRequest&, const CreateWmBaseImageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateWmBaseImageAsyncHandler;
			typedef Outcome<Error, Model::CreateWmEmbedTaskResult> CreateWmEmbedTaskOutcome;
			typedef std::future<CreateWmEmbedTaskOutcome> CreateWmEmbedTaskOutcomeCallable;
			typedef std::function<void(const CsasClient*, const Model::CreateWmEmbedTaskRequest&, const CreateWmEmbedTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateWmEmbedTaskAsyncHandler;
			typedef Outcome<Error, Model::CreateWmExtractTaskResult> CreateWmExtractTaskOutcome;
			typedef std::future<CreateWmExtractTaskOutcome> CreateWmExtractTaskOutcomeCallable;
			typedef std::function<void(const CsasClient*, const Model::CreateWmExtractTaskRequest&, const CreateWmExtractTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateWmExtractTaskAsyncHandler;
			typedef Outcome<Error, Model::CreateWmInfoMappingResult> CreateWmInfoMappingOutcome;
			typedef std::future<CreateWmInfoMappingOutcome> CreateWmInfoMappingOutcomeCallable;
			typedef std::function<void(const CsasClient*, const Model::CreateWmInfoMappingRequest&, const CreateWmInfoMappingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateWmInfoMappingAsyncHandler;
			typedef Outcome<Error, Model::DeleteApprovalProcessesResult> DeleteApprovalProcessesOutcome;
			typedef std::future<DeleteApprovalProcessesOutcome> DeleteApprovalProcessesOutcomeCallable;
			typedef std::function<void(const CsasClient*, const Model::DeleteApprovalProcessesRequest&, const DeleteApprovalProcessesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteApprovalProcessesAsyncHandler;
			typedef Outcome<Error, Model::DeleteClientUserResult> DeleteClientUserOutcome;
			typedef std::future<DeleteClientUserOutcome> DeleteClientUserOutcomeCallable;
			typedef std::function<void(const CsasClient*, const Model::DeleteClientUserRequest&, const DeleteClientUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteClientUserAsyncHandler;
			typedef Outcome<Error, Model::DeleteDynamicRouteResult> DeleteDynamicRouteOutcome;
			typedef std::future<DeleteDynamicRouteOutcome> DeleteDynamicRouteOutcomeCallable;
			typedef std::function<void(const CsasClient*, const Model::DeleteDynamicRouteRequest&, const DeleteDynamicRouteOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDynamicRouteAsyncHandler;
			typedef Outcome<Error, Model::DeleteIdpDepartmentResult> DeleteIdpDepartmentOutcome;
			typedef std::future<DeleteIdpDepartmentOutcome> DeleteIdpDepartmentOutcomeCallable;
			typedef std::function<void(const CsasClient*, const Model::DeleteIdpDepartmentRequest&, const DeleteIdpDepartmentOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteIdpDepartmentAsyncHandler;
			typedef Outcome<Error, Model::DeletePrivateAccessApplicationResult> DeletePrivateAccessApplicationOutcome;
			typedef std::future<DeletePrivateAccessApplicationOutcome> DeletePrivateAccessApplicationOutcomeCallable;
			typedef std::function<void(const CsasClient*, const Model::DeletePrivateAccessApplicationRequest&, const DeletePrivateAccessApplicationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeletePrivateAccessApplicationAsyncHandler;
			typedef Outcome<Error, Model::DeletePrivateAccessPolicyResult> DeletePrivateAccessPolicyOutcome;
			typedef std::future<DeletePrivateAccessPolicyOutcome> DeletePrivateAccessPolicyOutcomeCallable;
			typedef std::function<void(const CsasClient*, const Model::DeletePrivateAccessPolicyRequest&, const DeletePrivateAccessPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeletePrivateAccessPolicyAsyncHandler;
			typedef Outcome<Error, Model::DeletePrivateAccessTagResult> DeletePrivateAccessTagOutcome;
			typedef std::future<DeletePrivateAccessTagOutcome> DeletePrivateAccessTagOutcomeCallable;
			typedef std::function<void(const CsasClient*, const Model::DeletePrivateAccessTagRequest&, const DeletePrivateAccessTagOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeletePrivateAccessTagAsyncHandler;
			typedef Outcome<Error, Model::DeleteRegistrationPoliciesResult> DeleteRegistrationPoliciesOutcome;
			typedef std::future<DeleteRegistrationPoliciesOutcome> DeleteRegistrationPoliciesOutcomeCallable;
			typedef std::function<void(const CsasClient*, const Model::DeleteRegistrationPoliciesRequest&, const DeleteRegistrationPoliciesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRegistrationPoliciesAsyncHandler;
			typedef Outcome<Error, Model::DeleteUserDevicesResult> DeleteUserDevicesOutcome;
			typedef std::future<DeleteUserDevicesOutcome> DeleteUserDevicesOutcomeCallable;
			typedef std::function<void(const CsasClient*, const Model::DeleteUserDevicesRequest&, const DeleteUserDevicesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteUserDevicesAsyncHandler;
			typedef Outcome<Error, Model::DeleteUserGroupResult> DeleteUserGroupOutcome;
			typedef std::future<DeleteUserGroupOutcome> DeleteUserGroupOutcomeCallable;
			typedef std::function<void(const CsasClient*, const Model::DeleteUserGroupRequest&, const DeleteUserGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteUserGroupAsyncHandler;
			typedef Outcome<Error, Model::DetachApplication2ConnectorResult> DetachApplication2ConnectorOutcome;
			typedef std::future<DetachApplication2ConnectorOutcome> DetachApplication2ConnectorOutcomeCallable;
			typedef std::function<void(const CsasClient*, const Model::DetachApplication2ConnectorRequest&, const DetachApplication2ConnectorOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DetachApplication2ConnectorAsyncHandler;
			typedef Outcome<Error, Model::DetachPolicy2ApprovalProcessResult> DetachPolicy2ApprovalProcessOutcome;
			typedef std::future<DetachPolicy2ApprovalProcessOutcome> DetachPolicy2ApprovalProcessOutcomeCallable;
			typedef std::function<void(const CsasClient*, const Model::DetachPolicy2ApprovalProcessRequest&, const DetachPolicy2ApprovalProcessOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DetachPolicy2ApprovalProcessAsyncHandler;
			typedef Outcome<Error, Model::ExportUserDevicesResult> ExportUserDevicesOutcome;
			typedef std::future<ExportUserDevicesOutcome> ExportUserDevicesOutcomeCallable;
			typedef std::function<void(const CsasClient*, const Model::ExportUserDevicesRequest&, const ExportUserDevicesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ExportUserDevicesAsyncHandler;
			typedef Outcome<Error, Model::GetActiveIdpConfigResult> GetActiveIdpConfigOutcome;
			typedef std::future<GetActiveIdpConfigOutcome> GetActiveIdpConfigOutcomeCallable;
			typedef std::function<void(const CsasClient*, const Model::GetActiveIdpConfigRequest&, const GetActiveIdpConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetActiveIdpConfigAsyncHandler;
			typedef Outcome<Error, Model::GetApprovalResult> GetApprovalOutcome;
			typedef std::future<GetApprovalOutcome> GetApprovalOutcomeCallable;
			typedef std::function<void(const CsasClient*, const Model::GetApprovalRequest&, const GetApprovalOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetApprovalAsyncHandler;
			typedef Outcome<Error, Model::GetApprovalProcessResult> GetApprovalProcessOutcome;
			typedef std::future<GetApprovalProcessOutcome> GetApprovalProcessOutcomeCallable;
			typedef std::function<void(const CsasClient*, const Model::GetApprovalProcessRequest&, const GetApprovalProcessOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetApprovalProcessAsyncHandler;
			typedef Outcome<Error, Model::GetApprovalSchemaResult> GetApprovalSchemaOutcome;
			typedef std::future<GetApprovalSchemaOutcome> GetApprovalSchemaOutcomeCallable;
			typedef std::function<void(const CsasClient*, const Model::GetApprovalSchemaRequest&, const GetApprovalSchemaOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetApprovalSchemaAsyncHandler;
			typedef Outcome<Error, Model::GetBootAndAntiUninstallPolicyResult> GetBootAndAntiUninstallPolicyOutcome;
			typedef std::future<GetBootAndAntiUninstallPolicyOutcome> GetBootAndAntiUninstallPolicyOutcomeCallable;
			typedef std::function<void(const CsasClient*, const Model::GetBootAndAntiUninstallPolicyRequest&, const GetBootAndAntiUninstallPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetBootAndAntiUninstallPolicyAsyncHandler;
			typedef Outcome<Error, Model::GetClientUserResult> GetClientUserOutcome;
			typedef std::future<GetClientUserOutcome> GetClientUserOutcomeCallable;
			typedef std::function<void(const CsasClient*, const Model::GetClientUserRequest&, const GetClientUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetClientUserAsyncHandler;
			typedef Outcome<Error, Model::GetDynamicRouteResult> GetDynamicRouteOutcome;
			typedef std::future<GetDynamicRouteOutcome> GetDynamicRouteOutcomeCallable;
			typedef std::function<void(const CsasClient*, const Model::GetDynamicRouteRequest&, const GetDynamicRouteOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetDynamicRouteAsyncHandler;
			typedef Outcome<Error, Model::GetIdpConfigResult> GetIdpConfigOutcome;
			typedef std::future<GetIdpConfigOutcome> GetIdpConfigOutcomeCallable;
			typedef std::function<void(const CsasClient*, const Model::GetIdpConfigRequest&, const GetIdpConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetIdpConfigAsyncHandler;
			typedef Outcome<Error, Model::GetPrivateAccessApplicationResult> GetPrivateAccessApplicationOutcome;
			typedef std::future<GetPrivateAccessApplicationOutcome> GetPrivateAccessApplicationOutcomeCallable;
			typedef std::function<void(const CsasClient*, const Model::GetPrivateAccessApplicationRequest&, const GetPrivateAccessApplicationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetPrivateAccessApplicationAsyncHandler;
			typedef Outcome<Error, Model::GetPrivateAccessPolicyResult> GetPrivateAccessPolicyOutcome;
			typedef std::future<GetPrivateAccessPolicyOutcome> GetPrivateAccessPolicyOutcomeCallable;
			typedef std::function<void(const CsasClient*, const Model::GetPrivateAccessPolicyRequest&, const GetPrivateAccessPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetPrivateAccessPolicyAsyncHandler;
			typedef Outcome<Error, Model::GetRegistrationPolicyResult> GetRegistrationPolicyOutcome;
			typedef std::future<GetRegistrationPolicyOutcome> GetRegistrationPolicyOutcomeCallable;
			typedef std::function<void(const CsasClient*, const Model::GetRegistrationPolicyRequest&, const GetRegistrationPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetRegistrationPolicyAsyncHandler;
			typedef Outcome<Error, Model::GetUserDeviceResult> GetUserDeviceOutcome;
			typedef std::future<GetUserDeviceOutcome> GetUserDeviceOutcomeCallable;
			typedef std::function<void(const CsasClient*, const Model::GetUserDeviceRequest&, const GetUserDeviceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetUserDeviceAsyncHandler;
			typedef Outcome<Error, Model::GetUserGroupResult> GetUserGroupOutcome;
			typedef std::future<GetUserGroupOutcome> GetUserGroupOutcomeCallable;
			typedef std::function<void(const CsasClient*, const Model::GetUserGroupRequest&, const GetUserGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetUserGroupAsyncHandler;
			typedef Outcome<Error, Model::GetWmEmbedTaskResult> GetWmEmbedTaskOutcome;
			typedef std::future<GetWmEmbedTaskOutcome> GetWmEmbedTaskOutcomeCallable;
			typedef std::function<void(const CsasClient*, const Model::GetWmEmbedTaskRequest&, const GetWmEmbedTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetWmEmbedTaskAsyncHandler;
			typedef Outcome<Error, Model::GetWmExtractTaskResult> GetWmExtractTaskOutcome;
			typedef std::future<GetWmExtractTaskOutcome> GetWmExtractTaskOutcomeCallable;
			typedef std::function<void(const CsasClient*, const Model::GetWmExtractTaskRequest&, const GetWmExtractTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetWmExtractTaskAsyncHandler;
			typedef Outcome<Error, Model::ListApplicationsForPrivateAccessPolicyResult> ListApplicationsForPrivateAccessPolicyOutcome;
			typedef std::future<ListApplicationsForPrivateAccessPolicyOutcome> ListApplicationsForPrivateAccessPolicyOutcomeCallable;
			typedef std::function<void(const CsasClient*, const Model::ListApplicationsForPrivateAccessPolicyRequest&, const ListApplicationsForPrivateAccessPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListApplicationsForPrivateAccessPolicyAsyncHandler;
			typedef Outcome<Error, Model::ListApplicationsForPrivateAccessTagResult> ListApplicationsForPrivateAccessTagOutcome;
			typedef std::future<ListApplicationsForPrivateAccessTagOutcome> ListApplicationsForPrivateAccessTagOutcomeCallable;
			typedef std::function<void(const CsasClient*, const Model::ListApplicationsForPrivateAccessTagRequest&, const ListApplicationsForPrivateAccessTagOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListApplicationsForPrivateAccessTagAsyncHandler;
			typedef Outcome<Error, Model::ListApprovalProcessesResult> ListApprovalProcessesOutcome;
			typedef std::future<ListApprovalProcessesOutcome> ListApprovalProcessesOutcomeCallable;
			typedef std::function<void(const CsasClient*, const Model::ListApprovalProcessesRequest&, const ListApprovalProcessesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListApprovalProcessesAsyncHandler;
			typedef Outcome<Error, Model::ListApprovalProcessesForApprovalSchemasResult> ListApprovalProcessesForApprovalSchemasOutcome;
			typedef std::future<ListApprovalProcessesForApprovalSchemasOutcome> ListApprovalProcessesForApprovalSchemasOutcomeCallable;
			typedef std::function<void(const CsasClient*, const Model::ListApprovalProcessesForApprovalSchemasRequest&, const ListApprovalProcessesForApprovalSchemasOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListApprovalProcessesForApprovalSchemasAsyncHandler;
			typedef Outcome<Error, Model::ListApprovalSchemasResult> ListApprovalSchemasOutcome;
			typedef std::future<ListApprovalSchemasOutcome> ListApprovalSchemasOutcomeCallable;
			typedef std::function<void(const CsasClient*, const Model::ListApprovalSchemasRequest&, const ListApprovalSchemasOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListApprovalSchemasAsyncHandler;
			typedef Outcome<Error, Model::ListApprovalSchemasForApprovalProcessesResult> ListApprovalSchemasForApprovalProcessesOutcome;
			typedef std::future<ListApprovalSchemasForApprovalProcessesOutcome> ListApprovalSchemasForApprovalProcessesOutcomeCallable;
			typedef std::function<void(const CsasClient*, const Model::ListApprovalSchemasForApprovalProcessesRequest&, const ListApprovalSchemasForApprovalProcessesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListApprovalSchemasForApprovalProcessesAsyncHandler;
			typedef Outcome<Error, Model::ListApprovalsResult> ListApprovalsOutcome;
			typedef std::future<ListApprovalsOutcome> ListApprovalsOutcomeCallable;
			typedef std::function<void(const CsasClient*, const Model::ListApprovalsRequest&, const ListApprovalsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListApprovalsAsyncHandler;
			typedef Outcome<Error, Model::ListClientUsersResult> ListClientUsersOutcome;
			typedef std::future<ListClientUsersOutcome> ListClientUsersOutcomeCallable;
			typedef std::function<void(const CsasClient*, const Model::ListClientUsersRequest&, const ListClientUsersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListClientUsersAsyncHandler;
			typedef Outcome<Error, Model::ListConnectorsResult> ListConnectorsOutcome;
			typedef std::future<ListConnectorsOutcome> ListConnectorsOutcomeCallable;
			typedef std::function<void(const CsasClient*, const Model::ListConnectorsRequest&, const ListConnectorsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListConnectorsAsyncHandler;
			typedef Outcome<Error, Model::ListDynamicRouteRegionsResult> ListDynamicRouteRegionsOutcome;
			typedef std::future<ListDynamicRouteRegionsOutcome> ListDynamicRouteRegionsOutcomeCallable;
			typedef std::function<void(const CsasClient*, const Model::ListDynamicRouteRegionsRequest&, const ListDynamicRouteRegionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDynamicRouteRegionsAsyncHandler;
			typedef Outcome<Error, Model::ListDynamicRoutesResult> ListDynamicRoutesOutcome;
			typedef std::future<ListDynamicRoutesOutcome> ListDynamicRoutesOutcomeCallable;
			typedef std::function<void(const CsasClient*, const Model::ListDynamicRoutesRequest&, const ListDynamicRoutesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDynamicRoutesAsyncHandler;
			typedef Outcome<Error, Model::ListExcessiveDeviceRegistrationApplicationsResult> ListExcessiveDeviceRegistrationApplicationsOutcome;
			typedef std::future<ListExcessiveDeviceRegistrationApplicationsOutcome> ListExcessiveDeviceRegistrationApplicationsOutcomeCallable;
			typedef std::function<void(const CsasClient*, const Model::ListExcessiveDeviceRegistrationApplicationsRequest&, const ListExcessiveDeviceRegistrationApplicationsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListExcessiveDeviceRegistrationApplicationsAsyncHandler;
			typedef Outcome<Error, Model::ListIdpConfigsResult> ListIdpConfigsOutcome;
			typedef std::future<ListIdpConfigsOutcome> ListIdpConfigsOutcomeCallable;
			typedef std::function<void(const CsasClient*, const Model::ListIdpConfigsRequest&, const ListIdpConfigsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListIdpConfigsAsyncHandler;
			typedef Outcome<Error, Model::ListIdpDepartmentsResult> ListIdpDepartmentsOutcome;
			typedef std::future<ListIdpDepartmentsOutcome> ListIdpDepartmentsOutcomeCallable;
			typedef std::function<void(const CsasClient*, const Model::ListIdpDepartmentsRequest&, const ListIdpDepartmentsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListIdpDepartmentsAsyncHandler;
			typedef Outcome<Error, Model::ListNacUserCertResult> ListNacUserCertOutcome;
			typedef std::future<ListNacUserCertOutcome> ListNacUserCertOutcomeCallable;
			typedef std::function<void(const CsasClient*, const Model::ListNacUserCertRequest&, const ListNacUserCertOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListNacUserCertAsyncHandler;
			typedef Outcome<Error, Model::ListPolicesForPrivateAccessApplicationResult> ListPolicesForPrivateAccessApplicationOutcome;
			typedef std::future<ListPolicesForPrivateAccessApplicationOutcome> ListPolicesForPrivateAccessApplicationOutcomeCallable;
			typedef std::function<void(const CsasClient*, const Model::ListPolicesForPrivateAccessApplicationRequest&, const ListPolicesForPrivateAccessApplicationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListPolicesForPrivateAccessApplicationAsyncHandler;
			typedef Outcome<Error, Model::ListPolicesForPrivateAccessTagResult> ListPolicesForPrivateAccessTagOutcome;
			typedef std::future<ListPolicesForPrivateAccessTagOutcome> ListPolicesForPrivateAccessTagOutcomeCallable;
			typedef std::function<void(const CsasClient*, const Model::ListPolicesForPrivateAccessTagRequest&, const ListPolicesForPrivateAccessTagOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListPolicesForPrivateAccessTagAsyncHandler;
			typedef Outcome<Error, Model::ListPolicesForUserGroupResult> ListPolicesForUserGroupOutcome;
			typedef std::future<ListPolicesForUserGroupOutcome> ListPolicesForUserGroupOutcomeCallable;
			typedef std::function<void(const CsasClient*, const Model::ListPolicesForUserGroupRequest&, const ListPolicesForUserGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListPolicesForUserGroupAsyncHandler;
			typedef Outcome<Error, Model::ListPopTrafficStatisticsResult> ListPopTrafficStatisticsOutcome;
			typedef std::future<ListPopTrafficStatisticsOutcome> ListPopTrafficStatisticsOutcomeCallable;
			typedef std::function<void(const CsasClient*, const Model::ListPopTrafficStatisticsRequest&, const ListPopTrafficStatisticsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListPopTrafficStatisticsAsyncHandler;
			typedef Outcome<Error, Model::ListPrivateAccessApplicationsResult> ListPrivateAccessApplicationsOutcome;
			typedef std::future<ListPrivateAccessApplicationsOutcome> ListPrivateAccessApplicationsOutcomeCallable;
			typedef std::function<void(const CsasClient*, const Model::ListPrivateAccessApplicationsRequest&, const ListPrivateAccessApplicationsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListPrivateAccessApplicationsAsyncHandler;
			typedef Outcome<Error, Model::ListPrivateAccessApplicationsForDynamicRouteResult> ListPrivateAccessApplicationsForDynamicRouteOutcome;
			typedef std::future<ListPrivateAccessApplicationsForDynamicRouteOutcome> ListPrivateAccessApplicationsForDynamicRouteOutcomeCallable;
			typedef std::function<void(const CsasClient*, const Model::ListPrivateAccessApplicationsForDynamicRouteRequest&, const ListPrivateAccessApplicationsForDynamicRouteOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListPrivateAccessApplicationsForDynamicRouteAsyncHandler;
			typedef Outcome<Error, Model::ListPrivateAccessPolicesResult> ListPrivateAccessPolicesOutcome;
			typedef std::future<ListPrivateAccessPolicesOutcome> ListPrivateAccessPolicesOutcomeCallable;
			typedef std::function<void(const CsasClient*, const Model::ListPrivateAccessPolicesRequest&, const ListPrivateAccessPolicesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListPrivateAccessPolicesAsyncHandler;
			typedef Outcome<Error, Model::ListPrivateAccessTagsResult> ListPrivateAccessTagsOutcome;
			typedef std::future<ListPrivateAccessTagsOutcome> ListPrivateAccessTagsOutcomeCallable;
			typedef std::function<void(const CsasClient*, const Model::ListPrivateAccessTagsRequest&, const ListPrivateAccessTagsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListPrivateAccessTagsAsyncHandler;
			typedef Outcome<Error, Model::ListPrivateAccessTagsForDynamicRouteResult> ListPrivateAccessTagsForDynamicRouteOutcome;
			typedef std::future<ListPrivateAccessTagsForDynamicRouteOutcome> ListPrivateAccessTagsForDynamicRouteOutcomeCallable;
			typedef std::function<void(const CsasClient*, const Model::ListPrivateAccessTagsForDynamicRouteRequest&, const ListPrivateAccessTagsForDynamicRouteOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListPrivateAccessTagsForDynamicRouteAsyncHandler;
			typedef Outcome<Error, Model::ListRegistrationPoliciesResult> ListRegistrationPoliciesOutcome;
			typedef std::future<ListRegistrationPoliciesOutcome> ListRegistrationPoliciesOutcomeCallable;
			typedef std::function<void(const CsasClient*, const Model::ListRegistrationPoliciesRequest&, const ListRegistrationPoliciesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListRegistrationPoliciesAsyncHandler;
			typedef Outcome<Error, Model::ListRegistrationPoliciesForUserGroupResult> ListRegistrationPoliciesForUserGroupOutcome;
			typedef std::future<ListRegistrationPoliciesForUserGroupOutcome> ListRegistrationPoliciesForUserGroupOutcomeCallable;
			typedef std::function<void(const CsasClient*, const Model::ListRegistrationPoliciesForUserGroupRequest&, const ListRegistrationPoliciesForUserGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListRegistrationPoliciesForUserGroupAsyncHandler;
			typedef Outcome<Error, Model::ListSoftwareForUserDeviceResult> ListSoftwareForUserDeviceOutcome;
			typedef std::future<ListSoftwareForUserDeviceOutcome> ListSoftwareForUserDeviceOutcomeCallable;
			typedef std::function<void(const CsasClient*, const Model::ListSoftwareForUserDeviceRequest&, const ListSoftwareForUserDeviceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListSoftwareForUserDeviceAsyncHandler;
			typedef Outcome<Error, Model::ListTagsForPrivateAccessApplicationResult> ListTagsForPrivateAccessApplicationOutcome;
			typedef std::future<ListTagsForPrivateAccessApplicationOutcome> ListTagsForPrivateAccessApplicationOutcomeCallable;
			typedef std::function<void(const CsasClient*, const Model::ListTagsForPrivateAccessApplicationRequest&, const ListTagsForPrivateAccessApplicationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTagsForPrivateAccessApplicationAsyncHandler;
			typedef Outcome<Error, Model::ListTagsForPrivateAccessPolicyResult> ListTagsForPrivateAccessPolicyOutcome;
			typedef std::future<ListTagsForPrivateAccessPolicyOutcome> ListTagsForPrivateAccessPolicyOutcomeCallable;
			typedef std::function<void(const CsasClient*, const Model::ListTagsForPrivateAccessPolicyRequest&, const ListTagsForPrivateAccessPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTagsForPrivateAccessPolicyAsyncHandler;
			typedef Outcome<Error, Model::ListUninstallApplicationsResult> ListUninstallApplicationsOutcome;
			typedef std::future<ListUninstallApplicationsOutcome> ListUninstallApplicationsOutcomeCallable;
			typedef std::function<void(const CsasClient*, const Model::ListUninstallApplicationsRequest&, const ListUninstallApplicationsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListUninstallApplicationsAsyncHandler;
			typedef Outcome<Error, Model::ListUserApplicationsResult> ListUserApplicationsOutcome;
			typedef std::future<ListUserApplicationsOutcome> ListUserApplicationsOutcomeCallable;
			typedef std::function<void(const CsasClient*, const Model::ListUserApplicationsRequest&, const ListUserApplicationsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListUserApplicationsAsyncHandler;
			typedef Outcome<Error, Model::ListUserDevicesResult> ListUserDevicesOutcome;
			typedef std::future<ListUserDevicesOutcome> ListUserDevicesOutcomeCallable;
			typedef std::function<void(const CsasClient*, const Model::ListUserDevicesRequest&, const ListUserDevicesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListUserDevicesAsyncHandler;
			typedef Outcome<Error, Model::ListUserGroupsResult> ListUserGroupsOutcome;
			typedef std::future<ListUserGroupsOutcome> ListUserGroupsOutcomeCallable;
			typedef std::function<void(const CsasClient*, const Model::ListUserGroupsRequest&, const ListUserGroupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListUserGroupsAsyncHandler;
			typedef Outcome<Error, Model::ListUserGroupsForPrivateAccessPolicyResult> ListUserGroupsForPrivateAccessPolicyOutcome;
			typedef std::future<ListUserGroupsForPrivateAccessPolicyOutcome> ListUserGroupsForPrivateAccessPolicyOutcomeCallable;
			typedef std::function<void(const CsasClient*, const Model::ListUserGroupsForPrivateAccessPolicyRequest&, const ListUserGroupsForPrivateAccessPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListUserGroupsForPrivateAccessPolicyAsyncHandler;
			typedef Outcome<Error, Model::ListUserGroupsForRegistrationPolicyResult> ListUserGroupsForRegistrationPolicyOutcome;
			typedef std::future<ListUserGroupsForRegistrationPolicyOutcome> ListUserGroupsForRegistrationPolicyOutcomeCallable;
			typedef std::function<void(const CsasClient*, const Model::ListUserGroupsForRegistrationPolicyRequest&, const ListUserGroupsForRegistrationPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListUserGroupsForRegistrationPolicyAsyncHandler;
			typedef Outcome<Error, Model::ListUserPrivateAccessPoliciesResult> ListUserPrivateAccessPoliciesOutcome;
			typedef std::future<ListUserPrivateAccessPoliciesOutcome> ListUserPrivateAccessPoliciesOutcomeCallable;
			typedef std::function<void(const CsasClient*, const Model::ListUserPrivateAccessPoliciesRequest&, const ListUserPrivateAccessPoliciesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListUserPrivateAccessPoliciesAsyncHandler;
			typedef Outcome<Error, Model::ListUsersResult> ListUsersOutcome;
			typedef std::future<ListUsersOutcome> ListUsersOutcomeCallable;
			typedef std::function<void(const CsasClient*, const Model::ListUsersRequest&, const ListUsersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListUsersAsyncHandler;
			typedef Outcome<Error, Model::LookupWmInfoMappingResult> LookupWmInfoMappingOutcome;
			typedef std::future<LookupWmInfoMappingOutcome> LookupWmInfoMappingOutcomeCallable;
			typedef std::function<void(const CsasClient*, const Model::LookupWmInfoMappingRequest&, const LookupWmInfoMappingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> LookupWmInfoMappingAsyncHandler;
			typedef Outcome<Error, Model::RevokeUserSessionResult> RevokeUserSessionOutcome;
			typedef std::future<RevokeUserSessionOutcome> RevokeUserSessionOutcomeCallable;
			typedef std::function<void(const CsasClient*, const Model::RevokeUserSessionRequest&, const RevokeUserSessionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RevokeUserSessionAsyncHandler;
			typedef Outcome<Error, Model::UpdateApprovalProcessResult> UpdateApprovalProcessOutcome;
			typedef std::future<UpdateApprovalProcessOutcome> UpdateApprovalProcessOutcomeCallable;
			typedef std::function<void(const CsasClient*, const Model::UpdateApprovalProcessRequest&, const UpdateApprovalProcessOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateApprovalProcessAsyncHandler;
			typedef Outcome<Error, Model::UpdateApprovalStatusResult> UpdateApprovalStatusOutcome;
			typedef std::future<UpdateApprovalStatusOutcome> UpdateApprovalStatusOutcomeCallable;
			typedef std::function<void(const CsasClient*, const Model::UpdateApprovalStatusRequest&, const UpdateApprovalStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateApprovalStatusAsyncHandler;
			typedef Outcome<Error, Model::UpdateBootAndAntiUninstallPolicyResult> UpdateBootAndAntiUninstallPolicyOutcome;
			typedef std::future<UpdateBootAndAntiUninstallPolicyOutcome> UpdateBootAndAntiUninstallPolicyOutcomeCallable;
			typedef std::function<void(const CsasClient*, const Model::UpdateBootAndAntiUninstallPolicyRequest&, const UpdateBootAndAntiUninstallPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateBootAndAntiUninstallPolicyAsyncHandler;
			typedef Outcome<Error, Model::UpdateClientUserResult> UpdateClientUserOutcome;
			typedef std::future<UpdateClientUserOutcome> UpdateClientUserOutcomeCallable;
			typedef std::function<void(const CsasClient*, const Model::UpdateClientUserRequest&, const UpdateClientUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateClientUserAsyncHandler;
			typedef Outcome<Error, Model::UpdateClientUserPasswordResult> UpdateClientUserPasswordOutcome;
			typedef std::future<UpdateClientUserPasswordOutcome> UpdateClientUserPasswordOutcomeCallable;
			typedef std::function<void(const CsasClient*, const Model::UpdateClientUserPasswordRequest&, const UpdateClientUserPasswordOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateClientUserPasswordAsyncHandler;
			typedef Outcome<Error, Model::UpdateClientUserStatusResult> UpdateClientUserStatusOutcome;
			typedef std::future<UpdateClientUserStatusOutcome> UpdateClientUserStatusOutcomeCallable;
			typedef std::function<void(const CsasClient*, const Model::UpdateClientUserStatusRequest&, const UpdateClientUserStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateClientUserStatusAsyncHandler;
			typedef Outcome<Error, Model::UpdateDynamicRouteResult> UpdateDynamicRouteOutcome;
			typedef std::future<UpdateDynamicRouteOutcome> UpdateDynamicRouteOutcomeCallable;
			typedef std::function<void(const CsasClient*, const Model::UpdateDynamicRouteRequest&, const UpdateDynamicRouteOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateDynamicRouteAsyncHandler;
			typedef Outcome<Error, Model::UpdateExcessiveDeviceRegistrationApplicationsStatusResult> UpdateExcessiveDeviceRegistrationApplicationsStatusOutcome;
			typedef std::future<UpdateExcessiveDeviceRegistrationApplicationsStatusOutcome> UpdateExcessiveDeviceRegistrationApplicationsStatusOutcomeCallable;
			typedef std::function<void(const CsasClient*, const Model::UpdateExcessiveDeviceRegistrationApplicationsStatusRequest&, const UpdateExcessiveDeviceRegistrationApplicationsStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateExcessiveDeviceRegistrationApplicationsStatusAsyncHandler;
			typedef Outcome<Error, Model::UpdateIdpDepartmentResult> UpdateIdpDepartmentOutcome;
			typedef std::future<UpdateIdpDepartmentOutcome> UpdateIdpDepartmentOutcomeCallable;
			typedef std::function<void(const CsasClient*, const Model::UpdateIdpDepartmentRequest&, const UpdateIdpDepartmentOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateIdpDepartmentAsyncHandler;
			typedef Outcome<Error, Model::UpdateNacUserCertStatusResult> UpdateNacUserCertStatusOutcome;
			typedef std::future<UpdateNacUserCertStatusOutcome> UpdateNacUserCertStatusOutcomeCallable;
			typedef std::function<void(const CsasClient*, const Model::UpdateNacUserCertStatusRequest&, const UpdateNacUserCertStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateNacUserCertStatusAsyncHandler;
			typedef Outcome<Error, Model::UpdatePrivateAccessApplicationResult> UpdatePrivateAccessApplicationOutcome;
			typedef std::future<UpdatePrivateAccessApplicationOutcome> UpdatePrivateAccessApplicationOutcomeCallable;
			typedef std::function<void(const CsasClient*, const Model::UpdatePrivateAccessApplicationRequest&, const UpdatePrivateAccessApplicationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdatePrivateAccessApplicationAsyncHandler;
			typedef Outcome<Error, Model::UpdatePrivateAccessPolicyResult> UpdatePrivateAccessPolicyOutcome;
			typedef std::future<UpdatePrivateAccessPolicyOutcome> UpdatePrivateAccessPolicyOutcomeCallable;
			typedef std::function<void(const CsasClient*, const Model::UpdatePrivateAccessPolicyRequest&, const UpdatePrivateAccessPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdatePrivateAccessPolicyAsyncHandler;
			typedef Outcome<Error, Model::UpdateRegistrationPolicyResult> UpdateRegistrationPolicyOutcome;
			typedef std::future<UpdateRegistrationPolicyOutcome> UpdateRegistrationPolicyOutcomeCallable;
			typedef std::function<void(const CsasClient*, const Model::UpdateRegistrationPolicyRequest&, const UpdateRegistrationPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateRegistrationPolicyAsyncHandler;
			typedef Outcome<Error, Model::UpdateUninstallApplicationsStatusResult> UpdateUninstallApplicationsStatusOutcome;
			typedef std::future<UpdateUninstallApplicationsStatusOutcome> UpdateUninstallApplicationsStatusOutcomeCallable;
			typedef std::function<void(const CsasClient*, const Model::UpdateUninstallApplicationsStatusRequest&, const UpdateUninstallApplicationsStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateUninstallApplicationsStatusAsyncHandler;
			typedef Outcome<Error, Model::UpdateUserDevicesSharingStatusResult> UpdateUserDevicesSharingStatusOutcome;
			typedef std::future<UpdateUserDevicesSharingStatusOutcome> UpdateUserDevicesSharingStatusOutcomeCallable;
			typedef std::function<void(const CsasClient*, const Model::UpdateUserDevicesSharingStatusRequest&, const UpdateUserDevicesSharingStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateUserDevicesSharingStatusAsyncHandler;
			typedef Outcome<Error, Model::UpdateUserDevicesStatusResult> UpdateUserDevicesStatusOutcome;
			typedef std::future<UpdateUserDevicesStatusOutcome> UpdateUserDevicesStatusOutcomeCallable;
			typedef std::function<void(const CsasClient*, const Model::UpdateUserDevicesStatusRequest&, const UpdateUserDevicesStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateUserDevicesStatusAsyncHandler;
			typedef Outcome<Error, Model::UpdateUserGroupResult> UpdateUserGroupOutcome;
			typedef std::future<UpdateUserGroupOutcome> UpdateUserGroupOutcomeCallable;
			typedef std::function<void(const CsasClient*, const Model::UpdateUserGroupRequest&, const UpdateUserGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateUserGroupAsyncHandler;
			typedef Outcome<Error, Model::UpdateUsersStatusResult> UpdateUsersStatusOutcome;
			typedef std::future<UpdateUsersStatusOutcome> UpdateUsersStatusOutcomeCallable;
			typedef std::function<void(const CsasClient*, const Model::UpdateUsersStatusRequest&, const UpdateUsersStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateUsersStatusAsyncHandler;

			CsasClient(const Credentials &credentials, const ClientConfiguration &configuration);
			CsasClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			CsasClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~CsasClient();
			AttachApplication2ConnectorOutcome attachApplication2Connector(const Model::AttachApplication2ConnectorRequest &request)const;
			void attachApplication2ConnectorAsync(const Model::AttachApplication2ConnectorRequest& request, const AttachApplication2ConnectorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AttachApplication2ConnectorOutcomeCallable attachApplication2ConnectorCallable(const Model::AttachApplication2ConnectorRequest& request) const;
			AttachPolicy2ApprovalProcessOutcome attachPolicy2ApprovalProcess(const Model::AttachPolicy2ApprovalProcessRequest &request)const;
			void attachPolicy2ApprovalProcessAsync(const Model::AttachPolicy2ApprovalProcessRequest& request, const AttachPolicy2ApprovalProcessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AttachPolicy2ApprovalProcessOutcomeCallable attachPolicy2ApprovalProcessCallable(const Model::AttachPolicy2ApprovalProcessRequest& request) const;
			CreateApprovalProcessOutcome createApprovalProcess(const Model::CreateApprovalProcessRequest &request)const;
			void createApprovalProcessAsync(const Model::CreateApprovalProcessRequest& request, const CreateApprovalProcessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateApprovalProcessOutcomeCallable createApprovalProcessCallable(const Model::CreateApprovalProcessRequest& request) const;
			CreateClientUserOutcome createClientUser(const Model::CreateClientUserRequest &request)const;
			void createClientUserAsync(const Model::CreateClientUserRequest& request, const CreateClientUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateClientUserOutcomeCallable createClientUserCallable(const Model::CreateClientUserRequest& request) const;
			CreateDynamicRouteOutcome createDynamicRoute(const Model::CreateDynamicRouteRequest &request)const;
			void createDynamicRouteAsync(const Model::CreateDynamicRouteRequest& request, const CreateDynamicRouteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateDynamicRouteOutcomeCallable createDynamicRouteCallable(const Model::CreateDynamicRouteRequest& request) const;
			CreateIdpDepartmentOutcome createIdpDepartment(const Model::CreateIdpDepartmentRequest &request)const;
			void createIdpDepartmentAsync(const Model::CreateIdpDepartmentRequest& request, const CreateIdpDepartmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateIdpDepartmentOutcomeCallable createIdpDepartmentCallable(const Model::CreateIdpDepartmentRequest& request) const;
			CreatePrivateAccessApplicationOutcome createPrivateAccessApplication(const Model::CreatePrivateAccessApplicationRequest &request)const;
			void createPrivateAccessApplicationAsync(const Model::CreatePrivateAccessApplicationRequest& request, const CreatePrivateAccessApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreatePrivateAccessApplicationOutcomeCallable createPrivateAccessApplicationCallable(const Model::CreatePrivateAccessApplicationRequest& request) const;
			CreatePrivateAccessPolicyOutcome createPrivateAccessPolicy(const Model::CreatePrivateAccessPolicyRequest &request)const;
			void createPrivateAccessPolicyAsync(const Model::CreatePrivateAccessPolicyRequest& request, const CreatePrivateAccessPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreatePrivateAccessPolicyOutcomeCallable createPrivateAccessPolicyCallable(const Model::CreatePrivateAccessPolicyRequest& request) const;
			CreatePrivateAccessTagOutcome createPrivateAccessTag(const Model::CreatePrivateAccessTagRequest &request)const;
			void createPrivateAccessTagAsync(const Model::CreatePrivateAccessTagRequest& request, const CreatePrivateAccessTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreatePrivateAccessTagOutcomeCallable createPrivateAccessTagCallable(const Model::CreatePrivateAccessTagRequest& request) const;
			CreateRegistrationPolicyOutcome createRegistrationPolicy(const Model::CreateRegistrationPolicyRequest &request)const;
			void createRegistrationPolicyAsync(const Model::CreateRegistrationPolicyRequest& request, const CreateRegistrationPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateRegistrationPolicyOutcomeCallable createRegistrationPolicyCallable(const Model::CreateRegistrationPolicyRequest& request) const;
			CreateUserGroupOutcome createUserGroup(const Model::CreateUserGroupRequest &request)const;
			void createUserGroupAsync(const Model::CreateUserGroupRequest& request, const CreateUserGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateUserGroupOutcomeCallable createUserGroupCallable(const Model::CreateUserGroupRequest& request) const;
			CreateWmBaseImageOutcome createWmBaseImage(const Model::CreateWmBaseImageRequest &request)const;
			void createWmBaseImageAsync(const Model::CreateWmBaseImageRequest& request, const CreateWmBaseImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateWmBaseImageOutcomeCallable createWmBaseImageCallable(const Model::CreateWmBaseImageRequest& request) const;
			CreateWmEmbedTaskOutcome createWmEmbedTask(const Model::CreateWmEmbedTaskRequest &request)const;
			void createWmEmbedTaskAsync(const Model::CreateWmEmbedTaskRequest& request, const CreateWmEmbedTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateWmEmbedTaskOutcomeCallable createWmEmbedTaskCallable(const Model::CreateWmEmbedTaskRequest& request) const;
			CreateWmExtractTaskOutcome createWmExtractTask(const Model::CreateWmExtractTaskRequest &request)const;
			void createWmExtractTaskAsync(const Model::CreateWmExtractTaskRequest& request, const CreateWmExtractTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateWmExtractTaskOutcomeCallable createWmExtractTaskCallable(const Model::CreateWmExtractTaskRequest& request) const;
			CreateWmInfoMappingOutcome createWmInfoMapping(const Model::CreateWmInfoMappingRequest &request)const;
			void createWmInfoMappingAsync(const Model::CreateWmInfoMappingRequest& request, const CreateWmInfoMappingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateWmInfoMappingOutcomeCallable createWmInfoMappingCallable(const Model::CreateWmInfoMappingRequest& request) const;
			DeleteApprovalProcessesOutcome deleteApprovalProcesses(const Model::DeleteApprovalProcessesRequest &request)const;
			void deleteApprovalProcessesAsync(const Model::DeleteApprovalProcessesRequest& request, const DeleteApprovalProcessesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteApprovalProcessesOutcomeCallable deleteApprovalProcessesCallable(const Model::DeleteApprovalProcessesRequest& request) const;
			DeleteClientUserOutcome deleteClientUser(const Model::DeleteClientUserRequest &request)const;
			void deleteClientUserAsync(const Model::DeleteClientUserRequest& request, const DeleteClientUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteClientUserOutcomeCallable deleteClientUserCallable(const Model::DeleteClientUserRequest& request) const;
			DeleteDynamicRouteOutcome deleteDynamicRoute(const Model::DeleteDynamicRouteRequest &request)const;
			void deleteDynamicRouteAsync(const Model::DeleteDynamicRouteRequest& request, const DeleteDynamicRouteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDynamicRouteOutcomeCallable deleteDynamicRouteCallable(const Model::DeleteDynamicRouteRequest& request) const;
			DeleteIdpDepartmentOutcome deleteIdpDepartment(const Model::DeleteIdpDepartmentRequest &request)const;
			void deleteIdpDepartmentAsync(const Model::DeleteIdpDepartmentRequest& request, const DeleteIdpDepartmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteIdpDepartmentOutcomeCallable deleteIdpDepartmentCallable(const Model::DeleteIdpDepartmentRequest& request) const;
			DeletePrivateAccessApplicationOutcome deletePrivateAccessApplication(const Model::DeletePrivateAccessApplicationRequest &request)const;
			void deletePrivateAccessApplicationAsync(const Model::DeletePrivateAccessApplicationRequest& request, const DeletePrivateAccessApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeletePrivateAccessApplicationOutcomeCallable deletePrivateAccessApplicationCallable(const Model::DeletePrivateAccessApplicationRequest& request) const;
			DeletePrivateAccessPolicyOutcome deletePrivateAccessPolicy(const Model::DeletePrivateAccessPolicyRequest &request)const;
			void deletePrivateAccessPolicyAsync(const Model::DeletePrivateAccessPolicyRequest& request, const DeletePrivateAccessPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeletePrivateAccessPolicyOutcomeCallable deletePrivateAccessPolicyCallable(const Model::DeletePrivateAccessPolicyRequest& request) const;
			DeletePrivateAccessTagOutcome deletePrivateAccessTag(const Model::DeletePrivateAccessTagRequest &request)const;
			void deletePrivateAccessTagAsync(const Model::DeletePrivateAccessTagRequest& request, const DeletePrivateAccessTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeletePrivateAccessTagOutcomeCallable deletePrivateAccessTagCallable(const Model::DeletePrivateAccessTagRequest& request) const;
			DeleteRegistrationPoliciesOutcome deleteRegistrationPolicies(const Model::DeleteRegistrationPoliciesRequest &request)const;
			void deleteRegistrationPoliciesAsync(const Model::DeleteRegistrationPoliciesRequest& request, const DeleteRegistrationPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteRegistrationPoliciesOutcomeCallable deleteRegistrationPoliciesCallable(const Model::DeleteRegistrationPoliciesRequest& request) const;
			DeleteUserDevicesOutcome deleteUserDevices(const Model::DeleteUserDevicesRequest &request)const;
			void deleteUserDevicesAsync(const Model::DeleteUserDevicesRequest& request, const DeleteUserDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteUserDevicesOutcomeCallable deleteUserDevicesCallable(const Model::DeleteUserDevicesRequest& request) const;
			DeleteUserGroupOutcome deleteUserGroup(const Model::DeleteUserGroupRequest &request)const;
			void deleteUserGroupAsync(const Model::DeleteUserGroupRequest& request, const DeleteUserGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteUserGroupOutcomeCallable deleteUserGroupCallable(const Model::DeleteUserGroupRequest& request) const;
			DetachApplication2ConnectorOutcome detachApplication2Connector(const Model::DetachApplication2ConnectorRequest &request)const;
			void detachApplication2ConnectorAsync(const Model::DetachApplication2ConnectorRequest& request, const DetachApplication2ConnectorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DetachApplication2ConnectorOutcomeCallable detachApplication2ConnectorCallable(const Model::DetachApplication2ConnectorRequest& request) const;
			DetachPolicy2ApprovalProcessOutcome detachPolicy2ApprovalProcess(const Model::DetachPolicy2ApprovalProcessRequest &request)const;
			void detachPolicy2ApprovalProcessAsync(const Model::DetachPolicy2ApprovalProcessRequest& request, const DetachPolicy2ApprovalProcessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DetachPolicy2ApprovalProcessOutcomeCallable detachPolicy2ApprovalProcessCallable(const Model::DetachPolicy2ApprovalProcessRequest& request) const;
			ExportUserDevicesOutcome exportUserDevices(const Model::ExportUserDevicesRequest &request)const;
			void exportUserDevicesAsync(const Model::ExportUserDevicesRequest& request, const ExportUserDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ExportUserDevicesOutcomeCallable exportUserDevicesCallable(const Model::ExportUserDevicesRequest& request) const;
			GetActiveIdpConfigOutcome getActiveIdpConfig(const Model::GetActiveIdpConfigRequest &request)const;
			void getActiveIdpConfigAsync(const Model::GetActiveIdpConfigRequest& request, const GetActiveIdpConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetActiveIdpConfigOutcomeCallable getActiveIdpConfigCallable(const Model::GetActiveIdpConfigRequest& request) const;
			GetApprovalOutcome getApproval(const Model::GetApprovalRequest &request)const;
			void getApprovalAsync(const Model::GetApprovalRequest& request, const GetApprovalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetApprovalOutcomeCallable getApprovalCallable(const Model::GetApprovalRequest& request) const;
			GetApprovalProcessOutcome getApprovalProcess(const Model::GetApprovalProcessRequest &request)const;
			void getApprovalProcessAsync(const Model::GetApprovalProcessRequest& request, const GetApprovalProcessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetApprovalProcessOutcomeCallable getApprovalProcessCallable(const Model::GetApprovalProcessRequest& request) const;
			GetApprovalSchemaOutcome getApprovalSchema(const Model::GetApprovalSchemaRequest &request)const;
			void getApprovalSchemaAsync(const Model::GetApprovalSchemaRequest& request, const GetApprovalSchemaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetApprovalSchemaOutcomeCallable getApprovalSchemaCallable(const Model::GetApprovalSchemaRequest& request) const;
			GetBootAndAntiUninstallPolicyOutcome getBootAndAntiUninstallPolicy(const Model::GetBootAndAntiUninstallPolicyRequest &request)const;
			void getBootAndAntiUninstallPolicyAsync(const Model::GetBootAndAntiUninstallPolicyRequest& request, const GetBootAndAntiUninstallPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetBootAndAntiUninstallPolicyOutcomeCallable getBootAndAntiUninstallPolicyCallable(const Model::GetBootAndAntiUninstallPolicyRequest& request) const;
			GetClientUserOutcome getClientUser(const Model::GetClientUserRequest &request)const;
			void getClientUserAsync(const Model::GetClientUserRequest& request, const GetClientUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetClientUserOutcomeCallable getClientUserCallable(const Model::GetClientUserRequest& request) const;
			GetDynamicRouteOutcome getDynamicRoute(const Model::GetDynamicRouteRequest &request)const;
			void getDynamicRouteAsync(const Model::GetDynamicRouteRequest& request, const GetDynamicRouteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetDynamicRouteOutcomeCallable getDynamicRouteCallable(const Model::GetDynamicRouteRequest& request) const;
			GetIdpConfigOutcome getIdpConfig(const Model::GetIdpConfigRequest &request)const;
			void getIdpConfigAsync(const Model::GetIdpConfigRequest& request, const GetIdpConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetIdpConfigOutcomeCallable getIdpConfigCallable(const Model::GetIdpConfigRequest& request) const;
			GetPrivateAccessApplicationOutcome getPrivateAccessApplication(const Model::GetPrivateAccessApplicationRequest &request)const;
			void getPrivateAccessApplicationAsync(const Model::GetPrivateAccessApplicationRequest& request, const GetPrivateAccessApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetPrivateAccessApplicationOutcomeCallable getPrivateAccessApplicationCallable(const Model::GetPrivateAccessApplicationRequest& request) const;
			GetPrivateAccessPolicyOutcome getPrivateAccessPolicy(const Model::GetPrivateAccessPolicyRequest &request)const;
			void getPrivateAccessPolicyAsync(const Model::GetPrivateAccessPolicyRequest& request, const GetPrivateAccessPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetPrivateAccessPolicyOutcomeCallable getPrivateAccessPolicyCallable(const Model::GetPrivateAccessPolicyRequest& request) const;
			GetRegistrationPolicyOutcome getRegistrationPolicy(const Model::GetRegistrationPolicyRequest &request)const;
			void getRegistrationPolicyAsync(const Model::GetRegistrationPolicyRequest& request, const GetRegistrationPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetRegistrationPolicyOutcomeCallable getRegistrationPolicyCallable(const Model::GetRegistrationPolicyRequest& request) const;
			GetUserDeviceOutcome getUserDevice(const Model::GetUserDeviceRequest &request)const;
			void getUserDeviceAsync(const Model::GetUserDeviceRequest& request, const GetUserDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetUserDeviceOutcomeCallable getUserDeviceCallable(const Model::GetUserDeviceRequest& request) const;
			GetUserGroupOutcome getUserGroup(const Model::GetUserGroupRequest &request)const;
			void getUserGroupAsync(const Model::GetUserGroupRequest& request, const GetUserGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetUserGroupOutcomeCallable getUserGroupCallable(const Model::GetUserGroupRequest& request) const;
			GetWmEmbedTaskOutcome getWmEmbedTask(const Model::GetWmEmbedTaskRequest &request)const;
			void getWmEmbedTaskAsync(const Model::GetWmEmbedTaskRequest& request, const GetWmEmbedTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetWmEmbedTaskOutcomeCallable getWmEmbedTaskCallable(const Model::GetWmEmbedTaskRequest& request) const;
			GetWmExtractTaskOutcome getWmExtractTask(const Model::GetWmExtractTaskRequest &request)const;
			void getWmExtractTaskAsync(const Model::GetWmExtractTaskRequest& request, const GetWmExtractTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetWmExtractTaskOutcomeCallable getWmExtractTaskCallable(const Model::GetWmExtractTaskRequest& request) const;
			ListApplicationsForPrivateAccessPolicyOutcome listApplicationsForPrivateAccessPolicy(const Model::ListApplicationsForPrivateAccessPolicyRequest &request)const;
			void listApplicationsForPrivateAccessPolicyAsync(const Model::ListApplicationsForPrivateAccessPolicyRequest& request, const ListApplicationsForPrivateAccessPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListApplicationsForPrivateAccessPolicyOutcomeCallable listApplicationsForPrivateAccessPolicyCallable(const Model::ListApplicationsForPrivateAccessPolicyRequest& request) const;
			ListApplicationsForPrivateAccessTagOutcome listApplicationsForPrivateAccessTag(const Model::ListApplicationsForPrivateAccessTagRequest &request)const;
			void listApplicationsForPrivateAccessTagAsync(const Model::ListApplicationsForPrivateAccessTagRequest& request, const ListApplicationsForPrivateAccessTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListApplicationsForPrivateAccessTagOutcomeCallable listApplicationsForPrivateAccessTagCallable(const Model::ListApplicationsForPrivateAccessTagRequest& request) const;
			ListApprovalProcessesOutcome listApprovalProcesses(const Model::ListApprovalProcessesRequest &request)const;
			void listApprovalProcessesAsync(const Model::ListApprovalProcessesRequest& request, const ListApprovalProcessesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListApprovalProcessesOutcomeCallable listApprovalProcessesCallable(const Model::ListApprovalProcessesRequest& request) const;
			ListApprovalProcessesForApprovalSchemasOutcome listApprovalProcessesForApprovalSchemas(const Model::ListApprovalProcessesForApprovalSchemasRequest &request)const;
			void listApprovalProcessesForApprovalSchemasAsync(const Model::ListApprovalProcessesForApprovalSchemasRequest& request, const ListApprovalProcessesForApprovalSchemasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListApprovalProcessesForApprovalSchemasOutcomeCallable listApprovalProcessesForApprovalSchemasCallable(const Model::ListApprovalProcessesForApprovalSchemasRequest& request) const;
			ListApprovalSchemasOutcome listApprovalSchemas(const Model::ListApprovalSchemasRequest &request)const;
			void listApprovalSchemasAsync(const Model::ListApprovalSchemasRequest& request, const ListApprovalSchemasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListApprovalSchemasOutcomeCallable listApprovalSchemasCallable(const Model::ListApprovalSchemasRequest& request) const;
			ListApprovalSchemasForApprovalProcessesOutcome listApprovalSchemasForApprovalProcesses(const Model::ListApprovalSchemasForApprovalProcessesRequest &request)const;
			void listApprovalSchemasForApprovalProcessesAsync(const Model::ListApprovalSchemasForApprovalProcessesRequest& request, const ListApprovalSchemasForApprovalProcessesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListApprovalSchemasForApprovalProcessesOutcomeCallable listApprovalSchemasForApprovalProcessesCallable(const Model::ListApprovalSchemasForApprovalProcessesRequest& request) const;
			ListApprovalsOutcome listApprovals(const Model::ListApprovalsRequest &request)const;
			void listApprovalsAsync(const Model::ListApprovalsRequest& request, const ListApprovalsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListApprovalsOutcomeCallable listApprovalsCallable(const Model::ListApprovalsRequest& request) const;
			ListClientUsersOutcome listClientUsers(const Model::ListClientUsersRequest &request)const;
			void listClientUsersAsync(const Model::ListClientUsersRequest& request, const ListClientUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListClientUsersOutcomeCallable listClientUsersCallable(const Model::ListClientUsersRequest& request) const;
			ListConnectorsOutcome listConnectors(const Model::ListConnectorsRequest &request)const;
			void listConnectorsAsync(const Model::ListConnectorsRequest& request, const ListConnectorsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListConnectorsOutcomeCallable listConnectorsCallable(const Model::ListConnectorsRequest& request) const;
			ListDynamicRouteRegionsOutcome listDynamicRouteRegions(const Model::ListDynamicRouteRegionsRequest &request)const;
			void listDynamicRouteRegionsAsync(const Model::ListDynamicRouteRegionsRequest& request, const ListDynamicRouteRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDynamicRouteRegionsOutcomeCallable listDynamicRouteRegionsCallable(const Model::ListDynamicRouteRegionsRequest& request) const;
			ListDynamicRoutesOutcome listDynamicRoutes(const Model::ListDynamicRoutesRequest &request)const;
			void listDynamicRoutesAsync(const Model::ListDynamicRoutesRequest& request, const ListDynamicRoutesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDynamicRoutesOutcomeCallable listDynamicRoutesCallable(const Model::ListDynamicRoutesRequest& request) const;
			ListExcessiveDeviceRegistrationApplicationsOutcome listExcessiveDeviceRegistrationApplications(const Model::ListExcessiveDeviceRegistrationApplicationsRequest &request)const;
			void listExcessiveDeviceRegistrationApplicationsAsync(const Model::ListExcessiveDeviceRegistrationApplicationsRequest& request, const ListExcessiveDeviceRegistrationApplicationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListExcessiveDeviceRegistrationApplicationsOutcomeCallable listExcessiveDeviceRegistrationApplicationsCallable(const Model::ListExcessiveDeviceRegistrationApplicationsRequest& request) const;
			ListIdpConfigsOutcome listIdpConfigs(const Model::ListIdpConfigsRequest &request)const;
			void listIdpConfigsAsync(const Model::ListIdpConfigsRequest& request, const ListIdpConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListIdpConfigsOutcomeCallable listIdpConfigsCallable(const Model::ListIdpConfigsRequest& request) const;
			ListIdpDepartmentsOutcome listIdpDepartments(const Model::ListIdpDepartmentsRequest &request)const;
			void listIdpDepartmentsAsync(const Model::ListIdpDepartmentsRequest& request, const ListIdpDepartmentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListIdpDepartmentsOutcomeCallable listIdpDepartmentsCallable(const Model::ListIdpDepartmentsRequest& request) const;
			ListNacUserCertOutcome listNacUserCert(const Model::ListNacUserCertRequest &request)const;
			void listNacUserCertAsync(const Model::ListNacUserCertRequest& request, const ListNacUserCertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListNacUserCertOutcomeCallable listNacUserCertCallable(const Model::ListNacUserCertRequest& request) const;
			ListPolicesForPrivateAccessApplicationOutcome listPolicesForPrivateAccessApplication(const Model::ListPolicesForPrivateAccessApplicationRequest &request)const;
			void listPolicesForPrivateAccessApplicationAsync(const Model::ListPolicesForPrivateAccessApplicationRequest& request, const ListPolicesForPrivateAccessApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListPolicesForPrivateAccessApplicationOutcomeCallable listPolicesForPrivateAccessApplicationCallable(const Model::ListPolicesForPrivateAccessApplicationRequest& request) const;
			ListPolicesForPrivateAccessTagOutcome listPolicesForPrivateAccessTag(const Model::ListPolicesForPrivateAccessTagRequest &request)const;
			void listPolicesForPrivateAccessTagAsync(const Model::ListPolicesForPrivateAccessTagRequest& request, const ListPolicesForPrivateAccessTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListPolicesForPrivateAccessTagOutcomeCallable listPolicesForPrivateAccessTagCallable(const Model::ListPolicesForPrivateAccessTagRequest& request) const;
			ListPolicesForUserGroupOutcome listPolicesForUserGroup(const Model::ListPolicesForUserGroupRequest &request)const;
			void listPolicesForUserGroupAsync(const Model::ListPolicesForUserGroupRequest& request, const ListPolicesForUserGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListPolicesForUserGroupOutcomeCallable listPolicesForUserGroupCallable(const Model::ListPolicesForUserGroupRequest& request) const;
			ListPopTrafficStatisticsOutcome listPopTrafficStatistics(const Model::ListPopTrafficStatisticsRequest &request)const;
			void listPopTrafficStatisticsAsync(const Model::ListPopTrafficStatisticsRequest& request, const ListPopTrafficStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListPopTrafficStatisticsOutcomeCallable listPopTrafficStatisticsCallable(const Model::ListPopTrafficStatisticsRequest& request) const;
			ListPrivateAccessApplicationsOutcome listPrivateAccessApplications(const Model::ListPrivateAccessApplicationsRequest &request)const;
			void listPrivateAccessApplicationsAsync(const Model::ListPrivateAccessApplicationsRequest& request, const ListPrivateAccessApplicationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListPrivateAccessApplicationsOutcomeCallable listPrivateAccessApplicationsCallable(const Model::ListPrivateAccessApplicationsRequest& request) const;
			ListPrivateAccessApplicationsForDynamicRouteOutcome listPrivateAccessApplicationsForDynamicRoute(const Model::ListPrivateAccessApplicationsForDynamicRouteRequest &request)const;
			void listPrivateAccessApplicationsForDynamicRouteAsync(const Model::ListPrivateAccessApplicationsForDynamicRouteRequest& request, const ListPrivateAccessApplicationsForDynamicRouteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListPrivateAccessApplicationsForDynamicRouteOutcomeCallable listPrivateAccessApplicationsForDynamicRouteCallable(const Model::ListPrivateAccessApplicationsForDynamicRouteRequest& request) const;
			ListPrivateAccessPolicesOutcome listPrivateAccessPolices(const Model::ListPrivateAccessPolicesRequest &request)const;
			void listPrivateAccessPolicesAsync(const Model::ListPrivateAccessPolicesRequest& request, const ListPrivateAccessPolicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListPrivateAccessPolicesOutcomeCallable listPrivateAccessPolicesCallable(const Model::ListPrivateAccessPolicesRequest& request) const;
			ListPrivateAccessTagsOutcome listPrivateAccessTags(const Model::ListPrivateAccessTagsRequest &request)const;
			void listPrivateAccessTagsAsync(const Model::ListPrivateAccessTagsRequest& request, const ListPrivateAccessTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListPrivateAccessTagsOutcomeCallable listPrivateAccessTagsCallable(const Model::ListPrivateAccessTagsRequest& request) const;
			ListPrivateAccessTagsForDynamicRouteOutcome listPrivateAccessTagsForDynamicRoute(const Model::ListPrivateAccessTagsForDynamicRouteRequest &request)const;
			void listPrivateAccessTagsForDynamicRouteAsync(const Model::ListPrivateAccessTagsForDynamicRouteRequest& request, const ListPrivateAccessTagsForDynamicRouteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListPrivateAccessTagsForDynamicRouteOutcomeCallable listPrivateAccessTagsForDynamicRouteCallable(const Model::ListPrivateAccessTagsForDynamicRouteRequest& request) const;
			ListRegistrationPoliciesOutcome listRegistrationPolicies(const Model::ListRegistrationPoliciesRequest &request)const;
			void listRegistrationPoliciesAsync(const Model::ListRegistrationPoliciesRequest& request, const ListRegistrationPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListRegistrationPoliciesOutcomeCallable listRegistrationPoliciesCallable(const Model::ListRegistrationPoliciesRequest& request) const;
			ListRegistrationPoliciesForUserGroupOutcome listRegistrationPoliciesForUserGroup(const Model::ListRegistrationPoliciesForUserGroupRequest &request)const;
			void listRegistrationPoliciesForUserGroupAsync(const Model::ListRegistrationPoliciesForUserGroupRequest& request, const ListRegistrationPoliciesForUserGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListRegistrationPoliciesForUserGroupOutcomeCallable listRegistrationPoliciesForUserGroupCallable(const Model::ListRegistrationPoliciesForUserGroupRequest& request) const;
			ListSoftwareForUserDeviceOutcome listSoftwareForUserDevice(const Model::ListSoftwareForUserDeviceRequest &request)const;
			void listSoftwareForUserDeviceAsync(const Model::ListSoftwareForUserDeviceRequest& request, const ListSoftwareForUserDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListSoftwareForUserDeviceOutcomeCallable listSoftwareForUserDeviceCallable(const Model::ListSoftwareForUserDeviceRequest& request) const;
			ListTagsForPrivateAccessApplicationOutcome listTagsForPrivateAccessApplication(const Model::ListTagsForPrivateAccessApplicationRequest &request)const;
			void listTagsForPrivateAccessApplicationAsync(const Model::ListTagsForPrivateAccessApplicationRequest& request, const ListTagsForPrivateAccessApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTagsForPrivateAccessApplicationOutcomeCallable listTagsForPrivateAccessApplicationCallable(const Model::ListTagsForPrivateAccessApplicationRequest& request) const;
			ListTagsForPrivateAccessPolicyOutcome listTagsForPrivateAccessPolicy(const Model::ListTagsForPrivateAccessPolicyRequest &request)const;
			void listTagsForPrivateAccessPolicyAsync(const Model::ListTagsForPrivateAccessPolicyRequest& request, const ListTagsForPrivateAccessPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTagsForPrivateAccessPolicyOutcomeCallable listTagsForPrivateAccessPolicyCallable(const Model::ListTagsForPrivateAccessPolicyRequest& request) const;
			ListUninstallApplicationsOutcome listUninstallApplications(const Model::ListUninstallApplicationsRequest &request)const;
			void listUninstallApplicationsAsync(const Model::ListUninstallApplicationsRequest& request, const ListUninstallApplicationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListUninstallApplicationsOutcomeCallable listUninstallApplicationsCallable(const Model::ListUninstallApplicationsRequest& request) const;
			ListUserApplicationsOutcome listUserApplications(const Model::ListUserApplicationsRequest &request)const;
			void listUserApplicationsAsync(const Model::ListUserApplicationsRequest& request, const ListUserApplicationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListUserApplicationsOutcomeCallable listUserApplicationsCallable(const Model::ListUserApplicationsRequest& request) const;
			ListUserDevicesOutcome listUserDevices(const Model::ListUserDevicesRequest &request)const;
			void listUserDevicesAsync(const Model::ListUserDevicesRequest& request, const ListUserDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListUserDevicesOutcomeCallable listUserDevicesCallable(const Model::ListUserDevicesRequest& request) const;
			ListUserGroupsOutcome listUserGroups(const Model::ListUserGroupsRequest &request)const;
			void listUserGroupsAsync(const Model::ListUserGroupsRequest& request, const ListUserGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListUserGroupsOutcomeCallable listUserGroupsCallable(const Model::ListUserGroupsRequest& request) const;
			ListUserGroupsForPrivateAccessPolicyOutcome listUserGroupsForPrivateAccessPolicy(const Model::ListUserGroupsForPrivateAccessPolicyRequest &request)const;
			void listUserGroupsForPrivateAccessPolicyAsync(const Model::ListUserGroupsForPrivateAccessPolicyRequest& request, const ListUserGroupsForPrivateAccessPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListUserGroupsForPrivateAccessPolicyOutcomeCallable listUserGroupsForPrivateAccessPolicyCallable(const Model::ListUserGroupsForPrivateAccessPolicyRequest& request) const;
			ListUserGroupsForRegistrationPolicyOutcome listUserGroupsForRegistrationPolicy(const Model::ListUserGroupsForRegistrationPolicyRequest &request)const;
			void listUserGroupsForRegistrationPolicyAsync(const Model::ListUserGroupsForRegistrationPolicyRequest& request, const ListUserGroupsForRegistrationPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListUserGroupsForRegistrationPolicyOutcomeCallable listUserGroupsForRegistrationPolicyCallable(const Model::ListUserGroupsForRegistrationPolicyRequest& request) const;
			ListUserPrivateAccessPoliciesOutcome listUserPrivateAccessPolicies(const Model::ListUserPrivateAccessPoliciesRequest &request)const;
			void listUserPrivateAccessPoliciesAsync(const Model::ListUserPrivateAccessPoliciesRequest& request, const ListUserPrivateAccessPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListUserPrivateAccessPoliciesOutcomeCallable listUserPrivateAccessPoliciesCallable(const Model::ListUserPrivateAccessPoliciesRequest& request) const;
			ListUsersOutcome listUsers(const Model::ListUsersRequest &request)const;
			void listUsersAsync(const Model::ListUsersRequest& request, const ListUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListUsersOutcomeCallable listUsersCallable(const Model::ListUsersRequest& request) const;
			LookupWmInfoMappingOutcome lookupWmInfoMapping(const Model::LookupWmInfoMappingRequest &request)const;
			void lookupWmInfoMappingAsync(const Model::LookupWmInfoMappingRequest& request, const LookupWmInfoMappingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			LookupWmInfoMappingOutcomeCallable lookupWmInfoMappingCallable(const Model::LookupWmInfoMappingRequest& request) const;
			RevokeUserSessionOutcome revokeUserSession(const Model::RevokeUserSessionRequest &request)const;
			void revokeUserSessionAsync(const Model::RevokeUserSessionRequest& request, const RevokeUserSessionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RevokeUserSessionOutcomeCallable revokeUserSessionCallable(const Model::RevokeUserSessionRequest& request) const;
			UpdateApprovalProcessOutcome updateApprovalProcess(const Model::UpdateApprovalProcessRequest &request)const;
			void updateApprovalProcessAsync(const Model::UpdateApprovalProcessRequest& request, const UpdateApprovalProcessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateApprovalProcessOutcomeCallable updateApprovalProcessCallable(const Model::UpdateApprovalProcessRequest& request) const;
			UpdateApprovalStatusOutcome updateApprovalStatus(const Model::UpdateApprovalStatusRequest &request)const;
			void updateApprovalStatusAsync(const Model::UpdateApprovalStatusRequest& request, const UpdateApprovalStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateApprovalStatusOutcomeCallable updateApprovalStatusCallable(const Model::UpdateApprovalStatusRequest& request) const;
			UpdateBootAndAntiUninstallPolicyOutcome updateBootAndAntiUninstallPolicy(const Model::UpdateBootAndAntiUninstallPolicyRequest &request)const;
			void updateBootAndAntiUninstallPolicyAsync(const Model::UpdateBootAndAntiUninstallPolicyRequest& request, const UpdateBootAndAntiUninstallPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateBootAndAntiUninstallPolicyOutcomeCallable updateBootAndAntiUninstallPolicyCallable(const Model::UpdateBootAndAntiUninstallPolicyRequest& request) const;
			UpdateClientUserOutcome updateClientUser(const Model::UpdateClientUserRequest &request)const;
			void updateClientUserAsync(const Model::UpdateClientUserRequest& request, const UpdateClientUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateClientUserOutcomeCallable updateClientUserCallable(const Model::UpdateClientUserRequest& request) const;
			UpdateClientUserPasswordOutcome updateClientUserPassword(const Model::UpdateClientUserPasswordRequest &request)const;
			void updateClientUserPasswordAsync(const Model::UpdateClientUserPasswordRequest& request, const UpdateClientUserPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateClientUserPasswordOutcomeCallable updateClientUserPasswordCallable(const Model::UpdateClientUserPasswordRequest& request) const;
			UpdateClientUserStatusOutcome updateClientUserStatus(const Model::UpdateClientUserStatusRequest &request)const;
			void updateClientUserStatusAsync(const Model::UpdateClientUserStatusRequest& request, const UpdateClientUserStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateClientUserStatusOutcomeCallable updateClientUserStatusCallable(const Model::UpdateClientUserStatusRequest& request) const;
			UpdateDynamicRouteOutcome updateDynamicRoute(const Model::UpdateDynamicRouteRequest &request)const;
			void updateDynamicRouteAsync(const Model::UpdateDynamicRouteRequest& request, const UpdateDynamicRouteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateDynamicRouteOutcomeCallable updateDynamicRouteCallable(const Model::UpdateDynamicRouteRequest& request) const;
			UpdateExcessiveDeviceRegistrationApplicationsStatusOutcome updateExcessiveDeviceRegistrationApplicationsStatus(const Model::UpdateExcessiveDeviceRegistrationApplicationsStatusRequest &request)const;
			void updateExcessiveDeviceRegistrationApplicationsStatusAsync(const Model::UpdateExcessiveDeviceRegistrationApplicationsStatusRequest& request, const UpdateExcessiveDeviceRegistrationApplicationsStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateExcessiveDeviceRegistrationApplicationsStatusOutcomeCallable updateExcessiveDeviceRegistrationApplicationsStatusCallable(const Model::UpdateExcessiveDeviceRegistrationApplicationsStatusRequest& request) const;
			UpdateIdpDepartmentOutcome updateIdpDepartment(const Model::UpdateIdpDepartmentRequest &request)const;
			void updateIdpDepartmentAsync(const Model::UpdateIdpDepartmentRequest& request, const UpdateIdpDepartmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateIdpDepartmentOutcomeCallable updateIdpDepartmentCallable(const Model::UpdateIdpDepartmentRequest& request) const;
			UpdateNacUserCertStatusOutcome updateNacUserCertStatus(const Model::UpdateNacUserCertStatusRequest &request)const;
			void updateNacUserCertStatusAsync(const Model::UpdateNacUserCertStatusRequest& request, const UpdateNacUserCertStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateNacUserCertStatusOutcomeCallable updateNacUserCertStatusCallable(const Model::UpdateNacUserCertStatusRequest& request) const;
			UpdatePrivateAccessApplicationOutcome updatePrivateAccessApplication(const Model::UpdatePrivateAccessApplicationRequest &request)const;
			void updatePrivateAccessApplicationAsync(const Model::UpdatePrivateAccessApplicationRequest& request, const UpdatePrivateAccessApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdatePrivateAccessApplicationOutcomeCallable updatePrivateAccessApplicationCallable(const Model::UpdatePrivateAccessApplicationRequest& request) const;
			UpdatePrivateAccessPolicyOutcome updatePrivateAccessPolicy(const Model::UpdatePrivateAccessPolicyRequest &request)const;
			void updatePrivateAccessPolicyAsync(const Model::UpdatePrivateAccessPolicyRequest& request, const UpdatePrivateAccessPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdatePrivateAccessPolicyOutcomeCallable updatePrivateAccessPolicyCallable(const Model::UpdatePrivateAccessPolicyRequest& request) const;
			UpdateRegistrationPolicyOutcome updateRegistrationPolicy(const Model::UpdateRegistrationPolicyRequest &request)const;
			void updateRegistrationPolicyAsync(const Model::UpdateRegistrationPolicyRequest& request, const UpdateRegistrationPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateRegistrationPolicyOutcomeCallable updateRegistrationPolicyCallable(const Model::UpdateRegistrationPolicyRequest& request) const;
			UpdateUninstallApplicationsStatusOutcome updateUninstallApplicationsStatus(const Model::UpdateUninstallApplicationsStatusRequest &request)const;
			void updateUninstallApplicationsStatusAsync(const Model::UpdateUninstallApplicationsStatusRequest& request, const UpdateUninstallApplicationsStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateUninstallApplicationsStatusOutcomeCallable updateUninstallApplicationsStatusCallable(const Model::UpdateUninstallApplicationsStatusRequest& request) const;
			UpdateUserDevicesSharingStatusOutcome updateUserDevicesSharingStatus(const Model::UpdateUserDevicesSharingStatusRequest &request)const;
			void updateUserDevicesSharingStatusAsync(const Model::UpdateUserDevicesSharingStatusRequest& request, const UpdateUserDevicesSharingStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateUserDevicesSharingStatusOutcomeCallable updateUserDevicesSharingStatusCallable(const Model::UpdateUserDevicesSharingStatusRequest& request) const;
			UpdateUserDevicesStatusOutcome updateUserDevicesStatus(const Model::UpdateUserDevicesStatusRequest &request)const;
			void updateUserDevicesStatusAsync(const Model::UpdateUserDevicesStatusRequest& request, const UpdateUserDevicesStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateUserDevicesStatusOutcomeCallable updateUserDevicesStatusCallable(const Model::UpdateUserDevicesStatusRequest& request) const;
			UpdateUserGroupOutcome updateUserGroup(const Model::UpdateUserGroupRequest &request)const;
			void updateUserGroupAsync(const Model::UpdateUserGroupRequest& request, const UpdateUserGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateUserGroupOutcomeCallable updateUserGroupCallable(const Model::UpdateUserGroupRequest& request) const;
			UpdateUsersStatusOutcome updateUsersStatus(const Model::UpdateUsersStatusRequest &request)const;
			void updateUsersStatusAsync(const Model::UpdateUsersStatusRequest& request, const UpdateUsersStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateUsersStatusOutcomeCallable updateUsersStatusCallable(const Model::UpdateUsersStatusRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_CSAS_CSASCLIENT_H_
