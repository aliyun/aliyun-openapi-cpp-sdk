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

#ifndef ALIBABACLOUD_DOMAIN_MODEL_QUERYREGISTRANTPROFILESREQUEST_H_
#define ALIBABACLOUD_DOMAIN_MODEL_QUERYREGISTRANTPROFILESREQUEST_H_

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
			class ALIBABACLOUD_DOMAIN_EXPORT QueryRegistrantProfilesRequest : public RpcServiceRequest
			{

			public:
				QueryRegistrantProfilesRequest();
				~QueryRegistrantProfilesRequest();

				std::string getRegistrantOrganization()const;
				void setRegistrantOrganization(const std::string& registrantOrganization);
				std::string getUserClientIp()const;
				void setUserClientIp(const std::string& userClientIp);
				long getRegistrantProfileId()const;
				void setRegistrantProfileId(long registrantProfileId);
				int getPageSize()const;
				void setPageSize(int pageSize);
				std::string getRegistrantType()const;
				void setRegistrantType(const std::string& registrantType);
				std::string getRegistrantProfileType()const;
				void setRegistrantProfileType(const std::string& registrantProfileType);
				std::string getRealNameStatus()const;
				void setRealNameStatus(const std::string& realNameStatus);
				std::string getLang()const;
				void setLang(const std::string& lang);
				int getPageNum()const;
				void setPageNum(int pageNum);
				bool getDefaultRegistrantProfile()const;
				void setDefaultRegistrantProfile(bool defaultRegistrantProfile);
				std::string getEmail()const;
				void setEmail(const std::string& email);
				std::string getZhRegistrantOrganization()const;
				void setZhRegistrantOrganization(const std::string& zhRegistrantOrganization);

            private:
				std::string registrantOrganization_;
				std::string userClientIp_;
				long registrantProfileId_;
				int pageSize_;
				std::string registrantType_;
				std::string registrantProfileType_;
				std::string realNameStatus_;
				std::string lang_;
				int pageNum_;
				bool defaultRegistrantProfile_;
				std::string email_;
				std::string zhRegistrantOrganization_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DOMAIN_MODEL_QUERYREGISTRANTPROFILESREQUEST_H_