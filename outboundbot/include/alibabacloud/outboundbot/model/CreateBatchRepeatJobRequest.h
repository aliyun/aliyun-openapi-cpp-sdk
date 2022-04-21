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

#ifndef ALIBABACLOUD_OUTBOUNDBOT_MODEL_CREATEBATCHREPEATJOBREQUEST_H_
#define ALIBABACLOUD_OUTBOUNDBOT_MODEL_CREATEBATCHREPEATJOBREQUEST_H_

#include <alibabacloud/outboundbot/OutboundBotExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace OutboundBot {
namespace Model {
class ALIBABACLOUD_OUTBOUNDBOT_EXPORT CreateBatchRepeatJobRequest : public RpcServiceRequest {
public:
	CreateBatchRepeatJobRequest();
	~CreateBatchRepeatJobRequest();
	std::string getRecallStrategyJson() const;
	void setRecallStrategyJson(const std::string &recallStrategyJson);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	std::string getScriptId() const;
	void setScriptId(const std::string &scriptId);
	std::string getFilterStatus() const;
	void setFilterStatus(const std::string &filterStatus);
	std::string getStrategyJson() const;
	void setStrategyJson(const std::string &strategyJson);
	long getRingingDuration() const;
	void setRingingDuration(long ringingDuration);
	std::string getPriority() const;
	void setPriority(const std::string &priority);
	std::vector<std::string> getCallingNumber() const;
	void setCallingNumber(const std::vector<std::string> &callingNumber);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	std::string getName() const;
	void setName(const std::string &name);
	std::string getSourceGroupId() const;
	void setSourceGroupId(const std::string &sourceGroupId);
	long getMinConcurrency() const;
	void setMinConcurrency(long minConcurrency);

private:
	std::string recallStrategyJson_;
	std::string description_;
	std::string scriptId_;
	std::string filterStatus_;
	std::string strategyJson_;
	long ringingDuration_;
	std::string priority_;
	std::vector<std::string> callingNumber_;
	std::string instanceId_;
	std::string name_;
	std::string sourceGroupId_;
	long minConcurrency_;
};
} // namespace Model
} // namespace OutboundBot
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_OUTBOUNDBOT_MODEL_CREATEBATCHREPEATJOBREQUEST_H_
