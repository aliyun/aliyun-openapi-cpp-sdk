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

#include <alibabacloud/ecs/model/ListPluginStatusResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

ListPluginStatusResult::ListPluginStatusResult() :
	ServiceResult()
{}

ListPluginStatusResult::ListPluginStatusResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListPluginStatusResult::~ListPluginStatusResult()
{}

void ListPluginStatusResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allInstancePluginStatusSetNode = value["InstancePluginStatusSet"]["InstancePluginStatus"];
	for (auto valueInstancePluginStatusSetInstancePluginStatus : allInstancePluginStatusSetNode)
	{
		InstancePluginStatus instancePluginStatusSetObject;
		if(!valueInstancePluginStatusSetInstancePluginStatus["InstanceId"].isNull())
			instancePluginStatusSetObject.instanceId = valueInstancePluginStatusSetInstancePluginStatus["InstanceId"].asString();
		auto allPluginStatusSetNode = valueInstancePluginStatusSetInstancePluginStatus["PluginStatusSet"]["PluginStatus"];
		for (auto valueInstancePluginStatusSetInstancePluginStatusPluginStatusSetPluginStatus : allPluginStatusSetNode)
		{
			InstancePluginStatus::PluginStatus pluginStatusSetObject;
			if(!valueInstancePluginStatusSetInstancePluginStatusPluginStatusSetPluginStatus["PluginVersion"].isNull())
				pluginStatusSetObject.pluginVersion = valueInstancePluginStatusSetInstancePluginStatusPluginStatusSetPluginStatus["PluginVersion"].asString();
			if(!valueInstancePluginStatusSetInstancePluginStatusPluginStatusSetPluginStatus["PluginName"].isNull())
				pluginStatusSetObject.pluginName = valueInstancePluginStatusSetInstancePluginStatusPluginStatusSetPluginStatus["PluginName"].asString();
			if(!valueInstancePluginStatusSetInstancePluginStatusPluginStatusSetPluginStatus["FirstHeartbeatTime"].isNull())
				pluginStatusSetObject.firstHeartbeatTime = valueInstancePluginStatusSetInstancePluginStatusPluginStatusSetPluginStatus["FirstHeartbeatTime"].asString();
			if(!valueInstancePluginStatusSetInstancePluginStatusPluginStatusSetPluginStatus["LastHeartbeatTime"].isNull())
				pluginStatusSetObject.lastHeartbeatTime = valueInstancePluginStatusSetInstancePluginStatusPluginStatusSetPluginStatus["LastHeartbeatTime"].asString();
			if(!valueInstancePluginStatusSetInstancePluginStatusPluginStatusSetPluginStatus["PluginStatus"].isNull())
				pluginStatusSetObject.pluginStatus = valueInstancePluginStatusSetInstancePluginStatusPluginStatusSetPluginStatus["PluginStatus"].asString();
			instancePluginStatusSetObject.pluginStatusSet.push_back(pluginStatusSetObject);
		}
		instancePluginStatusSet_.push_back(instancePluginStatusSetObject);
	}
	if(!value["PageSize"].isNull())
		pageSize_ = std::stol(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stol(value["PageNumber"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();

}

std::vector<ListPluginStatusResult::InstancePluginStatus> ListPluginStatusResult::getInstancePluginStatusSet()const
{
	return instancePluginStatusSet_;
}

long ListPluginStatusResult::getTotalCount()const
{
	return totalCount_;
}

long ListPluginStatusResult::getPageSize()const
{
	return pageSize_;
}

std::string ListPluginStatusResult::getNextToken()const
{
	return nextToken_;
}

long ListPluginStatusResult::getPageNumber()const
{
	return pageNumber_;
}

