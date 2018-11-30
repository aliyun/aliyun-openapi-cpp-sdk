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

#ifndef ALIBABACLOUD_VOD_MODEL_GETVIDEOPLAYINFOREQUEST_H_
#define ALIBABACLOUD_VOD_MODEL_GETVIDEOPLAYINFOREQUEST_H_

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
			class ALIBABACLOUD_VOD_EXPORT GetVideoPlayInfoRequest : public RpcServiceRequest
			{

			public:
				GetVideoPlayInfoRequest();
				~GetVideoPlayInfoRequest();

				std::string getSignVersion()const;
				void setSignVersion(const std::string& signVersion);
				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getClientVersion()const;
				void setClientVersion(const std::string& clientVersion);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getChannel()const;
				void setChannel(const std::string& channel);
				std::string getPlaySign()const;
				void setPlaySign(const std::string& playSign);
				std::string getVideoId()const;
				void setVideoId(const std::string& videoId);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				long getClientTS()const;
				void setClientTS(long clientTS);

            private:
				std::string signVersion_;
				long resourceOwnerId_;
				std::string clientVersion_;
				std::string resourceOwnerAccount_;
				std::string channel_;
				std::string playSign_;
				std::string videoId_;
				long ownerId_;
				std::string accessKeyId_;
				long clientTS_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VOD_MODEL_GETVIDEOPLAYINFOREQUEST_H_