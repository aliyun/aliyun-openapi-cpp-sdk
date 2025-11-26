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

#ifndef ALIBABACLOUD_OUTBOUNDBOT_MODEL_SAVEANNOTATIONMISSIONSESSIONLISTREQUEST_H_
#define ALIBABACLOUD_OUTBOUNDBOT_MODEL_SAVEANNOTATIONMISSIONSESSIONLISTREQUEST_H_

#include <alibabacloud/outboundbot/OutboundBotExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace OutboundBot {
namespace Model {
class ALIBABACLOUD_OUTBOUNDBOT_EXPORT SaveAnnotationMissionSessionListRequest : public RpcServiceRequest {
public:
	struct AnnotationMissionSessionList {
		std::string annotationMissionId;
		std::string jobId;
		long createTime;
		std::string scriptId;
		long modifiedTime;
		std::string instanceId;
		std::string annotationMissionSessionId;
		struct AnnotationMissionChatList {
			long createTime;
			int tagAnnotationStatus;
			int asrAnnotationStatus;
			std::string annotationAsrResult;
			std::string annotationMissionSessionId;
			int subStatus;
			std::string annotationMissionChatId;
			int annotationStatus;
			struct AnnotationMissionChatVocabularyInfoList {
				long createTime;
				std::string annotationMissionSessionId;
				std::string vocabularyId;
				std::string annotationMissionChatId;
				bool _delete;
				std::string annotationMissionId;
				long modifiedTime;
				std::string instanceId;
				std::string vocabulary;
				std::string vocabularyName;
				bool create;
				int vocabularyWeight;
				std::string annotationMissionChatVocabularyInfoId;
				std::string vocabularyDescription;
			};
			std::vector<AnnotationMissionChatVocabularyInfoList> annotationMissionChatVocabularyInfoList;
			std::string sequenceId;
			struct AnnotationMissionChatIntentUserSayInfoList {
				long createTime;
				std::string annotationMissionSessionId;
				std::string annotationMissionChatId;
				long intentId;
				long dialogId;
				bool _delete;
				std::string content;
				std::string annotationMissionId;
				long modifiedTime;
				std::string instanceId;
				std::string annotationMissionChatIntentUserSayInfoId;
				bool create;
				std::string botId;
			};
			std::vector<AnnotationMissionChatIntentUserSayInfoList> annotationMissionChatIntentUserSayInfoList;
			std::string annotationMissionId;
			long modifiedTime;
			std::string instanceId;
			int intentAnnotationStatus;
			long occurTime;
			std::string answer;
			struct AnnotationMissionChatCustomizationDataInfoList {
				long createTime;
				std::string annotationMissionSessionId;
				std::string annotationMissionChatId;
				std::string customizationDataId;
				bool _delete;
				std::string content;
				std::string annotationMissionId;
				int customizationDataWeight;
				long modifiedTime;
				std::string instanceId;
				bool create;
				std::string annotationMissionChatCustomizationDataInfoId;
				std::string customizationDataDescription;
				std::string customizationDataName;
			};
			std::vector<AnnotationMissionChatCustomizationDataInfoList> annotationMissionChatCustomizationDataInfoList;
			struct AnnotationMissionChatTagInfoList {
				std::string annotationMissionId;
				std::string annotationMissionTagInfoId;
				long createTime;
				std::string annotationMissionTagInfoName;
				std::string annotationMissionChatTagInfoId;
				long modifiedTime;
				std::string instanceId;
				std::string annotationMissionSessionId;
				std::string annotationMissionChatId;
				bool create;
				bool _delete;
			};
			std::vector<AnnotationMissionChatTagInfoList> annotationMissionChatTagInfoList;
			std::string originalAsrResult;
			int translationError;
		};
		std::vector<AnnotationMissionChatList> annotationMissionChatList;
		int annotationStatus;
		std::string jobGroupId;
		std::string sessionId;
	};
	SaveAnnotationMissionSessionListRequest();
	~SaveAnnotationMissionSessionListRequest();
	std::string getAgentId() const;
	void setAgentId(const std::string &agentId);
	std::string getUserNick() const;
	void setUserNick(const std::string &userNick);
	std::string getAgentKey() const;
	void setAgentKey(const std::string &agentKey);
	long getAnnotationMissionDataSourceType() const;
	void setAnnotationMissionDataSourceType(long annotationMissionDataSourceType);
	long getEnvironment() const;
	void setEnvironment(long environment);
	std::vector<AnnotationMissionSessionList> getAnnotationMissionSessionList() const;
	void setAnnotationMissionSessionList(const std::vector<AnnotationMissionSessionList> &annotationMissionSessionList);
	std::string getAnnotationMissionSessionListJsonString() const;
	void setAnnotationMissionSessionListJsonString(const std::string &annotationMissionSessionListJsonString);

private:
	std::string agentId_;
	std::string userNick_;
	std::string agentKey_;
	long annotationMissionDataSourceType_;
	long environment_;
	std::vector<AnnotationMissionSessionList> annotationMissionSessionList_;
	std::string annotationMissionSessionListJsonString_;
};
} // namespace Model
} // namespace OutboundBot
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_OUTBOUNDBOT_MODEL_SAVEANNOTATIONMISSIONSESSIONLISTREQUEST_H_
