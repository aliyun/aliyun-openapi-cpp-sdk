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

#ifndef ALIBABACLOUD_EDS_USER_MODEL_FILTERUSERSRESULT_H_
#define ALIBABACLOUD_EDS_USER_MODEL_FILTERUSERSRESULT_H_

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
			class ALIBABACLOUD_EDS_USER_EXPORT FilterUsersResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct ExternalInfo
					{
						std::string externalName;
						std::string jobNumber;
					};
					struct UserSetPropertiesModelsItem
					{
						struct PropertyValuesItem
						{
							long propertyValueId;
							std::string propertyValue;
						};
						std::vector<UserSetPropertiesModelsItem::PropertyValuesItem> propertyValues;
						std::string userName;
						long userId;
						int propertyType;
						std::string propertyKey;
						long propertyId;
					};
					struct OrgListItem
					{
						std::string orgId;
						std::string orgNamePath;
						std::string orgName;
					};
					struct IdpInfo
					{
						std::string idpId;
						std::string idpName;
					};
					long status;
					std::string email;
					int passwordExpireRestDays;
					std::vector<Data::OrgListItem> orgList;
					bool enableAdminAccess;
					bool isTenantManager;
					std::vector<Data::UserSetPropertiesModelsItem> userSetPropertiesModels;
					std::string remark;
					long desktopCount;
					std::string ownerType;
					ExternalInfo externalInfo;
					std::string endUserId;
					long desktopGroupCount;
					std::string phone;
					std::string realNickName;
					long id;
					std::string autoLockTime;
					std::vector<Data::IdpInfo> supportLoginIdps;
					int passwordExpireDays;
				};


				FilterUsersResult();
				explicit FilterUsersResult(const std::string &payload);
				~FilterUsersResult();
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
#endif // !ALIBABACLOUD_EDS_USER_MODEL_FILTERUSERSRESULT_H_