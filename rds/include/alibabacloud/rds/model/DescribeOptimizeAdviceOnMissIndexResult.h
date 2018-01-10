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

#ifndef ALIBABACLOUD_RDS_MODEL_DESCRIBEOPTIMIZEADVICEONMISSINDEXRESULT_H_
#define ALIBABACLOUD_RDS_MODEL_DESCRIBEOPTIMIZEADVICEONMISSINDEXRESULT_H_

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
			class ALIBABACLOUD_RDS_EXPORT DescribeOptimizeAdviceOnMissIndexResult : public ServiceResult
			{
			public:
				struct AdviceOnMissIndex
				{
					std::string tableName;
					std::string queryColumn;
					std::string dBName;
					std::string sQLText;
				};


				DescribeOptimizeAdviceOnMissIndexResult();
				explicit DescribeOptimizeAdviceOnMissIndexResult(const std::string &payload);
				~DescribeOptimizeAdviceOnMissIndexResult();
				int getTotalRecordsCount()const;
				void setTotalRecordsCount(int totalRecordsCount);
				int getPageRecordCount()const;
				void setPageRecordCount(int pageRecordCount);
				std::string getDBInstanceId()const;
				void setDBInstanceId(const std::string& dBInstanceId);
				int getPageNumber()const;
				void setPageNumber(int pageNumber);
				std::vector<AdviceOnMissIndex> getItems()const;
				void setItems(const std::vector<AdviceOnMissIndex>& items);

			protected:
				void parse(const std::string &payload);
			private:
				int totalRecordsCount_;
				int pageRecordCount_;
				std::string dBInstanceId_;
				int pageNumber_;
				std::vector<AdviceOnMissIndex> items_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RDS_MODEL_DESCRIBEOPTIMIZEADVICEONMISSINDEXRESULT_H_