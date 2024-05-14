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

#ifndef ALIBABACLOUD_WAF_OPENAPI_MODEL_DESCRIBERULESREQUEST_H_
#define ALIBABACLOUD_WAF_OPENAPI_MODEL_DESCRIBERULESREQUEST_H_

#include <alibabacloud/waf-openapi/Waf_openapiExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Waf_openapi {
namespace Model {
class ALIBABACLOUD_WAF_OPENAPI_EXPORT DescribeRulesRequest : public RpcServiceRequest {
public:
	DescribeRulesRequest();
	~DescribeRulesRequest();
	long getRuleGroupId() const;
	void setRuleGroupId(long ruleGroupId);
	int getProtectionType() const;
	void setProtectionType(int protectionType);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	std::string getCveIdKey() const;
	void setCveIdKey(const std::string &cveIdKey);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getSourceIp() const;
	void setSourceIp(const std::string &sourceIp);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getLang() const;
	void setLang(const std::string &lang);
	int getRiskLevel() const;
	void setRiskLevel(int riskLevel);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	std::string getRuleIdKey() const;
	void setRuleIdKey(const std::string &ruleIdKey);
	std::string getRegion() const;
	void setRegion(const std::string &region);
	int getApplicationType() const;
	void setApplicationType(int applicationType);

private:
	long ruleGroupId_;
	int protectionType_;
	int pageNumber_;
	std::string cveIdKey_;
	std::string resourceGroupId_;
	std::string sourceIp_;
	std::string regionId_;
	int pageSize_;
	std::string lang_;
	int riskLevel_;
	std::string instanceId_;
	std::string ruleIdKey_;
	std::string region_;
	int applicationType_;
};
} // namespace Model
} // namespace Waf_openapi
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_WAF_OPENAPI_MODEL_DESCRIBERULESREQUEST_H_
