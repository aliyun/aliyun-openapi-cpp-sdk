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

#ifndef ALIBABACLOUD_DOMAIN_MODEL_SAVETASKFORUPDATINGREGISTRANTINFOBYREGISTRANTPROFILEIDREQUEST_H_
#define ALIBABACLOUD_DOMAIN_MODEL_SAVETASKFORUPDATINGREGISTRANTINFOBYREGISTRANTPROFILEIDREQUEST_H_

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
			class ALIBABACLOUD_DOMAIN_EXPORT SaveTaskForUpdatingRegistrantInfoByRegistrantProfileIDRequest : public RpcServiceRequest
			{

			public:
				SaveTaskForUpdatingRegistrantInfoByRegistrantProfileIDRequest();
				~SaveTaskForUpdatingRegistrantInfoByRegistrantProfileIDRequest();

				std::string getUserClientIp()const;
				void setUserClientIp(const std::string& userClientIp);
				long getRegistrantProfileId()const;
				void setRegistrantProfileId(long registrantProfileId);
				std::vector<std::string> getDomainName()const;
				void setDomainName(const std::vector<std::string>& domainName);
				bool getTransferOutProhibited()const;
				void setTransferOutProhibited(bool transferOutProhibited);
				std::string getLang()const;
				void setLang(const std::string& lang);

            private:
				std::string userClientIp_;
				long registrantProfileId_;
				std::vector<std::string> domainName_;
				bool transferOutProhibited_;
				std::string lang_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DOMAIN_MODEL_SAVETASKFORUPDATINGREGISTRANTINFOBYREGISTRANTPROFILEIDREQUEST_H_