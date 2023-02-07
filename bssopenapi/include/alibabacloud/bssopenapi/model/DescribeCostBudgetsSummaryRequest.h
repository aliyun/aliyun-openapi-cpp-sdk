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

#ifndef ALIBABACLOUD_BSSOPENAPI_MODEL_DESCRIBECOSTBUDGETSSUMMARYREQUEST_H_
#define ALIBABACLOUD_BSSOPENAPI_MODEL_DESCRIBECOSTBUDGETSSUMMARYREQUEST_H_

#include <alibabacloud/bssopenapi/BssOpenApiExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace BssOpenApi {
namespace Model {
class ALIBABACLOUD_BSSOPENAPI_EXPORT DescribeCostBudgetsSummaryRequest : public RpcServiceRequest {
public:
	DescribeCostBudgetsSummaryRequest();
	~DescribeCostBudgetsSummaryRequest();
	std::string getBudgetStatus() const;
	void setBudgetStatus(const std::string &budgetStatus);
	std::string getBudgetType() const;
	void setBudgetType(const std::string &budgetType);
	std::string getNextToken() const;
	void setNextToken(const std::string &nextToken);
	int getMaxResults() const;
	void setMaxResults(int maxResults);
	std::string getBudgetName() const;
	void setBudgetName(const std::string &budgetName);

private:
	std::string budgetStatus_;
	std::string budgetType_;
	std::string nextToken_;
	int maxResults_;
	std::string budgetName_;
};
} // namespace Model
} // namespace BssOpenApi
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_BSSOPENAPI_MODEL_DESCRIBECOSTBUDGETSSUMMARYREQUEST_H_
