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

#ifndef ALIBABACLOUD_EMR_MODEL_LISTUSERSBYCONDITIONRESULT_H_
#define ALIBABACLOUD_EMR_MODEL_LISTUSERSBYCONDITIONRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/emr/EmrExport.h>

namespace AlibabaCloud
{
	namespace Emr
	{
		namespace Model
		{
			class ALIBABACLOUD_EMR_EXPORT ListUsersByConditionResult : public ServiceResult
			{
			public:
				struct UserDTO
				{
					struct RoleDTO
					{
						std::string gmtCreate;
						std::string description;
						std::string gmtModified;
						std::string resourceType;
						long id;
						std::string name;
					};
					struct GroupDTO
					{
						struct RoleDTO2
						{
							std::string gmtCreate;
							std::string description;
							std::string gmtModified;
							std::string resourceType;
							long id;
							std::string name;
						};
						std::string type;
						std::string gmtCreate;
						long id;
						std::vector<GroupDTO::RoleDTO2> roleDTOList1;
						std::string name;
					};
					struct AccountDTO
					{
						std::string authType;
						std::string accountType;
						std::string aliyunUserId;
					};
					std::string status;
					std::string isSuperAdmin;
					std::string gmtCreate;
					std::string userName;
					std::string description;
					std::vector<UserDTO::GroupDTO> groupDTOList;
					std::vector<UserDTO::AccountDTO> accountDTOList;
					std::string gmtModified;
					std::vector<UserDTO::RoleDTO> roleDTOList;
					std::string userType;
					std::string aliyunUserId;
				};


				ListUsersByConditionResult();
				explicit ListUsersByConditionResult(const std::string &payload);
				~ListUsersByConditionResult();
				bool getPaging()const;
				std::vector<UserDTO> getData()const;

			protected:
				void parse(const std::string &payload);
			private:
				bool paging_;
				std::vector<UserDTO> data_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EMR_MODEL_LISTUSERSBYCONDITIONRESULT_H_