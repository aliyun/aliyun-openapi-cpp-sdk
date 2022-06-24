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

#ifndef ALIBABACLOUD_OUTBOUNDBOT_MODEL_DIALOGUEREQUEST_H_
#define ALIBABACLOUD_OUTBOUNDBOT_MODEL_DIALOGUEREQUEST_H_

#include <alibabacloud/outboundbot/OutboundBotExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace OutboundBot {
namespace Model {
class ALIBABACLOUD_OUTBOUNDBOT_EXPORT DialogueRequest : public RpcServiceRequest {
public:
	DialogueRequest();
	~DialogueRequest();
	std::string getCallId() const;
	void setCallId(const std::string &callId);
	std::string getScriptId() const;
	void setScriptId(const std::string &scriptId);
	long getInstanceOwnerId() const;
	void setInstanceOwnerId(long instanceOwnerId);
	std::string getCalledNumber() const;
	void setCalledNumber(const std::string &calledNumber);
	std::string getCallType() const;
	void setCallType(const std::string &callType);
	std::string getScenarioId() const;
	void setScenarioId(const std::string &scenarioId);
	std::string getTaskId() const;
	void setTaskId(const std::string &taskId);
	std::string getUtterance() const;
	void setUtterance(const std::string &utterance);
	std::string getActionParams() const;
	void setActionParams(const std::string &actionParams);
	std::string getCallingNumber() const;
	void setCallingNumber(const std::string &callingNumber);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	std::string getActionKey() const;
	void setActionKey(const std::string &actionKey);

private:
	std::string callId_;
	std::string scriptId_;
	long instanceOwnerId_;
	std::string calledNumber_;
	std::string callType_;
	std::string scenarioId_;
	std::string taskId_;
	std::string utterance_;
	std::string actionParams_;
	std::string callingNumber_;
	std::string instanceId_;
	std::string actionKey_;
};
} // namespace Model
} // namespace OutboundBot
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_OUTBOUNDBOT_MODEL_DIALOGUEREQUEST_H_
