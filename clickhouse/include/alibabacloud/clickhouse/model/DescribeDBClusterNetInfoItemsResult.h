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

#ifndef ALIBABACLOUD_CLICKHOUSE_MODEL_DESCRIBEDBCLUSTERNETINFOITEMSRESULT_H_
#define ALIBABACLOUD_CLICKHOUSE_MODEL_DESCRIBEDBCLUSTERNETINFOITEMSRESULT_H_

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
			class ALIBABACLOUD_CLICKHOUSE_EXPORT DescribeDBClusterNetInfoItemsResult : public ServiceResult
			{
			public:
				struct NetInfoItem
				{
					std::string httpPort;
					std::string vpcId;
					std::string mySQLPort;
					std::string jdbcPort;
					std::string vSwitchId;
					std::string connectionString;
					std::string iPAddress;
					std::string netType;
					std::string httpsPort;
				};


				DescribeDBClusterNetInfoItemsResult();
				explicit DescribeDBClusterNetInfoItemsResult(const std::string &payload);
				~DescribeDBClusterNetInfoItemsResult();
				std::vector<NetInfoItem> getNetInfoItems()const;
				std::string getClusterNetworkType()const;
				bool getEnableSLB()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<NetInfoItem> netInfoItems_;
				std::string clusterNetworkType_;
				bool enableSLB_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CLICKHOUSE_MODEL_DESCRIBEDBCLUSTERNETINFOITEMSRESULT_H_