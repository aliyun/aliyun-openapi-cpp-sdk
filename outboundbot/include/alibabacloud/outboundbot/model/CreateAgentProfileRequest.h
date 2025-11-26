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

#ifndef ALIBABACLOUD_OUTBOUNDBOT_MODEL_CREATEAGENTPROFILEREQUEST_H_
#define ALIBABACLOUD_OUTBOUNDBOT_MODEL_CREATEAGENTPROFILEREQUEST_H_

#include <alibabacloud/outboundbot/OutboundBotExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace OutboundBot {
namespace Model {
class ALIBABACLOUD_OUTBOUNDBOT_EXPORT CreateAgentProfileRequest : public RpcServiceRequest {
public:
	CreateAgentProfileRequest();
	~CreateAgentProfileRequest();
	std::string getModelConfig() const;
	void setModelConfig(const std::string &modelConfig);
	std::string getAppIp() const;
	void setAppIp(const std::string &appIp);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	std::string getAgentProfileTemplateId() const;
	void setAgentProfileTemplateId(const std::string &agentProfileTemplateId);
	std::string getScriptId() const;
	void setScriptId(const std::string &scriptId);
	std::string getVariablesJson() const;
	void setVariablesJson(const std::string &variablesJson);
	std::string getInstructionJson() const;
	void setInstructionJson(const std::string &instructionJson);
	std::string getScenario() const;
	void setScenario(const std::string &scenario);
	std::string getModel() const;
	void setModel(const std::string &model);
	std::string getLabelsJson() const;
	void setLabelsJson(const std::string &labelsJson);
	std::string getFaqCategoryIds() const;
	void setFaqCategoryIds(const std::string &faqCategoryIds);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	std::string getPromptJson() const;
	void setPromptJson(const std::string &promptJson);
	std::string getPrompt() const;
	void setPrompt(const std::string &prompt);

private:
	std::string modelConfig_;
	std::string appIp_;
	std::string description_;
	std::string agentProfileTemplateId_;
	std::string scriptId_;
	std::string variablesJson_;
	std::string instructionJson_;
	std::string scenario_;
	std::string model_;
	std::string labelsJson_;
	std::string faqCategoryIds_;
	std::string instanceId_;
	std::string promptJson_;
	std::string prompt_;
};
} // namespace Model
} // namespace OutboundBot
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_OUTBOUNDBOT_MODEL_CREATEAGENTPROFILEREQUEST_H_
