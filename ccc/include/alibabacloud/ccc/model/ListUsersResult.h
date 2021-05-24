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
				struct Data
				{
					struct UserDetail
					{
						struct PhoneNumber
						{
							bool active;
							std::string usage;
							std::string number;
							std::string city;
							std::string province;
						};
						struct UserSkillLevel
						{
							std::string skillGroupName;
							int skillLevel;
							std::string skillGroupId;
						};
						std::string loginName;
						std::string roleName;
						std::string email;
						std::string userId;
						std::vector<UserDetail::UserSkillLevel> skillLevelList;
						bool primaryAccount;
						std::string displayName;
						std::vector<UserDetail::PhoneNumber> personalOutboundNumberList;
						std::string mobile;
						std::string roleId;
						std::string workMode;
					};
					int totalCount;
					int pageSize;
					int pageNumber;
					std::vector<UserDetail> list;
				};


				ListUsersResult();
				explicit ListUsersResult(const std::string &payload);
				~ListUsersResult();
				std::string getMessage()const;
				int getHttpStatusCode()const;
				std::vector<std::string> getParams()const;
				Data getData()const;
				std::string getCode()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				int httpStatusCode_;
				std::vector<std::string> params_;
				Data data_;
				std::string code_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CCC_MODEL_LISTUSERSRESULT_H_