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

#ifndef ALIBABACLOUD_CLOUD_SIEM_MODEL_LISTCLOUDSIEMCUSTOMIZERULESREQUEST_H_
#define ALIBABACLOUD_CLOUD_SIEM_MODEL_LISTCLOUDSIEMCUSTOMIZERULESREQUEST_H_

#include <alibabacloud/cloud-siem/Cloud_siemExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Cloud_siem {
namespace Model {
class ALIBABACLOUD_CLOUD_SIEM_EXPORT ListCloudSiemCustomizeRulesRequest : public RpcServiceRequest {
public:
	ListCloudSiemCustomizeRulesRequest();
	~ListCloudSiemCustomizeRulesRequest();
	long getRoleFor() const;
	void setRoleFor(long roleFor);
	std::string getRuleName() const;
	void setRuleName(const std::string &ruleName);
	long getStartTime() const;
	void setStartTime(long startTime);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	int getPageSize() const;
	void setPageSize(int pageSize);
	int getRoleType() const;
	void setRoleType(int roleType);
	std::string getId() const;
	void setId(const std::string &id);
	std::string getOrderField() const;
	void setOrderField(const std::string &orderField);
	std::string getOrder() const;
	void setOrder(const std::string &order);
	std::string getRuleType() const;
	void setRuleType(const std::string &ruleType);
	long getEndTime() const;
	void setEndTime(long endTime);
	int getCurrentPage() const;
	void setCurrentPage(int currentPage);
	std::string getAlertType() const;
	void setAlertType(const std::string &alertType);
	std::vector<std::string> getThreatLevel() const;
	void setThreatLevel(const std::vector<std::string> &threatLevel);
	int getStatus() const;
	void setStatus(int status);

private:
	long roleFor_;
	std::string ruleName_;
	long startTime_;
	std::string regionId_;
	int pageSize_;
	int roleType_;
	std::string id_;
	std::string orderField_;
	std::string order_;
	std::string ruleType_;
	long endTime_;
	int currentPage_;
	std::string alertType_;
	std::vector<std::string> threatLevel_;
	int status_;
};
} // namespace Model
} // namespace Cloud_siem
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CLOUD_SIEM_MODEL_LISTCLOUDSIEMCUSTOMIZERULESREQUEST_H_
