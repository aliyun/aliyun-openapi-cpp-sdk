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

#ifndef ALIBABACLOUD_CLOUDWF_MODEL_DEVICECREATEREQUEST_H_
#define ALIBABACLOUD_CLOUDWF_MODEL_DEVICECREATEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/cloudwf/CloudwfExport.h>

namespace AlibabaCloud
{
	namespace Cloudwf
	{
		namespace Model
		{
			class ALIBABACLOUD_CLOUDWF_EXPORT DeviceCreateRequest : public RpcServiceRequest
			{

			public:
				DeviceCreateRequest();
				~DeviceCreateRequest();

				std::string getDevicePosition()const;
				void setDevicePosition(const std::string& devicePosition);
				int getDeviceType()const;
				void setDeviceType(int deviceType);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				long getSid()const;
				void setSid(long sid);
				std::string getDeviceNum()const;
				void setDeviceNum(const std::string& deviceNum);
				std::string getDeviceName()const;
				void setDeviceName(const std::string& deviceName);

            private:
				std::string devicePosition_;
				int deviceType_;
				std::string accessKeyId_;
				long sid_;
				std::string deviceNum_;
				std::string deviceName_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CLOUDWF_MODEL_DEVICECREATEREQUEST_H_