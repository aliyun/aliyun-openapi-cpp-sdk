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

#include <alibabacloud/cdn/model/DescribeLiveStreamOnlineUserNumByDomainResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cdn;
using namespace AlibabaCloud::Cdn::Model;

DescribeLiveStreamOnlineUserNumByDomainResult::DescribeLiveStreamOnlineUserNumByDomainResult() :
	ServiceResult()
{}

DescribeLiveStreamOnlineUserNumByDomainResult::DescribeLiveStreamOnlineUserNumByDomainResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeLiveStreamOnlineUserNumByDomainResult::~DescribeLiveStreamOnlineUserNumByDomainResult()
{}

void DescribeLiveStreamOnlineUserNumByDomainResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allOnlineUserInfo = value["OnlineUserInfo"]["LiveStreamOnlineUserNumInfo"];
	for (auto value : allOnlineUserInfo)
	{
		LiveStreamOnlineUserNumInfo liveStreamOnlineUserNumInfoObject;
		liveStreamOnlineUserNumInfoObject.streamUrl = value["StreamUrl"].asString();
		liveStreamOnlineUserNumInfoObject.userNumber = std::stol(value["UserNumber"].asString());
		liveStreamOnlineUserNumInfoObject.time = value["Time"].asString();
		onlineUserInfo_.push_back(liveStreamOnlineUserNumInfoObject);
	}
	totalUserNumber_ = std::stol(value["TotalUserNumber"].asString());
	count_ = std::stol(value["Count"].asString());
	pageNumber_ = std::stol(value["pageNumber"].asString());
	pageSize_ = std::stol(value["pageSize"].asString());

}

long DescribeLiveStreamOnlineUserNumByDomainResult::getPageSize()const
{
	return pageSize_;
}

void DescribeLiveStreamOnlineUserNumByDomainResult::setPageSize(long pageSize)
{
	pageSize_ = pageSize;
}

long DescribeLiveStreamOnlineUserNumByDomainResult::getPageNumber()const
{
	return pageNumber_;
}

void DescribeLiveStreamOnlineUserNumByDomainResult::setPageNumber(long pageNumber)
{
	pageNumber_ = pageNumber;
}

long DescribeLiveStreamOnlineUserNumByDomainResult::getTotalUserNumber()const
{
	return totalUserNumber_;
}

void DescribeLiveStreamOnlineUserNumByDomainResult::setTotalUserNumber(long totalUserNumber)
{
	totalUserNumber_ = totalUserNumber;
}

long DescribeLiveStreamOnlineUserNumByDomainResult::getCount()const
{
	return count_;
}

void DescribeLiveStreamOnlineUserNumByDomainResult::setCount(long count)
{
	count_ = count;
}

