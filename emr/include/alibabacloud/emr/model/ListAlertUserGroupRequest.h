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

#ifndef ALIBABACLOUD_EMR_MODEL_LISTALERTUSERGROUPREQUEST_H_
#define ALIBABACLOUD_EMR_MODEL_LISTALERTUSERGROUPREQUEST_H_

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
			class ALIBABACLOUD_EMR_EXPORT ListAlertUserGroupRequest : public RpcServiceRequest
			{

			public:
				ListAlertUserGroupRequest();
				~ListAlertUserGroupRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getFromApp()const;
				void setFromApp(const std::string& fromApp);
				std::string getUserId()const;
				void setUserId(const std::string& userId);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getIds()const;
				void setIds(const std::string& ids);

            private:
				long resourceOwnerId_;
				std::string fromApp_;
				std::string userId_;
				std::string accessKeyId_;
				std::string regionId_;
				std::string ids_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EMR_MODEL_LISTALERTUSERGROUPREQUEST_H_