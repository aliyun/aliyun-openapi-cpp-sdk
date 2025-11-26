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

#ifndef ALIBABACLOUD_OUTBOUNDBOT_MODEL_LISTANNOTATIONMISSIONSESSIONRESULT_H_
#define ALIBABACLOUD_OUTBOUNDBOT_MODEL_LISTANNOTATIONMISSIONSESSIONRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/outboundbot/OutboundBotExport.h>

namespace AlibabaCloud
{
	namespace OutboundBot
	{
		namespace Model
		{
			class ALIBABACLOUD_OUTBOUNDBOT_EXPORT ListAnnotationMissionSessionResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct AnnotationMissionSessionListItem
					{
						struct AnnotationMissionChatListItem
						{
							struct AnnotationMissionChatIntentUserSayInfoListItem
							{
								std::string instanceId;
								long createTime;
								std::string annotationMissionSessionId;
								std::string annotationMissionChatIntentUserSayInfoId;
								long dialogId;
								long intentId;
								bool _delete;
								long modifiedTime;
								std::string botId;
								std::string annotationMissionId;
								std::string content;
								bool create;
								std::string annotationMissionChatId;
							};
							struct AnnotationMissionChatVocabularyInfoListItem
							{
								std::string vocabulary;
								std::string instanceId;
								std::string vocabularyDescription;
								long createTime;
								std::string annotationMissionChatVocabularyInfoId;
								std::string annotationMissionSessionId;
								std::string vocabularyId;
								bool _delete;
								int vocabularyWeight;
								std::string vocabularyName;
								long modifiedTime;
								std::string annotationMissionId;
								bool create;
								std::string annotationMissionChatId;
							};
							struct AnnotationMissionChatCustomizationDataInfoListItem
							{
								std::string customizationDataDescription;
								std::string instanceId;
								long createTime;
								std::string annotationMissionSessionId;
								std::string customizationDataName;
								bool _delete;
								std::string customizationDataId;
								long modifiedTime;
								std::string annotationMissionId;
								std::string content;
								bool create;
								std::string annotationMissionChatCustomizationDataInfoId;
								std::string annotationMissionChatId;
								int customizationDataWeight;
							};
							struct AnnotationMissionChatTagInfoListItem
							{
								bool _delete;
								long modifiedTime;
								std::string instanceId;
								std::string annotationMissionId;
								bool create;
								long createTime;
								std::string annotationMissionSessionId;
								std::string annotationMissionChatId;
								std::string annotationMissionTagInfoName;
								std::string annotationMissionChatTagInfoId;
								std::string annotationMissionTagInfoId;
							};
							std::vector<AnnotationMissionChatListItem::AnnotationMissionChatTagInfoListItem> annotationMissionChatTagInfoList;
							std::string instanceId;
							long createTime;
							std::string annotationMissionSessionId;
							long occurTime;
							std::vector<AnnotationMissionChatListItem::AnnotationMissionChatVocabularyInfoListItem> annotationMissionChatVocabularyInfoList;
							int tagAnnotationStatus;
							int annotationStatus;
							std::vector<AnnotationMissionChatListItem::AnnotationMissionChatCustomizationDataInfoListItem> annotationMissionChatCustomizationDataInfoList;
							std::string answer;
							long modifiedTime;
							std::string annotationMissionId;
							std::string annotationAsrResult;
							std::string annotationMissionChatId;
							int translationError;
							int subStatus;
							std::vector<AnnotationMissionChatListItem::AnnotationMissionChatIntentUserSayInfoListItem> annotationMissionChatIntentUserSayInfoList;
							int intentAnnotationStatus;
							std::string originalAsrResult;
							int asrAnnotationStatus;
							std::string sequenceId;
						};
						std::string instanceId;
						long createTime;
						std::string annotationMissionSessionId;
						std::string scriptId;
						int annotationStatus;
						std::string jobGroupId;
						long modifiedTime;
						int version;
						std::string annotationMissionId;
						std::vector<AnnotationMissionSessionListItem::AnnotationMissionChatListItem> annotationMissionChatList;
						std::string sessionId;
						std::string jobId;
						bool debugConversation;
					};
					long totalCount;
					std::string message;
					std::vector<AnnotationMissionSessionListItem> annotationMissionSessionList;
					std::string annotationMissionId;
					bool success;
				};


				ListAnnotationMissionSessionResult();
				explicit ListAnnotationMissionSessionResult(const std::string &payload);
				~ListAnnotationMissionSessionResult();
				std::string getMessage()const;
				int getHttpStatusCode()const;
				Data getData()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				int httpStatusCode_;
				Data data_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_OUTBOUNDBOT_MODEL_LISTANNOTATIONMISSIONSESSIONRESULT_H_