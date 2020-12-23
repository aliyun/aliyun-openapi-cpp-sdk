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

#ifndef ALIBABACLOUD_CDRS_MODEL_BINDDEVICEREQUEST_H_
#define ALIBABACLOUD_CDRS_MODEL_BINDDEVICEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/cdrs/CDRSExport.h>

namespace AlibabaCloud
{
	namespace CDRS
	{
		namespace Model
		{
			class ALIBABACLOUD_CDRS_EXPORT BindDeviceRequest : public RpcServiceRequest
			{
			public:
				struct Devices
				{
					std::string corpId;
					std::string deviceId;
				};

			public:
				BindDeviceRequest();
				~BindDeviceRequest();

				std::string getCorpId()const;
				void setCorpId(const std::string& corpId);
				std::vector<Devices> getDevices()const;
				void setDevices(const std::vector<Devices>& devices);
				std::string getAppName()const;
				void setAppName(const std::string& appName);
				std::string get_NameSpace()const;
				void set_NameSpace(const std::string& _nameSpace);

            private:
				std::string corpId_;
				std::vector<Devices> devices_;
				std::string appName_;
				std::string _nameSpace_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CDRS_MODEL_BINDDEVICEREQUEST_H_