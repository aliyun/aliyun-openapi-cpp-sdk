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

#ifndef ALIBABACLOUD_COMPANYREG_MODEL_UPDATECUSTOMERINFOREQUEST_H_
#define ALIBABACLOUD_COMPANYREG_MODEL_UPDATECUSTOMERINFOREQUEST_H_

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
			class ALIBABACLOUD_COMPANYREG_EXPORT UpdateCustomerInfoRequest : public RpcServiceRequest
			{

			public:
				UpdateCustomerInfoRequest();
				~UpdateCustomerInfoRequest();

				std::string getContactTelInfo()const;
				void setContactTelInfo(const std::string& contactTelInfo);
				std::string getTaxPreparerName()const;
				void setTaxPreparerName(const std::string& taxPreparerName);
				std::string getTaxAgentSecret()const;
				void setTaxAgentSecret(const std::string& taxAgentSecret);
				std::string getLegalRepresentative()const;
				void setLegalRepresentative(const std::string& legalRepresentative);
				std::string getTaxPreparerPassword()const;
				void setTaxPreparerPassword(const std::string& taxPreparerPassword);
				std::string getEstablishmentDate()const;
				void setEstablishmentDate(const std::string& establishmentDate);
				std::string getContactName()const;
				void setContactName(const std::string& contactName);
				std::string getBizScope()const;
				void setBizScope(const std::string& bizScope);
				std::string getIncomeDeclarationPassword()const;
				void setIncomeDeclarationPassword(const std::string& incomeDeclarationPassword);
				std::string getCompanyType()const;
				void setCompanyType(const std::string& companyType);
				std::string getCorpAddress()const;
				void setCorpAddress(const std::string& corpAddress);
				std::string getBizId()const;
				void setBizId(const std::string& bizId);
				std::string getName()const;
				void setName(const std::string& name);
				bool getIsRefreshInfo()const;
				void setIsRefreshInfo(bool isRefreshInfo);
				std::string getRegisteredCapital()const;
				void setRegisteredCapital(const std::string& registeredCapital);
				std::string getOperatingPeriod()const;
				void setOperatingPeriod(const std::string& operatingPeriod);

            private:
				std::string contactTelInfo_;
				std::string taxPreparerName_;
				std::string taxAgentSecret_;
				std::string legalRepresentative_;
				std::string taxPreparerPassword_;
				std::string establishmentDate_;
				std::string contactName_;
				std::string bizScope_;
				std::string incomeDeclarationPassword_;
				std::string companyType_;
				std::string corpAddress_;
				std::string bizId_;
				std::string name_;
				bool isRefreshInfo_;
				std::string registeredCapital_;
				std::string operatingPeriod_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_COMPANYREG_MODEL_UPDATECUSTOMERINFOREQUEST_H_