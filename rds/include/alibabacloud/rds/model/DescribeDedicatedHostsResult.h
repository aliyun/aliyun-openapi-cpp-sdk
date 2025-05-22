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

#ifndef ALIBABACLOUD_RDS_MODEL_DESCRIBEDEDICATEDHOSTSRESULT_H_
#define ALIBABACLOUD_RDS_MODEL_DESCRIBEDEDICATEDHOSTSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/rds/RdsExport.h>

namespace AlibabaCloud
{
	namespace Rds
	{
		namespace Model
		{
			class ALIBABACLOUD_RDS_EXPORT DescribeDedicatedHostsResult : public ServiceResult
			{
			public:
				struct DedicatedHostsItem
				{
					std::string cPUAllocationRatio;
					std::string diskAllocationRatio;
					std::string dedicatedHostId;
					std::string instanceNumber;
					std::string createdTime;
					std::string endTime;
					std::string dedicatedHostGroupId;
					std::string bastionInstanceId;
					std::string imageCategory;
					std::string hostStorage;
					std::string openPermission;
					std::string hostType;
					std::string hostMem;
					std::string hostStatus;
					std::string memoryUsed;
					std::string cpuUsed;
					std::string engine;
					std::string hostName;
					std::string allocationStatus;
					std::string memAllocationRatio;
					std::string zoneId;
					std::string vPCId;
					std::string vSwitchId;
					std::string storageUsed;
					std::string hostClass;
					std::string hostCPU;
					std::string iPAddress;
					std::string accountName;
				};


				DescribeDedicatedHostsResult();
				explicit DescribeDedicatedHostsResult(const std::string &payload);
				~DescribeDedicatedHostsResult();
				std::vector<DedicatedHostsItem> getDedicatedHosts()const;
				std::string getDedicatedHostGroupId()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<DedicatedHostsItem> dedicatedHosts_;
				std::string dedicatedHostGroupId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RDS_MODEL_DESCRIBEDEDICATEDHOSTSRESULT_H_