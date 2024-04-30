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

#include <alibabacloud/dcdn/model/DescribeDcdnRefreshQuotaResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dcdn;
using namespace AlibabaCloud::Dcdn::Model;

DescribeDcdnRefreshQuotaResult::DescribeDcdnRefreshQuotaResult() :
	ServiceResult()
{}

DescribeDcdnRefreshQuotaResult::DescribeDcdnRefreshQuotaResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDcdnRefreshQuotaResult::~DescribeDcdnRefreshQuotaResult()
{}

void DescribeDcdnRefreshQuotaResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["BlockQuota"].isNull())
		blockQuota_ = value["BlockQuota"].asString();
	if(!value["RegexRemain"].isNull())
		regexRemain_ = value["RegexRemain"].asString();
	if(!value["BlockRemain"].isNull())
		blockRemain_ = value["BlockRemain"].asString();
	if(!value["PreloadRemain"].isNull())
		preloadRemain_ = value["PreloadRemain"].asString();
	if(!value["DirRemain"].isNull())
		dirRemain_ = value["DirRemain"].asString();
	if(!value["UrlRemain"].isNull())
		urlRemain_ = value["UrlRemain"].asString();
	if(!value["DirQuota"].isNull())
		dirQuota_ = value["DirQuota"].asString();
	if(!value["UrlQuota"].isNull())
		urlQuota_ = value["UrlQuota"].asString();
	if(!value["PreloadQuota"].isNull())
		preloadQuota_ = value["PreloadQuota"].asString();
	if(!value["RegexQuota"].isNull())
		regexQuota_ = value["RegexQuota"].asString();
	if(!value["IgnoreParamsQuota"].isNull())
		ignoreParamsQuota_ = value["IgnoreParamsQuota"].asString();
	if(!value["IgnoreParamsRemain"].isNull())
		ignoreParamsRemain_ = value["IgnoreParamsRemain"].asString();

}

std::string DescribeDcdnRefreshQuotaResult::getUrlRemain()const
{
	return urlRemain_;
}

std::string DescribeDcdnRefreshQuotaResult::getBlockRemain()const
{
	return blockRemain_;
}

std::string DescribeDcdnRefreshQuotaResult::getPreloadRemain()const
{
	return preloadRemain_;
}

std::string DescribeDcdnRefreshQuotaResult::getIgnoreParamsRemain()const
{
	return ignoreParamsRemain_;
}

std::string DescribeDcdnRefreshQuotaResult::getRegexRemain()const
{
	return regexRemain_;
}

std::string DescribeDcdnRefreshQuotaResult::getBlockQuota()const
{
	return blockQuota_;
}

std::string DescribeDcdnRefreshQuotaResult::getDirRemain()const
{
	return dirRemain_;
}

std::string DescribeDcdnRefreshQuotaResult::getRegexQuota()const
{
	return regexQuota_;
}

std::string DescribeDcdnRefreshQuotaResult::getUrlQuota()const
{
	return urlQuota_;
}

std::string DescribeDcdnRefreshQuotaResult::getDirQuota()const
{
	return dirQuota_;
}

std::string DescribeDcdnRefreshQuotaResult::getIgnoreParamsQuota()const
{
	return ignoreParamsQuota_;
}

std::string DescribeDcdnRefreshQuotaResult::getPreloadQuota()const
{
	return preloadQuota_;
}

