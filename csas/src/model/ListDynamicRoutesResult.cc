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

#include <alibabacloud/csas/model/ListDynamicRoutesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Csas;
using namespace AlibabaCloud::Csas::Model;

ListDynamicRoutesResult::ListDynamicRoutesResult() :
	ServiceResult()
{}

ListDynamicRoutesResult::ListDynamicRoutesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListDynamicRoutesResult::~ListDynamicRoutesResult()
{}

void ListDynamicRoutesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDynamicRoutesNode = value["DynamicRoutes"]["dynamicRoute"];
	for (auto valueDynamicRoutesdynamicRoute : allDynamicRoutesNode)
	{
		DynamicRoute dynamicRoutesObject;
		if(!valueDynamicRoutesdynamicRoute["DynamicRouteId"].isNull())
			dynamicRoutesObject.dynamicRouteId = valueDynamicRoutesdynamicRoute["DynamicRouteId"].asString();
		if(!valueDynamicRoutesdynamicRoute["Name"].isNull())
			dynamicRoutesObject.name = valueDynamicRoutesdynamicRoute["Name"].asString();
		if(!valueDynamicRoutesdynamicRoute["Description"].isNull())
			dynamicRoutesObject.description = valueDynamicRoutesdynamicRoute["Description"].asString();
		if(!valueDynamicRoutesdynamicRoute["Status"].isNull())
			dynamicRoutesObject.status = valueDynamicRoutesdynamicRoute["Status"].asString();
		if(!valueDynamicRoutesdynamicRoute["Priority"].isNull())
			dynamicRoutesObject.priority = std::stoi(valueDynamicRoutesdynamicRoute["Priority"].asString());
		if(!valueDynamicRoutesdynamicRoute["ApplicationType"].isNull())
			dynamicRoutesObject.applicationType = valueDynamicRoutesdynamicRoute["ApplicationType"].asString();
		if(!valueDynamicRoutesdynamicRoute["DynamicRouteType"].isNull())
			dynamicRoutesObject.dynamicRouteType = valueDynamicRoutesdynamicRoute["DynamicRouteType"].asString();
		if(!valueDynamicRoutesdynamicRoute["NextHop"].isNull())
			dynamicRoutesObject.nextHop = valueDynamicRoutesdynamicRoute["NextHop"].asString();
		if(!valueDynamicRoutesdynamicRoute["CreateTime"].isNull())
			dynamicRoutesObject.createTime = valueDynamicRoutesdynamicRoute["CreateTime"].asString();
		auto allRegionIds = value["RegionIds"]["regionId"];
		for (auto value : allRegionIds)
			dynamicRoutesObject.regionIds.push_back(value.asString());
		auto allApplicationIds = value["ApplicationIds"]["applicationId"];
		for (auto value : allApplicationIds)
			dynamicRoutesObject.applicationIds.push_back(value.asString());
		auto allTagIds = value["TagIds"]["tagId"];
		for (auto value : allTagIds)
			dynamicRoutesObject.tagIds.push_back(value.asString());
		dynamicRoutes_.push_back(dynamicRoutesObject);
	}
	if(!value["TotalNum"].isNull())
		totalNum_ = std::stoi(value["TotalNum"].asString());

}

int ListDynamicRoutesResult::getTotalNum()const
{
	return totalNum_;
}

std::vector<ListDynamicRoutesResult::DynamicRoute> ListDynamicRoutesResult::getDynamicRoutes()const
{
	return dynamicRoutes_;
}

