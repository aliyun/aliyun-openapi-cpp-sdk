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

#ifndef ALIBABACLOUD_IOT_MODEL_REGISTERDEVICEREQUEST_H_
#define ALIBABACLOUD_IOT_MODEL_REGISTERDEVICEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/iot/IotExport.h>

namespace AlibabaCloud
{
	namespace Iot
	{
		namespace Model
		{
			class ALIBABACLOUD_IOT_EXPORT RegisterDeviceRequest : public RpcServiceRequest
			{

			public:
				RegisterDeviceRequest();
				~RegisterDeviceRequest();

<<<<<<< HEAD
				std::string getPinCode()const;
				void setPinCode(const std::string& pinCode);
				std::string getIotInstanceId()const;
				void setIotInstanceId(const std::string& iotInstanceId);
				std::string getNickname()const;
				void setNickname(const std::string& nickname);
				std::string getDeviceName()const;
				void setDeviceName(const std::string& deviceName);
				std::string getProductKey()const;
				void setProductKey(const std::string& productKey);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getDevEui()const;
				void setDevEui(const std::string& devEui);

            private:
				std::string pinCode_;
				std::string iotInstanceId_;
				std::string nickname_;
				std::string deviceName_;
				std::string productKey_;
				std::string accessKeyId_;
				std::string devEui_;
=======
				std::string getPinCode()const;
				void setPinCode(const std::string& pinCode);
				std::string getIotInstanceId()const;
				void setIotInstanceId(const std::string& iotInstanceId);
				std::string getNickname()const;
				void setNickname(const std::string& nickname);
				std::string getDeviceName()const;
				void setDeviceName(const std::string& deviceName);
				std::string getProductKey()const;
				void setProductKey(const std::string& productKey);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getDevEui()const;
				void setDevEui(const std::string& devEui);

            private:
				std::string pinCode_;
				std::string iotInstanceId_;
				std::string nickname_;
				std::string deviceName_;
				std::string productKey_;
				std::string accessKeyId_;
				std::string devEui_;
>>>>>>> master

			};
		}
	}
}
#endif // !ALIBABACLOUD_IOT_MODEL_REGISTERDEVICEREQUEST_H_