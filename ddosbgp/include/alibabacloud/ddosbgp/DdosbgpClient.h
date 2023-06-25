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

#ifndef ALIBABACLOUD_DDOSBGP_DDOSBGPCLIENT_H_
#define ALIBABACLOUD_DDOSBGP_DDOSBGPCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "DdosbgpExport.h"
#include "model/AddIpRequest.h"
#include "model/AddIpResult.h"
#include "model/CheckAccessLogAuthRequest.h"
#include "model/CheckAccessLogAuthResult.h"
#include "model/CheckGrantRequest.h"
#include "model/CheckGrantResult.h"
#include "model/ConfigSchedruleOnDemandRequest.h"
#include "model/ConfigSchedruleOnDemandResult.h"
#include "model/CreateSchedruleOnDemandRequest.h"
#include "model/CreateSchedruleOnDemandResult.h"
#include "model/DeleteBlackholeRequest.h"
#include "model/DeleteBlackholeResult.h"
#include "model/DeleteIpRequest.h"
#include "model/DeleteIpResult.h"
#include "model/DeleteSchedruleOnDemandRequest.h"
#include "model/DeleteSchedruleOnDemandResult.h"
#include "model/DescribeDdosEventRequest.h"
#include "model/DescribeDdosEventResult.h"
#include "model/DescribeExcpetionCountRequest.h"
#include "model/DescribeExcpetionCountResult.h"
#include "model/DescribeInstanceListRequest.h"
#include "model/DescribeInstanceListResult.h"
#include "model/DescribeInstanceSpecsRequest.h"
#include "model/DescribeInstanceSpecsResult.h"
#include "model/DescribeOnDemandDdosEventRequest.h"
#include "model/DescribeOnDemandDdosEventResult.h"
#include "model/DescribeOnDemandInstanceStatusRequest.h"
#include "model/DescribeOnDemandInstanceStatusResult.h"
#include "model/DescribeOpEntitiesRequest.h"
#include "model/DescribeOpEntitiesResult.h"
#include "model/DescribePackIpListRequest.h"
#include "model/DescribePackIpListResult.h"
#include "model/DescribeRegionsRequest.h"
#include "model/DescribeRegionsResult.h"
#include "model/DescribeTrafficRequest.h"
#include "model/DescribeTrafficResult.h"
#include "model/GetSlsOpenStatusRequest.h"
#include "model/GetSlsOpenStatusResult.h"
#include "model/ListOpenedAccessLogInstancesRequest.h"
#include "model/ListOpenedAccessLogInstancesResult.h"
#include "model/ListTagKeysRequest.h"
#include "model/ListTagKeysResult.h"
#include "model/ListTagResourcesRequest.h"
#include "model/ListTagResourcesResult.h"
#include "model/ModifyRemarkRequest.h"
#include "model/ModifyRemarkResult.h"
#include "model/QuerySchedruleOnDemandRequest.h"
#include "model/QuerySchedruleOnDemandResult.h"
#include "model/SetInstanceModeOnDemandRequest.h"
#include "model/SetInstanceModeOnDemandResult.h"
#include "model/TagResourcesRequest.h"
#include "model/TagResourcesResult.h"
#include "model/UntagResourcesRequest.h"
#include "model/UntagResourcesResult.h"


