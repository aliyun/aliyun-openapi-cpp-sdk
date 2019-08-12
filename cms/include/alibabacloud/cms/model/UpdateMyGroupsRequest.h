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

#ifndef ALIBABACLOUD_CMS_MODEL_UPDATEMYGROUPSREQUEST_H_
#define ALIBABACLOUD_CMS_MODEL_UPDATEMYGROUPSREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/cms/CmsExport.h>

namespace AlibabaCloud
{
	namespace Cms
	{
		namespace Model
		{
			class ALIBABACLOUD_CMS_EXPORT UpdateMyGroupsRequest : public RpcServiceRequest
			{

			public:
				UpdateMyGroupsRequest();
				~UpdateMyGroupsRequest();

				std::string getContactGroups()const;
				void setContactGroups(const std::string& contactGroups);
				std::string getGroupId()const;
				void setGroupId(const std::string& groupId);
				long getServiceId()const;
				void setServiceId(long serviceId);
				std::string getType()const;
				void setType(const std::string& type);
				std::string getGroupName()const;
				void setGroupName(const std::string& groupName);
				std::string getBindUrls()const;
				void setBindUrls(const std::string& bindUrls);

            private:
				std::string contactGroups_;
				std::string groupId_;
				long serviceId_;
				std::string type_;
				std::string groupName_;
				std::string bindUrls_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CMS_MODEL_UPDATEMYGROUPSREQUEST_H_