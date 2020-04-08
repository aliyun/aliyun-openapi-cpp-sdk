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

#ifndef ALIBABACLOUD_CASSANDRA_MODEL_EXECUTENODETOOLREQUEST_H_
#define ALIBABACLOUD_CASSANDRA_MODEL_EXECUTENODETOOLREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/cassandra/CassandraExport.h>

namespace AlibabaCloud
{
	namespace Cassandra
	{
		namespace Model
		{
			class ALIBABACLOUD_CASSANDRA_EXPORT ExecuteNodeToolRequest : public RpcServiceRequest
			{

			public:
				ExecuteNodeToolRequest();
				~ExecuteNodeToolRequest();

				std::string getDataCenterId()const;
				void setDataCenterId(const std::string& dataCenterId);
				std::string getClusterId()const;
				void setClusterId(const std::string& clusterId);
				std::string getCommand()const;
				void setCommand(const std::string& command);
				std::string getArguments()const;
				void setArguments(const std::string& arguments);

            private:
				std::string dataCenterId_;
				std::string clusterId_;
				std::string command_;
				std::string arguments_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CASSANDRA_MODEL_EXECUTENODETOOLREQUEST_H_