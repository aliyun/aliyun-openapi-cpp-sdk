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

#ifndef ALIBABACLOUD_COMPANYREG_MODEL_LISTINVOICERESULT_H_
#define ALIBABACLOUD_COMPANYREG_MODEL_LISTINVOICERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/companyreg/CompanyregExport.h>

namespace AlibabaCloud
{
	namespace Companyreg
	{
		namespace Model
		{
			class ALIBABACLOUD_COMPANYREG_EXPORT ListInvoiceResult : public ServiceResult
			{
			public:
				struct DataItem
				{
					bool isSaveVoucher;
					std::string type;
					std::string productName;
					bool use;
					std::string amount;
					std::string invoiceNo;
					std::string orgName;
					std::string tax;
					std::string taxAndAmount;
					long id;
					std::string date;
					std::string url;
				};


				ListInvoiceResult();
				explicit ListInvoiceResult(const std::string &payload);
				~ListInvoiceResult();
				std::string getAmount()const;
				std::vector<DataItem> getData()const;
				int getCount()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string amount_;
				std::vector<DataItem> data_;
				int count_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_COMPANYREG_MODEL_LISTINVOICERESULT_H_