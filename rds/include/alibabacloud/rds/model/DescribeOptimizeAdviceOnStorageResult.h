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

#ifndef ALIBABACLOUD_RDS_MODEL_DESCRIBEOPTIMIZEADVICEONSTORAGERESULT_H_
#define ALIBABACLOUD_RDS_MODEL_DESCRIBEOPTIMIZEADVICEONSTORAGERESULT_H_

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
			class ALIBABACLOUD_RDS_EXPORT DescribeOptimizeAdviceOnStorageResult : public ServiceResult
			{
			public:
				struct AdviceOnStorage
				{
					std::string tableName;
					std::string currentEngine;
					std::string dBName;
					std::string adviseEngine;
				};


				DescribeOptimizeAdviceOnStorageResult();
				explicit DescribeOptimizeAdviceOnStorageResult(const std::string &payload);
				~DescribeOptimizeAdviceOnStorageResult();
				int getTotalRecordsCount()const;
				int getPageRecordCount()const;
				std::string getDBInstanceId()const;
				int getPageNumber()const;
				std::vector<AdviceOnStorage> getItems()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalRecordsCount_;
				int pageRecordCount_;
				std::string dBInstanceId_;
				int pageNumber_;
				std::vector<AdviceOnStorage> items_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RDS_MODEL_DESCRIBEOPTIMIZEADVICEONSTORAGERESULT_H_