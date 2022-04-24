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

#ifndef ALIBABACLOUD_BSSOPENAPI_MODEL_QUERYAVAILABLEINSTANCESREQUEST_H_
#define ALIBABACLOUD_BSSOPENAPI_MODEL_QUERYAVAILABLEINSTANCESREQUEST_H_

#include <alibabacloud/bssopenapi/BssOpenApiExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace BssOpenApi {
namespace Model {
class ALIBABACLOUD_BSSOPENAPI_EXPORT QueryAvailableInstancesRequest : public RpcServiceRequest {
public:
	QueryAvailableInstancesRequest();
	~QueryAvailableInstancesRequest();
	std::string getProductCode() const;
	void setProductCode(const std::string &productCode);
	std::string getSubscriptionType() const;
	void setSubscriptionType(const std::string &subscriptionType);
	int getPageNum() const;
	void setPageNum(int pageNum);
	std::string getProductType() const;
	void setProductType(const std::string &productType);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getRenewStatus() const;
	void setRenewStatus(const std::string &renewStatus);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getEndTimeStart() const;
	void setEndTimeStart(const std::string &endTimeStart);
	std::string getCreateTimeEnd() const;
	void setCreateTimeEnd(const std::string &createTimeEnd);
	std::string getInstanceIDs() const;
	void setInstanceIDs(const std::string &instanceIDs);
	std::string getEndTimeEnd() const;
	void setEndTimeEnd(const std::string &endTimeEnd);
	std::string getCreateTimeStart() const;
	void setCreateTimeStart(const std::string &createTimeStart);
	std::string getRegion() const;
	void setRegion(const std::string &region);

private:
	std::string productCode_;
	std::string subscriptionType_;
	int pageNum_;
	std::string productType_;
	int pageSize_;
	std::string renewStatus_;
	long ownerId_;
	std::string endTimeStart_;
	std::string createTimeEnd_;
	std::string instanceIDs_;
	std::string endTimeEnd_;
	std::string createTimeStart_;
	std::string region_;
};
} // namespace Model
} // namespace BssOpenApi
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_BSSOPENAPI_MODEL_QUERYAVAILABLEINSTANCESREQUEST_H_
