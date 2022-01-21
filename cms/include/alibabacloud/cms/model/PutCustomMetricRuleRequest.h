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

#ifndef ALIBABACLOUD_CMS_MODEL_PUTCUSTOMMETRICRULEREQUEST_H_
#define ALIBABACLOUD_CMS_MODEL_PUTCUSTOMMETRICRULEREQUEST_H_

#include <alibabacloud/cms/CmsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Cms {
namespace Model {
class ALIBABACLOUD_CMS_EXPORT PutCustomMetricRuleRequest : public RpcServiceRequest {
public:
	PutCustomMetricRuleRequest();
	~PutCustomMetricRuleRequest();
	std::string getWebhook() const;
	void setWebhook(const std::string &webhook);
	std::string getRuleName() const;
	void setRuleName(const std::string &ruleName);
	std::string getThreshold() const;
	void setThreshold(const std::string &threshold);
	std::string getEffectiveInterval() const;
	void setEffectiveInterval(const std::string &effectiveInterval);
	std::string getEmailSubject() const;
	void setEmailSubject(const std::string &emailSubject);
	int getEvaluationCount() const;
	void setEvaluationCount(int evaluationCount);
	int getSilenceTime() const;
	void setSilenceTime(int silenceTime);
	std::string getMetricName() const;
	void setMetricName(const std::string &metricName);
	std::string getPeriod() const;
	void setPeriod(const std::string &period);
	std::string getContactGroups() const;
	void setContactGroups(const std::string &contactGroups);
	std::string getLevel() const;
	void setLevel(const std::string &level);
	std::string getGroupId() const;
	void setGroupId(const std::string &groupId);
	std::string getResources() const;
	void setResources(const std::string &resources);
	std::string getRuleId() const;
	void setRuleId(const std::string &ruleId);
	std::string getComparisonOperator() const;
	void setComparisonOperator(const std::string &comparisonOperator);
	std::string getStatistics() const;
	void setStatistics(const std::string &statistics);

private:
	std::string webhook_;
	std::string ruleName_;
	std::string threshold_;
	std::string effectiveInterval_;
	std::string emailSubject_;
	int evaluationCount_;
	int silenceTime_;
	std::string metricName_;
	std::string period_;
	std::string contactGroups_;
	std::string level_;
	std::string groupId_;
	std::string resources_;
	std::string ruleId_;
	std::string comparisonOperator_;
	std::string statistics_;
};
} // namespace Model
} // namespace Cms
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CMS_MODEL_PUTCUSTOMMETRICRULEREQUEST_H_
