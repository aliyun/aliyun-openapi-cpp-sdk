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

#ifndef ALIBABACLOUD_VS_MODEL_DESCRIBEDEVICESRESULT_H_
#define ALIBABACLOUD_VS_MODEL_DESCRIBEDEVICESRESULT_H_

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
			class ALIBABACLOUD_VS_EXPORT DescribeDevicesResult : public ServiceResult
			{
			public:
				struct Device
				{
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
					std::string alarmMethod;
					std::string description;
					std::string createdTime;
					std::string ip;
					long port;
					std::string channelSyncTime;
					std::string latitude;
					std::string url;
					std::string name;
					std::string gbId;
					std::string protocol;
					bool autoStart;
					std::string dsn;
					Directory directory;
					std::string password;
					std::string parentId;
					std::string status;
					bool enabled;
					std::string params;
					std::string vendor;
					std::string longitude;
					std::string registeredTime;
					std::string groupId;
					long posInterval;
					std::string type;
					std::string directoryId;
					std::string username;
					bool autoPos;
					Stats stats;
					std::string id;
				};


				DescribeDevicesResult();
				explicit DescribeDevicesResult(const std::string &payload);
				~DescribeDevicesResult();
				long getTotalCount()const;
				long getPageSize()const;
				long getPageNum()const;
				long getPageCount()const;
				std::vector<Device> getDevices()const;

			protected:
				void parse(const std::string &payload);
			private:
				long totalCount_;
				long pageSize_;
				long pageNum_;
				long pageCount_;
				std::vector<Device> devices_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VS_MODEL_DESCRIBEDEVICESRESULT_H_