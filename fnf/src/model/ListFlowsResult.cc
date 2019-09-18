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

#include <alibabacloud/fnf/model/ListFlowsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Fnf;
using namespace AlibabaCloud::Fnf::Model;

ListFlowsResult::ListFlowsResult() :
	ServiceResult()
{}

ListFlowsResult::ListFlowsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListFlowsResult::~ListFlowsResult()
{}

void ListFlowsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allFlows = value["Flows"]["FlowsItem"];
	for (auto value : allFlows)
	{
		FlowsItem flowsObject;
		if(!value["Name"].isNull())
			flowsObject.name = value["Name"].asString();
		if(!value["Description"].isNull())
			flowsObject.description = value["Description"].asString();
		if(!value["Definition"].isNull())
			flowsObject.definition = value["Definition"].asString();
		if(!value["Id"].isNull())
			flowsObject.id = value["Id"].asString();
		if(!value["Type"].isNull())
			flowsObject.type = value["Type"].asString();
		if(!value["RoleArn"].isNull())
			flowsObject.roleArn = value["RoleArn"].asString();
		if(!value["CreatedTime"].isNull())
			flowsObject.createdTime = value["CreatedTime"].asString();
		if(!value["LastModifiedTime"].isNull())
			flowsObject.lastModifiedTime = value["LastModifiedTime"].asString();
		flows_.push_back(flowsObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();

}

std::string ListFlowsResult::getNextToken()const
{
	return nextToken_;
}

std::vector<ListFlowsResult::FlowsItem> ListFlowsResult::getFlows()const
{
	return flows_;
}

