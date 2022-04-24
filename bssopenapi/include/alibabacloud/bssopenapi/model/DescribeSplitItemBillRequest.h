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

#include <alibabacloud/bssopenapi/BssOpenApiExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace BssOpenApi {
namespace Model {
class ALIBABACLOUD_BSSOPENAPI_EXPORT DescribeSplitItemBillRequest : public RpcServiceRequest {
public:
	struct TagFilter {
		std::string tagKey;
	};
	DescribeSplitItemBillRequest();
	~DescribeSplitItemBillRequest();
	std::string getProductCode() const;
	void setProductCode(const std::string &productCode);
	std::string getSubscriptionType() const;
	void setSubscriptionType(const std::string &subscriptionType);
	long getBillOwnerId() const;
	void setBillOwnerId(long billOwnerId);
	std::string getProductType() const;
	void setProductType(const std::string &productType);
	std::string getNextToken() const;
	void setNextToken(const std::string &nextToken);
	std::string getSplitItemID() const;
	void setSplitItemID(const std::string &splitItemID);
	std::string getBillingCycle() const;
	void setBillingCycle(const std::string &billingCycle);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::vector<TagFilter> getTagFilter() const;
	void setTagFilter(const std::vector<TagFilter> &tagFilter);
	std::string getBillingDate() const;
	void setBillingDate(const std::string &billingDate);
	std::string getInstanceID() const;
	void setInstanceID(const std::string &instanceID);
	std::string getGranularity() const;
	void setGranularity(const std::string &granularity);
	int getMaxResults() const;
	void setMaxResults(int maxResults);

private:
	std::string productCode_;
	std::string subscriptionType_;
	long billOwnerId_;
	std::string productType_;
	std::string nextToken_;
	std::string splitItemID_;
	std::string billingCycle_;
	long ownerId_;
	std::vector<TagFilter> tagFilter_;
	std::string billingDate_;
	std::string instanceID_;
	std::string granularity_;
	int maxResults_;
};
} // namespace Model
} // namespace BssOpenApi
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_BSSOPENAPI_MODEL_DESCRIBESPLITITEMBILLREQUEST_H_
