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

#ifndef ALIBABACLOUD_JARVIS_JARVISCLIENT_H_
#define ALIBABACLOUD_JARVIS_JARVISCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "JarvisExport.h"
#include "model/CreateAccessWhiteListGroupRequest.h"
#include "model/CreateAccessWhiteListGroupResult.h"
#include "model/CreateAllEcsWhiteListRequest.h"
#include "model/CreateAllEcsWhiteListResult.h"
#include "model/CreateCdnIpRequest.h"
#include "model/CreateCdnIpResult.h"
#include "model/CreateCdnSubscriptionRequest.h"
#include "model/CreateCdnSubscriptionResult.h"
#include "model/CreateConsoleAccessWhiteListRequest.h"
#include "model/CreateConsoleAccessWhiteListResult.h"
#include "model/CreateCpmcPunishFeedBackRequest.h"
#include "model/CreateCpmcPunishFeedBackResult.h"
#include "model/CreateIpWhiteBaselineRequest.h"
#include "model/CreateIpWhiteBaselineResult.h"
#include "model/CreateUidWhiteBaselineRequest.h"
#include "model/CreateUidWhiteBaselineResult.h"
#include "model/CreateUidWhiteListGroupRequest.h"
#include "model/CreateUidWhiteListGroupResult.h"
#include "model/DeleteAccessWhiteListGroupRequest.h"
#include "model/DeleteAccessWhiteListGroupResult.h"
#include "model/DeleteCdnIpRequest.h"
#include "model/DeleteCdnIpResult.h"
#include "model/DeleteCdnSubscriptionRequest.h"
#include "model/DeleteCdnSubscriptionResult.h"
#include "model/DeleteConsoleAccessWhiteListRequest.h"
#include "model/DeleteConsoleAccessWhiteListResult.h"
#include "model/DeleteIpWhiteBaselineRequest.h"
#include "model/DeleteIpWhiteBaselineResult.h"
#include "model/DeleteUidWhiteBaselineRequest.h"
#include "model/DeleteUidWhiteBaselineResult.h"
#include "model/DeleteUidWhiteListGroupRequest.h"
#include "model/DeleteUidWhiteListGroupResult.h"
#include "model/DeleteWhiteListConditionalRequest.h"
#include "model/DeleteWhiteListConditionalResult.h"
#include "model/DeleteWhiteListDbItemConditionalRequest.h"
#include "model/DeleteWhiteListDbItemConditionalResult.h"
#include "model/DescribeAccessWhiteListEipListRequest.h"
#include "model/DescribeAccessWhiteListEipListResult.h"
#include "model/DescribeAccessWhiteListGroupRequest.h"
#include "model/DescribeAccessWhiteListGroupResult.h"
#include "model/DescribeAccessWhiteListSlbListRequest.h"
#include "model/DescribeAccessWhiteListSlbListResult.h"
#include "model/DescribeAccessWhitelistEcsListRequest.h"
#include "model/DescribeAccessWhitelistEcsListResult.h"
#include "model/DescribeCdnCertifyRequest.h"
#include "model/DescribeCdnCertifyResult.h"
#include "model/DescribeCdnIpListRequest.h"
#include "model/DescribeCdnIpListResult.h"
#include "model/DescribeCdnSubscriptionRequest.h"
#include "model/DescribeCdnSubscriptionResult.h"
#include "model/DescribeCdnVendorRequest.h"
#include "model/DescribeCdnVendorResult.h"
#include "model/DescribeConsoleAccessWhiteListRequest.h"
#include "model/DescribeConsoleAccessWhiteListResult.h"
#include "model/DescribeCpmcPunishListRequest.h"
#include "model/DescribeCpmcPunishListResult.h"
#include "model/DescribeDdosDefenseInfoRequest.h"
#include "model/DescribeDdosDefenseInfoResult.h"
#include "model/DescribeEcsListPageRequest.h"
#include "model/DescribeEcsListPageResult.h"
#include "model/DescribeIpWhiteBaselineRequest.h"
#include "model/DescribeIpWhiteBaselineResult.h"
#include "model/DescribePhoneInfoRequest.h"
#include "model/DescribePhoneInfoResult.h"
#include "model/DescribePunishListRequest.h"
#include "model/DescribePunishListResult.h"
#include "model/DescribeResetRecordListRequest.h"
#include "model/DescribeResetRecordListResult.h"
#include "model/DescribeResetRecordQueryCountRequest.h"
#include "model/DescribeResetRecordQueryCountResult.h"
#include "model/DescribeRiskListDetailRequest.h"
#include "model/DescribeRiskListDetailResult.h"
#include "model/DescribeRiskTrendRequest.h"
#include "model/DescribeRiskTrendResult.h"
#include "model/DescribeSpecialEcsRequest.h"
#include "model/DescribeSpecialEcsResult.h"
#include "model/DescribeUidGcLevelRequest.h"
#include "model/DescribeUidGcLevelResult.h"
#include "model/DescribeUidWhiteBaselineRequest.h"
#include "model/DescribeUidWhiteBaselineResult.h"
#include "model/DescribeUidWhiteListGroupRequest.h"
#include "model/DescribeUidWhiteListGroupResult.h"
#include "model/ModifyAccessWhiteListAutoShareRequest.h"
#include "model/ModifyAccessWhiteListAutoShareResult.h"
#include "model/ModifyIpWhiteBaselineRequest.h"
#include "model/ModifyIpWhiteBaselineResult.h"
#include "model/ModifyUidWhiteBaselineRequest.h"
#include "model/ModifyUidWhiteBaselineResult.h"
#include "model/ModifyUidWhiteListAutoShareRequest.h"
#include "model/ModifyUidWhiteListAutoShareResult.h"


