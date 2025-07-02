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

#ifndef ALIBABACLOUD_EDS_USER_MODEL_DESCRIBEUSERSRESULT_H_
#define ALIBABACLOUD_EDS_USER_MODEL_DESCRIBEUSERSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/eds-user/Eds_userExport.h>

namespace AlibabaCloud
{
	namespace Eds_user
	{
		namespace Model
		{
			class ALIBABACLOUD_EDS_USER_EXPORT DescribeUsersResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct Extras
					{
						std::string assignedResourceCount;
					};
					struct Group
					{
						std::string groupName;
						std::string groupId;
					};
					struct Org
					{
						std::string orgId;
						std::string orgNamePath;
						std::string orgName;
					};
					struct Property
					{
						std::string value;
						std::string key;
					};
					long status;
					std::string email;
					std::string address;
					bool isTenantManager;
					std::vector<Data::Org> orgs;
					Extras extras;
					std::vector<Data::Property> properties;
					std::string nickName;
					std::string jobNumber;
					std::string avatar;
					std::string remark;
					std::string orgId;
					std::string ownerType;
					std::string endUserId;
					std::string wyId;
					std::vector<Data::Group> groups;
					std::string phone;
					std::string realNickName;
					std::string externalName;
					long id;
				};


				DescribeUsersResult();
				explicit DescribeUsersResult(const std::string &payload);
				~DescribeUsersResult();
				std::string getNextToken()const;
				std::vector<Data> getUsers()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string nextToken_;
				std::vector<Data> users_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EDS_USER_MODEL_DESCRIBEUSERSRESULT_H_