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

#ifndef ALIBABACLOUD_EMR_MODEL_LISTEMRAVAILABLECONFIGRESULT_H_
#define ALIBABACLOUD_EMR_MODEL_LISTEMRAVAILABLECONFIGRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/emr/EmrExport.h>

namespace AlibabaCloud
{
	namespace Emr
	{
		namespace Model
		{
			class ALIBABACLOUD_EMR_EXPORT ListEmrAvailableConfigResult : public ServiceResult
			{
			public:
				struct EmrMainVersion
				{
					struct ClusterTypeInfo
					{
						struct ClusterServiceInfo
						{
							std::string serviceName;
							std::string serviceVersion;
							std::string serviceDisplayName;
							bool mandatory;
						};
						std::vector<ClusterTypeInfo::ClusterServiceInfo> clusterServiceInfoList;
						std::string clusterType;
					};
					std::vector<EmrMainVersion::ClusterTypeInfo> clusterTypeInfoList;
					bool ecmVersion;
					std::string extraInfo;
					std::string regionId;
					bool onCloudNative;
					std::string mainVersionName;
					std::string stackName;
					std::string publishType;
					std::string stackVersion;
				};
				struct SecurityGroup
				{
					int ecsCount;
					std::string description;
					std::string securityGroupName;
					std::string vpcId;
					std::string securityGroupId;
					std::string creationTime;
					std::string securityGroupType;
					int availableInstanceAmount;
				};
				struct VpcInfo
				{
					struct VswitchInfo
					{
						std::string description;
						std::string vpcId;
						std::string zoneId;
						long availableIpAddressCount;
						std::string vswitchName;
						std::string creationTime;
						std::string cidrBlock;
						std::string vswitchId;
					};
					std::string vRouterId;
					std::string description;
					std::vector<VpcInfo::VswitchInfo> vswitchInfoList;
					std::string vpcId;
					std::string creationTime;
					std::string cidrBlock;
					std::string vpcName;
				};


				ListEmrAvailableConfigResult();
				explicit ListEmrAvailableConfigResult(const std::string &payload);
				~ListEmrAvailableConfigResult();
				std::vector<SecurityGroup> getSecurityGroupList()const;
				std::vector<std::string> getKeyPairNameList()const;
				std::vector<VpcInfo> getVpcInfoList()const;
				std::vector<EmrMainVersion> getEmrMainVersionList()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<SecurityGroup> securityGroupList_;
				std::vector<std::string> keyPairNameList_;
				std::vector<VpcInfo> vpcInfoList_;
				std::vector<EmrMainVersion> emrMainVersionList_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EMR_MODEL_LISTEMRAVAILABLECONFIGRESULT_H_