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

#ifndef ALIBABACLOUD_EMR_MODEL_UPDATEUSERREQUEST_H_
#define ALIBABACLOUD_EMR_MODEL_UPDATEUSERREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/emr/EmrExport.h>

namespace AlibabaCloud
{
	namespace Emr
	{
		namespace Model
		{
			class ALIBABACLOUD_EMR_EXPORT UpdateUserRequest : public RpcServiceRequest
			{
				struct UserAccountParamList
				{
					std::string accountType;
					std::string authType;
					std::string accountPassword;
				};

			public:
				UpdateUserRequest();
				~UpdateUserRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getUserType()const;
				void setUserType(const std::string& userType);
				std::string getDescription()const;
				void setDescription(const std::string& description);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::vector<UserAccountParamList> getUserAccountParamList()const;
				void setUserAccountParamList(const std::vector<UserAccountParamList>& userAccountParamList);
				std::vector<long> getGroupIdList()const;
				void setGroupIdList(const std::vector<long>& groupIdList);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::vector<long> getRoleIdList()const;
				void setRoleIdList(const std::vector<long>& roleIdList);
				std::string getAliyunUserId()const;
				void setAliyunUserId(const std::string& aliyunUserId);
				std::string getUserName()const;
				void setUserName(const std::string& userName);
				std::string getStatus()const;
				void setStatus(const std::string& status);

            private:
				long resourceOwnerId_;
				std::string userType_;
				std::string description_;
				std::string accessKeyId_;
				std::vector<UserAccountParamList> userAccountParamList_;
				std::vector<long> groupIdList_;
				std::string regionId_;
				std::vector<long> roleIdList_;
				std::string aliyunUserId_;
				std::string userName_;
				std::string status_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EMR_MODEL_UPDATEUSERREQUEST_H_