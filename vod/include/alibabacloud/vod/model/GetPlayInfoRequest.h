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

#ifndef ALIBABACLOUD_VOD_MODEL_GETPLAYINFOREQUEST_H_
#define ALIBABACLOUD_VOD_MODEL_GETPLAYINFOREQUEST_H_

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
			class ALIBABACLOUD_VOD_EXPORT GetPlayInfoRequest : public RpcServiceRequest
			{

			public:
				GetPlayInfoRequest();
				~GetPlayInfoRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getStreamType()const;
				void setStreamType(const std::string& streamType);
				std::string getFormats()const;
				void setFormats(const std::string& formats);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getChannel()const;
				void setChannel(const std::string& channel);
				std::string getVideoId()const;
				void setVideoId(const std::string& videoId);
				std::string getPlayerVersion()const;
				void setPlayerVersion(const std::string& playerVersion);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getResultType()const;
				void setResultType(const std::string& resultType);
				std::string getRand()const;
				void setRand(const std::string& rand);
				std::string getReAuthInfo()const;
				void setReAuthInfo(const std::string& reAuthInfo);
				std::string getPlayConfig()const;
				void setPlayConfig(const std::string& playConfig);
				std::string getOutputType()const;
				void setOutputType(const std::string& outputType);
				std::string getDefinition()const;
				void setDefinition(const std::string& definition);
				long getAuthTimeout()const;
				void setAuthTimeout(long authTimeout);
				std::string getAuthInfo()const;
				void setAuthInfo(const std::string& authInfo);

            private:
				long resourceOwnerId_;
				std::string streamType_;
				std::string formats_;
				std::string resourceOwnerAccount_;
				std::string channel_;
				std::string videoId_;
				std::string playerVersion_;
				long ownerId_;
				std::string resultType_;
				std::string rand_;
				std::string reAuthInfo_;
				std::string playConfig_;
				std::string outputType_;
				std::string definition_;
				long authTimeout_;
				std::string authInfo_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VOD_MODEL_GETPLAYINFOREQUEST_H_