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

#ifndef ALIBABACLOUD_HBASE_MODEL_CREATEMULTIZONECLUSTERREQUEST_H_
#define ALIBABACLOUD_HBASE_MODEL_CREATEMULTIZONECLUSTERREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/hbase/HBaseExport.h>

namespace AlibabaCloud
{
	namespace HBase
	{
		namespace Model
		{
			class ALIBABACLOUD_HBASE_EXPORT CreateMultiZoneClusterRequest : public RpcServiceRequest
			{

			public:
				CreateMultiZoneClusterRequest();
				~CreateMultiZoneClusterRequest();

				std::string getArchVersion()const;
				void setArchVersion(const std::string& archVersion);
				std::string getClusterName()const;
				void setClusterName(const std::string& clusterName);
				std::string getEngineVersion()const;
				void setEngineVersion(const std::string& engineVersion);
				std::string getLogDiskType()const;
				void setLogDiskType(const std::string& logDiskType);
				std::string getResourceGroupId()const;
				void setResourceGroupId(const std::string& resourceGroupId);
				std::string getPrimaryVSwitchId()const;
				void setPrimaryVSwitchId(const std::string& primaryVSwitchId);
				std::string getLogInstanceType()const;
				void setLogInstanceType(const std::string& logInstanceType);
				int getAutoRenewPeriod()const;
				void setAutoRenewPeriod(int autoRenewPeriod);
				int getPeriod()const;
				void setPeriod(int period);
				int getLogNodeCount()const;
				void setLogNodeCount(int logNodeCount);
				std::string getSecurityIPList()const;
				void setSecurityIPList(const std::string& securityIPList);
				std::string getPeriodUnit()const;
				void setPeriodUnit(const std::string& periodUnit);
				std::string getCoreDiskType()const;
				void setCoreDiskType(const std::string& coreDiskType);
				std::string getArbiterZoneId()const;
				void setArbiterZoneId(const std::string& arbiterZoneId);
				std::string getClientToken()const;
				void setClientToken(const std::string& clientToken);
				std::string getMultiZoneCombination()const;
				void setMultiZoneCombination(const std::string& multiZoneCombination);
				std::string getPrimaryZoneId()const;
				void setPrimaryZoneId(const std::string& primaryZoneId);
				std::string getEngine()const;
				void setEngine(const std::string& engine);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getStandbyVSwitchId()const;
				void setStandbyVSwitchId(const std::string& standbyVSwitchId);
				std::string getStandbyZoneId()const;
				void setStandbyZoneId(const std::string& standbyZoneId);
				std::string getMasterInstanceType()const;
				void setMasterInstanceType(const std::string& masterInstanceType);
				int getCoreNodeCount()const;
				void setCoreNodeCount(int coreNodeCount);
				int getLogDiskSize()const;
				void setLogDiskSize(int logDiskSize);
				std::string getCoreInstanceType()const;
				void setCoreInstanceType(const std::string& coreInstanceType);
				int getCoreDiskSize()const;
				void setCoreDiskSize(int coreDiskSize);
				std::string getVpcId()const;
				void setVpcId(const std::string& vpcId);
				std::string getPayType()const;
				void setPayType(const std::string& payType);
				std::string getArbiterVSwitchId()const;
				void setArbiterVSwitchId(const std::string& arbiterVSwitchId);

            private:
				std::string archVersion_;
				std::string clusterName_;
				std::string engineVersion_;
				std::string logDiskType_;
				std::string resourceGroupId_;
				std::string primaryVSwitchId_;
				std::string logInstanceType_;
				int autoRenewPeriod_;
				int period_;
				int logNodeCount_;
				std::string securityIPList_;
				std::string periodUnit_;
				std::string coreDiskType_;
				std::string arbiterZoneId_;
				std::string clientToken_;
				std::string multiZoneCombination_;
				std::string primaryZoneId_;
				std::string engine_;
				std::string regionId_;
				std::string standbyVSwitchId_;
				std::string standbyZoneId_;
				std::string masterInstanceType_;
				int coreNodeCount_;
				int logDiskSize_;
				std::string coreInstanceType_;
				int coreDiskSize_;
				std::string vpcId_;
				std::string payType_;
				std::string arbiterVSwitchId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_HBASE_MODEL_CREATEMULTIZONECLUSTERREQUEST_H_