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

#ifndef ALIBABACLOUD_DDOSBGP_MODEL_CREATESCHEDRULEONDEMANDREQUEST_H_
#define ALIBABACLOUD_DDOSBGP_MODEL_CREATESCHEDRULEONDEMANDREQUEST_H_

#include <alibabacloud/ddosbgp/DdosbgpExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ddosbgp {
namespace Model {
class ALIBABACLOUD_DDOSBGP_EXPORT CreateSchedruleOnDemandRequest : public RpcServiceRequest {
public:
	CreateSchedruleOnDemandRequest();
	~CreateSchedruleOnDemandRequest();
	std::string getTimeZone() const;
	void setTimeZone(const std::string &timeZone);
	std::string getRuleName() const;
	void setRuleName(const std::string &ruleName);
	std::string getRuleConditionMbps() const;
	void setRuleConditionMbps(const std::string &ruleConditionMbps);
	std::string getRuleAction() const;
	void setRuleAction(const std::string &ruleAction);
	std::string getSourceIp() const;
	void setSourceIp(const std::string &sourceIp);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getRuleUndoMode() const;
	void setRuleUndoMode(const std::string &ruleUndoMode);
	std::string getRuleUndoEndTime() const;
	void setRuleUndoEndTime(const std::string &ruleUndoEndTime);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	std::string getRuleUndoBeginTime() const;
	void setRuleUndoBeginTime(const std::string &ruleUndoBeginTime);
	std::string getRuleConditionCnt() const;
	void setRuleConditionCnt(const std::string &ruleConditionCnt);
	std::string getRuleSwitch() const;
	void setRuleSwitch(const std::string &ruleSwitch);
	std::string getRuleConditionKpps() const;
	void setRuleConditionKpps(const std::string &ruleConditionKpps);

private:
	std::string timeZone_;
	std::string ruleName_;
	std::string ruleConditionMbps_;
	std::string ruleAction_;
	std::string sourceIp_;
	std::string regionId_;
	std::string ruleUndoMode_;
	std::string ruleUndoEndTime_;
	std::string instanceId_;
	std::string ruleUndoBeginTime_;
	std::string ruleConditionCnt_;
	std::string ruleSwitch_;
	std::string ruleConditionKpps_;
};
} // namespace Model
} // namespace Ddosbgp
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DDOSBGP_MODEL_CREATESCHEDRULEONDEMANDREQUEST_H_
