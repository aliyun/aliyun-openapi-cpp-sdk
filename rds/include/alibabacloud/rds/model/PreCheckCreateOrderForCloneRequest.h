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

#ifndef ALIBABACLOUD_RDS_MODEL_PRECHECKCREATEORDERFORCLONEREQUEST_H_
#define ALIBABACLOUD_RDS_MODEL_PRECHECKCREATEORDERFORCLONEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/rds/RdsExport.h>

namespace AlibabaCloud
{
	namespace Rds
	{
		namespace Model
		{
			class ALIBABACLOUD_RDS_EXPORT PreCheckCreateOrderForCloneRequest : public RpcServiceRequest
			{

			public:
				PreCheckCreateOrderForCloneRequest();
				~PreCheckCreateOrderForCloneRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				int getDBInstanceStorage()const;
				void setDBInstanceStorage(int dBInstanceStorage);
				std::string getCountryCode()const;
				void setCountryCode(const std::string& countryCode);
				std::string getCurrencyCode()const;
				void setCurrencyCode(const std::string& currencyCode);
				std::string getResourceGroupId()const;
				void setResourceGroupId(const std::string& resourceGroupId);
				std::string getDBInstanceDescription()const;
				void setDBInstanceDescription(const std::string& dBInstanceDescription);
				std::string getBusinessInfo()const;
				void setBusinessInfo(const std::string& businessInfo);
				std::string getAgentId()const;
				void setAgentId(const std::string& agentId);
				std::string getResource()const;
				void setResource(const std::string& resource);
				std::string getBackupId()const;
				void setBackupId(const std::string& backupId);
				std::string getCommodityCode()const;
				void setCommodityCode(const std::string& commodityCode);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getDBInstanceClass()const;
				void setDBInstanceClass(const std::string& dBInstanceClass);
				std::string getVSwitchId()const;
				void setVSwitchId(const std::string& vSwitchId);
				std::string getPrivateIpAddress()const;
				void setPrivateIpAddress(const std::string& privateIpAddress);
				std::string getAutoRenew()const;
				void setAutoRenew(const std::string& autoRenew);
				std::string getPromotionCode()const;
				void setPromotionCode(const std::string& promotionCode);
				std::string getZoneId()const;
				void setZoneId(const std::string& zoneId);
				std::string getTimeType()const;
				void setTimeType(const std::string& timeType);
				std::string getInstanceNetworkType()const;
				void setInstanceNetworkType(const std::string& instanceNetworkType);
				std::string getNodeType()const;
				void setNodeType(const std::string& nodeType);
				std::string getClientToken()const;
				void setClientToken(const std::string& clientToken);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getTableMeta()const;
				void setTableMeta(const std::string& tableMeta);
				std::string getDBInstanceId()const;
				void setDBInstanceId(const std::string& dBInstanceId);
				std::string getDBInstanceStorageType()const;
				void setDBInstanceStorageType(const std::string& dBInstanceStorageType);
				std::string getRestoreTime()const;
				void setRestoreTime(const std::string& restoreTime);
				int getQuantity()const;
				void setQuantity(int quantity);
				bool getAutoPay()const;
				void setAutoPay(bool autoPay);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				std::string getRestoreTable()const;
				void setRestoreTable(const std::string& restoreTable);
				std::string getUsedTime()const;
				void setUsedTime(const std::string& usedTime);
				std::string getDBNames()const;
				void setDBNames(const std::string& dBNames);
				int getInstanceUsedType()const;
				void setInstanceUsedType(int instanceUsedType);
				std::string getVPCId()const;
				void setVPCId(const std::string& vPCId);
				std::string getCloneInstanceDefaultValue()const;
				void setCloneInstanceDefaultValue(const std::string& cloneInstanceDefaultValue);
				std::string getPayType()const;
				void setPayType(const std::string& payType);

            private:
				long resourceOwnerId_;
				int dBInstanceStorage_;
				std::string countryCode_;
				std::string currencyCode_;
				std::string resourceGroupId_;
				std::string dBInstanceDescription_;
				std::string businessInfo_;
				std::string agentId_;
				std::string resource_;
				std::string backupId_;
				std::string commodityCode_;
				long ownerId_;
				std::string dBInstanceClass_;
				std::string vSwitchId_;
				std::string privateIpAddress_;
				std::string autoRenew_;
				std::string promotionCode_;
				std::string zoneId_;
				std::string timeType_;
				std::string instanceNetworkType_;
				std::string nodeType_;
				std::string clientToken_;
				std::string accessKeyId_;
				std::string tableMeta_;
				std::string dBInstanceId_;
				std::string dBInstanceStorageType_;
				std::string restoreTime_;
				int quantity_;
				bool autoPay_;
				std::string resourceOwnerAccount_;
				std::string ownerAccount_;
				std::string restoreTable_;
				std::string usedTime_;
				std::string dBNames_;
				int instanceUsedType_;
				std::string vPCId_;
				std::string cloneInstanceDefaultValue_;
				std::string payType_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RDS_MODEL_PRECHECKCREATEORDERFORCLONEREQUEST_H_