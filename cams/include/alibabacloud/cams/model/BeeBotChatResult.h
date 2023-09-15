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

#ifndef ALIBABACLOUD_CAMS_MODEL_BEEBOTCHATRESULT_H_
#define ALIBABACLOUD_CAMS_MODEL_BEEBOTCHATRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/cams/CamsExport.h>

namespace AlibabaCloud
{
	namespace Cams
	{
		namespace Model
		{
			class ALIBABACLOUD_CAMS_EXPORT BeeBotChatResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct 消息的列表
					{
						struct Knowledge
						{
							struct RelatedKnowledgesItem
							{
								std::string title;
								std::string knowledgeId;
							};
							std::string category;
							std::string contentType;
							std::string content;
							std::string answerSource;
							std::vector<RelatedKnowledgesItem> relatedKnowledges;
							std::string hitStatement;
							std::string summary;
							std::string title;
							std::string id;
						};
						struct Text
						{
							struct SlotsItem
							{
								std::string origin;
								bool hit;
								std::string value;
								std::string name;
							};
							std::string ext;
							std::string contentType;
							std::string nodeName;
							std::string userDefinedChatTitle;
							std::string answerSource;
							std::string hitStatement;
							std::vector<SlotsItem> slots;
							std::string dialogName;
							std::string intentName;
							std::string metaData;
							std::string content;
							std::string nodeId;
							std::string externalFlags;
						};
						struct Recommend
						{
							std::string answerSource;
							std::string title;
							std::string knowledgeId;
						};
						std::string answerSource;
						Text text;
						std::vector<消息的列表::Recommend> recommends;
						std::string answerType;
						Knowledge knowledge;
					};
					std::vector<消息的列表> messages;
					std::string sessionId;
					std::string messageId;
				};


				BeeBotChatResult();
				explicit BeeBotChatResult(const std::string &payload);
				~BeeBotChatResult();
				std::string getAccessDeniedDetail()const;
				std::string getMessage()const;
				Data getData()const;
				std::string getCode()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string accessDeniedDetail_;
				std::string message_;
				Data data_;
				std::string code_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CAMS_MODEL_BEEBOTCHATRESULT_H_