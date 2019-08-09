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

#ifndef ALIBABACLOUD_IOT_MODEL_GETGATEWAYBYSUBDEVICERESULT_H_
#define ALIBABACLOUD_IOT_MODEL_GETGATEWAYBYSUBDEVICERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/iot/IotExport.h>

namespace AlibabaCloud
{
	namespace Iot
	{
		namespace Model
		{
			class ALIBABACLOUD_IOT_EXPORT GetGatewayBySubDeviceResult : public ServiceResult
			{
			public:
				struct Data
				{
					std::string status;
					std::string productName;
					std::string deviceSecret;
					std::string firmwareVersion;
					std::string utcOnline;
					std::string iotId;
					std::string gmtCreate;
					std::string utcCreate;
					std::string utcActive;
					std::string gmtActive;
					std::string nodeType;
					std::string region;
					std::string ipAddress;
					std::string gmtOnline;
					std::string productKey;
					std::string deviceName;
				};


				GetGatewayBySubDeviceResult();
				explicit GetGatewayBySubDeviceResult(const std::string &payload);
				~GetGatewayBySubDeviceResult();
				Data getData()const;
				std::string getErrorMessage()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				Data data_;
				std::string errorMessage_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_IOT_MODEL_GETGATEWAYBYSUBDEVICERESULT_H_