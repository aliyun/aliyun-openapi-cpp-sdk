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

#ifndef ALIBABACLOUD_RAM_MODEL_LISTENTITIESFORPOLICYRESULT_H_
#define ALIBABACLOUD_RAM_MODEL_LISTENTITIESFORPOLICYRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ram/RamExport.h>

namespace AlibabaCloud
{
	namespace Ram
	{
		namespace Model
		{
			class ALIBABACLOUD_RAM_EXPORT ListEntitiesForPolicyResult : public ServiceResult
			{
			public:
				struct Group
				{
					std::string groupName;
					std::string attachDate;
					std::string comments;
				};
				struct Role
				{
					std::string roleName;
					std::string description;
					std::string attachDate;
					std::string arn;
					std::string roleId;
				};
				struct User
				{
					std::string userName;
					std::string attachDate;
					std::string userId;
					std::string displayName;
				};


				ListEntitiesForPolicyResult();
				explicit ListEntitiesForPolicyResult(const std::string &payload);
				~ListEntitiesForPolicyResult();
				std::vector<Group> getGroups()const;
				std::vector<Role> getRoles()const;
				std::vector<User> getUsers()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<Group> groups_;
				std::vector<Role> roles_;
				std::vector<User> users_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RAM_MODEL_LISTENTITIESFORPOLICYRESULT_H_