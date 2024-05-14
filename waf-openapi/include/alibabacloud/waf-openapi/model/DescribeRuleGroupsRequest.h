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

#ifndef ALIBABACLOUD_WAF_OPENAPI_MODEL_DESCRIBERULEGROUPSREQUEST_H_
#define ALIBABACLOUD_WAF_OPENAPI_MODEL_DESCRIBERULEGROUPSREQUEST_H_

#include <alibabacloud/waf-openapi/Waf_openapiExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Waf_openapi {
namespace Model {
class ALIBABACLOUD_WAF_OPENAPI_EXPORT DescribeRuleGroupsRequest : public RpcServiceRequest {
public:
	DescribeRuleGroupsRequest();
	~DescribeRuleGroupsRequest();
	int getType() const;
	void setType(int type);
	std::string getWafLang() const;
	void setWafLang(const std::string &wafLang);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getSourceIp() const;
	void setSourceIp(const std::string &sourceIp);
	long getPolicyId() const;
	void setPolicyId(long policyId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getLang() const;
	void setLang(const std::string &lang);
	int getCurrentPage() const;
	void setCurrentPage(int currentPage);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	std::string getRegion() const;
	void setRegion(const std::string &region);

private:
	int type_;
	std::string wafLang_;
	std::string resourceGroupId_;
	std::string sourceIp_;
	long policyId_;
	std::string regionId_;
	int pageSize_;
	std::string lang_;
	int currentPage_;
	std::string instanceId_;
	std::string region_;
};
} // namespace Model
} // namespace Waf_openapi
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_WAF_OPENAPI_MODEL_DESCRIBERULEGROUPSREQUEST_H_
