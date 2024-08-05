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

#ifndef ALIBABACLOUD_ARMS_MODEL_SEARCHALERTRULESREQUEST_H_
#define ALIBABACLOUD_ARMS_MODEL_SEARCHALERTRULESREQUEST_H_

#include <alibabacloud/arms/ARMSExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace ARMS {
namespace Model {
class ALIBABACLOUD_ARMS_EXPORT SearchAlertRulesRequest : public RpcServiceRequest {
public:
	struct Tags {
		std::string value;
		std::string key;
	};
	SearchAlertRulesRequest();
	~SearchAlertRulesRequest();
	std::string getAppType() const;
	void setAppType(const std::string &appType);
	int getCurrentPage() const;
	void setCurrentPage(int currentPage);
	std::string getPid() const;
	void setPid(const std::string &pid);
	std::string getSystemRegionId() const;
	void setSystemRegionId(const std::string &systemRegionId);
	std::string getProxyUserId() const;
	void setProxyUserId(const std::string &proxyUserId);
	std::string getTitle() const;
	void setTitle(const std::string &title);
	std::string getType() const;
	void setType(const std::string &type);
	std::vector<Tags> getTags() const;
	void setTags(const std::vector<Tags> &tags);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getAlertRuleId() const;
	void setAlertRuleId(const std::string &alertRuleId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	int getPageSize() const;
	void setPageSize(int pageSize);

private:
	std::string appType_;
	int currentPage_;
	std::string pid_;
	std::string systemRegionId_;
	std::string proxyUserId_;
	std::string title_;
	std::string type_;
	std::vector<Tags> tags_;
	std::string resourceGroupId_;
	std::string alertRuleId_;
	std::string regionId_;
	int pageSize_;
};
} // namespace Model
} // namespace ARMS
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ARMS_MODEL_SEARCHALERTRULESREQUEST_H_
