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

#ifndef ALIBABACLOUD_SNSUAPI_MODEL_BANDSTARTSPEEDUPREQUEST_H_
#define ALIBABACLOUD_SNSUAPI_MODEL_BANDSTARTSPEEDUPREQUEST_H_

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
			class ALIBABACLOUD_SNSUAPI_EXPORT BandStartSpeedUpRequest : public RpcServiceRequest
			{

			public:
				BandStartSpeedUpRequest();
				~BandStartSpeedUpRequest();

				std::string getIpAddress()const;
				void setIpAddress(const std::string& ipAddress);
				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				long getBandId()const;
				void setBandId(long bandId);
				long getTargetBandwidth()const;
				void setTargetBandwidth(long targetBandwidth);
				std::string getDirection()const;
				void setDirection(const std::string& direction);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getBandScene()const;
				void setBandScene(const std::string& bandScene);
				int getPort()const;
				void setPort(int port);

            private:
				std::string ipAddress_;
				long resourceOwnerId_;
				std::string accessKeyId_;
				long bandId_;
				long targetBandwidth_;
				std::string direction_;
				std::string resourceOwnerAccount_;
				long ownerId_;
				std::string bandScene_;
				int port_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SNSUAPI_MODEL_BANDSTARTSPEEDUPREQUEST_H_