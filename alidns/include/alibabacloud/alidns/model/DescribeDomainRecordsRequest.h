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

#ifndef ALIBABACLOUD_ALIDNS_MODEL_DESCRIBEDOMAINRECORDSREQUEST_H_
#define ALIBABACLOUD_ALIDNS_MODEL_DESCRIBEDOMAINRECORDSREQUEST_H_

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
			class ALIBABACLOUD_ALIDNS_EXPORT DescribeDomainRecordsRequest : public RpcServiceRequest
			{

			public:
				DescribeDomainRecordsRequest();
				~DescribeDomainRecordsRequest();

				std::string getValueKeyWord()const;
				void setValueKeyWord(const std::string& valueKeyWord);
				std::string getLine()const;
				void setLine(const std::string& line);
				long getGroupId()const;
				void setGroupId(long groupId);
				std::string getDomainName()const;
				void setDomainName(const std::string& domainName);
				std::string getOrderBy()const;
				void setOrderBy(const std::string& orderBy);
				std::string getType()const;
				void setType(const std::string& type);
				long getPageNumber()const;
				void setPageNumber(long pageNumber);
				std::string getUserClientIp()const;
				void setUserClientIp(const std::string& userClientIp);
				long getPageSize()const;
				void setPageSize(long pageSize);
				std::string getSearchMode()const;
				void setSearchMode(const std::string& searchMode);
				std::string getLang()const;
				void setLang(const std::string& lang);
				std::string getKeyWord()const;
				void setKeyWord(const std::string& keyWord);
				std::string getTypeKeyWord()const;
				void setTypeKeyWord(const std::string& typeKeyWord);
				std::string getRRKeyWord()const;
				void setRRKeyWord(const std::string& rRKeyWord);
				std::string getDirection()const;
				void setDirection(const std::string& direction);
				std::string getStatus()const;
				void setStatus(const std::string& status);

            private:
				std::string valueKeyWord_;
				std::string line_;
				long groupId_;
				std::string domainName_;
				std::string orderBy_;
				std::string type_;
				long pageNumber_;
				std::string userClientIp_;
				long pageSize_;
				std::string searchMode_;
				std::string lang_;
				std::string keyWord_;
				std::string typeKeyWord_;
				std::string rRKeyWord_;
				std::string direction_;
				std::string status_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ALIDNS_MODEL_DESCRIBEDOMAINRECORDSREQUEST_H_