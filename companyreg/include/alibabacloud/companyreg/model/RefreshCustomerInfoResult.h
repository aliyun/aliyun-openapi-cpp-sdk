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

#ifndef ALIBABACLOUD_COMPANYREG_MODEL_REFRESHCUSTOMERINFORESULT_H_
#define ALIBABACLOUD_COMPANYREG_MODEL_REFRESHCUSTOMERINFORESULT_H_

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
			class ALIBABACLOUD_COMPANYREG_EXPORT RefreshCustomerInfoResult : public ServiceResult
			{
			public:


				RefreshCustomerInfoResult();
				explicit RefreshCustomerInfoResult(const std::string &payload);
				~RefreshCustomerInfoResult();
				std::string getEstablishmentDate()const;
				std::string getTaxNo()const;
				std::string getTaxiationAgentSecret()const;
				std::string getBizScope()const;
				std::string getCorpAddress()const;
				std::string getOrgName()const;
				std::string getCompanyType()const;
				std::string getExternalUniqueId()const;
				std::string getRegisteredCaptial()const;
				std::string getLegalRepresentative()const;
				std::string getIncomeDeclarationPsw()const;
				long getTenantId()const;
				std::string getTaxArea()const;
				std::string getTaxTypes()const;
				std::string getTaxPreparerPsw()const;
				std::string getTaxPreparerName()const;
				std::string getAcctgSystem()const;
				std::string getTaxpayerType()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string establishmentDate_;
				std::string taxNo_;
				std::string taxiationAgentSecret_;
				std::string bizScope_;
				std::string corpAddress_;
				std::string orgName_;
				std::string companyType_;
				std::string externalUniqueId_;
				std::string registeredCaptial_;
				std::string legalRepresentative_;
				std::string incomeDeclarationPsw_;
				long tenantId_;
				std::string taxArea_;
				std::string taxTypes_;
				std::string taxPreparerPsw_;
				std::string taxPreparerName_;
				std::string acctgSystem_;
				std::string taxpayerType_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_COMPANYREG_MODEL_REFRESHCUSTOMERINFORESULT_H_