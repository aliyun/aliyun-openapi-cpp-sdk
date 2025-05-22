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

#ifndef ALIBABACLOUD_RDS_MODEL_DESCRIBEDBINSTANCEENDPOINTSRESULT_H_
#define ALIBABACLOUD_RDS_MODEL_DESCRIBEDBINSTANCEENDPOINTSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/rds/RdsExport.h>

namespace AlibabaCloud
{
	namespace Rds
	{
		namespace Model
		{
			class ALIBABACLOUD_RDS_EXPORT DescribeDBInstanceEndpointsResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct DBInstanceEndpoint
					{
						struct AddressItem
						{
							std::string vpcId;
							std::string ipType;
							std::string port;
							std::string vSwitchId;
							std::string ipAddress;
							std::string connectionString;
						};
						struct NodeItem
						{
							std::string dBInstanceId;
							std::string nodeId;
							int weight;
						};
						std::vector<DBInstanceEndpoint::NodeItem> nodeItems;
						std::string endpointId;
						std::string endpointType;
						std::vector<DBInstanceEndpoint::AddressItem> addressItems;
						std::string endpointDescription;
					};
					std::vector<DBInstanceEndpoint> dBInstanceEndpoints;
					std::string ipVersion;
					std::string dBInstanceName;
				};


				DescribeDBInstanceEndpointsResult();
				explicit DescribeDBInstanceEndpointsResult(const std::string &payload);
				~DescribeDBInstanceEndpointsResult();
				Data getData()const;

			protected:
				void parse(const std::string &payload);
			private:
				Data data_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RDS_MODEL_DESCRIBEDBINSTANCEENDPOINTSRESULT_H_