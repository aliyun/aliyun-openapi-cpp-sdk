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

#ifndef ALIBABACLOUD_ESS_MODEL_EXECUTESCALINGRULEREQUEST_H_
#define ALIBABACLOUD_ESS_MODEL_EXECUTESCALINGRULEREQUEST_H_

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
			class ALIBABACLOUD_ESS_EXPORT ExecuteScalingRuleRequest : public RpcServiceRequest
			{

			public:
				ExecuteScalingRuleRequest();
				~ExecuteScalingRuleRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getScalingRuleAri()const;
				void setScalingRuleAri(const std::string& scalingRuleAri);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getClientToken()const;
				void setClientToken(const std::string& clientToken);
				float getBreachThreshold()const;
				void setBreachThreshold(float breachThreshold);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				float getMetricValue()const;
				void setMetricValue(float metricValue);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);

            private:
				long resourceOwnerId_;
				std::string scalingRuleAri_;
				std::string resourceOwnerAccount_;
				std::string clientToken_;
				float breachThreshold_;
				std::string ownerAccount_;
				long ownerId_;
				float metricValue_;
				std::string accessKeyId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ESS_MODEL_EXECUTESCALINGRULEREQUEST_H_