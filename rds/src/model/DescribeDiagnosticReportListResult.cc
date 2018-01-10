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

#include <alibabacloud/rds/model/DescribeDiagnosticReportListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

DescribeDiagnosticReportListResult::DescribeDiagnosticReportListResult() :
	ServiceResult()
{}

DescribeDiagnosticReportListResult::DescribeDiagnosticReportListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDiagnosticReportListResult::~DescribeDiagnosticReportListResult()
{}

void DescribeDiagnosticReportListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allReportList = value["ReportList"]["Report"];
	for (auto value : allReportList)
	{
		Report reportObject;
		reportObject.diagnosticTime = value["DiagnosticTime"].asString();
		reportObject.score = std::stoi(value["Score"].asString());
		reportObject.startTime = value["StartTime"].asString();
		reportObject.endTime = value["EndTime"].asString();
		reportObject.downloadURL = value["DownloadURL"].asString();
		reportList_.push_back(reportObject);
	}

}

