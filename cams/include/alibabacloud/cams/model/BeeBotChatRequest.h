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

#ifndef ALIBABACLOUD_CAMS_MODEL_BEEBOTCHATREQUEST_H_
#define ALIBABACLOUD_CAMS_MODEL_BEEBOTCHATREQUEST_H_

#include <alibabacloud/cams/CamsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Cams {
namespace Model {
class ALIBABACLOUD_CAMS_EXPORT BeeBotChatRequest : public RpcServiceRequest {
public:
	BeeBotChatRequest();
	~BeeBotChatRequest();
	std::string getSessionId() const;
	void setSessionId(const std::string &sessionId);
	std::string getApiCode() const;
	void setApiCode(const std::string &apiCode);
	std::string getIntentName() const;
	void setIntentName(const std::string &intentName);
	std::string getSenderNick() const;
	void setSenderNick(const std::string &senderNick);
	std::vector<std::string> getPerspective() const;
	void setPerspective(const std::vector<std::string> &perspective);
	std::string getUtterance() const;
	void setUtterance(const std::string &utterance);
	std::string getIsvCode() const;
	void setIsvCode(const std::string &isvCode);
	std::string getProdCode() const;
	void setProdCode(const std::string &prodCode);
	std::string getKnowledgeId() const;
	void setKnowledgeId(const std::string &knowledgeId);
	std::map<std::string, std::string> getVendorParam() const;
	void setVendorParam(const std::map<std::string, std::string> &vendorParam);
	std::string getSenderId() const;
	void setSenderId(const std::string &senderId);
	std::string getChatBotInstanceId() const;
	void setChatBotInstanceId(const std::string &chatBotInstanceId);
	std::string getCustSpaceId() const;
	void setCustSpaceId(const std::string &custSpaceId);

private:
	std::string sessionId_;
	std::string apiCode_;
	std::string intentName_;
	std::string senderNick_;
	std::vector<std::string> perspective_;
	std::string utterance_;
	std::string isvCode_;
	std::string prodCode_;
	std::string knowledgeId_;
	std::map<std::string, std::string> vendorParam_;
	std::string senderId_;
	std::string chatBotInstanceId_;
	std::string custSpaceId_;
};
} // namespace Model
} // namespace Cams
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CAMS_MODEL_BEEBOTCHATREQUEST_H_
