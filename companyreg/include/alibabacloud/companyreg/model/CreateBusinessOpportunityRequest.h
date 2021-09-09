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

#ifndef ALIBABACLOUD_COMPANYREG_MODEL_CREATEBUSINESSOPPORTUNITYREQUEST_H_
#define ALIBABACLOUD_COMPANYREG_MODEL_CREATEBUSINESSOPPORTUNITYREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/companyreg/CompanyregExport.h>

namespace AlibabaCloud
{
	namespace Companyreg
	{
		namespace Model
		{
			class ALIBABACLOUD_COMPANYREG_EXPORT CreateBusinessOpportunityRequest : public RpcServiceRequest
			{

			public:
				CreateBusinessOpportunityRequest();
				~CreateBusinessOpportunityRequest();

				std::string getMobile()const;
				void setMobile(const std::string& mobile);
				int getSource()const;
				void setSource(int source);
				std::string getVCode()const;
				void setVCode(const std::string& vCode);
				std::string getContactName()const;
				void setContactName(const std::string& contactName);
				std::string getBizType()const;
				void setBizType(const std::string& bizType);

            private:
				std::string mobile_;
				int source_;
				std::string vCode_;
				std::string contactName_;
				std::string bizType_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_COMPANYREG_MODEL_CREATEBUSINESSOPPORTUNITYREQUEST_H_