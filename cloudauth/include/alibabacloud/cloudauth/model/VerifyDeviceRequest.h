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

#ifndef ALIBABACLOUD_CLOUDAUTH_MODEL_VERIFYDEVICEREQUEST_H_
#define ALIBABACLOUD_CLOUDAUTH_MODEL_VERIFYDEVICEREQUEST_H_

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
			class ALIBABACLOUD_CLOUDAUTH_EXPORT VerifyDeviceRequest : public RpcServiceRequest
			{

			public:
				VerifyDeviceRequest();
				~VerifyDeviceRequest();

				std::string getExtInfo()const;
				void setExtInfo(const std::string& extInfo);
				std::string getCertifyData()const;
				void setCertifyData(const std::string& certifyData);
				std::string getAppVersion()const;
				void setAppVersion(const std::string& appVersion);
				std::string getCertifyId()const;
				void setCertifyId(const std::string& certifyId);

            private:
				std::string extInfo_;
				std::string certifyData_;
				std::string appVersion_;
				std::string certifyId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CLOUDAUTH_MODEL_VERIFYDEVICEREQUEST_H_