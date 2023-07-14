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

#ifndef ALIBABACLOUD_EHPC_MODEL_DESCRIBECLUSTERRESULT_H_
#define ALIBABACLOUD_EHPC_MODEL_DESCRIBECLUSTERRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ehpc/EHPCExport.h>

namespace AlibabaCloud
{
	namespace EHPC
	{
		namespace Model
		{
			class ALIBABACLOUD_EHPC_EXPORT DescribeClusterResult : public ServiceResult
			{
			public:
				struct ClusterInfo
				{
					struct EcsInfo
					{
						struct Manager
						{
							int count;
							std::string instanceType;
						};
						struct Compute
						{
							int count;
							std::string instanceType;
						};
						struct Login
						{
							int count;
							std::string instanceType;
						};
						struct ProxyMgr
						{
							int count;
							std::string instanceType;
						};
						Compute compute;
						Login login;
						ProxyMgr proxyMgr;
						Manager manager;
					};
					struct InitialImage
					{
						std::string imageOwnerAlias;
						std::string osTag;
						std::string imageId;
					};
					struct ApplicationInfo
					{
						std::string version;
						std::string tag;
						std::string name;
					};
					struct PostInstallScriptInfo
					{
						std::string args;
						std::string url;
					};
					struct OnPremiseInfoItem
					{
						std::string type;
						std::string iP;
						std::string hostName;
					};
					struct AddOnsInfoItem
					{
						std::string status;
						std::string softwareId;
						std::string deployMode;
						int port;
						std::string uRL;
					};
					struct NodesInfo
					{
						std::string role;
						std::string ipAddress;
						std::string schedulerType;
						std::string dir;
						std::string accountType;
						std::string hostName;
					};
					std::string volumeProtocol;
					std::string resourceGroupId;
					std::vector<AddOnsInfoItem> addOnsInfo;
					std::string name;
					std::string volumeId;
					std::string ramRoleName;
					std::string deployMode;
					std::string openldapPar;
					std::string imageId;
					std::string status;
					std::vector<PostInstallScriptInfo> postInstallScripts;
					std::string vSwitchId;
					std::string period;
					std::string computeSpotStrategy;
					std::string volumeMountpoint;
					std::string vpcId;
					EcsInfo ecsInfo;
					std::string id;
					std::string domain;
					InitialImage initialImage;
					std::string periodUnit;
					std::string imageOwnerAlias;
					std::string description;
					std::string autoRenew;
					std::string computeSpotPriceLimit;
					std::string ramNodeTypes;
					std::string clientVersion;
					std::vector<OnPremiseInfoItem> onPremiseInfo;
					std::string winAdPar;
					std::string volumeType;
					int schedulerPreInstall;
					std::string autoRenewPeriod;
					std::string keyPairName;
					std::string remoteDirectory;
					std::string sccClusterId;
					std::vector<ApplicationInfo> applications;
					std::string zoneId;
					std::string clusterVersion;
					std::string securityGroupId;
					std::string createTime;
					std::string schedulerType;
					std::string accountType;
					std::vector<NodesInfo> nodes;
					std::string baseOsTag;
					int withoutAgent;
					std::string imageName;
					bool haEnable;
					std::string osTag;
					std::string ecsChargeType;
					std::string regionId;
					std::string location;
					std::string plugin;
				};


				DescribeClusterResult();
				explicit DescribeClusterResult(const std::string &payload);
				~DescribeClusterResult();
				ClusterInfo getClusterInfo()const;

			protected:
				void parse(const std::string &payload);
			private:
				ClusterInfo clusterInfo_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EHPC_MODEL_DESCRIBECLUSTERRESULT_H_