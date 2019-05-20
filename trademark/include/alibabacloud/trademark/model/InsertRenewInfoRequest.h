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

#ifndef ALIBABACLOUD_TRADEMARK_MODEL_INSERTRENEWINFOREQUEST_H_
#define ALIBABACLOUD_TRADEMARK_MODEL_INSERTRENEWINFOREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/trademark/TrademarkExport.h>

namespace AlibabaCloud
{
	namespace Trademark
	{
		namespace Model
		{
			class ALIBABACLOUD_TRADEMARK_EXPORT InsertRenewInfoRequest : public RpcServiceRequest
			{

			public:
				InsertRenewInfoRequest();
				~InsertRenewInfoRequest();

				std::string getEngName()const;
				void setEngName(const std::string& engName);
				std::string getAddress()const;
				void setAddress(const std::string& address);
				long getRegisterTime()const;
				void setRegisterTime(long registerTime);
				std::string getEngAddress()const;
				void setEngAddress(const std::string& engAddress);
				std::string getName()const;
				void setName(const std::string& name);

            private:
				std::string engName_;
				std::string address_;
				long registerTime_;
				std::string engAddress_;
				std::string name_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_TRADEMARK_MODEL_INSERTRENEWINFOREQUEST_H_