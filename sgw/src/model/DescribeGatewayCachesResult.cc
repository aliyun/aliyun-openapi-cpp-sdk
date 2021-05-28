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

#include <alibabacloud/sgw/model/DescribeGatewayCachesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sgw;
using namespace AlibabaCloud::Sgw::Model;

DescribeGatewayCachesResult::DescribeGatewayCachesResult() :
	ServiceResult()
{}

DescribeGatewayCachesResult::DescribeGatewayCachesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeGatewayCachesResult::~DescribeGatewayCachesResult()
{}

void DescribeGatewayCachesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allCachesNode = value["Caches"]["Cache"];
	for (auto valueCachesCache : allCachesNode)
	{
		Cache cachesObject;
		if(!valueCachesCache["SizeInGB"].isNull())
			cachesObject.sizeInGB = std::stol(valueCachesCache["SizeInGB"].asString());
		if(!valueCachesCache["Iops"].isNull())
			cachesObject.iops = std::stol(valueCachesCache["Iops"].asString());
		if(!valueCachesCache["CacheId"].isNull())
			cachesObject.cacheId = valueCachesCache["CacheId"].asString();
		if(!valueCachesCache["CacheType"].isNull())
			cachesObject.cacheType = valueCachesCache["CacheType"].asString();
		if(!valueCachesCache["IsUsed"].isNull())
			cachesObject.isUsed = valueCachesCache["IsUsed"].asString() == "true";
		if(!valueCachesCache["LocalFilePath"].isNull())
			cachesObject.localFilePath = valueCachesCache["LocalFilePath"].asString();
		if(!valueCachesCache["RenewURL"].isNull())
			cachesObject.renewURL = valueCachesCache["RenewURL"].asString();
		if(!valueCachesCache["ExpiredTime"].isNull())
			cachesObject.expiredTime = std::stol(valueCachesCache["ExpiredTime"].asString());
		if(!valueCachesCache["ExpireStatus"].isNull())
			cachesObject.expireStatus = std::stoi(valueCachesCache["ExpireStatus"].asString());
		if(!valueCachesCache["PerformanceLevel"].isNull())
			cachesObject.performanceLevel = valueCachesCache["PerformanceLevel"].asString();
		if(!valueCachesCache["BuyURL"].isNull())
			cachesObject.buyURL = valueCachesCache["BuyURL"].asString();
		if(!valueCachesCache["SubscriptionInstanceId"].isNull())
			cachesObject.subscriptionInstanceId = valueCachesCache["SubscriptionInstanceId"].asString();
		caches_.push_back(cachesObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string DescribeGatewayCachesResult::getMessage()const
{
	return message_;
}

std::vector<DescribeGatewayCachesResult::Cache> DescribeGatewayCachesResult::getCaches()const
{
	return caches_;
}

std::string DescribeGatewayCachesResult::getCode()const
{
	return code_;
}

bool DescribeGatewayCachesResult::getSuccess()const
{
	return success_;
}

