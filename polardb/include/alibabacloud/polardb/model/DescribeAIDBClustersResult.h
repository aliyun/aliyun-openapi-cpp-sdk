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

#ifndef ALIBABACLOUD_POLARDB_MODEL_DESCRIBEAIDBCLUSTERSRESULT_H_
#define ALIBABACLOUD_POLARDB_MODEL_DESCRIBEAIDBCLUSTERSRESULT_H_

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
			class ALIBABACLOUD_POLARDB_EXPORT DescribeAIDBClustersResult : public ServiceResult
			{
			public:
				struct DBCluster
				{
					struct Tag
					{
						std::string value;
						std::string key;
					};
					std::string dBNodeStatus;
					std::string dBNodeStatusDesc;
					std::string aiNodeType;
					std::vector<std::string> connAddrs;
					std::string dBClusterId;
					std::string dataZoneId;
					std::string dBType;
					std::string dBNodeId;
					bool mounted;
					std::string runType;
					std::vector<DBCluster::Tag> tags;
					std::string engine;
					std::string dBNodeDescription;
					std::string kubeClusterId;
					std::string storageType;
					std::string engineVersion;
					std::string modelName;
					std::string zoneId;
					std::string relativeDBClusterId;
					std::string dBClusterStatus;
					std::string createTime;
					std::string dBClusterDescription;
					bool expired;
					std::string payType;
					std::string lockMode;
					std::string mountDir;
					std::string vswitchId;
					std::string dBNodeClass;
					std::string vpcId;
					int storageSpace;
					std::string cloudInstanceIp;
					std::string creationTime;
					std::string maxQpm;
					std::string regionId;
					std::string expireTime;
				};


				DescribeAIDBClustersResult();
				explicit DescribeAIDBClustersResult(const std::string &payload);
				~DescribeAIDBClustersResult();
				int getTotalRecordCount()const;
				int getPageRecordCount()const;
				std::string getEngineVersion()const;
				int getPageNumber()const;
				std::string getDBClusterId()const;
				std::vector<DBCluster> getItems()const;
				std::string getEngine()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalRecordCount_;
				int pageRecordCount_;
				std::string engineVersion_;
				int pageNumber_;
				std::string dBClusterId_;
				std::vector<DBCluster> items_;
				std::string engine_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_POLARDB_MODEL_DESCRIBEAIDBCLUSTERSRESULT_H_