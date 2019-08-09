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

#include <alibabacloud/smartag/model/CreateNetworkOptimizationResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Smartag;
using namespace AlibabaCloud::Smartag::Model;

CreateNetworkOptimizationResult::CreateNetworkOptimizationResult() :
	ServiceResult()
{}

CreateNetworkOptimizationResult::CreateNetworkOptimizationResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateNetworkOptimizationResult::~CreateNetworkOptimizationResult()
{}

void CreateNetworkOptimizationResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	if(!value["NetworkOptId"].isNull())
		networkOptId_ = value["NetworkOptId"].asString();
	if(!value["Name"].isNull())
		name_ = value["Name"].asString();
	if(!value["State"].isNull())
		state_ = value["State"].asString();

}

std::string CreateNetworkOptimizationResult::getState()const
{
	return state_;
}

std::string CreateNetworkOptimizationResult::getNetworkOptId()const
{
	return networkOptId_;
}

std::string CreateNetworkOptimizationResult::getName()const
{
	return name_;
}

