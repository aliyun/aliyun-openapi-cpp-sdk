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

#ifndef ALIBABACLOUD_COMPANYREG_MODEL_CONVERTINVOICEREQUEST_H_
#define ALIBABACLOUD_COMPANYREG_MODEL_CONVERTINVOICEREQUEST_H_

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
			class ALIBABACLOUD_COMPANYREG_EXPORT ConvertInvoiceRequest : public RpcServiceRequest
			{

			public:
				ConvertInvoiceRequest();
				~ConvertInvoiceRequest();

				bool getIsFee()const;
				void setIsFee(bool isFee);
				std::string getShellMethod()const;
				void setShellMethod(const std::string& shellMethod);
				std::string getKind()const;
				void setKind(const std::string& kind);
				std::string getUse()const;
				void setUse(const std::string& use);
				std::string getThirdKey()const;
				void setThirdKey(const std::string& thirdKey);
				std::string getPayer()const;
				void setPayer(const std::string& payer);
				std::string getSecondKey()const;
				void setSecondKey(const std::string& secondKey);
				std::string getPayMethod()const;
				void setPayMethod(const std::string& payMethod);
				std::string getBuyMethod()const;
				void setBuyMethod(const std::string& buyMethod);
				std::string getFixedAssetType()const;
				void setFixedAssetType(const std::string& fixedAssetType);
				std::string getFirstKey()const;
				void setFirstKey(const std::string& firstKey);
				std::string getBizId()const;
				void setBizId(const std::string& bizId);
				long getId()const;
				void setId(long id);
				std::string getBuyTarget()const;
				void setBuyTarget(const std::string& buyTarget);

            private:
				bool isFee_;
				std::string shellMethod_;
				std::string kind_;
				std::string use_;
				std::string thirdKey_;
				std::string payer_;
				std::string secondKey_;
				std::string payMethod_;
				std::string buyMethod_;
				std::string fixedAssetType_;
				std::string firstKey_;
				std::string bizId_;
				long id_;
				std::string buyTarget_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_COMPANYREG_MODEL_CONVERTINVOICEREQUEST_H_