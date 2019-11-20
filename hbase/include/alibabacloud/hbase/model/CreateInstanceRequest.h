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

#ifndef ALIBABACLOUD_HBASE_MODEL_CREATEINSTANCEREQUEST_H_
#define ALIBABACLOUD_HBASE_MODEL_CREATEINSTANCEREQUEST_H_

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
			class ALIBABACLOUD_HBASE_EXPORT CreateInstanceRequest : public RpcServiceRequest
			{

			public:
				CreateInstanceRequest();
				~CreateInstanceRequest();

				std::string getClusterName()const;
				void setClusterName(const std::string& clusterName);
				std::string getDbInstanceConnType()const;
				void setDbInstanceConnType(const std::string& dbInstanceConnType);
				std::string getEngineVersion()const;
				void setEngineVersion(const std::string& engineVersion);
				std::string getDepMode()const;
				void setDepMode(const std::string& depMode);
				std::string getBackupId()const;
				void setBackupId(const std::string& backupId);
				std::string getDbInstanceType()const;
				void setDbInstanceType(const std::string& dbInstanceType);
				std::string getVSwitchId()const;
				void setVSwitchId(const std::string& vSwitchId);
				std::string getSecurityIPList()const;
				void setSecurityIPList(const std::string& securityIPList);
				std::string getAutoRenew()const;
				void setAutoRenew(const std::string& autoRenew);
				std::string getNetType()const;
				void setNetType(const std::string& netType);
				std::string getZoneId()const;
				void setZoneId(const std::string& zoneId);
				std::string getCoreDiskType()const;
				void setCoreDiskType(const std::string& coreDiskType);
				std::string getPricingCycle()const;
				void setPricingCycle(const std::string& pricingCycle);
				std::string getCoreInstanceQuantity()const;
				void setCoreInstanceQuantity(const std::string& coreInstanceQuantity);
				std::string getDuration()const;
				void setDuration(const std::string& duration);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getEngine()const;
				void setEngine(const std::string& engine);
				std::string getRestoreTime()const;
				void setRestoreTime(const std::string& restoreTime);
				std::string getSrcDBInstanceId()const;
				void setSrcDBInstanceId(const std::string& srcDBInstanceId);
				std::string getMasterInstanceType()const;
				void setMasterInstanceType(const std::string& masterInstanceType);
				std::string getColdStorageSize()const;
				void setColdStorageSize(const std::string& coldStorageSize);
				std::string getCoreDiskQuantity()const;
				void setCoreDiskQuantity(const std::string& coreDiskQuantity);
				std::string getIsColdStorage()const;
				void setIsColdStorage(const std::string& isColdStorage);
				std::string getCoreInstanceType()const;
				void setCoreInstanceType(const std::string& coreInstanceType);
				std::string getCoreDiskSize()const;
				void setCoreDiskSize(const std::string& coreDiskSize);
				std::string getVpcId()const;
				void setVpcId(const std::string& vpcId);
				std::string getDbType()const;
				void setDbType(const std::string& dbType);
				std::string getPayType()const;
				void setPayType(const std::string& payType);

            private:
				std::string clusterName_;
				std::string dbInstanceConnType_;
				std::string engineVersion_;
				std::string depMode_;
				std::string backupId_;
				std::string dbInstanceType_;
				std::string vSwitchId_;
				std::string securityIPList_;
				std::string autoRenew_;
				std::string netType_;
				std::string zoneId_;
				std::string coreDiskType_;
				std::string pricingCycle_;
				std::string coreInstanceQuantity_;
				std::string duration_;
				std::string regionId_;
				std::string engine_;
				std::string restoreTime_;
				std::string srcDBInstanceId_;
				std::string masterInstanceType_;
				std::string coldStorageSize_;
				std::string coreDiskQuantity_;
				std::string isColdStorage_;
				std::string coreInstanceType_;
				std::string coreDiskSize_;
				std::string vpcId_;
				std::string dbType_;
				std::string payType_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_HBASE_MODEL_CREATEINSTANCEREQUEST_H_