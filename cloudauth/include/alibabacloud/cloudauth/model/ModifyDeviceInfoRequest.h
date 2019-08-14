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

#ifndef ALIBABACLOUD_CLOUDAUTH_MODEL_MODIFYDEVICEINFOREQUEST_H_
#define ALIBABACLOUD_CLOUDAUTH_MODEL_MODIFYDEVICEINFOREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/cloudauth/CloudauthExport.h>

namespace AlibabaCloud
{
	namespace Cloudauth
	{
		namespace Model
		{
			class ALIBABACLOUD_CLOUDAUTH_EXPORT ModifyDeviceInfoRequest : public RpcServiceRequest
			{

			public:
				ModifyDeviceInfoRequest();
				~ModifyDeviceInfoRequest();

				std::string getUserDeviceId()const;
				void setUserDeviceId(const std::string& userDeviceId);
				std::string getBizType()const;
				void setBizType(const std::string& bizType);
				std::string getDuration()const;
				void setDuration(const std::string& duration);
				std::string getExpiredDay()const;
				void setExpiredDay(const std::string& expiredDay);
				std::string getSourceIp()const;
				void setSourceIp(const std::string& sourceIp);
				std::string getLang()const;
				void setLang(const std::string& lang);
				std::string getDeviceId()const;
				void setDeviceId(const std::string& deviceId);

            private:
				std::string userDeviceId_;
				std::string bizType_;
				std::string duration_;
				std::string expiredDay_;
				std::string sourceIp_;
				std::string lang_;
				std::string deviceId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CLOUDAUTH_MODEL_MODIFYDEVICEINFOREQUEST_H_