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

#ifndef ALIBABACLOUD_SNSUAPI_MODEL_MOBILESTARTSPEEDUPREQUEST_H_
#define ALIBABACLOUD_SNSUAPI_MODEL_MOBILESTARTSPEEDUPREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/snsuapi/SnsuapiExport.h>

namespace AlibabaCloud
{
	namespace Snsuapi
	{
		namespace Model
		{
			class ALIBABACLOUD_SNSUAPI_EXPORT MobileStartSpeedUpRequest : public RpcServiceRequest
			{

			public:
				MobileStartSpeedUpRequest();
				~MobileStartSpeedUpRequest();

				std::string getDuration()const;
				void setDuration(const std::string& duration);
				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getIp()const;
				void setIp(const std::string& ip);
				std::string getDestinationIpAddress()const;
				void setDestinationIpAddress(const std::string& destinationIpAddress);
				std::string getPublicIp()const;
				void setPublicIp(const std::string& publicIp);
				std::string getPublicPort()const;
				void setPublicPort(const std::string& publicPort);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getToken()const;
				void setToken(const std::string& token);

            private:
				std::string duration_;
				long resourceOwnerId_;
				std::string resourceOwnerAccount_;
				std::string ip_;
				std::string destinationIpAddress_;
				std::string publicIp_;
				std::string publicPort_;
				long ownerId_;
				std::string accessKeyId_;
				std::string token_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SNSUAPI_MODEL_MOBILESTARTSPEEDUPREQUEST_H_