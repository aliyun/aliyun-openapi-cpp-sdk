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

#ifndef ALIBABACLOUD_VOD_MODEL_CREATEUPLOADIMAGEREQUEST_H_
#define ALIBABACLOUD_VOD_MODEL_CREATEUPLOADIMAGEREQUEST_H_

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
			class ALIBABACLOUD_VOD_EXPORT CreateUploadImageRequest : public RpcServiceRequest
			{

			public:
				CreateUploadImageRequest();
				~CreateUploadImageRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getImageType()const;
				void setImageType(const std::string& imageType);
				std::string getOriginalFileName()const;
				void setOriginalFileName(const std::string& originalFileName);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getImageExt()const;
				void setImageExt(const std::string& imageExt);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getTitle()const;
				void setTitle(const std::string& title);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getTags()const;
				void setTags(const std::string& tags);
				std::string getStorageLocation()const;
				void setStorageLocation(const std::string& storageLocation);

            private:
				long resourceOwnerId_;
				std::string imageType_;
				std::string originalFileName_;
				std::string resourceOwnerAccount_;
				std::string imageExt_;
				long ownerId_;
				std::string title_;
				std::string accessKeyId_;
				std::string tags_;
				std::string storageLocation_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VOD_MODEL_CREATEUPLOADIMAGEREQUEST_H_