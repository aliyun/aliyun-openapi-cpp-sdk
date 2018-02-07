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

#ifndef ALIBABACLOUD_AEGIS_MODEL_RENEWINSTANCEREQUEST_H_
#define ALIBABACLOUD_AEGIS_MODEL_RENEWINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/aegis/AegisExport.h>

namespace AlibabaCloud
{
	namespace Aegis
	{
		namespace Model
		{
			class ALIBABACLOUD_AEGIS_EXPORT RenewInstanceRequest : public RpcServiceRequest
			{

			public:
				RenewInstanceRequest();
				~RenewInstanceRequest();

				int getDuration()const;
				void setDuration(int duration);
				std::string getInstanceId()const;
				void setInstanceId(const std::string& instanceId);
				std::string getClientToken()const;
				void setClientToken(const std::string& clientToken);
				std::string getVmNumber()const;
				void setVmNumber(const std::string& vmNumber);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getPricingCycle()const;
				void setPricingCycle(const std::string& pricingCycle);

            private:
				int duration_;
				std::string instanceId_;
				std::string clientToken_;
				std::string vmNumber_;
				long ownerId_;
				std::string pricingCycle_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_AEGIS_MODEL_RENEWINSTANCEREQUEST_H_