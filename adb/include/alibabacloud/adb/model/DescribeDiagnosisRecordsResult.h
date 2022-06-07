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

#ifndef ALIBABACLOUD_ADB_MODEL_DESCRIBEDIAGNOSISRECORDSRESULT_H_
#define ALIBABACLOUD_ADB_MODEL_DESCRIBEDIAGNOSISRECORDSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/adb/AdbExport.h>

namespace AlibabaCloud
{
	namespace Adb
	{
		namespace Model
		{
			class ALIBABACLOUD_ADB_EXPORT DescribeDiagnosisRecordsResult : public ServiceResult
			{
			public:
				struct Items
				{
					std::string status;
					std::string userName;
					long totalPlanningTime;
					long sQLTruncatedThreshold;
					long peakMemory;
					long etlWriteRows;
					long startTime;
					long cost;
					std::string clientIp;
					std::string sQL;
					long executionTime;
					long scanRows;
					int totalStages;
					int resourceCostRank;
					std::string database;
					long outputRows;
					long queueTime;
					std::string rcHost;
					long scanSize;
					std::string processId;
					long outputDataSize;
					bool sQLTruncated;
					std::string resourceGroup;
				};


				DescribeDiagnosisRecordsResult();
				explicit DescribeDiagnosisRecordsResult(const std::string &payload);
				~DescribeDiagnosisRecordsResult();
				int getTotalCount()const;
				std::vector<Items> getQuerys()const;
				int getPageSize()const;
				int getPageNumber()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				std::vector<Items> querys_;
				int pageSize_;
				int pageNumber_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ADB_MODEL_DESCRIBEDIAGNOSISRECORDSRESULT_H_