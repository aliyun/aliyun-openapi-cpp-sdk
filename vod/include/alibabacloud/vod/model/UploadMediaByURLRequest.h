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

#ifndef ALIBABACLOUD_VOD_MODEL_UPLOADMEDIABYURLREQUEST_H_
#define ALIBABACLOUD_VOD_MODEL_UPLOADMEDIABYURLREQUEST_H_

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
			class ALIBABACLOUD_VOD_EXPORT UploadMediaByURLRequest : public RpcServiceRequest
			{

			public:
				UploadMediaByURLRequest();
				~UploadMediaByURLRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getTemplateGroupId()const;
				void setTemplateGroupId(const std::string& templateGroupId);
				std::string getUploadMetadatas()const;
				void setUploadMetadatas(const std::string& uploadMetadatas);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getUploadURLs()const;
				void setUploadURLs(const std::string& uploadURLs);
				std::string getMessageCallback()const;
				void setMessageCallback(const std::string& messageCallback);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getPriority()const;
				void setPriority(const std::string& priority);
				std::string getStorageLocation()const;
				void setStorageLocation(const std::string& storageLocation);

            private:
				long resourceOwnerId_;
				std::string templateGroupId_;
				std::string uploadMetadatas_;
				std::string resourceOwnerAccount_;
				std::string uploadURLs_;
				std::string messageCallback_;
				long ownerId_;
				std::string priority_;
				std::string storageLocation_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VOD_MODEL_UPLOADMEDIABYURLREQUEST_H_