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

#include <alibabacloud/eiam/model/ListApplicationsForNetworkZoneResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Eiam;
using namespace AlibabaCloud::Eiam::Model;

ListApplicationsForNetworkZoneResult::ListApplicationsForNetworkZoneResult() :
	ServiceResult()
{}

ListApplicationsForNetworkZoneResult::ListApplicationsForNetworkZoneResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListApplicationsForNetworkZoneResult::~ListApplicationsForNetworkZoneResult()
{}

void ListApplicationsForNetworkZoneResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allApplicationsNode = value["Applications"]["Application"];
	for (auto valueApplicationsApplication : allApplicationsNode)
	{
		Application applicationsObject;
		if(!valueApplicationsApplication["InstanceId"].isNull())
			applicationsObject.instanceId = valueApplicationsApplication["InstanceId"].asString();
		if(!valueApplicationsApplication["ApplicationId"].isNull())
			applicationsObject.applicationId = valueApplicationsApplication["ApplicationId"].asString();
		if(!valueApplicationsApplication["ApplicationName"].isNull())
			applicationsObject.applicationName = valueApplicationsApplication["ApplicationName"].asString();
		applications_.push_back(applicationsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["PreviousToken"].isNull())
		previousToken_ = value["PreviousToken"].asString();
	if(!value["MaxResults"].isNull())
		maxResults_ = std::stoi(value["MaxResults"].asString());

}

long ListApplicationsForNetworkZoneResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListApplicationsForNetworkZoneResult::getPreviousToken()const
{
	return previousToken_;
}

std::vector<ListApplicationsForNetworkZoneResult::Application> ListApplicationsForNetworkZoneResult::getApplications()const
{
	return applications_;
}

std::string ListApplicationsForNetworkZoneResult::getNextToken()const
{
	return nextToken_;
}

int ListApplicationsForNetworkZoneResult::getMaxResults()const
{
	return maxResults_;
}

