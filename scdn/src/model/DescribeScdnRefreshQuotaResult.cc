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

#include <alibabacloud/scdn/model/DescribeScdnRefreshQuotaResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Scdn;
using namespace AlibabaCloud::Scdn::Model;

DescribeScdnRefreshQuotaResult::DescribeScdnRefreshQuotaResult() :
	ServiceResult()
{}

DescribeScdnRefreshQuotaResult::DescribeScdnRefreshQuotaResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeScdnRefreshQuotaResult::~DescribeScdnRefreshQuotaResult()
{}

void DescribeScdnRefreshQuotaResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["BlockQuota"].isNull())
		blockQuota_ = value["BlockQuota"].asString();
	if(!value["PreloadRemain"].isNull())
		preloadRemain_ = value["PreloadRemain"].asString();
	if(!value["blockRemain"].isNull())
		blockRemain_ = value["blockRemain"].asString();
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

}

std::string DescribeScdnRefreshQuotaResult::getUrlRemain()const
{
	return urlRemain_;
}

std::string DescribeScdnRefreshQuotaResult::getPreloadRemain()const
{
	return preloadRemain_;
}

std::string DescribeScdnRefreshQuotaResult::getBlockRemain()const
{
	return blockRemain_;
}

std::string DescribeScdnRefreshQuotaResult::getBlockQuota()const
{
	return blockQuota_;
}

std::string DescribeScdnRefreshQuotaResult::getDirRemain()const
{
	return dirRemain_;
}

std::string DescribeScdnRefreshQuotaResult::getUrlQuota()const
{
	return urlQuota_;
}

std::string DescribeScdnRefreshQuotaResult::getDirQuota()const
{
	return dirQuota_;
}

std::string DescribeScdnRefreshQuotaResult::getPreloadQuota()const
{
	return preloadQuota_;
}

