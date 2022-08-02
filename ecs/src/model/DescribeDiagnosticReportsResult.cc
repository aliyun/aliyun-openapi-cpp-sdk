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

#include <alibabacloud/ecs/model/DescribeDiagnosticReportsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

DescribeDiagnosticReportsResult::DescribeDiagnosticReportsResult() :
	ServiceResult()
{}

DescribeDiagnosticReportsResult::DescribeDiagnosticReportsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDiagnosticReportsResult::~DescribeDiagnosticReportsResult()
{}

void DescribeDiagnosticReportsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allReportsNode = value["Reports"]["Report"];
	for (auto valueReportsReport : allReportsNode)
	{
		Report reportsObject;
		if(!valueReportsReport["ResourceId"].isNull())
			reportsObject.resourceId = valueReportsReport["ResourceId"].asString();
		if(!valueReportsReport["ResourceType"].isNull())
			reportsObject.resourceType = valueReportsReport["ResourceType"].asString();
		if(!valueReportsReport["MetricSetId"].isNull())
			reportsObject.metricSetId = valueReportsReport["MetricSetId"].asString();
		if(!valueReportsReport["StartTime"].isNull())
			reportsObject.startTime = valueReportsReport["StartTime"].asString();
		if(!valueReportsReport["EndTime"].isNull())
			reportsObject.endTime = valueReportsReport["EndTime"].asString();
		if(!valueReportsReport["ReportId"].isNull())
			reportsObject.reportId = valueReportsReport["ReportId"].asString();
		if(!valueReportsReport["Status"].isNull())
			reportsObject.status = valueReportsReport["Status"].asString();
		if(!valueReportsReport["CreationTime"].isNull())
			reportsObject.creationTime = valueReportsReport["CreationTime"].asString();
		if(!valueReportsReport["FinishedTime"].isNull())
			reportsObject.finishedTime = valueReportsReport["FinishedTime"].asString();
		if(!valueReportsReport["Severity"].isNull())
			reportsObject.severity = valueReportsReport["Severity"].asString();
		auto allIssuesNode = valueReportsReport["Issues"]["Issue"];
		for (auto valueReportsReportIssuesIssue : allIssuesNode)
		{
			Report::Issue issuesObject;
			if(!valueReportsReportIssuesIssue["MetricId"].isNull())
				issuesObject.metricId = valueReportsReportIssuesIssue["MetricId"].asString();
			if(!valueReportsReportIssuesIssue["MetricCategory"].isNull())
				issuesObject.metricCategory = valueReportsReportIssuesIssue["MetricCategory"].asString();
			if(!valueReportsReportIssuesIssue["IssueId"].isNull())
				issuesObject.issueId = valueReportsReportIssuesIssue["IssueId"].asString();
			if(!valueReportsReportIssuesIssue["Severity"].isNull())
				issuesObject.severity = valueReportsReportIssuesIssue["Severity"].asString();
			reportsObject.issues.push_back(issuesObject);
		}
		reports_.push_back(reportsObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();

}

std::string DescribeDiagnosticReportsResult::getNextToken()const
{
	return nextToken_;
}

std::vector<DescribeDiagnosticReportsResult::Report> DescribeDiagnosticReportsResult::getReports()const
{
	return reports_;
}

