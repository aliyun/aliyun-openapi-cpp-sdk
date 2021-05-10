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

#ifndef ALIBABACLOUD_DCDN_MODEL_DESCRIBEDCDNUSERSECDROPBYMINUTEREQUEST_H_
#define ALIBABACLOUD_DCDN_MODEL_DESCRIBEDCDNUSERSECDROPBYMINUTEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/dcdn/DcdnExport.h>

namespace AlibabaCloud
{
	namespace Dcdn
	{
		namespace Model
		{
			class ALIBABACLOUD_DCDN_EXPORT DescribeDcdnUserSecDropByMinuteRequest : public RpcServiceRequest
			{

			public:
				DescribeDcdnUserSecDropByMinuteRequest();
				~DescribeDcdnUserSecDropByMinuteRequest();

				std::string getRuleName()const;
				void setRuleName(const std::string& ruleName);
				std::string getStartTime()const;
				void setStartTime(const std::string& startTime);
				long getPageNumber()const;
				void setPageNumber(long pageNumber);
				long getPageSize()const;
				void setPageSize(long pageSize);
				std::string getLang()const;
				void setLang(const std::string& lang);
				std::string getDomainName()const;
				void setDomainName(const std::string& domainName);
				std::string getEndTime()const;
				void setEndTime(const std::string& endTime);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getSecFunc()const;
				void setSecFunc(const std::string& secFunc);
				std::string getObject()const;
				void setObject(const std::string& object);

            private:
				std::string ruleName_;
				std::string startTime_;
				long pageNumber_;
				long pageSize_;
				std::string lang_;
				std::string domainName_;
				std::string endTime_;
				long ownerId_;
				std::string secFunc_;
				std::string object_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DCDN_MODEL_DESCRIBEDCDNUSERSECDROPBYMINUTEREQUEST_H_