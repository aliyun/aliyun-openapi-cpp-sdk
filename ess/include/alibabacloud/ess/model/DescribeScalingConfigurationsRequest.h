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

#ifndef ALIBABACLOUD_ESS_MODEL_DESCRIBESCALINGCONFIGURATIONSREQUEST_H_
#define ALIBABACLOUD_ESS_MODEL_DESCRIBESCALINGCONFIGURATIONSREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/ess/EssRequest.h>

namespace AlibabaCloud
{
	namespace Ess
	{
		namespace Model
		{
			class ALIBABACLOUD_ESS_EXPORT DescribeScalingConfigurationsRequest : public EssRequest
			{

			public:
				DescribeScalingConfigurationsRequest();
				~DescribeScalingConfigurationsRequest();

				std::string getScalingConfigurationId6()const;
				void setScalingConfigurationId6(const std::string& scalingConfigurationId6);
				std::string getScalingConfigurationId7()const;
				void setScalingConfigurationId7(const std::string& scalingConfigurationId7);
				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getScalingConfigurationId4()const;
				void setScalingConfigurationId4(const std::string& scalingConfigurationId4);
				std::string getScalingConfigurationId5()const;
				void setScalingConfigurationId5(const std::string& scalingConfigurationId5);
				std::string getScalingGroupId()const;
				void setScalingGroupId(const std::string& scalingGroupId);
				std::string getScalingConfigurationId8()const;
				void setScalingConfigurationId8(const std::string& scalingConfigurationId8);
				std::string getScalingConfigurationId9()const;
				void setScalingConfigurationId9(const std::string& scalingConfigurationId9);
				std::string getScalingConfigurationId10()const;
				void setScalingConfigurationId10(const std::string& scalingConfigurationId10);
				int getPageNumber()const;
				void setPageNumber(int pageNumber);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getScalingConfigurationName2()const;
				void setScalingConfigurationName2(const std::string& scalingConfigurationName2);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getScalingConfigurationName3()const;
				void setScalingConfigurationName3(const std::string& scalingConfigurationName3);
				std::string getScalingConfigurationName1()const;
				void setScalingConfigurationName1(const std::string& scalingConfigurationName1);
				int getPageSize()const;
				void setPageSize(int pageSize);
				std::string getScalingConfigurationId2()const;
				void setScalingConfigurationId2(const std::string& scalingConfigurationId2);
				std::string getScalingConfigurationId3()const;
				void setScalingConfigurationId3(const std::string& scalingConfigurationId3);
				std::string getScalingConfigurationId1()const;
				void setScalingConfigurationId1(const std::string& scalingConfigurationId1);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				std::string getScalingConfigurationName6()const;
				void setScalingConfigurationName6(const std::string& scalingConfigurationName6);
				std::string getScalingConfigurationName7()const;
				void setScalingConfigurationName7(const std::string& scalingConfigurationName7);
				std::string getScalingConfigurationName4()const;
				void setScalingConfigurationName4(const std::string& scalingConfigurationName4);
				std::string getScalingConfigurationName5()const;
				void setScalingConfigurationName5(const std::string& scalingConfigurationName5);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getScalingConfigurationName8()const;
				void setScalingConfigurationName8(const std::string& scalingConfigurationName8);
				std::string getScalingConfigurationName9()const;
				void setScalingConfigurationName9(const std::string& scalingConfigurationName9);
				std::string getScalingConfigurationName10()const;
				void setScalingConfigurationName10(const std::string& scalingConfigurationName10);

            private:
				std::string scalingConfigurationId6_;
				std::string scalingConfigurationId7_;
				long resourceOwnerId_;
				std::string scalingConfigurationId4_;
				std::string scalingConfigurationId5_;
				std::string scalingGroupId_;
				std::string scalingConfigurationId8_;
				std::string scalingConfigurationId9_;
				std::string scalingConfigurationId10_;
				int pageNumber_;
				std::string accessKeyId_;
				std::string scalingConfigurationName2_;
				std::string regionId_;
				std::string scalingConfigurationName3_;
				std::string scalingConfigurationName1_;
				int pageSize_;
				std::string scalingConfigurationId2_;
				std::string scalingConfigurationId3_;
				std::string scalingConfigurationId1_;
				std::string resourceOwnerAccount_;
				std::string ownerAccount_;
				std::string scalingConfigurationName6_;
				std::string scalingConfigurationName7_;
				std::string scalingConfigurationName4_;
				std::string scalingConfigurationName5_;
				long ownerId_;
				std::string scalingConfigurationName8_;
				std::string scalingConfigurationName9_;
				std::string scalingConfigurationName10_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ESS_MODEL_DESCRIBESCALINGCONFIGURATIONSREQUEST_H_