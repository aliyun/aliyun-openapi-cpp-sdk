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

#ifndef ALIBABACLOUD_CAS_MODEL_DESCRIBEORDERMATERIALRESULT_H_
#define ALIBABACLOUD_CAS_MODEL_DESCRIBEORDERMATERIALRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/cas/CasExport.h>

namespace AlibabaCloud
{
	namespace Cas
	{
		namespace Model
		{
			class ALIBABACLOUD_CAS_EXPORT DescribeOrderMaterialResult : public ServiceResult
			{
			public:


				DescribeOrderMaterialResult();
				explicit DescribeOrderMaterialResult(const std::string &payload);
				~DescribeOrderMaterialResult();
				std::string getPersonName()const;
				int getDomainAuthType()const;
				std::string getPersonIdCardNumber()const;
				std::string getLeaderName()const;
				std::string getCompanyEmail()const;
				std::string getPersonPhone()const;
				int getCompanyType()const;
				std::string getCity()const;
				std::string getLeaderEmail()const;
				std::string getProvince()const;
				std::string getPersonTitle()const;
				std::string getCompanyAddress()const;
				std::string getCompanyName()const;
				std::string getPersonDepartment()const;
				int getCreateCsr()const;
				std::string getCsrContent()const;
				std::string getPostCode()const;
				std::string getCountryCode()const;
				std::string getDomain()const;
				std::string getPersonEmail()const;
				std::string getLeaderPhone()const;
				std::string getCompanyPhone()const;
				std::string getCompanyCode()const;
				std::string getLeaderTitle()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string personName_;
				int domainAuthType_;
				std::string personIdCardNumber_;
				std::string leaderName_;
				std::string companyEmail_;
				std::string personPhone_;
				int companyType_;
				std::string city_;
				std::string leaderEmail_;
				std::string province_;
				std::string personTitle_;
				std::string companyAddress_;
				std::string companyName_;
				std::string personDepartment_;
				int createCsr_;
				std::string csrContent_;
				std::string postCode_;
				std::string countryCode_;
				std::string domain_;
				std::string personEmail_;
				std::string leaderPhone_;
				std::string companyPhone_;
				std::string companyCode_;
				std::string leaderTitle_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CAS_MODEL_DESCRIBEORDERMATERIALRESULT_H_