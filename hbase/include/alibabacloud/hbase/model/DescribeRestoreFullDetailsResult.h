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

#ifndef ALIBABACLOUD_HBASE_MODEL_DESCRIBERESTOREFULLDETAILSRESULT_H_
#define ALIBABACLOUD_HBASE_MODEL_DESCRIBERESTOREFULLDETAILSRESULT_H_

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
			class ALIBABACLOUD_HBASE_EXPORT DescribeRestoreFullDetailsResult : public ServiceResult
			{
			public:
				struct RestoreFull
				{
					struct RestoreFullDetail
					{
						std::string speed;
						std::string table;
						std::string endTime;
						std::string message;
						std::string state;
						std::string dataSize;
						std::string startTime;
						std::string process;
					};
					std::vector<RestoreFullDetail> restoreFullDetails;
					std::string speed;
					int pageSize;
					int pageNumber;
					std::string dataSize;
					long total;
					int succeed;
					int fail;
				};


				DescribeRestoreFullDetailsResult();
				explicit DescribeRestoreFullDetailsResult(const std::string &payload);
				~DescribeRestoreFullDetailsResult();
				RestoreFull getRestoreFull()const;

			protected:
				void parse(const std::string &payload);
			private:
				RestoreFull restoreFull_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_HBASE_MODEL_DESCRIBERESTOREFULLDETAILSRESULT_H_