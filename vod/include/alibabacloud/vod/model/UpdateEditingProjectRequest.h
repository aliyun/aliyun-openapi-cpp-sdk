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

#ifndef ALIBABACLOUD_VOD_MODEL_UPDATEEDITINGPROJECTREQUEST_H_
#define ALIBABACLOUD_VOD_MODEL_UPDATEEDITINGPROJECTREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/vod/VodExport.h>

namespace AlibabaCloud
{
	namespace Vod
	{
		namespace Model
		{
			class ALIBABACLOUD_VOD_EXPORT UpdateEditingProjectRequest : public RpcServiceRequest
			{

			public:
				UpdateEditingProjectRequest();
				~UpdateEditingProjectRequest();

				std::string getCoverURL()const;
				void setCoverURL(const std::string& coverURL);
				std::string getResourceOwnerId()const;
				void setResourceOwnerId(const std::string& resourceOwnerId);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				std::string getTimeline()const;
				void setTimeline(const std::string& timeline);
				std::string getDescription()const;
				void setDescription(const std::string& description);
				std::string getOwnerId()const;
				void setOwnerId(const std::string& ownerId);
				std::string getTitle()const;
				void setTitle(const std::string& title);
				std::string getProjectId()const;
				void setProjectId(const std::string& projectId);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);

            private:
				std::string coverURL_;
				std::string resourceOwnerId_;
				std::string resourceOwnerAccount_;
				std::string ownerAccount_;
				std::string timeline_;
				std::string description_;
				std::string ownerId_;
				std::string title_;
				std::string projectId_;
				std::string accessKeyId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VOD_MODEL_UPDATEEDITINGPROJECTREQUEST_H_