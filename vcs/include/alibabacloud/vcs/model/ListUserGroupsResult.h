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

#ifndef ALIBABACLOUD_VCS_MODEL_LISTUSERGROUPSRESULT_H_
#define ALIBABACLOUD_VCS_MODEL_LISTUSERGROUPSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/vcs/VcsExport.h>

namespace AlibabaCloud
{
	namespace Vcs
	{
		namespace Model
		{
			class ALIBABACLOUD_VCS_EXPORT ListUserGroupsResult : public ServiceResult
			{
			public:
				struct DataItem
				{
					long parentUserGroupId;
					long userCount;
					std::string userGroupName;
					long userGroupId;
					std::string createTime;
					std::string updateTime;
					std::string isvSubId;
					std::string creator;
				};


				ListUserGroupsResult();
				explicit ListUserGroupsResult(const std::string &payload);
				~ListUserGroupsResult();
				std::string getMessage()const;
				std::vector<DataItem> getData()const;
				std::string getCode()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				std::vector<DataItem> data_;
				std::string code_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VCS_MODEL_LISTUSERGROUPSRESULT_H_