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

#ifndef ALIBABACLOUD_DDOSCOO_MODEL_DESCRIBEDEFENSERECORDSRESULT_H_
#define ALIBABACLOUD_DDOSCOO_MODEL_DESCRIBEDEFENSERECORDSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ddoscoo/DdoscooExport.h>

namespace AlibabaCloud
{
	namespace Ddoscoo
	{
		namespace Model
		{
			class ALIBABACLOUD_DDOSCOO_EXPORT DescribeDefenseRecordsResult : public ServiceResult
			{
			public:
				struct DefenseRecord
				{
					int status;
					long attackPeak;
					long endTime;
					int eventCount;
					std::string instanceId;
					long startTime;
				};


				DescribeDefenseRecordsResult();
				explicit DescribeDefenseRecordsResult(const std::string &payload);
				~DescribeDefenseRecordsResult();
				std::vector<DefenseRecord> getDefenseRecords()const;
				long getTotalCount()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<DefenseRecord> defenseRecords_;
				long totalCount_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DDOSCOO_MODEL_DESCRIBEDEFENSERECORDSRESULT_H_