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

#ifndef ALIBABACLOUD_COMPANYREG_MODEL_GETENTERPRISESINFORESULT_H_
#define ALIBABACLOUD_COMPANYREG_MODEL_GETENTERPRISESINFORESULT_H_

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
			class ALIBABACLOUD_COMPANYREG_EXPORT GetEnterprisesInfoResult : public ServiceResult
			{
			public:


				GetEnterprisesInfoResult();
				explicit GetEnterprisesInfoResult(const std::string &payload);
				~GetEnterprisesInfoResult();
				std::string getEnterpriseType()const;
				std::string getToBusinessTerm()const;
				std::string getTaxNo()const;
				std::string getAddress()const;
				std::string getIndustryCode()const;
				std::string getBusinessScope()const;
				std::string getFromBusinessTerm()const;
				std::string getChangeDate()const;
				std::string getRegCityName()const;
				std::string getEstablishDate()const;
				std::string getEntityType()const;
				std::string getAreaName()const;
				std::string getCorporation()const;
				std::string getRegisteredCapital()const;
				std::string getEnterpriseName()const;
				std::string getIndustryCoName()const;
				std::string getEnterpriseStatus()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string enterpriseType_;
				std::string toBusinessTerm_;
				std::string taxNo_;
				std::string address_;
				std::string industryCode_;
				std::string businessScope_;
				std::string fromBusinessTerm_;
				std::string changeDate_;
				std::string regCityName_;
				std::string establishDate_;
				std::string entityType_;
				std::string areaName_;
				std::string corporation_;
				std::string registeredCapital_;
				std::string enterpriseName_;
				std::string industryCoName_;
				std::string enterpriseStatus_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_COMPANYREG_MODEL_GETENTERPRISESINFORESULT_H_