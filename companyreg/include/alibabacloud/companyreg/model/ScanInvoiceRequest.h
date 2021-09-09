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

#ifndef ALIBABACLOUD_COMPANYREG_MODEL_SCANINVOICEREQUEST_H_
#define ALIBABACLOUD_COMPANYREG_MODEL_SCANINVOICEREQUEST_H_

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
			class ALIBABACLOUD_COMPANYREG_EXPORT ScanInvoiceRequest : public RpcServiceRequest
			{

			public:
				ScanInvoiceRequest();
				~ScanInvoiceRequest();

				std::string getDate()const;
				void setDate(const std::string& date);
				std::string getNo()const;
				void setNo(const std::string& no);
				std::string getAmount()const;
				void setAmount(const std::string& amount);
				std::string getCode()const;
				void setCode(const std::string& code);
				std::string getVCode()const;
				void setVCode(const std::string& vCode);
				std::string getBizId()const;
				void setBizId(const std::string& bizId);
				std::string getInvoiceCode()const;
				void setInvoiceCode(const std::string& invoiceCode);

            private:
				std::string date_;
				std::string no_;
				std::string amount_;
				std::string code_;
				std::string vCode_;
				std::string bizId_;
				std::string invoiceCode_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_COMPANYREG_MODEL_SCANINVOICEREQUEST_H_