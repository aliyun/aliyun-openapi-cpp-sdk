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

#ifndef ALIBABACLOUD_DMS_ENTERPRISE_MODEL_LISTDESENSITIZATIONRULEREQUEST_H_
#define ALIBABACLOUD_DMS_ENTERPRISE_MODEL_LISTDESENSITIZATIONRULEREQUEST_H_

#include <alibabacloud/dms-enterprise/Dms_enterpriseExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dms_enterprise {
namespace Model {
class ALIBABACLOUD_DMS_ENTERPRISE_EXPORT ListDesensitizationRuleRequest : public RpcServiceRequest {
public:
	ListDesensitizationRuleRequest();
	~ListDesensitizationRuleRequest();
	std::string getRuleName() const;
	void setRuleName(const std::string &ruleName);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	long getTid() const;
	void setTid(long tid);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getRuleType() const;
	void setRuleType(const std::string &ruleType);
	std::string getFuncType() const;
	void setFuncType(const std::string &funcType);
	int getRuleId() const;
	void setRuleId(int ruleId);

private:
	std::string ruleName_;
	int pageNumber_;
	long tid_;
	int pageSize_;
	std::string ruleType_;
	std::string funcType_;
	int ruleId_;
};
} // namespace Model
} // namespace Dms_enterprise
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DMS_ENTERPRISE_MODEL_LISTDESENSITIZATIONRULEREQUEST_H_
