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

#include <alibabacloud/cdn/model/DescribeLiveStreamOnlineUserNumResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cdn;
using namespace AlibabaCloud::Cdn::Model;

DescribeLiveStreamOnlineUserNumResult::DescribeLiveStreamOnlineUserNumResult() :
	ServiceResult()
{}

DescribeLiveStreamOnlineUserNumResult::DescribeLiveStreamOnlineUserNumResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeLiveStreamOnlineUserNumResult::~DescribeLiveStreamOnlineUserNumResult()
{}

void DescribeLiveStreamOnlineUserNumResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allOnlineUserInfo = value["OnlineUserInfo"]["LiveStreamOnlineUserNumInfo"];
	for (auto value : allOnlineUserInfo)
	{
		LiveStreamOnlineUserNumInfo onlineUserInfoObject;
		if(!value["StreamUrl"].isNull())
			onlineUserInfoObject.streamUrl = value["StreamUrl"].asString();
		if(!value["UserNumber"].isNull())
			onlineUserInfoObject.userNumber = std::stol(value["UserNumber"].asString());
		if(!value["Time"].isNull())
			onlineUserInfoObject.time = value["Time"].asString();
		onlineUserInfo_.push_back(onlineUserInfoObject);
	}
	if(!value["TotalUserNumber"].isNull())
		totalUserNumber_ = std::stol(value["TotalUserNumber"].asString());

}

std::vector<DescribeLiveStreamOnlineUserNumResult::LiveStreamOnlineUserNumInfo> DescribeLiveStreamOnlineUserNumResult::getOnlineUserInfo()const
{
	return onlineUserInfo_;
}

long DescribeLiveStreamOnlineUserNumResult::getTotalUserNumber()const
{
	return totalUserNumber_;
}

