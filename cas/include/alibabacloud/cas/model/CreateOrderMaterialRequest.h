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

#ifndef ALIBABACLOUD_CAS_MODEL_CREATEORDERMATERIALREQUEST_H_
#define ALIBABACLOUD_CAS_MODEL_CREATEORDERMATERIALREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/cas/CasExport.h>

namespace AlibabaCloud
{
	namespace Cas
	{
		namespace Model
		{
			class ALIBABACLOUD_CAS_EXPORT CreateOrderMaterialRequest : public RpcServiceRequest
			{

			public:
				CreateOrderMaterialRequest();
				~CreateOrderMaterialRequest();

				std::string getLeaderName()const;
				void setLeaderName(const std::string& leaderName);
				std::string getCity()const;
				void setCity(const std::string& city);
				std::string getCountryCode()const;
				void setCountryCode(const std::string& countryCode);
				std::string getLeaderEmail()const;
				void setLeaderEmail(const std::string& leaderEmail);
				std::string getCompanyAddress()const;
				void setCompanyAddress(const std::string& companyAddress);
				std::string getCompanyCode()const;
				void setCompanyCode(const std::string& companyCode);
				std::string getPersonEmail()const;
				void setPersonEmail(const std::string& personEmail);
				std::string getProvince()const;
				void setProvince(const std::string& province);
				int getDomainAuthType()const;
				void setDomainAuthType(int domainAuthType);
				std::string getLeaderPhone()const;
				void setLeaderPhone(const std::string& leaderPhone);
				std::string getSourceIp()const;
				void setSourceIp(const std::string& sourceIp);
				std::string getCsrContent()const;
				void setCsrContent(const std::string& csrContent);
				std::string getLang()const;
				void setLang(const std::string& lang);
				std::string getPersonName()const;
				void setPersonName(const std::string& personName);
				std::string getPersonIdCardNumber()const;
				void setPersonIdCardNumber(const std::string& personIdCardNumber);
				long getOrderId()const;
				void setOrderId(long orderId);
				std::string getLeaderTitle()const;
				void setLeaderTitle(const std::string& leaderTitle);
				std::string getPersonTitle()const;
				void setPersonTitle(const std::string& personTitle);
				std::string getPostCode()const;
				void setPostCode(const std::string& postCode);
				int getCreateCsr()const;
				void setCreateCsr(int createCsr);
				std::string getPersonPhone()const;
				void setPersonPhone(const std::string& personPhone);
				std::string getCompanyName()const;
				void setCompanyName(const std::string& companyName);
				std::string getCompanyPhone()const;
				void setCompanyPhone(const std::string& companyPhone);
				int getCompanyType()const;
				void setCompanyType(int companyType);
				std::string getDomain()const;
				void setDomain(const std::string& domain);
				std::string getPersonDepartment()const;
				void setPersonDepartment(const std::string& personDepartment);

            private:
				std::string leaderName_;
				std::string city_;
				std::string countryCode_;
				std::string leaderEmail_;
				std::string companyAddress_;
				std::string companyCode_;
				std::string personEmail_;
				std::string province_;
				int domainAuthType_;
				std::string leaderPhone_;
				std::string sourceIp_;
				std::string csrContent_;
				std::string lang_;
				std::string personName_;
				std::string personIdCardNumber_;
				long orderId_;
				std::string leaderTitle_;
				std::string personTitle_;
				std::string postCode_;
				int createCsr_;
				std::string personPhone_;
				std::string companyName_;
				std::string companyPhone_;
				int companyType_;
				std::string domain_;
				std::string personDepartment_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CAS_MODEL_CREATEORDERMATERIALREQUEST_H_