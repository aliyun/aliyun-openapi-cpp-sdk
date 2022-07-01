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

#include <alibabacloud/ddoscoo/model/DescribeAutoCcWhitelistResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ddoscoo;
using namespace AlibabaCloud::Ddoscoo::Model;

DescribeAutoCcWhitelistResult::DescribeAutoCcWhitelistResult() :
	ServiceResult()
{}

DescribeAutoCcWhitelistResult::DescribeAutoCcWhitelistResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeAutoCcWhitelistResult::~DescribeAutoCcWhitelistResult()
{}

void DescribeAutoCcWhitelistResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allAutoCcWhitelistNode = value["AutoCcWhitelist"]["AutoCcWhitelistItem"];
	for (auto valueAutoCcWhitelistAutoCcWhitelistItem : allAutoCcWhitelistNode)
	{
		AutoCcWhitelistItem autoCcWhitelistObject;
		if(!valueAutoCcWhitelistAutoCcWhitelistItem["Type"].isNull())
			autoCcWhitelistObject.type = valueAutoCcWhitelistAutoCcWhitelistItem["Type"].asString();
		if(!valueAutoCcWhitelistAutoCcWhitelistItem["DestIp"].isNull())
			autoCcWhitelistObject.destIp = valueAutoCcWhitelistAutoCcWhitelistItem["DestIp"].asString();
		if(!valueAutoCcWhitelistAutoCcWhitelistItem["EndTime"].isNull())
			autoCcWhitelistObject.endTime = std::stol(valueAutoCcWhitelistAutoCcWhitelistItem["EndTime"].asString());
		if(!valueAutoCcWhitelistAutoCcWhitelistItem["SourceIp"].isNull())
			autoCcWhitelistObject.sourceIp = valueAutoCcWhitelistAutoCcWhitelistItem["SourceIp"].asString();
		autoCcWhitelist_.push_back(autoCcWhitelistObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());

}

std::vector<DescribeAutoCcWhitelistResult::AutoCcWhitelistItem> DescribeAutoCcWhitelistResult::getAutoCcWhitelist()const
{
	return autoCcWhitelist_;
}

long DescribeAutoCcWhitelistResult::getTotalCount()const
{
	return totalCount_;
}

