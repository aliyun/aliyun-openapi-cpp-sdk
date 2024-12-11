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

#ifndef ALIBABACLOUD_ALB_MODEL_LISTSERVERGROUPSRESULT_H_
#define ALIBABACLOUD_ALB_MODEL_LISTSERVERGROUPSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/alb/AlbExport.h>

namespace AlibabaCloud
{
	namespace Alb
	{
		namespace Model
		{
			class ALIBABACLOUD_ALB_EXPORT ListServerGroupsResult : public ServiceResult
			{
			public:
				struct ServerGroup
				{
					struct HealthCheckConfig
					{
						int healthCheckInterval;
						int unhealthyThreshold;
						std::string healthCheckHost;
						std::string healthCheckPath;
						std::string healthCheckHttpVersion;
						bool healthCheckEnabled;
						int healthCheckTimeout;
						bool healthCheckTcpFastCloseEnabled;
						int healthCheckConnectPort;
						std::vector<std::string> healthCheckHttpCodes;
						std::vector<std::string> healthCheckCodes;
						std::string healthCheckMethod;
						int healthyThreshold;
						std::string healthCheckProtocol;
					};
					struct StickySessionConfig
					{
						std::string cookie;
						int cookieTimeout;
						std::string stickySessionType;
						bool stickySessionEnabled;
					};
					struct UchConfig
					{
						std::string type;
						std::string value;
					};
					struct ConnectionDrainConfig
					{
						bool connectionDrainEnabled;
						int connectionDrainTimeout;
					};
					struct SlowStartConfig
					{
						bool slowStartEnabled;
						int slowStartDuration;
					};
					struct Tag
					{
						std::string value;
						std::string key;
					};
					bool serviceManagedEnabled;
					std::vector<std::string> relatedListenerIds;
					std::string resourceGroupId;
					std::string scheduler;
					std::vector<std::string> relatedRuleIds;
					int serverCount;
					bool crossZoneEnabled;
					bool ipv6Enabled;
					SlowStartConfig slowStartConfig;
					std::string serviceManagedMode;
					std::string protocol;
					std::vector<ServerGroup::Tag> tags;
					std::string serverGroupName;
					ConnectionDrainConfig connectionDrainConfig;
					std::vector<std::string> relatedLoadBalancerIds;
					UchConfig uchConfig;
					bool upstreamKeepaliveEnabled;
					StickySessionConfig stickySessionConfig;
					std::string createTime;
					std::string serverGroupId;
					std::string serverGroupType;
					std::string serverGroupStatus;
					bool configManagedEnabled;
					std::string vpcId;
					std::string serviceName;
					HealthCheckConfig healthCheckConfig;
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
#endif // !ALIBABACLOUD_ALB_MODEL_LISTSERVERGROUPSRESULT_H_