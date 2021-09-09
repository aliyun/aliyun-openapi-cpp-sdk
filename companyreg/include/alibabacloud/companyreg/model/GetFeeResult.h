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

#ifndef ALIBABACLOUD_COMPANYREG_MODEL_GETFEERESULT_H_
#define ALIBABACLOUD_COMPANYREG_MODEL_GETFEERESULT_H_

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
			class ALIBABACLOUD_COMPANYREG_EXPORT GetFeeResult : public ServiceResult
			{
			public:
				struct FeeTypeEnum
				{
					std::string label;
					std::string value;
				};
				struct Kind
				{
					std::string value;
					std::string key;
				};
				struct PayMethod
				{
					std::string value;
					std::string key;
				};
				struct Use
				{
					std::string value;
					std::string key;
				};
				struct AcctgTransList
				{
					struct VoucherTransId
					{
						std::string refVoucherIds;
						long id;
					};
					VoucherTransId voucherTransId;
				};


				GetFeeResult();
				explicit GetFeeResult(const std::string &payload);
				~GetFeeResult();
				std::string getPayer()const;
				Use getUse()const;
				FeeTypeEnum getFeeTypeEnum()const;
				std::string getUrl()const;
				std::string getBaseTotalAmount()const;
				std::string getLabelData()const;
				std::vector<AcctgTransList> getVoucherTransList()const;
				std::string getAcctgPeriod()const;
				bool getCanUpdate()const;
				Kind getKind()const;
				PayMethod getPayMethod()const;
				std::string getBaseTotalAmountWithoutTax()const;
				std::string getBaseTotalTax()const;
				long getId()const;
				long getCreatedStamp()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string payer_;
				Use use_;
				FeeTypeEnum feeTypeEnum_;
				std::string url_;
				std::string baseTotalAmount_;
				std::string labelData_;
				std::vector<AcctgTransList> voucherTransList_;
				std::string acctgPeriod_;
				bool canUpdate_;
				Kind kind_;
				PayMethod payMethod_;
				std::string baseTotalAmountWithoutTax_;
				std::string baseTotalTax_;
				long id_;
				long createdStamp_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_COMPANYREG_MODEL_GETFEERESULT_H_