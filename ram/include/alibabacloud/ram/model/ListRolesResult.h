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

#ifndef ALIBABACLOUD_RAM_MODEL_LISTROLESRESULT_H_
#define ALIBABACLOUD_RAM_MODEL_LISTROLESRESULT_H_

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
			class ALIBABACLOUD_RAM_EXPORT ListRolesResult : public ServiceResult
			{
			public:
				struct Role
				{
					struct Tag
					{
						std::string tagKey;
						std::string tagValue;
					};
					std::string updateDate;
					long maxSessionDuration;
					std::string roleName;
					std::string description;
					std::string arn;
					std::string createDate;
					std::string roleId;
					std::vector<Role::Tag> tags;
				};


				ListRolesResult();
				explicit ListRolesResult(const std::string &payload);
				~ListRolesResult();
				std::vector<Role> getRoles()const;
				bool getIsTruncated()const;
				std::string getMarker()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<Role> roles_;
				bool isTruncated_;
				std::string marker_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RAM_MODEL_LISTROLESRESULT_H_