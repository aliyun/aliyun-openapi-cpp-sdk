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

#ifndef ALIBABACLOUD_DOMAIN_MODEL_SAVEREGISTRANTPROFILEREQUEST_H_
#define ALIBABACLOUD_DOMAIN_MODEL_SAVEREGISTRANTPROFILEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/domain/DomainExport.h>

namespace AlibabaCloud
{
	namespace Domain
	{
		namespace Model
		{
			class ALIBABACLOUD_DOMAIN_EXPORT SaveRegistrantProfileRequest : public RpcServiceRequest
			{

			public:
				SaveRegistrantProfileRequest();
				~SaveRegistrantProfileRequest();

				std::string getCountry()const;
				void setCountry(const std::string& country);
				std::string getAddress()const;
				void setAddress(const std::string& address);
				std::string getTelArea()const;
				void setTelArea(const std::string& telArea);
				std::string getCity()const;
				void setCity(const std::string& city);
				long getRegistrantProfileId()const;
				void setRegistrantProfileId(long registrantProfileId);
				std::string getZhAddress()const;
				void setZhAddress(const std::string& zhAddress);
				std::string getRegistrantType()const;
				void setRegistrantType(const std::string& registrantType);
				std::string getRegistrantProfileType()const;
				void setRegistrantProfileType(const std::string& registrantProfileType);
				std::string getTelephone()const;
				void setTelephone(const std::string& telephone);
				bool getDefaultRegistrantProfile()const;
				void setDefaultRegistrantProfile(bool defaultRegistrantProfile);
				std::string getZhCity()const;
				void setZhCity(const std::string& zhCity);
				std::string getZhProvince()const;
				void setZhProvince(const std::string& zhProvince);
				std::string getRegistrantOrganization()const;
				void setRegistrantOrganization(const std::string& registrantOrganization);
				std::string getTelExt()const;
				void setTelExt(const std::string& telExt);
				std::string getProvince()const;
				void setProvince(const std::string& province);
				std::string getZhRegistrantName()const;
				void setZhRegistrantName(const std::string& zhRegistrantName);
				std::string getPostalCode()const;
				void setPostalCode(const std::string& postalCode);
				std::string getUserClientIp()const;
				void setUserClientIp(const std::string& userClientIp);
				std::string getLang()const;
				void setLang(const std::string& lang);
				std::string getEmail()const;
				void setEmail(const std::string& email);
				std::string getRegistrantName()const;
				void setRegistrantName(const std::string& registrantName);
				std::string getZhRegistrantOrganization()const;
				void setZhRegistrantOrganization(const std::string& zhRegistrantOrganization);

            private:
				std::string country_;
				std::string address_;
				std::string telArea_;
				std::string city_;
				long registrantProfileId_;
				std::string zhAddress_;
				std::string registrantType_;
				std::string registrantProfileType_;
				std::string telephone_;
				bool defaultRegistrantProfile_;
				std::string zhCity_;
				std::string zhProvince_;
				std::string registrantOrganization_;
				std::string telExt_;
				std::string province_;
				std::string zhRegistrantName_;
				std::string postalCode_;
				std::string userClientIp_;
				std::string lang_;
				std::string email_;
				std::string registrantName_;
				std::string zhRegistrantOrganization_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DOMAIN_MODEL_SAVEREGISTRANTPROFILEREQUEST_H_