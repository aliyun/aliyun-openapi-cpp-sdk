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

#ifndef ALIBABACLOUD_VOD_MODEL_PRODUCEEDITINGPROJECTVIDEOREQUEST_H_
#define ALIBABACLOUD_VOD_MODEL_PRODUCEEDITINGPROJECTVIDEOREQUEST_H_

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
			class ALIBABACLOUD_VOD_EXPORT ProduceEditingProjectVideoRequest : public RpcServiceRequest
			{

			public:
				ProduceEditingProjectVideoRequest();
				~ProduceEditingProjectVideoRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getMediaMetadata()const;
				void setMediaMetadata(const std::string& mediaMetadata);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getDescription()const;
				void setDescription(const std::string& description);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getTitle()const;
				void setTitle(const std::string& title);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getCoverURL()const;
				void setCoverURL(const std::string& coverURL);
				std::string getUserData()const;
				void setUserData(const std::string& userData);
				std::string getTimeline()const;
				void setTimeline(const std::string& timeline);
				std::string getProduceConfig()const;
				void setProduceConfig(const std::string& produceConfig);
				std::string getProjectId()const;
				void setProjectId(const std::string& projectId);

            private:
				long resourceOwnerId_;
				std::string mediaMetadata_;
				std::string resourceOwnerAccount_;
				std::string description_;
				long ownerId_;
				std::string title_;
				std::string accessKeyId_;
				std::string coverURL_;
				std::string userData_;
				std::string timeline_;
				std::string produceConfig_;
				std::string projectId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VOD_MODEL_PRODUCEEDITINGPROJECTVIDEOREQUEST_H_