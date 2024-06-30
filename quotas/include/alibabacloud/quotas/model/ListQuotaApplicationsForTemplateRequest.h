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

#ifndef ALIBABACLOUD_QUOTAS_MODEL_LISTQUOTAAPPLICATIONSFORTEMPLATEREQUEST_H_
#define ALIBABACLOUD_QUOTAS_MODEL_LISTQUOTAAPPLICATIONSFORTEMPLATEREQUEST_H_

#include <alibabacloud/quotas/QuotasExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Quotas {
namespace Model {
class ALIBABACLOUD_QUOTAS_EXPORT ListQuotaApplicationsForTemplateRequest : public RpcServiceRequest {
public:
	ListQuotaApplicationsForTemplateRequest();
	~ListQuotaApplicationsForTemplateRequest();
	std::string getProductCode() const;
	void setProductCode(const std::string &productCode);
	std::string getQuotaActionCode() const;
	void setQuotaActionCode(const std::string &quotaActionCode);
	std::string getBatchQuotaApplicationId() const;
	void setBatchQuotaApplicationId(const std::string &batchQuotaApplicationId);
	std::string getNextToken() const;
	void setNextToken(const std::string &nextToken);
	std::string getQuotaCategory() const;
	void setQuotaCategory(const std::string &quotaCategory);
	std::string getOriginalContext() const;
	void setOriginalContext(const std::string &originalContext);
	std::string getApplyStartTime() const;
	void setApplyStartTime(const std::string &applyStartTime);
	std::string getApplyEndTime() const;
	void setApplyEndTime(const std::string &applyEndTime);
	int getMaxResults() const;
	void setMaxResults(int maxResults);

private:
	std::string productCode_;
	std::string quotaActionCode_;
	std::string batchQuotaApplicationId_;
	std::string nextToken_;
	std::string quotaCategory_;
	std::string originalContext_;
	std::string applyStartTime_;
	std::string applyEndTime_;
	int maxResults_;
};
} // namespace Model
} // namespace Quotas
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_QUOTAS_MODEL_LISTQUOTAAPPLICATIONSFORTEMPLATEREQUEST_H_
