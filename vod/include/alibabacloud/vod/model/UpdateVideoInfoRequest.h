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

#ifndef ALIBABACLOUD_VOD_MODEL_UPDATEVIDEOINFOREQUEST_H_
#define ALIBABACLOUD_VOD_MODEL_UPDATEVIDEOINFOREQUEST_H_

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
			class ALIBABACLOUD_VOD_EXPORT UpdateVideoInfoRequest : public RpcServiceRequest
			{

			public:
				UpdateVideoInfoRequest();
				~UpdateVideoInfoRequest();

				std::string getCoverURL()const;
				void setCoverURL(const std::string& coverURL);
				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				long getCateId()const;
				void setCateId(long cateId);
				std::string getDescription()const;
				void setDescription(const std::string& description);
				std::string getVideoId()const;
				void setVideoId(const std::string& videoId);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getTitle()const;
				void setTitle(const std::string& title);
				std::string getTags()const;
				void setTags(const std::string& tags);

            private:
				std::string coverURL_;
				long resourceOwnerId_;
				std::string resourceOwnerAccount_;
				long cateId_;
				std::string description_;
				std::string videoId_;
				long ownerId_;
				std::string title_;
				std::string tags_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VOD_MODEL_UPDATEVIDEOINFOREQUEST_H_