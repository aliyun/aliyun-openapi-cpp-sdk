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

#ifndef ALIBABACLOUD_BSSOPENAPI_MODEL_QUERYORDERSREQUEST_H_
#define ALIBABACLOUD_BSSOPENAPI_MODEL_QUERYORDERSREQUEST_H_

#include <alibabacloud/bssopenapi/BssOpenApiExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace BssOpenApi {
namespace Model {
class ALIBABACLOUD_BSSOPENAPI_EXPORT QueryOrdersRequest : public RpcServiceRequest {
public:
	QueryOrdersRequest();
	~QueryOrdersRequest();
	std::string getProductCode() const;
	void setProductCode(const std::string &productCode);
	std::string getSubscriptionType() const;
	void setSubscriptionType(const std::string &subscriptionType);
	int getPageNum() const;
	void setPageNum(int pageNum);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getCreateTimeEnd() const;
	void setCreateTimeEnd(const std::string &createTimeEnd);
	std::string getProductType() const;
	void setProductType(const std::string &productType);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getPaymentStatus() const;
	void setPaymentStatus(const std::string &paymentStatus);
	std::string getCreateTimeStart() const;
	void setCreateTimeStart(const std::string &createTimeStart);
	std::string getOrderType() const;
	void setOrderType(const std::string &orderType);

private:
	std::string productCode_;
	std::string subscriptionType_;
	int pageNum_;
	long ownerId_;
	std::string createTimeEnd_;
	std::string productType_;
	int pageSize_;
	std::string paymentStatus_;
	std::string createTimeStart_;
	std::string orderType_;
};
} // namespace Model
} // namespace BssOpenApi
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_BSSOPENAPI_MODEL_QUERYORDERSREQUEST_H_
