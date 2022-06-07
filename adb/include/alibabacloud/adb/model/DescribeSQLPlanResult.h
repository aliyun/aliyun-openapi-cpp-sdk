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

#ifndef ALIBABACLOUD_ADB_MODEL_DESCRIBESQLPLANRESULT_H_
#define ALIBABACLOUD_ADB_MODEL_DESCRIBESQLPLANRESULT_H_

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
			class ALIBABACLOUD_ADB_EXPORT DescribeSQLPlanResult : public ServiceResult
			{
			public:
				struct Detail
				{
					long totalTask;
					long outputSize;
					std::string user;
					long totalStage;
					long peakMemory;
					std::string startTime;
					std::string clientIP;
					std::string sQL;
					long cPUTime;
					long queuedTime;
					std::string state;
					long totalTime;
					std::string database;
					long planningTime;
					long outputRows;
				};
				struct SqlPlanStage
				{
					long scanSizeMin;
					long scanSizeAvg;
					int stageId;
					long peakMemory;
					long cPUTimeMax;
					long scanTimeMin;
					long scanTimeAvg;
					long inputSizeMax;
					long scanSizeMax;
					long inputSizeMin;
					long inputSizeAvg;
					std::string state;
					long operatorCost;
					long scanTimeMax;
					long cPUTimeAvg;
					long cPUTimeMin;
				};


				DescribeSQLPlanResult();
				explicit DescribeSQLPlanResult(const std::string &payload);
				~DescribeSQLPlanResult();
				std::vector<SqlPlanStage> getStageList()const;
				std::string getOriginInfo()const;
				Detail getDetail()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<SqlPlanStage> stageList_;
				std::string originInfo_;
				Detail detail_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ADB_MODEL_DESCRIBESQLPLANRESULT_H_