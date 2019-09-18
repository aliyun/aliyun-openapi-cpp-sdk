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

#ifndef ALIBABACLOUD_EMR_MODEL_ADDRESOURCETOUSERSREQUEST_H_
#define ALIBABACLOUD_EMR_MODEL_ADDRESOURCETOUSERSREQUEST_H_

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
			class ALIBABACLOUD_EMR_EXPORT AddResourceToUsersRequest : public RpcServiceRequest
			{

			public:
				AddResourceToUsersRequest();
				~AddResourceToUsersRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getResourceId()const;
				void setResourceId(const std::string& resourceId);
				std::vector<std::string> getUserIdList()const;
				void setUserIdList(const std::vector<std::string>& userIdList);
				std::string getResourceType()const;
				void setResourceType(const std::string& resourceType);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::vector<long> getRoleIdList()const;
				void setRoleIdList(const std::vector<long>& roleIdList);

            private:
				long resourceOwnerId_;
				std::string resourceId_;
				std::vector<std::string> userIdList_;
				std::string resourceType_;
				std::string accessKeyId_;
				std::string regionId_;
				std::vector<long> roleIdList_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EMR_MODEL_ADDRESOURCETOUSERSREQUEST_H_