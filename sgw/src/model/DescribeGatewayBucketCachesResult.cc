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

#include <alibabacloud/sgw/model/DescribeGatewayBucketCachesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sgw;
using namespace AlibabaCloud::Sgw::Model;

DescribeGatewayBucketCachesResult::DescribeGatewayBucketCachesResult() :
	ServiceResult()
{}

DescribeGatewayBucketCachesResult::DescribeGatewayBucketCachesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeGatewayBucketCachesResult::~DescribeGatewayBucketCachesResult()
{}

void DescribeGatewayBucketCachesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allBucketCachesNode = value["BucketCaches"]["BucketCache"];
	for (auto valueBucketCachesBucketCache : allBucketCachesNode)
	{
		BucketCache bucketCachesObject;
		if(!valueBucketCachesBucketCache["GatewayId"].isNull())
			bucketCachesObject.gatewayId = valueBucketCachesBucketCache["GatewayId"].asString();
		if(!valueBucketCachesBucketCache["GatewayName"].isNull())
			bucketCachesObject.gatewayName = valueBucketCachesBucketCache["GatewayName"].asString();
		if(!valueBucketCachesBucketCache["RegionId"].isNull())
			bucketCachesObject.regionId = valueBucketCachesBucketCache["RegionId"].asString();
		if(!valueBucketCachesBucketCache["Location"].isNull())
			bucketCachesObject.location = valueBucketCachesBucketCache["Location"].asString();
		if(!valueBucketCachesBucketCache["Category"].isNull())
			bucketCachesObject.category = valueBucketCachesBucketCache["Category"].asString();
		if(!valueBucketCachesBucketCache["Type"].isNull())
			bucketCachesObject.type = valueBucketCachesBucketCache["Type"].asString();
		if(!valueBucketCachesBucketCache["BucketName"].isNull())
			bucketCachesObject.bucketName = valueBucketCachesBucketCache["BucketName"].asString();
		if(!valueBucketCachesBucketCache["Protocol"].isNull())
			bucketCachesObject.protocol = valueBucketCachesBucketCache["Protocol"].asString();
		if(!valueBucketCachesBucketCache["CacheMode"].isNull())
			bucketCachesObject.cacheMode = valueBucketCachesBucketCache["CacheMode"].asString();
		if(!valueBucketCachesBucketCache["CacheStats"].isNull())
			bucketCachesObject.cacheStats = valueBucketCachesBucketCache["CacheStats"].asString();
		if(!valueBucketCachesBucketCache["ShareName"].isNull())
			bucketCachesObject.shareName = valueBucketCachesBucketCache["ShareName"].asString();
		if(!valueBucketCachesBucketCache["VpcId"].isNull())
			bucketCachesObject.vpcId = valueBucketCachesBucketCache["VpcId"].asString();
		if(!valueBucketCachesBucketCache["VpcCidr"].isNull())
			bucketCachesObject.vpcCidr = valueBucketCachesBucketCache["VpcCidr"].asString();
		if(!valueBucketCachesBucketCache["MountPoint"].isNull())
			bucketCachesObject.mountPoint = valueBucketCachesBucketCache["MountPoint"].asString();
		bucketCaches_.push_back(bucketCachesObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

int DescribeGatewayBucketCachesResult::getTotalCount()const
{
	return totalCount_;
}

std::string DescribeGatewayBucketCachesResult::getMessage()const
{
	return message_;
}

int DescribeGatewayBucketCachesResult::getPageSize()const
{
	return pageSize_;
}

int DescribeGatewayBucketCachesResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeGatewayBucketCachesResult::BucketCache> DescribeGatewayBucketCachesResult::getBucketCaches()const
{
	return bucketCaches_;
}

std::string DescribeGatewayBucketCachesResult::getCode()const
{
	return code_;
}

bool DescribeGatewayBucketCachesResult::getSuccess()const
{
	return success_;
}

