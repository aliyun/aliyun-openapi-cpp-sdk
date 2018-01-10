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
					std::string routeTableId;
					std::string description;
					std::string vpcId;
					std::string routerType;
					std::string creationTime;
					std::string routerId;
					std::string routeTableName;
					std::string routeTableType;
				};


				DescribeRouteTableListResult();
				explicit DescribeRouteTableListResult(const std::string &payload);
				~DescribeRouteTableListResult();
				int getTotalCount()const;
				void setTotalCount(int totalCount);
				std::string getMessage()const;
				void setMessage(const std::string& message);
				int getPageSize()const;
				void setPageSize(int pageSize);
				int getPageNumber()const;
				void setPageNumber(int pageNumber);
				std::vector<RouterTableListType> getRouterTableList()const;
				void setRouterTableList(const std::vector<RouterTableListType>& routerTableList);
				std::string getCode()const;
				void setCode(const std::string& code);
				bool getSuccess()const;
				void setSuccess(bool success);

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