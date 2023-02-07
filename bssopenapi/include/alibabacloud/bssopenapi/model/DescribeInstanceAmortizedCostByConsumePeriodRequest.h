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

#ifndef ALIBABACLOUD_BSSOPENAPI_MODEL_DESCRIBEINSTANCEAMORTIZEDCOSTBYCONSUMEPERIODREQUEST_H_
#define ALIBABACLOUD_BSSOPENAPI_MODEL_DESCRIBEINSTANCEAMORTIZEDCOSTBYCONSUMEPERIODREQUEST_H_

#include <alibabacloud/bssopenapi/BssOpenApiExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace BssOpenApi {
namespace Model {
class ALIBABACLOUD_BSSOPENAPI_EXPORT DescribeInstanceAmortizedCostByConsumePeriodRequest : public RpcServiceRequest {
public:
	DescribeInstanceAmortizedCostByConsumePeriodRequest();
	~DescribeInstanceAmortizedCostByConsumePeriodRequest();
	std::string getProductDetail() const;
	void setProductDetail(const std::string &productDetail);
	std::string getProductCode() const;
	void setProductCode(const std::string &productCode);
	std::vector<std::string> getBillOwnerIdList() const;
	void setBillOwnerIdList(const std::vector<std::string> &billOwnerIdList);
	std::string getSubscriptionType() const;
	void setSubscriptionType(const std::string &subscriptionType);
	std::string getBillingCycle() const;
	void setBillingCycle(const std::string &billingCycle);
	std::string getCostUnitCode() const;
	void setCostUnitCode(const std::string &costUnitCode);
	std::vector<std::string> getAmortizationPeriodFilter() const;
	void setAmortizationPeriodFilter(const std::vector<std::string> &amortizationPeriodFilter);
	std::string getNextToken() const;
	void setNextToken(const std::string &nextToken);
	std::vector<std::string> getBillUserIdList() const;
	void setBillUserIdList(const std::vector<std::string> &billUserIdList);
	std::vector<std::string> getInstanceIdList() const;
	void setInstanceIdList(const std::vector<std::string> &instanceIdList);
	int getMaxResults() const;
	void setMaxResults(int maxResults);

private:
	std::string productDetail_;
	std::string productCode_;
	std::vector<std::string> billOwnerIdList_;
	std::string subscriptionType_;
	std::string billingCycle_;
	std::string costUnitCode_;
	std::vector<std::string> amortizationPeriodFilter_;
	std::string nextToken_;
	std::vector<std::string> billUserIdList_;
	std::vector<std::string> instanceIdList_;
	int maxResults_;
};
} // namespace Model
} // namespace BssOpenApi
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_BSSOPENAPI_MODEL_DESCRIBEINSTANCEAMORTIZEDCOSTBYCONSUMEPERIODREQUEST_H_
