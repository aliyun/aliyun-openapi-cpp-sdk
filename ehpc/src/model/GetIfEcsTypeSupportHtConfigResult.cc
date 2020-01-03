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

#include <alibabacloud/ehpc/model/GetIfEcsTypeSupportHtConfigResult.h>
#include <json/json.h>

using namespace AlibabaCloud::EHPC;
using namespace AlibabaCloud::EHPC::Model;

GetIfEcsTypeSupportHtConfigResult::GetIfEcsTypeSupportHtConfigResult() :
	ServiceResult()
{}

GetIfEcsTypeSupportHtConfigResult::GetIfEcsTypeSupportHtConfigResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetIfEcsTypeSupportHtConfigResult::~GetIfEcsTypeSupportHtConfigResult()
{}

void GetIfEcsTypeSupportHtConfigResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["InstanceType"].isNull())
		instanceType_ = value["InstanceType"].asString();
	if(!value["SupportHtConfig"].isNull())
		supportHtConfig_ = value["SupportHtConfig"].asString() == "true";
	if(!value["DefaultHtEnabled"].isNull())
		defaultHtEnabled_ = value["DefaultHtEnabled"].asString() == "true";

}

bool GetIfEcsTypeSupportHtConfigResult::getDefaultHtEnabled()const
{
	return defaultHtEnabled_;
}

bool GetIfEcsTypeSupportHtConfigResult::getSupportHtConfig()const
{
	return supportHtConfig_;
}

std::string GetIfEcsTypeSupportHtConfigResult::getInstanceType()const
{
	return instanceType_;
}

