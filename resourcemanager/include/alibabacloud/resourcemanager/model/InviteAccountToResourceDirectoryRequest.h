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

#ifndef ALIBABACLOUD_RESOURCEMANAGER_MODEL_INVITEACCOUNTTORESOURCEDIRECTORYREQUEST_H_
#define ALIBABACLOUD_RESOURCEMANAGER_MODEL_INVITEACCOUNTTORESOURCEDIRECTORYREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/resourcemanager/ResourceManagerExport.h>

namespace AlibabaCloud
{
	namespace ResourceManager
	{
		namespace Model
		{
			class ALIBABACLOUD_RESOURCEMANAGER_EXPORT InviteAccountToResourceDirectoryRequest : public RpcServiceRequest
			{

			public:
				InviteAccountToResourceDirectoryRequest();
				~InviteAccountToResourceDirectoryRequest();

				std::string getNote()const;
				void setNote(const std::string& note);
				std::string getTargetType()const;
				void setTargetType(const std::string& targetType);
				std::string getTargetEntity()const;
				void setTargetEntity(const std::string& targetEntity);

            private:
				std::string note_;
				std::string targetType_;
				std::string targetEntity_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RESOURCEMANAGER_MODEL_INVITEACCOUNTTORESOURCEDIRECTORYREQUEST_H_