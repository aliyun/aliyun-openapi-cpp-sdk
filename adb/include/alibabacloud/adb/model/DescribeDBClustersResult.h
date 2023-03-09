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

#ifndef ALIBABACLOUD_ADB_MODEL_DESCRIBEDBCLUSTERSRESULT_H_
#define ALIBABACLOUD_ADB_MODEL_DESCRIBEDBCLUSTERSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/adb/AdbExport.h>

namespace AlibabaCloud
{
	namespace Adb
	{
		namespace Model
		{
			class ALIBABACLOUD_ADB_EXPORT DescribeDBClustersResult : public ServiceResult
			{
			public:
				struct DBCluster
				{
					struct Tag
					{
						std::string value;
						std::string key;
					};
					std::string storageResource;
					std::string category;
					std::string resourceGroupId;
					std::string port;
					std::string dBClusterId;
					std::string dBClusterNetworkType;
					std::string dBClusterType;
					std::string diskType;
					int elasticIOResource;
					std::string dBVersion;
					std::string dtsJobId;
					long dBNodeCount;
					std::string commodityCode;
					std::string executorCount;
					std::string lockReason;
					std::vector<DBCluster::Tag> tags;
					std::string engine;
					long dBNodeStorage;
					std::string zoneId;
					std::string innerIp;
					std::string vPCId;
					std::string dBClusterStatus;
					std::string createTime;
					std::string mode;
					std::string vSwitchId;
					std::string dBClusterDescription;
					std::string computeResource;
					std::string expired;
					std::string payType;
					std::string lockMode;
					std::string dBNodeClass;
					std::string innerPort;
					std::string vPCCloudInstanceId;
					std::string regionId;
					std::string connectionString;
					std::string expireTime;
					std::string rdsInstanceId;
				};


				DescribeDBClustersResult();
				explicit DescribeDBClustersResult(const std::string &payload);
				~DescribeDBClustersResult();
				int getTotalCount()const;
				int getPageSize()const;
				int getPageNumber()const;
				std::vector<DBCluster> getItems()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				int pageSize_;
				int pageNumber_;
				std::vector<DBCluster> items_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ADB_MODEL_DESCRIBEDBCLUSTERSRESULT_H_