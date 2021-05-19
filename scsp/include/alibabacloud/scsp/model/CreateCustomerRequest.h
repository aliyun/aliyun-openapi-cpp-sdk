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

#ifndef ALIBABACLOUD_SCSP_MODEL_CREATECUSTOMERREQUEST_H_
#define ALIBABACLOUD_SCSP_MODEL_CREATECUSTOMERREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/scsp/ScspExport.h>

namespace AlibabaCloud
{
	namespace Scsp
	{
		namespace Model
		{
			class ALIBABACLOUD_SCSP_EXPORT CreateCustomerRequest : public RpcServiceRequest
			{

			public:
				CreateCustomerRequest();
				~CreateCustomerRequest();

				std::string getIndustry()const;
				void setIndustry(const std::string& industry);
				int getOuterIdType()const;
				void setOuterIdType(int outerIdType);
				std::string getDingding()const;
				void setDingding(const std::string& dingding);
				std::string getBizType()const;
				void setBizType(const std::string& bizType);
				std::string getTypeCode()const;
				void setTypeCode(const std::string& typeCode);
				std::string getInstanceId()const;
				void setInstanceId(const std::string& instanceId);
				std::string getContacter()const;
				void setContacter(const std::string& contacter);
				long getProdLineId()const;
				void setProdLineId(long prodLineId);
				std::string getPhone()const;
				void setPhone(const std::string& phone);
				std::string getName()const;
				void setName(const std::string& name);
				std::string getManagerName()const;
				void setManagerName(const std::string& managerName);
				std::string getOuterId()const;
				void setOuterId(const std::string& outerId);
				std::string getPosition()const;
				void setPosition(const std::string& position);
				std::string getEmail()const;
				void setEmail(const std::string& email);

            private:
				std::string industry_;
				int outerIdType_;
				std::string dingding_;
				std::string bizType_;
				std::string typeCode_;
				std::string instanceId_;
				std::string contacter_;
				long prodLineId_;
				std::string phone_;
				std::string name_;
				std::string managerName_;
				std::string outerId_;
				std::string position_;
				std::string email_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SCSP_MODEL_CREATECUSTOMERREQUEST_H_