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

#ifndef ALIBABACLOUD_PUSH_MODEL_QUERYDEVICEINFORESULT_H_
#define ALIBABACLOUD_PUSH_MODEL_QUERYDEVICEINFORESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/push/PushExport.h>

namespace AlibabaCloud
{
	namespace Push
	{
		namespace Model
		{
			class ALIBABACLOUD_PUSH_EXPORT QueryDeviceInfoResult : public ServiceResult
			{
			public:
				struct DeviceInfo
				{
					std::string brand;
					std::string lastOnlineTime;
					std::string account;
					std::string deviceType;
					std::string alias;
					std::string deviceId;
					std::string deviceToken;
					std::string model;
					std::string phoneNumber;
					bool online;
					std::string tags;
					bool pushEnabled;
				};


				QueryDeviceInfoResult();
				explicit QueryDeviceInfoResult(const std::string &payload);
				~QueryDeviceInfoResult();
				DeviceInfo getDeviceInfo()const;

			protected:
				void parse(const std::string &payload);
			private:
				DeviceInfo deviceInfo_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_PUSH_MODEL_QUERYDEVICEINFORESULT_H_