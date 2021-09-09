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

#ifndef ALIBABACLOUD_COMPANYREG_MODEL_UPDATEFEEREQUEST_H_
#define ALIBABACLOUD_COMPANYREG_MODEL_UPDATEFEEREQUEST_H_

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
			class ALIBABACLOUD_COMPANYREG_EXPORT UpdateFeeRequest : public RpcServiceRequest
			{

			public:
				UpdateFeeRequest();
				~UpdateFeeRequest();

				std::string getKind()const;
				void setKind(const std::string& kind);
				std::string getUse()const;
				void setUse(const std::string& use);
				std::string getBaseTotalAmount()const;
				void setBaseTotalAmount(const std::string& baseTotalAmount);
				std::string getPayer()const;
				void setPayer(const std::string& payer);
				std::string getSecondKey()const;
				void setSecondKey(const std::string& secondKey);
				std::string getPayMethod()const;
				void setPayMethod(const std::string& payMethod);
				std::string getFirstKey()const;
				void setFirstKey(const std::string& firstKey);
				std::string getBizId()const;
				void setBizId(const std::string& bizId);
				std::string getFeeType()const;
				void setFeeType(const std::string& feeType);
				long getId()const;
				void setId(long id);

            private:
				std::string kind_;
				std::string use_;
				std::string baseTotalAmount_;
				std::string payer_;
				std::string secondKey_;
				std::string payMethod_;
				std::string firstKey_;
				std::string bizId_;
				std::string feeType_;
				long id_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_COMPANYREG_MODEL_UPDATEFEEREQUEST_H_