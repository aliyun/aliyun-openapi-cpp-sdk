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

#include <alibabacloud/cloudapi/model/DescribeSummaryDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CloudAPI;
using namespace AlibabaCloud::CloudAPI::Model;

DescribeSummaryDataResult::DescribeSummaryDataResult() :
	ServiceResult()
{}

DescribeSummaryDataResult::DescribeSummaryDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSummaryDataResult::~DescribeSummaryDataResult()
{}

void DescribeSummaryDataResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["UsageGroupNum"].isNull())
		usageGroupNum_ = std::stoi(value["UsageGroupNum"].asString());
	if(!value["UsageInstanceNum"].isNull())
		usageInstanceNum_ = std::stoi(value["UsageInstanceNum"].asString());
	if(!value["UsageApiNum"].isNull())
		usageApiNum_ = std::stoi(value["UsageApiNum"].asString());
	if(!value["Region"].isNull())
		region_ = value["Region"].asString();
	if(!value["ComeingSoonInstanceNum"].isNull())
		comeingSoonInstanceNum_ = std::stoi(value["ComeingSoonInstanceNum"].asString());
	if(!value["ExpireInstanceNum"].isNull())
		expireInstanceNum_ = std::stoi(value["ExpireInstanceNum"].asString());

}

int DescribeSummaryDataResult::getComeingSoonInstanceNum()const
{
	return comeingSoonInstanceNum_;
}

int DescribeSummaryDataResult::getUsageApiNum()const
{
	return usageApiNum_;
}

int DescribeSummaryDataResult::getUsageGroupNum()const
{
	return usageGroupNum_;
}

int DescribeSummaryDataResult::getUsageInstanceNum()const
{
	return usageInstanceNum_;
}

std::string DescribeSummaryDataResult::getRegion()const
{
	return region_;
}

int DescribeSummaryDataResult::getExpireInstanceNum()const
{
	return expireInstanceNum_;
}

