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

#ifndef ALIBABACLOUD_BSSOPENAPI_MODEL_APPLYINVOICEREQUEST_H_
#define ALIBABACLOUD_BSSOPENAPI_MODEL_APPLYINVOICEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/bssopenapi/BssOpenApiExport.h>

namespace AlibabaCloud
{
	namespace BssOpenApi
	{
		namespace Model
		{
			class ALIBABACLOUD_BSSOPENAPI_EXPORT ApplyInvoiceRequest : public RpcServiceRequest
			{

			public:
				ApplyInvoiceRequest();
				~ApplyInvoiceRequest();

				int getInvoicingType()const;
				void setInvoicingType(int invoicingType);
				std::string getApplyUserNick()const;
				void setApplyUserNick(const std::string& applyUserNick);
				bool getInvoiceByAmount()const;
				void setInvoiceByAmount(bool invoiceByAmount);
				long getCustomerId()const;
				void setCustomerId(long customerId);
				std::vector<long> getSelectedIds()const;
				void setSelectedIds(const std::vector<long>& selectedIds);
				int getProcessWay()const;
				void setProcessWay(int processWay);
				long getCallerBid()const;
				void setCallerBid(long callerBid);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				long getInvoiceAmount()const;
				void setInvoiceAmount(long invoiceAmount);
				long getAddressId()const;
				void setAddressId(long addressId);
				long getCallerUid()const;
				void setCallerUid(long callerUid);

            private:
				int invoicingType_;
				std::string applyUserNick_;
				bool invoiceByAmount_;
				long customerId_;
				std::vector<long> selectedIds_;
				int processWay_;
				long callerBid_;
				long ownerId_;
				long invoiceAmount_;
				long addressId_;
				long callerUid_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_BSSOPENAPI_MODEL_APPLYINVOICEREQUEST_H_