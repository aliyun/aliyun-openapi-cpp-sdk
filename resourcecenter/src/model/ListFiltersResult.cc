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

#include <alibabacloud/resourcecenter/model/ListFiltersResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ResourceCenter;
using namespace AlibabaCloud::ResourceCenter::Model;

ListFiltersResult::ListFiltersResult() :
	ServiceResult()
{}

ListFiltersResult::ListFiltersResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListFiltersResult::~ListFiltersResult()
{}

void ListFiltersResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allFiltersNode = value["Filters"]["Filter"];
	for (auto valueFiltersFilter : allFiltersNode)
	{
		Filter filtersObject;
		if(!valueFiltersFilter["FilterConfiguration"].isNull())
			filtersObject.filterConfiguration = valueFiltersFilter["FilterConfiguration"].asString();
		if(!valueFiltersFilter["FilterName"].isNull())
			filtersObject.filterName = valueFiltersFilter["FilterName"].asString();
		filters_.push_back(filtersObject);
	}
	if(!value["DefaultFilterName"].isNull())
		defaultFilterName_ = value["DefaultFilterName"].asString();

}

std::vector<ListFiltersResult::Filter> ListFiltersResult::getFilters()const
{
	return filters_;
}

std::string ListFiltersResult::getDefaultFilterName()const
{
	return defaultFilterName_;
}

