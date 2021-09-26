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

#ifndef ALIBABACLOUD_VS_MODEL_DESCRIBERENDERINGDEVICESRESULT_H_
#define ALIBABACLOUD_VS_MODEL_DESCRIBERENDERINGDEVICESRESULT_H_

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
			class ALIBABACLOUD_VS_EXPORT DescribeRenderingDevicesResult : public ServiceResult
			{
			public:
				struct Device
				{
					struct IpInfo
					{
						std::string externalPort;
						std::string externalIp;
						std::string iSP;
						std::string ipProtocol;
						std::string internalPort;
						std::string natType;
						std::string internalIp;
					};
					std::string status;
					int autoRenewPeriod;
					std::string edgeNodeName;
					std::vector<Device::IpInfo> ipInfos;
					std::string instanceId;
					std::string clusterId;
					std::string instanceChargeType;
					bool autoRenew;
					int period;
					std::string specification;
					std::string macAddress;
					std::string serverName;
					std::string platformType;
					std::string periodUnit;
				};


				DescribeRenderingDevicesResult();
				explicit DescribeRenderingDevicesResult(const std::string &payload);
				~DescribeRenderingDevicesResult();
				long getTotal()const;
				std::vector<Device> getDevices()const;

			protected:
				void parse(const std::string &payload);
			private:
				long total_;
				std::vector<Device> devices_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VS_MODEL_DESCRIBERENDERINGDEVICESRESULT_H_