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

#ifndef ALIBABACLOUD_NLB_MODEL_LISTSERVERGROUPSRESULT_H_
#define ALIBABACLOUD_NLB_MODEL_LISTSERVERGROUPSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/nlb/NlbExport.h>

namespace AlibabaCloud
{
	namespace Nlb
	{
		namespace Model
		{
			class ALIBABACLOUD_NLB_EXPORT ListServerGroupsResult : public ServiceResult
			{
			public:
				struct ServerGroup
				{
					struct HealthCheck
					{
						int healthCheckInterval;
						int healthCheckConnectPort;
						std::string healthCheckUrl;
						int unhealthyThreshold;
						int healthyThreshold;
						std::string httpCheckMethod;
						int healthCheckConnectTimeout;
						std::string healthCheckDomain;
						bool healthCheckEnabled;
						std::vector<std::string> healthCheckHttpCode;
						std::string healthCheckType;
					};
					struct Tag
					{
						std::string value;
						std::string key;
					};
					std::vector<std::string> relatedLoadBalancerIds;
					std::string resourceGroupId;
					std::string scheduler;
					std::string addressIPVersion;
					HealthCheck healthCheck;
					std::string serverGroupId;
					int serverCount;
					std::string serverGroupType;
					bool preserveClientIpEnabled;
					std::string serverGroupStatus;
					bool persistenceEnabled;
					bool connectionDrainEnabled;
					int connectionDrainTimeout;
					int persistenceTimeout;
					std::string vpcId;
					bool anyPortEnabled;
					std::string quicVersion;
					std::string regionId;
					std::string protocol;
					std::vector<ServerGroup::Tag> tags;
					std::string serverGroupName;
					long aliUid;
				};


				ListServerGroupsResult();
				explicit ListServerGroupsResult(const std::string &payload);
				~ListServerGroupsResult();
				int getTotalCount()const;
				std::string getMessage()const;
				std::string getNextToken()const;
				std::vector<ServerGroup> getServerGroups()const;
				int getMaxResults()const;
				int getHttpStatusCode()const;
				std::string getDynamicCode()const;
				std::string getDynamicMessage()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				std::string message_;
				std::string nextToken_;
				std::vector<ServerGroup> serverGroups_;
				int maxResults_;
				int httpStatusCode_;
				std::string dynamicCode_;
				std::string dynamicMessage_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_NLB_MODEL_LISTSERVERGROUPSRESULT_H_