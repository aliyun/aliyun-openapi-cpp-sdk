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

#ifndef ALIBABACLOUD_VOICENAVIGATOR_MODEL_QUERYCONVERSATIONSRESULT_H_
#define ALIBABACLOUD_VOICENAVIGATOR_MODEL_QUERYCONVERSATIONSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/voicenavigator/VoiceNavigatorExport.h>

namespace AlibabaCloud
{
	namespace VoiceNavigator
	{
		namespace Model
		{
			class ALIBABACLOUD_VOICENAVIGATOR_EXPORT QueryConversationsResult : public ServiceResult
			{
			public:
				struct Conversation
				{
					int effectiveAnswerCount;
					std::string conversationId;
					bool transferredToAgent;
					long endTime;
					long beginTime;
					std::string skillGroupId;
					std::string callingNumber;
					int userUtteranceCount;
				};


				QueryConversationsResult();
				explicit QueryConversationsResult(const std::string &payload);
				~QueryConversationsResult();
				long getTotalCount()const;
				int getPageSize()const;
				int getPageNumber()const;
				std::vector<Conversation> getConversations()const;

			protected:
				void parse(const std::string &payload);
			private:
				long totalCount_;
				int pageSize_;
				int pageNumber_;
				std::vector<Conversation> conversations_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VOICENAVIGATOR_MODEL_QUERYCONVERSATIONSRESULT_H_