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

#ifndef ALIBABACLOUD_EHPC_MODEL_LISTUSERSASYNCRESULT_H_
#define ALIBABACLOUD_EHPC_MODEL_LISTUSERSASYNCRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ehpc/EHPCExport.h>

namespace AlibabaCloud
{
	namespace EHPC
	{
		namespace Model
		{
			class ALIBABACLOUD_EHPC_EXPORT ListUsersAsyncResult : public ServiceResult
			{
			public:
				struct UserInfo
				{
					std::string group;
					std::string userId;
					std::string addTime;
					std::string name;
					std::string groupId;
				};


				ListUsersAsyncResult();
				explicit ListUsersAsyncResult(const std::string &payload);
				~ListUsersAsyncResult();
				int getTotalCount()const;
				int getPageSize()const;
				int getPageNumber()const;
				std::string getAsyncId()const;
				std::string getAsyncStatus()const;
				std::vector<UserInfo> getUsers()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				int pageSize_;
				int pageNumber_;
				std::string asyncId_;
				std::string asyncStatus_;
				std::vector<UserInfo> users_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EHPC_MODEL_LISTUSERSASYNCRESULT_H_