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

#ifndef ALIBABACLOUD_OUTBOUNDBOT_MODEL_CREATEANNOTATIONMISSIONREQUEST_H_
#define ALIBABACLOUD_OUTBOUNDBOT_MODEL_CREATEANNOTATIONMISSIONREQUEST_H_

#include <alibabacloud/outboundbot/OutboundBotExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace OutboundBot {
namespace Model {
class ALIBABACLOUD_OUTBOUNDBOT_EXPORT CreateAnnotationMissionRequest : public RpcServiceRequest {
public:
	CreateAnnotationMissionRequest();
	~CreateAnnotationMissionRequest();
	std::string getSessionEndReasonFilterListJsonString() const;
	void setSessionEndReasonFilterListJsonString(const std::string &sessionEndReasonFilterListJsonString);
	int getSamplingType() const;
	void setSamplingType(int samplingType);
	std::vector<int> getSessionEndReasonFilterList() const;
	void setSessionEndReasonFilterList(const std::vector<int> &sessionEndReasonFilterList);
	int getAnnotationMissionDataSourceType() const;
	void setAnnotationMissionDataSourceType(int annotationMissionDataSourceType);
	std::string getScriptId() const;
	void setScriptId(const std::string &scriptId);
	std::string getAnnotationMissionDebugDataSourceListJsonString() const;
	void setAnnotationMissionDebugDataSourceListJsonString(const std::string &annotationMissionDebugDataSourceListJsonString);
	long getConversationTimeEndFilter() const;
	void setConversationTimeEndFilter(long conversationTimeEndFilter);
	long getConversationTimeStartFilter() const;
	void setConversationTimeStartFilter(long conversationTimeStartFilter);
	std::string getAgentId() const;
	void setAgentId(const std::string &agentId);
	bool getExcludeOtherSession() const;
	void setExcludeOtherSession(bool excludeOtherSession);
	bool getFinished() const;
	void setFinished(bool finished);
	int getSamplingRate() const;
	void setSamplingRate(int samplingRate);
	std::string getAgentKey() const;
	void setAgentKey(const std::string &agentKey);
	std::string getAnnotationMissionName() const;
	void setAnnotationMissionName(const std::string &annotationMissionName);
	std::string getChatbotId() const;
	void setChatbotId(const std::string &chatbotId);
	std::vector<int> getAnnotationMissionDebugDataSourceList() const;
	void setAnnotationMissionDebugDataSourceList(const std::vector<int> &annotationMissionDebugDataSourceList);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	int getSamplingCount() const;
	void setSamplingCount(int samplingCount);

private:
	std::string sessionEndReasonFilterListJsonString_;
	int samplingType_;
	std::vector<int> sessionEndReasonFilterList_;
	int annotationMissionDataSourceType_;
	std::string scriptId_;
	std::string annotationMissionDebugDataSourceListJsonString_;
	long conversationTimeEndFilter_;
	long conversationTimeStartFilter_;
	std::string agentId_;
	bool excludeOtherSession_;
	bool finished_;
	int samplingRate_;
	std::string agentKey_;
	std::string annotationMissionName_;
	std::string chatbotId_;
	std::vector<int> annotationMissionDebugDataSourceList_;
	std::string instanceId_;
	int samplingCount_;
};
} // namespace Model
} // namespace OutboundBot
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_OUTBOUNDBOT_MODEL_CREATEANNOTATIONMISSIONREQUEST_H_
