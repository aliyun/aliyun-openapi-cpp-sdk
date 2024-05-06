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

#ifndef ALIBABACLOUD_EFLO_MODEL_LISTVPDGRANTRULESREQUEST_H_
#define ALIBABACLOUD_EFLO_MODEL_LISTVPDGRANTRULESREQUEST_H_

#include <alibabacloud/eflo/EfloExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Eflo {
namespace Model {
class ALIBABACLOUD_EFLO_EXPORT ListVpdGrantRulesRequest : public RpcServiceRequest {
public:
	ListVpdGrantRulesRequest();
	~ListVpdGrantRulesRequest();
	std::string getGrantTenantId() const;
	void setGrantTenantId(const std::string &grantTenantId);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getGrantRuleId() const;
	void setGrantRuleId(const std::string &grantRuleId);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getErId() const;
	void setErId(const std::string &erId);
	bool getForSelect() const;
	void setForSelect(bool forSelect);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	std::string getInstanceName() const;
	void setInstanceName(const std::string &instanceName);
	bool getEnablePage() const;
	void setEnablePage(bool enablePage);

private:
	std::string grantTenantId_;
	int pageNumber_;
	std::string resourceGroupId_;
	std::string regionId_;
	std::string grantRuleId_;
	int pageSize_;
	std::string erId_;
	bool forSelect_;
	std::string instanceId_;
	std::string instanceName_;
	bool enablePage_;
};
} // namespace Model
} // namespace Eflo
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_EFLO_MODEL_LISTVPDGRANTRULESREQUEST_H_
