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

#include <alibabacloud/lingmou/model/CreateChatSessionResult.h>
#include <json/json.h>

using namespace AlibabaCloud::LingMou;
using namespace AlibabaCloud::LingMou::Model;

CreateChatSessionResult::CreateChatSessionResult() :
	ServiceResult()
{}

CreateChatSessionResult::CreateChatSessionResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateChatSessionResult::~CreateChatSessionResult()
{}

void CreateChatSessionResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["data"];
	if(!dataNode["sessionId"].isNull())
		data_.sessionId = dataNode["sessionId"].asString();
	auto rtcParamsNode = dataNode["rtcParams"];
	if(!rtcParamsNode["appId"].isNull())
		data_.rtcParams.appId = rtcParamsNode["appId"].asString();
	if(!rtcParamsNode["avatarUserId"].isNull())
		data_.rtcParams.avatarUserId = rtcParamsNode["avatarUserId"].asString();
	if(!rtcParamsNode["channel"].isNull())
		data_.rtcParams.channel = rtcParamsNode["channel"].asString();
	if(!rtcParamsNode["clientUserId"].isNull())
		data_.rtcParams.clientUserId = rtcParamsNode["clientUserId"].asString();
	if(!rtcParamsNode["gslb"].isNull())
		data_.rtcParams.gslb = rtcParamsNode["gslb"].asString();
	if(!rtcParamsNode["nonce"].isNull())
		data_.rtcParams.nonce = rtcParamsNode["nonce"].asString();
	if(!rtcParamsNode["serverUserId"].isNull())
		data_.rtcParams.serverUserId = rtcParamsNode["serverUserId"].asString();
	if(!rtcParamsNode["timestamp"].isNull())
		data_.rtcParams.timestamp = std::stol(rtcParamsNode["timestamp"].asString());
	if(!rtcParamsNode["token"].isNull())
		data_.rtcParams.token = rtcParamsNode["token"].asString();
	auto avatarAssetsNode = dataNode["avatarAssets"];
	if(!avatarAssetsNode["url"].isNull())
		data_.avatarAssets.url = avatarAssetsNode["url"].asString();
	if(!avatarAssetsNode["md5"].isNull())
		data_.avatarAssets.md5 = avatarAssetsNode["md5"].asString();
	if(!avatarAssetsNode["secret"].isNull())
		data_.avatarAssets.secret = avatarAssetsNode["secret"].asString();
	if(!avatarAssetsNode["type"].isNull())
		data_.avatarAssets.type = avatarAssetsNode["type"].asString();
	if(!avatarAssetsNode["minRequiredVersion"].isNull())
		data_.avatarAssets.minRequiredVersion = avatarAssetsNode["minRequiredVersion"].asString();
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();
	if(!value["message"].isNull())
		message_ = value["message"].asString();
	if(!value["httpStatusCode"].isNull())
		httpStatusCode_ = std::stol(value["httpStatusCode"].asString());
	if(!value["code"].isNull())
		code_ = value["code"].asString();
	if(!value["success"].isNull())
		success_ = value["success"].asString() == "true";

}

std::string CreateChatSessionResult::getRequestId()const
{
	return requestId_;
}

std::string CreateChatSessionResult::getMessage()const
{
	return message_;
}

long CreateChatSessionResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

CreateChatSessionResult::Data CreateChatSessionResult::getData()const
{
	return data_;
}

std::string CreateChatSessionResult::getCode()const
{
	return code_;
}

bool CreateChatSessionResult::getSuccess()const
{
	return success_;
}

