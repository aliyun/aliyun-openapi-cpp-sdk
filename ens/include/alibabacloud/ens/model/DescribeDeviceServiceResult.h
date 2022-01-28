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

#ifndef ALIBABACLOUD_ENS_MODEL_DESCRIBEDEVICESERVICERESULT_H_
#define ALIBABACLOUD_ENS_MODEL_DESCRIBEDEVICESERVICERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ens/EnsExport.h>

namespace AlibabaCloud
{
	namespace Ens
	{
		namespace Model
		{
			class ALIBABACLOUD_ENS_EXPORT DescribeDeviceServiceResult : public ServiceResult
			{
			public:
				struct AppStatus
				{
					std::string phase;
					std::string updateTime;
					std::string statusDescrip;
				};
				struct AppMetaData
				{
					std::string description;
					std::string appId;
					std::string createTime;
					std::string clusterName;
					std::string appType;
					std::string appStableVersion;
					std::string appName;
				};
				struct DeviceInfo
				{
					std::string status;
					std::string type;
					std::string server;
					std::string iP;
					std::string iSP;
					std::string imageID;
					std::string regionID;
					std::string iD;
					std::string mac;
					std::string deviceName;
				};
				struct ResourceInfosItem
				{
					struct DeviceInfosItem
					{
						struct Ports
						{
							std::string containerPorts;
							std::string hostPorts;
							std::string externalIp;
							std::string protocol;
						};
						std::string status;
						std::vector<DeviceInfosItem::Ports> network;
						std::string name;
					};
					struct InternalIpsItem
					{
						std::string ip;
					};
					struct PublicIpsItem
					{
						std::string ip;
					};
					std::string appVersion;
					std::string areaName;
					std::vector<ResourceInfosItem::PublicIpsItem> publicIps;
					std::string regionCode;
					std::vector<ResourceInfosItem::DeviceInfosItem> deviceInfos;
					std::string instanceId;
					std::string regionName;
					std::string instanceStatus;
					std::string createTime;
					std::string areaCode;
					std::string regionId;
					std::vector<ResourceInfosItem::InternalIpsItem> internalIps;
				};


				DescribeDeviceServiceResult();
				explicit DescribeDeviceServiceResult(const std::string &payload);
				~DescribeDeviceServiceResult();
				AppStatus getAppStatus()const;
				AppMetaData getAppMetaData()const;
				std::vector<DeviceInfo> getResourceDetailInfos()const;
				std::vector<ResourceInfosItem> getResourceInfos()const;

			protected:
				void parse(const std::string &payload);
			private:
				AppStatus appStatus_;
				AppMetaData appMetaData_;
				std::vector<DeviceInfo> resourceDetailInfos_;
				std::vector<ResourceInfosItem> resourceInfos_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ENS_MODEL_DESCRIBEDEVICESERVICERESULT_H_