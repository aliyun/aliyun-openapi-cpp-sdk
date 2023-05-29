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

#ifndef ALIBABACLOUD_MARKET_MODEL_DESCRIBEPRODUCTSREQUEST_H_
#define ALIBABACLOUD_MARKET_MODEL_DESCRIBEPRODUCTSREQUEST_H_

#include <alibabacloud/market/MarketExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Market {
namespace Model {
class ALIBABACLOUD_MARKET_EXPORT DescribeProductsRequest : public RpcServiceRequest {
public:
	struct Filter {
		std::string value;
		std::string key;
	};
	DescribeProductsRequest();
	~DescribeProductsRequest();
	std::string getSearchTerm() const;
	void setSearchTerm(const std::string &searchTerm);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	std::vector<Filter> getFilter() const;
	void setFilter(const std::vector<Filter> &filter);
	int getPageSize() const;
	void setPageSize(int pageSize);

private:
	std::string searchTerm_;
	int pageNumber_;
	std::vector<Filter> filter_;
	int pageSize_;
};
} // namespace Model
} // namespace Market
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_MARKET_MODEL_DESCRIBEPRODUCTSREQUEST_H_
