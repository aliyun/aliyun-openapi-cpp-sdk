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

#include <alibabacloud/ddoscoo/model/DescribeAutoCcBlacklistResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ddoscoo;
using namespace AlibabaCloud::Ddoscoo::Model;

DescribeAutoCcBlacklistResult::DescribeAutoCcBlacklistResult() :
	ServiceResult()
{}

DescribeAutoCcBlacklistResult::DescribeAutoCcBlacklistResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeAutoCcBlacklistResult::~DescribeAutoCcBlacklistResult()
{}

void DescribeAutoCcBlacklistResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allAutoCcBlacklistNode = value["AutoCcBlacklist"]["AutoCcBlacklistItem"];
	for (auto valueAutoCcBlacklistAutoCcBlacklistItem : allAutoCcBlacklistNode)
	{
		AutoCcBlacklistItem autoCcBlacklistObject;
		if(!valueAutoCcBlacklistAutoCcBlacklistItem["Type"].isNull())
			autoCcBlacklistObject.type = valueAutoCcBlacklistAutoCcBlacklistItem["Type"].asString();
		if(!valueAutoCcBlacklistAutoCcBlacklistItem["DestIp"].isNull())
			autoCcBlacklistObject.destIp = valueAutoCcBlacklistAutoCcBlacklistItem["DestIp"].asString();
		if(!valueAutoCcBlacklistAutoCcBlacklistItem["EndTime"].isNull())
			autoCcBlacklistObject.endTime = std::stol(valueAutoCcBlacklistAutoCcBlacklistItem["EndTime"].asString());
		if(!valueAutoCcBlacklistAutoCcBlacklistItem["SourceIp"].isNull())
			autoCcBlacklistObject.sourceIp = valueAutoCcBlacklistAutoCcBlacklistItem["SourceIp"].asString();
		autoCcBlacklist_.push_back(autoCcBlacklistObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());

}

long DescribeAutoCcBlacklistResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<DescribeAutoCcBlacklistResult::AutoCcBlacklistItem> DescribeAutoCcBlacklistResult::getAutoCcBlacklist()const
{
	return autoCcBlacklist_;
}

