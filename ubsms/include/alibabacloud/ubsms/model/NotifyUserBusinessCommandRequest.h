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

#ifndef ALIBABACLOUD_UBSMS_MODEL_NOTIFYUSERBUSINESSCOMMANDREQUEST_H_
#define ALIBABACLOUD_UBSMS_MODEL_NOTIFYUSERBUSINESSCOMMANDREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/ubsms/UbsmsExport.h>

namespace AlibabaCloud
{
	namespace Ubsms
	{
		namespace Model
		{
			class ALIBABACLOUD_UBSMS_EXPORT NotifyUserBusinessCommandRequest : public RpcServiceRequest
			{

			public:
				NotifyUserBusinessCommandRequest();
				~NotifyUserBusinessCommandRequest();

				std::string getUid()const;
				void setUid(const std::string& uid);
				std::string getPassword()const;
				void setPassword(const std::string& password);
				std::string getInstanceId()const;
				void setInstanceId(const std::string& instanceId);
				std::string getServiceCode()const;
				void setServiceCode(const std::string& serviceCode);
				std::string getClientToken()const;
				void setClientToken(const std::string& clientToken);
				std::string getCmd()const;
				void setCmd(const std::string& cmd);
				std::string getRegion()const;
				void setRegion(const std::string& region);

            private:
				std::string uid_;
				std::string password_;
				std::string instanceId_;
				std::string serviceCode_;
				std::string clientToken_;
				std::string cmd_;
				std::string region_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_UBSMS_MODEL_NOTIFYUSERBUSINESSCOMMANDREQUEST_H_