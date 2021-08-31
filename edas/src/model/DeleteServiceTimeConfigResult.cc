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

#include <alibabacloud/edas/model/DeleteServiceTimeConfigResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Edas;
using namespace AlibabaCloud::Edas::Model;

DeleteServiceTimeConfigResult::DeleteServiceTimeConfigResult() :
	ServiceResult()
{}

DeleteServiceTimeConfigResult::DeleteServiceTimeConfigResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DeleteServiceTimeConfigResult::~DeleteServiceTimeConfigResult()
{}

void DeleteServiceTimeConfigResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Timeout"].isNull())
		data_.timeout = dataNode["Timeout"].asString();
	if(!dataNode["ConsumerAppName"].isNull())
		data_.consumerAppName = dataNode["ConsumerAppName"].asString();
	if(!dataNode["ConsumerAppId"].isNull())
		data_.consumerAppId = dataNode["ConsumerAppId"].asString();
	if(!dataNode["Path"].isNull())
		data_.path = dataNode["Path"].asString();
	if(!dataNode["Id"].isNull())
		data_.id = std::stol(dataNode["Id"].asString());
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string DeleteServiceTimeConfigResult::getMessage()const
{
	return message_;
}

DeleteServiceTimeConfigResult::Data DeleteServiceTimeConfigResult::getData()const
{
	return data_;
}

int DeleteServiceTimeConfigResult::getCode()const
{
	return code_;
}

bool DeleteServiceTimeConfigResult::getSuccess()const
{
	return success_;
}

