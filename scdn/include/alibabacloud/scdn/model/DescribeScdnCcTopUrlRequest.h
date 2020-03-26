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

#ifndef ALIBABACLOUD_SCDN_MODEL_DESCRIBESCDNCCTOPURLREQUEST_H_
#define ALIBABACLOUD_SCDN_MODEL_DESCRIBESCDNCCTOPURLREQUEST_H_

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
			class ALIBABACLOUD_SCDN_EXPORT DescribeScdnCcTopUrlRequest : public RpcServiceRequest
			{

			public:
				DescribeScdnCcTopUrlRequest();
				~DescribeScdnCcTopUrlRequest();

				std::string getStartTime()const;
				void setStartTime(const std::string& startTime);
				std::string getPageNumber()const;
				void setPageNumber(const std::string& pageNumber);
				std::string getPageSize()const;
				void setPageSize(const std::string& pageSize);
				std::string getDomainName()const;
				void setDomainName(const std::string& domainName);
				std::string getEndTime()const;
				void setEndTime(const std::string& endTime);
				long getOwnerId()const;
				void setOwnerId(long ownerId);

            private:
				std::string startTime_;
				std::string pageNumber_;
				std::string pageSize_;
				std::string domainName_;
				std::string endTime_;
				long ownerId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SCDN_MODEL_DESCRIBESCDNCCTOPURLREQUEST_H_