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

#include <alibabacloud/aegis/model/DescribeCustomizeReportListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Aegis;
using namespace AlibabaCloud::Aegis::Model;

DescribeCustomizeReportListResult::DescribeCustomizeReportListResult() :
	ServiceResult()
{}

DescribeCustomizeReportListResult::DescribeCustomizeReportListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeCustomizeReportListResult::~DescribeCustomizeReportListResult()
{}

void DescribeCustomizeReportListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allReportListNode = value["ReportList"]["Report"];
	for (auto valueReportListReport : allReportListNode)
	{
		Report reportListObject;
		if(!valueReportListReport["ReportId"].isNull())
			reportListObject.reportId = std::stol(valueReportListReport["ReportId"].asString());
		if(!valueReportListReport["Title"].isNull())
			reportListObject.title = valueReportListReport["Title"].asString();
		if(!valueReportListReport["ReportType"].isNull())
			reportListObject.reportType = std::stoi(valueReportListReport["ReportType"].asString());
		if(!valueReportListReport["ReportStatus"].isNull())
			reportListObject.reportStatus = valueReportListReport["ReportStatus"].asString();
		if(!valueReportListReport["IsDefault"].isNull())
			reportListObject.isDefault = valueReportListReport["IsDefault"].asString();
		reportList_.push_back(reportListObject);
	}

}

std::vector<DescribeCustomizeReportListResult::Report> DescribeCustomizeReportListResult::getReportList()const
{
	return reportList_;
}

