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

#include <alibabacloud/live/model/MiguLivePullToPushStatusResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Live;
using namespace AlibabaCloud::Live::Model;

MiguLivePullToPushStatusResult::MiguLivePullToPushStatusResult() :
	ServiceResult()
{}

MiguLivePullToPushStatusResult::MiguLivePullToPushStatusResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

MiguLivePullToPushStatusResult::~MiguLivePullToPushStatusResult()
{}

void MiguLivePullToPushStatusResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["data"];
	if(!dataNode["message"].isNull())
		data_.message = dataNode["message"].asString();
	if(!dataNode["status"].isNull())
		data_.status = dataNode["status"].asString();
	if(!value["code"].isNull())
		code_ = value["code"].asString();
	if(!value["message"].isNull())
		message_ = value["message"].asString();
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();
	if(!value["timestamp"].isNull())
		timestamp_ = value["timestamp"].asString();

}

std::string MiguLivePullToPushStatusResult::getMessage()const
{
	return message_;
}

std::string MiguLivePullToPushStatusResult::getRequestId()const
{
	return requestId_;
}

MiguLivePullToPushStatusResult::Data MiguLivePullToPushStatusResult::getData()const
{
	return data_;
}

std::string MiguLivePullToPushStatusResult::getCode()const
{
	return code_;
}

std::string MiguLivePullToPushStatusResult::getTimestamp()const
{
	return timestamp_;
}

