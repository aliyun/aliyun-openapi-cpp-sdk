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

#ifndef ALIBABACLOUD_SLB_MODEL_DESCRIBELOADBALANCERTCPLISTENERATTRIBUTERESULT_H_
#define ALIBABACLOUD_SLB_MODEL_DESCRIBELOADBALANCERTCPLISTENERATTRIBUTERESULT_H_

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
			class ALIBABACLOUD_SLB_EXPORT DescribeLoadBalancerTCPListenerAttributeResult : public ServiceResult
			{
			public:
				struct PortRange
				{
					int startPort;
					int endPort;
				};
				struct Tag
				{
					std::string tagKey;
					std::string tagValue;
				};


				DescribeLoadBalancerTCPListenerAttributeResult();
				explicit DescribeLoadBalancerTCPListenerAttributeResult(const std::string &payload);
				~DescribeLoadBalancerTCPListenerAttributeResult();
				int getMaxConnection()const;
				std::string getVServerGroupId()const;
				std::string getDescription()const;
				std::string getSynProxy()const;
				int getUnhealthyThreshold()const;
				bool getProxyProtocolV2Enabled()const;
				int getFailoverThreshold()const;
				std::string getHealthCheckURI()const;
				std::string getScheduler()const;
				std::string getHealthCheck()const;
				std::string getLoadBalancerId()const;
				std::string getWorkingServerGroupId()const;
				int getBackendServerPort()const;
				bool getMasterSlaveModeEnabled()const;
				bool getHealthCheckTcpFastCloseEnabled()const;
				int getConnectionDrainTimeout()const;
				int getPersistenceTimeout()const;
				int getHealthCheckConnectPort()const;
				std::string getMasterServerGroupId()const;
				std::string getHealthCheckMethod()const;
				std::string getServiceManagedMode()const;
				int getBandwidth()const;
				std::string getHealthCheckHttpCode()const;
				std::string getSlaveServerGroupId()const;
				std::vector<Tag> getTags()const;
				int getEstablishedTimeout()const;
				std::string getStatus()const;
				int getListenerPort()const;
				int getHealthCheckInterval()const;
				std::vector<PortRange> getPortRanges()const;
				std::string getAclId()const;
				int getHealthCheckConnectTimeout()const;
				std::string getConnectionDrain()const;
				std::string getAclStatus()const;
				std::string getVpcIds()const;
				std::string getFailoverStrategy()const;
				int getHealthyThreshold()const;
				std::string getMasterSlaveServerGroupId()const;
				std::string getHealthCheckDomain()const;
				std::string getAclType()const;
				bool getFullNatEnabled()const;
				std::vector<std::string> getAclIds()const;
				std::string getHealthCheckType()const;

			protected:
				void parse(const std::string &payload);
			private:
				int maxConnection_;
				std::string vServerGroupId_;
				std::string description_;
				std::string synProxy_;
				int unhealthyThreshold_;
				bool proxyProtocolV2Enabled_;
				int failoverThreshold_;
				std::string healthCheckURI_;
				std::string scheduler_;
				std::string healthCheck_;
				std::string loadBalancerId_;
				std::string workingServerGroupId_;
				int backendServerPort_;
				bool masterSlaveModeEnabled_;
				bool healthCheckTcpFastCloseEnabled_;
				int connectionDrainTimeout_;
				int persistenceTimeout_;
				int healthCheckConnectPort_;
				std::string masterServerGroupId_;
				std::string healthCheckMethod_;
				std::string serviceManagedMode_;
				int bandwidth_;
				std::string healthCheckHttpCode_;
				std::string slaveServerGroupId_;
				std::vector<Tag> tags_;
				int establishedTimeout_;
				std::string status_;
				int listenerPort_;
				int healthCheckInterval_;
				std::vector<PortRange> portRanges_;
				std::string aclId_;
				int healthCheckConnectTimeout_;
				std::string connectionDrain_;
				std::string aclStatus_;
				std::string vpcIds_;
				std::string failoverStrategy_;
				int healthyThreshold_;
				std::string masterSlaveServerGroupId_;
				std::string healthCheckDomain_;
				std::string aclType_;
				bool fullNatEnabled_;
				std::vector<std::string> aclIds_;
				std::string healthCheckType_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SLB_MODEL_DESCRIBELOADBALANCERTCPLISTENERATTRIBUTERESULT_H_