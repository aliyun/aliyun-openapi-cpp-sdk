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

#ifndef ALIBABACLOUD_POLARDB_MODEL_DESCRIBEDBCLUSTERNODEINFORESULT_H_
#define ALIBABACLOUD_POLARDB_MODEL_DESCRIBEDBCLUSTERNODEINFORESULT_H_

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
			class ALIBABACLOUD_POLARDB_EXPORT DescribeDBClusterNodeInfoResult : public ServiceResult
			{
			public:
				struct DBNode
				{
					std::string dBNodeStatus;
					std::string zoneId;
					int maxConnections;
					std::string addedCpuCores;
					std::string dBNodeRole;
					std::string imciSwitch;
					std::string dBNodeId;
					int maxIOPS;
					std::string dBNodeClass;
					std::string creationTime;
					std::string sccMode;
					std::string masterId;
					int failoverPriority;
					std::string hotReplicaMode;
				};


				DescribeDBClusterNodeInfoResult();
				explicit DescribeDBClusterNodeInfoResult(const std::string &payload);
				~DescribeDBClusterNodeInfoResult();
				std::string getCategory()const;
				std::vector<DBNode> getDBNodes()const;
				std::string getZoneIds()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string category_;
				std::vector<DBNode> dBNodes_;
				std::string zoneIds_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_POLARDB_MODEL_DESCRIBEDBCLUSTERNODEINFORESULT_H_