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

#ifndef ALIBABACLOUD_CLOUDPHOTO_MODEL_RENAMEALBUMREQUEST_H_
#define ALIBABACLOUD_CLOUDPHOTO_MODEL_RENAMEALBUMREQUEST_H_

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
			class ALIBABACLOUD_CLOUDPHOTO_EXPORT RenameAlbumRequest : public RpcServiceRequest
			{

			public:
				RenameAlbumRequest();
				~RenameAlbumRequest();

				std::string getAlbumName()const;
				void setAlbumName(const std::string& albumName);
				std::string getLibraryId()const;
				void setLibraryId(const std::string& libraryId);
				long getAlbumId()const;
				void setAlbumId(long albumId);
				std::string getStoreName()const;
				void setStoreName(const std::string& storeName);

            private:
				std::string albumName_;
				std::string libraryId_;
				long albumId_;
				std::string storeName_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CLOUDPHOTO_MODEL_RENAMEALBUMREQUEST_H_