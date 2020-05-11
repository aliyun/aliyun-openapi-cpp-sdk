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
						Compute compute;
						Login login;
						Manager manager;
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
					std::string volumeProtocol;
					std::string imageOwnerAlias;
					std::string description;
					std::string clientVersion;
					std::string name;
					std::string volumeId;
					std::string volumeType;
					std::string deployMode;
					std::string imageId;
					std::string status;
					std::string keyPairName;
					std::string remoteDirectory;
					std::string sccClusterId;
					std::vector<ApplicationInfo> applications;
					std::vector<PostInstallScriptInfo> postInstallScripts;
					std::string createTime;
					std::string securityGroupId;
					std::string vSwitchId;
					std::string schedulerType;
					std::string accountType;
					std::string volumeMountpoint;
					std::string baseOsTag;
					std::string imageName;
					std::string vpcId;
					EcsInfo ecsInfo;
					bool haEnable;
					std::string osTag;
					std::string id;
					std::string regionId;
					std::string ecsChargeType;
					std::string location;
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