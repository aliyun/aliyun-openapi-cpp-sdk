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

#ifndef ALIBABACLOUD_POLARDB_MODEL_DESCRIBEGLOBALDATABASENETWORKRESULT_H_
#define ALIBABACLOUD_POLARDB_MODEL_DESCRIBEGLOBALDATABASENETWORKRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/polardb/PolardbExport.h>

namespace AlibabaCloud
{
	namespace Polardb
	{
		namespace Model
		{
			class ALIBABACLOUD_POLARDB_EXPORT DescribeGlobalDatabaseNetworkResult : public ServiceResult
			{
			public:
				struct Connection
				{
					std::string port;
					std::string connectionString;
					std::string netType;
				};
				struct DBCluster
				{
					struct DBNode
					{
						std::string dBNodeStatus;
						std::string zoneId;
						int maxConnections;
						std::string dBNodeRole;
						std::string creationTime;
						std::string dBNodeId;
						int failoverPriority;
						std::string dBNodeClass;
						int maxIOPS;
					};
					std::string category;
					std::string dBClusterStatus;
					std::string dBClusterId;
					std::string dBClusterDescription;
					std::string expired;
					std::string payType;
					std::string dBType;
					std::string replicaLag;
					std::string dBNodeClass;
					std::string storageUsed;
					std::string role;
					std::string dBVersion;
					std::vector<DBCluster::DBNode> dBNodes;
					std::string serverlessType;
					std::string regionId;
					std::string expireTime;
					std::string memberStatus;
				};


				DescribeGlobalDatabaseNetworkResult();
				explicit DescribeGlobalDatabaseNetworkResult(const std::string &payload);
				~DescribeGlobalDatabaseNetworkResult();
				std::vector<Connection> getConnections()const;
				std::string getGDNStatus()const;
				std::string getDBVersion()const;
				std::string getGDNId()const;
				std::string getResourceGroupId()const;
				std::string getCreateTime()const;
				std::string getDBClusterId()const;
				std::string getDBType()const;
				std::string getGDNDescription()const;
				std::vector<DBCluster> getDBClusters()const;
				std::string getGlobalDomainName()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<Connection> connections_;
				std::string gDNStatus_;
				std::string dBVersion_;
				std::string gDNId_;
				std::string resourceGroupId_;
				std::string createTime_;
				std::string dBClusterId_;
				std::string dBType_;
				std::string gDNDescription_;
				std::vector<DBCluster> dBClusters_;
				std::string globalDomainName_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_POLARDB_MODEL_DESCRIBEGLOBALDATABASENETWORKRESULT_H_