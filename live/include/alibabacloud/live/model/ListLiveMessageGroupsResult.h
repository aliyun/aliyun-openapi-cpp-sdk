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

#ifndef ALIBABACLOUD_LIVE_MODEL_LISTLIVEMESSAGEGROUPSRESULT_H_
#define ALIBABACLOUD_LIVE_MODEL_LISTLIVEMESSAGEGROUPSRESULT_H_

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
			class ALIBABACLOUD_LIVE_EXPORT ListLiveMessageGroupsResult : public ServiceResult
			{
			public:
				struct Groups
				{
					std::string groupName;
					bool _delete;
					std::vector<std::string> adminList;
					long createtime;
					std::string groupInfo;
					std::string creatorId;
					std::string groupId;
				};


				ListLiveMessageGroupsResult();
				explicit ListLiveMessageGroupsResult(const std::string &payload);
				~ListLiveMessageGroupsResult();
				bool getHasmore()const;
				std::vector<Groups> getGroupList()const;
				std::string getNextpageToken()const;

			protected:
				void parse(const std::string &payload);
			private:
				bool hasmore_;
				std::vector<Groups> groupList_;
				std::string nextpageToken_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_LIVE_MODEL_LISTLIVEMESSAGEGROUPSRESULT_H_