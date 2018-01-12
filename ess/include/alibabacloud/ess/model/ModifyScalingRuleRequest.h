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

#ifndef ALIBABACLOUD_ESS_MODEL_MODIFYSCALINGRULEREQUEST_H_
#define ALIBABACLOUD_ESS_MODEL_MODIFYSCALINGRULEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/ess/EssRequest.h>

namespace AlibabaCloud
{
	namespace Ess
	{
		namespace Model
		{
			class ALIBABACLOUD_ESS_EXPORT ModifyScalingRuleRequest : public EssRequest
			{

			public:
				ModifyScalingRuleRequest();
				~ModifyScalingRuleRequest();

				std::string getScalingRuleName()const;
				void setScalingRuleName(const std::string& scalingRuleName);
				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				int getAdjustmentValue()const;
				void setAdjustmentValue(int adjustmentValue);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				int getCooldown()const;
				void setCooldown(int cooldown);
				std::string getAdjustmentType()const;
				void setAdjustmentType(const std::string& adjustmentType);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getScalingRuleId()const;
				void setScalingRuleId(const std::string& scalingRuleId);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);

            private:
				std::string scalingRuleName_;
				long resourceOwnerId_;
				std::string resourceOwnerAccount_;
				int adjustmentValue_;
				std::string ownerAccount_;
				int cooldown_;
				std::string adjustmentType_;
				long ownerId_;
				std::string scalingRuleId_;
				std::string accessKeyId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ESS_MODEL_MODIFYSCALINGRULEREQUEST_H_