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

#include <alibabacloud/avatar/model/StartInstanceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Avatar;
using namespace AlibabaCloud::Avatar::Model;

StartInstanceResult::StartInstanceResult() :
	ServiceResult()
{}

StartInstanceResult::StartInstanceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

StartInstanceResult::~StartInstanceResult()
{}

void StartInstanceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["RequestId"].isNull())
		data_.requestId = dataNode["RequestId"].asString();
	if(!dataNode["SessionId"].isNull())
		data_.sessionId = dataNode["SessionId"].asString();
	if(!dataNode["Token"].isNull())
		data_.token = dataNode["Token"].asString();
	auto channelNode = dataNode["Channel"];
	if(!channelNode["ChannelId"].isNull())
		data_.channel.channelId = channelNode["ChannelId"].asString();
	if(!channelNode["Token"].isNull())
		data_.channel.token = channelNode["Token"].asString();
	if(!channelNode["Type"].isNull())
		data_.channel.type = channelNode["Type"].asString();
	if(!channelNode["ExpiredTime"].isNull())
		data_.channel.expiredTime = channelNode["ExpiredTime"].asString();
	if(!channelNode["Nonce"].isNull())
		data_.channel.nonce = channelNode["Nonce"].asString();
	if(!channelNode["UserId"].isNull())
		data_.channel.userId = channelNode["UserId"].asString();
	if(!channelNode["AppId"].isNull())
		data_.channel.appId = channelNode["AppId"].asString();
	if(!channelNode["UserInfoInChannel"].isNull())
		data_.channel.userInfoInChannel = channelNode["UserInfoInChannel"].asString();
		auto allGslb = channelNode["Gslb"]["gslb"];
		for (auto value : allGslb)
			data_.channel.gslb.push_back(value.asString());
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string StartInstanceResult::getMessage()const
{
	return message_;
}

StartInstanceResult::Data StartInstanceResult::getData()const
{
	return data_;
}

std::string StartInstanceResult::getCode()const
{
	return code_;
}

bool StartInstanceResult::getSuccess()const
{
	return success_;
}

