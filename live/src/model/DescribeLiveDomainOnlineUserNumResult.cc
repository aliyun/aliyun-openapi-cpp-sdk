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

#include <alibabacloud/live/model/DescribeLiveDomainOnlineUserNumResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Live;
using namespace AlibabaCloud::Live::Model;

DescribeLiveDomainOnlineUserNumResult::DescribeLiveDomainOnlineUserNumResult() :
	ServiceResult()
{}

DescribeLiveDomainOnlineUserNumResult::DescribeLiveDomainOnlineUserNumResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeLiveDomainOnlineUserNumResult::~DescribeLiveDomainOnlineUserNumResult()
{}

void DescribeLiveDomainOnlineUserNumResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allOnlineUserInfo = value["OnlineUserInfo"]["LiveStreamOnlineUserNumInfo"];
	for (auto value : allOnlineUserInfo)
	{
		LiveStreamOnlineUserNumInfo onlineUserInfoObject;
		if(!value["StreamName"].isNull())
			onlineUserInfoObject.streamName = value["StreamName"].asString();
		auto allInfos = value["Infos"]["Info"];
		for (auto value : allInfos)
		{
			LiveStreamOnlineUserNumInfo::Info infosObject;
			if(!value["TranscodeTemplate"].isNull())
				infosObject.transcodeTemplate = value["TranscodeTemplate"].asString();
			if(!value["UserNumber"].isNull())
				infosObject.userNumber = std::stol(value["UserNumber"].asString());
			onlineUserInfoObject.infos.push_back(infosObject);
		}
		onlineUserInfo_.push_back(onlineUserInfoObject);
	}
	if(!value["StreamCount"].isNull())
		streamCount_ = std::stoi(value["StreamCount"].asString());
	if(!value["UserCount"].isNull())
		userCount_ = std::stoi(value["UserCount"].asString());

}

int DescribeLiveDomainOnlineUserNumResult::getStreamCount()const
{
	return streamCount_;
}

std::vector<DescribeLiveDomainOnlineUserNumResult::LiveStreamOnlineUserNumInfo> DescribeLiveDomainOnlineUserNumResult::getOnlineUserInfo()const
{
	return onlineUserInfo_;
}

int DescribeLiveDomainOnlineUserNumResult::getUserCount()const
{
	return userCount_;
}

