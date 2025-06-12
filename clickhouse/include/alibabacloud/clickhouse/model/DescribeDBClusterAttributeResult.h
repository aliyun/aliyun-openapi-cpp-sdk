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

#ifndef ALIBABACLOUD_CLICKHOUSE_MODEL_DESCRIBEDBCLUSTERATTRIBUTERESULT_H_
#define ALIBABACLOUD_CLICKHOUSE_MODEL_DESCRIBEDBCLUSTERATTRIBUTERESULT_H_

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
			class ALIBABACLOUD_CLICKHOUSE_EXPORT DescribeDBClusterAttributeResult : public ServiceResult
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
					std::string engineMinorVersion;
					std::string resourceGroupId;
					std::string controlVersion;
					std::string vpcIpAddr;
					int port;
					std::string dBClusterType;
					std::string zookeeperClass;
					std::string appointmentRestartNodeList;
					int supportBackup;
					long dBNodeCount;
					std::string publicConnectionString;
					std::string lockReason;
					int extStorageSize;
					std::vector<Tag> tags;
					std::string engine;
					bool appointmentElectZookeeperDisableWrite;
					long dBNodeStorage;
					std::string encryptionType;
					std::string isExpired;
					std::string storageType;
					std::string engineVersion;
					std::string vSwitchId;
					std::string dBClusterDescription;
					std::string payType;
					std::string lockMode;
					ScaleOutStatus scaleOutStatus;
					std::string vpcId;
					std::string vpcCloudInstanceId;
					std::string zoneIdVswitchMap;
					bool supportMysqlPort;
					std::string connectionString;
					std::string expireTime;
					std::string category;
					std::string engineLatestMinorVersion;
					bool maintainAutoType;
					std::string dBClusterId;
					std::string encryptionKey;
					std::string dBClusterNetworkType;
					std::string extStorageType;
					std::string availableUpgradeMajorVersion;
					std::string commodityCode;
					int supportOss;
					bool supportHttpsPort;
					std::string bid;
					std::string maintainTime;
					std::string appointmentElectZookeeperTime;
					std::string zoneId;
					std::string publicIpAddr;
					std::string dBClusterStatus;
					std::string createTime;
					std::string dBNodeClass;
					std::string regionId;
					std::string appointmentRestartNodeTime;
					std::string publicPort;
					std::string aliUid;
					std::string appointmentRestartTime;
				};


				DescribeDBClusterAttributeResult();
				explicit DescribeDBClusterAttributeResult(const std::string &payload);
				~DescribeDBClusterAttributeResult();
				DBCluster getDBCluster()const;

			protected:
				void parse(const std::string &payload);
			private:
				DBCluster dBCluster_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CLICKHOUSE_MODEL_DESCRIBEDBCLUSTERATTRIBUTERESULT_H_