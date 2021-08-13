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

#include <alibabacloud/smartag/model/DescribeSagStaticRouteListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Smartag;
using namespace AlibabaCloud::Smartag::Model;

DescribeSagStaticRouteListResult::DescribeSagStaticRouteListResult() :
	ServiceResult()
{}

DescribeSagStaticRouteListResult::DescribeSagStaticRouteListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSagStaticRouteListResult::~DescribeSagStaticRouteListResult()
{}

void DescribeSagStaticRouteListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allStaticRoutesNode = value["StaticRoutes"]["StaticRoute"];
	for (auto valueStaticRoutesStaticRoute : allStaticRoutesNode)
	{
		StaticRoute staticRoutesObject;
		if(!valueStaticRoutesStaticRoute["NextHop"].isNull())
			staticRoutesObject.nextHop = valueStaticRoutesStaticRoute["NextHop"].asString();
		if(!valueStaticRoutesStaticRoute["DestinationCidr"].isNull())
			staticRoutesObject.destinationCidr = valueStaticRoutesStaticRoute["DestinationCidr"].asString();
		if(!valueStaticRoutesStaticRoute["PortName"].isNull())
			staticRoutesObject.portName = valueStaticRoutesStaticRoute["PortName"].asString();
		if(!valueStaticRoutesStaticRoute["Vlan"].isNull())
			staticRoutesObject.vlan = valueStaticRoutesStaticRoute["Vlan"].asString();
		staticRoutes_.push_back(staticRoutesObject);
	}
	auto allTaskStatesNode = value["TaskStates"]["TaskState"];
	for (auto valueTaskStatesTaskState : allTaskStatesNode)
	{
		TaskState taskStatesObject;
		if(!valueTaskStatesTaskState["ErrorMessage"].isNull())
			taskStatesObject.errorMessage = valueTaskStatesTaskState["ErrorMessage"].asString();
		if(!valueTaskStatesTaskState["State"].isNull())
			taskStatesObject.state = valueTaskStatesTaskState["State"].asString();
		if(!valueTaskStatesTaskState["ErrorCode"].isNull())
			taskStatesObject.errorCode = valueTaskStatesTaskState["ErrorCode"].asString();
		if(!valueTaskStatesTaskState["CreateTime"].isNull())
			taskStatesObject.createTime = valueTaskStatesTaskState["CreateTime"].asString();
		taskStates_.push_back(taskStatesObject);
	}

}

std::vector<DescribeSagStaticRouteListResult::StaticRoute> DescribeSagStaticRouteListResult::getStaticRoutes()const
{
	return staticRoutes_;
}

std::vector<DescribeSagStaticRouteListResult::TaskState> DescribeSagStaticRouteListResult::getTaskStates()const
{
	return taskStates_;
}

