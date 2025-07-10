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

#ifndef ALIBABACLOUD_VPC_MODEL_DESCRIBEROUTETABLELISTRESULT_H_
#define ALIBABACLOUD_VPC_MODEL_DESCRIBEROUTETABLELISTRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/vpc/VpcExport.h>

namespace AlibabaCloud
{
	namespace Vpc
	{
		namespace Model
		{
			class ALIBABACLOUD_VPC_EXPORT DescribeRouteTableListResult : public ServiceResult
			{
			public:
				struct RouterTableListType
				{
					struct Tag
					{
						std::string value;
						std::string key;
					};
					std::string status;
					std::string routeTableId;
					std::string description;
					std::string resourceGroupId;
					std::vector<std::string> vSwitchIds;
					std::string associateType;
					bool routePropagationEnable;
					std::string routerId;
					std::string routeTableType;
					std::string vpcId;
					long ownerId;
					std::string routerType;
					std::string creationTime;
					std::vector<std::string> gatewayIds;
					std::vector<RouterTableListType::Tag> tags;
					std::string routeTableName;
				};


				DescribeRouteTableListResult();
				explicit DescribeRouteTableListResult(const std::string &payload);
				~DescribeRouteTableListResult();
				int getTotalCount()const;
				std::string getMessage()const;
				int getPageSize()const;
				int getPageNumber()const;
				std::vector<RouterTableListType> getRouterTableList()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				std::string message_;
				int pageSize_;
				int pageNumber_;
				std::vector<RouterTableListType> routerTableList_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VPC_MODEL_DESCRIBEROUTETABLELISTRESULT_H_