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

#include <alibabacloud/ecs/model/DescribeDiagnosticReportAttributesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

DescribeDiagnosticReportAttributesResult::DescribeDiagnosticReportAttributesResult() :
	ServiceResult()
{}

DescribeDiagnosticReportAttributesResult::DescribeDiagnosticReportAttributesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDiagnosticReportAttributesResult::~DescribeDiagnosticReportAttributesResult()
{}

void DescribeDiagnosticReportAttributesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allMetricResultsNode = value["MetricResults"]["MetricResult"];
	for (auto valueMetricResultsMetricResult : allMetricResultsNode)
	{
		MetricResult metricResultsObject;
		if(!valueMetricResultsMetricResult["MetricId"].isNull())
			metricResultsObject.metricId = valueMetricResultsMetricResult["MetricId"].asString();
		if(!valueMetricResultsMetricResult["MetricCategory"].isNull())
			metricResultsObject.metricCategory = valueMetricResultsMetricResult["MetricCategory"].asString();
		if(!valueMetricResultsMetricResult["Severity"].isNull())
			metricResultsObject.severity = valueMetricResultsMetricResult["Severity"].asString();
		if(!valueMetricResultsMetricResult["Status"].isNull())
			metricResultsObject.status = valueMetricResultsMetricResult["Status"].asString();
		auto allIssuesNode = valueMetricResultsMetricResult["Issues"]["Issue"];
		for (auto valueMetricResultsMetricResultIssuesIssue : allIssuesNode)
		{
			MetricResult::Issue issuesObject;
			if(!valueMetricResultsMetricResultIssuesIssue["IssueId"].isNull())
				issuesObject.issueId = valueMetricResultsMetricResultIssuesIssue["IssueId"].asString();
			if(!valueMetricResultsMetricResultIssuesIssue["Severity"].isNull())
				issuesObject.severity = valueMetricResultsMetricResultIssuesIssue["Severity"].asString();
			if(!valueMetricResultsMetricResultIssuesIssue["Additional"].isNull())
				issuesObject.additional = valueMetricResultsMetricResultIssuesIssue["Additional"].asString();
			if(!valueMetricResultsMetricResultIssuesIssue["OccurrenceTime"].isNull())
				issuesObject.occurrenceTime = valueMetricResultsMetricResultIssuesIssue["OccurrenceTime"].asString();
			metricResultsObject.issues.push_back(issuesObject);
		}
		metricResults_.push_back(metricResultsObject);
	}
	if(!value["ResourceId"].isNull())
		resourceId_ = value["ResourceId"].asString();
	if(!value["ResourceType"].isNull())
		resourceType_ = value["ResourceType"].asString();
	if(!value["ReportId"].isNull())
		reportId_ = value["ReportId"].asString();
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();
	if(!value["CreationTime"].isNull())
		creationTime_ = value["CreationTime"].asString();
	if(!value["FinishedTime"].isNull())
		finishedTime_ = value["FinishedTime"].asString();
	if(!value["StartTime"].isNull())
		startTime_ = value["StartTime"].asString();
	if(!value["EndTime"].isNull())
		endTime_ = value["EndTime"].asString();
	if(!value["Severity"].isNull())
		severity_ = value["Severity"].asString();
	if(!value["MetricSetId"].isNull())
		metricSetId_ = value["MetricSetId"].asString();
	if(!value["Attributes"].isNull())
		attributes_ = value["Attributes"].asString();

}

std::string DescribeDiagnosticReportAttributesResult::getStatus()const
{
	return status_;
}

std::string DescribeDiagnosticReportAttributesResult::getEndTime()const
{
	return endTime_;
}

std::string DescribeDiagnosticReportAttributesResult::getResourceId()const
{
	return resourceId_;
}

std::string DescribeDiagnosticReportAttributesResult::getMetricSetId()const
{
	return metricSetId_;
}

std::vector<DescribeDiagnosticReportAttributesResult::MetricResult> DescribeDiagnosticReportAttributesResult::getMetricResults()const
{
	return metricResults_;
}

std::string DescribeDiagnosticReportAttributesResult::getCreationTime()const
{
	return creationTime_;
}

std::string DescribeDiagnosticReportAttributesResult::getStartTime()const
{
	return startTime_;
}

std::string DescribeDiagnosticReportAttributesResult::getAttributes()const
{
	return attributes_;
}

std::string DescribeDiagnosticReportAttributesResult::getReportId()const
{
	return reportId_;
}

std::string DescribeDiagnosticReportAttributesResult::getResourceType()const
{
	return resourceType_;
}

std::string DescribeDiagnosticReportAttributesResult::getSeverity()const
{
	return severity_;
}

std::string DescribeDiagnosticReportAttributesResult::getFinishedTime()const
{
	return finishedTime_;
}

