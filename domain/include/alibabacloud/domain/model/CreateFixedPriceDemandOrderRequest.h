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

#ifndef ALIBABACLOUD_DOMAIN_MODEL_CREATEFIXEDPRICEDEMANDORDERREQUEST_H_
#define ALIBABACLOUD_DOMAIN_MODEL_CREATEFIXEDPRICEDEMANDORDERREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/domain/DomainExport.h>

namespace AlibabaCloud
{
	namespace Domain
	{
		namespace Model
		{
			class ALIBABACLOUD_DOMAIN_EXPORT CreateFixedPriceDemandOrderRequest : public RpcServiceRequest
			{

			public:
				CreateFixedPriceDemandOrderRequest();
				~CreateFixedPriceDemandOrderRequest();

				std::string getCode()const;
				void setCode(const std::string& code);
				std::string getContactId()const;
				void setContactId(const std::string& contactId);
				std::string getDomain()const;
				void setDomain(const std::string& domain);
				std::string getSource()const;
				void setSource(const std::string& source);

            private:
				std::string code_;
				std::string contactId_;
				std::string domain_;
				std::string source_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DOMAIN_MODEL_CREATEFIXEDPRICEDEMANDORDERREQUEST_H_