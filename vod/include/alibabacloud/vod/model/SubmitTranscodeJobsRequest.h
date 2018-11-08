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

#ifndef ALIBABACLOUD_VOD_MODEL_SUBMITTRANSCODEJOBSREQUEST_H_
#define ALIBABACLOUD_VOD_MODEL_SUBMITTRANSCODEJOBSREQUEST_H_

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
			class ALIBABACLOUD_VOD_EXPORT SubmitTranscodeJobsRequest : public RpcServiceRequest
			{

			public:
				SubmitTranscodeJobsRequest();
				~SubmitTranscodeJobsRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getTemplateGroupId()const;
				void setTemplateGroupId(const std::string& templateGroupId);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getVideoId()const;
				void setVideoId(const std::string& videoId);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getEncryptConfig()const;
				void setEncryptConfig(const std::string& encryptConfig);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getPipelineId()const;
				void setPipelineId(const std::string& pipelineId);

            private:
				long resourceOwnerId_;
				std::string templateGroupId_;
				std::string resourceOwnerAccount_;
				std::string videoId_;
				long ownerId_;
				std::string encryptConfig_;
				std::string accessKeyId_;
				std::string pipelineId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VOD_MODEL_SUBMITTRANSCODEJOBSREQUEST_H_