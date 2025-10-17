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

#ifndef ALIBABACLOUD_POLARDB_MODEL_LISTORDERSREQUEST_H_
#define ALIBABACLOUD_POLARDB_MODEL_LISTORDERSREQUEST_H_

#include <alibabacloud/polardb/PolardbExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Polardb {
namespace Model {
class ALIBABACLOUD_POLARDB_EXPORT ListOrdersRequest : public RpcServiceRequest {
public:
	ListOrdersRequest();
	~ListOrdersRequest();
	std::string getProductCode() const;
	void setProductCode(const std::string &productCode);
	std::string getOrderStatus() const;
	void setOrderStatus(const std::string &orderStatus);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getNextToken() const;
	void setNextToken(const std::string &nextToken);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	int getMaxResults() const;
	void setMaxResults(int maxResults);
	std::string getCategory() const;
	void setCategory(const std::string &category);

private:
	std::string productCode_;
	std::string orderStatus_;
	int pageNumber_;
	std::string resourceGroupId_;
	std::string regionId_;
	std::string nextToken_;
	int pageSize_;
	std::string instanceId_;
	int maxResults_;
	std::string category_;
};
} // namespace Model
} // namespace Polardb
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_POLARDB_MODEL_LISTORDERSREQUEST_H_
