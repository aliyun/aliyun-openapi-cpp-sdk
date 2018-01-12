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

#ifndef ALIBABACLOUD_ESS_MODEL_DESCRIBESCALINGRULESREQUEST_H_
#define ALIBABACLOUD_ESS_MODEL_DESCRIBESCALINGRULESREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/ess/EssRequest.h>

namespace AlibabaCloud
{
	namespace Ess
	{
		namespace Model
		{
			class ALIBABACLOUD_ESS_EXPORT DescribeScalingRulesRequest : public EssRequest
			{

			public:
				DescribeScalingRulesRequest();
				~DescribeScalingRulesRequest();

				std::string getScalingRuleName1()const;
				void setScalingRuleName1(const std::string& scalingRuleName1);
				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getScalingRuleName2()const;
				void setScalingRuleName2(const std::string& scalingRuleName2);
				std::string getScalingRuleName3()const;
				void setScalingRuleName3(const std::string& scalingRuleName3);
				std::string getScalingRuleName4()const;
				void setScalingRuleName4(const std::string& scalingRuleName4);
				std::string getScalingRuleName5()const;
				void setScalingRuleName5(const std::string& scalingRuleName5);
				std::string getScalingGroupId()const;
				void setScalingGroupId(const std::string& scalingGroupId);
				std::string getScalingRuleName6()const;
				void setScalingRuleName6(const std::string& scalingRuleName6);
				std::string getScalingRuleName7()const;
				void setScalingRuleName7(const std::string& scalingRuleName7);
				std::string getScalingRuleName8()const;
				void setScalingRuleName8(const std::string& scalingRuleName8);
				std::string getScalingRuleAri9()const;
				void setScalingRuleAri9(const std::string& scalingRuleAri9);
				std::string getScalingRuleName9()const;
				void setScalingRuleName9(const std::string& scalingRuleName9);
				int getPageNumber()const;
				void setPageNumber(int pageNumber);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				int getPageSize()const;
				void setPageSize(int pageSize);
				std::string getScalingRuleId10()const;
				void setScalingRuleId10(const std::string& scalingRuleId10);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getScalingRuleAri1()const;
				void setScalingRuleAri1(const std::string& scalingRuleAri1);
				std::string getScalingRuleAri2()const;
				void setScalingRuleAri2(const std::string& scalingRuleAri2);
				std::string getScalingRuleName10()const;
				void setScalingRuleName10(const std::string& scalingRuleName10);
				std::string getScalingRuleAri3()const;
				void setScalingRuleAri3(const std::string& scalingRuleAri3);
				std::string getScalingRuleAri4()const;
				void setScalingRuleAri4(const std::string& scalingRuleAri4);
				std::string getScalingRuleId8()const;
				void setScalingRuleId8(const std::string& scalingRuleId8);
				std::string getScalingRuleAri5()const;
				void setScalingRuleAri5(const std::string& scalingRuleAri5);
				std::string getScalingRuleId9()const;
				void setScalingRuleId9(const std::string& scalingRuleId9);
				std::string getScalingRuleAri6()const;
				void setScalingRuleAri6(const std::string& scalingRuleAri6);
				std::string getScalingRuleAri7()const;
				void setScalingRuleAri7(const std::string& scalingRuleAri7);
				std::string getScalingRuleAri10()const;
				void setScalingRuleAri10(const std::string& scalingRuleAri10);
				std::string getScalingRuleAri8()const;
				void setScalingRuleAri8(const std::string& scalingRuleAri8);
				std::string getScalingRuleId4()const;
				void setScalingRuleId4(const std::string& scalingRuleId4);
				std::string getScalingRuleId5()const;
				void setScalingRuleId5(const std::string& scalingRuleId5);
				std::string getScalingRuleId6()const;
				void setScalingRuleId6(const std::string& scalingRuleId6);
				std::string getScalingRuleId7()const;
				void setScalingRuleId7(const std::string& scalingRuleId7);
				std::string getScalingRuleId1()const;
				void setScalingRuleId1(const std::string& scalingRuleId1);
				std::string getScalingRuleId2()const;
				void setScalingRuleId2(const std::string& scalingRuleId2);
				std::string getScalingRuleId3()const;
				void setScalingRuleId3(const std::string& scalingRuleId3);

            private:
				std::string scalingRuleName1_;
				long resourceOwnerId_;
				std::string scalingRuleName2_;
				std::string scalingRuleName3_;
				std::string scalingRuleName4_;
				std::string scalingRuleName5_;
				std::string scalingGroupId_;
				std::string scalingRuleName6_;
				std::string scalingRuleName7_;
				std::string scalingRuleName8_;
				std::string scalingRuleAri9_;
				std::string scalingRuleName9_;
				int pageNumber_;
				std::string accessKeyId_;
				std::string regionId_;
				int pageSize_;
				std::string scalingRuleId10_;
				std::string resourceOwnerAccount_;
				std::string ownerAccount_;
				long ownerId_;
				std::string scalingRuleAri1_;
				std::string scalingRuleAri2_;
				std::string scalingRuleName10_;
				std::string scalingRuleAri3_;
				std::string scalingRuleAri4_;
				std::string scalingRuleId8_;
				std::string scalingRuleAri5_;
				std::string scalingRuleId9_;
				std::string scalingRuleAri6_;
				std::string scalingRuleAri7_;
				std::string scalingRuleAri10_;
				std::string scalingRuleAri8_;
				std::string scalingRuleId4_;
				std::string scalingRuleId5_;
				std::string scalingRuleId6_;
				std::string scalingRuleId7_;
				std::string scalingRuleId1_;
				std::string scalingRuleId2_;
				std::string scalingRuleId3_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ESS_MODEL_DESCRIBESCALINGRULESREQUEST_H_