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

#ifndef ALIBABACLOUD_MOGUAN_SDK_MODEL_REGISTERDEVICEREQUEST_H_
#define ALIBABACLOUD_MOGUAN_SDK_MODEL_REGISTERDEVICEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/moguan-sdk/Moguan_sdkExport.h>

namespace AlibabaCloud
{
	namespace Moguan_sdk
	{
		namespace Model
		{
			class ALIBABACLOUD_MOGUAN_SDK_EXPORT RegisterDeviceRequest : public RpcServiceRequest
			{

			public:
				RegisterDeviceRequest();
				~RegisterDeviceRequest();

				std::string getUserDeviceId()const;
				void setUserDeviceId(const std::string& userDeviceId);
				std::string getExtend()const;
				void setExtend(const std::string& extend);
				std::string getSdkCode()const;
				void setSdkCode(const std::string& sdkCode);
				std::string getAppKey()const;
				void setAppKey(const std::string& appKey);
				std::string getDeviceId()const;
				void setDeviceId(const std::string& deviceId);

            private:
				std::string userDeviceId_;
				std::string extend_;
				std::string sdkCode_;
				std::string appKey_;
				std::string deviceId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_MOGUAN_SDK_MODEL_REGISTERDEVICEREQUEST_H_