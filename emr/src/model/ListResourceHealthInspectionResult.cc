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

#include <alibabacloud/emr/model/ListResourceHealthInspectionResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

ListResourceHealthInspectionResult::ListResourceHealthInspectionResult() :
	ServiceResult()
{}

ListResourceHealthInspectionResult::ListResourceHealthInspectionResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListResourceHealthInspectionResult::~ListResourceHealthInspectionResult()
{}

void ListResourceHealthInspectionResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allHealthInspectionsNode = value["HealthInspections"]["HealthInspection"];
	for (auto valueHealthInspectionsHealthInspection : allHealthInspectionsNode)
	{
		HealthInspection healthInspectionsObject;
		if(!valueHealthInspectionsHealthInspection["ApplicationName"].isNull())
			healthInspectionsObject.applicationName = valueHealthInspectionsHealthInspection["ApplicationName"].asString();
		if(!valueHealthInspectionsHealthInspection["ComponentName"].isNull())
			healthInspectionsObject.componentName = valueHealthInspectionsHealthInspection["ComponentName"].asString();
		if(!valueHealthInspectionsHealthInspection["NodeName"].isNull())
			healthInspectionsObject.nodeName = valueHealthInspectionsHealthInspection["NodeName"].asString();
		if(!valueHealthInspectionsHealthInspection["RuleName"].isNull())
			healthInspectionsObject.ruleName = valueHealthInspectionsHealthInspection["RuleName"].asString();
		if(!valueHealthInspectionsHealthInspection["HealthStatus"].isNull())
			healthInspectionsObject.healthStatus = valueHealthInspectionsHealthInspection["HealthStatus"].asString();
		if(!valueHealthInspectionsHealthInspection["HealthMessage"].isNull())
			healthInspectionsObject.healthMessage = valueHealthInspectionsHealthInspection["HealthMessage"].asString();
		if(!valueHealthInspectionsHealthInspection["LastReportTime"].isNull())
			healthInspectionsObject.lastReportTime = std::stol(valueHealthInspectionsHealthInspection["LastReportTime"].asString());
		healthInspections_.push_back(healthInspectionsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["MaxResults"].isNull())
		maxResults_ = std::stoi(value["MaxResults"].asString());

}

std::vector<ListResourceHealthInspectionResult::HealthInspection> ListResourceHealthInspectionResult::getHealthInspections()const
{
	return healthInspections_;
}

int ListResourceHealthInspectionResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListResourceHealthInspectionResult::getNextToken()const
{
	return nextToken_;
}

int ListResourceHealthInspectionResult::getMaxResults()const
{
	return maxResults_;
}

