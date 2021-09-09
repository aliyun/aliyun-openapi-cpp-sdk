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

#ifndef ALIBABACLOUD_COMPANYREG_MODEL_GETPAYROLLINFORESULT_H_
#define ALIBABACLOUD_COMPANYREG_MODEL_GETPAYROLLINFORESULT_H_

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
			class ALIBABACLOUD_COMPANYREG_EXPORT GetPayrollInfoResult : public ServiceResult
			{
			public:


				GetPayrollInfoResult();
				explicit GetPayrollInfoResult(const std::string &payload);
				~GetPayrollInfoResult();
				std::string getCorpInjuryInsurance()const;
				std::string getCorpMedicalInsurance()const;
				std::string getIncome()const;
				std::string getCorporateSocialInsurance()const;
				std::string getPeriod()const;
				std::string getPersUnemploymentInsurance()const;
				std::string getName()const;
				std::string getCorpMaternityInsurance()const;
				std::string getPersonSocialInsurance()const;
				std::string getPersonHousingAccumulationFund()const;
				std::string getPhone()const;
				std::string getCorpUnemploymentInsurance()const;
				std::string getPersPension()const;
				std::string getPersMedicalInsurance()const;
				long getId()const;
				std::string getCorpPension()const;
				std::string getEmployeeTime()const;
				std::string getIdNo()const;
				std::string getCorporateHousingAccumulationFund()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string corpInjuryInsurance_;
				std::string corpMedicalInsurance_;
				std::string income_;
				std::string corporateSocialInsurance_;
				std::string period_;
				std::string persUnemploymentInsurance_;
				std::string name_;
				std::string corpMaternityInsurance_;
				std::string personSocialInsurance_;
				std::string personHousingAccumulationFund_;
				std::string phone_;
				std::string corpUnemploymentInsurance_;
				std::string persPension_;
				std::string persMedicalInsurance_;
				long id_;
				std::string corpPension_;
				std::string employeeTime_;
				std::string idNo_;
				std::string corporateHousingAccumulationFund_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_COMPANYREG_MODEL_GETPAYROLLINFORESULT_H_