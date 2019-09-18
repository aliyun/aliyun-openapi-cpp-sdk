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

#ifndef ALIBABACLOUD_GREEN_MODEL_RENEWWEBSITEINSTANCEREQUEST_H_
#define ALIBABACLOUD_GREEN_MODEL_RENEWWEBSITEINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/green/GreenExport.h>

namespace AlibabaCloud
{
	namespace Green
	{
		namespace Model
		{
			class ALIBABACLOUD_GREEN_EXPORT RenewWebSiteInstanceRequest : public RpcServiceRequest
			{

			public:
				RenewWebSiteInstanceRequest();
				~RenewWebSiteInstanceRequest();

				std::string getClientToken()const;
				void setClientToken(const std::string& clientToken);
				int getOrderNum()const;
				void setOrderNum(int orderNum);
				std::string getCommodityCode()const;
				void setCommodityCode(const std::string& commodityCode);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				int getDuration()const;
				void setDuration(int duration);
				std::string getInstanceId()const;
				void setInstanceId(const std::string& instanceId);
				std::string getPricingCycle()const;
				void setPricingCycle(const std::string& pricingCycle);
				std::string getOrderType()const;
				void setOrderType(const std::string& orderType);

            private:
				std::string clientToken_;
				int orderNum_;
				std::string commodityCode_;
				long ownerId_;
				int duration_;
				std::string instanceId_;
				std::string pricingCycle_;
				std::string orderType_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_GREEN_MODEL_RENEWWEBSITEINSTANCEREQUEST_H_