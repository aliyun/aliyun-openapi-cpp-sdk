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

#include <alibabacloud/imm/model/ListBindingsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Imm;
using namespace AlibabaCloud::Imm::Model;

ListBindingsResult::ListBindingsResult() :
	ServiceResult()
{}

ListBindingsResult::ListBindingsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListBindingsResult::~ListBindingsResult()
{}

void ListBindingsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allBindingsNode = value["Bindings"]["BindingsItem"];
	for (auto valueBindingsBindingsItem : allBindingsNode)
	{
		BindingsItem bindingsObject;
		if(!valueBindingsBindingsItem["ProjectName"].isNull())
			bindingsObject.projectName = valueBindingsBindingsItem["ProjectName"].asString();
		if(!valueBindingsBindingsItem["DatasetName"].isNull())
			bindingsObject.datasetName = valueBindingsBindingsItem["DatasetName"].asString();
		if(!valueBindingsBindingsItem["URI"].isNull())
			bindingsObject.uRI = valueBindingsBindingsItem["URI"].asString();
		if(!valueBindingsBindingsItem["State"].isNull())
			bindingsObject.state = valueBindingsBindingsItem["State"].asString();
		if(!valueBindingsBindingsItem["Phase"].isNull())
			bindingsObject.phase = valueBindingsBindingsItem["Phase"].asString();
		if(!valueBindingsBindingsItem["Detail"].isNull())
			bindingsObject.detail = valueBindingsBindingsItem["Detail"].asString();
		if(!valueBindingsBindingsItem["CreateTime"].isNull())
			bindingsObject.createTime = valueBindingsBindingsItem["CreateTime"].asString();
		if(!valueBindingsBindingsItem["UpdateTime"].isNull())
			bindingsObject.updateTime = valueBindingsBindingsItem["UpdateTime"].asString();
		bindings_.push_back(bindingsObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();

}

std::string ListBindingsResult::getNextToken()const
{
	return nextToken_;
}

std::vector<ListBindingsResult::BindingsItem> ListBindingsResult::getBindings()const
{
	return bindings_;
}

