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

#ifndef ALIBABACLOUD_HSM_MODEL_RENEWINSTANCEREQUEST_H_
#define ALIBABACLOUD_HSM_MODEL_RENEWINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/hsm/HsmExport.h>

namespace AlibabaCloud
{
	namespace Hsm
	{
		namespace Model
		{
			class ALIBABACLOUD_HSM_EXPORT RenewInstanceRequest : public RpcServiceRequest
			{

			public:
				RenewInstanceRequest();
				~RenewInstanceRequest();

				int getPeriod()const;
				void setPeriod(int period);
				std::string getPeriodUnit()const;
				void setPeriodUnit(const std::string& periodUnit);
				std::string getResourceOwnerId()const;
				void setResourceOwnerId(const std::string& resourceOwnerId);
				std::string getInstanceId()const;
				void setInstanceId(const std::string& instanceId);
				std::string getClientToken()const;
				void setClientToken(const std::string& clientToken);

            private:
				int period_;
				std::string periodUnit_;
				std::string resourceOwnerId_;
				std::string instanceId_;
				std::string clientToken_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_HSM_MODEL_RENEWINSTANCEREQUEST_H_