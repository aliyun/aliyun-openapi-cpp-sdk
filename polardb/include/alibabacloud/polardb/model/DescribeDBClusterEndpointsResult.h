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

#ifndef ALIBABACLOUD_POLARDB_MODEL_DESCRIBEDBCLUSTERENDPOINTSRESULT_H_
#define ALIBABACLOUD_POLARDB_MODEL_DESCRIBEDBCLUSTERENDPOINTSRESULT_H_

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
			class ALIBABACLOUD_POLARDB_EXPORT DescribeDBClusterEndpointsResult : public ServiceResult
			{
			public:
				struct DBEndpoint
				{
					struct Address
					{
						std::string privateZoneConnectionString;
						std::string vPCId;
						std::string vSwitchId;
						std::string port;
						std::string vpcInstanceId;
						std::string connectionString;
						std::string iPAddress;
						std::string netType;
					};
					std::string dBEndpointId;
					std::string polarSccTimeoutAction;
					std::string dBClusterId;
					std::string nodes;
					std::string readWriteMode;
					std::string dBEndpointDescription;
					std::string polarSccWaitTimeout;
					std::string nodeWithRoles;
					std::string autoAddNewNodes;
					std::string endpointType;
					std::vector<DBEndpoint::Address> addressItems;
					std::string sccMode;
					std::string endpointConfig;
				};


				DescribeDBClusterEndpointsResult();
				explicit DescribeDBClusterEndpointsResult(const std::string &payload);
				~DescribeDBClusterEndpointsResult();
				std::vector<DBEndpoint> getItems()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<DBEndpoint> items_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_POLARDB_MODEL_DESCRIBEDBCLUSTERENDPOINTSRESULT_H_