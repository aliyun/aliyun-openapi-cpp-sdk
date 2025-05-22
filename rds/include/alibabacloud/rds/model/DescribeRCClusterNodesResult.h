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

#ifndef ALIBABACLOUD_RDS_MODEL_DESCRIBERCCLUSTERNODESRESULT_H_
#define ALIBABACLOUD_RDS_MODEL_DESCRIBERCCLUSTERNODESRESULT_H_

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
			class ALIBABACLOUD_RDS_EXPORT DescribeRCClusterNodesResult : public ServiceResult
			{
			public:
				struct Page
				{
					long totalCount;
					long pageSize;
					long pageNumber;
				};
				struct Node
				{
					bool isAliyunNode;
					std::vector<std::string> ipAddresses;
					std::string nodePoolId;
					std::string dockerVersion;
					std::string instanceId;
					std::string nodeName;
					std::string state;
					std::string creationTime;
					std::string imageId;
					std::string instanceRole;
					std::string runtimeVersion;
					std::string nodeStatus;
				};


				DescribeRCClusterNodesResult();
				explicit DescribeRCClusterNodesResult(const std::string &payload);
				~DescribeRCClusterNodesResult();
				Page getPage()const;
				std::vector<Node> getNodes()const;

			protected:
				void parse(const std::string &payload);
			private:
				Page page_;
				std::vector<Node> nodes_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RDS_MODEL_DESCRIBERCCLUSTERNODESRESULT_H_