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
					int endPort;
					int startPort;
				};


				DescribeLoadBalancerUDPListenerAttributeResult();
				explicit DescribeLoadBalancerUDPListenerAttributeResult(const std::string &payload);
				~DescribeLoadBalancerUDPListenerAttributeResult();
				int getMaxConnection()const;
				std::string getVServerGroupId()const;
				std::string getDescription()const;
				int getFailoverThreshold()const;
				bool getProxyProtocolV2Enabled()const;
				int getUnhealthyThreshold()const;
				std::string getHealthCheckURI()const;
				std::string getScheduler()const;
				std::string getHealthCheck()const;
				std::string getWorkingServerGroupId()const;
				int getBackendServerPort()const;
				bool getMasterSlaveModeEnabled()const;
				int getConnectionDrainTimeout()const;
				int getPersistenceTimeout()const;
				int getHealthCheckConnectPort()const;
				std::string getMasterServerGroupId()const;
				std::string getHealthCheckMethod()const;
				int getBandwidth()const;
				std::string getQuicVersion()const;
				std::string getHealthCheckHttpCode()const;
				std::string getSlaveServerGroupId()const;
				std::string getStatus()const;
				int getListenerPort()const;
				int getHealthCheckInterval()const;
				std::vector<PortRange> getPortRanges()const;
				std::string getAclId()const;
				int getHealthCheckConnectTimeout()const;
				std::string getConnectionDrain()const;
				std::string getHealthCheckSwitch()const;
				std::string getAclStatus()const;
				std::string getHealthCheckReq()const;
				std::string getVpcIds()const;
				std::string getFailoverStrategy()const;
				std::string getHealthCheckExp()const;
				int getHealthyThreshold()const;
				std::string getHealthCheckDomain()const;
				std::string getMasterSlaveServerGroupId()const;
				std::string getAclType()const;
				std::vector<std::string> getAclIds()const;
				std::string getHealthCheckType()const;

			protected:
				void parse(const std::string &payload);
			private:
				int maxConnection_;
				std::string vServerGroupId_;
				std::string description_;
				int failoverThreshold_;
				bool proxyProtocolV2Enabled_;
				int unhealthyThreshold_;
				std::string healthCheckURI_;
				std::string scheduler_;
				std::string healthCheck_;
				std::string workingServerGroupId_;
				int backendServerPort_;
				bool masterSlaveModeEnabled_;
				int connectionDrainTimeout_;
				int persistenceTimeout_;
				int healthCheckConnectPort_;
				std::string masterServerGroupId_;
				std::string healthCheckMethod_;
				int bandwidth_;
				std::string quicVersion_;
				std::string healthCheckHttpCode_;
				std::string slaveServerGroupId_;
				std::string status_;
				int listenerPort_;
				int healthCheckInterval_;
				std::vector<PortRange> portRanges_;
				std::string aclId_;
				int healthCheckConnectTimeout_;
				std::string connectionDrain_;
				std::string healthCheckSwitch_;
				std::string aclStatus_;
				std::string healthCheckReq_;
				std::string vpcIds_;
				std::string failoverStrategy_;
				std::string healthCheckExp_;
				int healthyThreshold_;
				std::string healthCheckDomain_;
				std::string masterSlaveServerGroupId_;
				std::string aclType_;
				std::vector<std::string> aclIds_;
				std::string healthCheckType_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SLB_MODEL_DESCRIBELOADBALANCERUDPLISTENERATTRIBUTERESULT_H_