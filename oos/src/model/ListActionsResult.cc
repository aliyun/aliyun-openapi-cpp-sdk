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

#include <alibabacloud/oos/model/ListActionsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Oos;
using namespace AlibabaCloud::Oos::Model;

ListActionsResult::ListActionsResult() :
	ServiceResult()
{}

ListActionsResult::ListActionsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListActionsResult::~ListActionsResult()
{}

void ListActionsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allActionsNode = value["Actions"]["Action"];
	for (auto valueActionsAction : allActionsNode)
	{
		Action actionsObject;
		if(!valueActionsAction["Popularity"].isNull())
			actionsObject.popularity = std::stoi(valueActionsAction["Popularity"].asString());
		if(!valueActionsAction["ActionType"].isNull())
			actionsObject.actionType = valueActionsAction["ActionType"].asString();
		if(!valueActionsAction["Description"].isNull())
			actionsObject.description = valueActionsAction["Description"].asString();
		if(!valueActionsAction["CreatedDate"].isNull())
			actionsObject.createdDate = valueActionsAction["CreatedDate"].asString();
		if(!valueActionsAction["TemplateVersion"].isNull())
			actionsObject.templateVersion = valueActionsAction["TemplateVersion"].asString();
		if(!valueActionsAction["OOSActionName"].isNull())
			actionsObject.oOSActionName = valueActionsAction["OOSActionName"].asString();
		if(!valueActionsAction["Properties"].isNull())
			actionsObject.properties = valueActionsAction["Properties"].asString();
		actions_.push_back(actionsObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["MaxResults"].isNull())
		maxResults_ = std::stoi(value["MaxResults"].asString());

}

std::string ListActionsResult::getNextToken()const
{
	return nextToken_;
}

std::vector<ListActionsResult::Action> ListActionsResult::getActions()const
{
	return actions_;
}

int ListActionsResult::getMaxResults()const
{
	return maxResults_;
}

