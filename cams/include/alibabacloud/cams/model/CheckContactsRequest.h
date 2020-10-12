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

#ifndef ALIBABACLOUD_CAMS_MODEL_CHECKCONTACTSREQUEST_H_
#define ALIBABACLOUD_CAMS_MODEL_CHECKCONTACTSREQUEST_H_

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
			class ALIBABACLOUD_CAMS_EXPORT CheckContactsRequest : public RpcServiceRequest
			{

			public:
				CheckContactsRequest();
				~CheckContactsRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
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
				std::string getContacts()const;
				void setContacts(const std::string& contacts);

            private:
				long resourceOwnerId_;
				std::string accessKeyId_;
				std::string channelType_;
				std::string from_;
				std::string resourceOwnerAccount_;
				long ownerId_;
				std::string contacts_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CAMS_MODEL_CHECKCONTACTSREQUEST_H_