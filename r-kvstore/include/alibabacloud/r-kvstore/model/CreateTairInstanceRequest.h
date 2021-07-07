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

#ifndef ALIBABACLOUD_R_KVSTORE_MODEL_CREATETAIRINSTANCEREQUEST_H_
#define ALIBABACLOUD_R_KVSTORE_MODEL_CREATETAIRINSTANCEREQUEST_H_

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
			class ALIBABACLOUD_R_KVSTORE_EXPORT CreateTairInstanceRequest : public RpcServiceRequest
			{

			public:
				CreateTairInstanceRequest();
				~CreateTairInstanceRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getSecondaryZoneId()const;
				void setSecondaryZoneId(const std::string& secondaryZoneId);
				std::string getCouponNo()const;
				void setCouponNo(const std::string& couponNo);
				std::string getEngineVersion()const;
				void setEngineVersion(const std::string& engineVersion);
				std::string getStorageType()const;
				void setStorageType(const std::string& storageType);
				int getResourceGroupId()const;
				void setResourceGroupId(int resourceGroupId);
				std::string getPassword()const;
				void setPassword(const std::string& password);
				std::string getSecurityToken()const;
				void setSecurityToken(const std::string& securityToken);
				std::string getBusinessInfo()const;
				void setBusinessInfo(const std::string& businessInfo);
				int getShardCount()const;
				void setShardCount(int shardCount);
				std::string getAutoRenewPeriod()const;
				void setAutoRenewPeriod(const std::string& autoRenewPeriod);
				int getPeriod()const;
				void setPeriod(int period);
				std::string getBackupId()const;
				void setBackupId(const std::string& backupId);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getShardType()const;
				void setShardType(const std::string& shardType);
				std::string getVSwitchId()const;
				void setVSwitchId(const std::string& vSwitchId);
				std::string getPrivateIpAddress()const;
				void setPrivateIpAddress(const std::string& privateIpAddress);
				std::string getInstanceName()const;
				void setInstanceName(const std::string& instanceName);
				std::string getAutoRenew()const;
				void setAutoRenew(const std::string& autoRenew);
				std::string getZoneId()const;
				void setZoneId(const std::string& zoneId);
				std::string getClientToken()const;
				void setClientToken(const std::string& clientToken);
				std::string getAutoUseCoupon()const;
				void setAutoUseCoupon(const std::string& autoUseCoupon);
				int getStorage()const;
				void setStorage(int storage);
				std::string getInstanceClass()const;
				void setInstanceClass(const std::string& instanceClass);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getInstanceType()const;
				void setInstanceType(const std::string& instanceType);
				bool getAutoPay()const;
				void setAutoPay(bool autoPay);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getSrcDBInstanceId()const;
				void setSrcDBInstanceId(const std::string& srcDBInstanceId);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				std::string getVpcId()const;
				void setVpcId(const std::string& vpcId);
				std::string getChargeType()const;
				void setChargeType(const std::string& chargeType);

            private:
				long resourceOwnerId_;
				std::string secondaryZoneId_;
				std::string couponNo_;
				std::string engineVersion_;
				std::string storageType_;
				int resourceGroupId_;
				std::string password_;
				std::string securityToken_;
				std::string businessInfo_;
				int shardCount_;
				std::string autoRenewPeriod_;
				int period_;
				std::string backupId_;
				long ownerId_;
				std::string shardType_;
				std::string vSwitchId_;
				std::string privateIpAddress_;
				std::string instanceName_;
				std::string autoRenew_;
				std::string zoneId_;
				std::string clientToken_;
				std::string autoUseCoupon_;
				int storage_;
				std::string instanceClass_;
				std::string accessKeyId_;
				std::string regionId_;
				std::string instanceType_;
				bool autoPay_;
				std::string resourceOwnerAccount_;
				std::string srcDBInstanceId_;
				std::string ownerAccount_;
				std::string vpcId_;
				std::string chargeType_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_R_KVSTORE_MODEL_CREATETAIRINSTANCEREQUEST_H_