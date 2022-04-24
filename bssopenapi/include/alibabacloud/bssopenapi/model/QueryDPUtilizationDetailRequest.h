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

#ifndef ALIBABACLOUD_BSSOPENAPI_MODEL_QUERYDPUTILIZATIONDETAILREQUEST_H_
#define ALIBABACLOUD_BSSOPENAPI_MODEL_QUERYDPUTILIZATIONDETAILREQUEST_H_

#include <alibabacloud/bssopenapi/BssOpenApiExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace BssOpenApi {
namespace Model {
class ALIBABACLOUD_BSSOPENAPI_EXPORT QueryDPUtilizationDetailRequest : public RpcServiceRequest {
public:
	QueryDPUtilizationDetailRequest();
	~QueryDPUtilizationDetailRequest();
	std::string getDeductedInstanceId() const;
	void setDeductedInstanceId(const std::string &deductedInstanceId);
	std::string getLastToken() const;
	void setLastToken(const std::string &lastToken);
	std::string getInstanceSpec() const;
	void setInstanceSpec(const std::string &instanceSpec);
	std::string getProdCode() const;
	void setProdCode(const std::string &prodCode);
	std::string getEndTime() const;
	void setEndTime(const std::string &endTime);
	bool getIncludeShare() const;
	void setIncludeShare(bool includeShare);
	std::string getCommodityCode() const;
	void setCommodityCode(const std::string &commodityCode);
	std::string getStartTime() const;
	void setStartTime(const std::string &startTime);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	int getLimit() const;
	void setLimit(int limit);

private:
	std::string deductedInstanceId_;
	std::string lastToken_;
	std::string instanceSpec_;
	std::string prodCode_;
	std::string endTime_;
	bool includeShare_;
	std::string commodityCode_;
	std::string startTime_;
	std::string instanceId_;
	int limit_;
};
} // namespace Model
} // namespace BssOpenApi
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_BSSOPENAPI_MODEL_QUERYDPUTILIZATIONDETAILREQUEST_H_
