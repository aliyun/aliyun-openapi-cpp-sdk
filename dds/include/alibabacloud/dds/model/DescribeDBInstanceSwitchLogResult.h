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

#ifndef ALIBABACLOUD_DDS_MODEL_DESCRIBEDBINSTANCESWITCHLOGRESULT_H_
#define ALIBABACLOUD_DDS_MODEL_DESCRIBEDBINSTANCESWITCHLOGRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/dds/DdsExport.h>

namespace AlibabaCloud
{
	namespace Dds
	{
		namespace Model
		{
			class ALIBABACLOUD_DDS_EXPORT DescribeDBInstanceSwitchLogResult : public ServiceResult
			{
			public:
				struct LogItemsItem
				{
					std::string switchCode;
					std::string nodeId;
					std::string switchStatus;
					std::string switchTime;
				};


				DescribeDBInstanceSwitchLogResult();
				explicit DescribeDBInstanceSwitchLogResult(const std::string &payload);
				~DescribeDBInstanceSwitchLogResult();
				long getTotalCount()const;
				long getPageSize()const;
				std::string getDBInstanceId()const;
				long getPageNumber()const;
				std::vector<LogItemsItem> getLogItems()const;

			protected:
				void parse(const std::string &payload);
			private:
				long totalCount_;
				long pageSize_;
				std::string dBInstanceId_;
				long pageNumber_;
				std::vector<LogItemsItem> logItems_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DDS_MODEL_DESCRIBEDBINSTANCESWITCHLOGRESULT_H_