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

#ifndef ALIBABACLOUD_LTO_LTOCLIENT_H_
#define ALIBABACLOUD_LTO_LTOCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "LtoExport.h"
#include "model/AddBaaSAntChainBizChainRequest.h"
#include "model/AddBaaSAntChainBizChainResult.h"
#include "model/AddBaaSFabricBizChainRequest.h"
#include "model/AddBaaSFabricBizChainResult.h"
#include "model/AddBsnFabricBizChainRequest.h"
#include "model/AddBsnFabricBizChainResult.h"
#include "model/AddDeviceGroupRequest.h"
#include "model/AddDeviceGroupResult.h"
#include "model/AddMemberRequest.h"
#include "model/AddMemberResult.h"
#include "model/AddPrivacyRuleRequest.h"
#include "model/AddPrivacyRuleResult.h"
#include "model/AddRouteRuleRequest.h"
#include "model/AddRouteRuleResult.h"
#include "model/AgreeMemberAccessRequest.h"
#include "model/AgreeMemberAccessResult.h"
#include "model/AuthorizeBaaSRequest.h"
#include "model/AuthorizeBaaSResult.h"
#include "model/AuthorizeDeviceGroupBizChainRequest.h"
#include "model/AuthorizeDeviceGroupBizChainResult.h"
#include "model/AuthorizeMemberBizChainRequest.h"
#include "model/AuthorizeMemberBizChainResult.h"
#include "model/DeletePrivacyRuleRequest.h"
#include "model/DeletePrivacyRuleResult.h"
#include "model/DeleteRouteRuleRequest.h"
#include "model/DeleteRouteRuleResult.h"
#include "model/DeniedMemberAccessRequest.h"
#include "model/DeniedMemberAccessResult.h"
#include "model/DescribeAccountRoleRequest.h"
#include "model/DescribeAccountRoleResult.h"
#include "model/DescribeAdminInfoRequest.h"
#include "model/DescribeAdminInfoResult.h"
#include "model/DescribeBizChainStatInfoRequest.h"
#include "model/DescribeBizChainStatInfoResult.h"
#include "model/DescribeDashboardApiInfoRequest.h"
#include "model/DescribeDashboardApiInfoResult.h"
#include "model/DescribeDashboardBaseInfoRequest.h"
#include "model/DescribeDashboardBaseInfoResult.h"
#include "model/DescribeDashboardDeviceInfoRequest.h"
#include "model/DescribeDashboardDeviceInfoResult.h"
#include "model/DescribeDashboardMemberApiInfoRequest.h"
#include "model/DescribeDashboardMemberApiInfoResult.h"
#include "model/DescribeDashboardMemberDeviceInfoRequest.h"
#include "model/DescribeDashboardMemberDeviceInfoResult.h"
#include "model/DescribeDeviceInfoRequest.h"
#include "model/DescribeDeviceInfoResult.h"
#include "model/DescribeEdgeStatInfoRequest.h"
#include "model/DescribeEdgeStatInfoResult.h"
#include "model/DescribeMemberBizChainStatInfoRequest.h"
#include "model/DescribeMemberBizChainStatInfoResult.h"
#include "model/DescribeMemberStatInfoRequest.h"
#include "model/DescribeMemberStatInfoResult.h"
#include "model/DescribeMemberTotalStatInfoRequest.h"
#include "model/DescribeMemberTotalStatInfoResult.h"
#include "model/DescribePackgeInfoRequest.h"
#include "model/DescribePackgeInfoResult.h"
#include "model/DescribeStatDeviceInfoRequest.h"
#include "model/DescribeStatDeviceInfoResult.h"
#include "model/DescribeStatMemberDeviceInfoRequest.h"
#include "model/DescribeStatMemberDeviceInfoResult.h"
#include "model/DescribeTotalStatInfoRequest.h"
#include "model/DescribeTotalStatInfoResult.h"
#include "model/DisableDeviceRequest.h"
#include "model/DisableDeviceResult.h"
#include "model/DisableDeviceGroupRequest.h"
#include "model/DisableDeviceGroupResult.h"
#include "model/DownloadPrivacyKeyRequest.h"
#include "model/DownloadPrivacyKeyResult.h"
#include "model/EnableDeviceRequest.h"
#include "model/EnableDeviceResult.h"
#include "model/EnableDeviceGroupRequest.h"
#include "model/EnableDeviceGroupResult.h"
#include "model/FreezeMemberRequest.h"
#include "model/FreezeMemberResult.h"
#include "model/GetEdgeTotalDeviceCountRequest.h"
#include "model/GetEdgeTotalDeviceCountResult.h"
#include "model/ListAllAdminRequest.h"
#include "model/ListAllAdminResult.h"
#include "model/ListAllBizChainRequest.h"
#include "model/ListAllBizChainResult.h"
#include "model/ListAllBizChainContractRequest.h"
#include "model/ListAllBizChainContractResult.h"
#include "model/ListAllDeviceGroupRequest.h"
#include "model/ListAllDeviceGroupResult.h"
#include "model/ListAllMemberRequest.h"
#include "model/ListAllMemberResult.h"
#include "model/ListAllPrivacyAlgorithmRequest.h"
#include "model/ListAllPrivacyAlgorithmResult.h"
#include "model/ListAllPrivacyRuleRequest.h"
#include "model/ListAllPrivacyRuleResult.h"
#include "model/ListAllProductKeyRequest.h"
#include "model/ListAllProductKeyResult.h"
#include "model/ListAllSystemContractRequest.h"
#include "model/ListAllSystemContractResult.h"
#include "model/ListBaaSAntChainRequest.h"
#include "model/ListBaaSAntChainResult.h"
#include "model/ListBaaSAntChainConsortiumRequest.h"
#include "model/ListBaaSAntChainConsortiumResult.h"
#include "model/ListBaaSAntChainPeerRequest.h"
#include "model/ListBaaSAntChainPeerResult.h"
#include "model/ListBaaSFabricChannelRequest.h"
#include "model/ListBaaSFabricChannelResult.h"
#include "model/ListBaaSFabricConsortiumRequest.h"
#include "model/ListBaaSFabricConsortiumResult.h"
#include "model/ListBaaSFabricOrganizationRequest.h"
#include "model/ListBaaSFabricOrganizationResult.h"
#include "model/ListBizChainRequest.h"
#include "model/ListBizChainResult.h"
#include "model/ListBizChainDataRequest.h"
#include "model/ListBizChainDataResult.h"
#include "model/ListDeviceRequest.h"
#include "model/ListDeviceResult.h"
#include "model/ListDeviceGroupRequest.h"
#include "model/ListDeviceGroupResult.h"
#include "model/ListDeviceGroupAuthorizedBizChainRequest.h"
#include "model/ListDeviceGroupAuthorizedBizChainResult.h"
#include "model/ListEdgeDeviceRequest.h"
#include "model/ListEdgeDeviceResult.h"
#include "model/ListEdgeDeviceGroupRequest.h"
#include "model/ListEdgeDeviceGroupResult.h"
#include "model/ListMemberRequest.h"
#include "model/ListMemberResult.h"
#include "model/ListMemberAccessRecordRequest.h"
#include "model/ListMemberAccessRecordResult.h"
#include "model/ListMemberAuthorizedBizChainRequest.h"
#include "model/ListMemberAuthorizedBizChainResult.h"
#include "model/ListPrivacyRuleRequest.h"
#include "model/ListPrivacyRuleResult.h"
#include "model/ListPrivacyRuleSharedMemberRequest.h"
#include "model/ListPrivacyRuleSharedMemberResult.h"
#include "model/ListRouteRuleRequest.h"
#include "model/ListRouteRuleResult.h"
#include "model/QueryBlockchainDataRequest.h"
#include "model/QueryBlockchainDataResult.h"
#include "model/QueryBlockchainMetadataRequest.h"
#include "model/QueryBlockchainMetadataResult.h"
#include "model/SharePrivacyRuleRequest.h"
#include "model/SharePrivacyRuleResult.h"
#include "model/UnFreezeMemberRequest.h"
#include "model/UnFreezeMemberResult.h"
#include "model/UpdateBizChainRequest.h"
#include "model/UpdateBizChainResult.h"
#include "model/UpdateMemberRequest.h"
#include "model/UpdateMemberResult.h"
#include "model/UpdatePrivacyRuleRequest.h"
#include "model/UpdatePrivacyRuleResult.h"
#include "model/UpdateRouteRuleRequest.h"
#include "model/UpdateRouteRuleResult.h"
#include "model/UploadIoTDataToBlockchainRequest.h"
#include "model/UploadIoTDataToBlockchainResult.h"


