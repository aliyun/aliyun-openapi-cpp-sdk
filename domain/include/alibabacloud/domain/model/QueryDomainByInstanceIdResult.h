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

#ifndef ALIBABACLOUD_DOMAIN_MODEL_QUERYDOMAINBYINSTANCEIDRESULT_H_
#define ALIBABACLOUD_DOMAIN_MODEL_QUERYDOMAINBYINSTANCEIDRESULT_H_

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
			class ALIBABACLOUD_DOMAIN_EXPORT QueryDomainByInstanceIdResult : public ServiceResult
			{
			public:


				QueryDomainByInstanceIdResult();
				explicit QueryDomainByInstanceIdResult(const std::string &payload);
				~QueryDomainByInstanceIdResult();
				std::string getRegistrantType()const;
				std::string getRegistrantUpdatingStatus()const;
				std::string getEmail()const;
				std::string getRegistrationDate()const;
				long getRegistrationDateLong()const;
				std::string getDomainName()const;
				std::string getInstanceId()const;
				std::string getRealNameStatus()const;
				std::string getZhRegistrantName()const;
				bool getPremium()const;
				std::string getDomainNameVerificationStatus()const;
				long getExpirationDateLong()const;
				std::vector<std::string> getDnsList()const;
				std::string getExpirationDate()const;
				std::string getRegistrantName()const;
				std::string getTransferOutStatus()const;
				std::string getUserId()const;
				std::string getZhRegistrantOrganization()const;
				bool getEmailVerificationClientHold()const;
				std::string getUpdateProhibitionLock()const;
				int getEmailVerificationStatus()const;
				std::string getRegistrantOrganization()const;
				std::string getTransferProhibitionLock()const;
				bool getDomainNameProxyService()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string registrantType_;
				std::string registrantUpdatingStatus_;
				std::string email_;
				std::string registrationDate_;
				long registrationDateLong_;
				std::string domainName_;
				std::string instanceId_;
				std::string realNameStatus_;
				std::string zhRegistrantName_;
				bool premium_;
				std::string domainNameVerificationStatus_;
				long expirationDateLong_;
				std::vector<std::string> dnsList_;
				std::string expirationDate_;
				std::string registrantName_;
				std::string transferOutStatus_;
				std::string userId_;
				std::string zhRegistrantOrganization_;
				bool emailVerificationClientHold_;
				std::string updateProhibitionLock_;
				int emailVerificationStatus_;
				std::string registrantOrganization_;
				std::string transferProhibitionLock_;
				bool domainNameProxyService_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DOMAIN_MODEL_QUERYDOMAINBYINSTANCEIDRESULT_H_