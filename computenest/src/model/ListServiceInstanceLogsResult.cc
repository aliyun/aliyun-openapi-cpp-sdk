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

#include <alibabacloud/computenest/model/ListServiceInstanceLogsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ComputeNest;
using namespace AlibabaCloud::ComputeNest::Model;

ListServiceInstanceLogsResult::ListServiceInstanceLogsResult() :
	ServiceResult()
{}

ListServiceInstanceLogsResult::ListServiceInstanceLogsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListServiceInstanceLogsResult::~ListServiceInstanceLogsResult()
{}

void ListServiceInstanceLogsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allServiceInstancesLogsNode = value["ServiceInstancesLogs"]["ServiceInstanceLogs"];
	for (auto valueServiceInstancesLogsServiceInstanceLogs : allServiceInstancesLogsNode)
	{
		ServiceInstanceLogs serviceInstancesLogsObject;
		if(!valueServiceInstancesLogsServiceInstanceLogs["Timestamp"].isNull())
			serviceInstancesLogsObject.timestamp = valueServiceInstancesLogsServiceInstanceLogs["Timestamp"].asString();
		if(!valueServiceInstancesLogsServiceInstanceLogs["Source"].isNull())
			serviceInstancesLogsObject.source = valueServiceInstancesLogsServiceInstanceLogs["Source"].asString();
		if(!valueServiceInstancesLogsServiceInstanceLogs["Content"].isNull())
			serviceInstancesLogsObject.content = valueServiceInstancesLogsServiceInstanceLogs["Content"].asString();
		if(!valueServiceInstancesLogsServiceInstanceLogs["LogType"].isNull())
			serviceInstancesLogsObject.logType = valueServiceInstancesLogsServiceInstanceLogs["LogType"].asString();
		if(!valueServiceInstancesLogsServiceInstanceLogs["ResourceType"].isNull())
			serviceInstancesLogsObject.resourceType = valueServiceInstancesLogsServiceInstanceLogs["ResourceType"].asString();
		if(!valueServiceInstancesLogsServiceInstanceLogs["ResourceId"].isNull())
			serviceInstancesLogsObject.resourceId = valueServiceInstancesLogsServiceInstanceLogs["ResourceId"].asString();
		if(!valueServiceInstancesLogsServiceInstanceLogs["Status"].isNull())
			serviceInstancesLogsObject.status = valueServiceInstancesLogsServiceInstanceLogs["Status"].asString();
		serviceInstancesLogs_.push_back(serviceInstancesLogsObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["MaxResults"].isNull())
		maxResults_ = std::stoi(value["MaxResults"].asString());

}

std::string ListServiceInstanceLogsResult::getNextToken()const
{
	return nextToken_;
}

int ListServiceInstanceLogsResult::getMaxResults()const
{
	return maxResults_;
}

std::vector<ListServiceInstanceLogsResult::ServiceInstanceLogs> ListServiceInstanceLogsResult::getServiceInstancesLogs()const
{
	return serviceInstancesLogs_;
}

