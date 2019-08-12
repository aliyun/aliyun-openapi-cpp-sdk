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

#ifndef ALIBABACLOUD_VOD_MODEL_ADDWATERMARKREQUEST_H_
#define ALIBABACLOUD_VOD_MODEL_ADDWATERMARKREQUEST_H_

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
			class ALIBABACLOUD_VOD_EXPORT AddWatermarkRequest : public RpcServiceRequest
			{

			public:
				AddWatermarkRequest();
				~AddWatermarkRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getAppId()const;
				void setAppId(const std::string& appId);
				std::string getName()const;
				void setName(const std::string& name);
				std::string getFileUrl()const;
				void setFileUrl(const std::string& fileUrl);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getType()const;
				void setType(const std::string& type);
				std::string getWatermarkConfig()const;
				void setWatermarkConfig(const std::string& watermarkConfig);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);

            private:
				long resourceOwnerId_;
				std::string resourceOwnerAccount_;
				std::string appId_;
				std::string name_;
				std::string fileUrl_;
				long ownerId_;
				std::string type_;
				std::string watermarkConfig_;
				std::string accessKeyId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VOD_MODEL_ADDWATERMARKREQUEST_H_