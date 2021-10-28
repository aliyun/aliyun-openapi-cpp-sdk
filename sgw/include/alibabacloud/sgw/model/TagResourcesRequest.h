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

#ifndef ALIBABACLOUD_SGW_MODEL_TAGRESOURCESREQUEST_H_
#define ALIBABACLOUD_SGW_MODEL_TAGRESOURCESREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/sgw/SgwExport.h>

namespace AlibabaCloud
{
	namespace Sgw
	{
		namespace Model
		{
			class ALIBABACLOUD_SGW_EXPORT TagResourcesRequest : public RpcServiceRequest
			{
			public:
				struct Tag
				{
					std::string value;
					std::string key;
				};

			public:
				TagResourcesRequest();
				~TagResourcesRequest();

				std::vector<std::string> getResourceId()const;
				void setResourceId(const std::vector<std::string>& resourceId);
				std::string getResourceType()const;
				void setResourceType(const std::string& resourceType);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getSecurityToken()const;
				void setSecurityToken(const std::string& securityToken);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::vector<Tag> getTag()const;
				void setTag(const std::vector<Tag>& tag);
				std::string getResourceRegionId()const;
				void setResourceRegionId(const std::string& resourceRegionId);

            private:
				std::vector<std::string> resourceId_;
				std::string resourceType_;
				std::string accessKeyId_;
				std::string securityToken_;
				std::string regionId_;
				std::vector<Tag> tag_;
				std::string resourceRegionId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SGW_MODEL_TAGRESOURCESREQUEST_H_