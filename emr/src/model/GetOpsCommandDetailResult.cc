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

#include <alibabacloud/emr/model/GetOpsCommandDetailResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

GetOpsCommandDetailResult::GetOpsCommandDetailResult() :
	ServiceResult()
{}

GetOpsCommandDetailResult::GetOpsCommandDetailResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetOpsCommandDetailResult::~GetOpsCommandDetailResult()
{}

void GetOpsCommandDetailResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	if(!value["Id"].isNull())
		id_ = std::stol(value["Id"].asString());
	if(!value["Name"].isNull())
		name_ = value["Name"].asString();
	if(!value["Description"].isNull())
		description_ = value["Description"].asString();
	if(!value["TargetType"].isNull())
		targetType_ = value["TargetType"].asString();
	if(!value["ServiceName"].isNull())
		serviceName_ = value["ServiceName"].asString();
	if(!value["Category"].isNull())
		category_ = value["Category"].asString();
	if(!value["Params"].isNull())
		params_ = value["Params"].asString();

}

std::string GetOpsCommandDetailResult::getDescription()const
{
	return description_;
}

std::string GetOpsCommandDetailResult::getCategory()const
{
	return category_;
}

std::string GetOpsCommandDetailResult::getServiceName()const
{
	return serviceName_;
}

std::string GetOpsCommandDetailResult::getTargetType()const
{
	return targetType_;
}

std::string GetOpsCommandDetailResult::getParams()const
{
	return params_;
}

long GetOpsCommandDetailResult::getId()const
{
	return id_;
}

std::string GetOpsCommandDetailResult::getName()const
{
	return name_;
}

