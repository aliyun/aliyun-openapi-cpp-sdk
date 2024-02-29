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

#ifndef ALIBABACLOUD_SDDP_MODEL_DESCRIBETABLESRESULT_H_
#define ALIBABACLOUD_SDDP_MODEL_DESCRIBETABLESRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/sddp/SddpExport.h>

namespace AlibabaCloud
{
	namespace Sddp
	{
		namespace Model
		{
			class ALIBABACLOUD_SDDP_EXPORT DescribeTablesResult : public ServiceResult
			{
			public:
				struct Table
				{
					struct Rule
					{
						std::string displayName;
						long count;
						long riskLevelId;
						std::string name;
					};
					struct ModelTagsItem
					{
						long id;
						std::string name;
					};
					std::vector<Table::Rule> ruleList;
					std::string owner;
					std::string productId;
					int s2Count;
					long riskLevelId;
					std::string name;
					std::string objectHex;
					std::string regionName;
					int totalRows;
					int s1Count;
					std::vector<Table::ModelTagsItem> modelTags;
					bool sensitive;
					int dataType;
					long instanceId;
					std::string productCode;
					std::string tenantName;
					std::string sensitiveRatio;
					std::string countDetails;
					long lastScanTime;
					std::string departName;
					std::string instanceName;
					int totalCount;
					std::string sensLevelName;
					long creationTime;
					std::string instanceDescription;
					std::string riskLevelName;
					long id;
					int sensitiveCount;
					int s3Count;
				};


				DescribeTablesResult();
				explicit DescribeTablesResult(const std::string &payload);
				~DescribeTablesResult();
				int getTotalCount()const;
				int getPageSize()const;
				int getCurrentPage()const;
				std::vector<Table> getItems()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				int pageSize_;
				int currentPage_;
				std::vector<Table> items_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SDDP_MODEL_DESCRIBETABLESRESULT_H_