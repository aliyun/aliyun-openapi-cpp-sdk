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

#ifndef ALIBABACLOUD_EIAM_MODEL_GETUSERRESULT_H_
#define ALIBABACLOUD_EIAM_MODEL_GETUSERRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/eiam/EiamExport.h>

namespace AlibabaCloud
{
	namespace Eiam
	{
		namespace Model
		{
			class ALIBABACLOUD_EIAM_EXPORT GetUserResult : public ServiceResult
			{
			public:
				struct User
				{
					struct OrganizationalUnit
					{
						std::string organizationalUnitId;
						bool primary;
						std::string organizationalUnitName;
					};
					struct CustomField
					{
						std::string fieldValue;
						std::string fieldName;
					};
					struct Group
					{
						std::string groupName;
						std::string description;
						std::string groupId;
					};
					std::string userSourceType;
					std::string email;
					std::string description;
					long accountExpireTime;
					long passwordExpireTime;
					bool locked;
					std::string extensionAttributes;
					std::vector<Group> groups;
					std::string displayName;
					std::string primaryOrganizationalUnitId;
					std::string preferredLanguage;
					std::string phoneRegion;
					std::string status;
					bool phoneNumberVerified;
					std::string instanceId;
					long createTime;
					std::vector<OrganizationalUnit> organizationalUnits;
					bool emailVerified;
					long registerTime;
					std::vector<CustomField> customFields;
					bool passwordSet;
					std::string username;
					long lockExpireTime;
					std::string userId;
					long updateTime;
					std::string phoneNumber;
					std::string userSourceId;
					std::string userExternalId;
				};


				GetUserResult();
				explicit GetUserResult(const std::string &payload);
				~GetUserResult();
				User getUser()const;

			protected:
				void parse(const std::string &payload);
			private:
				User user_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EIAM_MODEL_GETUSERRESULT_H_