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

#ifndef ALIBABACLOUD_CCC_MODEL_LISTUSERSRESULT_H_
#define ALIBABACLOUD_CCC_MODEL_LISTUSERSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ccc/CCCExport.h>

namespace AlibabaCloud
{
	namespace CCC
	{
		namespace Model
		{
			class ALIBABACLOUD_CCC_EXPORT ListUsersResult : public ServiceResult
			{
			public:
				struct Users
				{
					struct User
					{
						struct Detail
						{
							std::string loginName;
							std::string department;
							std::string email;
							std::string phone;
							std::string displayName;
						};
						struct Role
						{
							std::string roleName;
							std::string instanceId;
							std::string roleDescription;
							std::string roleId;
						};
						struct SkillLevel
						{
							struct Skill
							{
								std::string skillGroupName;
								std::string instanceId;
								std::string skillGroupId;
								std::string skillGroupDescription;
							};
							Skill skill;
							std::string skillLevelId;
							int level;
						};
						std::vector<User::SkillLevel> skillLevels;
						std::string privateOutboundNumberId;
						std::string instanceId;
						std::string userId;
						bool primary;
						std::string ramId;
						std::vector<User::Role> roles;
						Detail detail;
					};
					int totalCount;
					int pageSize;
					int pageNumber;
					std::vector<User> list;
				};


				ListUsersResult();
				explicit ListUsersResult(const std::string &payload);
				~ListUsersResult();
				std::string getMessage()const;
				int getHttpStatusCode()const;
				Users getUsers()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				int httpStatusCode_;
				Users users_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CCC_MODEL_LISTUSERSRESULT_H_