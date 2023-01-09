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

#ifndef ALIBABACLOUD_PTS_MODEL_GETPTSREPORTSBYSCENEIDRESULT_H_
#define ALIBABACLOUD_PTS_MODEL_GETPTSREPORTSBYSCENEIDRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/pts/PTSExport.h>

namespace AlibabaCloud
{
	namespace PTS
	{
		namespace Model
		{
			class ALIBABACLOUD_PTS_EXPORT GetPtsReportsBySceneIdResult : public ServiceResult
			{
			public:
				struct ReportOverView
				{
					std::string reportName;
					int agentCount;
					std::string endTime;
					std::string startTime;
					std::string reportId;
					long vum;
				};


				GetPtsReportsBySceneIdResult();
				explicit GetPtsReportsBySceneIdResult(const std::string &payload);
				~GetPtsReportsBySceneIdResult();
				std::string getMessage()const;
				std::vector<ReportOverView> getReportOverViewList()const;
				int getHttpStatusCode()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				std::vector<ReportOverView> reportOverViewList_;
				int httpStatusCode_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_PTS_MODEL_GETPTSREPORTSBYSCENEIDRESULT_H_