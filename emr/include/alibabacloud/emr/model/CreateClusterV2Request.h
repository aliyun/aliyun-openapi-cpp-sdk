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

#ifndef ALIBABACLOUD_EMR_MODEL_CREATECLUSTERV2REQUEST_H_
#define ALIBABACLOUD_EMR_MODEL_CREATECLUSTERV2REQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/emr/EmrExport.h>

namespace AlibabaCloud
{
	namespace Emr
	{
		namespace Model
		{
			class ALIBABACLOUD_EMR_EXPORT CreateClusterV2Request : public RpcServiceRequest
			{
			public:
				struct HostComponentInfo
				{
					std::string hostName;
					std::vector<std::string> componentNameList;
					std::string serviceName;
				};
				struct BootstrapAction
				{
					std::string path;
					std::string executionTarget;
					std::string executionMoment;
					std::string arg;
					std::string name;
					std::string executionFailStrategy;
				};
				struct Tag
				{
					std::string value;
					std::string key;
				};
				struct UserInfo
				{
					std::string password;
					std::string userId;
					std::string userName;
				};
				struct PromotionInfo
				{
					std::string promotionOptionCode;
					std::string productCode;
					std::string promotionOptionNo;
				};
				struct HostGroup
				{
					int period;
					int sysDiskCapacity;
					std::string privatePoolOptionsId;
					int diskCapacity;
					std::string sysDiskType;
					std::string clusterId;
					std::string diskType;
					std::string hostGroupName;
					std::string vSwitchId;
					int diskCount;
					bool autoRenew;
					std::string gpuDriver;
					std::string hostGroupId;
					int nodeCount;
					std::string instanceType;
					std::string comment;
					std::string chargeType;
					std::string createType;
					std::string hostGroupType;
					std::string privatePoolOptionsMatchCriteria;
				};
				struct ServiceInfo
				{
					std::string serviceVersion;
					std::string serviceName;
				};
				struct Config
				{
					std::string configKey;
					std::string fileName;
					std::string encrypt;
					std::string replace;
					std::string configValue;
					std::string serviceName;
				};

			public:
				CreateClusterV2Request();
				~CreateClusterV2Request();

