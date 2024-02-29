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

#ifndef ALIBABACLOUD_SDDP_MODEL_DESCRIBEOSSOBJECTSRESULT_H_
#define ALIBABACLOUD_SDDP_MODEL_DESCRIBEOSSOBJECTSRESULT_H_

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
			class ALIBABACLOUD_SDDP_EXPORT DescribeOssObjectsResult : public ServiceResult
			{
			public:
				struct Column
				{
					struct Rule
					{
						long count;
						long riskLevelId;
						std::string name;
					};
					int ruleCount;
					std::vector<Column::Rule> ruleList;
					long category;
					long instanceId;
					long size;
					long fileCategoryCode;
					long lastScanTime;
					long riskLevelId;
					std::string name;
					std::string fileCategoryName;
					std::string bucketName;
					std::string regionName;
					std::string categoryName;
					std::string fileId;
					std::string riskLevelName;
					std::string regionId;
					std::string id;
					int sensitiveCount;
				};


				DescribeOssObjectsResult();
				explicit DescribeOssObjectsResult(const std::string &payload);
				~DescribeOssObjectsResult();
				int getTotalCount()const;
				int getPageSize()const;
				int getCurrentPage()const;
				std::vector<Column> getItems()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				int pageSize_;
				int currentPage_;
				std::vector<Column> items_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SDDP_MODEL_DESCRIBEOSSOBJECTSRESULT_H_