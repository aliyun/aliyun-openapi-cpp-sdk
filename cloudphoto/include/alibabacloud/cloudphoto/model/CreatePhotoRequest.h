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

#ifndef ALIBABACLOUD_CLOUDPHOTO_MODEL_CREATEPHOTOREQUEST_H_
#define ALIBABACLOUD_CLOUDPHOTO_MODEL_CREATEPHOTOREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/cloudphoto/CloudPhotoExport.h>

namespace AlibabaCloud
{
	namespace CloudPhoto
	{
		namespace Model
		{
			class ALIBABACLOUD_CLOUDPHOTO_EXPORT CreatePhotoRequest : public RpcServiceRequest
			{

			public:
				CreatePhotoRequest();
				~CreatePhotoRequest();

				std::string getPhotoTitle()const;
				void setPhotoTitle(const std::string& photoTitle);
				std::string getLibraryId()const;
				void setLibraryId(const std::string& libraryId);
				long getShareExpireTime()const;
				void setShareExpireTime(long shareExpireTime);
				std::string getStoreName()const;
				void setStoreName(const std::string& storeName);
				std::string getUploadType()const;
				void setUploadType(const std::string& uploadType);
				std::string getRemark()const;
				void setRemark(const std::string& remark);
				std::string getSessionId()const;
				void setSessionId(const std::string& sessionId);
				std::string getStaging()const;
				void setStaging(const std::string& staging);
				std::string getFileId()const;
				void setFileId(const std::string& fileId);

            private:
				std::string photoTitle_;
				std::string libraryId_;
				long shareExpireTime_;
				std::string storeName_;
				std::string uploadType_;
				std::string remark_;
				std::string sessionId_;
				std::string staging_;
				std::string fileId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CLOUDPHOTO_MODEL_CREATEPHOTOREQUEST_H_