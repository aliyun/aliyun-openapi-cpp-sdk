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

#ifndef ALIBABACLOUD_BSSOPENAPI_MODEL_DESCRIBESPLITITEMBILLREQUEST_H_
#define ALIBABACLOUD_BSSOPENAPI_MODEL_DESCRIBESPLITITEMBILLREQUEST_H_

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
			class ALIBABACLOUD_BSSOPENAPI_EXPORT DescribeSplitItemBillRequest : public RpcServiceRequest
			{
			public:
				struct TagFilter
				{
					std::vector<std::string> tagValues;
					std::string tagKey;
				};

			public:
				DescribeSplitItemBillRequest();
				~DescribeSplitItemBillRequest();

				std::string getSplitItemID()const;
				void setSplitItemID(const std::string& splitItemID);
				std::string getProductCode()const;
				void setProductCode(const std::string& productCode);
				std::string getSubscriptionType()const;
				void setSubscriptionType(const std::string& subscriptionType);
				std::string getBillingCycle()const;
				void setBillingCycle(const std::string& billingCycle);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				long getBillOwnerId()const;
				void setBillOwnerId(long billOwnerId);
				std::vector<TagFilter> getTagFilter()const;
				void setTagFilter(const std::vector<TagFilter>& tagFilter);
				std::string getProductType()const;
				void setProductType(const std::string& productType);
				std::string getInstanceID()const;
				void setInstanceID(const std::string& instanceID);
				std::string getNextToken()const;
				void setNextToken(const std::string& nextToken);
				int getMaxResults()const;
				void setMaxResults(int maxResults);

            private:
				std::string splitItemID_;
				std::string productCode_;
				std::string subscriptionType_;
				std::string billingCycle_;
				long ownerId_;
				long billOwnerId_;
				std::vector<TagFilter> tagFilter_;
				std::string productType_;
				std::string instanceID_;
				std::string nextToken_;
				int maxResults_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_BSSOPENAPI_MODEL_DESCRIBESPLITITEMBILLREQUEST_H_