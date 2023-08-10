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

#ifndef ALIBABACLOUD_ADCP_MODEL_DESCRIBEMANAGEDCLUSTERSRESULT_H_
#define ALIBABACLOUD_ADCP_MODEL_DESCRIBEMANAGEDCLUSTERSRESULT_H_

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
			class ALIBABACLOUD_ADCP_EXPORT DescribeManagedClustersResult : public ServiceResult
			{
			public:
				struct Cluster
				{
					struct Cluster1
					{
						std::string updated;
						std::string resourceGroupId;
						std::string clusterID;
						std::string initVersion;
						std::string currentVersion;
						std::string vSwitchID;
						std::string clusterType;
						std::string clusterSpec;
						std::string profile;
						std::string name;
						std::string created;
						std::string vpcID;
						std::string state;
						std::string region;
					};
					struct Status
					{
						std::string message;
						std::string state;
					};
					struct MeshStatus
					{
						bool inMesh;
					};
					Status status;
					Cluster1 cluster1;
					MeshStatus meshStatus;
				};


				DescribeManagedClustersResult();
				explicit DescribeManagedClustersResult(const std::string &payload);
				~DescribeManagedClustersResult();
				std::vector<Cluster> getClusters()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<Cluster> clusters_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ADCP_MODEL_DESCRIBEMANAGEDCLUSTERSRESULT_H_