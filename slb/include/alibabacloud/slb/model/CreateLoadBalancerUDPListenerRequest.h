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
				CreateLoadBalancerUDPListenerRequest();
				~CreateLoadBalancerUDPListenerRequest();

				std::string getAccess_key_id()const;
				void setAccess_key_id(const std::string& access_key_id);
				std::string getVServerGroupId()const;
				void setVServerGroupId(const std::string& vServerGroupId);
				int getHealthCheckConnectTimeout()const;
				void setHealthCheckConnectTimeout(int healthCheckConnectTimeout);
				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				int getListenerPort()const;
				void setListenerPort(int listenerPort);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				int getBandwidth()const;
				void setBandwidth(int bandwidth);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				int getUnhealthyThreshold()const;
				void setUnhealthyThreshold(int unhealthyThreshold);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				int getHealthyThreshold()const;
				void setHealthyThreshold(int healthyThreshold);
				std::string getTags()const;
				void setTags(const std::string& tags);
				std::string getScheduler()const;
				void setScheduler(const std::string& scheduler);
				std::string getLoadBalancerId()const;
				void setLoadBalancerId(const std::string& loadBalancerId);
				int getMaxConnection()const;
				void setMaxConnection(int maxConnection);
				std::string getMasterSlaveServerGroupId()const;
				void setMasterSlaveServerGroupId(const std::string& masterSlaveServerGroupId);
				std::string getHealthCheckReq()const;
				void setHealthCheckReq(const std::string& healthCheckReq);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				int getBackendServerPort()const;
				void setBackendServerPort(int backendServerPort);
				int getHealthCheckInterval()const;
				void setHealthCheckInterval(int healthCheckInterval);
				int getPersistenceTimeout()const;
				void setPersistenceTimeout(int persistenceTimeout);
				std::string getHealthCheckExp()const;
				void setHealthCheckExp(const std::string& healthCheckExp);
				int getHealthCheckConnectPort()const;
				void setHealthCheckConnectPort(int healthCheckConnectPort);

            private:
				std::string access_key_id_;
				std::string vServerGroupId_;
				int healthCheckConnectTimeout_;
				long resourceOwnerId_;
				int listenerPort_;
				std::string resourceOwnerAccount_;
				int bandwidth_;
				std::string ownerAccount_;
				int unhealthyThreshold_;
				long ownerId_;
				int healthyThreshold_;
				std::string tags_;
				std::string scheduler_;
				std::string loadBalancerId_;
				int maxConnection_;
				std::string masterSlaveServerGroupId_;
				std::string healthCheckReq_;
				std::string regionId_;
				int backendServerPort_;
				int healthCheckInterval_;
				int persistenceTimeout_;
				std::string healthCheckExp_;
				int healthCheckConnectPort_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SLB_MODEL_CREATELOADBALANCERUDPLISTENERREQUEST_H_