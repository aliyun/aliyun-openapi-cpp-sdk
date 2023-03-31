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

#ifndef ALIBABACLOUD_BSSOPENAPI_MODEL_CREATESAVINGSPLANSINSTANCEREQUEST_H_
#define ALIBABACLOUD_BSSOPENAPI_MODEL_CREATESAVINGSPLANSINSTANCEREQUEST_H_

#include <alibabacloud/bssopenapi/BssOpenApiExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace BssOpenApi {
namespace Model {
class ALIBABACLOUD_BSSOPENAPI_EXPORT CreateSavingsPlansInstanceRequest : public RpcServiceRequest {
public:
	CreateSavingsPlansInstanceRequest();
	~CreateSavingsPlansInstanceRequest();
	std::string getSpecification() const;
	void setSpecification(const std::string &specification);
	std::string getPoolValue() const;
	void setPoolValue(const std::string &poolValue);
	std::string getCommodityCode() const;
	void setCommodityCode(const std::string &commodityCode);
	std::string getType() const;
	void setType(const std::string &type);
	std::string getEffectiveDate() const;
	void setEffectiveDate(const std::string &effectiveDate);
	std::string getDuration() const;
	void setDuration(const std::string &duration);
	std::string getSpecType() const;
	void setSpecType(const std::string &specType);
	std::map<std::string, std::string> getExtendMap() const;
	void setExtendMap(const std::map<std::string, std::string> &extendMap);
	std::string getPayMode() const;
	void setPayMode(const std::string &payMode);
	std::string getRegion() const;
	void setRegion(const std::string &region);
	std::string getPricingCycle() const;
	void setPricingCycle(const std::string &pricingCycle);

private:
	std::string specification_;
	std::string poolValue_;
	std::string commodityCode_;
	std::string type_;
	std::string effectiveDate_;
	std::string duration_;
	std::string specType_;
	std::map<std::string, std::string> extendMap_;
	std::string payMode_;
	std::string region_;
	std::string pricingCycle_;
};
} // namespace Model
} // namespace BssOpenApi
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_BSSOPENAPI_MODEL_CREATESAVINGSPLANSINSTANCEREQUEST_H_
