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

#ifndef ALIBABACLOUD_GWLB_MODEL_LISTSERVERGROUPSRESULT_H_
#define ALIBABACLOUD_GWLB_MODEL_LISTSERVERGROUPSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/gwlb/GwlbExport.h>

namespace AlibabaCloud
{
	namespace Gwlb
	{
		namespace Model
		{
			class ALIBABACLOUD_GWLB_EXPORT ListServerGroupsResult : public ServiceResult
			{
			public:
				struct ServerGroup
				{
					struct ConnectionDrainConfig
					{
						bool connectionDrainEnabled;
						int connectionDrainTimeout;
					};
					struct HealthCheckConfig
					{
						int healthCheckInterval;
						int healthCheckConnectPort;
						int unhealthyThreshold;
						std::string healthCheckPath;
						int healthyThreshold;
						int healthCheckConnectTimeout;
						std::string healthCheckProtocol;
						std::string healthCheckDomain;
						bool healthCheckEnabled;
						std::vector<std::string> healthCheckHttpCode;
					};
					struct TagModel
					{
						std::string value;
						std::string key;
					};
					ConnectionDrainConfig connectionDrainConfig;
					std::vector<std::string> relatedLoadBalancerIds;
					std::string resourceGroupId;
					std::string scheduler;
					std::string createTime;
					int serverCount;
					std::string serverGroupId;
					std::string serverGroupType;
					std::string serverGroupStatus;
					std::string vpcId;
					HealthCheckConfig healthCheckConfig;
					std::string protocol;
					std::vector<ServerGroup::TagModel> tags;
					std::string serverGroupName;
				};


				ListServerGroupsResult();
				explicit ListServerGroupsResult(const std::string &payload);
				~ListServerGroupsResult();
				int getTotalCount()const;
				std::string getNextToken()const;
				std::vector<ServerGroup> getServerGroups()const;
				int getMaxResults()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				std::string nextToken_;
				std::vector<ServerGroup> serverGroups_;
				int maxResults_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_GWLB_MODEL_LISTSERVERGROUPSRESULT_H_