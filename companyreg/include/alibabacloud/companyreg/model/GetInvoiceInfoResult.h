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

#ifndef ALIBABACLOUD_COMPANYREG_MODEL_GETINVOICEINFORESULT_H_
#define ALIBABACLOUD_COMPANYREG_MODEL_GETINVOICEINFORESULT_H_

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
			class ALIBABACLOUD_COMPANYREG_EXPORT GetInvoiceInfoResult : public ServiceResult
			{
			public:
				struct BuyMethod
				{
					std::string value;
					std::string key;
				};
				struct BuyTarget
				{
					std::string value;
					std::string key;
				};
				struct CustVendorId
				{
					std::string partyName;
				};
				struct FixedAssetType
				{
					std::string value;
					std::string key;
				};
				struct IncomeOutType
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
				struct ShellMethod
				{
					std::string value;
					std::string key;
				};
				struct Use
				{
					std::string value;
					std::string key;
				};
				struct DetailsItem
				{
					struct Product
					{
						long id;
						std::string name;
					};
					Product product;
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


				GetInvoiceInfoResult();
				explicit GetInvoiceInfoResult(const std::string &payload);
				~GetInvoiceInfoResult();
				std::string getBaseTotalAmountWithTax()const;
				std::string getOrgName()const;
				bool getSimulationCertified()const;
				std::vector<AcctgTransList> getVoucherTransList()const;
				BuyTarget getBuyTarget()const;
				std::string getAcctgPeriod()const;
				bool getCanUpdate()const;
				Kind getKind()const;
				ShellMethod getShellMethod()const;
				bool getIsAuth()const;
				std::string getBaseTotalAmountWithoutTax()const;
				std::string getInvoiceCode()const;
				long getCreatedStamp()const;
				long getDueDate()const;
				std::string getElecInvoiceUrl()const;
				long getBizDate()const;
				std::string getPayer()const;
				std::string getTaxNo()const;
				Use getUse()const;
				std::string getComments()const;
				bool getIsFee()const;
				std::string getInvoiceNo()const;
				IncomeOutType getIncomeOutType()const;
				BuyMethod getBuyMethod()const;
				std::string getLabelData()const;
				std::string getType()const;
				std::vector<DetailsItem> getDetails()const;
				std::string getTaxPct()const;
				PayMethod getPayMethod()const;
				std::string getBaseTotalTax()const;
				long getId()const;
				FixedAssetType getFixedAssetType()const;
				bool getIsElectronic()const;
				CustVendorId getCustVendorId()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string baseTotalAmountWithTax_;
				std::string orgName_;
				bool simulationCertified_;
				std::vector<AcctgTransList> voucherTransList_;
				BuyTarget buyTarget_;
				std::string acctgPeriod_;
				bool canUpdate_;
				Kind kind_;
				ShellMethod shellMethod_;
				bool isAuth_;
				std::string baseTotalAmountWithoutTax_;
				std::string invoiceCode_;
				long createdStamp_;
				long dueDate_;
				std::string elecInvoiceUrl_;
				long bizDate_;
				std::string payer_;
				std::string taxNo_;
				Use use_;
				std::string comments_;
				bool isFee_;
				std::string invoiceNo_;
				IncomeOutType incomeOutType_;
				BuyMethod buyMethod_;
				std::string labelData_;
				std::string type_;
				std::vector<DetailsItem> details_;
				std::string taxPct_;
				PayMethod payMethod_;
				std::string baseTotalTax_;
				long id_;
				FixedAssetType fixedAssetType_;
				bool isElectronic_;
				CustVendorId custVendorId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_COMPANYREG_MODEL_GETINVOICEINFORESULT_H_