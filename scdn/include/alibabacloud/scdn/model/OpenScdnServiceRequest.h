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

#ifndef ALIBABACLOUD_SCDN_MODEL_OPENSCDNSERVICEREQUEST_H_
#define ALIBABACLOUD_SCDN_MODEL_OPENSCDNSERVICEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/scdn/ScdnExport.h>

namespace AlibabaCloud
{
	namespace Scdn
	{
		namespace Model
		{
			class ALIBABACLOUD_SCDN_EXPORT OpenScdnServiceRequest : public RpcServiceRequest
			{

			public:
				OpenScdnServiceRequest();
				~OpenScdnServiceRequest();

				std::string getEndDate()const;
				void setEndDate(const std::string& endDate);
				std::string getSecurityToken()const;
				void setSecurityToken(const std::string& securityToken);
				int getBandwidth()const;
				void setBandwidth(int bandwidth);
				int getDomainCount()const;
				void setDomainCount(int domainCount);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getProtectType()const;
				void setProtectType(const std::string& protectType);
				std::string getStartDate()const;
				void setStartDate(const std::string& startDate);
				int getElasticProtection()const;
				void setElasticProtection(int elasticProtection);
				int getDDoSBasic()const;
				void setDDoSBasic(int dDoSBasic);
				int getCcProtection()const;
				void setCcProtection(int ccProtection);

            private:
				std::string endDate_;
				std::string securityToken_;
				int bandwidth_;
				int domainCount_;
				long ownerId_;
				std::string protectType_;
				std::string startDate_;
				int elasticProtection_;
				int dDoSBasic_;
				int ccProtection_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SCDN_MODEL_OPENSCDNSERVICEREQUEST_H_