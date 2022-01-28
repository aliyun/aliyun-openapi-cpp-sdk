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

#ifndef ALIBABACLOUD_ENS_MODEL_DESCRIBEINSTANCESRESULT_H_
#define ALIBABACLOUD_ENS_MODEL_DESCRIBEINSTANCESRESULT_H_

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
			class ALIBABACLOUD_ENS_EXPORT DescribeInstancesResult : public ServiceResult
			{
			public:
				struct Instance
				{
					struct SystemDisk
					{
						std::string device_type;
						std::string disk_type;
						std::string uuid;
						int storage;
						std::string category;
						int size;
						std::string diskName;
						std::string diskId;
						std::string name;
					};
					struct NetworkAttributes
					{
						std::vector<std::string> privateIpAddress;
						std::string vSwitchId;
						std::string networkId;
					};
					struct DataDiskItem
					{
						std::string device_type;
						std::string disk_type;
						std::string uuid;
						int storage;
						std::string category;
						int size;
						std::string diskName;
						std::string diskId;
						std::string name;
					};
					struct PublicIpAddress
					{
						std::string gateWay;
						std::string ip;
						std::string isp;
					};
					struct PrivateIpAddress
					{
						std::string gateWay;
						std::string ip;
						std::string isp;
					};
					std::string status;
					std::vector<Instance::PrivateIpAddress> privateIpAddresses;
					std::string instanceId;
					int memory;
					std::string cpu;
					std::string specName;
					std::string oSName;
					std::vector<std::string> securityGroupIds;
					SystemDisk systemDisk;
					std::string instanceName;
					std::vector<std::string> publicIpAddress;
					NetworkAttributes networkAttributes;
					std::vector<std::string> innerIpAddress;
					std::vector<Instance::DataDiskItem> dataDisk;
					int internetMaxBandwidthOut;
					int internetMaxBandwidthIn;
					std::string expiredTime;
					std::string creationTime;
					std::string imageId;
					std::vector<Instance::PublicIpAddress> publicIpAddresses;
					std::string ensRegionId;
					int disk;
					std::string hostName;
					std::string instanceResourceType;
				};


				DescribeInstancesResult();
				explicit DescribeInstancesResult(const std::string &payload);
				~DescribeInstancesResult();
				std::vector<Instance> getInstances()const;
				int getTotalCount()const;
				int getPageSize()const;
				int getPageNumber()const;
				int getCode()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<Instance> instances_;
				int totalCount_;
				int pageSize_;
				int pageNumber_;
				int code_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ENS_MODEL_DESCRIBEINSTANCESRESULT_H_