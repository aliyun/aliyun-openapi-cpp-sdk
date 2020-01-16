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

#ifndef ALIBABACLOUD_R_KVSTORE_MODEL_CREATEDEDICATEDINSTANCEREQUEST_H_
#define ALIBABACLOUD_R_KVSTORE_MODEL_CREATEDEDICATEDINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/r-kvstore/R_kvstoreExport.h>

namespace AlibabaCloud
{
	namespace R_kvstore
	{
		namespace Model
		{
			class ALIBABACLOUD_R_KVSTORE_EXPORT CreateDedicatedInstanceRequest : public RpcServiceRequest
			{

			public:
				CreateDedicatedInstanceRequest();
				~CreateDedicatedInstanceRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getNodeType()const;
				void setNodeType(const std::string& nodeType);
				std::string getNetworkType()const;
				void setNetworkType(const std::string& networkType);
				std::string getEngineVersion()const;
				void setEngineVersion(const std::string& engineVersion);
				std::string getInstanceClass()const;
				void setInstanceClass(const std::string& instanceClass);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getResourceGroupId()const;
				void setResourceGroupId(const std::string& resourceGroupId);
				std::string getPassword()const;
				void setPassword(const std::string& password);
				std::string getSecurityToken()const;
				void setSecurityToken(const std::string& securityToken);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getInstanceType()const;
				void setInstanceType(const std::string& instanceType);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getSrcDBInstanceId()const;
				void setSrcDBInstanceId(const std::string& srcDBInstanceId);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				std::string getBackupId()const;
				void setBackupId(const std::string& backupId);
				std::string getClusterId()const;
				void setClusterId(const std::string& clusterId);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getVSwitchId()const;
				void setVSwitchId(const std::string& vSwitchId);
				std::string getPrivateIpAddress()const;
				void setPrivateIpAddress(const std::string& privateIpAddress);
				std::string getInstanceName()const;
				void setInstanceName(const std::string& instanceName);
				std::string getVpcId()const;
				void setVpcId(const std::string& vpcId);
				std::string getZoneId()const;
				void setZoneId(const std::string& zoneId);
				std::string getConfig()const;
				void setConfig(const std::string& config);

            private:
				long resourceOwnerId_;
				std::string nodeType_;
				std::string networkType_;
				std::string engineVersion_;
				std::string instanceClass_;
				std::string accessKeyId_;
				std::string resourceGroupId_;
				std::string password_;
				std::string securityToken_;
				std::string regionId_;
				std::string instanceType_;
				std::string resourceOwnerAccount_;
				std::string srcDBInstanceId_;
				std::string ownerAccount_;
				std::string backupId_;
				std::string clusterId_;
				long ownerId_;
				std::string vSwitchId_;
				std::string privateIpAddress_;
				std::string instanceName_;
				std::string vpcId_;
				std::string zoneId_;
				std::string config_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_R_KVSTORE_MODEL_CREATEDEDICATEDINSTANCEREQUEST_H_