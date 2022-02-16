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

#include <alibabacloud/emr/model/ListApplicationsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

ListApplicationsResult::ListApplicationsResult() :
	ServiceResult()
{}

ListApplicationsResult::ListApplicationsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListApplicationsResult::~ListApplicationsResult()
{}

void ListApplicationsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allApplicationsNode = value["Applications"]["Application"];
	for (auto valueApplicationsApplication : allApplicationsNode)
	{
		Application applicationsObject;
		if(!valueApplicationsApplication["ApplicationName"].isNull())
			applicationsObject.applicationName = valueApplicationsApplication["ApplicationName"].asString();
		if(!valueApplicationsApplication["ApplicationVersion"].isNull())
			applicationsObject.applicationVersion = valueApplicationsApplication["ApplicationVersion"].asString();
		if(!valueApplicationsApplication["ApplicationState"].isNull())
			applicationsObject.applicationState = valueApplicationsApplication["ApplicationState"].asString();
		applications_.push_back(applicationsObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["MaxResults"].isNull())
		maxResults_ = std::stoi(value["MaxResults"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int ListApplicationsResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<ListApplicationsResult::Application> ListApplicationsResult::getApplications()const
{
	return applications_;
}

std::string ListApplicationsResult::getNextToken()const
{
	return nextToken_;
}

int ListApplicationsResult::getMaxResults()const
{
	return maxResults_;
}

