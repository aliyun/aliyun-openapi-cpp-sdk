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

#ifndef ALIBABACLOUD_VOD_MODEL_SUBMITSNAPSHOTJOBREQUEST_H_
#define ALIBABACLOUD_VOD_MODEL_SUBMITSNAPSHOTJOBREQUEST_H_

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
			class ALIBABACLOUD_VOD_EXPORT SubmitSnapshotJobRequest : public RpcServiceRequest
			{

			public:
				SubmitSnapshotJobRequest();
				~SubmitSnapshotJobRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				long getCount()const;
				void setCount(long count);
				std::string getVideoId()const;
				void setVideoId(const std::string& videoId);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getUserData()const;
				void setUserData(const std::string& userData);
				long getSpecifiedOffsetTime()const;
				void setSpecifiedOffsetTime(long specifiedOffsetTime);
				std::string getWidth()const;
				void setWidth(const std::string& width);
				long getInterval()const;
				void setInterval(long interval);
				std::string getSpriteSnapshotConfig()const;
				void setSpriteSnapshotConfig(const std::string& spriteSnapshotConfig);
				std::string getSnapshotTemplateId()const;
				void setSnapshotTemplateId(const std::string& snapshotTemplateId);
				std::string getHeight()const;
				void setHeight(const std::string& height);

            private:
				long resourceOwnerId_;
				std::string resourceOwnerAccount_;
				long count_;
				std::string videoId_;
				long ownerId_;
				std::string accessKeyId_;
				std::string userData_;
				long specifiedOffsetTime_;
				std::string width_;
				long interval_;
				std::string spriteSnapshotConfig_;
				std::string snapshotTemplateId_;
				std::string height_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VOD_MODEL_SUBMITSNAPSHOTJOBREQUEST_H_