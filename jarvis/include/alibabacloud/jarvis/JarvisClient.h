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
#include "model/DeleteUidWhiteListGroupRequest.h"
#include "model/DeleteUidWhiteListGroupResult.h"
#include "model/CreateCpmcPunishFeedBackRequest.h"
#include "model/CreateCpmcPunishFeedBackResult.h"
#include "model/CreateAccessWhiteListGroupRequest.h"
#include "model/CreateAccessWhiteListGroupResult.h"
#include "model/DescribeDdosDefenseInfoRequest.h"
#include "model/DescribeDdosDefenseInfoResult.h"
#include "model/DescribePhoneInfoRequest.h"
#include "model/DescribePhoneInfoResult.h"
#include "model/DescribeAccessWhitelistEcsListRequest.h"
#include "model/DescribeAccessWhitelistEcsListResult.h"
#include "model/DescribeResetRecordListRequest.h"
#include "model/DescribeResetRecordListResult.h"
#include "model/ModifyUidWhiteListAutoShareRequest.h"
#include "model/ModifyUidWhiteListAutoShareResult.h"
#include "model/ModifyAccessWhiteListAutoShareRequest.h"
#include "model/ModifyAccessWhiteListAutoShareResult.h"
#include "model/CreateUidWhiteListGroupRequest.h"
#include "model/CreateUidWhiteListGroupResult.h"
#include "model/DescribeCpmcPunishListRequest.h"
#include "model/DescribeCpmcPunishListResult.h"
#include "model/DescribeUidGcLevelRequest.h"
#include "model/DescribeUidGcLevelResult.h"
#include "model/DeleteAccessWhiteListGroupRequest.h"
#include "model/DeleteAccessWhiteListGroupResult.h"
#include "model/DescribeAccessWhiteListGroupRequest.h"
#include "model/DescribeAccessWhiteListGroupResult.h"
#include "model/DescribeResetRecordQueryCountRequest.h"
#include "model/DescribeResetRecordQueryCountResult.h"
#include "model/DescribePunishListRequest.h"
#include "model/DescribePunishListResult.h"
#include "model/DescribeUidWhiteListGroupRequest.h"
#include "model/DescribeUidWhiteListGroupResult.h"
#include "model/DescribeRiskListDetailRequest.h"
#include "model/DescribeRiskListDetailResult.h"
#include "model/DescribeRiskTrendRequest.h"
#include "model/DescribeRiskTrendResult.h"


