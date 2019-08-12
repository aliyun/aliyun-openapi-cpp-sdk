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

#ifndef ALIBABACLOUD_SLB_MODEL_SETLOADBALANCERTCPLISTENERATTRIBUTEREQUEST_H_
#define ALIBABACLOUD_SLB_MODEL_SETLOADBALANCERTCPLISTENERATTRIBUTEREQUEST_H_

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
			class ALIBABACLOUD_SLB_EXPORT SetLoadBalancerTCPListenerAttributeRequest : public RpcServiceRequest
			{

			public:
				SetLoadBalancerTCPListenerAttributeRequest();
				~SetLoadBalancerTCPListenerAttributeRequest();

				std::string getAccess_key_id()const;
				void setAccess_key_id(const std::string& access_key_id);
				int getHealthCheckConnectTimeout()const;
				void setHealthCheckConnectTimeout(int healthCheckConnectTimeout);
				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getHealthCheckURI()const;
				void setHealthCheckURI(const std::string& healthCheckURI);
				std::string getDescription()const;
				void setDescription(const std::string& description);
				int getUnhealthyThreshold()const;
				void setUnhealthyThreshold(int unhealthyThreshold);
				int getHealthyThreshold()const;
				void setHealthyThreshold(int healthyThreshold);
				std::string getAclStatus()const;
				void setAclStatus(const std::string& aclStatus);
				std::string getScheduler()const;
				void setScheduler(const std::string& scheduler);
				std::string getAclType()const;
				void setAclType(const std::string& aclType);
				std::string getMasterSlaveServerGroup()const;
				void setMasterSlaveServerGroup(const std::string& masterSlaveServerGroup);
				int getEstablishedTimeout()const;
				void setEstablishedTimeout(int establishedTimeout);
				int getMaxConnection()const;
				void setMaxConnection(int maxConnection);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				int getPersistenceTimeout()const;
				void setPersistenceTimeout(int persistenceTimeout);
				std::string getVpcIds()const;
				void setVpcIds(const std::string& vpcIds);
				std::string getVServerGroupId()const;
				void setVServerGroupId(const std::string& vServerGroupId);
				std::string getAclId()const;
				void setAclId(const std::string& aclId);
				int getListenerPort()const;
				void setListenerPort(int listenerPort);
				std::string getHealthCheckType()const;
				void setHealthCheckType(const std::string& healthCheckType);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				int getBandwidth()const;
				void setBandwidth(int bandwidth);
				std::string getHealthCheckMethod()const;
				void setHealthCheckMethod(const std::string& healthCheckMethod);
				std::string getHealthCheckDomain()const;
				void setHealthCheckDomain(const std::string& healthCheckDomain);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				std::string getSynProxy()const;
				void setSynProxy(const std::string& synProxy);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getTags()const;
				void setTags(const std::string& tags);
				std::string getLoadBalancerId()const;
				void setLoadBalancerId(const std::string& loadBalancerId);
				std::string getMasterSlaveServerGroupId()const;
				void setMasterSlaveServerGroupId(const std::string& masterSlaveServerGroupId);
				int getHealthCheckInterval()const;
				void setHealthCheckInterval(int healthCheckInterval);
				int getHealthCheckConnectPort()const;
				void setHealthCheckConnectPort(int healthCheckConnectPort);
				std::string getHealthCheckHttpCode()const;
				void setHealthCheckHttpCode(const std::string& healthCheckHttpCode);
				std::string getVServerGroup()const;
				void setVServerGroup(const std::string& vServerGroup);

            private:
				std::string access_key_id_;
				int healthCheckConnectTimeout_;
				long resourceOwnerId_;
				std::string healthCheckURI_;
				std::string description_;
				int unhealthyThreshold_;
				int healthyThreshold_;
				std::string aclStatus_;
				std::string scheduler_;
				std::string aclType_;
				std::string masterSlaveServerGroup_;
				int establishedTimeout_;
				int maxConnection_;
				std::string regionId_;
				int persistenceTimeout_;
				std::string vpcIds_;
				std::string vServerGroupId_;
				std::string aclId_;
				int listenerPort_;
				std::string healthCheckType_;
				std::string resourceOwnerAccount_;
				int bandwidth_;
				std::string healthCheckMethod_;
				std::string healthCheckDomain_;
				std::string ownerAccount_;
				std::string synProxy_;
				long ownerId_;
				std::string tags_;
				std::string loadBalancerId_;
				std::string masterSlaveServerGroupId_;
				int healthCheckInterval_;
				int healthCheckConnectPort_;
				std::string healthCheckHttpCode_;
				std::string vServerGroup_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SLB_MODEL_SETLOADBALANCERTCPLISTENERATTRIBUTEREQUEST_H_