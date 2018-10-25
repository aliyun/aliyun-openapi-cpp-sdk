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

#ifndef ALIBABACLOUD_DOMAIN_MODEL_LISTSERVERLOCKREQUEST_H_
#define ALIBABACLOUD_DOMAIN_MODEL_LISTSERVERLOCKREQUEST_H_

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
			class ALIBABACLOUD_DOMAIN_EXPORT ListServerLockRequest : public RpcServiceRequest
			{

			public:
				ListServerLockRequest();
				~ListServerLockRequest();

				std::string getLockProductId()const;
				void setLockProductId(const std::string& lockProductId);
				long getEndStartDate()const;
				void setEndStartDate(long endStartDate);
				int getServerLockStatus()const;
				void setServerLockStatus(int serverLockStatus);
				long getStartExpireDate()const;
				void setStartExpireDate(long startExpireDate);
				std::string getDomainName()const;
				void setDomainName(const std::string& domainName);
				int getPageSize()const;
				void setPageSize(int pageSize);
				std::string getUserClientIp()const;
				void setUserClientIp(const std::string& userClientIp);
				long getEndExpireDate()const;
				void setEndExpireDate(long endExpireDate);
				int getPageNum()const;
				void setPageNum(int pageNum);
				std::string getLang()const;
				void setLang(const std::string& lang);
				long getBeginStartDate()const;
				void setBeginStartDate(long beginStartDate);

            private:
				std::string lockProductId_;
				long endStartDate_;
				int serverLockStatus_;
				long startExpireDate_;
				std::string domainName_;
				int pageSize_;
				std::string userClientIp_;
				long endExpireDate_;
				int pageNum_;
				std::string lang_;
				long beginStartDate_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DOMAIN_MODEL_LISTSERVERLOCKREQUEST_H_