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

#ifndef ALIBABACLOUD_OUTBOUNDBOT_MODEL_MODIFYSCRIPTREQUEST_H_
#define ALIBABACLOUD_OUTBOUNDBOT_MODEL_MODIFYSCRIPTREQUEST_H_

#include <alibabacloud/outboundbot/OutboundBotExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace OutboundBot {
namespace Model {
class ALIBABACLOUD_OUTBOUNDBOT_EXPORT ModifyScriptRequest : public RpcServiceRequest {
public:
	ModifyScriptRequest();
	~ModifyScriptRequest();
	std::string getTtsConfig() const;
	void setTtsConfig(const std::string &ttsConfig);
	std::string getIndustry() const;
	void setIndustry(const std::string &industry);
	std::string getScriptName() const;
	void setScriptName(const std::string &scriptName);
	std::string getScene() const;
	void setScene(const std::string &scene);
	std::string getScriptId() const;
	void setScriptId(const std::string &scriptId);
	std::vector<std::string> getScriptWaveform() const;
	void setScriptWaveform(const std::vector<std::string> &scriptWaveform);
	std::string getAsrConfig() const;
	void setAsrConfig(const std::string &asrConfig);
	std::string getMiniPlaybackConfigListJsonString() const;
	void setMiniPlaybackConfigListJsonString(const std::string &miniPlaybackConfigListJsonString);
	bool getEmotionEnable() const;
	void setEmotionEnable(bool emotionEnable);
	std::string getNlsConfig() const;
	void setNlsConfig(const std::string &nlsConfig);
	bool getNewBargeInEnable() const;
	void setNewBargeInEnable(bool newBargeInEnable);
	bool getMiniPlaybackEnable() const;
	void setMiniPlaybackEnable(bool miniPlaybackEnable);
	std::string getChatbotId() const;
	void setChatbotId(const std::string &chatbotId);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	std::string getScriptDescription() const;
	void setScriptDescription(const std::string &scriptDescription);
	bool getLongWaitEnable() const;
	void setLongWaitEnable(bool longWaitEnable);
	std::vector<std::string> getScriptContent() const;
	void setScriptContent(const std::vector<std::string> &scriptContent);

private:
	std::string ttsConfig_;
	std::string industry_;
	std::string scriptName_;
	std::string scene_;
	std::string scriptId_;
	std::vector<std::string> scriptWaveform_;
	std::string asrConfig_;
	std::string miniPlaybackConfigListJsonString_;
	bool emotionEnable_;
	std::string nlsConfig_;
	bool newBargeInEnable_;
	bool miniPlaybackEnable_;
	std::string chatbotId_;
	std::string instanceId_;
	std::string scriptDescription_;
	bool longWaitEnable_;
	std::vector<std::string> scriptContent_;
};
} // namespace Model
} // namespace OutboundBot
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_OUTBOUNDBOT_MODEL_MODIFYSCRIPTREQUEST_H_
