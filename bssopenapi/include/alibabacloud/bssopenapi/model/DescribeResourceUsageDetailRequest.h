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

#ifndef ALIBABACLOUD_BSSOPENAPI_MODEL_DESCRIBERESOURCEUSAGEDETAILREQUEST_H_
#define ALIBABACLOUD_BSSOPENAPI_MODEL_DESCRIBERESOURCEUSAGEDETAILREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/bssopenapi/BssOpenApiExport.h>

namespace AlibabaCloud
{
	namespace BssOpenApi
	{
		namespace Model
		{
			class ALIBABACLOUD_BSSOPENAPI_EXPORT DescribeResourceUsageDetailRequest : public RpcServiceRequest
			{

			public:
				DescribeResourceUsageDetailRequest();
				~DescribeResourceUsageDetailRequest();

				std::string getPeriodType()const;
				void setPeriodType(const std::string& periodType);
				long getBillOwnerId()const;
				void setBillOwnerId(long billOwnerId);
				std::string getResourceType()const;
				void setResourceType(const std::string& resourceType);
				std::string getStartPeriod()const;
				void setStartPeriod(const std::string& startPeriod);
				std::string getEndPeriod()const;
				void setEndPeriod(const std::string& endPeriod);
				std::string getNextToken()const;
				void setNextToken(const std::string& nextToken);
				int getMaxResults()const;
				void setMaxResults(int maxResults);

            private:
				std::string periodType_;
				long billOwnerId_;
				std::string resourceType_;
				std::string startPeriod_;
				std::string endPeriod_;
				std::string nextToken_;
				int maxResults_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_BSSOPENAPI_MODEL_DESCRIBERESOURCEUSAGEDETAILREQUEST_H_