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

#ifndef ALIBABACLOUD_HBASE_MODEL_CREATECLUSTERREQUEST_H_
#define ALIBABACLOUD_HBASE_MODEL_CREATECLUSTERREQUEST_H_

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
			class ALIBABACLOUD_HBASE_EXPORT CreateClusterRequest : public RpcServiceRequest
			{

			public:
				CreateClusterRequest();
				~CreateClusterRequest();

				std::string getClusterName()const;
				void setClusterName(const std::string& clusterName);
				std::string getClientToken()const;
				void setClientToken(const std::string& clientToken);
				std::string getEngineVersion()const;
				void setEngineVersion(const std::string& engineVersion);
				std::string getResourceGroupId()const;
				void setResourceGroupId(const std::string& resourceGroupId);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getEngine()const;
				void setEngine(const std::string& engine);
				int getAutoRenewPeriod()const;
				void setAutoRenewPeriod(int autoRenewPeriod);
				int getPeriod()const;
				void setPeriod(int period);
				int getDiskSize()const;
				void setDiskSize(int diskSize);
				std::string getEncryptionKey()const;
				void setEncryptionKey(const std::string& encryptionKey);
				std::string getMasterInstanceType()const;
				void setMasterInstanceType(const std::string& masterInstanceType);
				std::string getDiskType()const;
				void setDiskType(const std::string& diskType);
				std::string getVSwitchId()const;
				void setVSwitchId(const std::string& vSwitchId);
				std::string getSecurityIPList()const;
				void setSecurityIPList(const std::string& securityIPList);
				int getColdStorageSize()const;
				void setColdStorageSize(int coldStorageSize);
				std::string getPeriodUnit()const;
				void setPeriodUnit(const std::string& periodUnit);
				std::string getCoreInstanceType()const;
				void setCoreInstanceType(const std::string& coreInstanceType);
				std::string getVpcId()const;
				void setVpcId(const std::string& vpcId);
				int getNodeCount()const;
				void setNodeCount(int nodeCount);
				std::string getZoneId()const;
				void setZoneId(const std::string& zoneId);
				std::string getPayType()const;
				void setPayType(const std::string& payType);

            private:
				std::string clusterName_;
				std::string clientToken_;
				std::string engineVersion_;
				std::string resourceGroupId_;
				std::string regionId_;
				std::string engine_;
				int autoRenewPeriod_;
				int period_;
				int diskSize_;
				std::string encryptionKey_;
				std::string masterInstanceType_;
				std::string diskType_;
				std::string vSwitchId_;
				std::string securityIPList_;
				int coldStorageSize_;
				std::string periodUnit_;
				std::string coreInstanceType_;
				std::string vpcId_;
				int nodeCount_;
				std::string zoneId_;
				std::string payType_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_HBASE_MODEL_CREATECLUSTERREQUEST_H_