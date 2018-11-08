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

#ifndef ALIBABACLOUD_DOMAIN_MODEL_REGISTRANTPROFILEREALNAMEVERIFICATIONREQUEST_H_
#define ALIBABACLOUD_DOMAIN_MODEL_REGISTRANTPROFILEREALNAMEVERIFICATIONREQUEST_H_

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
			class ALIBABACLOUD_DOMAIN_EXPORT RegistrantProfileRealNameVerificationRequest : public RpcServiceRequest
			{

			public:
				RegistrantProfileRealNameVerificationRequest();
				~RegistrantProfileRealNameVerificationRequest();

				std::string getIdentityCredentialType()const;
				void setIdentityCredentialType(const std::string& identityCredentialType);
				std::string getUserClientIp()const;
				void setUserClientIp(const std::string& userClientIp);
				long getRegistrantProfileID()const;
				void setRegistrantProfileID(long registrantProfileID);
				std::string getIdentityCredential()const;
				void setIdentityCredential(const std::string& identityCredential);
				std::string getLang()const;
				void setLang(const std::string& lang);
				std::string getIdentityCredentialNo()const;
				void setIdentityCredentialNo(const std::string& identityCredentialNo);

            private:
				std::string identityCredentialType_;
				std::string userClientIp_;
				long registrantProfileID_;
				std::string identityCredential_;
				std::string lang_;
				std::string identityCredentialNo_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DOMAIN_MODEL_REGISTRANTPROFILEREALNAMEVERIFICATIONREQUEST_H_