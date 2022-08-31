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

#include <alibabacloud/cdn/model/DescribeRefreshQuotaResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cdn;
using namespace AlibabaCloud::Cdn::Model;

DescribeRefreshQuotaResult::DescribeRefreshQuotaResult() :
	ServiceResult()
{}

DescribeRefreshQuotaResult::DescribeRefreshQuotaResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeRefreshQuotaResult::~DescribeRefreshQuotaResult()
{}

void DescribeRefreshQuotaResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["BlockQuota"].isNull())
		blockQuota_ = value["BlockQuota"].asString();
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

}

std::string DescribeRefreshQuotaResult::getUrlRemain()const
{
	return urlRemain_;
}

std::string DescribeRefreshQuotaResult::getBlockRemain()const
{
	return blockRemain_;
}

std::string DescribeRefreshQuotaResult::getPreloadRemain()const
{
	return preloadRemain_;
}

std::string DescribeRefreshQuotaResult::getBlockQuota()const
{
	return blockQuota_;
}

std::string DescribeRefreshQuotaResult::getDirRemain()const
{
	return dirRemain_;
}

std::string DescribeRefreshQuotaResult::getUrlQuota()const
{
	return urlQuota_;
}

std::string DescribeRefreshQuotaResult::getDirQuota()const
{
	return dirQuota_;
}

std::string DescribeRefreshQuotaResult::getPreloadQuota()const
{
	return preloadQuota_;
}

