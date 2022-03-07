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

#include <alibabacloud/outboundbot/model/DescribeTTSConfigResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OutboundBot;
using namespace AlibabaCloud::OutboundBot::Model;

DescribeTTSConfigResult::DescribeTTSConfigResult() :
	ServiceResult()
{}

DescribeTTSConfigResult::DescribeTTSConfigResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeTTSConfigResult::~DescribeTTSConfigResult()
{}

void DescribeTTSConfigResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto tTSConfigNode = value["TTSConfig"];
	if(!tTSConfigNode["Voice"].isNull())
		tTSConfig_.voice = tTSConfigNode["Voice"].asString();
	if(!tTSConfigNode["SpeechRate"].isNull())
		tTSConfig_.speechRate = tTSConfigNode["SpeechRate"].asString();
	if(!tTSConfigNode["Volume"].isNull())
		tTSConfig_.volume = tTSConfigNode["Volume"].asString();
	if(!tTSConfigNode["InstanceId"].isNull())
		tTSConfig_.instanceId = tTSConfigNode["InstanceId"].asString();
	if(!tTSConfigNode["NlsServiceType"].isNull())
		tTSConfig_.nlsServiceType = tTSConfigNode["NlsServiceType"].asString();
	if(!tTSConfigNode["AppKey"].isNull())
		tTSConfig_.appKey = tTSConfigNode["AppKey"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string DescribeTTSConfigResult::getMessage()const
{
	return message_;
}

DescribeTTSConfigResult::TTSConfig DescribeTTSConfigResult::getTTSConfig()const
{
	return tTSConfig_;
}

int DescribeTTSConfigResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string DescribeTTSConfigResult::getCode()const
{
	return code_;
}

bool DescribeTTSConfigResult::getSuccess()const
{
	return success_;
}

