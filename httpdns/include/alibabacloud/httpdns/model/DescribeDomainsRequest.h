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

#ifndef ALIBABACLOUD_HTTPDNS_MODEL_DESCRIBEDOMAINSREQUEST_H_
#define ALIBABACLOUD_HTTPDNS_MODEL_DESCRIBEDOMAINSREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/httpdns/HttpdnsExport.h>

namespace AlibabaCloud
{
	namespace Httpdns
	{
		namespace Model
		{
			class ALIBABACLOUD_HTTPDNS_EXPORT DescribeDomainsRequest : public RpcServiceRequest
			{

			public:
				DescribeDomainsRequest();
				~DescribeDomainsRequest();

				long getPageNumber()const;
				void setPageNumber(long pageNumber);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getAccountId()const;
				void setAccountId(const std::string& accountId);
				long getPageSize()const;
				void setPageSize(long pageSize);

            private:
				long pageNumber_;
				std::string accessKeyId_;
				std::string accountId_;
				long pageSize_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_HTTPDNS_MODEL_DESCRIBEDOMAINSREQUEST_H_