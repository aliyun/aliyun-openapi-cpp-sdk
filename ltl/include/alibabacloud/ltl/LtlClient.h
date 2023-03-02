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

#ifndef ALIBABACLOUD_LTL_LTLCLIENT_H_
#define ALIBABACLOUD_LTL_LTLCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "LtlExport.h"
#include "model/ApplyDataModelConfigInfoRequest.h"
#include "model/ApplyDataModelConfigInfoResult.h"
#include "model/AttachDataRequest.h"
#include "model/AttachDataResult.h"
#include "model/AttachDataWithSignatureRequest.h"
#include "model/AttachDataWithSignatureResult.h"
#include "model/AuthorizeDeviceRequest.h"
#include "model/AuthorizeDeviceResult.h"
#include "model/AuthorizeDeviceGroupRequest.h"
#include "model/AuthorizeDeviceGroupResult.h"
#include "model/BatchUploadMPCoSPhaseDigestInfoRequest.h"
#include "model/BatchUploadMPCoSPhaseDigestInfoResult.h"
#include "model/BatchUploadMPCoSPhaseDigestInfoByDeviceRequest.h"
#include "model/BatchUploadMPCoSPhaseDigestInfoByDeviceResult.h"
#include "model/BatchUploadMPCoSPhaseTextInfoRequest.h"
#include "model/BatchUploadMPCoSPhaseTextInfoResult.h"
#include "model/BatchUploadMPCoSPhaseTextInfoByDeviceRequest.h"
#include "model/BatchUploadMPCoSPhaseTextInfoByDeviceResult.h"
#include "model/CreateMPCoSPhaseRequest.h"
#include "model/CreateMPCoSPhaseResult.h"
#include "model/CreateMPCoSPhaseGroupRequest.h"
#include "model/CreateMPCoSPhaseGroupResult.h"
#include "model/CreateMemberRequest.h"
#include "model/CreateMemberResult.h"
#include "model/DescribeCapacityInfoRequest.h"
#include "model/DescribeCapacityInfoResult.h"
#include "model/DescribeMPCoSAuthorizedInfoRequest.h"
#include "model/DescribeMPCoSAuthorizedInfoResult.h"
#include "model/DescribeMPCoSPhaseInfoRequest.h"
#include "model/DescribeMPCoSPhaseInfoResult.h"
#include "model/DescribeMPCoSResourceInfoRequest.h"
#include "model/DescribeMPCoSResourceInfoResult.h"
#include "model/DescribeMemberCapacityInfoRequest.h"
#include "model/DescribeMemberCapacityInfoResult.h"
#include "model/DescribeResourceInfoRequest.h"
#include "model/DescribeResourceInfoResult.h"
#include "model/GetBlockChainInfoRequest.h"
#include "model/GetBlockChainInfoResult.h"
#include "model/GetDataRequest.h"
#include "model/GetDataResult.h"
#include "model/GetDataModelConfigInfoRequest.h"
#include "model/GetDataModelConfigInfoResult.h"
#include "model/GetHistoryDataCountRequest.h"
#include "model/GetHistoryDataCountResult.h"
#include "model/GetHistoryDataListRequest.h"
#include "model/GetHistoryDataListResult.h"
#include "model/ListDependentDataModelsRequest.h"
#include "model/ListDependentDataModelsResult.h"
#include "model/ListDeviceRequest.h"
#include "model/ListDeviceResult.h"
#include "model/ListDeviceGroupRequest.h"
#include "model/ListDeviceGroupResult.h"
#include "model/ListMPCoSPhaseRequest.h"
#include "model/ListMPCoSPhaseResult.h"
#include "model/ListMPCoSPhaseGroupRequest.h"
#include "model/ListMPCoSPhaseGroupResult.h"
#include "model/ListMPCoSPhaseHistoryRequest.h"
#include "model/ListMPCoSPhaseHistoryResult.h"
#include "model/ListMemberRequest.h"
#include "model/ListMemberResult.h"
#include "model/ListMultiPartyCollaborationChainRequest.h"
#include "model/ListMultiPartyCollaborationChainResult.h"
#include "model/ListPSMemberDataTypeCodeRequest.h"
#include "model/ListPSMemberDataTypeCodeResult.h"
#include "model/ListProofChainRequest.h"
#include "model/ListProofChainResult.h"
#include "model/LockMemberRequest.h"
#include "model/LockMemberResult.h"
#include "model/ModifyMPCoSPhaseRequest.h"
#include "model/ModifyMPCoSPhaseResult.h"
#include "model/ModifyMPCoSPhaseGroupRequest.h"
#include "model/ModifyMPCoSPhaseGroupResult.h"
#include "model/ModifyMemberRequest.h"
#include "model/ModifyMemberResult.h"
#include "model/RegisterDeviceGroupRequest.h"
#include "model/RegisterDeviceGroupResult.h"
#include "model/SetDataRequest.h"
#include "model/SetDataResult.h"
#include "model/SetDataWithSignatureRequest.h"
#include "model/SetDataWithSignatureResult.h"
#include "model/UnAuthorizeDeviceRequest.h"
#include "model/UnAuthorizeDeviceResult.h"
#include "model/UnAuthorizeDeviceGroupRequest.h"
#include "model/UnAuthorizeDeviceGroupResult.h"
#include "model/UnLockMemberRequest.h"
#include "model/UnLockMemberResult.h"
#include "model/UpdateMPCoSAuthorizedInfoRequest.h"
#include "model/UpdateMPCoSAuthorizedInfoResult.h"
#include "model/UploadMPCoSPhaseDigestInfoRequest.h"
#include "model/UploadMPCoSPhaseDigestInfoResult.h"
#include "model/UploadMPCoSPhaseDigestInfoByDeviceRequest.h"
#include "model/UploadMPCoSPhaseDigestInfoByDeviceResult.h"
#include "model/UploadMPCoSPhaseTextInfoRequest.h"
#include "model/UploadMPCoSPhaseTextInfoResult.h"
#include "model/UploadMPCoSPhaseTextInfoByDeviceRequest.h"
#include "model/UploadMPCoSPhaseTextInfoByDeviceResult.h"


