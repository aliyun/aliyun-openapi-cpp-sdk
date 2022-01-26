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

#ifndef ALIBABACLOUD_CMS_MODEL_CREATEGROUPMETRICRULESREQUEST_H_
#define ALIBABACLOUD_CMS_MODEL_CREATEGROUPMETRICRULESREQUEST_H_

#include <alibabacloud/cms/CmsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Cms {
namespace Model {
class ALIBABACLOUD_CMS_EXPORT CreateGroupMetricRulesRequest : public RpcServiceRequest {
public:
	struct GroupMetricRules {
		std::string webhook;
		std::string escalationsWarnComparisonOperator;
		std::string ruleName;
		std::string escalationsInfoStatistics;
		std::string effectiveInterval;
		std::string escalationsInfoComparisonOperator;
		std::string noDataPolicy;
		std::string noEffectiveInterval;
		std::string emailSubject;
		int silenceTime;
		std::string metricName;
		int escalationsWarnTimes;
		std::string compositeExpression;
		std::string escalationsWarnThreshold;
		std::string period;
		std::string contactGroups;
		std::string escalationsCriticalStatistics;
		int escalationsInfoTimes;
		int escalationsCriticalTimes;
		std::string escalationsInfoThreshold;
		std::string escalationsWarnStatistics;
		std::string _namespace;
		std::string interval;
		std::string ruleId;
		std::string category;
		std::string escalationsCriticalComparisonOperator;
		std::string escalationsCriticalThreshold;
		std::string dimensions;
	};
	CreateGroupMetricRulesRequest();
	~CreateGroupMetricRulesRequest();
	long getGroupId() const;
	void setGroupId(long groupId);
	std::vector<GroupMetricRules> getGroupMetricRules() const;
	void setGroupMetricRules(const std::vector<GroupMetricRules> &groupMetricRules);

private:
	long groupId_;
	std::vector<GroupMetricRules> groupMetricRules_;
};
} // namespace Model
} // namespace Cms
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CMS_MODEL_CREATEGROUPMETRICRULESREQUEST_H_
