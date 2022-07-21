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

#ifndef ALIBABACLOUD_DOMAIN_MODEL_QUERYCONTACTINFORESULT_H_
#define ALIBABACLOUD_DOMAIN_MODEL_QUERYCONTACTINFORESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/domain/DomainExport.h>

namespace AlibabaCloud
{
	namespace Domain
	{
		namespace Model
		{
			class ALIBABACLOUD_DOMAIN_EXPORT QueryContactInfoResult : public ServiceResult
			{
			public:


				QueryContactInfoResult();
				explicit QueryContactInfoResult(const std::string &payload);
				~QueryContactInfoResult();
				std::string getZhProvince()const;
				std::string getEmail()const;
				std::string getTelephone()const;
				std::string getAddress()const;
				std::string getPostalCode()const;
				std::string getZhRegistrantName()const;
				std::string getCity()const;
				std::string getCreateDate()const;
				std::string getProvince()const;
				std::string getZhCity()const;
				std::string getRegistrantName()const;
				std::string getZhRegistrantOrganization()const;
				std::string getCountry()const;
				std::string getRegistrantOrganization()const;
				std::string getTelExt()const;
				std::string getTelArea()const;
				std::string getZhAddress()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string zhProvince_;
				std::string email_;
				std::string telephone_;
				std::string address_;
				std::string postalCode_;
				std::string zhRegistrantName_;
				std::string city_;
				std::string createDate_;
				std::string province_;
				std::string zhCity_;
				std::string registrantName_;
				std::string zhRegistrantOrganization_;
				std::string country_;
				std::string registrantOrganization_;
				std::string telExt_;
				std::string telArea_;
				std::string zhAddress_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DOMAIN_MODEL_QUERYCONTACTINFORESULT_H_