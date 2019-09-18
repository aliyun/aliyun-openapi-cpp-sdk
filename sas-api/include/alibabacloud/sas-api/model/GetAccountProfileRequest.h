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

#ifndef ALIBABACLOUD_SAS_API_MODEL_GETACCOUNTPROFILEREQUEST_H_
#define ALIBABACLOUD_SAS_API_MODEL_GETACCOUNTPROFILEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/sas-api/Sas_apiExport.h>

namespace AlibabaCloud
{
	namespace Sas_api
	{
		namespace Model
		{
			class ALIBABACLOUD_SAS_API_EXPORT GetAccountProfileRequest : public RpcServiceRequest
			{

			public:
				GetAccountProfileRequest();
				~GetAccountProfileRequest();

				std::string getDeviceIdMd5()const;
				void setDeviceIdMd5(const std::string& deviceIdMd5);
				std::string getOs()const;
				void setOs(const std::string& os);
				std::string getIp()const;
				void setIp(const std::string& ip);
				std::string getUserAgent()const;
				void setUserAgent(const std::string& userAgent);
				int getSensType()const;
				void setSensType(int sensType);
				int getDeviceType()const;
				void setDeviceType(int deviceType);
				int getBusinessType()const;
				void setBusinessType(int businessType);
				int getCarrier()const;
				void setCarrier(int carrier);
				std::string getPhone()const;
				void setPhone(const std::string& phone);
				std::string getRequestUrl()const;
				void setRequestUrl(const std::string& requestUrl);
				int getConnectionType()const;
				void setConnectionType(int connectionType);
				long getAccessTimestamp()const;
				void setAccessTimestamp(long accessTimestamp);

            private:
				std::string deviceIdMd5_;
				std::string os_;
				std::string ip_;
				std::string userAgent_;
				int sensType_;
				int deviceType_;
				int businessType_;
				int carrier_;
				std::string phone_;
				std::string requestUrl_;
				int connectionType_;
				long accessTimestamp_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SAS_API_MODEL_GETACCOUNTPROFILEREQUEST_H_