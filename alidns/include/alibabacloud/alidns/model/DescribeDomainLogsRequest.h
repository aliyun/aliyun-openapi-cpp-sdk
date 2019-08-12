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

#ifndef ALIBABACLOUD_ALIDNS_MODEL_DESCRIBEDOMAINLOGSREQUEST_H_
#define ALIBABACLOUD_ALIDNS_MODEL_DESCRIBEDOMAINLOGSREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/alidns/AlidnsExport.h>

namespace AlibabaCloud
{
	namespace Alidns
	{
		namespace Model
		{
			class ALIBABACLOUD_ALIDNS_EXPORT DescribeDomainLogsRequest : public RpcServiceRequest
			{

			public:
				DescribeDomainLogsRequest();
				~DescribeDomainLogsRequest();

				std::string getEndDate()const;
				void setEndDate(const std::string& endDate);
				std::string getGroupId()const;
				void setGroupId(const std::string& groupId);
				std::string getUserClientIp()const;
				void setUserClientIp(const std::string& userClientIp);
				long getPageSize()const;
				void setPageSize(long pageSize);
				std::string getLang()const;
				void setLang(const std::string& lang);
				std::string getKeyWord()const;
				void setKeyWord(const std::string& keyWord);
				std::string getStartDate()const;
				void setStartDate(const std::string& startDate);
				std::string getType()const;
				void setType(const std::string& type);
				long getPageNumber()const;
				void setPageNumber(long pageNumber);

            private:
				std::string endDate_;
				std::string groupId_;
				std::string userClientIp_;
				long pageSize_;
				std::string lang_;
				std::string keyWord_;
				std::string startDate_;
				std::string type_;
				long pageNumber_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ALIDNS_MODEL_DESCRIBEDOMAINLOGSREQUEST_H_