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

#ifndef ALIBABACLOUD_ADCP_MODEL_DESCRIBEHUBCLUSTERSRESULT_H_
#define ALIBABACLOUD_ADCP_MODEL_DESCRIBEHUBCLUSTERSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/adcp/AdcpExport.h>

namespace AlibabaCloud
{
	namespace Adcp
	{
		namespace Model
		{
			class ALIBABACLOUD_ADCP_EXPORT DescribeHubClustersResult : public ServiceResult
			{
			public:
				struct Cluster
				{
					struct Endpoints
					{
						std::string intranetApiServerEndpoint;
						std::string publicApiServerEndpoint;
					};
					struct ClusterInfo
					{
						std::string version;
						std::string clusterId;
						std::string state;
						std::string creationTime;
						std::string updateTime;
						std::string regionId;
						std::string clusterSpec;
						std::string errorMessage;
						std::string profile;
						std::string name;
					};
					struct Network
					{
						std::string vpcId;
						std::string clusterDomain;
						std::vector<std::string> vSwitches;
						std::vector<std::string> securityGroupIDs;
					};
					struct ApiServer
					{
						std::string apiServerEipId;
						bool enabledPublic;
						std::string loadBalancerId;
					};
					struct MeshConfig
					{
						std::string meshId;
						bool enableMesh;
					};
					struct LogConfig
					{
						std::string logStoreTTL;
						bool enableLog;
						std::string logProject;
					};
					struct Condition
					{
						std::string status;
						std::string type;
						std::string message;
						std::string reason;
					};
					Endpoints endpoints;
					ClusterInfo clusterInfo;
					ApiServer apiServer;
					MeshConfig meshConfig;
					Network network;
					std::vector<Cluster::Condition> conditions;
					LogConfig logConfig;
				};


				DescribeHubClustersResult();
				explicit DescribeHubClustersResult(const std::string &payload);
				~DescribeHubClustersResult();
				std::vector<Cluster> getClusters()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<Cluster> clusters_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ADCP_MODEL_DESCRIBEHUBCLUSTERSRESULT_H_