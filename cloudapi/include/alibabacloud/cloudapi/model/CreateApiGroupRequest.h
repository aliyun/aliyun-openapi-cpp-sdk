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

#ifndef ALIBABACLOUD_CLOUDAPI_MODEL_CREATEAPIGROUPREQUEST_H_
#define ALIBABACLOUD_CLOUDAPI_MODEL_CREATEAPIGROUPREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/cloudapi/CloudAPIExport.h>

namespace AlibabaCloud
{
	namespace CloudAPI
	{
		namespace Model
		{
			class ALIBABACLOUD_CLOUDAPI_EXPORT CreateApiGroupRequest : public RpcServiceRequest
			{
				struct Tag
				{
					std::string value;
					std::string key;
				};

			public:
				CreateApiGroupRequest();
				~CreateApiGroupRequest();

				std::string getInstanceId()const;
				void setInstanceId(const std::string& instanceId);
				std::string getSecurityToken()const;
				void setSecurityToken(const std::string& securityToken);
				std::string getDescription()const;
				void setDescription(const std::string& description);
				std::string getSource()const;
				void setSource(const std::string& source);
				std::vector<Tag> getTag()const;
				void setTag(const std::vector<Tag>& tag);
				std::string getGroupName()const;
				void setGroupName(const std::string& groupName);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);

            private:
				std::string instanceId_;
				std::string securityToken_;
				std::string description_;
				std::string source_;
				std::vector<Tag> tag_;
				std::string groupName_;
				std::string accessKeyId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CLOUDAPI_MODEL_CREATEAPIGROUPREQUEST_H_