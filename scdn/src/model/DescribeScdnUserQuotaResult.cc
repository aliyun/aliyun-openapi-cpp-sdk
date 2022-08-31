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

#include <alibabacloud/scdn/model/DescribeScdnUserQuotaResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Scdn;
using namespace AlibabaCloud::Scdn::Model;

DescribeScdnUserQuotaResult::DescribeScdnUserQuotaResult() :
	ServiceResult()
{}

DescribeScdnUserQuotaResult::DescribeScdnUserQuotaResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeScdnUserQuotaResult::~DescribeScdnUserQuotaResult()
{}

void DescribeScdnUserQuotaResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["BlockQuota"].isNull())
		blockQuota_ = std::stoi(value["BlockQuota"].asString());
	if(!value["RefreshUrlRemain"].isNull())
		refreshUrlRemain_ = std::stoi(value["RefreshUrlRemain"].asString());
	if(!value["DomainQuota"].isNull())
		domainQuota_ = std::stoi(value["DomainQuota"].asString());
	if(!value["BlockRemain"].isNull())
		blockRemain_ = std::stoi(value["BlockRemain"].asString());
	if(!value["PreloadRemain"].isNull())
		preloadRemain_ = std::stoi(value["PreloadRemain"].asString());
	if(!value["RefreshUrlQuota"].isNull())
		refreshUrlQuota_ = std::stoi(value["RefreshUrlQuota"].asString());
	if(!value["PreloadQuota"].isNull())
		preloadQuota_ = std::stoi(value["PreloadQuota"].asString());
	if(!value["RefreshDirQuota"].isNull())
		refreshDirQuota_ = std::stoi(value["RefreshDirQuota"].asString());
	if(!value["RefreshDirRemain"].isNull())
		refreshDirRemain_ = std::stoi(value["RefreshDirRemain"].asString());

}

int DescribeScdnUserQuotaResult::getRefreshUrlQuota()const
{
	return refreshUrlQuota_;
}

int DescribeScdnUserQuotaResult::getBlockRemain()const
{
	return blockRemain_;
}

int DescribeScdnUserQuotaResult::getPreloadRemain()const
{
	return preloadRemain_;
}

int DescribeScdnUserQuotaResult::getRefreshDirRemain()const
{
	return refreshDirRemain_;
}

int DescribeScdnUserQuotaResult::getBlockQuota()const
{
	return blockQuota_;
}

int DescribeScdnUserQuotaResult::getRefreshDirQuota()const
{
	return refreshDirQuota_;
}

int DescribeScdnUserQuotaResult::getDomainQuota()const
{
	return domainQuota_;
}

int DescribeScdnUserQuotaResult::getRefreshUrlRemain()const
{
	return refreshUrlRemain_;
}

int DescribeScdnUserQuotaResult::getPreloadQuota()const
{
	return preloadQuota_;
}

