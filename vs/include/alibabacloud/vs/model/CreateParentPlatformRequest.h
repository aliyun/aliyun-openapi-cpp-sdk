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

#ifndef ALIBABACLOUD_VS_MODEL_CREATEPARENTPLATFORMREQUEST_H_
#define ALIBABACLOUD_VS_MODEL_CREATEPARENTPLATFORMREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/vs/VsExport.h>

namespace AlibabaCloud
{
	namespace Vs
	{
		namespace Model
		{
			class ALIBABACLOUD_VS_EXPORT CreateParentPlatformRequest : public RpcServiceRequest
			{

			public:
				CreateParentPlatformRequest();
				~CreateParentPlatformRequest();

				std::string getGbId()const;
				void setGbId(const std::string& gbId);
				bool getClientAuth()const;
				void setClientAuth(bool clientAuth);
				std::string getDescription()const;
				void setDescription(const std::string& description);
				bool getAutoStart()const;
				void setAutoStart(bool autoStart);
				std::string getProtocol()const;
				void setProtocol(const std::string& protocol);
				std::string getClientPassword()const;
				void setClientPassword(const std::string& clientPassword);
				std::string getShowLog()const;
				void setShowLog(const std::string& showLog);
				std::string getIp()const;
				void setIp(const std::string& ip);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				long getPort()const;
				void setPort(long port);
				std::string getName()const;
				void setName(const std::string& name);
				std::string getClientUsername()const;
				void setClientUsername(const std::string& clientUsername);

            private:
				std::string gbId_;
				bool clientAuth_;
				std::string description_;
				bool autoStart_;
				std::string protocol_;
				std::string clientPassword_;
				std::string showLog_;
				std::string ip_;
				long ownerId_;
				long port_;
				std::string name_;
				std::string clientUsername_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VS_MODEL_CREATEPARENTPLATFORMREQUEST_H_