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

#include <alibabacloud/csas/model/GetDynamicRouteResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Csas;
using namespace AlibabaCloud::Csas::Model;

GetDynamicRouteResult::GetDynamicRouteResult() :
	ServiceResult()
{}

GetDynamicRouteResult::GetDynamicRouteResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetDynamicRouteResult::~GetDynamicRouteResult()
{}

void GetDynamicRouteResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dynamicRouteNode = value["DynamicRoute"];
	if(!dynamicRouteNode["DynamicRouteId"].isNull())
		dynamicRoute_.dynamicRouteId = dynamicRouteNode["DynamicRouteId"].asString();
	if(!dynamicRouteNode["Name"].isNull())
		dynamicRoute_.name = dynamicRouteNode["Name"].asString();
	if(!dynamicRouteNode["Description"].isNull())
		dynamicRoute_.description = dynamicRouteNode["Description"].asString();
	if(!dynamicRouteNode["Status"].isNull())
		dynamicRoute_.status = dynamicRouteNode["Status"].asString();
	if(!dynamicRouteNode["Priority"].isNull())
		dynamicRoute_.priority = std::stoi(dynamicRouteNode["Priority"].asString());
	if(!dynamicRouteNode["ApplicationType"].isNull())
		dynamicRoute_.applicationType = dynamicRouteNode["ApplicationType"].asString();
	if(!dynamicRouteNode["DynamicRouteType"].isNull())
		dynamicRoute_.dynamicRouteType = dynamicRouteNode["DynamicRouteType"].asString();
	if(!dynamicRouteNode["NextHop"].isNull())
		dynamicRoute_.nextHop = dynamicRouteNode["NextHop"].asString();
	if(!dynamicRouteNode["CreateTime"].isNull())
		dynamicRoute_.createTime = dynamicRouteNode["CreateTime"].asString();
		auto allRegionIds = dynamicRouteNode["RegionIds"]["regionId"];
		for (auto value : allRegionIds)
			dynamicRoute_.regionIds.push_back(value.asString());
		auto allApplicationIds = dynamicRouteNode["ApplicationIds"]["applicationId"];
		for (auto value : allApplicationIds)
			dynamicRoute_.applicationIds.push_back(value.asString());
		auto allTagIds = dynamicRouteNode["TagIds"]["tagId"];
		for (auto value : allTagIds)
			dynamicRoute_.tagIds.push_back(value.asString());

}

GetDynamicRouteResult::DynamicRoute GetDynamicRouteResult::getDynamicRoute()const
{
	return dynamicRoute_;
}