namespace AlibabaCloud
{
	namespace Ltl
	{
		class ALIBABACLOUD_LTL_EXPORT LtlClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::ApplyDataModelConfigInfoResult> ApplyDataModelConfigInfoOutcome;
			typedef std::future<ApplyDataModelConfigInfoOutcome> ApplyDataModelConfigInfoOutcomeCallable;
			typedef std::function<void(const LtlClient*, const Model::ApplyDataModelConfigInfoRequest&, const ApplyDataModelConfigInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ApplyDataModelConfigInfoAsyncHandler;
			typedef Outcome<Error, Model::AttachDataResult> AttachDataOutcome;
			typedef std::future<AttachDataOutcome> AttachDataOutcomeCallable;
			typedef std::function<void(const LtlClient*, const Model::AttachDataRequest&, const AttachDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AttachDataAsyncHandler;
			typedef Outcome<Error, Model::AttachDataWithSignatureResult> AttachDataWithSignatureOutcome;
			typedef std::future<AttachDataWithSignatureOutcome> AttachDataWithSignatureOutcomeCallable;
			typedef std::function<void(const LtlClient*, const Model::AttachDataWithSignatureRequest&, const AttachDataWithSignatureOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AttachDataWithSignatureAsyncHandler;
			typedef Outcome<Error, Model::AuthorizeDeviceResult> AuthorizeDeviceOutcome;
			typedef std::future<AuthorizeDeviceOutcome> AuthorizeDeviceOutcomeCallable;
			typedef std::function<void(const LtlClient*, const Model::AuthorizeDeviceRequest&, const AuthorizeDeviceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AuthorizeDeviceAsyncHandler;
			typedef Outcome<Error, Model::AuthorizeDeviceGroupResult> AuthorizeDeviceGroupOutcome;
			typedef std::future<AuthorizeDeviceGroupOutcome> AuthorizeDeviceGroupOutcomeCallable;
			typedef std::function<void(const LtlClient*, const Model::AuthorizeDeviceGroupRequest&, const AuthorizeDeviceGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AuthorizeDeviceGroupAsyncHandler;
			typedef Outcome<Error, Model::BatchUploadMPCoSPhaseDigestInfoResult> BatchUploadMPCoSPhaseDigestInfoOutcome;
			typedef std::future<BatchUploadMPCoSPhaseDigestInfoOutcome> BatchUploadMPCoSPhaseDigestInfoOutcomeCallable;
			typedef std::function<void(const LtlClient*, const Model::BatchUploadMPCoSPhaseDigestInfoRequest&, const BatchUploadMPCoSPhaseDigestInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BatchUploadMPCoSPhaseDigestInfoAsyncHandler;
			typedef Outcome<Error, Model::BatchUploadMPCoSPhaseDigestInfoByDeviceResult> BatchUploadMPCoSPhaseDigestInfoByDeviceOutcome;
			typedef std::future<BatchUploadMPCoSPhaseDigestInfoByDeviceOutcome> BatchUploadMPCoSPhaseDigestInfoByDeviceOutcomeCallable;
			typedef std::function<void(const LtlClient*, const Model::BatchUploadMPCoSPhaseDigestInfoByDeviceRequest&, const BatchUploadMPCoSPhaseDigestInfoByDeviceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BatchUploadMPCoSPhaseDigestInfoByDeviceAsyncHandler;
			typedef Outcome<Error, Model::BatchUploadMPCoSPhaseTextInfoResult> BatchUploadMPCoSPhaseTextInfoOutcome;
			typedef std::future<BatchUploadMPCoSPhaseTextInfoOutcome> BatchUploadMPCoSPhaseTextInfoOutcomeCallable;
			typedef std::function<void(const LtlClient*, const Model::BatchUploadMPCoSPhaseTextInfoRequest&, const BatchUploadMPCoSPhaseTextInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BatchUploadMPCoSPhaseTextInfoAsyncHandler;
			typedef Outcome<Error, Model::BatchUploadMPCoSPhaseTextInfoByDeviceResult> BatchUploadMPCoSPhaseTextInfoByDeviceOutcome;
			typedef std::future<BatchUploadMPCoSPhaseTextInfoByDeviceOutcome> BatchUploadMPCoSPhaseTextInfoByDeviceOutcomeCallable;
			typedef std::function<void(const LtlClient*, const Model::BatchUploadMPCoSPhaseTextInfoByDeviceRequest&, const BatchUploadMPCoSPhaseTextInfoByDeviceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BatchUploadMPCoSPhaseTextInfoByDeviceAsyncHandler;
			typedef Outcome<Error, Model::CreateMPCoSPhaseResult> CreateMPCoSPhaseOutcome;
			typedef std::future<CreateMPCoSPhaseOutcome> CreateMPCoSPhaseOutcomeCallable;
			typedef std::function<void(const LtlClient*, const Model::CreateMPCoSPhaseRequest&, const CreateMPCoSPhaseOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateMPCoSPhaseAsyncHandler;
			typedef Outcome<Error, Model::CreateMPCoSPhaseGroupResult> CreateMPCoSPhaseGroupOutcome;
			typedef std::future<CreateMPCoSPhaseGroupOutcome> CreateMPCoSPhaseGroupOutcomeCallable;
			typedef std::function<void(const LtlClient*, const Model::CreateMPCoSPhaseGroupRequest&, const CreateMPCoSPhaseGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateMPCoSPhaseGroupAsyncHandler;
			typedef Outcome<Error, Model::CreateMemberResult> CreateMemberOutcome;
			typedef std::future<CreateMemberOutcome> CreateMemberOutcomeCallable;
			typedef std::function<void(const LtlClient*, const Model::CreateMemberRequest&, const CreateMemberOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateMemberAsyncHandler;
			typedef Outcome<Error, Model::DescribeCapacityInfoResult> DescribeCapacityInfoOutcome;
			typedef std::future<DescribeCapacityInfoOutcome> DescribeCapacityInfoOutcomeCallable;
			typedef std::function<void(const LtlClient*, const Model::DescribeCapacityInfoRequest&, const DescribeCapacityInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCapacityInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeMPCoSAuthorizedInfoResult> DescribeMPCoSAuthorizedInfoOutcome;
			typedef std::future<DescribeMPCoSAuthorizedInfoOutcome> DescribeMPCoSAuthorizedInfoOutcomeCallable;
			typedef std::function<void(const LtlClient*, const Model::DescribeMPCoSAuthorizedInfoRequest&, const DescribeMPCoSAuthorizedInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMPCoSAuthorizedInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeMPCoSPhaseInfoResult> DescribeMPCoSPhaseInfoOutcome;
			typedef std::future<DescribeMPCoSPhaseInfoOutcome> DescribeMPCoSPhaseInfoOutcomeCallable;
			typedef std::function<void(const LtlClient*, const Model::DescribeMPCoSPhaseInfoRequest&, const DescribeMPCoSPhaseInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMPCoSPhaseInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeMPCoSResourceInfoResult> DescribeMPCoSResourceInfoOutcome;
			typedef std::future<DescribeMPCoSResourceInfoOutcome> DescribeMPCoSResourceInfoOutcomeCallable;
			typedef std::function<void(const LtlClient*, const Model::DescribeMPCoSResourceInfoRequest&, const DescribeMPCoSResourceInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMPCoSResourceInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeMemberCapacityInfoResult> DescribeMemberCapacityInfoOutcome;
			typedef std::future<DescribeMemberCapacityInfoOutcome> DescribeMemberCapacityInfoOutcomeCallable;
			typedef std::function<void(const LtlClient*, const Model::DescribeMemberCapacityInfoRequest&, const DescribeMemberCapacityInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMemberCapacityInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeResourceInfoResult> DescribeResourceInfoOutcome;
			typedef std::future<DescribeResourceInfoOutcome> DescribeResourceInfoOutcomeCallable;
			typedef std::function<void(const LtlClient*, const Model::DescribeResourceInfoRequest&, const DescribeResourceInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeResourceInfoAsyncHandler;
			typedef Outcome<Error, Model::GetBlockChainInfoResult> GetBlockChainInfoOutcome;
			typedef std::future<GetBlockChainInfoOutcome> GetBlockChainInfoOutcomeCallable;
			typedef std::function<void(const LtlClient*, const Model::GetBlockChainInfoRequest&, const GetBlockChainInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetBlockChainInfoAsyncHandler;
			typedef Outcome<Error, Model::GetDataResult> GetDataOutcome;
			typedef std::future<GetDataOutcome> GetDataOutcomeCallable;
			typedef std::function<void(const LtlClient*, const Model::GetDataRequest&, const GetDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetDataAsyncHandler;
			typedef Outcome<Error, Model::GetDataModelConfigInfoResult> GetDataModelConfigInfoOutcome;
			typedef std::future<GetDataModelConfigInfoOutcome> GetDataModelConfigInfoOutcomeCallable;
			typedef std::function<void(const LtlClient*, const Model::GetDataModelConfigInfoRequest&, const GetDataModelConfigInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetDataModelConfigInfoAsyncHandler;
			typedef Outcome<Error, Model::GetHistoryDataCountResult> GetHistoryDataCountOutcome;
			typedef std::future<GetHistoryDataCountOutcome> GetHistoryDataCountOutcomeCallable;
			typedef std::function<void(const LtlClient*, const Model::GetHistoryDataCountRequest&, const GetHistoryDataCountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetHistoryDataCountAsyncHandler;
			typedef Outcome<Error, Model::GetHistoryDataListResult> GetHistoryDataListOutcome;
			typedef std::future<GetHistoryDataListOutcome> GetHistoryDataListOutcomeCallable;
			typedef std::function<void(const LtlClient*, const Model::GetHistoryDataListRequest&, const GetHistoryDataListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetHistoryDataListAsyncHandler;
			typedef Outcome<Error, Model::ListDependentDataModelsResult> ListDependentDataModelsOutcome;
			typedef std::future<ListDependentDataModelsOutcome> ListDependentDataModelsOutcomeCallable;
			typedef std::function<void(const LtlClient*, const Model::ListDependentDataModelsRequest&, const ListDependentDataModelsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDependentDataModelsAsyncHandler;
			typedef Outcome<Error, Model::ListDeviceResult> ListDeviceOutcome;
			typedef std::future<ListDeviceOutcome> ListDeviceOutcomeCallable;
			typedef std::function<void(const LtlClient*, const Model::ListDeviceRequest&, const ListDeviceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDeviceAsyncHandler;
			typedef Outcome<Error, Model::ListDeviceGroupResult> ListDeviceGroupOutcome;
			typedef std::future<ListDeviceGroupOutcome> ListDeviceGroupOutcomeCallable;
			typedef std::function<void(const LtlClient*, const Model::ListDeviceGroupRequest&, const ListDeviceGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDeviceGroupAsyncHandler;
			typedef Outcome<Error, Model::ListMPCoSPhaseResult> ListMPCoSPhaseOutcome;
			typedef std::future<ListMPCoSPhaseOutcome> ListMPCoSPhaseOutcomeCallable;
			typedef std::function<void(const LtlClient*, const Model::ListMPCoSPhaseRequest&, const ListMPCoSPhaseOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListMPCoSPhaseAsyncHandler;
			typedef Outcome<Error, Model::ListMPCoSPhaseGroupResult> ListMPCoSPhaseGroupOutcome;
			typedef std::future<ListMPCoSPhaseGroupOutcome> ListMPCoSPhaseGroupOutcomeCallable;
			typedef std::function<void(const LtlClient*, const Model::ListMPCoSPhaseGroupRequest&, const ListMPCoSPhaseGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListMPCoSPhaseGroupAsyncHandler;
			typedef Outcome<Error, Model::ListMPCoSPhaseHistoryResult> ListMPCoSPhaseHistoryOutcome;
			typedef std::future<ListMPCoSPhaseHistoryOutcome> ListMPCoSPhaseHistoryOutcomeCallable;
			typedef std::function<void(const LtlClient*, const Model::ListMPCoSPhaseHistoryRequest&, const ListMPCoSPhaseHistoryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListMPCoSPhaseHistoryAsyncHandler;
			typedef Outcome<Error, Model::ListMemberResult> ListMemberOutcome;
			typedef std::future<ListMemberOutcome> ListMemberOutcomeCallable;
			typedef std::function<void(const LtlClient*, const Model::ListMemberRequest&, const ListMemberOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListMemberAsyncHandler;
			typedef Outcome<Error, Model::ListMultiPartyCollaborationChainResult> ListMultiPartyCollaborationChainOutcome;
			typedef std::future<ListMultiPartyCollaborationChainOutcome> ListMultiPartyCollaborationChainOutcomeCallable;
			typedef std::function<void(const LtlClient*, const Model::ListMultiPartyCollaborationChainRequest&, const ListMultiPartyCollaborationChainOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListMultiPartyCollaborationChainAsyncHandler;
			typedef Outcome<Error, Model::ListPSMemberDataTypeCodeResult> ListPSMemberDataTypeCodeOutcome;
			typedef std::future<ListPSMemberDataTypeCodeOutcome> ListPSMemberDataTypeCodeOutcomeCallable;
			typedef std::function<void(const LtlClient*, const Model::ListPSMemberDataTypeCodeRequest&, const ListPSMemberDataTypeCodeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListPSMemberDataTypeCodeAsyncHandler;
			typedef Outcome<Error, Model::ListProofChainResult> ListProofChainOutcome;
			typedef std::future<ListProofChainOutcome> ListProofChainOutcomeCallable;
			typedef std::function<void(const LtlClient*, const Model::ListProofChainRequest&, const ListProofChainOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListProofChainAsyncHandler;
			typedef Outcome<Error, Model::LockMemberResult> LockMemberOutcome;
			typedef std::future<LockMemberOutcome> LockMemberOutcomeCallable;
			typedef std::function<void(const LtlClient*, const Model::LockMemberRequest&, const LockMemberOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> LockMemberAsyncHandler;
			typedef Outcome<Error, Model::ModifyMPCoSPhaseResult> ModifyMPCoSPhaseOutcome;
			typedef std::future<ModifyMPCoSPhaseOutcome> ModifyMPCoSPhaseOutcomeCallable;
			typedef std::function<void(const LtlClient*, const Model::ModifyMPCoSPhaseRequest&, const ModifyMPCoSPhaseOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyMPCoSPhaseAsyncHandler;
			typedef Outcome<Error, Model::ModifyMPCoSPhaseGroupResult> ModifyMPCoSPhaseGroupOutcome;
			typedef std::future<ModifyMPCoSPhaseGroupOutcome> ModifyMPCoSPhaseGroupOutcomeCallable;
			typedef std::function<void(const LtlClient*, const Model::ModifyMPCoSPhaseGroupRequest&, const ModifyMPCoSPhaseGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyMPCoSPhaseGroupAsyncHandler;
			typedef Outcome<Error, Model::ModifyMemberResult> ModifyMemberOutcome;
			typedef std::future<ModifyMemberOutcome> ModifyMemberOutcomeCallable;
			typedef std::function<void(const LtlClient*, const Model::ModifyMemberRequest&, const ModifyMemberOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyMemberAsyncHandler;
			typedef Outcome<Error, Model::RegisterDeviceGroupResult> RegisterDeviceGroupOutcome;
			typedef std::future<RegisterDeviceGroupOutcome> RegisterDeviceGroupOutcomeCallable;
			typedef std::function<void(const LtlClient*, const Model::RegisterDeviceGroupRequest&, const RegisterDeviceGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RegisterDeviceGroupAsyncHandler;
			typedef Outcome<Error, Model::SetDataResult> SetDataOutcome;
			typedef std::future<SetDataOutcome> SetDataOutcomeCallable;
			typedef std::function<void(const LtlClient*, const Model::SetDataRequest&, const SetDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetDataAsyncHandler;
			typedef Outcome<Error, Model::SetDataWithSignatureResult> SetDataWithSignatureOutcome;
			typedef std::future<SetDataWithSignatureOutcome> SetDataWithSignatureOutcomeCallable;
			typedef std::function<void(const LtlClient*, const Model::SetDataWithSignatureRequest&, const SetDataWithSignatureOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetDataWithSignatureAsyncHandler;
			typedef Outcome<Error, Model::UnAuthorizeDeviceResult> UnAuthorizeDeviceOutcome;
			typedef std::future<UnAuthorizeDeviceOutcome> UnAuthorizeDeviceOutcomeCallable;
			typedef std::function<void(const LtlClient*, const Model::UnAuthorizeDeviceRequest&, const UnAuthorizeDeviceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UnAuthorizeDeviceAsyncHandler;
			typedef Outcome<Error, Model::UnAuthorizeDeviceGroupResult> UnAuthorizeDeviceGroupOutcome;
			typedef std::future<UnAuthorizeDeviceGroupOutcome> UnAuthorizeDeviceGroupOutcomeCallable;
			typedef std::function<void(const LtlClient*, const Model::UnAuthorizeDeviceGroupRequest&, const UnAuthorizeDeviceGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UnAuthorizeDeviceGroupAsyncHandler;
			typedef Outcome<Error, Model::UnLockMemberResult> UnLockMemberOutcome;
			typedef std::future<UnLockMemberOutcome> UnLockMemberOutcomeCallable;
			typedef std::function<void(const LtlClient*, const Model::UnLockMemberRequest&, const UnLockMemberOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UnLockMemberAsyncHandler;
			typedef Outcome<Error, Model::UpdateMPCoSAuthorizedInfoResult> UpdateMPCoSAuthorizedInfoOutcome;
			typedef std::future<UpdateMPCoSAuthorizedInfoOutcome> UpdateMPCoSAuthorizedInfoOutcomeCallable;
			typedef std::function<void(const LtlClient*, const Model::UpdateMPCoSAuthorizedInfoRequest&, const UpdateMPCoSAuthorizedInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateMPCoSAuthorizedInfoAsyncHandler;
			typedef Outcome<Error, Model::UploadMPCoSPhaseDigestInfoResult> UploadMPCoSPhaseDigestInfoOutcome;
			typedef std::future<UploadMPCoSPhaseDigestInfoOutcome> UploadMPCoSPhaseDigestInfoOutcomeCallable;
			typedef std::function<void(const LtlClient*, const Model::UploadMPCoSPhaseDigestInfoRequest&, const UploadMPCoSPhaseDigestInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UploadMPCoSPhaseDigestInfoAsyncHandler;
			typedef Outcome<Error, Model::UploadMPCoSPhaseDigestInfoByDeviceResult> UploadMPCoSPhaseDigestInfoByDeviceOutcome;
			typedef std::future<UploadMPCoSPhaseDigestInfoByDeviceOutcome> UploadMPCoSPhaseDigestInfoByDeviceOutcomeCallable;
			typedef std::function<void(const LtlClient*, const Model::UploadMPCoSPhaseDigestInfoByDeviceRequest&, const UploadMPCoSPhaseDigestInfoByDeviceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UploadMPCoSPhaseDigestInfoByDeviceAsyncHandler;
			typedef Outcome<Error, Model::UploadMPCoSPhaseTextInfoResult> UploadMPCoSPhaseTextInfoOutcome;
			typedef std::future<UploadMPCoSPhaseTextInfoOutcome> UploadMPCoSPhaseTextInfoOutcomeCallable;
			typedef std::function<void(const LtlClient*, const Model::UploadMPCoSPhaseTextInfoRequest&, const UploadMPCoSPhaseTextInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UploadMPCoSPhaseTextInfoAsyncHandler;
			typedef Outcome<Error, Model::UploadMPCoSPhaseTextInfoByDeviceResult> UploadMPCoSPhaseTextInfoByDeviceOutcome;
			typedef std::future<UploadMPCoSPhaseTextInfoByDeviceOutcome> UploadMPCoSPhaseTextInfoByDeviceOutcomeCallable;
			typedef std::function<void(const LtlClient*, const Model::UploadMPCoSPhaseTextInfoByDeviceRequest&, const UploadMPCoSPhaseTextInfoByDeviceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UploadMPCoSPhaseTextInfoByDeviceAsyncHandler;

			LtlClient(const Credentials &credentials, const ClientConfiguration &configuration);
			LtlClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			LtlClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~LtlClient();
			ApplyDataModelConfigInfoOutcome applyDataModelConfigInfo(const Model::ApplyDataModelConfigInfoRequest &request)const;
			void applyDataModelConfigInfoAsync(const Model::ApplyDataModelConfigInfoRequest& request, const ApplyDataModelConfigInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ApplyDataModelConfigInfoOutcomeCallable applyDataModelConfigInfoCallable(const Model::ApplyDataModelConfigInfoRequest& request) const;
			AttachDataOutcome attachData(const Model::AttachDataRequest &request)const;
			void attachDataAsync(const Model::AttachDataRequest& request, const AttachDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AttachDataOutcomeCallable attachDataCallable(const Model::AttachDataRequest& request) const;
			AttachDataWithSignatureOutcome attachDataWithSignature(const Model::AttachDataWithSignatureRequest &request)const;
			void attachDataWithSignatureAsync(const Model::AttachDataWithSignatureRequest& request, const AttachDataWithSignatureAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AttachDataWithSignatureOutcomeCallable attachDataWithSignatureCallable(const Model::AttachDataWithSignatureRequest& request) const;
			AuthorizeDeviceOutcome authorizeDevice(const Model::AuthorizeDeviceRequest &request)const;
			void authorizeDeviceAsync(const Model::AuthorizeDeviceRequest& request, const AuthorizeDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AuthorizeDeviceOutcomeCallable authorizeDeviceCallable(const Model::AuthorizeDeviceRequest& request) const;
			AuthorizeDeviceGroupOutcome authorizeDeviceGroup(const Model::AuthorizeDeviceGroupRequest &request)const;
			void authorizeDeviceGroupAsync(const Model::AuthorizeDeviceGroupRequest& request, const AuthorizeDeviceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AuthorizeDeviceGroupOutcomeCallable authorizeDeviceGroupCallable(const Model::AuthorizeDeviceGroupRequest& request) const;
			BatchUploadMPCoSPhaseDigestInfoOutcome batchUploadMPCoSPhaseDigestInfo(const Model::BatchUploadMPCoSPhaseDigestInfoRequest &request)const;
			void batchUploadMPCoSPhaseDigestInfoAsync(const Model::BatchUploadMPCoSPhaseDigestInfoRequest& request, const BatchUploadMPCoSPhaseDigestInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BatchUploadMPCoSPhaseDigestInfoOutcomeCallable batchUploadMPCoSPhaseDigestInfoCallable(const Model::BatchUploadMPCoSPhaseDigestInfoRequest& request) const;
			BatchUploadMPCoSPhaseDigestInfoByDeviceOutcome batchUploadMPCoSPhaseDigestInfoByDevice(const Model::BatchUploadMPCoSPhaseDigestInfoByDeviceRequest &request)const;
			void batchUploadMPCoSPhaseDigestInfoByDeviceAsync(const Model::BatchUploadMPCoSPhaseDigestInfoByDeviceRequest& request, const BatchUploadMPCoSPhaseDigestInfoByDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BatchUploadMPCoSPhaseDigestInfoByDeviceOutcomeCallable batchUploadMPCoSPhaseDigestInfoByDeviceCallable(const Model::BatchUploadMPCoSPhaseDigestInfoByDeviceRequest& request) const;
			BatchUploadMPCoSPhaseTextInfoOutcome batchUploadMPCoSPhaseTextInfo(const Model::BatchUploadMPCoSPhaseTextInfoRequest &request)const;
			void batchUploadMPCoSPhaseTextInfoAsync(const Model::BatchUploadMPCoSPhaseTextInfoRequest& request, const BatchUploadMPCoSPhaseTextInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BatchUploadMPCoSPhaseTextInfoOutcomeCallable batchUploadMPCoSPhaseTextInfoCallable(const Model::BatchUploadMPCoSPhaseTextInfoRequest& request) const;
			BatchUploadMPCoSPhaseTextInfoByDeviceOutcome batchUploadMPCoSPhaseTextInfoByDevice(const Model::BatchUploadMPCoSPhaseTextInfoByDeviceRequest &request)const;
			void batchUploadMPCoSPhaseTextInfoByDeviceAsync(const Model::BatchUploadMPCoSPhaseTextInfoByDeviceRequest& request, const BatchUploadMPCoSPhaseTextInfoByDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BatchUploadMPCoSPhaseTextInfoByDeviceOutcomeCallable batchUploadMPCoSPhaseTextInfoByDeviceCallable(const Model::BatchUploadMPCoSPhaseTextInfoByDeviceRequest& request) const;
			CreateMPCoSPhaseOutcome createMPCoSPhase(const Model::CreateMPCoSPhaseRequest &request)const;
			void createMPCoSPhaseAsync(const Model::CreateMPCoSPhaseRequest& request, const CreateMPCoSPhaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateMPCoSPhaseOutcomeCallable createMPCoSPhaseCallable(const Model::CreateMPCoSPhaseRequest& request) const;
			CreateMPCoSPhaseGroupOutcome createMPCoSPhaseGroup(const Model::CreateMPCoSPhaseGroupRequest &request)const;
			void createMPCoSPhaseGroupAsync(const Model::CreateMPCoSPhaseGroupRequest& request, const CreateMPCoSPhaseGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateMPCoSPhaseGroupOutcomeCallable createMPCoSPhaseGroupCallable(const Model::CreateMPCoSPhaseGroupRequest& request) const;
			CreateMemberOutcome createMember(const Model::CreateMemberRequest &request)const;
			void createMemberAsync(const Model::CreateMemberRequest& request, const CreateMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateMemberOutcomeCallable createMemberCallable(const Model::CreateMemberRequest& request) const;
			DescribeCapacityInfoOutcome describeCapacityInfo(const Model::DescribeCapacityInfoRequest &request)const;
			void describeCapacityInfoAsync(const Model::DescribeCapacityInfoRequest& request, const DescribeCapacityInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCapacityInfoOutcomeCallable describeCapacityInfoCallable(const Model::DescribeCapacityInfoRequest& request) const;
			DescribeMPCoSAuthorizedInfoOutcome describeMPCoSAuthorizedInfo(const Model::DescribeMPCoSAuthorizedInfoRequest &request)const;
			void describeMPCoSAuthorizedInfoAsync(const Model::DescribeMPCoSAuthorizedInfoRequest& request, const DescribeMPCoSAuthorizedInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeMPCoSAuthorizedInfoOutcomeCallable describeMPCoSAuthorizedInfoCallable(const Model::DescribeMPCoSAuthorizedInfoRequest& request) const;
			DescribeMPCoSPhaseInfoOutcome describeMPCoSPhaseInfo(const Model::DescribeMPCoSPhaseInfoRequest &request)const;
			void describeMPCoSPhaseInfoAsync(const Model::DescribeMPCoSPhaseInfoRequest& request, const DescribeMPCoSPhaseInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeMPCoSPhaseInfoOutcomeCallable describeMPCoSPhaseInfoCallable(const Model::DescribeMPCoSPhaseInfoRequest& request) const;
			DescribeMPCoSResourceInfoOutcome describeMPCoSResourceInfo(const Model::DescribeMPCoSResourceInfoRequest &request)const;
			void describeMPCoSResourceInfoAsync(const Model::DescribeMPCoSResourceInfoRequest& request, const DescribeMPCoSResourceInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeMPCoSResourceInfoOutcomeCallable describeMPCoSResourceInfoCallable(const Model::DescribeMPCoSResourceInfoRequest& request) const;
			DescribeMemberCapacityInfoOutcome describeMemberCapacityInfo(const Model::DescribeMemberCapacityInfoRequest &request)const;
			void describeMemberCapacityInfoAsync(const Model::DescribeMemberCapacityInfoRequest& request, const DescribeMemberCapacityInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeMemberCapacityInfoOutcomeCallable describeMemberCapacityInfoCallable(const Model::DescribeMemberCapacityInfoRequest& request) const;
			DescribeResourceInfoOutcome describeResourceInfo(const Model::DescribeResourceInfoRequest &request)const;
			void describeResourceInfoAsync(const Model::DescribeResourceInfoRequest& request, const DescribeResourceInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeResourceInfoOutcomeCallable describeResourceInfoCallable(const Model::DescribeResourceInfoRequest& request) const;
			GetBlockChainInfoOutcome getBlockChainInfo(const Model::GetBlockChainInfoRequest &request)const;
			void getBlockChainInfoAsync(const Model::GetBlockChainInfoRequest& request, const GetBlockChainInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetBlockChainInfoOutcomeCallable getBlockChainInfoCallable(const Model::GetBlockChainInfoRequest& request) const;
			GetDataOutcome getData(const Model::GetDataRequest &request)const;
			void getDataAsync(const Model::GetDataRequest& request, const GetDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetDataOutcomeCallable getDataCallable(const Model::GetDataRequest& request) const;
			GetDataModelConfigInfoOutcome getDataModelConfigInfo(const Model::GetDataModelConfigInfoRequest &request)const;
			void getDataModelConfigInfoAsync(const Model::GetDataModelConfigInfoRequest& request, const GetDataModelConfigInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetDataModelConfigInfoOutcomeCallable getDataModelConfigInfoCallable(const Model::GetDataModelConfigInfoRequest& request) const;
			GetHistoryDataCountOutcome getHistoryDataCount(const Model::GetHistoryDataCountRequest &request)const;
			void getHistoryDataCountAsync(const Model::GetHistoryDataCountRequest& request, const GetHistoryDataCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetHistoryDataCountOutcomeCallable getHistoryDataCountCallable(const Model::GetHistoryDataCountRequest& request) const;
			GetHistoryDataListOutcome getHistoryDataList(const Model::GetHistoryDataListRequest &request)const;
			void getHistoryDataListAsync(const Model::GetHistoryDataListRequest& request, const GetHistoryDataListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetHistoryDataListOutcomeCallable getHistoryDataListCallable(const Model::GetHistoryDataListRequest& request) const;
			ListDependentDataModelsOutcome listDependentDataModels(const Model::ListDependentDataModelsRequest &request)const;
			void listDependentDataModelsAsync(const Model::ListDependentDataModelsRequest& request, const ListDependentDataModelsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDependentDataModelsOutcomeCallable listDependentDataModelsCallable(const Model::ListDependentDataModelsRequest& request) const;
			ListDeviceOutcome listDevice(const Model::ListDeviceRequest &request)const;
			void listDeviceAsync(const Model::ListDeviceRequest& request, const ListDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDeviceOutcomeCallable listDeviceCallable(const Model::ListDeviceRequest& request) const;
			ListDeviceGroupOutcome listDeviceGroup(const Model::ListDeviceGroupRequest &request)const;
			void listDeviceGroupAsync(const Model::ListDeviceGroupRequest& request, const ListDeviceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDeviceGroupOutcomeCallable listDeviceGroupCallable(const Model::ListDeviceGroupRequest& request) const;
			ListMPCoSPhaseOutcome listMPCoSPhase(const Model::ListMPCoSPhaseRequest &request)const;
			void listMPCoSPhaseAsync(const Model::ListMPCoSPhaseRequest& request, const ListMPCoSPhaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListMPCoSPhaseOutcomeCallable listMPCoSPhaseCallable(const Model::ListMPCoSPhaseRequest& request) const;
			ListMPCoSPhaseGroupOutcome listMPCoSPhaseGroup(const Model::ListMPCoSPhaseGroupRequest &request)const;
			void listMPCoSPhaseGroupAsync(const Model::ListMPCoSPhaseGroupRequest& request, const ListMPCoSPhaseGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListMPCoSPhaseGroupOutcomeCallable listMPCoSPhaseGroupCallable(const Model::ListMPCoSPhaseGroupRequest& request) const;
			ListMPCoSPhaseHistoryOutcome listMPCoSPhaseHistory(const Model::ListMPCoSPhaseHistoryRequest &request)const;
			void listMPCoSPhaseHistoryAsync(const Model::ListMPCoSPhaseHistoryRequest& request, const ListMPCoSPhaseHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListMPCoSPhaseHistoryOutcomeCallable listMPCoSPhaseHistoryCallable(const Model::ListMPCoSPhaseHistoryRequest& request) const;
			ListMemberOutcome listMember(const Model::ListMemberRequest &request)const;
			void listMemberAsync(const Model::ListMemberRequest& request, const ListMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListMemberOutcomeCallable listMemberCallable(const Model::ListMemberRequest& request) const;
			ListMultiPartyCollaborationChainOutcome listMultiPartyCollaborationChain(const Model::ListMultiPartyCollaborationChainRequest &request)const;
			void listMultiPartyCollaborationChainAsync(const Model::ListMultiPartyCollaborationChainRequest& request, const ListMultiPartyCollaborationChainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListMultiPartyCollaborationChainOutcomeCallable listMultiPartyCollaborationChainCallable(const Model::ListMultiPartyCollaborationChainRequest& request) const;
			ListPSMemberDataTypeCodeOutcome listPSMemberDataTypeCode(const Model::ListPSMemberDataTypeCodeRequest &request)const;
			void listPSMemberDataTypeCodeAsync(const Model::ListPSMemberDataTypeCodeRequest& request, const ListPSMemberDataTypeCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListPSMemberDataTypeCodeOutcomeCallable listPSMemberDataTypeCodeCallable(const Model::ListPSMemberDataTypeCodeRequest& request) const;
			ListProofChainOutcome listProofChain(const Model::ListProofChainRequest &request)const;
			void listProofChainAsync(const Model::ListProofChainRequest& request, const ListProofChainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListProofChainOutcomeCallable listProofChainCallable(const Model::ListProofChainRequest& request) const;
			LockMemberOutcome lockMember(const Model::LockMemberRequest &request)const;
			void lockMemberAsync(const Model::LockMemberRequest& request, const LockMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			LockMemberOutcomeCallable lockMemberCallable(const Model::LockMemberRequest& request) const;
			ModifyMPCoSPhaseOutcome modifyMPCoSPhase(const Model::ModifyMPCoSPhaseRequest &request)const;
			void modifyMPCoSPhaseAsync(const Model::ModifyMPCoSPhaseRequest& request, const ModifyMPCoSPhaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyMPCoSPhaseOutcomeCallable modifyMPCoSPhaseCallable(const Model::ModifyMPCoSPhaseRequest& request) const;
			ModifyMPCoSPhaseGroupOutcome modifyMPCoSPhaseGroup(const Model::ModifyMPCoSPhaseGroupRequest &request)const;
			void modifyMPCoSPhaseGroupAsync(const Model::ModifyMPCoSPhaseGroupRequest& request, const ModifyMPCoSPhaseGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyMPCoSPhaseGroupOutcomeCallable modifyMPCoSPhaseGroupCallable(const Model::ModifyMPCoSPhaseGroupRequest& request) const;
			ModifyMemberOutcome modifyMember(const Model::ModifyMemberRequest &request)const;
			void modifyMemberAsync(const Model::ModifyMemberRequest& request, const ModifyMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyMemberOutcomeCallable modifyMemberCallable(const Model::ModifyMemberRequest& request) const;
			RegisterDeviceGroupOutcome registerDeviceGroup(const Model::RegisterDeviceGroupRequest &request)const;
			void registerDeviceGroupAsync(const Model::RegisterDeviceGroupRequest& request, const RegisterDeviceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RegisterDeviceGroupOutcomeCallable registerDeviceGroupCallable(const Model::RegisterDeviceGroupRequest& request) const;
			SetDataOutcome setData(const Model::SetDataRequest &request)const;
			void setDataAsync(const Model::SetDataRequest& request, const SetDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetDataOutcomeCallable setDataCallable(const Model::SetDataRequest& request) const;
			SetDataWithSignatureOutcome setDataWithSignature(const Model::SetDataWithSignatureRequest &request)const;
			void setDataWithSignatureAsync(const Model::SetDataWithSignatureRequest& request, const SetDataWithSignatureAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetDataWithSignatureOutcomeCallable setDataWithSignatureCallable(const Model::SetDataWithSignatureRequest& request) const;
			UnAuthorizeDeviceOutcome unAuthorizeDevice(const Model::UnAuthorizeDeviceRequest &request)const;
			void unAuthorizeDeviceAsync(const Model::UnAuthorizeDeviceRequest& request, const UnAuthorizeDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UnAuthorizeDeviceOutcomeCallable unAuthorizeDeviceCallable(const Model::UnAuthorizeDeviceRequest& request) const;
			UnAuthorizeDeviceGroupOutcome unAuthorizeDeviceGroup(const Model::UnAuthorizeDeviceGroupRequest &request)const;
			void unAuthorizeDeviceGroupAsync(const Model::UnAuthorizeDeviceGroupRequest& request, const UnAuthorizeDeviceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UnAuthorizeDeviceGroupOutcomeCallable unAuthorizeDeviceGroupCallable(const Model::UnAuthorizeDeviceGroupRequest& request) const;
			UnLockMemberOutcome unLockMember(const Model::UnLockMemberRequest &request)const;
			void unLockMemberAsync(const Model::UnLockMemberRequest& request, const UnLockMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UnLockMemberOutcomeCallable unLockMemberCallable(const Model::UnLockMemberRequest& request) const;
			UpdateMPCoSAuthorizedInfoOutcome updateMPCoSAuthorizedInfo(const Model::UpdateMPCoSAuthorizedInfoRequest &request)const;
			void updateMPCoSAuthorizedInfoAsync(const Model::UpdateMPCoSAuthorizedInfoRequest& request, const UpdateMPCoSAuthorizedInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateMPCoSAuthorizedInfoOutcomeCallable updateMPCoSAuthorizedInfoCallable(const Model::UpdateMPCoSAuthorizedInfoRequest& request) const;
			UploadMPCoSPhaseDigestInfoOutcome uploadMPCoSPhaseDigestInfo(const Model::UploadMPCoSPhaseDigestInfoRequest &request)const;
			void uploadMPCoSPhaseDigestInfoAsync(const Model::UploadMPCoSPhaseDigestInfoRequest& request, const UploadMPCoSPhaseDigestInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UploadMPCoSPhaseDigestInfoOutcomeCallable uploadMPCoSPhaseDigestInfoCallable(const Model::UploadMPCoSPhaseDigestInfoRequest& request) const;
			UploadMPCoSPhaseDigestInfoByDeviceOutcome uploadMPCoSPhaseDigestInfoByDevice(const Model::UploadMPCoSPhaseDigestInfoByDeviceRequest &request)const;
			void uploadMPCoSPhaseDigestInfoByDeviceAsync(const Model::UploadMPCoSPhaseDigestInfoByDeviceRequest& request, const UploadMPCoSPhaseDigestInfoByDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UploadMPCoSPhaseDigestInfoByDeviceOutcomeCallable uploadMPCoSPhaseDigestInfoByDeviceCallable(const Model::UploadMPCoSPhaseDigestInfoByDeviceRequest& request) const;
			UploadMPCoSPhaseTextInfoOutcome uploadMPCoSPhaseTextInfo(const Model::UploadMPCoSPhaseTextInfoRequest &request)const;
			void uploadMPCoSPhaseTextInfoAsync(const Model::UploadMPCoSPhaseTextInfoRequest& request, const UploadMPCoSPhaseTextInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UploadMPCoSPhaseTextInfoOutcomeCallable uploadMPCoSPhaseTextInfoCallable(const Model::UploadMPCoSPhaseTextInfoRequest& request) const;
			UploadMPCoSPhaseTextInfoByDeviceOutcome uploadMPCoSPhaseTextInfoByDevice(const Model::UploadMPCoSPhaseTextInfoByDeviceRequest &request)const;
			void uploadMPCoSPhaseTextInfoByDeviceAsync(const Model::UploadMPCoSPhaseTextInfoByDeviceRequest& request, const UploadMPCoSPhaseTextInfoByDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UploadMPCoSPhaseTextInfoByDeviceOutcomeCallable uploadMPCoSPhaseTextInfoByDeviceCallable(const Model::UploadMPCoSPhaseTextInfoByDeviceRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_LTL_LTLCLIENT_H_
