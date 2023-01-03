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

#include <alibabacloud/eflo/model/UpdateVpdResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Eflo;
using namespace AlibabaCloud::Eflo::Model;

UpdateVpdResult::UpdateVpdResult() :
	ServiceResult()
{}

UpdateVpdResult::UpdateVpdResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

UpdateVpdResult::~UpdateVpdResult()
{}

void UpdateVpdResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto contentNode = value["Content"];
	if(!contentNode["VpdId"].isNull())
		content_.vpdId = contentNode["VpdId"].asString();
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string UpdateVpdResult::getMessage()const
{
	return message_;
}

UpdateVpdResult::Content UpdateVpdResult::getContent()const
{
	return content_;
}

int UpdateVpdResult::getCode()const
{
	return code_;
}

