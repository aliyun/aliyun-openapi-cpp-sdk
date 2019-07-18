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

#ifndef ALIBABACLOUD_VOD_MODEL_REGISTERMEDIAREQUEST_H_
#define ALIBABACLOUD_VOD_MODEL_REGISTERMEDIAREQUEST_H_

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
			class ALIBABACLOUD_VOD_EXPORT RegisterMediaRequest : public RpcServiceRequest
			{

			public:
				RegisterMediaRequest();
				~RegisterMediaRequest();

				std::string getUserData()const;
				void setUserData(const std::string& userData);
				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getTemplateGroupId()const;
				void setTemplateGroupId(const std::string& templateGroupId);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getRegisterMetadatas()const;
				void setRegisterMetadatas(const std::string& registerMetadatas);
				std::string getWorkflowId()const;
				void setWorkflowId(const std::string& workflowId);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);

            private:
				std::string userData_;
				long resourceOwnerId_;
				std::string templateGroupId_;
				std::string resourceOwnerAccount_;
				long ownerId_;
				std::string registerMetadatas_;
				std::string workflowId_;
				std::string accessKeyId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VOD_MODEL_REGISTERMEDIAREQUEST_H_