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

#ifndef ALIBABACLOUD_LIVE_MODEL_LISTLIVEMESSAGEGROUPMESSAGESRESULT_H_
#define ALIBABACLOUD_LIVE_MODEL_LISTLIVEMESSAGEGROUPMESSAGESRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/live/LiveExport.h>

namespace AlibabaCloud
{
	namespace Live
	{
		namespace Model
		{
			class ALIBABACLOUD_LIVE_EXPORT ListLiveMessageGroupMessagesResult : public ServiceResult
			{
			public:
				struct Messages
				{
					struct Sender
					{
						std::string userId;
						std::string userInfo;
					};
					Sender sender;
					std::string msgTid;
					long totalMessages;
					long msgType;
					long seqNumber;
					std::string body;
					long timestamp;
				};


				ListLiveMessageGroupMessagesResult();
				explicit ListLiveMessageGroupMessagesResult(const std::string &payload);
				~ListLiveMessageGroupMessagesResult();
				bool getHasmore()const;
				long getNextPageToken()const;
				std::vector<Messages> getMessageList()const;
				std::string getGroupId()const;

			protected:
				void parse(const std::string &payload);
			private:
				bool hasmore_;
				long nextPageToken_;
				std::vector<Messages> messageList_;
				std::string groupId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_LIVE_MODEL_LISTLIVEMESSAGEGROUPMESSAGESRESULT_H_