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

#ifndef ALIBABACLOUD_MTS_MODEL_SUBMITIMAGESEARCHJOBREQUEST_H_
#define ALIBABACLOUD_MTS_MODEL_SUBMITIMAGESEARCHJOBREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/mts/MtsExport.h>

namespace AlibabaCloud
{
	namespace Mts
	{
		namespace Model
		{
			class ALIBABACLOUD_MTS_EXPORT SubmitImageSearchJobRequest : public RpcServiceRequest
			{

			public:
				SubmitImageSearchJobRequest();
				~SubmitImageSearchJobRequest();

				std::string getInputImage()const;
				void setInputImage(const std::string& inputImage);
				std::string getUserData()const;
				void setUserData(const std::string& userData);
				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getFpDBId()const;
				void setFpDBId(const std::string& fpDBId);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getInputVideo()const;
				void setInputVideo(const std::string& inputVideo);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getConfig()const;
				void setConfig(const std::string& config);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getPipelineId()const;
				void setPipelineId(const std::string& pipelineId);

            private:
				std::string inputImage_;
				std::string userData_;
				long resourceOwnerId_;
				std::string fpDBId_;
				std::string resourceOwnerAccount_;
				std::string inputVideo_;
				std::string ownerAccount_;
				long ownerId_;
				std::string config_;
				std::string accessKeyId_;
				std::string pipelineId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_MTS_MODEL_SUBMITIMAGESEARCHJOBREQUEST_H_