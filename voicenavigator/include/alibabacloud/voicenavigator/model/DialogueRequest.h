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

#ifndef ALIBABACLOUD_VOICENAVIGATOR_MODEL_DIALOGUEREQUEST_H_
#define ALIBABACLOUD_VOICENAVIGATOR_MODEL_DIALOGUEREQUEST_H_

#include <alibabacloud/voicenavigator/VoiceNavigatorExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace VoiceNavigator {
namespace Model {
class ALIBABACLOUD_VOICENAVIGATOR_EXPORT DialogueRequest : public RpcServiceRequest {
public:
	DialogueRequest();
	~DialogueRequest();
	std::string getConversationId() const;
	void setConversationId(const std::string &conversationId);
	std::string getCallingNumber() const;
	void setCallingNumber(const std::string &callingNumber);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	std::string getCalledNumber() const;
	void setCalledNumber(const std::string &calledNumber);
	std::string getAdditionalContext() const;
	void setAdditionalContext(const std::string &additionalContext);
	long getInstanceOwnerId() const;
	void setInstanceOwnerId(long instanceOwnerId);
	std::string getUtterance() const;
	void setUtterance(const std::string &utterance);

private:
	std::string conversationId_;
	std::string callingNumber_;
	std::string instanceId_;
	std::string calledNumber_;
	std::string additionalContext_;
	long instanceOwnerId_;
	std::string utterance_;
};
} // namespace Model
} // namespace VoiceNavigator
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_VOICENAVIGATOR_MODEL_DIALOGUEREQUEST_H_
