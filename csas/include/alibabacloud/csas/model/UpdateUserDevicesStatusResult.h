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

#ifndef ALIBABACLOUD_CSAS_MODEL_UPDATEUSERDEVICESSTATUSRESULT_H_
#define ALIBABACLOUD_CSAS_MODEL_UPDATEUSERDEVICESSTATUSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/csas/CsasExport.h>

namespace AlibabaCloud
{
	namespace Csas
	{
		namespace Model
		{
			class ALIBABACLOUD_CSAS_EXPORT UpdateUserDevicesStatusResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct NetInterfaceInfoItem
					{
						std::string mac;
						std::string name;
					};
					std::string appStatus;
					std::string dlpStatus;
					std::string innerIP;
					std::string memory;
					std::string cPU;
					std::string appVersion;
					std::string department;
					std::vector<Data::NetInterfaceInfoItem> netInterfaceInfo;
					std::string disk;
					std::string deviceModel;
					std::string nacStatus;
					bool sharingStatus;
					std::string createTime;
					std::string hostname;
					std::string deviceVersion;
					std::string saseUserId;
					std::string srcIP;
					std::string mac;
					std::string paStatus;
					std::string iaStatus;
					std::string deviceType;
					std::string deviceBelong;
					std::string username;
					std::string deviceTag;
					std::string updateTime;
					std::string deviceStatus;
				};


				UpdateUserDevicesStatusResult();
				explicit UpdateUserDevicesStatusResult(const std::string &payload);
				~UpdateUserDevicesStatusResult();
				std::vector<Data> getDevices()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<Data> devices_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CSAS_MODEL_UPDATEUSERDEVICESSTATUSRESULT_H_