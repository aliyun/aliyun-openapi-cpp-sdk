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

#ifndef ALIBABACLOUD_CAMS_MODEL_SENDMESSAGEREQUEST_H_
#define ALIBABACLOUD_CAMS_MODEL_SENDMESSAGEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/cams/CamsExport.h>

namespace AlibabaCloud
{
	namespace Cams
	{
		namespace Model
		{
			class ALIBABACLOUD_CAMS_EXPORT SendMessageRequest : public RpcServiceRequest
			{

			public:
				SendMessageRequest();
				~SendMessageRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getTemplateBodyParams()const;
				void setTemplateBodyParams(const std::string& templateBodyParams);
				std::string getLink()const;
				void setLink(const std::string& link);
				std::string getCaption()const;
				void setCaption(const std::string& caption);
				std::string getType()const;
				void setType(const std::string& type);
				std::string getBody()const;
				void setBody(const std::string& body);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getChannelType()const;
				void setChannelType(const std::string& channelType);
				std::string getFrom()const;
				void setFrom(const std::string& from);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getTo()const;
				void setTo(const std::string& to);
				std::string getTemplateCode()const;
				void setTemplateCode(const std::string& templateCode);
				std::string getMediaType()const;
				void setMediaType(const std::string& mediaType);

            private:
				long resourceOwnerId_;
				std::string templateBodyParams_;
				std::string link_;
				std::string caption_;
				std::string type_;
				std::string body_;
				std::string accessKeyId_;
				std::string channelType_;
				std::string from_;
				std::string resourceOwnerAccount_;
				long ownerId_;
				std::string to_;
				std::string templateCode_;
				std::string mediaType_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CAMS_MODEL_SENDMESSAGEREQUEST_H_