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

#ifndef ALIBABACLOUD_VOD_MODEL_CREATEUPLOADVIDEOREQUEST_H_
#define ALIBABACLOUD_VOD_MODEL_CREATEUPLOADVIDEOREQUEST_H_

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
			class ALIBABACLOUD_VOD_EXPORT CreateUploadVideoRequest : public RpcServiceRequest
			{

			public:
				CreateUploadVideoRequest();
				~CreateUploadVideoRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getTranscodeMode()const;
				void setTranscodeMode(const std::string& transcodeMode);
				std::string getIP()const;
				void setIP(const std::string& iP);
				std::string getDescription()const;
				void setDescription(const std::string& description);
				long getFileSize()const;
				void setFileSize(long fileSize);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getTitle()const;
				void setTitle(const std::string& title);
				std::string getTags()const;
				void setTags(const std::string& tags);
				std::string getStorageLocation()const;
				void setStorageLocation(const std::string& storageLocation);
				std::string getCoverURL()const;
				void setCoverURL(const std::string& coverURL);
				std::string getUserData()const;
				void setUserData(const std::string& userData);
				std::string getFileName()const;
				void setFileName(const std::string& fileName);
				std::string getTemplateGroupId()const;
				void setTemplateGroupId(const std::string& templateGroupId);
				long getCateId()const;
				void setCateId(long cateId);

            private:
				long resourceOwnerId_;
				std::string resourceOwnerAccount_;
				std::string transcodeMode_;
				std::string iP_;
				std::string description_;
				long fileSize_;
				long ownerId_;
				std::string title_;
				std::string tags_;
				std::string storageLocation_;
				std::string coverURL_;
				std::string userData_;
				std::string fileName_;
				std::string templateGroupId_;
				long cateId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VOD_MODEL_CREATEUPLOADVIDEOREQUEST_H_