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

#include <alibabacloud/oos/model/ListResourceExecutionStatusResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Oos;
using namespace AlibabaCloud::Oos::Model;

ListResourceExecutionStatusResult::ListResourceExecutionStatusResult() :
	ServiceResult()
{}

ListResourceExecutionStatusResult::ListResourceExecutionStatusResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListResourceExecutionStatusResult::~ListResourceExecutionStatusResult()
{}

void ListResourceExecutionStatusResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allResourceExecutionStatusNode = value["ResourceExecutionStatus"]["Status"];
	for (auto valueResourceExecutionStatusStatus : allResourceExecutionStatusNode)
	{
		Status resourceExecutionStatusObject;
		if(!valueResourceExecutionStatusStatus["Outputs"].isNull())
			resourceExecutionStatusObject.outputs = valueResourceExecutionStatusStatus["Outputs"].asString();
		if(!valueResourceExecutionStatusStatus["Status"].isNull())
			resourceExecutionStatusObject.status = valueResourceExecutionStatusStatus["Status"].asString();
		if(!valueResourceExecutionStatusStatus["ExecutionTime"].isNull())
			resourceExecutionStatusObject.executionTime = valueResourceExecutionStatusStatus["ExecutionTime"].asString();
		if(!valueResourceExecutionStatusStatus["ResourceId"].isNull())
			resourceExecutionStatusObject.resourceId = valueResourceExecutionStatusStatus["ResourceId"].asString();
		if(!valueResourceExecutionStatusStatus["ExecutionId"].isNull())
			resourceExecutionStatusObject.executionId = valueResourceExecutionStatusStatus["ExecutionId"].asString();
		resourceExecutionStatus_.push_back(resourceExecutionStatusObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["MaxResults"].isNull())
		maxResults_ = std::stoi(value["MaxResults"].asString());

}

std::string ListResourceExecutionStatusResult::getNextToken()const
{
	return nextToken_;
}

std::vector<ListResourceExecutionStatusResult::Status> ListResourceExecutionStatusResult::getResourceExecutionStatus()const
{
	return resourceExecutionStatus_;
}

int ListResourceExecutionStatusResult::getMaxResults()const
{
	return maxResults_;
}

