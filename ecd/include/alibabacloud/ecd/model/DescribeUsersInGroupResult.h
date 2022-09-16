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

#ifndef ALIBABACLOUD_ECD_MODEL_DESCRIBEUSERSINGROUPRESULT_H_
#define ALIBABACLOUD_ECD_MODEL_DESCRIBEUSERSINGROUPRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ecd/EcdExport.h>

namespace AlibabaCloud
{
	namespace Ecd
	{
		namespace Model
		{
			class ALIBABACLOUD_ECD_EXPORT DescribeUsersInGroupResult : public ServiceResult
			{
			public:
				struct EndUser
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
					std::string endUserPhone;
					std::string endUserEmail;
					std::string endUserType;
					std::string desktopName;
					std::string desktopId;
					std::string endUserRemark;
					std::vector<EndUser::UserSetPropertiesModelsItem> userSetPropertiesModels;
					std::string endUserName;
					ExternalInfo externalInfo;
					std::string endUserId;
					std::string userDesktopId;
					std::string displayName;
					std::string connectionStatus;
				};


				DescribeUsersInGroupResult();
				explicit DescribeUsersInGroupResult(const std::string &payload);
				~DescribeUsersInGroupResult();
				int getOnlineUsersCount()const;
				std::string getNextToken()const;
				int getUsersCount()const;
				std::vector<EndUser> getEndUsers()const;

			protected:
				void parse(const std::string &payload);
			private:
				int onlineUsersCount_;
				std::string nextToken_;
				int usersCount_;
				std::vector<EndUser> endUsers_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECD_MODEL_DESCRIBEUSERSINGROUPRESULT_H_