namespace AlibabaCloud
{
	namespace Jarvis
	{
		class ALIBABACLOUD_JARVIS_EXPORT JarvisClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::CreateAccessWhiteListGroupResult> CreateAccessWhiteListGroupOutcome;
			typedef std::future<CreateAccessWhiteListGroupOutcome> CreateAccessWhiteListGroupOutcomeCallable;
			typedef std::function<void(const JarvisClient*, const Model::CreateAccessWhiteListGroupRequest&, const CreateAccessWhiteListGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateAccessWhiteListGroupAsyncHandler;
			typedef Outcome<Error, Model::CreateAllEcsWhiteListResult> CreateAllEcsWhiteListOutcome;
			typedef std::future<CreateAllEcsWhiteListOutcome> CreateAllEcsWhiteListOutcomeCallable;
			typedef std::function<void(const JarvisClient*, const Model::CreateAllEcsWhiteListRequest&, const CreateAllEcsWhiteListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateAllEcsWhiteListAsyncHandler;
			typedef Outcome<Error, Model::CreateCdnIpResult> CreateCdnIpOutcome;
			typedef std::future<CreateCdnIpOutcome> CreateCdnIpOutcomeCallable;
			typedef std::function<void(const JarvisClient*, const Model::CreateCdnIpRequest&, const CreateCdnIpOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateCdnIpAsyncHandler;
			typedef Outcome<Error, Model::CreateCdnSubscriptionResult> CreateCdnSubscriptionOutcome;
			typedef std::future<CreateCdnSubscriptionOutcome> CreateCdnSubscriptionOutcomeCallable;
			typedef std::function<void(const JarvisClient*, const Model::CreateCdnSubscriptionRequest&, const CreateCdnSubscriptionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateCdnSubscriptionAsyncHandler;
			typedef Outcome<Error, Model::CreateConsoleAccessWhiteListResult> CreateConsoleAccessWhiteListOutcome;
			typedef std::future<CreateConsoleAccessWhiteListOutcome> CreateConsoleAccessWhiteListOutcomeCallable;
			typedef std::function<void(const JarvisClient*, const Model::CreateConsoleAccessWhiteListRequest&, const CreateConsoleAccessWhiteListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateConsoleAccessWhiteListAsyncHandler;
			typedef Outcome<Error, Model::CreateCpmcPunishFeedBackResult> CreateCpmcPunishFeedBackOutcome;
			typedef std::future<CreateCpmcPunishFeedBackOutcome> CreateCpmcPunishFeedBackOutcomeCallable;
			typedef std::function<void(const JarvisClient*, const Model::CreateCpmcPunishFeedBackRequest&, const CreateCpmcPunishFeedBackOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateCpmcPunishFeedBackAsyncHandler;
			typedef Outcome<Error, Model::CreateIpWhiteBaselineResult> CreateIpWhiteBaselineOutcome;
			typedef std::future<CreateIpWhiteBaselineOutcome> CreateIpWhiteBaselineOutcomeCallable;
			typedef std::function<void(const JarvisClient*, const Model::CreateIpWhiteBaselineRequest&, const CreateIpWhiteBaselineOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateIpWhiteBaselineAsyncHandler;
			typedef Outcome<Error, Model::CreateUidWhiteBaselineResult> CreateUidWhiteBaselineOutcome;
			typedef std::future<CreateUidWhiteBaselineOutcome> CreateUidWhiteBaselineOutcomeCallable;
			typedef std::function<void(const JarvisClient*, const Model::CreateUidWhiteBaselineRequest&, const CreateUidWhiteBaselineOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateUidWhiteBaselineAsyncHandler;
			typedef Outcome<Error, Model::CreateUidWhiteListGroupResult> CreateUidWhiteListGroupOutcome;
			typedef std::future<CreateUidWhiteListGroupOutcome> CreateUidWhiteListGroupOutcomeCallable;
			typedef std::function<void(const JarvisClient*, const Model::CreateUidWhiteListGroupRequest&, const CreateUidWhiteListGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateUidWhiteListGroupAsyncHandler;
			typedef Outcome<Error, Model::DeleteAccessWhiteListGroupResult> DeleteAccessWhiteListGroupOutcome;
			typedef std::future<DeleteAccessWhiteListGroupOutcome> DeleteAccessWhiteListGroupOutcomeCallable;
			typedef std::function<void(const JarvisClient*, const Model::DeleteAccessWhiteListGroupRequest&, const DeleteAccessWhiteListGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAccessWhiteListGroupAsyncHandler;
			typedef Outcome<Error, Model::DeleteCdnIpResult> DeleteCdnIpOutcome;
			typedef std::future<DeleteCdnIpOutcome> DeleteCdnIpOutcomeCallable;
			typedef std::function<void(const JarvisClient*, const Model::DeleteCdnIpRequest&, const DeleteCdnIpOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCdnIpAsyncHandler;
			typedef Outcome<Error, Model::DeleteCdnSubscriptionResult> DeleteCdnSubscriptionOutcome;
			typedef std::future<DeleteCdnSubscriptionOutcome> DeleteCdnSubscriptionOutcomeCallable;
			typedef std::function<void(const JarvisClient*, const Model::DeleteCdnSubscriptionRequest&, const DeleteCdnSubscriptionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCdnSubscriptionAsyncHandler;
			typedef Outcome<Error, Model::DeleteConsoleAccessWhiteListResult> DeleteConsoleAccessWhiteListOutcome;
			typedef std::future<DeleteConsoleAccessWhiteListOutcome> DeleteConsoleAccessWhiteListOutcomeCallable;
			typedef std::function<void(const JarvisClient*, const Model::DeleteConsoleAccessWhiteListRequest&, const DeleteConsoleAccessWhiteListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteConsoleAccessWhiteListAsyncHandler;
			typedef Outcome<Error, Model::DeleteIpWhiteBaselineResult> DeleteIpWhiteBaselineOutcome;
			typedef std::future<DeleteIpWhiteBaselineOutcome> DeleteIpWhiteBaselineOutcomeCallable;
			typedef std::function<void(const JarvisClient*, const Model::DeleteIpWhiteBaselineRequest&, const DeleteIpWhiteBaselineOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteIpWhiteBaselineAsyncHandler;
			typedef Outcome<Error, Model::DeleteUidWhiteBaselineResult> DeleteUidWhiteBaselineOutcome;
			typedef std::future<DeleteUidWhiteBaselineOutcome> DeleteUidWhiteBaselineOutcomeCallable;
			typedef std::function<void(const JarvisClient*, const Model::DeleteUidWhiteBaselineRequest&, const DeleteUidWhiteBaselineOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteUidWhiteBaselineAsyncHandler;
			typedef Outcome<Error, Model::DeleteUidWhiteListGroupResult> DeleteUidWhiteListGroupOutcome;
			typedef std::future<DeleteUidWhiteListGroupOutcome> DeleteUidWhiteListGroupOutcomeCallable;
			typedef std::function<void(const JarvisClient*, const Model::DeleteUidWhiteListGroupRequest&, const DeleteUidWhiteListGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteUidWhiteListGroupAsyncHandler;
			typedef Outcome<Error, Model::DeleteWhiteListConditionalResult> DeleteWhiteListConditionalOutcome;
			typedef std::future<DeleteWhiteListConditionalOutcome> DeleteWhiteListConditionalOutcomeCallable;
			typedef std::function<void(const JarvisClient*, const Model::DeleteWhiteListConditionalRequest&, const DeleteWhiteListConditionalOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteWhiteListConditionalAsyncHandler;
			typedef Outcome<Error, Model::DeleteWhiteListDbItemConditionalResult> DeleteWhiteListDbItemConditionalOutcome;
			typedef std::future<DeleteWhiteListDbItemConditionalOutcome> DeleteWhiteListDbItemConditionalOutcomeCallable;
			typedef std::function<void(const JarvisClient*, const Model::DeleteWhiteListDbItemConditionalRequest&, const DeleteWhiteListDbItemConditionalOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteWhiteListDbItemConditionalAsyncHandler;
			typedef Outcome<Error, Model::DescribeAccessWhiteListEipListResult> DescribeAccessWhiteListEipListOutcome;
			typedef std::future<DescribeAccessWhiteListEipListOutcome> DescribeAccessWhiteListEipListOutcomeCallable;
			typedef std::function<void(const JarvisClient*, const Model::DescribeAccessWhiteListEipListRequest&, const DescribeAccessWhiteListEipListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccessWhiteListEipListAsyncHandler;
			typedef Outcome<Error, Model::DescribeAccessWhiteListGroupResult> DescribeAccessWhiteListGroupOutcome;
			typedef std::future<DescribeAccessWhiteListGroupOutcome> DescribeAccessWhiteListGroupOutcomeCallable;
			typedef std::function<void(const JarvisClient*, const Model::DescribeAccessWhiteListGroupRequest&, const DescribeAccessWhiteListGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccessWhiteListGroupAsyncHandler;
			typedef Outcome<Error, Model::DescribeAccessWhiteListSlbListResult> DescribeAccessWhiteListSlbListOutcome;
			typedef std::future<DescribeAccessWhiteListSlbListOutcome> DescribeAccessWhiteListSlbListOutcomeCallable;
			typedef std::function<void(const JarvisClient*, const Model::DescribeAccessWhiteListSlbListRequest&, const DescribeAccessWhiteListSlbListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccessWhiteListSlbListAsyncHandler;
			typedef Outcome<Error, Model::DescribeAccessWhitelistEcsListResult> DescribeAccessWhitelistEcsListOutcome;
			typedef std::future<DescribeAccessWhitelistEcsListOutcome> DescribeAccessWhitelistEcsListOutcomeCallable;
			typedef std::function<void(const JarvisClient*, const Model::DescribeAccessWhitelistEcsListRequest&, const DescribeAccessWhitelistEcsListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccessWhitelistEcsListAsyncHandler;
			typedef Outcome<Error, Model::DescribeCdnCertifyResult> DescribeCdnCertifyOutcome;
			typedef std::future<DescribeCdnCertifyOutcome> DescribeCdnCertifyOutcomeCallable;
			typedef std::function<void(const JarvisClient*, const Model::DescribeCdnCertifyRequest&, const DescribeCdnCertifyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCdnCertifyAsyncHandler;
			typedef Outcome<Error, Model::DescribeCdnIpListResult> DescribeCdnIpListOutcome;
			typedef std::future<DescribeCdnIpListOutcome> DescribeCdnIpListOutcomeCallable;
			typedef std::function<void(const JarvisClient*, const Model::DescribeCdnIpListRequest&, const DescribeCdnIpListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCdnIpListAsyncHandler;
			typedef Outcome<Error, Model::DescribeCdnSubscriptionResult> DescribeCdnSubscriptionOutcome;
			typedef std::future<DescribeCdnSubscriptionOutcome> DescribeCdnSubscriptionOutcomeCallable;
			typedef std::function<void(const JarvisClient*, const Model::DescribeCdnSubscriptionRequest&, const DescribeCdnSubscriptionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCdnSubscriptionAsyncHandler;
			typedef Outcome<Error, Model::DescribeCdnVendorResult> DescribeCdnVendorOutcome;
			typedef std::future<DescribeCdnVendorOutcome> DescribeCdnVendorOutcomeCallable;
			typedef std::function<void(const JarvisClient*, const Model::DescribeCdnVendorRequest&, const DescribeCdnVendorOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCdnVendorAsyncHandler;
			typedef Outcome<Error, Model::DescribeConsoleAccessWhiteListResult> DescribeConsoleAccessWhiteListOutcome;
			typedef std::future<DescribeConsoleAccessWhiteListOutcome> DescribeConsoleAccessWhiteListOutcomeCallable;
			typedef std::function<void(const JarvisClient*, const Model::DescribeConsoleAccessWhiteListRequest&, const DescribeConsoleAccessWhiteListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeConsoleAccessWhiteListAsyncHandler;
			typedef Outcome<Error, Model::DescribeCpmcPunishListResult> DescribeCpmcPunishListOutcome;
			typedef std::future<DescribeCpmcPunishListOutcome> DescribeCpmcPunishListOutcomeCallable;
			typedef std::function<void(const JarvisClient*, const Model::DescribeCpmcPunishListRequest&, const DescribeCpmcPunishListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCpmcPunishListAsyncHandler;
			typedef Outcome<Error, Model::DescribeDdosDefenseInfoResult> DescribeDdosDefenseInfoOutcome;
			typedef std::future<DescribeDdosDefenseInfoOutcome> DescribeDdosDefenseInfoOutcomeCallable;
			typedef std::function<void(const JarvisClient*, const Model::DescribeDdosDefenseInfoRequest&, const DescribeDdosDefenseInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDdosDefenseInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeEcsListPageResult> DescribeEcsListPageOutcome;
			typedef std::future<DescribeEcsListPageOutcome> DescribeEcsListPageOutcomeCallable;
			typedef std::function<void(const JarvisClient*, const Model::DescribeEcsListPageRequest&, const DescribeEcsListPageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEcsListPageAsyncHandler;
			typedef Outcome<Error, Model::DescribeIpWhiteBaselineResult> DescribeIpWhiteBaselineOutcome;
			typedef std::future<DescribeIpWhiteBaselineOutcome> DescribeIpWhiteBaselineOutcomeCallable;
			typedef std::function<void(const JarvisClient*, const Model::DescribeIpWhiteBaselineRequest&, const DescribeIpWhiteBaselineOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIpWhiteBaselineAsyncHandler;
			typedef Outcome<Error, Model::DescribePhoneInfoResult> DescribePhoneInfoOutcome;
			typedef std::future<DescribePhoneInfoOutcome> DescribePhoneInfoOutcomeCallable;
			typedef std::function<void(const JarvisClient*, const Model::DescribePhoneInfoRequest&, const DescribePhoneInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribePhoneInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribePunishListResult> DescribePunishListOutcome;
			typedef std::future<DescribePunishListOutcome> DescribePunishListOutcomeCallable;
			typedef std::function<void(const JarvisClient*, const Model::DescribePunishListRequest&, const DescribePunishListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribePunishListAsyncHandler;
			typedef Outcome<Error, Model::DescribeResetRecordListResult> DescribeResetRecordListOutcome;
			typedef std::future<DescribeResetRecordListOutcome> DescribeResetRecordListOutcomeCallable;
			typedef std::function<void(const JarvisClient*, const Model::DescribeResetRecordListRequest&, const DescribeResetRecordListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeResetRecordListAsyncHandler;
			typedef Outcome<Error, Model::DescribeResetRecordQueryCountResult> DescribeResetRecordQueryCountOutcome;
			typedef std::future<DescribeResetRecordQueryCountOutcome> DescribeResetRecordQueryCountOutcomeCallable;
			typedef std::function<void(const JarvisClient*, const Model::DescribeResetRecordQueryCountRequest&, const DescribeResetRecordQueryCountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeResetRecordQueryCountAsyncHandler;
			typedef Outcome<Error, Model::DescribeRiskListDetailResult> DescribeRiskListDetailOutcome;
			typedef std::future<DescribeRiskListDetailOutcome> DescribeRiskListDetailOutcomeCallable;
			typedef std::function<void(const JarvisClient*, const Model::DescribeRiskListDetailRequest&, const DescribeRiskListDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRiskListDetailAsyncHandler;
			typedef Outcome<Error, Model::DescribeRiskTrendResult> DescribeRiskTrendOutcome;
			typedef std::future<DescribeRiskTrendOutcome> DescribeRiskTrendOutcomeCallable;
			typedef std::function<void(const JarvisClient*, const Model::DescribeRiskTrendRequest&, const DescribeRiskTrendOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRiskTrendAsyncHandler;
			typedef Outcome<Error, Model::DescribeSpecialEcsResult> DescribeSpecialEcsOutcome;
			typedef std::future<DescribeSpecialEcsOutcome> DescribeSpecialEcsOutcomeCallable;
			typedef std::function<void(const JarvisClient*, const Model::DescribeSpecialEcsRequest&, const DescribeSpecialEcsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSpecialEcsAsyncHandler;
			typedef Outcome<Error, Model::DescribeUidGcLevelResult> DescribeUidGcLevelOutcome;
			typedef std::future<DescribeUidGcLevelOutcome> DescribeUidGcLevelOutcomeCallable;
			typedef std::function<void(const JarvisClient*, const Model::DescribeUidGcLevelRequest&, const DescribeUidGcLevelOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUidGcLevelAsyncHandler;
			typedef Outcome<Error, Model::DescribeUidWhiteBaselineResult> DescribeUidWhiteBaselineOutcome;
			typedef std::future<DescribeUidWhiteBaselineOutcome> DescribeUidWhiteBaselineOutcomeCallable;
			typedef std::function<void(const JarvisClient*, const Model::DescribeUidWhiteBaselineRequest&, const DescribeUidWhiteBaselineOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUidWhiteBaselineAsyncHandler;
			typedef Outcome<Error, Model::DescribeUidWhiteListGroupResult> DescribeUidWhiteListGroupOutcome;
			typedef std::future<DescribeUidWhiteListGroupOutcome> DescribeUidWhiteListGroupOutcomeCallable;
			typedef std::function<void(const JarvisClient*, const Model::DescribeUidWhiteListGroupRequest&, const DescribeUidWhiteListGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUidWhiteListGroupAsyncHandler;
			typedef Outcome<Error, Model::ModifyAccessWhiteListAutoShareResult> ModifyAccessWhiteListAutoShareOutcome;
			typedef std::future<ModifyAccessWhiteListAutoShareOutcome> ModifyAccessWhiteListAutoShareOutcomeCallable;
			typedef std::function<void(const JarvisClient*, const Model::ModifyAccessWhiteListAutoShareRequest&, const ModifyAccessWhiteListAutoShareOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAccessWhiteListAutoShareAsyncHandler;
			typedef Outcome<Error, Model::ModifyIpWhiteBaselineResult> ModifyIpWhiteBaselineOutcome;
			typedef std::future<ModifyIpWhiteBaselineOutcome> ModifyIpWhiteBaselineOutcomeCallable;
			typedef std::function<void(const JarvisClient*, const Model::ModifyIpWhiteBaselineRequest&, const ModifyIpWhiteBaselineOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyIpWhiteBaselineAsyncHandler;
			typedef Outcome<Error, Model::ModifyUidWhiteBaselineResult> ModifyUidWhiteBaselineOutcome;
			typedef std::future<ModifyUidWhiteBaselineOutcome> ModifyUidWhiteBaselineOutcomeCallable;
			typedef std::function<void(const JarvisClient*, const Model::ModifyUidWhiteBaselineRequest&, const ModifyUidWhiteBaselineOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyUidWhiteBaselineAsyncHandler;
			typedef Outcome<Error, Model::ModifyUidWhiteListAutoShareResult> ModifyUidWhiteListAutoShareOutcome;
			typedef std::future<ModifyUidWhiteListAutoShareOutcome> ModifyUidWhiteListAutoShareOutcomeCallable;
			typedef std::function<void(const JarvisClient*, const Model::ModifyUidWhiteListAutoShareRequest&, const ModifyUidWhiteListAutoShareOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyUidWhiteListAutoShareAsyncHandler;

			JarvisClient(const Credentials &credentials, const ClientConfiguration &configuration);
			JarvisClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			JarvisClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~JarvisClient();
			CreateAccessWhiteListGroupOutcome createAccessWhiteListGroup(const Model::CreateAccessWhiteListGroupRequest &request)const;
			void createAccessWhiteListGroupAsync(const Model::CreateAccessWhiteListGroupRequest& request, const CreateAccessWhiteListGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateAccessWhiteListGroupOutcomeCallable createAccessWhiteListGroupCallable(const Model::CreateAccessWhiteListGroupRequest& request) const;
			CreateAllEcsWhiteListOutcome createAllEcsWhiteList(const Model::CreateAllEcsWhiteListRequest &request)const;
			void createAllEcsWhiteListAsync(const Model::CreateAllEcsWhiteListRequest& request, const CreateAllEcsWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateAllEcsWhiteListOutcomeCallable createAllEcsWhiteListCallable(const Model::CreateAllEcsWhiteListRequest& request) const;
			CreateCdnIpOutcome createCdnIp(const Model::CreateCdnIpRequest &request)const;
			void createCdnIpAsync(const Model::CreateCdnIpRequest& request, const CreateCdnIpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateCdnIpOutcomeCallable createCdnIpCallable(const Model::CreateCdnIpRequest& request) const;
			CreateCdnSubscriptionOutcome createCdnSubscription(const Model::CreateCdnSubscriptionRequest &request)const;
			void createCdnSubscriptionAsync(const Model::CreateCdnSubscriptionRequest& request, const CreateCdnSubscriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateCdnSubscriptionOutcomeCallable createCdnSubscriptionCallable(const Model::CreateCdnSubscriptionRequest& request) const;
			CreateConsoleAccessWhiteListOutcome createConsoleAccessWhiteList(const Model::CreateConsoleAccessWhiteListRequest &request)const;
			void createConsoleAccessWhiteListAsync(const Model::CreateConsoleAccessWhiteListRequest& request, const CreateConsoleAccessWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateConsoleAccessWhiteListOutcomeCallable createConsoleAccessWhiteListCallable(const Model::CreateConsoleAccessWhiteListRequest& request) const;
			CreateCpmcPunishFeedBackOutcome createCpmcPunishFeedBack(const Model::CreateCpmcPunishFeedBackRequest &request)const;
			void createCpmcPunishFeedBackAsync(const Model::CreateCpmcPunishFeedBackRequest& request, const CreateCpmcPunishFeedBackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateCpmcPunishFeedBackOutcomeCallable createCpmcPunishFeedBackCallable(const Model::CreateCpmcPunishFeedBackRequest& request) const;
			CreateIpWhiteBaselineOutcome createIpWhiteBaseline(const Model::CreateIpWhiteBaselineRequest &request)const;
			void createIpWhiteBaselineAsync(const Model::CreateIpWhiteBaselineRequest& request, const CreateIpWhiteBaselineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateIpWhiteBaselineOutcomeCallable createIpWhiteBaselineCallable(const Model::CreateIpWhiteBaselineRequest& request) const;
			CreateUidWhiteBaselineOutcome createUidWhiteBaseline(const Model::CreateUidWhiteBaselineRequest &request)const;
			void createUidWhiteBaselineAsync(const Model::CreateUidWhiteBaselineRequest& request, const CreateUidWhiteBaselineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateUidWhiteBaselineOutcomeCallable createUidWhiteBaselineCallable(const Model::CreateUidWhiteBaselineRequest& request) const;
			CreateUidWhiteListGroupOutcome createUidWhiteListGroup(const Model::CreateUidWhiteListGroupRequest &request)const;
			void createUidWhiteListGroupAsync(const Model::CreateUidWhiteListGroupRequest& request, const CreateUidWhiteListGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateUidWhiteListGroupOutcomeCallable createUidWhiteListGroupCallable(const Model::CreateUidWhiteListGroupRequest& request) const;
			DeleteAccessWhiteListGroupOutcome deleteAccessWhiteListGroup(const Model::DeleteAccessWhiteListGroupRequest &request)const;
			void deleteAccessWhiteListGroupAsync(const Model::DeleteAccessWhiteListGroupRequest& request, const DeleteAccessWhiteListGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteAccessWhiteListGroupOutcomeCallable deleteAccessWhiteListGroupCallable(const Model::DeleteAccessWhiteListGroupRequest& request) const;
			DeleteCdnIpOutcome deleteCdnIp(const Model::DeleteCdnIpRequest &request)const;
			void deleteCdnIpAsync(const Model::DeleteCdnIpRequest& request, const DeleteCdnIpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteCdnIpOutcomeCallable deleteCdnIpCallable(const Model::DeleteCdnIpRequest& request) const;
			DeleteCdnSubscriptionOutcome deleteCdnSubscription(const Model::DeleteCdnSubscriptionRequest &request)const;
			void deleteCdnSubscriptionAsync(const Model::DeleteCdnSubscriptionRequest& request, const DeleteCdnSubscriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteCdnSubscriptionOutcomeCallable deleteCdnSubscriptionCallable(const Model::DeleteCdnSubscriptionRequest& request) const;
			DeleteConsoleAccessWhiteListOutcome deleteConsoleAccessWhiteList(const Model::DeleteConsoleAccessWhiteListRequest &request)const;
			void deleteConsoleAccessWhiteListAsync(const Model::DeleteConsoleAccessWhiteListRequest& request, const DeleteConsoleAccessWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteConsoleAccessWhiteListOutcomeCallable deleteConsoleAccessWhiteListCallable(const Model::DeleteConsoleAccessWhiteListRequest& request) const;
			DeleteIpWhiteBaselineOutcome deleteIpWhiteBaseline(const Model::DeleteIpWhiteBaselineRequest &request)const;
			void deleteIpWhiteBaselineAsync(const Model::DeleteIpWhiteBaselineRequest& request, const DeleteIpWhiteBaselineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteIpWhiteBaselineOutcomeCallable deleteIpWhiteBaselineCallable(const Model::DeleteIpWhiteBaselineRequest& request) const;
			DeleteUidWhiteBaselineOutcome deleteUidWhiteBaseline(const Model::DeleteUidWhiteBaselineRequest &request)const;
			void deleteUidWhiteBaselineAsync(const Model::DeleteUidWhiteBaselineRequest& request, const DeleteUidWhiteBaselineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteUidWhiteBaselineOutcomeCallable deleteUidWhiteBaselineCallable(const Model::DeleteUidWhiteBaselineRequest& request) const;
			DeleteUidWhiteListGroupOutcome deleteUidWhiteListGroup(const Model::DeleteUidWhiteListGroupRequest &request)const;
			void deleteUidWhiteListGroupAsync(const Model::DeleteUidWhiteListGroupRequest& request, const DeleteUidWhiteListGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteUidWhiteListGroupOutcomeCallable deleteUidWhiteListGroupCallable(const Model::DeleteUidWhiteListGroupRequest& request) const;
			DeleteWhiteListConditionalOutcome deleteWhiteListConditional(const Model::DeleteWhiteListConditionalRequest &request)const;
			void deleteWhiteListConditionalAsync(const Model::DeleteWhiteListConditionalRequest& request, const DeleteWhiteListConditionalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteWhiteListConditionalOutcomeCallable deleteWhiteListConditionalCallable(const Model::DeleteWhiteListConditionalRequest& request) const;
			DeleteWhiteListDbItemConditionalOutcome deleteWhiteListDbItemConditional(const Model::DeleteWhiteListDbItemConditionalRequest &request)const;
			void deleteWhiteListDbItemConditionalAsync(const Model::DeleteWhiteListDbItemConditionalRequest& request, const DeleteWhiteListDbItemConditionalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteWhiteListDbItemConditionalOutcomeCallable deleteWhiteListDbItemConditionalCallable(const Model::DeleteWhiteListDbItemConditionalRequest& request) const;
			DescribeAccessWhiteListEipListOutcome describeAccessWhiteListEipList(const Model::DescribeAccessWhiteListEipListRequest &request)const;
			void describeAccessWhiteListEipListAsync(const Model::DescribeAccessWhiteListEipListRequest& request, const DescribeAccessWhiteListEipListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAccessWhiteListEipListOutcomeCallable describeAccessWhiteListEipListCallable(const Model::DescribeAccessWhiteListEipListRequest& request) const;
			DescribeAccessWhiteListGroupOutcome describeAccessWhiteListGroup(const Model::DescribeAccessWhiteListGroupRequest &request)const;
			void describeAccessWhiteListGroupAsync(const Model::DescribeAccessWhiteListGroupRequest& request, const DescribeAccessWhiteListGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAccessWhiteListGroupOutcomeCallable describeAccessWhiteListGroupCallable(const Model::DescribeAccessWhiteListGroupRequest& request) const;
			DescribeAccessWhiteListSlbListOutcome describeAccessWhiteListSlbList(const Model::DescribeAccessWhiteListSlbListRequest &request)const;
			void describeAccessWhiteListSlbListAsync(const Model::DescribeAccessWhiteListSlbListRequest& request, const DescribeAccessWhiteListSlbListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAccessWhiteListSlbListOutcomeCallable describeAccessWhiteListSlbListCallable(const Model::DescribeAccessWhiteListSlbListRequest& request) const;
			DescribeAccessWhitelistEcsListOutcome describeAccessWhitelistEcsList(const Model::DescribeAccessWhitelistEcsListRequest &request)const;
			void describeAccessWhitelistEcsListAsync(const Model::DescribeAccessWhitelistEcsListRequest& request, const DescribeAccessWhitelistEcsListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAccessWhitelistEcsListOutcomeCallable describeAccessWhitelistEcsListCallable(const Model::DescribeAccessWhitelistEcsListRequest& request) const;
			DescribeCdnCertifyOutcome describeCdnCertify(const Model::DescribeCdnCertifyRequest &request)const;
			void describeCdnCertifyAsync(const Model::DescribeCdnCertifyRequest& request, const DescribeCdnCertifyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCdnCertifyOutcomeCallable describeCdnCertifyCallable(const Model::DescribeCdnCertifyRequest& request) const;
			DescribeCdnIpListOutcome describeCdnIpList(const Model::DescribeCdnIpListRequest &request)const;
			void describeCdnIpListAsync(const Model::DescribeCdnIpListRequest& request, const DescribeCdnIpListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCdnIpListOutcomeCallable describeCdnIpListCallable(const Model::DescribeCdnIpListRequest& request) const;
			DescribeCdnSubscriptionOutcome describeCdnSubscription(const Model::DescribeCdnSubscriptionRequest &request)const;
			void describeCdnSubscriptionAsync(const Model::DescribeCdnSubscriptionRequest& request, const DescribeCdnSubscriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCdnSubscriptionOutcomeCallable describeCdnSubscriptionCallable(const Model::DescribeCdnSubscriptionRequest& request) const;
			DescribeCdnVendorOutcome describeCdnVendor(const Model::DescribeCdnVendorRequest &request)const;
			void describeCdnVendorAsync(const Model::DescribeCdnVendorRequest& request, const DescribeCdnVendorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCdnVendorOutcomeCallable describeCdnVendorCallable(const Model::DescribeCdnVendorRequest& request) const;
			DescribeConsoleAccessWhiteListOutcome describeConsoleAccessWhiteList(const Model::DescribeConsoleAccessWhiteListRequest &request)const;
			void describeConsoleAccessWhiteListAsync(const Model::DescribeConsoleAccessWhiteListRequest& request, const DescribeConsoleAccessWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeConsoleAccessWhiteListOutcomeCallable describeConsoleAccessWhiteListCallable(const Model::DescribeConsoleAccessWhiteListRequest& request) const;
			DescribeCpmcPunishListOutcome describeCpmcPunishList(const Model::DescribeCpmcPunishListRequest &request)const;
			void describeCpmcPunishListAsync(const Model::DescribeCpmcPunishListRequest& request, const DescribeCpmcPunishListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCpmcPunishListOutcomeCallable describeCpmcPunishListCallable(const Model::DescribeCpmcPunishListRequest& request) const;
			DescribeDdosDefenseInfoOutcome describeDdosDefenseInfo(const Model::DescribeDdosDefenseInfoRequest &request)const;
			void describeDdosDefenseInfoAsync(const Model::DescribeDdosDefenseInfoRequest& request, const DescribeDdosDefenseInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDdosDefenseInfoOutcomeCallable describeDdosDefenseInfoCallable(const Model::DescribeDdosDefenseInfoRequest& request) const;
			DescribeEcsListPageOutcome describeEcsListPage(const Model::DescribeEcsListPageRequest &request)const;
			void describeEcsListPageAsync(const Model::DescribeEcsListPageRequest& request, const DescribeEcsListPageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeEcsListPageOutcomeCallable describeEcsListPageCallable(const Model::DescribeEcsListPageRequest& request) const;
			DescribeIpWhiteBaselineOutcome describeIpWhiteBaseline(const Model::DescribeIpWhiteBaselineRequest &request)const;
			void describeIpWhiteBaselineAsync(const Model::DescribeIpWhiteBaselineRequest& request, const DescribeIpWhiteBaselineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeIpWhiteBaselineOutcomeCallable describeIpWhiteBaselineCallable(const Model::DescribeIpWhiteBaselineRequest& request) const;
			DescribePhoneInfoOutcome describePhoneInfo(const Model::DescribePhoneInfoRequest &request)const;
			void describePhoneInfoAsync(const Model::DescribePhoneInfoRequest& request, const DescribePhoneInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribePhoneInfoOutcomeCallable describePhoneInfoCallable(const Model::DescribePhoneInfoRequest& request) const;
			DescribePunishListOutcome describePunishList(const Model::DescribePunishListRequest &request)const;
			void describePunishListAsync(const Model::DescribePunishListRequest& request, const DescribePunishListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribePunishListOutcomeCallable describePunishListCallable(const Model::DescribePunishListRequest& request) const;
			DescribeResetRecordListOutcome describeResetRecordList(const Model::DescribeResetRecordListRequest &request)const;
			void describeResetRecordListAsync(const Model::DescribeResetRecordListRequest& request, const DescribeResetRecordListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeResetRecordListOutcomeCallable describeResetRecordListCallable(const Model::DescribeResetRecordListRequest& request) const;
			DescribeResetRecordQueryCountOutcome describeResetRecordQueryCount(const Model::DescribeResetRecordQueryCountRequest &request)const;
			void describeResetRecordQueryCountAsync(const Model::DescribeResetRecordQueryCountRequest& request, const DescribeResetRecordQueryCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeResetRecordQueryCountOutcomeCallable describeResetRecordQueryCountCallable(const Model::DescribeResetRecordQueryCountRequest& request) const;
			DescribeRiskListDetailOutcome describeRiskListDetail(const Model::DescribeRiskListDetailRequest &request)const;
			void describeRiskListDetailAsync(const Model::DescribeRiskListDetailRequest& request, const DescribeRiskListDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRiskListDetailOutcomeCallable describeRiskListDetailCallable(const Model::DescribeRiskListDetailRequest& request) const;
			DescribeRiskTrendOutcome describeRiskTrend(const Model::DescribeRiskTrendRequest &request)const;
			void describeRiskTrendAsync(const Model::DescribeRiskTrendRequest& request, const DescribeRiskTrendAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRiskTrendOutcomeCallable describeRiskTrendCallable(const Model::DescribeRiskTrendRequest& request) const;
			DescribeSpecialEcsOutcome describeSpecialEcs(const Model::DescribeSpecialEcsRequest &request)const;
			void describeSpecialEcsAsync(const Model::DescribeSpecialEcsRequest& request, const DescribeSpecialEcsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSpecialEcsOutcomeCallable describeSpecialEcsCallable(const Model::DescribeSpecialEcsRequest& request) const;
			DescribeUidGcLevelOutcome describeUidGcLevel(const Model::DescribeUidGcLevelRequest &request)const;
			void describeUidGcLevelAsync(const Model::DescribeUidGcLevelRequest& request, const DescribeUidGcLevelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeUidGcLevelOutcomeCallable describeUidGcLevelCallable(const Model::DescribeUidGcLevelRequest& request) const;
			DescribeUidWhiteBaselineOutcome describeUidWhiteBaseline(const Model::DescribeUidWhiteBaselineRequest &request)const;
			void describeUidWhiteBaselineAsync(const Model::DescribeUidWhiteBaselineRequest& request, const DescribeUidWhiteBaselineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeUidWhiteBaselineOutcomeCallable describeUidWhiteBaselineCallable(const Model::DescribeUidWhiteBaselineRequest& request) const;
			DescribeUidWhiteListGroupOutcome describeUidWhiteListGroup(const Model::DescribeUidWhiteListGroupRequest &request)const;
			void describeUidWhiteListGroupAsync(const Model::DescribeUidWhiteListGroupRequest& request, const DescribeUidWhiteListGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeUidWhiteListGroupOutcomeCallable describeUidWhiteListGroupCallable(const Model::DescribeUidWhiteListGroupRequest& request) const;
			ModifyAccessWhiteListAutoShareOutcome modifyAccessWhiteListAutoShare(const Model::ModifyAccessWhiteListAutoShareRequest &request)const;
			void modifyAccessWhiteListAutoShareAsync(const Model::ModifyAccessWhiteListAutoShareRequest& request, const ModifyAccessWhiteListAutoShareAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyAccessWhiteListAutoShareOutcomeCallable modifyAccessWhiteListAutoShareCallable(const Model::ModifyAccessWhiteListAutoShareRequest& request) const;
			ModifyIpWhiteBaselineOutcome modifyIpWhiteBaseline(const Model::ModifyIpWhiteBaselineRequest &request)const;
			void modifyIpWhiteBaselineAsync(const Model::ModifyIpWhiteBaselineRequest& request, const ModifyIpWhiteBaselineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyIpWhiteBaselineOutcomeCallable modifyIpWhiteBaselineCallable(const Model::ModifyIpWhiteBaselineRequest& request) const;
			ModifyUidWhiteBaselineOutcome modifyUidWhiteBaseline(const Model::ModifyUidWhiteBaselineRequest &request)const;
			void modifyUidWhiteBaselineAsync(const Model::ModifyUidWhiteBaselineRequest& request, const ModifyUidWhiteBaselineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyUidWhiteBaselineOutcomeCallable modifyUidWhiteBaselineCallable(const Model::ModifyUidWhiteBaselineRequest& request) const;
			ModifyUidWhiteListAutoShareOutcome modifyUidWhiteListAutoShare(const Model::ModifyUidWhiteListAutoShareRequest &request)const;
			void modifyUidWhiteListAutoShareAsync(const Model::ModifyUidWhiteListAutoShareRequest& request, const ModifyUidWhiteListAutoShareAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyUidWhiteListAutoShareOutcomeCallable modifyUidWhiteListAutoShareCallable(const Model::ModifyUidWhiteListAutoShareRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_JARVIS_JARVISCLIENT_H_
