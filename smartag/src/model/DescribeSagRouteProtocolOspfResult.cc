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

#include <alibabacloud/smartag/model/DescribeSagRouteProtocolOspfResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Smartag;
using namespace AlibabaCloud::Smartag::Model;

DescribeSagRouteProtocolOspfResult::DescribeSagRouteProtocolOspfResult() :
	ServiceResult()
{}

DescribeSagRouteProtocolOspfResult::DescribeSagRouteProtocolOspfResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSagRouteProtocolOspfResult::~DescribeSagRouteProtocolOspfResult()
{}

void DescribeSagRouteProtocolOspfResult::parse(const std::string &payload)
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
	if(!value["DeadTime"].isNull())
		deadTime_ = std::stoi(value["DeadTime"].asString());
	if(!value["Md5KeyId"].isNull())
		md5KeyId_ = std::stoi(value["Md5KeyId"].asString());
	if(!value["AreaId"].isNull())
		areaId_ = value["AreaId"].asString();
	if(!value["RouterId"].isNull())
		routerId_ = value["RouterId"].asString();
	if(!value["HelloTime"].isNull())
		helloTime_ = std::stoi(value["HelloTime"].asString());
	if(!value["AreaType"].isNull())
		areaType_ = value["AreaType"].asString();
	if(!value["Md5Key"].isNull())
		md5Key_ = value["Md5Key"].asString();
	if(!value["AuthenticationType"].isNull())
		authenticationType_ = value["AuthenticationType"].asString();

}

int DescribeSagRouteProtocolOspfResult::getDeadTime()const
{
	return deadTime_;
}

int DescribeSagRouteProtocolOspfResult::getMd5KeyId()const
{
	return md5KeyId_;
}

std::string DescribeSagRouteProtocolOspfResult::getAreaId()const
{
	return areaId_;
}

std::string DescribeSagRouteProtocolOspfResult::getRouterId()const
{
	return routerId_;
}

int DescribeSagRouteProtocolOspfResult::getHelloTime()const
{
	return helloTime_;
}

std::vector<DescribeSagRouteProtocolOspfResult::TaskState> DescribeSagRouteProtocolOspfResult::getTaskStates()const
{
	return taskStates_;
}

std::string DescribeSagRouteProtocolOspfResult::getAreaType()const
{
	return areaType_;
}

std::string DescribeSagRouteProtocolOspfResult::getMd5Key()const
{
	return md5Key_;
}

std::string DescribeSagRouteProtocolOspfResult::getAuthenticationType()const
{
	return authenticationType_;
}

