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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allReportList = value["ReportList"]["Report"];
	for (auto value : allReportList)
	{
		Report reportListObject;
		if(!value["DiagnosticTime"].isNull())
			reportListObject.diagnosticTime = value["DiagnosticTime"].asString();
		if(!value["Score"].isNull())
			reportListObject.score = std::stoi(value["Score"].asString());
		if(!value["StartTime"].isNull())
			reportListObject.startTime = value["StartTime"].asString();
		if(!value["EndTime"].isNull())
			reportListObject.endTime = value["EndTime"].asString();
		if(!value["DownloadURL"].isNull())
			reportListObject.downloadURL = value["DownloadURL"].asString();
		reportList_.push_back(reportListObject);
	}

}

std::vector<DescribeDiagnosticReportListResult::Report> DescribeDiagnosticReportListResult::getReportList()const
{
	return reportList_;
}

