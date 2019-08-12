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

#ifndef ALIBABACLOUD_IOT_MODEL_QUERYDEVICEFILEREQUEST_H_
#define ALIBABACLOUD_IOT_MODEL_QUERYDEVICEFILEREQUEST_H_

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
			class ALIBABACLOUD_IOT_EXPORT QueryDeviceFileRequest : public RpcServiceRequest
			{

			public:
				QueryDeviceFileRequest();
				~QueryDeviceFileRequest();

				std::string getIotId()const;
				void setIotId(const std::string& iotId);
				std::string getIotInstanceId()const;
				void setIotInstanceId(const std::string& iotInstanceId);
				std::string getDeviceName()const;
				void setDeviceName(const std::string& deviceName);
				std::string getProductKey()const;
				void setProductKey(const std::string& productKey);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getFileId()const;
				void setFileId(const std::string& fileId);

            private:
				std::string iotId_;
				std::string iotInstanceId_;
				std::string deviceName_;
				std::string productKey_;
				std::string accessKeyId_;
				std::string fileId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_IOT_MODEL_QUERYDEVICEFILEREQUEST_H_