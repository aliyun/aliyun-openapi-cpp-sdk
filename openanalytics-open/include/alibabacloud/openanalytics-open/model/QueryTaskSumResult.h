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

#ifndef ALIBABACLOUD_OPENANALYTICS_OPEN_MODEL_QUERYTASKSUMRESULT_H_
#define ALIBABACLOUD_OPENANALYTICS_OPEN_MODEL_QUERYTASKSUMRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/openanalytics-open/Openanalytics_openExport.h>

namespace AlibabaCloud
{
	namespace Openanalytics_open
	{
		namespace Model
		{
			class ALIBABACLOUD_OPENANALYTICS_OPEN_EXPORT QueryTaskSumResult : public ServiceResult
			{
			public:
				struct QueryTaskSumInfo
				{
					std::string totalChargedStmtCountYesterdayIncr;
					std::string totalChargedStmtCountYesterday;
					std::string totalStmtCountYesterdayIncr;
					std::string totalChargedStmtCountTodayIncr;
					std::string scannedDataBytesTodayIncr;
					std::string uid;
					std::string totalStmtCountYesterday;
					std::string totalStmtCountTodayIncr;
					std::string scannedDataBytesGbYesterday;
					std::string scannedDataBytesYesterdayIncr;
					std::string scannedDataBytesGbToday;
					std::string totalChargedStmtCountToday;
					std::string totalStmtCountToday;
				};


				QueryTaskSumResult();
				explicit QueryTaskSumResult(const std::string &payload);
				~QueryTaskSumResult();
				QueryTaskSumInfo getQueryTaskSumInfo()const;
				std::string getRegionId()const;

			protected:
				void parse(const std::string &payload);
			private:
				QueryTaskSumInfo queryTaskSumInfo_;
				std::string regionId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_OPENANALYTICS_OPEN_MODEL_QUERYTASKSUMRESULT_H_