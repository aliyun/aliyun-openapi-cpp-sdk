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
	auto allFlowsNode = value["Flows"]["FlowsItem"];
	for (auto valueFlowsFlowsItem : allFlowsNode)
	{
		FlowsItem flowsObject;
		if(!valueFlowsFlowsItem["Type"].isNull())
			flowsObject.type = valueFlowsFlowsItem["Type"].asString();
		if(!valueFlowsFlowsItem["Definition"].isNull())
			flowsObject.definition = valueFlowsFlowsItem["Definition"].asString();
		if(!valueFlowsFlowsItem["RoleArn"].isNull())
			flowsObject.roleArn = valueFlowsFlowsItem["RoleArn"].asString();
		if(!valueFlowsFlowsItem["Description"].isNull())
			flowsObject.description = valueFlowsFlowsItem["Description"].asString();
		if(!valueFlowsFlowsItem["ExternalStorageLocation"].isNull())
			flowsObject.externalStorageLocation = valueFlowsFlowsItem["ExternalStorageLocation"].asString();
		if(!valueFlowsFlowsItem["Name"].isNull())
			flowsObject.name = valueFlowsFlowsItem["Name"].asString();
		if(!valueFlowsFlowsItem["CreatedTime"].isNull())
			flowsObject.createdTime = valueFlowsFlowsItem["CreatedTime"].asString();
		if(!valueFlowsFlowsItem["LastModifiedTime"].isNull())
			flowsObject.lastModifiedTime = valueFlowsFlowsItem["LastModifiedTime"].asString();
		if(!valueFlowsFlowsItem["Id"].isNull())
			flowsObject.id = valueFlowsFlowsItem["Id"].asString();
		if(!valueFlowsFlowsItem["ExecutionMode"].isNull())
			flowsObject.executionMode = valueFlowsFlowsItem["ExecutionMode"].asString();
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

