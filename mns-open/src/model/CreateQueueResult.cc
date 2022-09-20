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

#include <alibabacloud/mns-open/model/CreateQueueResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mns_open;
using namespace AlibabaCloud::Mns_open::Model;

CreateQueueResult::CreateQueueResult() :
	ServiceResult()
{}

CreateQueueResult::CreateQueueResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateQueueResult::~CreateQueueResult()
{}

void CreateQueueResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Code"].isNull())
		data_.code = std::stol(dataNode["Code"].asString());
	if(!dataNode["Message"].isNull())
		data_.message = dataNode["Message"].asString();
	if(!dataNode["Success"].isNull())
		data_.success = dataNode["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = std::stol(value["Code"].asString());
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string CreateQueueResult::getStatus()const
{
	return status_;
}

std::string CreateQueueResult::getMessage()const
{
	return message_;
}

CreateQueueResult::Data CreateQueueResult::getData()const
{
	return data_;
}

long CreateQueueResult::getCode()const
{
	return code_;
}

bool CreateQueueResult::getSuccess()const
{
	return success_;
}

