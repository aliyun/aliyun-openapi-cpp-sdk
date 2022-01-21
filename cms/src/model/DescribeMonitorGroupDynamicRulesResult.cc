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

#include <alibabacloud/cms/model/DescribeMonitorGroupDynamicRulesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cms;
using namespace AlibabaCloud::Cms::Model;

DescribeMonitorGroupDynamicRulesResult::DescribeMonitorGroupDynamicRulesResult() :
	ServiceResult()
{}

DescribeMonitorGroupDynamicRulesResult::DescribeMonitorGroupDynamicRulesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeMonitorGroupDynamicRulesResult::~DescribeMonitorGroupDynamicRulesResult()
{}

void DescribeMonitorGroupDynamicRulesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allResourceNode = value["Resource"]["ResourceItem"];
	for (auto valueResourceResourceItem : allResourceNode)
	{
		ResourceItem resourceObject;
		if(!valueResourceResourceItem["Category"].isNull())
			resourceObject.category = valueResourceResourceItem["Category"].asString();
		if(!valueResourceResourceItem["FilterRelation"].isNull())
			resourceObject.filterRelation = valueResourceResourceItem["FilterRelation"].asString();
		auto allFiltersNode = valueResourceResourceItem["Filters"]["Filter"];
		for (auto valueResourceResourceItemFiltersFilter : allFiltersNode)
		{
			ResourceItem::Filter filtersObject;
			if(!valueResourceResourceItemFiltersFilter["Value"].isNull())
				filtersObject.value = valueResourceResourceItemFiltersFilter["Value"].asString();
			if(!valueResourceResourceItemFiltersFilter["Function"].isNull())
				filtersObject.function = valueResourceResourceItemFiltersFilter["Function"].asString();
			if(!valueResourceResourceItemFiltersFilter["Name"].isNull())
				filtersObject.name = valueResourceResourceItemFiltersFilter["Name"].asString();
			resourceObject.filters.push_back(filtersObject);
		}
		resource_.push_back(resourceObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string DescribeMonitorGroupDynamicRulesResult::getMessage()const
{
	return message_;
}

std::vector<DescribeMonitorGroupDynamicRulesResult::ResourceItem> DescribeMonitorGroupDynamicRulesResult::getResource()const
{
	return resource_;
}

int DescribeMonitorGroupDynamicRulesResult::getCode()const
{
	return code_;
}

bool DescribeMonitorGroupDynamicRulesResult::getSuccess()const
{
	return success_;
}

