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

#ifndef ALIBABACLOUD_CLICKHOUSE_MODEL_DESCRIBEDBCLUSTERSRESULT_H_
#define ALIBABACLOUD_CLICKHOUSE_MODEL_DESCRIBEDBCLUSTERSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/clickhouse/ClickhouseExport.h>

namespace AlibabaCloud
{
	namespace Clickhouse
	{
		namespace Model
		{
			class ALIBABACLOUD_CLICKHOUSE_EXPORT DescribeDBClustersResult : public ServiceResult
			{
			public:
				struct DBCluster
				{
					struct ScaleOutStatus
					{
						std::string progress;
						std::string ratio;
					};
					struct Tag
					{
						std::string value;
						std::string key;
					};
					std::string category;
					std::string resourceGroupId;
					std::string controlVersion;
					int port;
					std::string dBClusterId;
					std::string dBClusterNetworkType;
					std::string extStorageType;
					std::string dbVersion;
					long dBNodeCount;
					std::string commodityCode;
					std::string bid;
					std::string lockReason;
					int extStorageSize;
					std::vector<DBCluster::Tag> tags;
					long dBNodeStorage;
					std::string isExpired;
					std::string storageType;
					std::string zoneId;
					std::string dBClusterStatus;
					std::string createTime;
					std::string vSwitchId;
					std::string scaleOutDisableWriteWindows;
					std::string dBClusterDescription;
					std::string payType;
					std::string lockMode;
					std::string dBNodeClass;
					ScaleOutStatus scaleOutStatus;
					std::string vpcId;
					std::string vpcCloudInstanceId;
					std::string regionId;
					std::string connectionString;
					std::string expireTime;
					std::string aliUid;
				};


				DescribeDBClustersResult();
				explicit DescribeDBClustersResult(const std::string &payload);
				~DescribeDBClustersResult();
				int getTotalCount()const;
				int getPageSize()const;
				int getPageNumber()const;
				std::vector<DBCluster> getDBClusters()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				int pageSize_;
				int pageNumber_;
				std::vector<DBCluster> dBClusters_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CLICKHOUSE_MODEL_DESCRIBEDBCLUSTERSRESULT_H_