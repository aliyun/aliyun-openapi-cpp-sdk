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

#ifndef ALIBABACLOUD_YUNDUN_DS_MODEL_DESCRIBECOLUMNSRESULT_H_
#define ALIBABACLOUD_YUNDUN_DS_MODEL_DESCRIBECOLUMNSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/yundun-ds/Yundun_dsExport.h>

namespace AlibabaCloud
{
	namespace Yundun_ds
	{
		namespace Model
		{
			class ALIBABACLOUD_YUNDUN_DS_EXPORT DescribeColumnsResult : public ServiceResult
			{
			public:
				struct Column
				{
					long tableId;
					int odpsRiskLevelValue;
					long instanceId;
					std::string productCode;
					long ruleId;
					std::string odpsRiskLevelName;
					long riskLevelId;
					std::string departName;
					std::string name;
					long creationTime;
					bool sensitive;
					std::string dataType;
					std::string riskLevelName;
					long id;
					std::string ruleName;
				};


				DescribeColumnsResult();
				explicit DescribeColumnsResult(const std::string &payload);
				~DescribeColumnsResult();
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
#endif // !ALIBABACLOUD_YUNDUN_DS_MODEL_DESCRIBECOLUMNSRESULT_H_