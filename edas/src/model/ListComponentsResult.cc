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

#include <alibabacloud/edas/model/ListComponentsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Edas;
using namespace AlibabaCloud::Edas::Model;

ListComponentsResult::ListComponentsResult() :
	ServiceResult()
{}

ListComponentsResult::ListComponentsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListComponentsResult::~ListComponentsResult()
{}

void ListComponentsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allComponentListNode = value["ComponentList"]["Component"];
	for (auto valueComponentListComponent : allComponentListNode)
	{
		Component componentListObject;
		if(!valueComponentListComponent["ComponentId"].isNull())
			componentListObject.componentId = valueComponentListComponent["ComponentId"].asString();
		if(!valueComponentListComponent["Type"].isNull())
			componentListObject.type = valueComponentListComponent["Type"].asString();
		if(!valueComponentListComponent["Version"].isNull())
			componentListObject.version = valueComponentListComponent["Version"].asString();
		if(!valueComponentListComponent["Expired"].isNull())
			componentListObject.expired = valueComponentListComponent["Expired"].asString() == "true";
		if(!valueComponentListComponent["ComponentKey"].isNull())
			componentListObject.componentKey = valueComponentListComponent["ComponentKey"].asString();
		if(!valueComponentListComponent["Desc"].isNull())
			componentListObject.desc = valueComponentListComponent["Desc"].asString();
		componentList_.push_back(componentListObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string ListComponentsResult::getMessage()const
{
	return message_;
}

std::vector<ListComponentsResult::Component> ListComponentsResult::getComponentList()const
{
	return componentList_;
}

int ListComponentsResult::getCode()const
{
	return code_;
}

