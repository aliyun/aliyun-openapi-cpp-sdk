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

#ifndef ALIBABACLOUD_GA_MODEL_CREATEACCELERATORREQUEST_H_
#define ALIBABACLOUD_GA_MODEL_CREATEACCELERATORREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/ga/GaExport.h>

namespace AlibabaCloud
{
	namespace Ga
	{
		namespace Model
		{
			class ALIBABACLOUD_GA_EXPORT CreateAcceleratorRequest : public RpcServiceRequest
			{

			public:
				CreateAcceleratorRequest();
				~CreateAcceleratorRequest();

				bool getAutoPay()const;
				void setAutoPay(bool autoPay);
				std::string getPromotionOptionNo()const;
				void setPromotionOptionNo(const std::string& promotionOptionNo);
				std::string getClientToken()const;
				void setClientToken(const std::string& clientToken);
				std::string getAutoUseCoupon()const;
				void setAutoUseCoupon(const std::string& autoUseCoupon);
				std::string getSpec()const;
				void setSpec(const std::string& spec);
				int getDuration()const;
				void setDuration(int duration);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getName()const;
				void setName(const std::string& name);
				std::string getPricingCycle()const;
				void setPricingCycle(const std::string& pricingCycle);

            private:
				bool autoPay_;
				std::string promotionOptionNo_;
				std::string clientToken_;
				std::string autoUseCoupon_;
				std::string spec_;
				int duration_;
				std::string regionId_;
				std::string name_;
				std::string pricingCycle_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_GA_MODEL_CREATEACCELERATORREQUEST_H_