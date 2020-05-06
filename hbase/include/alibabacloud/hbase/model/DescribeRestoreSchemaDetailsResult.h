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

#ifndef ALIBABACLOUD_HBASE_MODEL_DESCRIBERESTORESCHEMADETAILSRESULT_H_
#define ALIBABACLOUD_HBASE_MODEL_DESCRIBERESTORESCHEMADETAILSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/hbase/HBaseExport.h>

namespace AlibabaCloud
{
	namespace HBase
	{
		namespace Model
		{
			class ALIBABACLOUD_HBASE_EXPORT DescribeRestoreSchemaDetailsResult : public ServiceResult
			{
			public:
				struct RestoreSchema
				{
					struct RestoreSchemaDetail
					{
						std::string table;
						std::string endTime;
						std::string message;
						std::string state;
						std::string startTime;
					};
					int pageSize;
					int pageNumber;
					long total;
					std::vector<RestoreSchemaDetail> restoreSchemaDetails;
					int succeed;
					int fail;
				};


				DescribeRestoreSchemaDetailsResult();
				explicit DescribeRestoreSchemaDetailsResult(const std::string &payload);
				~DescribeRestoreSchemaDetailsResult();
				RestoreSchema getRestoreSchema()const;

			protected:
				void parse(const std::string &payload);
			private:
				RestoreSchema restoreSchema_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_HBASE_MODEL_DESCRIBERESTORESCHEMADETAILSRESULT_H_