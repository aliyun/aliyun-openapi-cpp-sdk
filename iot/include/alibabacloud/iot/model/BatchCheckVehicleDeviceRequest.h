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

#ifndef ALIBABACLOUD_IOT_MODEL_BATCHCHECKVEHICLEDEVICEREQUEST_H_
#define ALIBABACLOUD_IOT_MODEL_BATCHCHECKVEHICLEDEVICEREQUEST_H_

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
			class ALIBABACLOUD_IOT_EXPORT BatchCheckVehicleDeviceRequest : public RpcServiceRequest
			{
			public:
				struct DeviceList
				{
					std::string deviceSecret;
					std::string deviceName;
					std::string deviceId;
					std::string manufacturer;
					std::string deviceModel;
				};

			public:
				BatchCheckVehicleDeviceRequest();
				~BatchCheckVehicleDeviceRequest();

				std::string getIotInstanceId()const;
				void setIotInstanceId(const std::string& iotInstanceId);
				std::string getProductKey()const;
				void setProductKey(const std::string& productKey);
				std::vector<DeviceList> getDeviceList()const;
				void setDeviceList(const std::vector<DeviceList>& deviceList);
				std::string getApiProduct()const;
				void setApiProduct(const std::string& apiProduct);
				std::string getApiRevision()const;
				void setApiRevision(const std::string& apiRevision);

            private:
				std::string iotInstanceId_;
				std::string productKey_;
				std::vector<DeviceList> deviceList_;
				std::string apiProduct_;
				std::string apiRevision_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_IOT_MODEL_BATCHCHECKVEHICLEDEVICEREQUEST_H_