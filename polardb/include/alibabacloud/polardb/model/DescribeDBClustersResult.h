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

#ifndef ALIBABACLOUD_POLARDB_MODEL_DESCRIBEDBCLUSTERSRESULT_H_
#define ALIBABACLOUD_POLARDB_MODEL_DESCRIBEDBCLUSTERSRESULT_H_

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
			class ALIBABACLOUD_POLARDB_EXPORT DescribeDBClustersResult : public ServiceResult
			{
			public:
				struct DBCluster
				{
					struct Tag
					{
						std::string value;
						std::string key;
					};
					struct DBNode
					{
						std::string zoneId;
						std::string dBNodeRole;
						std::string imciSwitch;
						std::string dBNodeId;
						std::string regionId;
						std::string serverless;
						std::string hotReplicaMode;
						std::string dBNodeClass;
					};
					int deletionLock;
					std::string category;
					std::string resourceGroupId;
					long compressStorageUsed;
					std::string storagePayType;
					std::string dBClusterId;
					std::string hotStandbyCluster;
					std::string deployUnit;
					std::string dBType;
					std::string dBClusterNetworkType;
					std::string remoteMemorySize;
					std::string dBVersion;
					std::vector<DBCluster::DBNode> dBNodes;
					std::vector<DBCluster::Tag> tags;
					std::string engine;
					std::string engineMigrationStatus;
					std::string memorySize;
					std::string storageType;
					std::string zoneId;
					std::string dBClusterStatus;
					std::string createTime;
					std::string dBClusterDescription;
					std::string expired;
					std::string payType;
					std::string lockMode;
					std::string vswitchId;
					std::string strictConsistency;
					std::string dBNodeClass;
					long storageUsed;
					int dBNodeNumber;
					std::string vpcId;
					long storageSpace;
					std::string serverlessType;
					std::string aiType;
					std::string cpuCores;
					std::string subCategory;
					std::string regionId;
					std::string expireTime;
				};


				DescribeDBClustersResult();
				explicit DescribeDBClustersResult(const std::string &payload);
				~DescribeDBClustersResult();
				int getTotalRecordCount()const;
				int getPageRecordCount()const;
				int getPageNumber()const;
				std::vector<DBCluster> getItems()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalRecordCount_;
				int pageRecordCount_;
				int pageNumber_;
				std::vector<DBCluster> items_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_POLARDB_MODEL_DESCRIBEDBCLUSTERSRESULT_H_