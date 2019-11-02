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

#ifndef ALIBABACLOUD_DYVMSAPI_MODEL_UPLOADROBOTTASKCALLEDFILEREQUEST_H_
#define ALIBABACLOUD_DYVMSAPI_MODEL_UPLOADROBOTTASKCALLEDFILEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/dyvmsapi/DyvmsapiExport.h>

namespace AlibabaCloud
{
	namespace Dyvmsapi
	{
		namespace Model
		{
			class ALIBABACLOUD_DYVMSAPI_EXPORT UploadRobotTaskCalledFileRequest : public RpcServiceRequest
			{

			public:
				UploadRobotTaskCalledFileRequest();
				~UploadRobotTaskCalledFileRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getTtsParamHead()const;
				void setTtsParamHead(const std::string& ttsParamHead);
				std::string getTtsParam()const;
				void setTtsParam(const std::string& ttsParam);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getCalledNumber()const;
				void setCalledNumber(const std::string& calledNumber);
				long getId()const;
				void setId(long id);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				long getOwnerId()const;
				void setOwnerId(long ownerId);

            private:
				long resourceOwnerId_;
				std::string ttsParamHead_;
				std::string ttsParam_;
				std::string accessKeyId_;
				std::string calledNumber_;
				long id_;
				std::string resourceOwnerAccount_;
				long ownerId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DYVMSAPI_MODEL_UPLOADROBOTTASKCALLEDFILEREQUEST_H_