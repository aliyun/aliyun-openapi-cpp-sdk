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

#ifndef ALIBABACLOUD_EMR_MODEL_CREATEBATCHUSERSREQUEST_H_
#define ALIBABACLOUD_EMR_MODEL_CREATEBATCHUSERSREQUEST_H_

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
			class ALIBABACLOUD_EMR_EXPORT CreateBatchUsersRequest : public RpcServiceRequest
			{
				struct UserBaseParamList
				{
					std::string aliyunUserId;
					std::string userName;
					std::string userType;
					std::string isSuperAdmin;
				};

			public:
				CreateBatchUsersRequest();
				~CreateBatchUsersRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::vector<UserBaseParamList> getUserBaseParamList()const;
				void setUserBaseParamList(const std::vector<UserBaseParamList>& userBaseParamList);
				std::vector<long> getRoleId()const;
				void setRoleId(const std::vector<long>& roleId);
				std::vector<long> getGroupId()const;
				void setGroupId(const std::vector<long>& groupId);
				std::string getDescription()const;
				void setDescription(const std::string& description);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);

            private:
				long resourceOwnerId_;
				std::vector<UserBaseParamList> userBaseParamList_;
				std::vector<long> roleId_;
				std::vector<long> groupId_;
				std::string description_;
				std::string accessKeyId_;
				std::string regionId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EMR_MODEL_CREATEBATCHUSERSREQUEST_H_