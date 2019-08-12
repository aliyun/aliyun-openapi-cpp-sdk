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

#ifndef ALIBABACLOUD_ESS_MODEL_ENABLESCALINGGROUPREQUEST_H_
#define ALIBABACLOUD_ESS_MODEL_ENABLESCALINGGROUPREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/ess/EssExport.h>

namespace AlibabaCloud
{
	namespace Ess
	{
		namespace Model
		{
			class ALIBABACLOUD_ESS_EXPORT EnableScalingGroupRequest : public RpcServiceRequest
			{

			public:
				EnableScalingGroupRequest();
				~EnableScalingGroupRequest();

				int getLoadBalancerWeight6()const;
				void setLoadBalancerWeight6(int loadBalancerWeight6);
				int getLoadBalancerWeight11()const;
				void setLoadBalancerWeight11(int loadBalancerWeight11);
				int getLoadBalancerWeight7()const;
				void setLoadBalancerWeight7(int loadBalancerWeight7);
				int getLoadBalancerWeight12()const;
				void setLoadBalancerWeight12(int loadBalancerWeight12);
				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				int getLoadBalancerWeight8()const;
				void setLoadBalancerWeight8(int loadBalancerWeight8);
				int getLoadBalancerWeight9()const;
				void setLoadBalancerWeight9(int loadBalancerWeight9);
				int getLoadBalancerWeight10()const;
				void setLoadBalancerWeight10(int loadBalancerWeight10);
				int getLoadBalancerWeight2()const;
				void setLoadBalancerWeight2(int loadBalancerWeight2);
				int getLoadBalancerWeight15()const;
				void setLoadBalancerWeight15(int loadBalancerWeight15);
				int getLoadBalancerWeight3()const;
				void setLoadBalancerWeight3(int loadBalancerWeight3);
				int getLoadBalancerWeight16()const;
				void setLoadBalancerWeight16(int loadBalancerWeight16);
				int getLoadBalancerWeight4()const;
				void setLoadBalancerWeight4(int loadBalancerWeight4);
				int getLoadBalancerWeight13()const;
				void setLoadBalancerWeight13(int loadBalancerWeight13);
				int getLoadBalancerWeight5()const;
				void setLoadBalancerWeight5(int loadBalancerWeight5);
				int getLoadBalancerWeight14()const;
				void setLoadBalancerWeight14(int loadBalancerWeight14);
				std::string getActiveScalingConfigurationId()const;
				void setActiveScalingConfigurationId(const std::string& activeScalingConfigurationId);
				int getLoadBalancerWeight1()const;
				void setLoadBalancerWeight1(int loadBalancerWeight1);
				std::string getInstanceId1()const;
				void setInstanceId1(const std::string& instanceId1);
				int getLoadBalancerWeight20()const;
				void setLoadBalancerWeight20(int loadBalancerWeight20);
				std::string getInstanceId3()const;
				void setInstanceId3(const std::string& instanceId3);
				std::string getLaunchTemplateId()const;
				void setLaunchTemplateId(const std::string& launchTemplateId);
				std::string getInstanceId2()const;
				void setInstanceId2(const std::string& instanceId2);
				std::string getInstanceId5()const;
				void setInstanceId5(const std::string& instanceId5);
				std::string getInstanceId4()const;
				void setInstanceId4(const std::string& instanceId4);
				std::string getInstanceId7()const;
				void setInstanceId7(const std::string& instanceId7);
				std::string getInstanceId6()const;
				void setInstanceId6(const std::string& instanceId6);
				std::string getInstanceId9()const;
				void setInstanceId9(const std::string& instanceId9);
				std::string getInstanceId8()const;
				void setInstanceId8(const std::string& instanceId8);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				int getLoadBalancerWeight19()const;
				void setLoadBalancerWeight19(int loadBalancerWeight19);
				int getLoadBalancerWeight17()const;
				void setLoadBalancerWeight17(int loadBalancerWeight17);
				int getLoadBalancerWeight18()const;
				void setLoadBalancerWeight18(int loadBalancerWeight18);
				std::string getInstanceId10()const;
				void setInstanceId10(const std::string& instanceId10);
				std::string getInstanceId12()const;
				void setInstanceId12(const std::string& instanceId12);
				std::string getInstanceId11()const;
				void setInstanceId11(const std::string& instanceId11);
				std::string getScalingGroupId()const;
				void setScalingGroupId(const std::string& scalingGroupId);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getInstanceId20()const;
				void setInstanceId20(const std::string& instanceId20);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				std::string getLaunchTemplateVersion()const;
				void setLaunchTemplateVersion(const std::string& launchTemplateVersion);
				std::string getInstanceId18()const;
				void setInstanceId18(const std::string& instanceId18);
				std::string getInstanceId17()const;
				void setInstanceId17(const std::string& instanceId17);
				std::string getInstanceId19()const;
				void setInstanceId19(const std::string& instanceId19);
				std::string getInstanceId14()const;
				void setInstanceId14(const std::string& instanceId14);
				std::string getInstanceId13()const;
				void setInstanceId13(const std::string& instanceId13);
				std::string getInstanceId16()const;
				void setInstanceId16(const std::string& instanceId16);
				std::string getInstanceId15()const;
				void setInstanceId15(const std::string& instanceId15);

            private:
				int loadBalancerWeight6_;
				int loadBalancerWeight11_;
				int loadBalancerWeight7_;
				int loadBalancerWeight12_;
				long resourceOwnerId_;
				int loadBalancerWeight8_;
				int loadBalancerWeight9_;
				int loadBalancerWeight10_;
				int loadBalancerWeight2_;
				int loadBalancerWeight15_;
				int loadBalancerWeight3_;
				int loadBalancerWeight16_;
				int loadBalancerWeight4_;
				int loadBalancerWeight13_;
				int loadBalancerWeight5_;
				int loadBalancerWeight14_;
				std::string activeScalingConfigurationId_;
				int loadBalancerWeight1_;
				std::string instanceId1_;
				int loadBalancerWeight20_;
				std::string instanceId3_;
				std::string launchTemplateId_;
				std::string instanceId2_;
				std::string instanceId5_;
				std::string instanceId4_;
				std::string instanceId7_;
				std::string instanceId6_;
				std::string instanceId9_;
				std::string instanceId8_;
				long ownerId_;
				int loadBalancerWeight19_;
				int loadBalancerWeight17_;
				int loadBalancerWeight18_;
				std::string instanceId10_;
				std::string instanceId12_;
				std::string instanceId11_;
				std::string scalingGroupId_;
				std::string accessKeyId_;
				std::string instanceId20_;
				std::string resourceOwnerAccount_;
				std::string ownerAccount_;
				std::string launchTemplateVersion_;
				std::string instanceId18_;
				std::string instanceId17_;
				std::string instanceId19_;
				std::string instanceId14_;
				std::string instanceId13_;
				std::string instanceId16_;
				std::string instanceId15_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ESS_MODEL_ENABLESCALINGGROUPREQUEST_H_