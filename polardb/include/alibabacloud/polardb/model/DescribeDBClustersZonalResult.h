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

#ifndef ALIBABACLOUD_POLARDB_MODEL_DESCRIBEDBCLUSTERSZONALRESULT_H_
#define ALIBABACLOUD_POLARDB_MODEL_DESCRIBEDBCLUSTERSZONALRESULT_H_

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
			class ALIBABACLOUD_POLARDB_EXPORT DescribeDBClustersZonalResult : public ServiceResult
			{
			public:
				struct DBCluster
				{
					struct Tag
					{
						std::string value;
						std::string key;
					};
					std::string category;
					std::string dBClusterId;
					std::string dBType;
					std::string centralControlRegionId;
					std::string dBVersion;
					std::string cloudProvider;
					std::vector<DBCluster::Tag> tags;
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
					std::string eNSRegionId;
					int cnNodeCount;
					int dBNodeNumber;
					std::string vpcId;
					std::string cnClass;
					long storageSpace;
					std::string serverlessType;
					std::string aiType;
					std::string cpuCores;
					std::string cloudInstanceIp;
					std::string subCategory;
					std::string expireTime;
				};


				DescribeDBClustersZonalResult();
				explicit DescribeDBClustersZonalResult(const std::string &payload);
				~DescribeDBClustersZonalResult();
				int getTotalRecordCount()const;
				int getPageRecordCount()const;
				std::string getNextToken()const;
				int getPageNumber()const;
				int getMaxResults()const;
				std::vector<DBCluster> getItems()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalRecordCount_;
				int pageRecordCount_;
				std::string nextToken_;
				int pageNumber_;
				int maxResults_;
				std::vector<DBCluster> items_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_POLARDB_MODEL_DESCRIBEDBCLUSTERSZONALRESULT_H_