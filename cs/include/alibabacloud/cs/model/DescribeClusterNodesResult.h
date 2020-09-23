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

#ifndef ALIBABACLOUD_CS_MODEL_DESCRIBECLUSTERNODESRESULT_H_
#define ALIBABACLOUD_CS_MODEL_DESCRIBECLUSTERNODESRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/cs/CSExport.h>

namespace AlibabaCloud
{
	namespace CS
	{
		namespace Model
		{
			class ALIBABACLOUD_CS_EXPORT DescribeClusterNodesResult : public ServiceResult
			{
			public:
				struct Page
				{
					int page_size;
					int page_number;
					int total_count;
				};
				struct Node
				{
					std::string error_message;
					std::string instance_name;
					std::string creation_time;
					std::string image_id;
					std::string instance_status;
					std::string instance_type_family;
					std::string host_name;
					std::string source;
					std::string instance_charge_type;
					std::vector<std::string> ip_address;
					std::string state;
					std::string instance_role;
					std::string nodepool_id;
					std::string node_status;
					std::string instance_id;
					std::string node_name;
					std::string instance_type;
					bool is_aliyun_node;
					std::string expired_time;
				};


				DescribeClusterNodesResult();
				explicit DescribeClusterNodesResult(const std::string &payload);
				~DescribeClusterNodesResult();
				std::vector<Node> getnodes()const;
				Page getPage()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<Node> nodes_;
				Page page_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CS_MODEL_DESCRIBECLUSTERNODESRESULT_H_