				bool getAutoPayOrder()const;
				void setAutoPayOrder(bool autoPayOrder);
				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getLogPath()const;
				void setLogPath(const std::string& logPath);
				std::string getMasterPwd()const;
				void setMasterPwd(const std::string& masterPwd);
				std::string getConfigurations()const;
				void setConfigurations(const std::string& configurations);
				bool getSshEnable()const;
				void setSshEnable(bool sshEnable);
				std::string getKeyPairName()const;
				void setKeyPairName(const std::string& keyPairName);
				std::string getMetaStoreType()const;
				void setMetaStoreType(const std::string& metaStoreType);
				std::string getSecurityGroupName()const;
				void setSecurityGroupName(const std::string& securityGroupName);
				std::string getMachineType()const;
				void setMachineType(const std::string& machineType);
				std::string getResourceGroupId()const;
				void setResourceGroupId(const std::string& resourceGroupId);
				std::vector<HostComponentInfo> getHostComponentInfo()const;
				void setHostComponentInfo(const std::vector<HostComponentInfo>& hostComponentInfo);
				std::string getClickHouseConf()const;
				void setClickHouseConf(const std::string& clickHouseConf);
				std::vector<BootstrapAction> getBootstrapAction()const;
				void setBootstrapAction(const std::vector<BootstrapAction>& bootstrapAction);
				std::string getMetaStoreConf()const;
				void setMetaStoreConf(const std::string& metaStoreConf);
				std::string getEmrVer()const;
				void setEmrVer(const std::string& emrVer);
				std::vector<Tag> getTag()const;
				void setTag(const std::vector<Tag>& tag);
				std::string getAuthorizeContent()const;
				void setAuthorizeContent(const std::string& authorizeContent);
				bool getIsOpenPublicIp()const;
				void setIsOpenPublicIp(bool isOpenPublicIp);
				int getPeriod()const;
				void setPeriod(int period);
				std::string getInstanceGeneration()const;
				void setInstanceGeneration(const std::string& instanceGeneration);
				std::string getVSwitchId()const;
				void setVSwitchId(const std::string& vSwitchId);
				std::string getClusterType()const;
				void setClusterType(const std::string& clusterType);
				std::string getExtraAttributes()const;
				void setExtraAttributes(const std::string& extraAttributes);
				bool getAutoRenew()const;
				void setAutoRenew(bool autoRenew);
				std::vector<std::string> getOptionSoftWareList()const;
				void setOptionSoftWareList(const std::vector<std::string>& optionSoftWareList);
				std::string getNetType()const;
				void setNetType(const std::string& netType);
				std::string getName()const;
				void setName(const std::string& name);
				std::string getZoneId()const;
				void setZoneId(const std::string& zoneId);
				bool getUseCustomHiveMetaDB()const;
				void setUseCustomHiveMetaDB(bool useCustomHiveMetaDB);
				bool getInitCustomHiveMetaDB()const;
				void setInitCustomHiveMetaDB(bool initCustomHiveMetaDB);
				std::string getClientToken()const;
				void setClientToken(const std::string& clientToken);
				bool getIoOptimized()const;
				void setIoOptimized(bool ioOptimized);
				std::string getSecurityGroupId()const;
				void setSecurityGroupId(const std::string& securityGroupId);
				bool getEasEnable()const;
				void setEasEnable(bool easEnable);
				std::string getDepositType()const;
				void setDepositType(const std::string& depositType);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getDataDiskKMSKeyId()const;
				void setDataDiskKMSKeyId(const std::string& dataDiskKMSKeyId);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				bool getUseLocalMetaDb()const;
				void setUseLocalMetaDb(bool useLocalMetaDb);
				std::vector<UserInfo> getUserInfo()const;
				void setUserInfo(const std::vector<UserInfo>& userInfo);
				std::string getUserDefinedEmrEcsRole()const;
				void setUserDefinedEmrEcsRole(const std::string& userDefinedEmrEcsRole);
				bool getDataDiskEncrypted()const;
				void setDataDiskEncrypted(bool dataDiskEncrypted);
				std::string getWhiteListType()const;
				void setWhiteListType(const std::string& whiteListType);
				std::string getRelatedClusterId()const;
				void setRelatedClusterId(const std::string& relatedClusterId);
				std::string getVpcId()const;
				void setVpcId(const std::string& vpcId);
				std::vector<PromotionInfo> getPromotionInfo()const;
				void setPromotionInfo(const std::vector<PromotionInfo>& promotionInfo);
				std::vector<HostGroup> getHostGroup()const;
				void setHostGroup(const std::vector<HostGroup>& hostGroup);
				std::string getChargeType()const;
				void setChargeType(const std::string& chargeType);
				std::vector<ServiceInfo> getServiceInfo()const;
				void setServiceInfo(const std::vector<ServiceInfo>& serviceInfo);
				std::vector<Config> getConfig()const;
				void setConfig(const std::vector<Config>& config);
				bool getHighAvailabilityEnable()const;
				void setHighAvailabilityEnable(bool highAvailabilityEnable);

            private:
				bool autoPayOrder_;
				long resourceOwnerId_;
				std::string logPath_;
				std::string masterPwd_;
				std::string configurations_;
				bool sshEnable_;
				std::string keyPairName_;
				std::string metaStoreType_;
				std::string securityGroupName_;
				std::string machineType_;
				std::string resourceGroupId_;
				std::vector<HostComponentInfo> hostComponentInfo_;
				std::string clickHouseConf_;
				std::vector<BootstrapAction> bootstrapAction_;
				std::string metaStoreConf_;
				std::string emrVer_;
				std::vector<Tag> tag_;
				std::string authorizeContent_;
				bool isOpenPublicIp_;
				int period_;
				std::string instanceGeneration_;
				std::string vSwitchId_;
				std::string clusterType_;
				std::string extraAttributes_;
				bool autoRenew_;
				std::vector<std::string> optionSoftWareList_;
				std::string netType_;
				std::string name_;
				std::string zoneId_;
				bool useCustomHiveMetaDB_;
				bool initCustomHiveMetaDB_;
				std::string clientToken_;
				bool ioOptimized_;
				std::string securityGroupId_;
				bool easEnable_;
				std::string depositType_;
				std::string accessKeyId_;
				std::string dataDiskKMSKeyId_;
				std::string regionId_;
				bool useLocalMetaDb_;
				std::vector<UserInfo> userInfo_;
				std::string userDefinedEmrEcsRole_;
				bool dataDiskEncrypted_;
				std::string whiteListType_;
				std::string relatedClusterId_;
				std::string vpcId_;
				std::vector<PromotionInfo> promotionInfo_;
				std::vector<HostGroup> hostGroup_;
				std::string chargeType_;
				std::vector<ServiceInfo> serviceInfo_;
				std::vector<Config> config_;
				bool highAvailabilityEnable_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EMR_MODEL_CREATECLUSTERV2REQUEST_H_