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

#include <alibabacloud/smartag/model/DescribeSagRouteProtocolBgpResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Smartag;
using namespace AlibabaCloud::Smartag::Model;

DescribeSagRouteProtocolBgpResult::DescribeSagRouteProtocolBgpResult() :
	ServiceResult()
{}

DescribeSagRouteProtocolBgpResult::DescribeSagRouteProtocolBgpResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSagRouteProtocolBgpResult::~DescribeSagRouteProtocolBgpResult()
{}

void DescribeSagRouteProtocolBgpResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
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
	if(!value["HoldTime"].isNull())
		holdTime_ = std::stoi(value["HoldTime"].asString());
	if(!value["KeepAlive"].isNull())
		keepAlive_ = std::stoi(value["KeepAlive"].asString());
	if(!value["LocalAs"].isNull())
		localAs_ = std::stoi(value["LocalAs"].asString());
	if(!value["RouterId"].isNull())
		routerId_ = value["RouterId"].asString();
	if(!value["AdvertiseIps"].isNull())
		advertiseIps_ = value["AdvertiseIps"].asString();

}

int DescribeSagRouteProtocolBgpResult::getHoldTime()const
{
	return holdTime_;
}

std::string DescribeSagRouteProtocolBgpResult::getAdvertiseIps()const
{
	return advertiseIps_;
}

int DescribeSagRouteProtocolBgpResult::getKeepAlive()const
{
	return keepAlive_;
}

int DescribeSagRouteProtocolBgpResult::getLocalAs()const
{
	return localAs_;
}

std::string DescribeSagRouteProtocolBgpResult::getRouterId()const
{
	return routerId_;
}

std::vector<DescribeSagRouteProtocolBgpResult::TaskState> DescribeSagRouteProtocolBgpResult::getTaskStates()const
{
	return taskStates_;
}

