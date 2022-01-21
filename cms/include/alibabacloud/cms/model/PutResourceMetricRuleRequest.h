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

#ifndef ALIBABACLOUD_CMS_MODEL_PUTRESOURCEMETRICRULEREQUEST_H_
#define ALIBABACLOUD_CMS_MODEL_PUTRESOURCEMETRICRULEREQUEST_H_

#include <alibabacloud/cms/CmsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Cms {
namespace Model {
class ALIBABACLOUD_CMS_EXPORT PutResourceMetricRuleRequest : public RpcServiceRequest {
public:
	struct Labels {
		std::string value;
		std::string key;
	};
	struct Prometheus {
		std::string promQL;
		int times;
		std::string level;
		struct AnnotationsItem {
			std::string value;
			std::string key;
		};
		AnnotationsItem annotationsItem;
		std::vector<AnnotationsItem> annotations;
	};
	struct CompositeExpression {
		int times;
		struct ExpressionListItem {
			long period;
			std::string threshold;
			std::string id;
			std::string metricName;
			std::string comparisonOperator;
			std::string statistics;
		};
		ExpressionListItem expressionListItem;
		std::vector<ExpressionListItem> expressionList;
		std::string level;
		std::string expressionRaw;
		std::string expressionListJoin;
	};
	PutResourceMetricRuleRequest();
	~PutResourceMetricRuleRequest();
	std::string getWebhook() const;
	void setWebhook(const std::string &webhook);
	std::string getEscalationsWarnComparisonOperator() const;
	void setEscalationsWarnComparisonOperator(const std::string &escalationsWarnComparisonOperator);
	std::string getRuleName() const;
	void setRuleName(const std::string &ruleName);
	std::string getEffectiveInterval() const;
	void setEffectiveInterval(const std::string &effectiveInterval);
	std::string getNoDataPolicy() const;
	void setNoDataPolicy(const std::string &noDataPolicy);
	std::string getNoEffectiveInterval() const;
	void setNoEffectiveInterval(const std::string &noEffectiveInterval);
	std::string getEmailSubject() const;
	void setEmailSubject(const std::string &emailSubject);
	std::string getOptions() const;
	void setOptions(const std::string &options);
	std::string getMetricName() const;
	void setMetricName(const std::string &metricName);
	int getEscalationsWarnTimes() const;
	void setEscalationsWarnTimes(int escalationsWarnTimes);
	std::string getPeriod() const;
	void setPeriod(const std::string &period);
	std::string getEscalationsWarnThreshold() const;
	void setEscalationsWarnThreshold(const std::string &escalationsWarnThreshold);
	std::string getContactGroups() const;
	void setContactGroups(const std::string &contactGroups);
	std::string getEscalationsCriticalStatistics() const;
	void setEscalationsCriticalStatistics(const std::string &escalationsCriticalStatistics);
	std::string getGroupId() const;
	void setGroupId(const std::string &groupId);
	std::string getGroupName() const;
	void setGroupName(const std::string &groupName);
	std::vector<Labels> getLabels() const;
	void setLabels(const std::vector<Labels> &labels);
	std::string getInterval() const;
	void setInterval(const std::string &interval);
	std::string getRuleId() const;
	void setRuleId(const std::string &ruleId);
	std::string getEscalationsCriticalThreshold() const;
	void setEscalationsCriticalThreshold(const std::string &escalationsCriticalThreshold);
	std::string getEscalationsInfoStatistics() const;
	void setEscalationsInfoStatistics(const std::string &escalationsInfoStatistics);
	std::string getEscalationsInfoComparisonOperator() const;
	void setEscalationsInfoComparisonOperator(const std::string &escalationsInfoComparisonOperator);
	int getSilenceTime() const;
	void setSilenceTime(int silenceTime);
	Prometheus getPrometheus() const;
	void setPrometheus(const Prometheus &prometheus);
	CompositeExpression getCompositeExpression() const;
	void setCompositeExpression(const CompositeExpression &compositeExpression);
	std::string getResources() const;
	void setResources(const std::string &resources);
	int getEscalationsInfoTimes() const;
	void setEscalationsInfoTimes(int escalationsInfoTimes);
	std::string getGroupBy() const;
	void setGroupBy(const std::string &groupBy);
	int getEscalationsCriticalTimes() const;
	void setEscalationsCriticalTimes(int escalationsCriticalTimes);
	std::string getEscalationsWarnStatistics() const;
	void setEscalationsWarnStatistics(const std::string &escalationsWarnStatistics);
	std::string getEscalationsInfoThreshold() const;
	void setEscalationsInfoThreshold(const std::string &escalationsInfoThreshold);
	std::string get_Namespace() const;
	void set_Namespace(const std::string &_namespace);
	std::string getEscalationsCriticalComparisonOperator() const;
	void setEscalationsCriticalComparisonOperator(const std::string &escalationsCriticalComparisonOperator);

private:
	std::string webhook_;
	std::string escalationsWarnComparisonOperator_;
	std::string ruleName_;
	std::string effectiveInterval_;
	std::string noDataPolicy_;
	std::string noEffectiveInterval_;
	std::string emailSubject_;
	std::string options_;
	std::string metricName_;
	int escalationsWarnTimes_;
	std::string period_;
	std::string escalationsWarnThreshold_;
	std::string contactGroups_;
	std::string escalationsCriticalStatistics_;
	std::string groupId_;
	std::string groupName_;
	std::vector<Labels> labels_;
	std::string interval_;
	std::string ruleId_;
	std::string escalationsCriticalThreshold_;
	std::string escalationsInfoStatistics_;
	std::string escalationsInfoComparisonOperator_;
	int silenceTime_;
	Prometheus prometheus_;
	CompositeExpression compositeExpression_;
	std::string resources_;
	int escalationsInfoTimes_;
	std::string groupBy_;
	int escalationsCriticalTimes_;
	std::string escalationsWarnStatistics_;
	std::string escalationsInfoThreshold_;
	std::string _namespace_;
	std::string escalationsCriticalComparisonOperator_;
};
} // namespace Model
} // namespace Cms
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CMS_MODEL_PUTRESOURCEMETRICRULEREQUEST_H_
