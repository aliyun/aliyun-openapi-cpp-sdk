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
				std::string getTranscodeMode()const;
				void setTranscodeMode(const std::string& transcodeMode);
				std::string getDescription()const;
				void setDescription(const std::string& description);
				long getFileSize()const;
				void setFileSize(long fileSize);
				std::string getTitle()const;
				void setTitle(const std::string& title);
				std::string getStorageLocation()const;
				void setStorageLocation(const std::string& storageLocation);
				std::string getCoverURL()const;
				void setCoverURL(const std::string& coverURL);
				std::string getUserData()const;
				void setUserData(const std::string& userData);
				long getCateId()const;
				void setCateId(long cateId);
				std::string getWorkflowId()const;
				void setWorkflowId(const std::string& workflowId);
				std::string getCustomMediaInfo()const;
				void setCustomMediaInfo(const std::string& customMediaInfo);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getIP()const;
				void setIP(const std::string& iP);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getTags()const;
				void setTags(const std::string& tags);
				std::string getFileName()const;
				void setFileName(const std::string& fileName);
				std::string getTemplateGroupId()const;
				void setTemplateGroupId(const std::string& templateGroupId);
				std::string getAppId()const;
				void setAppId(const std::string& appId);

            private:
				long resourceOwnerId_;
				std::string transcodeMode_;
				std::string description_;
				long fileSize_;
				std::string title_;
				std::string storageLocation_;
				std::string coverURL_;
				std::string userData_;
				long cateId_;
				std::string workflowId_;
				std::string customMediaInfo_;
				std::string resourceOwnerAccount_;
				std::string iP_;
				long ownerId_;
				std::string tags_;
				std::string fileName_;
				std::string templateGroupId_;
				std::string appId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VOD_MODEL_CREATEUPLOADVIDEOREQUEST_H_