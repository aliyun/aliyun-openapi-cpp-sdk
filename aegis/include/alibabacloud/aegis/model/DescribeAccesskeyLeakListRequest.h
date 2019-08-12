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

#ifndef ALIBABACLOUD_AEGIS_MODEL_DESCRIBEACCESSKEYLEAKLISTREQUEST_H_
#define ALIBABACLOUD_AEGIS_MODEL_DESCRIBEACCESSKEYLEAKLISTREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/aegis/AegisExport.h>

namespace AlibabaCloud
{
	namespace Aegis
	{
		namespace Model
		{
			class ALIBABACLOUD_AEGIS_EXPORT DescribeAccesskeyLeakListRequest : public RpcServiceRequest
			{

			public:
				DescribeAccesskeyLeakListRequest();
				~DescribeAccesskeyLeakListRequest();

				std::string getSourceIp()const;
				void setSourceIp(const std::string& sourceIp);
				std::string getQuery()const;
				void setQuery(const std::string& query);
				int getPageSize()const;
				void setPageSize(int pageSize);
				long getStartTs()const;
				void setStartTs(long startTs);
				int getCurrentPage()const;
				void setCurrentPage(int currentPage);
				std::string getStatus()const;
				void setStatus(const std::string& status);

            private:
				std::string sourceIp_;
				std::string query_;
				int pageSize_;
				long startTs_;
				int currentPage_;
				std::string status_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_AEGIS_MODEL_DESCRIBEACCESSKEYLEAKLISTREQUEST_H_