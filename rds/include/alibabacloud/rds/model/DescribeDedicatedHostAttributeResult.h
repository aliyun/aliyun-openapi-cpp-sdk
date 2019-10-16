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

#ifndef ALIBABACLOUD_RDS_MODEL_DESCRIBEDEDICATEDHOSTATTRIBUTERESULT_H_
#define ALIBABACLOUD_RDS_MODEL_DESCRIBEDEDICATEDHOSTATTRIBUTERESULT_H_

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
			class ALIBABACLOUD_RDS_EXPORT DescribeDedicatedHostAttributeResult : public ServiceResult
			{
			public:


				DescribeDedicatedHostAttributeResult();
				explicit DescribeDedicatedHostAttributeResult(const std::string &payload);
				~DescribeDedicatedHostAttributeResult();
				std::string getCPUAllocationRatio()const;
				std::string getDiskAllocationRatio()const;
				std::string getDedicatedHostId()const;
				int getInstanceNumber()const;
				std::string getCreatedTime()const;
				std::string getDedicatedHostGroupId()const;
				std::string getAutoRenew()const;
				int getHostStorage()const;
				int getInstanceNumberSlave()const;
				std::string getExpiredTime()const;
				int getHostMem()const;
				std::string getHostStatus()const;
				std::string getMemoryUsed()const;
				std::string getCpuUsed()const;
				std::string getHostName()const;
				int getInstanceNumberROSlave()const;
				std::string getAllocationStatus()const;
				std::string getZoneId()const;
				std::string getMemAllocationRatio()const;
				std::string getVPCId()const;
				int getInstanceNumberROMaster()const;
				std::string getVSwitchId()const;
				int getInstanceNumberMaster()const;
				std::string getStorageUsed()const;
				std::string getHostClass()const;
				int getHostCPU()const;
				std::string getRegionId()const;
				std::string getIPAddress()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string cPUAllocationRatio_;
				std::string diskAllocationRatio_;
				std::string dedicatedHostId_;
				int instanceNumber_;
				std::string createdTime_;
				std::string dedicatedHostGroupId_;
				std::string autoRenew_;
				int hostStorage_;
				int instanceNumberSlave_;
				std::string expiredTime_;
				int hostMem_;
				std::string hostStatus_;
				std::string memoryUsed_;
				std::string cpuUsed_;
				std::string hostName_;
				int instanceNumberROSlave_;
				std::string allocationStatus_;
				std::string zoneId_;
				std::string memAllocationRatio_;
				std::string vPCId_;
				int instanceNumberROMaster_;
				std::string vSwitchId_;
				int instanceNumberMaster_;
				std::string storageUsed_;
				std::string hostClass_;
				int hostCPU_;
				std::string regionId_;
				std::string iPAddress_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RDS_MODEL_DESCRIBEDEDICATEDHOSTATTRIBUTERESULT_H_