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

#ifndef ALIBABACLOUD_OUTBOUNDBOT_MODEL_CREATEJOBGROUPREQUEST_H_
#define ALIBABACLOUD_OUTBOUNDBOT_MODEL_CREATEJOBGROUPREQUEST_H_

#include <alibabacloud/outboundbot/OutboundBotExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace OutboundBot {
namespace Model {
class ALIBABACLOUD_OUTBOUNDBOT_EXPORT CreateJobGroupRequest : public RpcServiceRequest {
public:
	CreateJobGroupRequest();
	~CreateJobGroupRequest();
	std::string getRecallStrategyJson() const;
	void setRecallStrategyJson(const std::string &recallStrategyJson);
	std::string getJobGroupName() const;
	void setJobGroupName(const std::string &jobGroupName);
	std::string getScriptId() const;
	void setScriptId(const std::string &scriptId);
	std::string getStrategyJson() const;
	void setStrategyJson(const std::string &strategyJson);
	long getRingingDuration() const;
	void setRingingDuration(long ringingDuration);
	std::string getScenarioId() const;
	void setScenarioId(const std::string &scenarioId);
	std::string getPriority() const;
	void setPriority(const std::string &priority);
	std::string getJobGroupDescription() const;
	void setJobGroupDescription(const std::string &jobGroupDescription);
	std::vector<std::string> getCallingNumber() const;
	void setCallingNumber(const std::vector<std::string> &callingNumber);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	long getMinConcurrency() const;
	void setMinConcurrency(long minConcurrency);

private:
	std::string recallStrategyJson_;
	std::string jobGroupName_;
	std::string scriptId_;
	std::string strategyJson_;
	long ringingDuration_;
	std::string scenarioId_;
	std::string priority_;
	std::string jobGroupDescription_;
	std::vector<std::string> callingNumber_;
	std::string instanceId_;
	long minConcurrency_;
};
} // namespace Model
} // namespace OutboundBot
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_OUTBOUNDBOT_MODEL_CREATEJOBGROUPREQUEST_H_
