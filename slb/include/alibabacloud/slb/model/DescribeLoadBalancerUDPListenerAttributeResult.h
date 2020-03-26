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

#ifndef ALIBABACLOUD_SLB_MODEL_DESCRIBELOADBALANCERUDPLISTENERATTRIBUTERESULT_H_
#define ALIBABACLOUD_SLB_MODEL_DESCRIBELOADBALANCERUDPLISTENERATTRIBUTERESULT_H_

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
			class ALIBABACLOUD_SLB_EXPORT DescribeLoadBalancerUDPListenerAttributeResult : public ServiceResult
			{
			public:
				struct PortRange
				{
					int startPort;
					int endPort;
				};


				DescribeLoadBalancerUDPListenerAttributeResult();
				explicit DescribeLoadBalancerUDPListenerAttributeResult(const std::string &payload);
				~DescribeLoadBalancerUDPListenerAttributeResult();
				int getMaxConnection()const;
				std::string getVServerGroupId()const;
				std::string getDescription()const;
				int getUnhealthyThreshold()const;
				std::string getScheduler()const;
				std::string getHealthCheck()const;
				int getBackendServerPort()const;
				int getConnectionDrainTimeout()const;
				int getPersistenceTimeout()const;
				int getHealthCheckConnectPort()const;
				int getBandwidth()const;
				std::string getStatus()const;
				int getListenerPort()const;
				int getHealthCheckInterval()const;
				std::vector<PortRange> getPortRanges()const;
				std::string getAclId()const;
				int getHealthCheckConnectTimeout()const;
				std::string getConnectionDrain()const;
				std::string getHealthCheckReq()const;
				std::string getAclStatus()const;
				std::string getVpcIds()const;
				int getHealthyThreshold()const;
				std::string getHealthCheckExp()const;
				std::string getMasterSlaveServerGroupId()const;
				std::string getAclType()const;
				std::vector<std::string> getAclIds()const;

			protected:
				void parse(const std::string &payload);
			private:
				int maxConnection_;
				std::string vServerGroupId_;
				std::string description_;
				int unhealthyThreshold_;
				std::string scheduler_;
				std::string healthCheck_;
				int backendServerPort_;
				int connectionDrainTimeout_;
				int persistenceTimeout_;
				int healthCheckConnectPort_;
				int bandwidth_;
				std::string status_;
				int listenerPort_;
				int healthCheckInterval_;
				std::vector<PortRange> portRanges_;
				std::string aclId_;
				int healthCheckConnectTimeout_;
				std::string connectionDrain_;
				std::string healthCheckReq_;
				std::string aclStatus_;
				std::string vpcIds_;
				int healthyThreshold_;
				std::string healthCheckExp_;
				std::string masterSlaveServerGroupId_;
				std::string aclType_;
				std::vector<std::string> aclIds_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SLB_MODEL_DESCRIBELOADBALANCERUDPLISTENERATTRIBUTERESULT_H_