namespace AlibabaCloud
{
	namespace Ddosbgp
	{
		class ALIBABACLOUD_DDOSBGP_EXPORT DdosbgpClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::AddIpResult> AddIpOutcome;
			typedef std::future<AddIpOutcome> AddIpOutcomeCallable;
			typedef std::function<void(const DdosbgpClient*, const Model::AddIpRequest&, const AddIpOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddIpAsyncHandler;
			typedef Outcome<Error, Model::CheckAccessLogAuthResult> CheckAccessLogAuthOutcome;
			typedef std::future<CheckAccessLogAuthOutcome> CheckAccessLogAuthOutcomeCallable;
			typedef std::function<void(const DdosbgpClient*, const Model::CheckAccessLogAuthRequest&, const CheckAccessLogAuthOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CheckAccessLogAuthAsyncHandler;
			typedef Outcome<Error, Model::CheckGrantResult> CheckGrantOutcome;
			typedef std::future<CheckGrantOutcome> CheckGrantOutcomeCallable;
			typedef std::function<void(const DdosbgpClient*, const Model::CheckGrantRequest&, const CheckGrantOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CheckGrantAsyncHandler;
			typedef Outcome<Error, Model::ConfigSchedruleOnDemandResult> ConfigSchedruleOnDemandOutcome;
			typedef std::future<ConfigSchedruleOnDemandOutcome> ConfigSchedruleOnDemandOutcomeCallable;
			typedef std::function<void(const DdosbgpClient*, const Model::ConfigSchedruleOnDemandRequest&, const ConfigSchedruleOnDemandOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ConfigSchedruleOnDemandAsyncHandler;
			typedef Outcome<Error, Model::CreateSchedruleOnDemandResult> CreateSchedruleOnDemandOutcome;
			typedef std::future<CreateSchedruleOnDemandOutcome> CreateSchedruleOnDemandOutcomeCallable;
			typedef std::function<void(const DdosbgpClient*, const Model::CreateSchedruleOnDemandRequest&, const CreateSchedruleOnDemandOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateSchedruleOnDemandAsyncHandler;
			typedef Outcome<Error, Model::DeleteBlackholeResult> DeleteBlackholeOutcome;
			typedef std::future<DeleteBlackholeOutcome> DeleteBlackholeOutcomeCallable;
			typedef std::function<void(const DdosbgpClient*, const Model::DeleteBlackholeRequest&, const DeleteBlackholeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteBlackholeAsyncHandler;
			typedef Outcome<Error, Model::DeleteIpResult> DeleteIpOutcome;
			typedef std::future<DeleteIpOutcome> DeleteIpOutcomeCallable;
			typedef std::function<void(const DdosbgpClient*, const Model::DeleteIpRequest&, const DeleteIpOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteIpAsyncHandler;
			typedef Outcome<Error, Model::DeleteSchedruleOnDemandResult> DeleteSchedruleOnDemandOutcome;
			typedef std::future<DeleteSchedruleOnDemandOutcome> DeleteSchedruleOnDemandOutcomeCallable;
			typedef std::function<void(const DdosbgpClient*, const Model::DeleteSchedruleOnDemandRequest&, const DeleteSchedruleOnDemandOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSchedruleOnDemandAsyncHandler;
			typedef Outcome<Error, Model::DescribeDdosEventResult> DescribeDdosEventOutcome;
			typedef std::future<DescribeDdosEventOutcome> DescribeDdosEventOutcomeCallable;
			typedef std::function<void(const DdosbgpClient*, const Model::DescribeDdosEventRequest&, const DescribeDdosEventOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDdosEventAsyncHandler;
			typedef Outcome<Error, Model::DescribeExcpetionCountResult> DescribeExcpetionCountOutcome;
			typedef std::future<DescribeExcpetionCountOutcome> DescribeExcpetionCountOutcomeCallable;
			typedef std::function<void(const DdosbgpClient*, const Model::DescribeExcpetionCountRequest&, const DescribeExcpetionCountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeExcpetionCountAsyncHandler;
			typedef Outcome<Error, Model::DescribeInstanceListResult> DescribeInstanceListOutcome;
			typedef std::future<DescribeInstanceListOutcome> DescribeInstanceListOutcomeCallable;
			typedef std::function<void(const DdosbgpClient*, const Model::DescribeInstanceListRequest&, const DescribeInstanceListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceListAsyncHandler;
			typedef Outcome<Error, Model::DescribeInstanceSpecsResult> DescribeInstanceSpecsOutcome;
			typedef std::future<DescribeInstanceSpecsOutcome> DescribeInstanceSpecsOutcomeCallable;
			typedef std::function<void(const DdosbgpClient*, const Model::DescribeInstanceSpecsRequest&, const DescribeInstanceSpecsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceSpecsAsyncHandler;
			typedef Outcome<Error, Model::DescribeOnDemandDdosEventResult> DescribeOnDemandDdosEventOutcome;
			typedef std::future<DescribeOnDemandDdosEventOutcome> DescribeOnDemandDdosEventOutcomeCallable;
			typedef std::function<void(const DdosbgpClient*, const Model::DescribeOnDemandDdosEventRequest&, const DescribeOnDemandDdosEventOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOnDemandDdosEventAsyncHandler;
			typedef Outcome<Error, Model::DescribeOnDemandInstanceStatusResult> DescribeOnDemandInstanceStatusOutcome;
			typedef std::future<DescribeOnDemandInstanceStatusOutcome> DescribeOnDemandInstanceStatusOutcomeCallable;
			typedef std::function<void(const DdosbgpClient*, const Model::DescribeOnDemandInstanceStatusRequest&, const DescribeOnDemandInstanceStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOnDemandInstanceStatusAsyncHandler;
			typedef Outcome<Error, Model::DescribeOpEntitiesResult> DescribeOpEntitiesOutcome;
			typedef std::future<DescribeOpEntitiesOutcome> DescribeOpEntitiesOutcomeCallable;
			typedef std::function<void(const DdosbgpClient*, const Model::DescribeOpEntitiesRequest&, const DescribeOpEntitiesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOpEntitiesAsyncHandler;
			typedef Outcome<Error, Model::DescribePackIpListResult> DescribePackIpListOutcome;
			typedef std::future<DescribePackIpListOutcome> DescribePackIpListOutcomeCallable;
			typedef std::function<void(const DdosbgpClient*, const Model::DescribePackIpListRequest&, const DescribePackIpListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribePackIpListAsyncHandler;
			typedef Outcome<Error, Model::DescribeRegionsResult> DescribeRegionsOutcome;
			typedef std::future<DescribeRegionsOutcome> DescribeRegionsOutcomeCallable;
			typedef std::function<void(const DdosbgpClient*, const Model::DescribeRegionsRequest&, const DescribeRegionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRegionsAsyncHandler;
			typedef Outcome<Error, Model::DescribeTrafficResult> DescribeTrafficOutcome;
			typedef std::future<DescribeTrafficOutcome> DescribeTrafficOutcomeCallable;
			typedef std::function<void(const DdosbgpClient*, const Model::DescribeTrafficRequest&, const DescribeTrafficOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTrafficAsyncHandler;
			typedef Outcome<Error, Model::GetSlsOpenStatusResult> GetSlsOpenStatusOutcome;
			typedef std::future<GetSlsOpenStatusOutcome> GetSlsOpenStatusOutcomeCallable;
			typedef std::function<void(const DdosbgpClient*, const Model::GetSlsOpenStatusRequest&, const GetSlsOpenStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetSlsOpenStatusAsyncHandler;
			typedef Outcome<Error, Model::ListOpenedAccessLogInstancesResult> ListOpenedAccessLogInstancesOutcome;
			typedef std::future<ListOpenedAccessLogInstancesOutcome> ListOpenedAccessLogInstancesOutcomeCallable;
			typedef std::function<void(const DdosbgpClient*, const Model::ListOpenedAccessLogInstancesRequest&, const ListOpenedAccessLogInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListOpenedAccessLogInstancesAsyncHandler;
			typedef Outcome<Error, Model::ListTagKeysResult> ListTagKeysOutcome;
			typedef std::future<ListTagKeysOutcome> ListTagKeysOutcomeCallable;
			typedef std::function<void(const DdosbgpClient*, const Model::ListTagKeysRequest&, const ListTagKeysOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTagKeysAsyncHandler;
			typedef Outcome<Error, Model::ListTagResourcesResult> ListTagResourcesOutcome;
			typedef std::future<ListTagResourcesOutcome> ListTagResourcesOutcomeCallable;
			typedef std::function<void(const DdosbgpClient*, const Model::ListTagResourcesRequest&, const ListTagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTagResourcesAsyncHandler;
			typedef Outcome<Error, Model::ModifyRemarkResult> ModifyRemarkOutcome;
			typedef std::future<ModifyRemarkOutcome> ModifyRemarkOutcomeCallable;
			typedef std::function<void(const DdosbgpClient*, const Model::ModifyRemarkRequest&, const ModifyRemarkOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRemarkAsyncHandler;
			typedef Outcome<Error, Model::QuerySchedruleOnDemandResult> QuerySchedruleOnDemandOutcome;
			typedef std::future<QuerySchedruleOnDemandOutcome> QuerySchedruleOnDemandOutcomeCallable;
			typedef std::function<void(const DdosbgpClient*, const Model::QuerySchedruleOnDemandRequest&, const QuerySchedruleOnDemandOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QuerySchedruleOnDemandAsyncHandler;
			typedef Outcome<Error, Model::SetInstanceModeOnDemandResult> SetInstanceModeOnDemandOutcome;
			typedef std::future<SetInstanceModeOnDemandOutcome> SetInstanceModeOnDemandOutcomeCallable;
			typedef std::function<void(const DdosbgpClient*, const Model::SetInstanceModeOnDemandRequest&, const SetInstanceModeOnDemandOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetInstanceModeOnDemandAsyncHandler;
			typedef Outcome<Error, Model::TagResourcesResult> TagResourcesOutcome;
			typedef std::future<TagResourcesOutcome> TagResourcesOutcomeCallable;
			typedef std::function<void(const DdosbgpClient*, const Model::TagResourcesRequest&, const TagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TagResourcesAsyncHandler;
			typedef Outcome<Error, Model::UntagResourcesResult> UntagResourcesOutcome;
			typedef std::future<UntagResourcesOutcome> UntagResourcesOutcomeCallable;
			typedef std::function<void(const DdosbgpClient*, const Model::UntagResourcesRequest&, const UntagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UntagResourcesAsyncHandler;

			DdosbgpClient(const Credentials &credentials, const ClientConfiguration &configuration);
			DdosbgpClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			DdosbgpClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~DdosbgpClient();
			AddIpOutcome addIp(const Model::AddIpRequest &request)const;
			void addIpAsync(const Model::AddIpRequest& request, const AddIpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddIpOutcomeCallable addIpCallable(const Model::AddIpRequest& request) const;
			CheckAccessLogAuthOutcome checkAccessLogAuth(const Model::CheckAccessLogAuthRequest &request)const;
			void checkAccessLogAuthAsync(const Model::CheckAccessLogAuthRequest& request, const CheckAccessLogAuthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CheckAccessLogAuthOutcomeCallable checkAccessLogAuthCallable(const Model::CheckAccessLogAuthRequest& request) const;
			CheckGrantOutcome checkGrant(const Model::CheckGrantRequest &request)const;
			void checkGrantAsync(const Model::CheckGrantRequest& request, const CheckGrantAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CheckGrantOutcomeCallable checkGrantCallable(const Model::CheckGrantRequest& request) const;
			ConfigSchedruleOnDemandOutcome configSchedruleOnDemand(const Model::ConfigSchedruleOnDemandRequest &request)const;
			void configSchedruleOnDemandAsync(const Model::ConfigSchedruleOnDemandRequest& request, const ConfigSchedruleOnDemandAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ConfigSchedruleOnDemandOutcomeCallable configSchedruleOnDemandCallable(const Model::ConfigSchedruleOnDemandRequest& request) const;
			CreateSchedruleOnDemandOutcome createSchedruleOnDemand(const Model::CreateSchedruleOnDemandRequest &request)const;
			void createSchedruleOnDemandAsync(const Model::CreateSchedruleOnDemandRequest& request, const CreateSchedruleOnDemandAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateSchedruleOnDemandOutcomeCallable createSchedruleOnDemandCallable(const Model::CreateSchedruleOnDemandRequest& request) const;
			DeleteBlackholeOutcome deleteBlackhole(const Model::DeleteBlackholeRequest &request)const;
			void deleteBlackholeAsync(const Model::DeleteBlackholeRequest& request, const DeleteBlackholeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteBlackholeOutcomeCallable deleteBlackholeCallable(const Model::DeleteBlackholeRequest& request) const;
			DeleteIpOutcome deleteIp(const Model::DeleteIpRequest &request)const;
			void deleteIpAsync(const Model::DeleteIpRequest& request, const DeleteIpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteIpOutcomeCallable deleteIpCallable(const Model::DeleteIpRequest& request) const;
			DeleteSchedruleOnDemandOutcome deleteSchedruleOnDemand(const Model::DeleteSchedruleOnDemandRequest &request)const;
			void deleteSchedruleOnDemandAsync(const Model::DeleteSchedruleOnDemandRequest& request, const DeleteSchedruleOnDemandAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteSchedruleOnDemandOutcomeCallable deleteSchedruleOnDemandCallable(const Model::DeleteSchedruleOnDemandRequest& request) const;
			DescribeDdosEventOutcome describeDdosEvent(const Model::DescribeDdosEventRequest &request)const;
			void describeDdosEventAsync(const Model::DescribeDdosEventRequest& request, const DescribeDdosEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDdosEventOutcomeCallable describeDdosEventCallable(const Model::DescribeDdosEventRequest& request) const;
			DescribeExcpetionCountOutcome describeExcpetionCount(const Model::DescribeExcpetionCountRequest &request)const;
			void describeExcpetionCountAsync(const Model::DescribeExcpetionCountRequest& request, const DescribeExcpetionCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeExcpetionCountOutcomeCallable describeExcpetionCountCallable(const Model::DescribeExcpetionCountRequest& request) const;
			DescribeInstanceListOutcome describeInstanceList(const Model::DescribeInstanceListRequest &request)const;
			void describeInstanceListAsync(const Model::DescribeInstanceListRequest& request, const DescribeInstanceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeInstanceListOutcomeCallable describeInstanceListCallable(const Model::DescribeInstanceListRequest& request) const;
			DescribeInstanceSpecsOutcome describeInstanceSpecs(const Model::DescribeInstanceSpecsRequest &request)const;
			void describeInstanceSpecsAsync(const Model::DescribeInstanceSpecsRequest& request, const DescribeInstanceSpecsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeInstanceSpecsOutcomeCallable describeInstanceSpecsCallable(const Model::DescribeInstanceSpecsRequest& request) const;
			DescribeOnDemandDdosEventOutcome describeOnDemandDdosEvent(const Model::DescribeOnDemandDdosEventRequest &request)const;
			void describeOnDemandDdosEventAsync(const Model::DescribeOnDemandDdosEventRequest& request, const DescribeOnDemandDdosEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeOnDemandDdosEventOutcomeCallable describeOnDemandDdosEventCallable(const Model::DescribeOnDemandDdosEventRequest& request) const;
			DescribeOnDemandInstanceStatusOutcome describeOnDemandInstanceStatus(const Model::DescribeOnDemandInstanceStatusRequest &request)const;
			void describeOnDemandInstanceStatusAsync(const Model::DescribeOnDemandInstanceStatusRequest& request, const DescribeOnDemandInstanceStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeOnDemandInstanceStatusOutcomeCallable describeOnDemandInstanceStatusCallable(const Model::DescribeOnDemandInstanceStatusRequest& request) const;
			DescribeOpEntitiesOutcome describeOpEntities(const Model::DescribeOpEntitiesRequest &request)const;
			void describeOpEntitiesAsync(const Model::DescribeOpEntitiesRequest& request, const DescribeOpEntitiesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeOpEntitiesOutcomeCallable describeOpEntitiesCallable(const Model::DescribeOpEntitiesRequest& request) const;
			DescribePackIpListOutcome describePackIpList(const Model::DescribePackIpListRequest &request)const;
			void describePackIpListAsync(const Model::DescribePackIpListRequest& request, const DescribePackIpListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribePackIpListOutcomeCallable describePackIpListCallable(const Model::DescribePackIpListRequest& request) const;
			DescribeRegionsOutcome describeRegions(const Model::DescribeRegionsRequest &request)const;
			void describeRegionsAsync(const Model::DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRegionsOutcomeCallable describeRegionsCallable(const Model::DescribeRegionsRequest& request) const;
			DescribeTrafficOutcome describeTraffic(const Model::DescribeTrafficRequest &request)const;
			void describeTrafficAsync(const Model::DescribeTrafficRequest& request, const DescribeTrafficAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeTrafficOutcomeCallable describeTrafficCallable(const Model::DescribeTrafficRequest& request) const;
			GetSlsOpenStatusOutcome getSlsOpenStatus(const Model::GetSlsOpenStatusRequest &request)const;
			void getSlsOpenStatusAsync(const Model::GetSlsOpenStatusRequest& request, const GetSlsOpenStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetSlsOpenStatusOutcomeCallable getSlsOpenStatusCallable(const Model::GetSlsOpenStatusRequest& request) const;
			ListOpenedAccessLogInstancesOutcome listOpenedAccessLogInstances(const Model::ListOpenedAccessLogInstancesRequest &request)const;
			void listOpenedAccessLogInstancesAsync(const Model::ListOpenedAccessLogInstancesRequest& request, const ListOpenedAccessLogInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListOpenedAccessLogInstancesOutcomeCallable listOpenedAccessLogInstancesCallable(const Model::ListOpenedAccessLogInstancesRequest& request) const;
			ListTagKeysOutcome listTagKeys(const Model::ListTagKeysRequest &request)const;
			void listTagKeysAsync(const Model::ListTagKeysRequest& request, const ListTagKeysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTagKeysOutcomeCallable listTagKeysCallable(const Model::ListTagKeysRequest& request) const;
			ListTagResourcesOutcome listTagResources(const Model::ListTagResourcesRequest &request)const;
			void listTagResourcesAsync(const Model::ListTagResourcesRequest& request, const ListTagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTagResourcesOutcomeCallable listTagResourcesCallable(const Model::ListTagResourcesRequest& request) const;
			ModifyRemarkOutcome modifyRemark(const Model::ModifyRemarkRequest &request)const;
			void modifyRemarkAsync(const Model::ModifyRemarkRequest& request, const ModifyRemarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyRemarkOutcomeCallable modifyRemarkCallable(const Model::ModifyRemarkRequest& request) const;
			QuerySchedruleOnDemandOutcome querySchedruleOnDemand(const Model::QuerySchedruleOnDemandRequest &request)const;
			void querySchedruleOnDemandAsync(const Model::QuerySchedruleOnDemandRequest& request, const QuerySchedruleOnDemandAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QuerySchedruleOnDemandOutcomeCallable querySchedruleOnDemandCallable(const Model::QuerySchedruleOnDemandRequest& request) const;
			SetInstanceModeOnDemandOutcome setInstanceModeOnDemand(const Model::SetInstanceModeOnDemandRequest &request)const;
			void setInstanceModeOnDemandAsync(const Model::SetInstanceModeOnDemandRequest& request, const SetInstanceModeOnDemandAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetInstanceModeOnDemandOutcomeCallable setInstanceModeOnDemandCallable(const Model::SetInstanceModeOnDemandRequest& request) const;
			TagResourcesOutcome tagResources(const Model::TagResourcesRequest &request)const;
			void tagResourcesAsync(const Model::TagResourcesRequest& request, const TagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TagResourcesOutcomeCallable tagResourcesCallable(const Model::TagResourcesRequest& request) const;
			UntagResourcesOutcome untagResources(const Model::UntagResourcesRequest &request)const;
			void untagResourcesAsync(const Model::UntagResourcesRequest& request, const UntagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UntagResourcesOutcomeCallable untagResourcesCallable(const Model::UntagResourcesRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_DDOSBGP_DDOSBGPCLIENT_H_
