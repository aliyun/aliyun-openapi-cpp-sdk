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

#ifndef ALIBABACLOUD_DOMAIN_MODEL_QUERYEMAILVERIFICATIONRESULT_H_
#define ALIBABACLOUD_DOMAIN_MODEL_QUERYEMAILVERIFICATIONRESULT_H_

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
			class ALIBABACLOUD_DOMAIN_EXPORT QueryEmailVerificationResult : public ServiceResult
			{
			public:


				QueryEmailVerificationResult();
				explicit QueryEmailVerificationResult(const std::string &payload);
				~QueryEmailVerificationResult();
				int getVerificationStatus()const;
				std::string getGmtCreate()const;
				std::string getEmail()const;
				std::string getEmailVerificationNo()const;
				std::string getConfirmIp()const;
				std::string getUserId()const;
				std::string getGmtModified()const;
				std::string getSendIp()const;
				std::string getVerificationTime()const;
				std::string getTokenSendTime()const;

			protected:
				void parse(const std::string &payload);
			private:
				int verificationStatus_;
				std::string gmtCreate_;
				std::string email_;
				std::string emailVerificationNo_;
				std::string confirmIp_;
				std::string userId_;
				std::string gmtModified_;
				std::string sendIp_;
				std::string verificationTime_;
				std::string tokenSendTime_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DOMAIN_MODEL_QUERYEMAILVERIFICATIONRESULT_H_