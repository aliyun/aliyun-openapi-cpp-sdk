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

#ifndef ALIBABACLOUD_SLB_MODEL_SETLOADBALANCERUDPLISTENERATTRIBUTEREQUEST_H_
#define ALIBABACLOUD_SLB_MODEL_SETLOADBALANCERUDPLISTENERATTRIBUTEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/slb/SlbRequest.h>

namespace AlibabaCloud
{
	namespace Slb
	{
		namespace Model
		{
			class ALIBABACLOUD_SLB_EXPORT SetLoadBalancerUDPListenerAttributeRequest : public SlbRequest
			{

			public:
				SetLoadBalancerUDPListenerAttributeRequest();
				~SetLoadBalancerUDPListenerAttributeRequest();

				std::string getAccess_key_id()const;
				void setAccess_key_id(const std::string& access_key_id);
				int getHealthCheckConnectTimeout()const;
				void setHealthCheckConnectTimeout(int healthCheckConnectTimeout);
				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				int getUnhealthyThreshold()const;
				void setUnhealthyThreshold(int unhealthyThreshold);
				int getHealthyThreshold()const;
				void setHealthyThreshold(int healthyThreshold);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getScheduler()const;
				void setScheduler(const std::string& scheduler);
				std::string getMasterSlaveServerGroup()const;
				void setMasterSlaveServerGroup(const std::string& masterSlaveServerGroup);
				int getMaxConnection()const;
				void setMaxConnection(int maxConnection);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				int getPersistenceTimeout()const;
				void setPersistenceTimeout(int persistenceTimeout);
				std::string getVServerGroupId()const;
				void setVServerGroupId(const std::string& vServerGroupId);
				int getListenerPort()const;
				void setListenerPort(int listenerPort);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				int getBandwidth()const;
				void setBandwidth(int bandwidth);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
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
				int getHealthCheckInterval()const;
				void setHealthCheckInterval(int healthCheckInterval);
				std::string getHealthCheckExp()const;
				void setHealthCheckExp(const std::string& healthCheckExp);
				int getHealthCheckConnectPort()const;
				void setHealthCheckConnectPort(int healthCheckConnectPort);
				std::string getVServerGroup()const;
				void setVServerGroup(const std::string& vServerGroup);

            private:
				std::string access_key_id_;
				int healthCheckConnectTimeout_;
				long resourceOwnerId_;
				int unhealthyThreshold_;
				int healthyThreshold_;
				std::string accessKeyId_;
				std::string scheduler_;
				std::string masterSlaveServerGroup_;
				int maxConnection_;
				std::string regionId_;
				int persistenceTimeout_;
				std::string vServerGroupId_;
				int listenerPort_;
				std::string resourceOwnerAccount_;
				int bandwidth_;
				std::string ownerAccount_;
				long ownerId_;
				std::string tags_;
				std::string loadBalancerId_;
				std::string masterSlaveServerGroupId_;
				std::string healthCheckReq_;
				int healthCheckInterval_;
				std::string healthCheckExp_;
				int healthCheckConnectPort_;
				std::string vServerGroup_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SLB_MODEL_SETLOADBALANCERUDPLISTENERATTRIBUTEREQUEST_H_