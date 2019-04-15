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

#ifndef ALIBABACLOUD_AEGIS_MODEL_DESCRIBEANALYSISLOGSRESULT_H_
#define ALIBABACLOUD_AEGIS_MODEL_DESCRIBEANALYSISLOGSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/aegis/AegisExport.h>

namespace AlibabaCloud
{
	namespace Aegis
	{
		namespace Model
		{
			class ALIBABACLOUD_AEGIS_EXPORT DescribeAnalysisLogsResult : public ServiceResult
			{
			public:
				struct Logs
				{
					int processedRow;
					std::string whereQuery;
					std::string mMarker;
					std::string keys;
					std::string terms;
					int elapsedMilliSecond;
					std::string aggQuery;
					int count;
					std::string logs;
					int mLimited;
				};


				DescribeAnalysisLogsResult();
				explicit DescribeAnalysisLogsResult(const std::string &payload);
				~DescribeAnalysisLogsResult();
				Logs getLogs()const;

			protected:
				void parse(const std::string &payload);
			private:
				Logs logs_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_AEGIS_MODEL_DESCRIBEANALYSISLOGSRESULT_H_