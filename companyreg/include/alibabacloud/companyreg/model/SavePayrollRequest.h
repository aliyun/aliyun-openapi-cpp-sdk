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

#ifndef ALIBABACLOUD_COMPANYREG_MODEL_SAVEPAYROLLREQUEST_H_
#define ALIBABACLOUD_COMPANYREG_MODEL_SAVEPAYROLLREQUEST_H_

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
			class ALIBABACLOUD_COMPANYREG_EXPORT SavePayrollRequest : public RpcServiceRequest
			{

			public:
				SavePayrollRequest();
				~SavePayrollRequest();

				std::string getIncome()const;
				void setIncome(const std::string& income);
				std::string getCorporateHousingAccumulationFund()const;
				void setCorporateHousingAccumulationFund(const std::string& corporateHousingAccumulationFund);
				std::string getPeriod()const;
				void setPeriod(const std::string& period);
				std::string getCorporateSocialInsurance()const;
				void setCorporateSocialInsurance(const std::string& corporateSocialInsurance);
				std::string getIdNo()const;
				void setIdNo(const std::string& idNo);
				std::string getEmployeeTime()const;
				void setEmployeeTime(const std::string& employeeTime);
				std::string getPersonHousingAccumulationFund()const;
				void setPersonHousingAccumulationFund(const std::string& personHousingAccumulationFund);
				std::string getPhone()const;
				void setPhone(const std::string& phone);
				std::string getBizId()const;
				void setBizId(const std::string& bizId);
				std::string getName()const;
				void setName(const std::string& name);
				long getId()const;
				void setId(long id);
				std::string getPersonSocialInsurance()const;
				void setPersonSocialInsurance(const std::string& personSocialInsurance);

            private:
				std::string income_;
				std::string corporateHousingAccumulationFund_;
				std::string period_;
				std::string corporateSocialInsurance_;
				std::string idNo_;
				std::string employeeTime_;
				std::string personHousingAccumulationFund_;
				std::string phone_;
				std::string bizId_;
				std::string name_;
				long id_;
				std::string personSocialInsurance_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_COMPANYREG_MODEL_SAVEPAYROLLREQUEST_H_