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

#include <alibabacloud/eiam/model/ListApplicationsForNetworkAccessEndpointResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Eiam;
using namespace AlibabaCloud::Eiam::Model;

ListApplicationsForNetworkAccessEndpointResult::ListApplicationsForNetworkAccessEndpointResult() :
	ServiceResult()
{}

ListApplicationsForNetworkAccessEndpointResult::ListApplicationsForNetworkAccessEndpointResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListApplicationsForNetworkAccessEndpointResult::~ListApplicationsForNetworkAccessEndpointResult()
{}

void ListApplicationsForNetworkAccessEndpointResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allApplicationsForNetworkAccessEndpointNode = value["ApplicationsForNetworkAccessEndpoint"]["ApplicationForNetworkAccessEndpoint"];
	for (auto valueApplicationsForNetworkAccessEndpointApplicationForNetworkAccessEndpoint : allApplicationsForNetworkAccessEndpointNode)
	{
		ApplicationForNetworkAccessEndpoint applicationsForNetworkAccessEndpointObject;
		if(!valueApplicationsForNetworkAccessEndpointApplicationForNetworkAccessEndpoint["InstanceId"].isNull())
			applicationsForNetworkAccessEndpointObject.instanceId = valueApplicationsForNetworkAccessEndpointApplicationForNetworkAccessEndpoint["InstanceId"].asString();
		if(!valueApplicationsForNetworkAccessEndpointApplicationForNetworkAccessEndpoint["ApplicationId"].isNull())
			applicationsForNetworkAccessEndpointObject.applicationId = valueApplicationsForNetworkAccessEndpointApplicationForNetworkAccessEndpoint["ApplicationId"].asString();
		if(!valueApplicationsForNetworkAccessEndpointApplicationForNetworkAccessEndpoint["ApplicationName"].isNull())
			applicationsForNetworkAccessEndpointObject.applicationName = valueApplicationsForNetworkAccessEndpointApplicationForNetworkAccessEndpoint["ApplicationName"].asString();
		applicationsForNetworkAccessEndpoint_.push_back(applicationsForNetworkAccessEndpointObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();

}

long ListApplicationsForNetworkAccessEndpointResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListApplicationsForNetworkAccessEndpointResult::getNextToken()const
{
	return nextToken_;
}

std::vector<ListApplicationsForNetworkAccessEndpointResult::ApplicationForNetworkAccessEndpoint> ListApplicationsForNetworkAccessEndpointResult::getApplicationsForNetworkAccessEndpoint()const
{
	return applicationsForNetworkAccessEndpoint_;
}

