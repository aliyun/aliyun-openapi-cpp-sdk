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

#ifndef ALIBABACLOUD_SLB_MODEL_CREATELOADBALANCERUDPLISTENERREQUEST_H_
#define ALIBABACLOUD_SLB_MODEL_CREATELOADBALANCERUDPLISTENERREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/slb/SlbExport.h>

namespace AlibabaCloud
{
	namespace Slb
	{
		namespace Model
		{
			class ALIBABACLOUD_SLB_EXPORT CreateLoadBalancerUDPListenerRequest : public RpcServiceRequest
			{
			public:
				struct PortRange
				{
					int startPort;
					int endPort;
				};

			public:
				CreateLoadBalancerUDPListenerRequest();
				~CreateLoadBalancerUDPListenerRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getAclStatus()const;
				void setAclStatus(const std::string& aclStatus);
				std::string getAclType()const;
				void setAclType(const std::string& aclType);
				int getPersistenceTimeout()const;
				void setPersistenceTimeout(int persistenceTimeout);
				std::string getVpcIds()const;
				void setVpcIds(const std::string& vpcIds);
				std::string getVServerGroupId()const;
				void setVServerGroupId(const std::string& vServerGroupId);
				std::string getAclId()const;
				void setAclId(const std::string& aclId);
				std::vector<PortRange> getPortRange()const;
				void setPortRange(const std::vector<PortRange>& portRange);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getTags()const;
				void setTags(const std::string& tags);
				std::string getLoadBalancerId()const;
				void setLoadBalancerId(const std::string& loadBalancerId);
				std::string getMasterSlaveServerGroupId()const;
				void setMasterSlaveServerGroupId(const std::string& masterSlaveServerGroupId);
				std::string getHealthCheckReq()const;
				void setHealthCheckReq(const std::string& healthCheckReq);
				int getBackendServerPort()const;
				void setBackendServerPort(int backendServerPort);
				int getHealthCheckInterval()const;
				void setHealthCheckInterval(int healthCheckInterval);
				std::string getHealthCheckExp()const;
				void setHealthCheckExp(const std::string& healthCheckExp);
				std::string getConnectionDrain()const;
				void setConnectionDrain(const std::string& connectionDrain);
				std::string getAccess_key_id()const;
				void setAccess_key_id(const std::string& access_key_id);
				int getHealthCheckConnectTimeout()const;
				void setHealthCheckConnectTimeout(int healthCheckConnectTimeout);
				std::string getDescription()const;
				void setDescription(const std::string& description);
				int getUnhealthyThreshold()const;
				void setUnhealthyThreshold(int unhealthyThreshold);
				int getHealthyThreshold()const;
				void setHealthyThreshold(int healthyThreshold);
				std::string getScheduler()const;
				void setScheduler(const std::string& scheduler);
				int getMaxConnection()const;
				void setMaxConnection(int maxConnection);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				int getListenerPort()const;
				void setListenerPort(int listenerPort);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				int getBandwidth()const;
				void setBandwidth(int bandwidth);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				int getConnectionDrainTimeout()const;
				void setConnectionDrainTimeout(int connectionDrainTimeout);
				int getHealthCheckConnectPort()const;
				void setHealthCheckConnectPort(int healthCheckConnectPort);

            private:
				long resourceOwnerId_;
				std::string aclStatus_;
				std::string aclType_;
				int persistenceTimeout_;
				std::string vpcIds_;
				std::string vServerGroupId_;
				std::string aclId_;
				std::vector<PortRange> portRange_;
				long ownerId_;
				std::string tags_;
				std::string loadBalancerId_;
				std::string masterSlaveServerGroupId_;
				std::string healthCheckReq_;
				int backendServerPort_;
				int healthCheckInterval_;
				std::string healthCheckExp_;
				std::string connectionDrain_;
				std::string access_key_id_;
				int healthCheckConnectTimeout_;
				std::string description_;
				int unhealthyThreshold_;
				int healthyThreshold_;
				std::string scheduler_;
				int maxConnection_;
				std::string regionId_;
				int listenerPort_;
				std::string resourceOwnerAccount_;
				int bandwidth_;
				std::string ownerAccount_;
				int connectionDrainTimeout_;
				int healthCheckConnectPort_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SLB_MODEL_CREATELOADBALANCERUDPLISTENERREQUEST_H_