namespace AlibabaCloud
{
	namespace Jarvis
	{
		class ALIBABACLOUD_JARVIS_EXPORT JarvisClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::DeleteUidWhiteListGroupResult> DeleteUidWhiteListGroupOutcome;
			typedef std::future<DeleteUidWhiteListGroupOutcome> DeleteUidWhiteListGroupOutcomeCallable;
			typedef std::function<void(const JarvisClient*, const Model::DeleteUidWhiteListGroupRequest&, const DeleteUidWhiteListGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteUidWhiteListGroupAsyncHandler;
			typedef Outcome<Error, Model::CreateCpmcPunishFeedBackResult> CreateCpmcPunishFeedBackOutcome;
			typedef std::future<CreateCpmcPunishFeedBackOutcome> CreateCpmcPunishFeedBackOutcomeCallable;
			typedef std::function<void(const JarvisClient*, const Model::CreateCpmcPunishFeedBackRequest&, const CreateCpmcPunishFeedBackOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateCpmcPunishFeedBackAsyncHandler;
			typedef Outcome<Error, Model::CreateAccessWhiteListGroupResult> CreateAccessWhiteListGroupOutcome;
			typedef std::future<CreateAccessWhiteListGroupOutcome> CreateAccessWhiteListGroupOutcomeCallable;
			typedef std::function<void(const JarvisClient*, const Model::CreateAccessWhiteListGroupRequest&, const CreateAccessWhiteListGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateAccessWhiteListGroupAsyncHandler;
			typedef Outcome<Error, Model::DescribeDdosDefenseInfoResult> DescribeDdosDefenseInfoOutcome;
			typedef std::future<DescribeDdosDefenseInfoOutcome> DescribeDdosDefenseInfoOutcomeCallable;
			typedef std::function<void(const JarvisClient*, const Model::DescribeDdosDefenseInfoRequest&, const DescribeDdosDefenseInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDdosDefenseInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribePhoneInfoResult> DescribePhoneInfoOutcome;
			typedef std::future<DescribePhoneInfoOutcome> DescribePhoneInfoOutcomeCallable;
			typedef std::function<void(const JarvisClient*, const Model::DescribePhoneInfoRequest&, const DescribePhoneInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribePhoneInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeAccessWhitelistEcsListResult> DescribeAccessWhitelistEcsListOutcome;
			typedef std::future<DescribeAccessWhitelistEcsListOutcome> DescribeAccessWhitelistEcsListOutcomeCallable;
			typedef std::function<void(const JarvisClient*, const Model::DescribeAccessWhitelistEcsListRequest&, const DescribeAccessWhitelistEcsListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccessWhitelistEcsListAsyncHandler;
			typedef Outcome<Error, Model::DescribeResetRecordListResult> DescribeResetRecordListOutcome;
			typedef std::future<DescribeResetRecordListOutcome> DescribeResetRecordListOutcomeCallable;
			typedef std::function<void(const JarvisClient*, const Model::DescribeResetRecordListRequest&, const DescribeResetRecordListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeResetRecordListAsyncHandler;
			typedef Outcome<Error, Model::ModifyUidWhiteListAutoShareResult> ModifyUidWhiteListAutoShareOutcome;
			typedef std::future<ModifyUidWhiteListAutoShareOutcome> ModifyUidWhiteListAutoShareOutcomeCallable;
			typedef std::function<void(const JarvisClient*, const Model::ModifyUidWhiteListAutoShareRequest&, const ModifyUidWhiteListAutoShareOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyUidWhiteListAutoShareAsyncHandler;
			typedef Outcome<Error, Model::ModifyAccessWhiteListAutoShareResult> ModifyAccessWhiteListAutoShareOutcome;
			typedef std::future<ModifyAccessWhiteListAutoShareOutcome> ModifyAccessWhiteListAutoShareOutcomeCallable;
			typedef std::function<void(const JarvisClient*, const Model::ModifyAccessWhiteListAutoShareRequest&, const ModifyAccessWhiteListAutoShareOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAccessWhiteListAutoShareAsyncHandler;
			typedef Outcome<Error, Model::CreateUidWhiteListGroupResult> CreateUidWhiteListGroupOutcome;
			typedef std::future<CreateUidWhiteListGroupOutcome> CreateUidWhiteListGroupOutcomeCallable;
			typedef std::function<void(const JarvisClient*, const Model::CreateUidWhiteListGroupRequest&, const CreateUidWhiteListGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateUidWhiteListGroupAsyncHandler;
			typedef Outcome<Error, Model::DescribeCpmcPunishListResult> DescribeCpmcPunishListOutcome;
			typedef std::future<DescribeCpmcPunishListOutcome> DescribeCpmcPunishListOutcomeCallable;
			typedef std::function<void(const JarvisClient*, const Model::DescribeCpmcPunishListRequest&, const DescribeCpmcPunishListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCpmcPunishListAsyncHandler;
			typedef Outcome<Error, Model::DescribeUidGcLevelResult> DescribeUidGcLevelOutcome;
			typedef std::future<DescribeUidGcLevelOutcome> DescribeUidGcLevelOutcomeCallable;
			typedef std::function<void(const JarvisClient*, const Model::DescribeUidGcLevelRequest&, const DescribeUidGcLevelOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUidGcLevelAsyncHandler;
			typedef Outcome<Error, Model::DeleteAccessWhiteListGroupResult> DeleteAccessWhiteListGroupOutcome;
			typedef std::future<DeleteAccessWhiteListGroupOutcome> DeleteAccessWhiteListGroupOutcomeCallable;
			typedef std::function<void(const JarvisClient*, const Model::DeleteAccessWhiteListGroupRequest&, const DeleteAccessWhiteListGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAccessWhiteListGroupAsyncHandler;
			typedef Outcome<Error, Model::DescribeAccessWhiteListGroupResult> DescribeAccessWhiteListGroupOutcome;
			typedef std::future<DescribeAccessWhiteListGroupOutcome> DescribeAccessWhiteListGroupOutcomeCallable;
			typedef std::function<void(const JarvisClient*, const Model::DescribeAccessWhiteListGroupRequest&, const DescribeAccessWhiteListGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccessWhiteListGroupAsyncHandler;
			typedef Outcome<Error, Model::DescribeResetRecordQueryCountResult> DescribeResetRecordQueryCountOutcome;
			typedef std::future<DescribeResetRecordQueryCountOutcome> DescribeResetRecordQueryCountOutcomeCallable;
			typedef std::function<void(const JarvisClient*, const Model::DescribeResetRecordQueryCountRequest&, const DescribeResetRecordQueryCountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeResetRecordQueryCountAsyncHandler;
			typedef Outcome<Error, Model::DescribePunishListResult> DescribePunishListOutcome;
			typedef std::future<DescribePunishListOutcome> DescribePunishListOutcomeCallable;
			typedef std::function<void(const JarvisClient*, const Model::DescribePunishListRequest&, const DescribePunishListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribePunishListAsyncHandler;
			typedef Outcome<Error, Model::DescribeUidWhiteListGroupResult> DescribeUidWhiteListGroupOutcome;
			typedef std::future<DescribeUidWhiteListGroupOutcome> DescribeUidWhiteListGroupOutcomeCallable;
			typedef std::function<void(const JarvisClient*, const Model::DescribeUidWhiteListGroupRequest&, const DescribeUidWhiteListGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUidWhiteListGroupAsyncHandler;
			typedef Outcome<Error, Model::DescribeRiskListDetailResult> DescribeRiskListDetailOutcome;
			typedef std::future<DescribeRiskListDetailOutcome> DescribeRiskListDetailOutcomeCallable;
			typedef std::function<void(const JarvisClient*, const Model::DescribeRiskListDetailRequest&, const DescribeRiskListDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRiskListDetailAsyncHandler;
			typedef Outcome<Error, Model::DescribeRiskTrendResult> DescribeRiskTrendOutcome;
			typedef std::future<DescribeRiskTrendOutcome> DescribeRiskTrendOutcomeCallable;
			typedef std::function<void(const JarvisClient*, const Model::DescribeRiskTrendRequest&, const DescribeRiskTrendOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRiskTrendAsyncHandler;

			JarvisClient(const Credentials &credentials, const ClientConfiguration &configuration);
			JarvisClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			JarvisClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~JarvisClient();
			DeleteUidWhiteListGroupOutcome deleteUidWhiteListGroup(const Model::DeleteUidWhiteListGroupRequest &request)const;
			void deleteUidWhiteListGroupAsync(const Model::DeleteUidWhiteListGroupRequest& request, const DeleteUidWhiteListGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteUidWhiteListGroupOutcomeCallable deleteUidWhiteListGroupCallable(const Model::DeleteUidWhiteListGroupRequest& request) const;
			CreateCpmcPunishFeedBackOutcome createCpmcPunishFeedBack(const Model::CreateCpmcPunishFeedBackRequest &request)const;
			void createCpmcPunishFeedBackAsync(const Model::CreateCpmcPunishFeedBackRequest& request, const CreateCpmcPunishFeedBackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateCpmcPunishFeedBackOutcomeCallable createCpmcPunishFeedBackCallable(const Model::CreateCpmcPunishFeedBackRequest& request) const;
			CreateAccessWhiteListGroupOutcome createAccessWhiteListGroup(const Model::CreateAccessWhiteListGroupRequest &request)const;
			void createAccessWhiteListGroupAsync(const Model::CreateAccessWhiteListGroupRequest& request, const CreateAccessWhiteListGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateAccessWhiteListGroupOutcomeCallable createAccessWhiteListGroupCallable(const Model::CreateAccessWhiteListGroupRequest& request) const;
			DescribeDdosDefenseInfoOutcome describeDdosDefenseInfo(const Model::DescribeDdosDefenseInfoRequest &request)const;
			void describeDdosDefenseInfoAsync(const Model::DescribeDdosDefenseInfoRequest& request, const DescribeDdosDefenseInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDdosDefenseInfoOutcomeCallable describeDdosDefenseInfoCallable(const Model::DescribeDdosDefenseInfoRequest& request) const;
			DescribePhoneInfoOutcome describePhoneInfo(const Model::DescribePhoneInfoRequest &request)const;
			void describePhoneInfoAsync(const Model::DescribePhoneInfoRequest& request, const DescribePhoneInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribePhoneInfoOutcomeCallable describePhoneInfoCallable(const Model::DescribePhoneInfoRequest& request) const;
			DescribeAccessWhitelistEcsListOutcome describeAccessWhitelistEcsList(const Model::DescribeAccessWhitelistEcsListRequest &request)const;
			void describeAccessWhitelistEcsListAsync(const Model::DescribeAccessWhitelistEcsListRequest& request, const DescribeAccessWhitelistEcsListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAccessWhitelistEcsListOutcomeCallable describeAccessWhitelistEcsListCallable(const Model::DescribeAccessWhitelistEcsListRequest& request) const;
			DescribeResetRecordListOutcome describeResetRecordList(const Model::DescribeResetRecordListRequest &request)const;
			void describeResetRecordListAsync(const Model::DescribeResetRecordListRequest& request, const DescribeResetRecordListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeResetRecordListOutcomeCallable describeResetRecordListCallable(const Model::DescribeResetRecordListRequest& request) const;
			ModifyUidWhiteListAutoShareOutcome modifyUidWhiteListAutoShare(const Model::ModifyUidWhiteListAutoShareRequest &request)const;
			void modifyUidWhiteListAutoShareAsync(const Model::ModifyUidWhiteListAutoShareRequest& request, const ModifyUidWhiteListAutoShareAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyUidWhiteListAutoShareOutcomeCallable modifyUidWhiteListAutoShareCallable(const Model::ModifyUidWhiteListAutoShareRequest& request) const;
			ModifyAccessWhiteListAutoShareOutcome modifyAccessWhiteListAutoShare(const Model::ModifyAccessWhiteListAutoShareRequest &request)const;
			void modifyAccessWhiteListAutoShareAsync(const Model::ModifyAccessWhiteListAutoShareRequest& request, const ModifyAccessWhiteListAutoShareAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyAccessWhiteListAutoShareOutcomeCallable modifyAccessWhiteListAutoShareCallable(const Model::ModifyAccessWhiteListAutoShareRequest& request) const;
			CreateUidWhiteListGroupOutcome createUidWhiteListGroup(const Model::CreateUidWhiteListGroupRequest &request)const;
			void createUidWhiteListGroupAsync(const Model::CreateUidWhiteListGroupRequest& request, const CreateUidWhiteListGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateUidWhiteListGroupOutcomeCallable createUidWhiteListGroupCallable(const Model::CreateUidWhiteListGroupRequest& request) const;
			DescribeCpmcPunishListOutcome describeCpmcPunishList(const Model::DescribeCpmcPunishListRequest &request)const;
			void describeCpmcPunishListAsync(const Model::DescribeCpmcPunishListRequest& request, const DescribeCpmcPunishListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCpmcPunishListOutcomeCallable describeCpmcPunishListCallable(const Model::DescribeCpmcPunishListRequest& request) const;
			DescribeUidGcLevelOutcome describeUidGcLevel(const Model::DescribeUidGcLevelRequest &request)const;
			void describeUidGcLevelAsync(const Model::DescribeUidGcLevelRequest& request, const DescribeUidGcLevelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeUidGcLevelOutcomeCallable describeUidGcLevelCallable(const Model::DescribeUidGcLevelRequest& request) const;
			DeleteAccessWhiteListGroupOutcome deleteAccessWhiteListGroup(const Model::DeleteAccessWhiteListGroupRequest &request)const;
			void deleteAccessWhiteListGroupAsync(const Model::DeleteAccessWhiteListGroupRequest& request, const DeleteAccessWhiteListGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteAccessWhiteListGroupOutcomeCallable deleteAccessWhiteListGroupCallable(const Model::DeleteAccessWhiteListGroupRequest& request) const;
			DescribeAccessWhiteListGroupOutcome describeAccessWhiteListGroup(const Model::DescribeAccessWhiteListGroupRequest &request)const;
			void describeAccessWhiteListGroupAsync(const Model::DescribeAccessWhiteListGroupRequest& request, const DescribeAccessWhiteListGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAccessWhiteListGroupOutcomeCallable describeAccessWhiteListGroupCallable(const Model::DescribeAccessWhiteListGroupRequest& request) const;
			DescribeResetRecordQueryCountOutcome describeResetRecordQueryCount(const Model::DescribeResetRecordQueryCountRequest &request)const;
			void describeResetRecordQueryCountAsync(const Model::DescribeResetRecordQueryCountRequest& request, const DescribeResetRecordQueryCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeResetRecordQueryCountOutcomeCallable describeResetRecordQueryCountCallable(const Model::DescribeResetRecordQueryCountRequest& request) const;
			DescribePunishListOutcome describePunishList(const Model::DescribePunishListRequest &request)const;
			void describePunishListAsync(const Model::DescribePunishListRequest& request, const DescribePunishListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribePunishListOutcomeCallable describePunishListCallable(const Model::DescribePunishListRequest& request) const;
			DescribeUidWhiteListGroupOutcome describeUidWhiteListGroup(const Model::DescribeUidWhiteListGroupRequest &request)const;
			void describeUidWhiteListGroupAsync(const Model::DescribeUidWhiteListGroupRequest& request, const DescribeUidWhiteListGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeUidWhiteListGroupOutcomeCallable describeUidWhiteListGroupCallable(const Model::DescribeUidWhiteListGroupRequest& request) const;
			DescribeRiskListDetailOutcome describeRiskListDetail(const Model::DescribeRiskListDetailRequest &request)const;
			void describeRiskListDetailAsync(const Model::DescribeRiskListDetailRequest& request, const DescribeRiskListDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRiskListDetailOutcomeCallable describeRiskListDetailCallable(const Model::DescribeRiskListDetailRequest& request) const;
			DescribeRiskTrendOutcome describeRiskTrend(const Model::DescribeRiskTrendRequest &request)const;
			void describeRiskTrendAsync(const Model::DescribeRiskTrendRequest& request, const DescribeRiskTrendAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRiskTrendOutcomeCallable describeRiskTrendCallable(const Model::DescribeRiskTrendRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_JARVIS_JARVISCLIENT_H_
