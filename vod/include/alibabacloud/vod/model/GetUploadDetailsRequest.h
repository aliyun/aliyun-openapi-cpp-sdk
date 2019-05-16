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

#ifndef ALIBABACLOUD_VOD_MODEL_GETUPLOADDETAILSREQUEST_H_
#define ALIBABACLOUD_VOD_MODEL_GETUPLOADDETAILSREQUEST_H_

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
			class ALIBABACLOUD_VOD_EXPORT GetUploadDetailsRequest : public RpcServiceRequest
			{

			public:
				GetUploadDetailsRequest();
				~GetUploadDetailsRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				long getResourceRealOwnerId()const;
				void setResourceRealOwnerId(long resourceRealOwnerId);
				std::string getMediaIds()const;
				void setMediaIds(const std::string& mediaIds);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getMediaType()const;
				void setMediaType(const std::string& mediaType);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);

            private:
				long resourceOwnerId_;
				std::string resourceOwnerAccount_;
				long resourceRealOwnerId_;
				std::string mediaIds_;
				long ownerId_;
				std::string mediaType_;
				std::string accessKeyId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VOD_MODEL_GETUPLOADDETAILSREQUEST_H_