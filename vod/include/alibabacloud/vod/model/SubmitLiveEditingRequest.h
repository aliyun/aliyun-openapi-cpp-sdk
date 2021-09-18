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

#ifndef ALIBABACLOUD_VOD_MODEL_SUBMITLIVEEDITINGREQUEST_H_
#define ALIBABACLOUD_VOD_MODEL_SUBMITLIVEEDITINGREQUEST_H_

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
			class ALIBABACLOUD_VOD_EXPORT SubmitLiveEditingRequest : public RpcServiceRequest
			{

			public:
				SubmitLiveEditingRequest();
				~SubmitLiveEditingRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getClips()const;
				void setClips(const std::string& clips);
				std::string getDescription()const;
				void setDescription(const std::string& description);
				std::string getTitle()const;
				void setTitle(const std::string& title);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getCoverURL()const;
				void setCoverURL(const std::string& coverURL);
				std::string getUserData()const;
				void setUserData(const std::string& userData);
				std::string getAppName()const;
				void setAppName(const std::string& appName);
				std::string getProduceConfig()const;
				void setProduceConfig(const std::string& produceConfig);
				std::string getStreamName()const;
				void setStreamName(const std::string& streamName);
				std::string getMediaMetadata()const;
				void setMediaMetadata(const std::string& mediaMetadata);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getDomainName()const;
				void setDomainName(const std::string& domainName);
				long getOwnerId()const;
				void setOwnerId(long ownerId);

            private:
				long resourceOwnerId_;
				std::string clips_;
				std::string description_;
				std::string title_;
				std::string accessKeyId_;
				std::string coverURL_;
				std::string userData_;
				std::string appName_;
				std::string produceConfig_;
				std::string streamName_;
				std::string mediaMetadata_;
				std::string resourceOwnerAccount_;
				std::string domainName_;
				long ownerId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VOD_MODEL_SUBMITLIVEEDITINGREQUEST_H_