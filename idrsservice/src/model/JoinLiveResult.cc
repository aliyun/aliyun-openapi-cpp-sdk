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

#include <alibabacloud/idrsservice/model/JoinLiveResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Idrsservice;
using namespace AlibabaCloud::Idrsservice::Model;

JoinLiveResult::JoinLiveResult() :
	ServiceResult()
{}

JoinLiveResult::JoinLiveResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

JoinLiveResult::~JoinLiveResult()
{}

void JoinLiveResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Code"].isNull())
		data_.code = std::stoi(dataNode["Code"].asString());
	auto tokenDataNode = dataNode["TokenData"];
	if(!tokenDataNode["AppId"].isNull())
		data_.tokenData.appId = tokenDataNode["AppId"].asString();
	if(!tokenDataNode["LiveId"].isNull())
		data_.tokenData.liveId = tokenDataNode["LiveId"].asString();
	if(!tokenDataNode["Nonce"].isNull())
		data_.tokenData.nonce = tokenDataNode["Nonce"].asString();
	if(!tokenDataNode["Timestamp"].isNull())
		data_.tokenData.timestamp = std::stol(tokenDataNode["Timestamp"].asString());
	if(!tokenDataNode["Token"].isNull())
		data_.tokenData.token = tokenDataNode["Token"].asString();
	if(!tokenDataNode["UserId"].isNull())
		data_.tokenData.userId = tokenDataNode["UserId"].asString();
	auto turnNode = tokenDataNode["Turn"];
	if(!turnNode["Password"].isNull())
		data_.tokenData.turn.password = turnNode["Password"].asString();
	if(!turnNode["Username"].isNull())
		data_.tokenData.turn.username = turnNode["Username"].asString();
		auto allGslb = tokenDataNode["Gslb"]["Gslb"];
		for (auto value : allGslb)
			data_.tokenData.gslb.push_back(value.asString());
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string JoinLiveResult::getMessage()const
{
	return message_;
}

JoinLiveResult::Data JoinLiveResult::getData()const
{
	return data_;
}

std::string JoinLiveResult::getCode()const
{
	return code_;
}

