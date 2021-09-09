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

#ifndef ALIBABACLOUD_COMPANYREG_MODEL_GETINDUSTRYCOMMERCEINFORESULT_H_
#define ALIBABACLOUD_COMPANYREG_MODEL_GETINDUSTRYCOMMERCEINFORESULT_H_

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
			class ALIBABACLOUD_COMPANYREG_EXPORT GetIndustryCommerceInfoResult : public ServiceResult
			{
			public:


				GetIndustryCommerceInfoResult();
				explicit GetIndustryCommerceInfoResult(const std::string &payload);
				~GetIndustryCommerceInfoResult();
				std::string getEstablishmentDate()const;
				std::string getTaxNo()const;
				std::string getOperatingPeriod()const;
				std::string getBizScope()const;
				std::string getCorpAddress()const;
				std::string getCompanyType()const;
				std::string getRegisteredCaptial()const;
				std::string getBusinessStatus()const;
				std::string getLegalRepresentative()const;
				std::string getName()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string establishmentDate_;
				std::string taxNo_;
				std::string operatingPeriod_;
				std::string bizScope_;
				std::string corpAddress_;
				std::string companyType_;
				std::string registeredCaptial_;
				std::string businessStatus_;
				std::string legalRepresentative_;
				std::string name_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_COMPANYREG_MODEL_GETINDUSTRYCOMMERCEINFORESULT_H_