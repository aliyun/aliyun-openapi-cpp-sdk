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

#ifndef ALIBABACLOUD_SLB_MODEL_DESCRIBELOADBALANCERSRELATEDECSRESULT_H_
#define ALIBABACLOUD_SLB_MODEL_DESCRIBELOADBALANCERSRELATEDECSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/slb/SlbExport.h>

namespace AlibabaCloud
{
	namespace Slb
	{
		namespace Model
		{
			class ALIBABACLOUD_SLB_EXPORT DescribeLoadBalancersRelatedEcsResult : public ServiceResult
			{
			public:
				struct LoadBalancer
				{
					struct MasterSlaveVServerGroup
					{
						struct BackendServer
						{
							std::string networkType;
							std::string vmName;
							int port;
							int weight;
						};
						std::string groupName;
						std::vector<MasterSlaveVServerGroup::BackendServer> backendServers1;
						std::string groupId;
					};
					struct VServerGroup
					{
						struct BackendServer3
						{
							std::string networkType;
							std::string vmName;
							int port;
							int weight;
						};
						std::string groupName;
						std::vector<VServerGroup::BackendServer3> backendServers2;
						std::string groupId;
					};
					struct BackendServer4
					{
						std::string networkType;
						std::string vmName;
						int port;
						int weight;
					};
					std::string loadBalancerId;
					std::vector<LoadBalancer::MasterSlaveVServerGroup> masterSlaveVServerGroups;
					std::vector<LoadBalancer::VServerGroup> vServerGroups;
					int count;
					std::vector<LoadBalancer::BackendServer4> backendServers;
				};


				DescribeLoadBalancersRelatedEcsResult();
				explicit DescribeLoadBalancersRelatedEcsResult(const std::string &payload);
				~DescribeLoadBalancersRelatedEcsResult();
				std::string getMessage()const;
				std::vector<LoadBalancer> getLoadBalancers()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				std::vector<LoadBalancer> loadBalancers_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SLB_MODEL_DESCRIBELOADBALANCERSRELATEDECSRESULT_H_