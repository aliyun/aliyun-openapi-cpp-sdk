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

#ifndef ALIBABACLOUD_BSSOPENAPI_MODEL_QUERYACCOUNTBILLREQUEST_H_
#define ALIBABACLOUD_BSSOPENAPI_MODEL_QUERYACCOUNTBILLREQUEST_H_

#include <alibabacloud/bssopenapi/BssOpenApiExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace BssOpenApi {
namespace Model {
class ALIBABACLOUD_BSSOPENAPI_EXPORT QueryAccountBillRequest : public RpcServiceRequest {
public:
	QueryAccountBillRequest();
	~QueryAccountBillRequest();
	std::string getProductCode() const;
	void setProductCode(const std::string &productCode);
	std::string getBillingCycle() const;
	void setBillingCycle(const std::string &billingCycle);
	int getPageNum() const;
	void setPageNum(int pageNum);
	long getOwnerID() const;
	void setOwnerID(long ownerID);
	long getBillOwnerId() const;
	void setBillOwnerId(long billOwnerId);
	std::string getBillingDate() const;
	void setBillingDate(const std::string &billingDate);
	bool getIsGroupByProduct() const;
	void setIsGroupByProduct(bool isGroupByProduct);
	std::string getGranularity() const;
	void setGranularity(const std::string &granularity);
	int getPageSize() const;
	void setPageSize(int pageSize);

private:
	std::string productCode_;
	std::string billingCycle_;
	int pageNum_;
	long ownerID_;
	long billOwnerId_;
	std::string billingDate_;
	bool isGroupByProduct_;
	std::string granularity_;
	int pageSize_;
};
} // namespace Model
} // namespace BssOpenApi
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_BSSOPENAPI_MODEL_QUERYACCOUNTBILLREQUEST_H_
