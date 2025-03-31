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

#ifndef ALIBABACLOUD_CLOUD_SIEM_MODEL_POSTCUSTOMIZERULEREQUEST_H_
#define ALIBABACLOUD_CLOUD_SIEM_MODEL_POSTCUSTOMIZERULEREQUEST_H_

#include <alibabacloud/cloud-siem/Cloud_siemExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Cloud_siem {
namespace Model {
class ALIBABACLOUD_CLOUD_SIEM_EXPORT PostCustomizeRuleRequest : public RpcServiceRequest {
public:
	PostCustomizeRuleRequest();
	~PostCustomizeRuleRequest();
	long getRoleFor() const;
	void setRoleFor(long roleFor);
	std::string getAttCk() const;
	void setAttCk(const std::string &attCk);
	std::string getRuleDesc() const;
	void setRuleDesc(const std::string &ruleDesc);
	std::string getRuleName() const;
	void setRuleName(const std::string &ruleName);
	std::string getAlertTypeMds() const;
	void setAlertTypeMds(const std::string &alertTypeMds);
	std::string getRuleThreshold() const;
	void setRuleThreshold(const std::string &ruleThreshold);
	std::string getLogSourceMds() const;
	void setLogSourceMds(const std::string &logSourceMds);
	std::string getLogType() const;
	void setLogType(const std::string &logType);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getLogTypeMds() const;
	void setLogTypeMds(const std::string &logTypeMds);
	int getRoleType() const;
	void setRoleType(int roleType);
	long getId() const;
	void setId(long id);
	int getEventTransferSwitch() const;
	void setEventTransferSwitch(int eventTransferSwitch);
	std::string getQueryCycle() const;
	void setQueryCycle(const std::string &queryCycle);
	std::string getLogSource() const;
	void setLogSource(const std::string &logSource);
	std::string getAlertType() const;
	void setAlertType(const std::string &alertType);
	std::string getEventTransferType() const;
	void setEventTransferType(const std::string &eventTransferType);
	std::string getRuleCondition() const;
	void setRuleCondition(const std::string &ruleCondition);
	std::string getEventTransferExt() const;
	void setEventTransferExt(const std::string &eventTransferExt);
	std::string getThreatLevel() const;
	void setThreatLevel(const std::string &threatLevel);
	std::string getRuleGroup() const;
	void setRuleGroup(const std::string &ruleGroup);

private:
	long roleFor_;
	std::string attCk_;
	std::string ruleDesc_;
	std::string ruleName_;
	std::string alertTypeMds_;
	std::string ruleThreshold_;
	std::string logSourceMds_;
	std::string logType_;
	std::string regionId_;
	std::string logTypeMds_;
	int roleType_;
	long id_;
	int eventTransferSwitch_;
	std::string queryCycle_;
	std::string logSource_;
	std::string alertType_;
	std::string eventTransferType_;
	std::string ruleCondition_;
	std::string eventTransferExt_;
	std::string threatLevel_;
	std::string ruleGroup_;
};
} // namespace Model
} // namespace Cloud_siem
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CLOUD_SIEM_MODEL_POSTCUSTOMIZERULEREQUEST_H_
