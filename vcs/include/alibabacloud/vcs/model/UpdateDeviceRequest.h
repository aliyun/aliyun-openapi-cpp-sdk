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

#ifndef ALIBABACLOUD_VCS_MODEL_UPDATEDEVICEREQUEST_H_
#define ALIBABACLOUD_VCS_MODEL_UPDATEDEVICEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/vcs/VcsExport.h>

namespace AlibabaCloud
{
	namespace Vcs
	{
		namespace Model
		{
			class ALIBABACLOUD_VCS_EXPORT UpdateDeviceRequest : public RpcServiceRequest
			{

			public:
				UpdateDeviceRequest();
				~UpdateDeviceRequest();

				std::string getDeviceSite()const;
				void setDeviceSite(const std::string& deviceSite);
				std::string getCorpId()const;
				void setCorpId(const std::string& corpId);
				std::string getGbId()const;
				void setGbId(const std::string& gbId);
				std::string getBitRate()const;
				void setBitRate(const std::string& bitRate);
				std::string getDeviceDirection()const;
				void setDeviceDirection(const std::string& deviceDirection);
				std::string getDeviceAddress()const;
				void setDeviceAddress(const std::string& deviceAddress);
				std::string getDeviceType()const;
				void setDeviceType(const std::string& deviceType);
				std::string getDeviceResolution()const;
				void setDeviceResolution(const std::string& deviceResolution);
				std::string getVendor()const;
				void setVendor(const std::string& vendor);
				std::string getDeviceName()const;
				void setDeviceName(const std::string& deviceName);

            private:
				std::string deviceSite_;
				std::string corpId_;
				std::string gbId_;
				std::string bitRate_;
				std::string deviceDirection_;
				std::string deviceAddress_;
				std::string deviceType_;
				std::string deviceResolution_;
				std::string vendor_;
				std::string deviceName_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VCS_MODEL_UPDATEDEVICEREQUEST_H_