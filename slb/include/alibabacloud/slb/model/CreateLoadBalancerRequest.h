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

#ifndef ALIBABACLOUD_SLB_MODEL_CREATELOADBALANCERREQUEST_H_
#define ALIBABACLOUD_SLB_MODEL_CREATELOADBALANCERREQUEST_H_

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
			class ALIBABACLOUD_SLB_EXPORT CreateLoadBalancerRequest : public RpcServiceRequest
			{

			public:
				CreateLoadBalancerRequest();
				~CreateLoadBalancerRequest();

				std::string getAccess_key_id()const;
				void setAccess_key_id(const std::string& access_key_id);
				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getClientToken()const;
				void setClientToken(const std::string& clientToken);
				std::string getAddressIPVersion()const;
				void setAddressIPVersion(const std::string& addressIPVersion);
				std::string getMasterZoneId()const;
				void setMasterZoneId(const std::string& masterZoneId);
				int getDuration()const;
				void setDuration(int duration);
				std::string getResourceGroupId()const;
				void setResourceGroupId(const std::string& resourceGroupId);
				std::string getLoadBalancerName()const;
				void setLoadBalancerName(const std::string& loadBalancerName);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getAddressType()const;
				void setAddressType(const std::string& addressType);
				std::string getSlaveZoneId()const;
				void setSlaveZoneId(const std::string& slaveZoneId);
				std::string getDeleteProtection()const;
				void setDeleteProtection(const std::string& deleteProtection);
				std::string getLoadBalancerSpec()const;
				void setLoadBalancerSpec(const std::string& loadBalancerSpec);
				bool getAutoPay()const;
				void setAutoPay(bool autoPay);
				std::string getAddress()const;
				void setAddress(const std::string& address);
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
				std::string getVSwitchId()const;
				void setVSwitchId(const std::string& vSwitchId);
				std::string getEnableVpcVipFlow()const;
				void setEnableVpcVipFlow(const std::string& enableVpcVipFlow);
				std::string getInternetChargeType()const;
				void setInternetChargeType(const std::string& internetChargeType);
				std::string getVpcId()const;
				void setVpcId(const std::string& vpcId);
				std::string getPayType()const;
				void setPayType(const std::string& payType);
				std::string getPricingCycle()const;
				void setPricingCycle(const std::string& pricingCycle);
				int getRatio()const;
				void setRatio(int ratio);

            private:
				std::string access_key_id_;
				long resourceOwnerId_;
				std::string clientToken_;
				std::string addressIPVersion_;
				std::string masterZoneId_;
				int duration_;
				std::string resourceGroupId_;
				std::string loadBalancerName_;
				std::string regionId_;
				std::string addressType_;
				std::string slaveZoneId_;
				std::string deleteProtection_;
				std::string loadBalancerSpec_;
				bool autoPay_;
				std::string address_;
				std::string resourceOwnerAccount_;
				int bandwidth_;
				std::string ownerAccount_;
				long ownerId_;
				std::string tags_;
				std::string vSwitchId_;
				std::string enableVpcVipFlow_;
				std::string internetChargeType_;
				std::string vpcId_;
				std::string payType_;
				std::string pricingCycle_;
				int ratio_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SLB_MODEL_CREATELOADBALANCERREQUEST_H_