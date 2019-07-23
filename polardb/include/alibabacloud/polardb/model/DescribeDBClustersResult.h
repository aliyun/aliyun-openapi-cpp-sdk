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
					struct DBNode
					{
						std::string zoneId;
						std::string dBNodeRole;
						std::string dBNodeId;
						std::string regionId;
						std::string dBNodeClass;
					};
					struct Tag
					{
						std::string value;
						std::string key;
					};
					int deletionLock;
					std::string zoneId;
					std::string dBClusterStatus;
					std::string createTime;
					std::string dBClusterId;
					std::string dBClusterDescription;
					std::string expired;
					std::string payType;
					std::string dBClusterNetworkType;
					std::string dBType;
					std::string lockMode;
					std::string dBNodeClass;
					long storageUsed;
					std::string dBVersion;
					int dBNodeNumber;
					std::string vpcId;
					std::vector<DBCluster::DBNode> dBNodes;
					std::string regionId;
					std::string expireTime;
					std::vector<DBCluster::Tag> tags;
					std::string engine;
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