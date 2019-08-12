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

#ifndef ALIBABACLOUD_DOMAIN_MODEL_LISTEMAILVERIFICATIONREQUEST_H_
#define ALIBABACLOUD_DOMAIN_MODEL_LISTEMAILVERIFICATIONREQUEST_H_

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
			class ALIBABACLOUD_DOMAIN_EXPORT ListEmailVerificationRequest : public RpcServiceRequest
			{

			public:
				ListEmailVerificationRequest();
				~ListEmailVerificationRequest();

				long getBeginCreateTime()const;
				void setBeginCreateTime(long beginCreateTime);
				long getEndCreateTime()const;
				void setEndCreateTime(long endCreateTime);
				int getPageSize()const;
				void setPageSize(int pageSize);
				std::string getUserClientIp()const;
				void setUserClientIp(const std::string& userClientIp);
				std::string getLang()const;
				void setLang(const std::string& lang);
				int getPageNum()const;
				void setPageNum(int pageNum);
				std::string getEmail()const;
				void setEmail(const std::string& email);
				int getVerificationStatus()const;
				void setVerificationStatus(int verificationStatus);

            private:
				long beginCreateTime_;
				long endCreateTime_;
				int pageSize_;
				std::string userClientIp_;
				std::string lang_;
				int pageNum_;
				std::string email_;
				int verificationStatus_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DOMAIN_MODEL_LISTEMAILVERIFICATIONREQUEST_H_