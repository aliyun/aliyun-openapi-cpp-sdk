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

#include <alibabacloud/dyplsapi/model/QueryPhoneNoAByTrackNoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dyplsapi;
using namespace AlibabaCloud::Dyplsapi::Model;

QueryPhoneNoAByTrackNoResult::QueryPhoneNoAByTrackNoResult() :
	ServiceResult()
{}

QueryPhoneNoAByTrackNoResult::QueryPhoneNoAByTrackNoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryPhoneNoAByTrackNoResult::~QueryPhoneNoAByTrackNoResult()
{}

void QueryPhoneNoAByTrackNoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allModuleNode = value["Module"]["phoneNoAInfo"];
	for (auto valueModulephoneNoAInfo : allModuleNode)
	{
		PhoneNoAInfo moduleObject;
		if(!valueModulephoneNoAInfo["Extension"].isNull())
			moduleObject.extension = valueModulephoneNoAInfo["Extension"].asString();
		if(!valueModulephoneNoAInfo["PhoneNoX"].isNull())
			moduleObject.phoneNoX = valueModulephoneNoAInfo["PhoneNoX"].asString();
		if(!valueModulephoneNoAInfo["PhoneNoA"].isNull())
			moduleObject.phoneNoA = valueModulephoneNoAInfo["PhoneNoA"].asString();
		module_.push_back(moduleObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string QueryPhoneNoAByTrackNoResult::getMessage()const
{
	return message_;
}

std::vector<QueryPhoneNoAByTrackNoResult::PhoneNoAInfo> QueryPhoneNoAByTrackNoResult::getModule()const
{
	return module_;
}

std::string QueryPhoneNoAByTrackNoResult::getCode()const
{
	return code_;
}

