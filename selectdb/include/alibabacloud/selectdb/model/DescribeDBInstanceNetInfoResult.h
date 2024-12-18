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

#ifndef ALIBABACLOUD_SELECTDB_MODEL_DESCRIBEDBINSTANCENETINFORESULT_H_
#define ALIBABACLOUD_SELECTDB_MODEL_DESCRIBEDBINSTANCENETINFORESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/selectdb/SelectdbExport.h>

namespace AlibabaCloud
{
	namespace Selectdb
	{
		namespace Model
		{
			class ALIBABACLOUD_SELECTDB_EXPORT DescribeDBInstanceNetInfoResult : public ServiceResult
			{
			public:
				struct DBInstanceNetInfosItem
				{
					struct PortListItem
					{
						int port;
						std::string protocol;
					};
					std::string vpcId;
					std::string clusterId;
					std::string ip;
					std::string vpcInstanceId;
					bool userVisible;
					std::string connectionString;
					std::string netType;
					std::string vswitchId;
					std::vector<DBInstanceNetInfosItem::PortListItem> portList;
				};
				struct DBClustersNetInfosItem
				{
					struct PortListItem2
					{
						int port;
						std::string protocol;
					};
					std::string vpcId;
					std::string clusterId;
					std::string ip;
					std::string vpcInstanceId;
					bool userVisible;
					std::vector<DBClustersNetInfosItem::PortListItem2> portList1;
					std::string connectionString;
					std::string netType;
					std::string vswitchId;
				};


				DescribeDBInstanceNetInfoResult();
				explicit DescribeDBInstanceNetInfoResult(const std::string &payload);
				~DescribeDBInstanceNetInfoResult();
				std::vector<DBClustersNetInfosItem> getDBClustersNetInfos()const;
				std::vector<DBInstanceNetInfosItem> getDBInstanceNetInfos()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<DBClustersNetInfosItem> dBClustersNetInfos_;
				std::vector<DBInstanceNetInfosItem> dBInstanceNetInfos_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SELECTDB_MODEL_DESCRIBEDBINSTANCENETINFORESULT_H_