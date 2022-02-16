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

#include <alibabacloud/emr/model/ListApplicationConfigHistoryResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

ListApplicationConfigHistoryResult::ListApplicationConfigHistoryResult() :
	ServiceResult()
{}

ListApplicationConfigHistoryResult::ListApplicationConfigHistoryResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListApplicationConfigHistoryResult::~ListApplicationConfigHistoryResult()
{}

void ListApplicationConfigHistoryResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allApplicationConfigHistoriesNode = value["ApplicationConfigHistories"]["ApplicationConfigHistory"];
	for (auto valueApplicationConfigHistoriesApplicationConfigHistory : allApplicationConfigHistoriesNode)
	{
		ApplicationConfigHistory applicationConfigHistoriesObject;
		if(!valueApplicationConfigHistoriesApplicationConfigHistory["ApplicationName"].isNull())
			applicationConfigHistoriesObject.applicationName = valueApplicationConfigHistoriesApplicationConfigHistory["ApplicationName"].asString();
		if(!valueApplicationConfigHistoriesApplicationConfigHistory["ConfigVersion"].isNull())
			applicationConfigHistoriesObject.configVersion = valueApplicationConfigHistoriesApplicationConfigHistory["ConfigVersion"].asString();
		if(!valueApplicationConfigHistoriesApplicationConfigHistory["ConfigFileName"].isNull())
			applicationConfigHistoriesObject.configFileName = valueApplicationConfigHistoriesApplicationConfigHistory["ConfigFileName"].asString();
		if(!valueApplicationConfigHistoriesApplicationConfigHistory["ConfigItemKey"].isNull())
			applicationConfigHistoriesObject.configItemKey = valueApplicationConfigHistoriesApplicationConfigHistory["ConfigItemKey"].asString();
		if(!valueApplicationConfigHistoriesApplicationConfigHistory["OldValue"].isNull())
			applicationConfigHistoriesObject.oldValue = valueApplicationConfigHistoriesApplicationConfigHistory["OldValue"].asString();
		if(!valueApplicationConfigHistoriesApplicationConfigHistory["NewValue"].isNull())
			applicationConfigHistoriesObject.newValue = valueApplicationConfigHistoriesApplicationConfigHistory["NewValue"].asString();
		if(!valueApplicationConfigHistoriesApplicationConfigHistory["Applied"].isNull())
			applicationConfigHistoriesObject.applied = valueApplicationConfigHistoriesApplicationConfigHistory["Applied"].asString() == "true";
		if(!valueApplicationConfigHistoriesApplicationConfigHistory["CreateTime"].isNull())
			applicationConfigHistoriesObject.createTime = std::stol(valueApplicationConfigHistoriesApplicationConfigHistory["CreateTime"].asString());
		if(!valueApplicationConfigHistoriesApplicationConfigHistory["Modifier"].isNull())
			applicationConfigHistoriesObject.modifier = valueApplicationConfigHistoriesApplicationConfigHistory["Modifier"].asString();
		if(!valueApplicationConfigHistoriesApplicationConfigHistory["Description"].isNull())
			applicationConfigHistoriesObject.description = valueApplicationConfigHistoriesApplicationConfigHistory["Description"].asString();
		if(!valueApplicationConfigHistoriesApplicationConfigHistory["NodeGroupId"].isNull())
			applicationConfigHistoriesObject.nodeGroupId = valueApplicationConfigHistoriesApplicationConfigHistory["NodeGroupId"].asString();
		if(!valueApplicationConfigHistoriesApplicationConfigHistory["NodeId"].isNull())
			applicationConfigHistoriesObject.nodeId = valueApplicationConfigHistoriesApplicationConfigHistory["NodeId"].asString();
		if(!valueApplicationConfigHistoriesApplicationConfigHistory["NodeName"].isNull())
			applicationConfigHistoriesObject.nodeName = valueApplicationConfigHistoriesApplicationConfigHistory["NodeName"].asString();
		if(!valueApplicationConfigHistoriesApplicationConfigHistory["NodeGroupName"].isNull())
			applicationConfigHistoriesObject.nodeGroupName = valueApplicationConfigHistoriesApplicationConfigHistory["NodeGroupName"].asString();
		applicationConfigHistories_.push_back(applicationConfigHistoriesObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["MaxResults"].isNull())
		maxResults_ = std::stoi(value["MaxResults"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int ListApplicationConfigHistoryResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListApplicationConfigHistoryResult::getNextToken()const
{
	return nextToken_;
}

int ListApplicationConfigHistoryResult::getMaxResults()const
{
	return maxResults_;
}

std::vector<ListApplicationConfigHistoryResult::ApplicationConfigHistory> ListApplicationConfigHistoryResult::getApplicationConfigHistories()const
{
	return applicationConfigHistories_;
}