namespace AlibabaCloud
{
	namespace Lto
	{
		class ALIBABACLOUD_LTO_EXPORT LtoClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::AddBaaSAntChainBizChainResult> AddBaaSAntChainBizChainOutcome;
			typedef std::future<AddBaaSAntChainBizChainOutcome> AddBaaSAntChainBizChainOutcomeCallable;
			typedef std::function<void(const LtoClient*, const Model::AddBaaSAntChainBizChainRequest&, const AddBaaSAntChainBizChainOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddBaaSAntChainBizChainAsyncHandler;
			typedef Outcome<Error, Model::AddBaaSFabricBizChainResult> AddBaaSFabricBizChainOutcome;
			typedef std::future<AddBaaSFabricBizChainOutcome> AddBaaSFabricBizChainOutcomeCallable;
			typedef std::function<void(const LtoClient*, const Model::AddBaaSFabricBizChainRequest&, const AddBaaSFabricBizChainOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddBaaSFabricBizChainAsyncHandler;
			typedef Outcome<Error, Model::AddBsnFabricBizChainResult> AddBsnFabricBizChainOutcome;
			typedef std::future<AddBsnFabricBizChainOutcome> AddBsnFabricBizChainOutcomeCallable;
			typedef std::function<void(const LtoClient*, const Model::AddBsnFabricBizChainRequest&, const AddBsnFabricBizChainOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddBsnFabricBizChainAsyncHandler;
			typedef Outcome<Error, Model::AddDeviceGroupResult> AddDeviceGroupOutcome;
			typedef std::future<AddDeviceGroupOutcome> AddDeviceGroupOutcomeCallable;
			typedef std::function<void(const LtoClient*, const Model::AddDeviceGroupRequest&, const AddDeviceGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddDeviceGroupAsyncHandler;
			typedef Outcome<Error, Model::AddMemberResult> AddMemberOutcome;
			typedef std::future<AddMemberOutcome> AddMemberOutcomeCallable;
			typedef std::function<void(const LtoClient*, const Model::AddMemberRequest&, const AddMemberOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddMemberAsyncHandler;
			typedef Outcome<Error, Model::AddPrivacyRuleResult> AddPrivacyRuleOutcome;
			typedef std::future<AddPrivacyRuleOutcome> AddPrivacyRuleOutcomeCallable;
			typedef std::function<void(const LtoClient*, const Model::AddPrivacyRuleRequest&, const AddPrivacyRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddPrivacyRuleAsyncHandler;
			typedef Outcome<Error, Model::AddRouteRuleResult> AddRouteRuleOutcome;
			typedef std::future<AddRouteRuleOutcome> AddRouteRuleOutcomeCallable;
			typedef std::function<void(const LtoClient*, const Model::AddRouteRuleRequest&, const AddRouteRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddRouteRuleAsyncHandler;
			typedef Outcome<Error, Model::AgreeMemberAccessResult> AgreeMemberAccessOutcome;
			typedef std::future<AgreeMemberAccessOutcome> AgreeMemberAccessOutcomeCallable;
			typedef std::function<void(const LtoClient*, const Model::AgreeMemberAccessRequest&, const AgreeMemberAccessOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AgreeMemberAccessAsyncHandler;
			typedef Outcome<Error, Model::AuthorizeBaaSResult> AuthorizeBaaSOutcome;
			typedef std::future<AuthorizeBaaSOutcome> AuthorizeBaaSOutcomeCallable;
			typedef std::function<void(const LtoClient*, const Model::AuthorizeBaaSRequest&, const AuthorizeBaaSOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AuthorizeBaaSAsyncHandler;
			typedef Outcome<Error, Model::AuthorizeDeviceGroupBizChainResult> AuthorizeDeviceGroupBizChainOutcome;
			typedef std::future<AuthorizeDeviceGroupBizChainOutcome> AuthorizeDeviceGroupBizChainOutcomeCallable;
			typedef std::function<void(const LtoClient*, const Model::AuthorizeDeviceGroupBizChainRequest&, const AuthorizeDeviceGroupBizChainOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AuthorizeDeviceGroupBizChainAsyncHandler;
			typedef Outcome<Error, Model::AuthorizeMemberBizChainResult> AuthorizeMemberBizChainOutcome;
			typedef std::future<AuthorizeMemberBizChainOutcome> AuthorizeMemberBizChainOutcomeCallable;
			typedef std::function<void(const LtoClient*, const Model::AuthorizeMemberBizChainRequest&, const AuthorizeMemberBizChainOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AuthorizeMemberBizChainAsyncHandler;
			typedef Outcome<Error, Model::DeletePrivacyRuleResult> DeletePrivacyRuleOutcome;
			typedef std::future<DeletePrivacyRuleOutcome> DeletePrivacyRuleOutcomeCallable;
			typedef std::function<void(const LtoClient*, const Model::DeletePrivacyRuleRequest&, const DeletePrivacyRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeletePrivacyRuleAsyncHandler;
			typedef Outcome<Error, Model::DeleteRouteRuleResult> DeleteRouteRuleOutcome;
			typedef std::future<DeleteRouteRuleOutcome> DeleteRouteRuleOutcomeCallable;
			typedef std::function<void(const LtoClient*, const Model::DeleteRouteRuleRequest&, const DeleteRouteRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRouteRuleAsyncHandler;
			typedef Outcome<Error, Model::DeniedMemberAccessResult> DeniedMemberAccessOutcome;
			typedef std::future<DeniedMemberAccessOutcome> DeniedMemberAccessOutcomeCallable;
			typedef std::function<void(const LtoClient*, const Model::DeniedMemberAccessRequest&, const DeniedMemberAccessOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeniedMemberAccessAsyncHandler;
			typedef Outcome<Error, Model::DescribeAccountRoleResult> DescribeAccountRoleOutcome;
			typedef std::future<DescribeAccountRoleOutcome> DescribeAccountRoleOutcomeCallable;
			typedef std::function<void(const LtoClient*, const Model::DescribeAccountRoleRequest&, const DescribeAccountRoleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccountRoleAsyncHandler;
			typedef Outcome<Error, Model::DescribeAdminInfoResult> DescribeAdminInfoOutcome;
			typedef std::future<DescribeAdminInfoOutcome> DescribeAdminInfoOutcomeCallable;
			typedef std::function<void(const LtoClient*, const Model::DescribeAdminInfoRequest&, const DescribeAdminInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAdminInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeBizChainStatInfoResult> DescribeBizChainStatInfoOutcome;
			typedef std::future<DescribeBizChainStatInfoOutcome> DescribeBizChainStatInfoOutcomeCallable;
			typedef std::function<void(const LtoClient*, const Model::DescribeBizChainStatInfoRequest&, const DescribeBizChainStatInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBizChainStatInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeDashboardApiInfoResult> DescribeDashboardApiInfoOutcome;
			typedef std::future<DescribeDashboardApiInfoOutcome> DescribeDashboardApiInfoOutcomeCallable;
			typedef std::function<void(const LtoClient*, const Model::DescribeDashboardApiInfoRequest&, const DescribeDashboardApiInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDashboardApiInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeDashboardBaseInfoResult> DescribeDashboardBaseInfoOutcome;
			typedef std::future<DescribeDashboardBaseInfoOutcome> DescribeDashboardBaseInfoOutcomeCallable;
			typedef std::function<void(const LtoClient*, const Model::DescribeDashboardBaseInfoRequest&, const DescribeDashboardBaseInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDashboardBaseInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeDashboardDeviceInfoResult> DescribeDashboardDeviceInfoOutcome;
			typedef std::future<DescribeDashboardDeviceInfoOutcome> DescribeDashboardDeviceInfoOutcomeCallable;
			typedef std::function<void(const LtoClient*, const Model::DescribeDashboardDeviceInfoRequest&, const DescribeDashboardDeviceInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDashboardDeviceInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeDashboardMemberApiInfoResult> DescribeDashboardMemberApiInfoOutcome;
			typedef std::future<DescribeDashboardMemberApiInfoOutcome> DescribeDashboardMemberApiInfoOutcomeCallable;
			typedef std::function<void(const LtoClient*, const Model::DescribeDashboardMemberApiInfoRequest&, const DescribeDashboardMemberApiInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDashboardMemberApiInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeDashboardMemberDeviceInfoResult> DescribeDashboardMemberDeviceInfoOutcome;
			typedef std::future<DescribeDashboardMemberDeviceInfoOutcome> DescribeDashboardMemberDeviceInfoOutcomeCallable;
			typedef std::function<void(const LtoClient*, const Model::DescribeDashboardMemberDeviceInfoRequest&, const DescribeDashboardMemberDeviceInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDashboardMemberDeviceInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeDeviceInfoResult> DescribeDeviceInfoOutcome;
			typedef std::future<DescribeDeviceInfoOutcome> DescribeDeviceInfoOutcomeCallable;
			typedef std::function<void(const LtoClient*, const Model::DescribeDeviceInfoRequest&, const DescribeDeviceInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDeviceInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeEdgeStatInfoResult> DescribeEdgeStatInfoOutcome;
			typedef std::future<DescribeEdgeStatInfoOutcome> DescribeEdgeStatInfoOutcomeCallable;
			typedef std::function<void(const LtoClient*, const Model::DescribeEdgeStatInfoRequest&, const DescribeEdgeStatInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEdgeStatInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeMemberBizChainStatInfoResult> DescribeMemberBizChainStatInfoOutcome;
			typedef std::future<DescribeMemberBizChainStatInfoOutcome> DescribeMemberBizChainStatInfoOutcomeCallable;
			typedef std::function<void(const LtoClient*, const Model::DescribeMemberBizChainStatInfoRequest&, const DescribeMemberBizChainStatInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMemberBizChainStatInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeMemberStatInfoResult> DescribeMemberStatInfoOutcome;
			typedef std::future<DescribeMemberStatInfoOutcome> DescribeMemberStatInfoOutcomeCallable;
			typedef std::function<void(const LtoClient*, const Model::DescribeMemberStatInfoRequest&, const DescribeMemberStatInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMemberStatInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeMemberTotalStatInfoResult> DescribeMemberTotalStatInfoOutcome;
			typedef std::future<DescribeMemberTotalStatInfoOutcome> DescribeMemberTotalStatInfoOutcomeCallable;
			typedef std::function<void(const LtoClient*, const Model::DescribeMemberTotalStatInfoRequest&, const DescribeMemberTotalStatInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMemberTotalStatInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribePackgeInfoResult> DescribePackgeInfoOutcome;
			typedef std::future<DescribePackgeInfoOutcome> DescribePackgeInfoOutcomeCallable;
			typedef std::function<void(const LtoClient*, const Model::DescribePackgeInfoRequest&, const DescribePackgeInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribePackgeInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeStatDeviceInfoResult> DescribeStatDeviceInfoOutcome;
			typedef std::future<DescribeStatDeviceInfoOutcome> DescribeStatDeviceInfoOutcomeCallable;
			typedef std::function<void(const LtoClient*, const Model::DescribeStatDeviceInfoRequest&, const DescribeStatDeviceInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStatDeviceInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeStatMemberDeviceInfoResult> DescribeStatMemberDeviceInfoOutcome;
			typedef std::future<DescribeStatMemberDeviceInfoOutcome> DescribeStatMemberDeviceInfoOutcomeCallable;
			typedef std::function<void(const LtoClient*, const Model::DescribeStatMemberDeviceInfoRequest&, const DescribeStatMemberDeviceInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStatMemberDeviceInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeTotalStatInfoResult> DescribeTotalStatInfoOutcome;
			typedef std::future<DescribeTotalStatInfoOutcome> DescribeTotalStatInfoOutcomeCallable;
			typedef std::function<void(const LtoClient*, const Model::DescribeTotalStatInfoRequest&, const DescribeTotalStatInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTotalStatInfoAsyncHandler;
			typedef Outcome<Error, Model::DisableDeviceResult> DisableDeviceOutcome;
			typedef std::future<DisableDeviceOutcome> DisableDeviceOutcomeCallable;
			typedef std::function<void(const LtoClient*, const Model::DisableDeviceRequest&, const DisableDeviceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DisableDeviceAsyncHandler;
			typedef Outcome<Error, Model::DisableDeviceGroupResult> DisableDeviceGroupOutcome;
			typedef std::future<DisableDeviceGroupOutcome> DisableDeviceGroupOutcomeCallable;
			typedef std::function<void(const LtoClient*, const Model::DisableDeviceGroupRequest&, const DisableDeviceGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DisableDeviceGroupAsyncHandler;
			typedef Outcome<Error, Model::DownloadPrivacyKeyResult> DownloadPrivacyKeyOutcome;
			typedef std::future<DownloadPrivacyKeyOutcome> DownloadPrivacyKeyOutcomeCallable;
			typedef std::function<void(const LtoClient*, const Model::DownloadPrivacyKeyRequest&, const DownloadPrivacyKeyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DownloadPrivacyKeyAsyncHandler;
			typedef Outcome<Error, Model::EnableDeviceResult> EnableDeviceOutcome;
			typedef std::future<EnableDeviceOutcome> EnableDeviceOutcomeCallable;
			typedef std::function<void(const LtoClient*, const Model::EnableDeviceRequest&, const EnableDeviceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EnableDeviceAsyncHandler;
			typedef Outcome<Error, Model::EnableDeviceGroupResult> EnableDeviceGroupOutcome;
			typedef std::future<EnableDeviceGroupOutcome> EnableDeviceGroupOutcomeCallable;
			typedef std::function<void(const LtoClient*, const Model::EnableDeviceGroupRequest&, const EnableDeviceGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EnableDeviceGroupAsyncHandler;
			typedef Outcome<Error, Model::FreezeMemberResult> FreezeMemberOutcome;
			typedef std::future<FreezeMemberOutcome> FreezeMemberOutcomeCallable;
			typedef std::function<void(const LtoClient*, const Model::FreezeMemberRequest&, const FreezeMemberOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> FreezeMemberAsyncHandler;
			typedef Outcome<Error, Model::GetEdgeTotalDeviceCountResult> GetEdgeTotalDeviceCountOutcome;
			typedef std::future<GetEdgeTotalDeviceCountOutcome> GetEdgeTotalDeviceCountOutcomeCallable;
			typedef std::function<void(const LtoClient*, const Model::GetEdgeTotalDeviceCountRequest&, const GetEdgeTotalDeviceCountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetEdgeTotalDeviceCountAsyncHandler;
			typedef Outcome<Error, Model::ListAllAdminResult> ListAllAdminOutcome;
			typedef std::future<ListAllAdminOutcome> ListAllAdminOutcomeCallable;
			typedef std::function<void(const LtoClient*, const Model::ListAllAdminRequest&, const ListAllAdminOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAllAdminAsyncHandler;
			typedef Outcome<Error, Model::ListAllBizChainResult> ListAllBizChainOutcome;
			typedef std::future<ListAllBizChainOutcome> ListAllBizChainOutcomeCallable;
			typedef std::function<void(const LtoClient*, const Model::ListAllBizChainRequest&, const ListAllBizChainOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAllBizChainAsyncHandler;
			typedef Outcome<Error, Model::ListAllBizChainContractResult> ListAllBizChainContractOutcome;
			typedef std::future<ListAllBizChainContractOutcome> ListAllBizChainContractOutcomeCallable;
			typedef std::function<void(const LtoClient*, const Model::ListAllBizChainContractRequest&, const ListAllBizChainContractOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAllBizChainContractAsyncHandler;
			typedef Outcome<Error, Model::ListAllDeviceGroupResult> ListAllDeviceGroupOutcome;
			typedef std::future<ListAllDeviceGroupOutcome> ListAllDeviceGroupOutcomeCallable;
			typedef std::function<void(const LtoClient*, const Model::ListAllDeviceGroupRequest&, const ListAllDeviceGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAllDeviceGroupAsyncHandler;
			typedef Outcome<Error, Model::ListAllMemberResult> ListAllMemberOutcome;
			typedef std::future<ListAllMemberOutcome> ListAllMemberOutcomeCallable;
			typedef std::function<void(const LtoClient*, const Model::ListAllMemberRequest&, const ListAllMemberOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAllMemberAsyncHandler;
			typedef Outcome<Error, Model::ListAllPrivacyAlgorithmResult> ListAllPrivacyAlgorithmOutcome;
			typedef std::future<ListAllPrivacyAlgorithmOutcome> ListAllPrivacyAlgorithmOutcomeCallable;
			typedef std::function<void(const LtoClient*, const Model::ListAllPrivacyAlgorithmRequest&, const ListAllPrivacyAlgorithmOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAllPrivacyAlgorithmAsyncHandler;
			typedef Outcome<Error, Model::ListAllPrivacyRuleResult> ListAllPrivacyRuleOutcome;
			typedef std::future<ListAllPrivacyRuleOutcome> ListAllPrivacyRuleOutcomeCallable;
			typedef std::function<void(const LtoClient*, const Model::ListAllPrivacyRuleRequest&, const ListAllPrivacyRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAllPrivacyRuleAsyncHandler;
			typedef Outcome<Error, Model::ListAllProductKeyResult> ListAllProductKeyOutcome;
			typedef std::future<ListAllProductKeyOutcome> ListAllProductKeyOutcomeCallable;
			typedef std::function<void(const LtoClient*, const Model::ListAllProductKeyRequest&, const ListAllProductKeyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAllProductKeyAsyncHandler;
			typedef Outcome<Error, Model::ListAllSystemContractResult> ListAllSystemContractOutcome;
			typedef std::future<ListAllSystemContractOutcome> ListAllSystemContractOutcomeCallable;
			typedef std::function<void(const LtoClient*, const Model::ListAllSystemContractRequest&, const ListAllSystemContractOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAllSystemContractAsyncHandler;
			typedef Outcome<Error, Model::ListBaaSAntChainResult> ListBaaSAntChainOutcome;
			typedef std::future<ListBaaSAntChainOutcome> ListBaaSAntChainOutcomeCallable;
			typedef std::function<void(const LtoClient*, const Model::ListBaaSAntChainRequest&, const ListBaaSAntChainOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListBaaSAntChainAsyncHandler;
			typedef Outcome<Error, Model::ListBaaSAntChainConsortiumResult> ListBaaSAntChainConsortiumOutcome;
			typedef std::future<ListBaaSAntChainConsortiumOutcome> ListBaaSAntChainConsortiumOutcomeCallable;
			typedef std::function<void(const LtoClient*, const Model::ListBaaSAntChainConsortiumRequest&, const ListBaaSAntChainConsortiumOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListBaaSAntChainConsortiumAsyncHandler;
			typedef Outcome<Error, Model::ListBaaSAntChainPeerResult> ListBaaSAntChainPeerOutcome;
			typedef std::future<ListBaaSAntChainPeerOutcome> ListBaaSAntChainPeerOutcomeCallable;
			typedef std::function<void(const LtoClient*, const Model::ListBaaSAntChainPeerRequest&, const ListBaaSAntChainPeerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListBaaSAntChainPeerAsyncHandler;
			typedef Outcome<Error, Model::ListBaaSFabricChannelResult> ListBaaSFabricChannelOutcome;
			typedef std::future<ListBaaSFabricChannelOutcome> ListBaaSFabricChannelOutcomeCallable;
			typedef std::function<void(const LtoClient*, const Model::ListBaaSFabricChannelRequest&, const ListBaaSFabricChannelOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListBaaSFabricChannelAsyncHandler;
			typedef Outcome<Error, Model::ListBaaSFabricConsortiumResult> ListBaaSFabricConsortiumOutcome;
			typedef std::future<ListBaaSFabricConsortiumOutcome> ListBaaSFabricConsortiumOutcomeCallable;
			typedef std::function<void(const LtoClient*, const Model::ListBaaSFabricConsortiumRequest&, const ListBaaSFabricConsortiumOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListBaaSFabricConsortiumAsyncHandler;
			typedef Outcome<Error, Model::ListBaaSFabricOrganizationResult> ListBaaSFabricOrganizationOutcome;
			typedef std::future<ListBaaSFabricOrganizationOutcome> ListBaaSFabricOrganizationOutcomeCallable;
			typedef std::function<void(const LtoClient*, const Model::ListBaaSFabricOrganizationRequest&, const ListBaaSFabricOrganizationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListBaaSFabricOrganizationAsyncHandler;
			typedef Outcome<Error, Model::ListBizChainResult> ListBizChainOutcome;
			typedef std::future<ListBizChainOutcome> ListBizChainOutcomeCallable;
			typedef std::function<void(const LtoClient*, const Model::ListBizChainRequest&, const ListBizChainOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListBizChainAsyncHandler;
			typedef Outcome<Error, Model::ListBizChainDataResult> ListBizChainDataOutcome;
			typedef std::future<ListBizChainDataOutcome> ListBizChainDataOutcomeCallable;
			typedef std::function<void(const LtoClient*, const Model::ListBizChainDataRequest&, const ListBizChainDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListBizChainDataAsyncHandler;
			typedef Outcome<Error, Model::ListDeviceResult> ListDeviceOutcome;
			typedef std::future<ListDeviceOutcome> ListDeviceOutcomeCallable;
			typedef std::function<void(const LtoClient*, const Model::ListDeviceRequest&, const ListDeviceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDeviceAsyncHandler;
			typedef Outcome<Error, Model::ListDeviceGroupResult> ListDeviceGroupOutcome;
			typedef std::future<ListDeviceGroupOutcome> ListDeviceGroupOutcomeCallable;
			typedef std::function<void(const LtoClient*, const Model::ListDeviceGroupRequest&, const ListDeviceGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDeviceGroupAsyncHandler;
			typedef Outcome<Error, Model::ListDeviceGroupAuthorizedBizChainResult> ListDeviceGroupAuthorizedBizChainOutcome;
			typedef std::future<ListDeviceGroupAuthorizedBizChainOutcome> ListDeviceGroupAuthorizedBizChainOutcomeCallable;
			typedef std::function<void(const LtoClient*, const Model::ListDeviceGroupAuthorizedBizChainRequest&, const ListDeviceGroupAuthorizedBizChainOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDeviceGroupAuthorizedBizChainAsyncHandler;
			typedef Outcome<Error, Model::ListEdgeDeviceResult> ListEdgeDeviceOutcome;
			typedef std::future<ListEdgeDeviceOutcome> ListEdgeDeviceOutcomeCallable;
			typedef std::function<void(const LtoClient*, const Model::ListEdgeDeviceRequest&, const ListEdgeDeviceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListEdgeDeviceAsyncHandler;
			typedef Outcome<Error, Model::ListEdgeDeviceGroupResult> ListEdgeDeviceGroupOutcome;
			typedef std::future<ListEdgeDeviceGroupOutcome> ListEdgeDeviceGroupOutcomeCallable;
			typedef std::function<void(const LtoClient*, const Model::ListEdgeDeviceGroupRequest&, const ListEdgeDeviceGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListEdgeDeviceGroupAsyncHandler;
			typedef Outcome<Error, Model::ListMemberResult> ListMemberOutcome;
			typedef std::future<ListMemberOutcome> ListMemberOutcomeCallable;
			typedef std::function<void(const LtoClient*, const Model::ListMemberRequest&, const ListMemberOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListMemberAsyncHandler;
			typedef Outcome<Error, Model::ListMemberAccessRecordResult> ListMemberAccessRecordOutcome;
			typedef std::future<ListMemberAccessRecordOutcome> ListMemberAccessRecordOutcomeCallable;
			typedef std::function<void(const LtoClient*, const Model::ListMemberAccessRecordRequest&, const ListMemberAccessRecordOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListMemberAccessRecordAsyncHandler;
			typedef Outcome<Error, Model::ListMemberAuthorizedBizChainResult> ListMemberAuthorizedBizChainOutcome;
			typedef std::future<ListMemberAuthorizedBizChainOutcome> ListMemberAuthorizedBizChainOutcomeCallable;
			typedef std::function<void(const LtoClient*, const Model::ListMemberAuthorizedBizChainRequest&, const ListMemberAuthorizedBizChainOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListMemberAuthorizedBizChainAsyncHandler;
			typedef Outcome<Error, Model::ListPrivacyRuleResult> ListPrivacyRuleOutcome;
			typedef std::future<ListPrivacyRuleOutcome> ListPrivacyRuleOutcomeCallable;
			typedef std::function<void(const LtoClient*, const Model::ListPrivacyRuleRequest&, const ListPrivacyRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListPrivacyRuleAsyncHandler;
			typedef Outcome<Error, Model::ListPrivacyRuleSharedMemberResult> ListPrivacyRuleSharedMemberOutcome;
			typedef std::future<ListPrivacyRuleSharedMemberOutcome> ListPrivacyRuleSharedMemberOutcomeCallable;
			typedef std::function<void(const LtoClient*, const Model::ListPrivacyRuleSharedMemberRequest&, const ListPrivacyRuleSharedMemberOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListPrivacyRuleSharedMemberAsyncHandler;
			typedef Outcome<Error, Model::ListRouteRuleResult> ListRouteRuleOutcome;
			typedef std::future<ListRouteRuleOutcome> ListRouteRuleOutcomeCallable;
			typedef std::function<void(const LtoClient*, const Model::ListRouteRuleRequest&, const ListRouteRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListRouteRuleAsyncHandler;
			typedef Outcome<Error, Model::QueryBlockchainDataResult> QueryBlockchainDataOutcome;
			typedef std::future<QueryBlockchainDataOutcome> QueryBlockchainDataOutcomeCallable;
			typedef std::function<void(const LtoClient*, const Model::QueryBlockchainDataRequest&, const QueryBlockchainDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryBlockchainDataAsyncHandler;
			typedef Outcome<Error, Model::QueryBlockchainMetadataResult> QueryBlockchainMetadataOutcome;
			typedef std::future<QueryBlockchainMetadataOutcome> QueryBlockchainMetadataOutcomeCallable;
			typedef std::function<void(const LtoClient*, const Model::QueryBlockchainMetadataRequest&, const QueryBlockchainMetadataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryBlockchainMetadataAsyncHandler;
			typedef Outcome<Error, Model::SharePrivacyRuleResult> SharePrivacyRuleOutcome;
			typedef std::future<SharePrivacyRuleOutcome> SharePrivacyRuleOutcomeCallable;
			typedef std::function<void(const LtoClient*, const Model::SharePrivacyRuleRequest&, const SharePrivacyRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SharePrivacyRuleAsyncHandler;
			typedef Outcome<Error, Model::UnFreezeMemberResult> UnFreezeMemberOutcome;
			typedef std::future<UnFreezeMemberOutcome> UnFreezeMemberOutcomeCallable;
			typedef std::function<void(const LtoClient*, const Model::UnFreezeMemberRequest&, const UnFreezeMemberOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UnFreezeMemberAsyncHandler;
			typedef Outcome<Error, Model::UpdateBizChainResult> UpdateBizChainOutcome;
			typedef std::future<UpdateBizChainOutcome> UpdateBizChainOutcomeCallable;
			typedef std::function<void(const LtoClient*, const Model::UpdateBizChainRequest&, const UpdateBizChainOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateBizChainAsyncHandler;
			typedef Outcome<Error, Model::UpdateMemberResult> UpdateMemberOutcome;
			typedef std::future<UpdateMemberOutcome> UpdateMemberOutcomeCallable;
			typedef std::function<void(const LtoClient*, const Model::UpdateMemberRequest&, const UpdateMemberOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateMemberAsyncHandler;
			typedef Outcome<Error, Model::UpdatePrivacyRuleResult> UpdatePrivacyRuleOutcome;
			typedef std::future<UpdatePrivacyRuleOutcome> UpdatePrivacyRuleOutcomeCallable;
			typedef std::function<void(const LtoClient*, const Model::UpdatePrivacyRuleRequest&, const UpdatePrivacyRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdatePrivacyRuleAsyncHandler;
			typedef Outcome<Error, Model::UpdateRouteRuleResult> UpdateRouteRuleOutcome;
			typedef std::future<UpdateRouteRuleOutcome> UpdateRouteRuleOutcomeCallable;
			typedef std::function<void(const LtoClient*, const Model::UpdateRouteRuleRequest&, const UpdateRouteRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateRouteRuleAsyncHandler;
			typedef Outcome<Error, Model::UploadIoTDataToBlockchainResult> UploadIoTDataToBlockchainOutcome;
			typedef std::future<UploadIoTDataToBlockchainOutcome> UploadIoTDataToBlockchainOutcomeCallable;
			typedef std::function<void(const LtoClient*, const Model::UploadIoTDataToBlockchainRequest&, const UploadIoTDataToBlockchainOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UploadIoTDataToBlockchainAsyncHandler;

			LtoClient(const Credentials &credentials, const ClientConfiguration &configuration);
			LtoClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			LtoClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~LtoClient();
			AddBaaSAntChainBizChainOutcome addBaaSAntChainBizChain(const Model::AddBaaSAntChainBizChainRequest &request)const;
			void addBaaSAntChainBizChainAsync(const Model::AddBaaSAntChainBizChainRequest& request, const AddBaaSAntChainBizChainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddBaaSAntChainBizChainOutcomeCallable addBaaSAntChainBizChainCallable(const Model::AddBaaSAntChainBizChainRequest& request) const;
			AddBaaSFabricBizChainOutcome addBaaSFabricBizChain(const Model::AddBaaSFabricBizChainRequest &request)const;
			void addBaaSFabricBizChainAsync(const Model::AddBaaSFabricBizChainRequest& request, const AddBaaSFabricBizChainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddBaaSFabricBizChainOutcomeCallable addBaaSFabricBizChainCallable(const Model::AddBaaSFabricBizChainRequest& request) const;
			AddBsnFabricBizChainOutcome addBsnFabricBizChain(const Model::AddBsnFabricBizChainRequest &request)const;
			void addBsnFabricBizChainAsync(const Model::AddBsnFabricBizChainRequest& request, const AddBsnFabricBizChainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddBsnFabricBizChainOutcomeCallable addBsnFabricBizChainCallable(const Model::AddBsnFabricBizChainRequest& request) const;
			AddDeviceGroupOutcome addDeviceGroup(const Model::AddDeviceGroupRequest &request)const;
			void addDeviceGroupAsync(const Model::AddDeviceGroupRequest& request, const AddDeviceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddDeviceGroupOutcomeCallable addDeviceGroupCallable(const Model::AddDeviceGroupRequest& request) const;
			AddMemberOutcome addMember(const Model::AddMemberRequest &request)const;
			void addMemberAsync(const Model::AddMemberRequest& request, const AddMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddMemberOutcomeCallable addMemberCallable(const Model::AddMemberRequest& request) const;
			AddPrivacyRuleOutcome addPrivacyRule(const Model::AddPrivacyRuleRequest &request)const;
			void addPrivacyRuleAsync(const Model::AddPrivacyRuleRequest& request, const AddPrivacyRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddPrivacyRuleOutcomeCallable addPrivacyRuleCallable(const Model::AddPrivacyRuleRequest& request) const;
			AddRouteRuleOutcome addRouteRule(const Model::AddRouteRuleRequest &request)const;
			void addRouteRuleAsync(const Model::AddRouteRuleRequest& request, const AddRouteRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddRouteRuleOutcomeCallable addRouteRuleCallable(const Model::AddRouteRuleRequest& request) const;
			AgreeMemberAccessOutcome agreeMemberAccess(const Model::AgreeMemberAccessRequest &request)const;
			void agreeMemberAccessAsync(const Model::AgreeMemberAccessRequest& request, const AgreeMemberAccessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AgreeMemberAccessOutcomeCallable agreeMemberAccessCallable(const Model::AgreeMemberAccessRequest& request) const;
			AuthorizeBaaSOutcome authorizeBaaS(const Model::AuthorizeBaaSRequest &request)const;
			void authorizeBaaSAsync(const Model::AuthorizeBaaSRequest& request, const AuthorizeBaaSAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AuthorizeBaaSOutcomeCallable authorizeBaaSCallable(const Model::AuthorizeBaaSRequest& request) const;
			AuthorizeDeviceGroupBizChainOutcome authorizeDeviceGroupBizChain(const Model::AuthorizeDeviceGroupBizChainRequest &request)const;
			void authorizeDeviceGroupBizChainAsync(const Model::AuthorizeDeviceGroupBizChainRequest& request, const AuthorizeDeviceGroupBizChainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AuthorizeDeviceGroupBizChainOutcomeCallable authorizeDeviceGroupBizChainCallable(const Model::AuthorizeDeviceGroupBizChainRequest& request) const;
			AuthorizeMemberBizChainOutcome authorizeMemberBizChain(const Model::AuthorizeMemberBizChainRequest &request)const;
			void authorizeMemberBizChainAsync(const Model::AuthorizeMemberBizChainRequest& request, const AuthorizeMemberBizChainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AuthorizeMemberBizChainOutcomeCallable authorizeMemberBizChainCallable(const Model::AuthorizeMemberBizChainRequest& request) const;
			DeletePrivacyRuleOutcome deletePrivacyRule(const Model::DeletePrivacyRuleRequest &request)const;
			void deletePrivacyRuleAsync(const Model::DeletePrivacyRuleRequest& request, const DeletePrivacyRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeletePrivacyRuleOutcomeCallable deletePrivacyRuleCallable(const Model::DeletePrivacyRuleRequest& request) const;
			DeleteRouteRuleOutcome deleteRouteRule(const Model::DeleteRouteRuleRequest &request)const;
			void deleteRouteRuleAsync(const Model::DeleteRouteRuleRequest& request, const DeleteRouteRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteRouteRuleOutcomeCallable deleteRouteRuleCallable(const Model::DeleteRouteRuleRequest& request) const;
			DeniedMemberAccessOutcome deniedMemberAccess(const Model::DeniedMemberAccessRequest &request)const;
			void deniedMemberAccessAsync(const Model::DeniedMemberAccessRequest& request, const DeniedMemberAccessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeniedMemberAccessOutcomeCallable deniedMemberAccessCallable(const Model::DeniedMemberAccessRequest& request) const;
			DescribeAccountRoleOutcome describeAccountRole(const Model::DescribeAccountRoleRequest &request)const;
			void describeAccountRoleAsync(const Model::DescribeAccountRoleRequest& request, const DescribeAccountRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAccountRoleOutcomeCallable describeAccountRoleCallable(const Model::DescribeAccountRoleRequest& request) const;
			DescribeAdminInfoOutcome describeAdminInfo(const Model::DescribeAdminInfoRequest &request)const;
			void describeAdminInfoAsync(const Model::DescribeAdminInfoRequest& request, const DescribeAdminInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAdminInfoOutcomeCallable describeAdminInfoCallable(const Model::DescribeAdminInfoRequest& request) const;
			DescribeBizChainStatInfoOutcome describeBizChainStatInfo(const Model::DescribeBizChainStatInfoRequest &request)const;
			void describeBizChainStatInfoAsync(const Model::DescribeBizChainStatInfoRequest& request, const DescribeBizChainStatInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeBizChainStatInfoOutcomeCallable describeBizChainStatInfoCallable(const Model::DescribeBizChainStatInfoRequest& request) const;
			DescribeDashboardApiInfoOutcome describeDashboardApiInfo(const Model::DescribeDashboardApiInfoRequest &request)const;
			void describeDashboardApiInfoAsync(const Model::DescribeDashboardApiInfoRequest& request, const DescribeDashboardApiInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDashboardApiInfoOutcomeCallable describeDashboardApiInfoCallable(const Model::DescribeDashboardApiInfoRequest& request) const;
			DescribeDashboardBaseInfoOutcome describeDashboardBaseInfo(const Model::DescribeDashboardBaseInfoRequest &request)const;
			void describeDashboardBaseInfoAsync(const Model::DescribeDashboardBaseInfoRequest& request, const DescribeDashboardBaseInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDashboardBaseInfoOutcomeCallable describeDashboardBaseInfoCallable(const Model::DescribeDashboardBaseInfoRequest& request) const;
			DescribeDashboardDeviceInfoOutcome describeDashboardDeviceInfo(const Model::DescribeDashboardDeviceInfoRequest &request)const;
			void describeDashboardDeviceInfoAsync(const Model::DescribeDashboardDeviceInfoRequest& request, const DescribeDashboardDeviceInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDashboardDeviceInfoOutcomeCallable describeDashboardDeviceInfoCallable(const Model::DescribeDashboardDeviceInfoRequest& request) const;
			DescribeDashboardMemberApiInfoOutcome describeDashboardMemberApiInfo(const Model::DescribeDashboardMemberApiInfoRequest &request)const;
			void describeDashboardMemberApiInfoAsync(const Model::DescribeDashboardMemberApiInfoRequest& request, const DescribeDashboardMemberApiInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDashboardMemberApiInfoOutcomeCallable describeDashboardMemberApiInfoCallable(const Model::DescribeDashboardMemberApiInfoRequest& request) const;
			DescribeDashboardMemberDeviceInfoOutcome describeDashboardMemberDeviceInfo(const Model::DescribeDashboardMemberDeviceInfoRequest &request)const;
			void describeDashboardMemberDeviceInfoAsync(const Model::DescribeDashboardMemberDeviceInfoRequest& request, const DescribeDashboardMemberDeviceInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDashboardMemberDeviceInfoOutcomeCallable describeDashboardMemberDeviceInfoCallable(const Model::DescribeDashboardMemberDeviceInfoRequest& request) const;
			DescribeDeviceInfoOutcome describeDeviceInfo(const Model::DescribeDeviceInfoRequest &request)const;
			void describeDeviceInfoAsync(const Model::DescribeDeviceInfoRequest& request, const DescribeDeviceInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDeviceInfoOutcomeCallable describeDeviceInfoCallable(const Model::DescribeDeviceInfoRequest& request) const;
			DescribeEdgeStatInfoOutcome describeEdgeStatInfo(const Model::DescribeEdgeStatInfoRequest &request)const;
			void describeEdgeStatInfoAsync(const Model::DescribeEdgeStatInfoRequest& request, const DescribeEdgeStatInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeEdgeStatInfoOutcomeCallable describeEdgeStatInfoCallable(const Model::DescribeEdgeStatInfoRequest& request) const;
			DescribeMemberBizChainStatInfoOutcome describeMemberBizChainStatInfo(const Model::DescribeMemberBizChainStatInfoRequest &request)const;
			void describeMemberBizChainStatInfoAsync(const Model::DescribeMemberBizChainStatInfoRequest& request, const DescribeMemberBizChainStatInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeMemberBizChainStatInfoOutcomeCallable describeMemberBizChainStatInfoCallable(const Model::DescribeMemberBizChainStatInfoRequest& request) const;
			DescribeMemberStatInfoOutcome describeMemberStatInfo(const Model::DescribeMemberStatInfoRequest &request)const;
			void describeMemberStatInfoAsync(const Model::DescribeMemberStatInfoRequest& request, const DescribeMemberStatInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeMemberStatInfoOutcomeCallable describeMemberStatInfoCallable(const Model::DescribeMemberStatInfoRequest& request) const;
			DescribeMemberTotalStatInfoOutcome describeMemberTotalStatInfo(const Model::DescribeMemberTotalStatInfoRequest &request)const;
			void describeMemberTotalStatInfoAsync(const Model::DescribeMemberTotalStatInfoRequest& request, const DescribeMemberTotalStatInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeMemberTotalStatInfoOutcomeCallable describeMemberTotalStatInfoCallable(const Model::DescribeMemberTotalStatInfoRequest& request) const;
			DescribePackgeInfoOutcome describePackgeInfo(const Model::DescribePackgeInfoRequest &request)const;
			void describePackgeInfoAsync(const Model::DescribePackgeInfoRequest& request, const DescribePackgeInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribePackgeInfoOutcomeCallable describePackgeInfoCallable(const Model::DescribePackgeInfoRequest& request) const;
			DescribeStatDeviceInfoOutcome describeStatDeviceInfo(const Model::DescribeStatDeviceInfoRequest &request)const;
			void describeStatDeviceInfoAsync(const Model::DescribeStatDeviceInfoRequest& request, const DescribeStatDeviceInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeStatDeviceInfoOutcomeCallable describeStatDeviceInfoCallable(const Model::DescribeStatDeviceInfoRequest& request) const;
			DescribeStatMemberDeviceInfoOutcome describeStatMemberDeviceInfo(const Model::DescribeStatMemberDeviceInfoRequest &request)const;
			void describeStatMemberDeviceInfoAsync(const Model::DescribeStatMemberDeviceInfoRequest& request, const DescribeStatMemberDeviceInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeStatMemberDeviceInfoOutcomeCallable describeStatMemberDeviceInfoCallable(const Model::DescribeStatMemberDeviceInfoRequest& request) const;
			DescribeTotalStatInfoOutcome describeTotalStatInfo(const Model::DescribeTotalStatInfoRequest &request)const;
			void describeTotalStatInfoAsync(const Model::DescribeTotalStatInfoRequest& request, const DescribeTotalStatInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeTotalStatInfoOutcomeCallable describeTotalStatInfoCallable(const Model::DescribeTotalStatInfoRequest& request) const;
			DisableDeviceOutcome disableDevice(const Model::DisableDeviceRequest &request)const;
			void disableDeviceAsync(const Model::DisableDeviceRequest& request, const DisableDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DisableDeviceOutcomeCallable disableDeviceCallable(const Model::DisableDeviceRequest& request) const;
			DisableDeviceGroupOutcome disableDeviceGroup(const Model::DisableDeviceGroupRequest &request)const;
			void disableDeviceGroupAsync(const Model::DisableDeviceGroupRequest& request, const DisableDeviceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DisableDeviceGroupOutcomeCallable disableDeviceGroupCallable(const Model::DisableDeviceGroupRequest& request) const;
			DownloadPrivacyKeyOutcome downloadPrivacyKey(const Model::DownloadPrivacyKeyRequest &request)const;
			void downloadPrivacyKeyAsync(const Model::DownloadPrivacyKeyRequest& request, const DownloadPrivacyKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DownloadPrivacyKeyOutcomeCallable downloadPrivacyKeyCallable(const Model::DownloadPrivacyKeyRequest& request) const;
			EnableDeviceOutcome enableDevice(const Model::EnableDeviceRequest &request)const;
			void enableDeviceAsync(const Model::EnableDeviceRequest& request, const EnableDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EnableDeviceOutcomeCallable enableDeviceCallable(const Model::EnableDeviceRequest& request) const;
			EnableDeviceGroupOutcome enableDeviceGroup(const Model::EnableDeviceGroupRequest &request)const;
			void enableDeviceGroupAsync(const Model::EnableDeviceGroupRequest& request, const EnableDeviceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EnableDeviceGroupOutcomeCallable enableDeviceGroupCallable(const Model::EnableDeviceGroupRequest& request) const;
			FreezeMemberOutcome freezeMember(const Model::FreezeMemberRequest &request)const;
			void freezeMemberAsync(const Model::FreezeMemberRequest& request, const FreezeMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			FreezeMemberOutcomeCallable freezeMemberCallable(const Model::FreezeMemberRequest& request) const;
			GetEdgeTotalDeviceCountOutcome getEdgeTotalDeviceCount(const Model::GetEdgeTotalDeviceCountRequest &request)const;
			void getEdgeTotalDeviceCountAsync(const Model::GetEdgeTotalDeviceCountRequest& request, const GetEdgeTotalDeviceCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetEdgeTotalDeviceCountOutcomeCallable getEdgeTotalDeviceCountCallable(const Model::GetEdgeTotalDeviceCountRequest& request) const;
			ListAllAdminOutcome listAllAdmin(const Model::ListAllAdminRequest &request)const;
			void listAllAdminAsync(const Model::ListAllAdminRequest& request, const ListAllAdminAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAllAdminOutcomeCallable listAllAdminCallable(const Model::ListAllAdminRequest& request) const;
			ListAllBizChainOutcome listAllBizChain(const Model::ListAllBizChainRequest &request)const;
			void listAllBizChainAsync(const Model::ListAllBizChainRequest& request, const ListAllBizChainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAllBizChainOutcomeCallable listAllBizChainCallable(const Model::ListAllBizChainRequest& request) const;
			ListAllBizChainContractOutcome listAllBizChainContract(const Model::ListAllBizChainContractRequest &request)const;
			void listAllBizChainContractAsync(const Model::ListAllBizChainContractRequest& request, const ListAllBizChainContractAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAllBizChainContractOutcomeCallable listAllBizChainContractCallable(const Model::ListAllBizChainContractRequest& request) const;
			ListAllDeviceGroupOutcome listAllDeviceGroup(const Model::ListAllDeviceGroupRequest &request)const;
			void listAllDeviceGroupAsync(const Model::ListAllDeviceGroupRequest& request, const ListAllDeviceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAllDeviceGroupOutcomeCallable listAllDeviceGroupCallable(const Model::ListAllDeviceGroupRequest& request) const;
			ListAllMemberOutcome listAllMember(const Model::ListAllMemberRequest &request)const;
			void listAllMemberAsync(const Model::ListAllMemberRequest& request, const ListAllMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAllMemberOutcomeCallable listAllMemberCallable(const Model::ListAllMemberRequest& request) const;
			ListAllPrivacyAlgorithmOutcome listAllPrivacyAlgorithm(const Model::ListAllPrivacyAlgorithmRequest &request)const;
			void listAllPrivacyAlgorithmAsync(const Model::ListAllPrivacyAlgorithmRequest& request, const ListAllPrivacyAlgorithmAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAllPrivacyAlgorithmOutcomeCallable listAllPrivacyAlgorithmCallable(const Model::ListAllPrivacyAlgorithmRequest& request) const;
			ListAllPrivacyRuleOutcome listAllPrivacyRule(const Model::ListAllPrivacyRuleRequest &request)const;
			void listAllPrivacyRuleAsync(const Model::ListAllPrivacyRuleRequest& request, const ListAllPrivacyRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAllPrivacyRuleOutcomeCallable listAllPrivacyRuleCallable(const Model::ListAllPrivacyRuleRequest& request) const;
			ListAllProductKeyOutcome listAllProductKey(const Model::ListAllProductKeyRequest &request)const;
			void listAllProductKeyAsync(const Model::ListAllProductKeyRequest& request, const ListAllProductKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAllProductKeyOutcomeCallable listAllProductKeyCallable(const Model::ListAllProductKeyRequest& request) const;
			ListAllSystemContractOutcome listAllSystemContract(const Model::ListAllSystemContractRequest &request)const;
			void listAllSystemContractAsync(const Model::ListAllSystemContractRequest& request, const ListAllSystemContractAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAllSystemContractOutcomeCallable listAllSystemContractCallable(const Model::ListAllSystemContractRequest& request) const;
			ListBaaSAntChainOutcome listBaaSAntChain(const Model::ListBaaSAntChainRequest &request)const;
			void listBaaSAntChainAsync(const Model::ListBaaSAntChainRequest& request, const ListBaaSAntChainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListBaaSAntChainOutcomeCallable listBaaSAntChainCallable(const Model::ListBaaSAntChainRequest& request) const;
			ListBaaSAntChainConsortiumOutcome listBaaSAntChainConsortium(const Model::ListBaaSAntChainConsortiumRequest &request)const;
			void listBaaSAntChainConsortiumAsync(const Model::ListBaaSAntChainConsortiumRequest& request, const ListBaaSAntChainConsortiumAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListBaaSAntChainConsortiumOutcomeCallable listBaaSAntChainConsortiumCallable(const Model::ListBaaSAntChainConsortiumRequest& request) const;
			ListBaaSAntChainPeerOutcome listBaaSAntChainPeer(const Model::ListBaaSAntChainPeerRequest &request)const;
			void listBaaSAntChainPeerAsync(const Model::ListBaaSAntChainPeerRequest& request, const ListBaaSAntChainPeerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListBaaSAntChainPeerOutcomeCallable listBaaSAntChainPeerCallable(const Model::ListBaaSAntChainPeerRequest& request) const;
			ListBaaSFabricChannelOutcome listBaaSFabricChannel(const Model::ListBaaSFabricChannelRequest &request)const;
			void listBaaSFabricChannelAsync(const Model::ListBaaSFabricChannelRequest& request, const ListBaaSFabricChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListBaaSFabricChannelOutcomeCallable listBaaSFabricChannelCallable(const Model::ListBaaSFabricChannelRequest& request) const;
			ListBaaSFabricConsortiumOutcome listBaaSFabricConsortium(const Model::ListBaaSFabricConsortiumRequest &request)const;
			void listBaaSFabricConsortiumAsync(const Model::ListBaaSFabricConsortiumRequest& request, const ListBaaSFabricConsortiumAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListBaaSFabricConsortiumOutcomeCallable listBaaSFabricConsortiumCallable(const Model::ListBaaSFabricConsortiumRequest& request) const;
			ListBaaSFabricOrganizationOutcome listBaaSFabricOrganization(const Model::ListBaaSFabricOrganizationRequest &request)const;
			void listBaaSFabricOrganizationAsync(const Model::ListBaaSFabricOrganizationRequest& request, const ListBaaSFabricOrganizationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListBaaSFabricOrganizationOutcomeCallable listBaaSFabricOrganizationCallable(const Model::ListBaaSFabricOrganizationRequest& request) const;
			ListBizChainOutcome listBizChain(const Model::ListBizChainRequest &request)const;
			void listBizChainAsync(const Model::ListBizChainRequest& request, const ListBizChainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListBizChainOutcomeCallable listBizChainCallable(const Model::ListBizChainRequest& request) const;
			ListBizChainDataOutcome listBizChainData(const Model::ListBizChainDataRequest &request)const;
			void listBizChainDataAsync(const Model::ListBizChainDataRequest& request, const ListBizChainDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListBizChainDataOutcomeCallable listBizChainDataCallable(const Model::ListBizChainDataRequest& request) const;
			ListDeviceOutcome listDevice(const Model::ListDeviceRequest &request)const;
			void listDeviceAsync(const Model::ListDeviceRequest& request, const ListDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDeviceOutcomeCallable listDeviceCallable(const Model::ListDeviceRequest& request) const;
			ListDeviceGroupOutcome listDeviceGroup(const Model::ListDeviceGroupRequest &request)const;
			void listDeviceGroupAsync(const Model::ListDeviceGroupRequest& request, const ListDeviceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDeviceGroupOutcomeCallable listDeviceGroupCallable(const Model::ListDeviceGroupRequest& request) const;
			ListDeviceGroupAuthorizedBizChainOutcome listDeviceGroupAuthorizedBizChain(const Model::ListDeviceGroupAuthorizedBizChainRequest &request)const;
			void listDeviceGroupAuthorizedBizChainAsync(const Model::ListDeviceGroupAuthorizedBizChainRequest& request, const ListDeviceGroupAuthorizedBizChainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDeviceGroupAuthorizedBizChainOutcomeCallable listDeviceGroupAuthorizedBizChainCallable(const Model::ListDeviceGroupAuthorizedBizChainRequest& request) const;
			ListEdgeDeviceOutcome listEdgeDevice(const Model::ListEdgeDeviceRequest &request)const;
			void listEdgeDeviceAsync(const Model::ListEdgeDeviceRequest& request, const ListEdgeDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListEdgeDeviceOutcomeCallable listEdgeDeviceCallable(const Model::ListEdgeDeviceRequest& request) const;
			ListEdgeDeviceGroupOutcome listEdgeDeviceGroup(const Model::ListEdgeDeviceGroupRequest &request)const;
			void listEdgeDeviceGroupAsync(const Model::ListEdgeDeviceGroupRequest& request, const ListEdgeDeviceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListEdgeDeviceGroupOutcomeCallable listEdgeDeviceGroupCallable(const Model::ListEdgeDeviceGroupRequest& request) const;
			ListMemberOutcome listMember(const Model::ListMemberRequest &request)const;
			void listMemberAsync(const Model::ListMemberRequest& request, const ListMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListMemberOutcomeCallable listMemberCallable(const Model::ListMemberRequest& request) const;
			ListMemberAccessRecordOutcome listMemberAccessRecord(const Model::ListMemberAccessRecordRequest &request)const;
			void listMemberAccessRecordAsync(const Model::ListMemberAccessRecordRequest& request, const ListMemberAccessRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListMemberAccessRecordOutcomeCallable listMemberAccessRecordCallable(const Model::ListMemberAccessRecordRequest& request) const;
			ListMemberAuthorizedBizChainOutcome listMemberAuthorizedBizChain(const Model::ListMemberAuthorizedBizChainRequest &request)const;
			void listMemberAuthorizedBizChainAsync(const Model::ListMemberAuthorizedBizChainRequest& request, const ListMemberAuthorizedBizChainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListMemberAuthorizedBizChainOutcomeCallable listMemberAuthorizedBizChainCallable(const Model::ListMemberAuthorizedBizChainRequest& request) const;
			ListPrivacyRuleOutcome listPrivacyRule(const Model::ListPrivacyRuleRequest &request)const;
			void listPrivacyRuleAsync(const Model::ListPrivacyRuleRequest& request, const ListPrivacyRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListPrivacyRuleOutcomeCallable listPrivacyRuleCallable(const Model::ListPrivacyRuleRequest& request) const;
			ListPrivacyRuleSharedMemberOutcome listPrivacyRuleSharedMember(const Model::ListPrivacyRuleSharedMemberRequest &request)const;
			void listPrivacyRuleSharedMemberAsync(const Model::ListPrivacyRuleSharedMemberRequest& request, const ListPrivacyRuleSharedMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListPrivacyRuleSharedMemberOutcomeCallable listPrivacyRuleSharedMemberCallable(const Model::ListPrivacyRuleSharedMemberRequest& request) const;
			ListRouteRuleOutcome listRouteRule(const Model::ListRouteRuleRequest &request)const;
			void listRouteRuleAsync(const Model::ListRouteRuleRequest& request, const ListRouteRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListRouteRuleOutcomeCallable listRouteRuleCallable(const Model::ListRouteRuleRequest& request) const;
			QueryBlockchainDataOutcome queryBlockchainData(const Model::QueryBlockchainDataRequest &request)const;
			void queryBlockchainDataAsync(const Model::QueryBlockchainDataRequest& request, const QueryBlockchainDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryBlockchainDataOutcomeCallable queryBlockchainDataCallable(const Model::QueryBlockchainDataRequest& request) const;
			QueryBlockchainMetadataOutcome queryBlockchainMetadata(const Model::QueryBlockchainMetadataRequest &request)const;
			void queryBlockchainMetadataAsync(const Model::QueryBlockchainMetadataRequest& request, const QueryBlockchainMetadataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryBlockchainMetadataOutcomeCallable queryBlockchainMetadataCallable(const Model::QueryBlockchainMetadataRequest& request) const;
			SharePrivacyRuleOutcome sharePrivacyRule(const Model::SharePrivacyRuleRequest &request)const;
			void sharePrivacyRuleAsync(const Model::SharePrivacyRuleRequest& request, const SharePrivacyRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SharePrivacyRuleOutcomeCallable sharePrivacyRuleCallable(const Model::SharePrivacyRuleRequest& request) const;
			UnFreezeMemberOutcome unFreezeMember(const Model::UnFreezeMemberRequest &request)const;
			void unFreezeMemberAsync(const Model::UnFreezeMemberRequest& request, const UnFreezeMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UnFreezeMemberOutcomeCallable unFreezeMemberCallable(const Model::UnFreezeMemberRequest& request) const;
			UpdateBizChainOutcome updateBizChain(const Model::UpdateBizChainRequest &request)const;
			void updateBizChainAsync(const Model::UpdateBizChainRequest& request, const UpdateBizChainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateBizChainOutcomeCallable updateBizChainCallable(const Model::UpdateBizChainRequest& request) const;
			UpdateMemberOutcome updateMember(const Model::UpdateMemberRequest &request)const;
			void updateMemberAsync(const Model::UpdateMemberRequest& request, const UpdateMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateMemberOutcomeCallable updateMemberCallable(const Model::UpdateMemberRequest& request) const;
			UpdatePrivacyRuleOutcome updatePrivacyRule(const Model::UpdatePrivacyRuleRequest &request)const;
			void updatePrivacyRuleAsync(const Model::UpdatePrivacyRuleRequest& request, const UpdatePrivacyRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdatePrivacyRuleOutcomeCallable updatePrivacyRuleCallable(const Model::UpdatePrivacyRuleRequest& request) const;
			UpdateRouteRuleOutcome updateRouteRule(const Model::UpdateRouteRuleRequest &request)const;
			void updateRouteRuleAsync(const Model::UpdateRouteRuleRequest& request, const UpdateRouteRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateRouteRuleOutcomeCallable updateRouteRuleCallable(const Model::UpdateRouteRuleRequest& request) const;
			UploadIoTDataToBlockchainOutcome uploadIoTDataToBlockchain(const Model::UploadIoTDataToBlockchainRequest &request)const;
			void uploadIoTDataToBlockchainAsync(const Model::UploadIoTDataToBlockchainRequest& request, const UploadIoTDataToBlockchainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UploadIoTDataToBlockchainOutcomeCallable uploadIoTDataToBlockchainCallable(const Model::UploadIoTDataToBlockchainRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_LTO_LTOCLIENT_H_
