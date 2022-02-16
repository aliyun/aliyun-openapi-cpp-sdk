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

#ifndef ALIBABACLOUD_EMR_MODEL_CREATECLUSTERREQUEST_H_
#define ALIBABACLOUD_EMR_MODEL_CREATECLUSTERREQUEST_H_

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
			class ALIBABACLOUD_EMR_EXPORT CreateClusterRequest : public RpcServiceRequest
			{

			public:
				CreateClusterRequest();
				~CreateClusterRequest();

				std::string getMainVersion()const;
				void setMainVersion(const std::string& mainVersion);
				std::string getNodeKeyPairName()const;
				void setNodeKeyPairName(const std::string& nodeKeyPairName);
				std::string getClusterName()const;
				void setClusterName(const std::string& clusterName);
				std::string getMetaStoreType()const;
				void setMetaStoreType(const std::string& metaStoreType);
				std::string getReleaseVersion()const;
				void setReleaseVersion(const std::string& releaseVersion);
				std::string getDeployMode()const;
				void setDeployMode(const std::string& deployMode);
				std::string getResourceGroupId()const;
				void setResourceGroupId(const std::string& resourceGroupId);
				Struct getClickhouseConf()const;
				void setClickhouseConf(const Struct& clickhouseConf);
				Array getNodeGroups()const;
				void setNodeGroups(const Array& nodeGroups);
				Struct getMetaStoreConf()const;
				void setMetaStoreConf(const Struct& metaStoreConf);
				std::string getNodeRamRole()const;
				void setNodeRamRole(const std::string& nodeRamRole);
				bool getMasterWithPublicIp()const;
				void setMasterWithPublicIp(bool masterWithPublicIp);
				Array getUsers()const;
				void setUsers(const Array& users);
				Array getTags()const;
				void setTags(const Array& tags);
				std::string getClusterType()const;
				void setClusterType(const std::string& clusterType);
				std::string getVSwitchId()const;
				void setVSwitchId(const std::string& vSwitchId);
				Struct getNodeAttributes()const;
				void setNodeAttributes(const Struct& nodeAttributes);
				std::string getNodeRootPassword()const;
				void setNodeRootPassword(const std::string& nodeRootPassword);
				Array getBootstrapScripts()const;
				void setBootstrapScripts(const Array& bootstrapScripts);
				std::string getZoneId()const;
				void setZoneId(const std::string& zoneId);
				std::string getSystemDebug()const;
				void setSystemDebug(const std::string& systemDebug);
				std::string getClientToken()const;
				void setClientToken(const std::string& clientToken);
				std::string getSecurityGroupId()const;
				void setSecurityGroupId(const std::string& securityGroupId);
				std::string getDescription()const;
				void setDescription(const std::string& description);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getSecurityMode()const;
				void setSecurityMode(const std::string& securityMode);
				Struct getSubscriptionConfig()const;
				void setSubscriptionConfig(const Struct& subscriptionConfig);
				Array getEmrStudioConfigs()const;
				void setEmrStudioConfigs(const Array& emrStudioConfigs);
				std::string getSlaveSecurityGroupId()const;
				void setSlaveSecurityGroupId(const std::string& slaveSecurityGroupId);
				Array getOptionApplications()const;
				void setOptionApplications(const Array& optionApplications);
				Array getApplicationConfigs()const;
				void setApplicationConfigs(const Array& applicationConfigs);
				Array getComponentLayouts()const;
				void setComponentLayouts(const Array& componentLayouts);
				Array getPromotions()const;
				void setPromotions(const Array& promotions);
				std::string getVpcId()const;
				void setVpcId(const std::string& vpcId);
				std::string getPaymentType()const;
				void setPaymentType(const std::string& paymentType);
				Array getApplications()const;
				void setApplications(const Array& applications);

            private:
				std::string mainVersion_;
				std::string nodeKeyPairName_;
				std::string clusterName_;
				std::string metaStoreType_;
				std::string releaseVersion_;
				std::string deployMode_;
				std::string resourceGroupId_;
				Struct clickhouseConf_;
				Array nodeGroups_;
				Struct metaStoreConf_;
				std::string nodeRamRole_;
				bool masterWithPublicIp_;
				Array users_;
				Array tags_;
				std::string clusterType_;
				std::string vSwitchId_;
				Struct nodeAttributes_;
				std::string nodeRootPassword_;
				Array bootstrapScripts_;
				std::string zoneId_;
				std::string systemDebug_;
				std::string clientToken_;
				std::string securityGroupId_;
				std::string description_;
				std::string regionId_;
				std::string securityMode_;
				Struct subscriptionConfig_;
				Array emrStudioConfigs_;
				std::string slaveSecurityGroupId_;
				Array optionApplications_;
				Array applicationConfigs_;
				Array componentLayouts_;
				Array promotions_;
				std::string vpcId_;
				std::string paymentType_;
				Array applications_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EMR_MODEL_CREATECLUSTERREQUEST_H_