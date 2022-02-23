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

#ifndef ALIBABACLOUD_CLOUDAUTH_CONSOLE_MODEL_UPLOADIDENTIFYRECORDREQUEST_H_
#define ALIBABACLOUD_CLOUDAUTH_CONSOLE_MODEL_UPLOADIDENTIFYRECORDREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/cloudauth-console/Cloudauth_consoleExport.h>

namespace AlibabaCloud
{
	namespace Cloudauth_console
	{
		namespace Model
		{
			class ALIBABACLOUD_CLOUDAUTH_CONSOLE_EXPORT UploadIdentifyRecordRequest : public RpcServiceRequest
			{

			public:
				UploadIdentifyRecordRequest();
				~UploadIdentifyRecordRequest();

				std::string getExt()const;
				void setExt(const std::string& ext);
				std::string getIdentifyingImageUrl()const;
				void setIdentifyingImageUrl(const std::string& identifyingImageUrl);
				std::string getIdentifyingImageBase64()const;
				void setIdentifyingImageBase64(const std::string& identifyingImageBase64);
				std::string getDeviceSecret()const;
				void setDeviceSecret(const std::string& deviceSecret);
				std::string getProductKey()const;
				void setProductKey(const std::string& productKey);
				std::string getUserId()const;
				void setUserId(const std::string& userId);
				std::string getIotId()const;
				void setIotId(const std::string& iotId);
				std::string getDeviceName()const;
				void setDeviceName(const std::string& deviceName);
				long getIdentifyingTime()const;
				void setIdentifyingTime(long identifyingTime);
				std::string getProjectId()const;
				void setProjectId(const std::string& projectId);
				std::string getUserName()const;
				void setUserName(const std::string& userName);

            private:
				std::string ext_;
				std::string identifyingImageUrl_;
				std::string identifyingImageBase64_;
				std::string deviceSecret_;
				std::string productKey_;
				std::string userId_;
				std::string iotId_;
				std::string deviceName_;
				long identifyingTime_;
				std::string projectId_;
				std::string userName_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CLOUDAUTH_CONSOLE_MODEL_UPLOADIDENTIFYRECORDREQUEST_H_