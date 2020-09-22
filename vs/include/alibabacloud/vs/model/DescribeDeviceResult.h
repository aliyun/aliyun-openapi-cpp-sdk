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

#ifndef ALIBABACLOUD_VS_MODEL_DESCRIBEDEVICERESULT_H_
#define ALIBABACLOUD_VS_MODEL_DESCRIBEDEVICERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/vs/VsExport.h>

namespace AlibabaCloud
{
	namespace Vs
	{
		namespace Model
		{
			class ALIBABACLOUD_VS_EXPORT DescribeDeviceResult : public ServiceResult
			{
			public:
				struct Stats
				{
					long offlineNum;
					long failedNum;
					long streamNum;
					long channelNum;
					long onlineNum;
				};
				struct Directory
				{
					std::string parentId;
					std::string description;
					std::string createdTime;
					std::string id;
					std::string name;
					std::string groupId;
				};


				DescribeDeviceResult();
				explicit DescribeDeviceResult(const std::string &payload);
				~DescribeDeviceResult();
				std::string getAlarmMethod()const;
				std::string getDescription()const;
				std::string getCreatedTime()const;
				std::string getIp()const;
				long getPort()const;
				std::string getChannelSyncTime()const;
				std::string getLatitude()const;
				std::string getUrl()const;
				std::string getName()const;
				std::string getGbId()const;
				std::string getProtocol()const;
				bool getAutoStart()const;
				std::string getDsn()const;
				Directory getDirectory()const;
				std::string getPassword()const;
				std::string getParentId()const;
				std::string getStatus()const;
				bool getEnabled()const;
				std::string getParams()const;
				std::string getVendor()const;
				std::string getLongitude()const;
				std::string getRegisteredTime()const;
				std::string getGroupId()const;
				long getPosInterval()const;
				std::string getType()const;
				std::string getDirectoryId()const;
				std::string getUsername()const;
				bool getAutoPos()const;
				Stats getStats()const;
				std::string getId()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string alarmMethod_;
				std::string description_;
				std::string createdTime_;
				std::string ip_;
				long port_;
				std::string channelSyncTime_;
				std::string latitude_;
				std::string url_;
				std::string name_;
				std::string gbId_;
				std::string protocol_;
				bool autoStart_;
				std::string dsn_;
				Directory directory_;
				std::string password_;
				std::string parentId_;
				std::string status_;
				bool enabled_;
				std::string params_;
				std::string vendor_;
				std::string longitude_;
				std::string registeredTime_;
				std::string groupId_;
				long posInterval_;
				std::string type_;
				std::string directoryId_;
				std::string username_;
				bool autoPos_;
				Stats stats_;
				std::string id_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VS_MODEL_DESCRIBEDEVICERESULT_H_