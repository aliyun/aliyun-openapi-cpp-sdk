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

#include <alibabacloud/vod/model/DescribeRefreshQuotaResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vod;
using namespace AlibabaCloud::Vod::Model;

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
	auto refreshCacheQuotaNode = value["RefreshCacheQuota"];
	if(!refreshCacheQuotaNode["UrlQuota"].isNull())
		refreshCacheQuota_.urlQuota = refreshCacheQuotaNode["UrlQuota"].asString();
	if(!refreshCacheQuotaNode["DirQuota"].isNull())
		refreshCacheQuota_.dirQuota = refreshCacheQuotaNode["DirQuota"].asString();
	if(!refreshCacheQuotaNode["UrlRemain"].isNull())
		refreshCacheQuota_.urlRemain = refreshCacheQuotaNode["UrlRemain"].asString();
	if(!refreshCacheQuotaNode["DirRemain"].isNull())
		refreshCacheQuota_.dirRemain = refreshCacheQuotaNode["DirRemain"].asString();

}

DescribeRefreshQuotaResult::RefreshCacheQuota DescribeRefreshQuotaResult::getRefreshCacheQuota()const
{
	return refreshCacheQuota_;
}

