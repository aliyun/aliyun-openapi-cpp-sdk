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

#ifndef ALIBABACLOUD_POLARDBX_MODEL_DESCRIBEDBINSTANCETOPOLOGYRESULT_H_
#define ALIBABACLOUD_POLARDBX_MODEL_DESCRIBEDBINSTANCETOPOLOGYRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/polardbx/PolardbxExport.h>

namespace AlibabaCloud
{
	namespace Polardbx
	{
		namespace Model
		{
			class ALIBABACLOUD_POLARDBX_EXPORT DescribeDBInstanceTopologyResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct LogicInstanceTopology
					{
						struct ItemsItem
						{
							struct ConnectionIpItem
							{
								int dBInstanceNetType;
								std::string port;
								std::string connectionString;
							};
							struct AoneRoleMap
							{
								std::string azone;
								std::string role;
							};
							std::string characterType;
							int dBInstanceConnType;
							int maxIops;
							bool activated;
							std::string nodeClass;
							std::string maintainEndTime;
							std::string dBInstanceId;
							std::string version;
							long diskSize;
							std::string dBInstanceStatusDescription;
							std::vector<ItemsItem::AoneRoleMap> azoneRoleList;
							std::string dBInstanceCreateTime;
							std::string lockReason;
							std::string maintainStartTime;
							std::string engine;
							std::string dBInstanceDescription;
							std::string dBInstanceName;
							std::string azone;
							std::string status;
							std::string engineVersion;
							int dBInstanceStatus;
							int maxConnections;
							std::string phyInstanceName;
							int lockMode;
							std::vector<ItemsItem::ConnectionIpItem> connectionIp;
							std::string storageUsed;
							std::string role;
							std::string region;
						};
						struct HistoryItemsItem
						{
							std::string role;
							std::string azone;
							bool activated;
							std::string dBInstanceId;
							std::string phyInstanceName;
							std::string region;
							std::string characterType;
							std::string dBInstanceName;
						};
						std::string engineVersion;
						int dBInstanceStatus;
						int lockMode;
						std::string dBInstanceConnType;
						std::vector<HistoryItemsItem> historyItems;
						std::string maintainEndTime;
						std::string dBInstanceId;
						int dBInstanceStorage;
						std::string dBInstanceStatusDescription;
						std::string dBInstanceCreateTime;
						std::vector<ItemsItem> items;
						std::string lockReason;
						std::string maintainStartTime;
						std::string engine;
						std::string dBInstanceDescription;
						std::string dBInstanceName;
					};
					LogicInstanceTopology logicInstanceTopology;
				};


				DescribeDBInstanceTopologyResult();
				explicit DescribeDBInstanceTopologyResult(const std::string &payload);
				~DescribeDBInstanceTopologyResult();
				Data getData()const;

			protected:
				void parse(const std::string &payload);
			private:
				Data data_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_POLARDBX_MODEL_DESCRIBEDBINSTANCETOPOLOGYRESULT_H_