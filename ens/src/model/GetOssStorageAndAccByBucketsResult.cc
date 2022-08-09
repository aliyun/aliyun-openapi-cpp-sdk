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

#include <alibabacloud/ens/model/GetOssStorageAndAccByBucketsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ens;
using namespace AlibabaCloud::Ens::Model;

GetOssStorageAndAccByBucketsResult::GetOssStorageAndAccByBucketsResult() :
	ServiceResult()
{}

GetOssStorageAndAccByBucketsResult::GetOssStorageAndAccByBucketsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetOssStorageAndAccByBucketsResult::~GetOssStorageAndAccByBucketsResult()
{}

void GetOssStorageAndAccByBucketsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allBucketListNode = value["BucketList"]["BucketListItem"];
	for (auto valueBucketListBucketListItem : allBucketListNode)
	{
		BucketListItem bucketListObject;
		if(!valueBucketListBucketListItem["Acc"].isNull())
			bucketListObject.acc = std::stol(valueBucketListBucketListItem["Acc"].asString());
		if(!valueBucketListBucketListItem["Bucket"].isNull())
			bucketListObject.bucket = valueBucketListBucketListItem["Bucket"].asString();
		if(!valueBucketListBucketListItem["StorageUsageByte"].isNull())
			bucketListObject.storageUsageByte = std::stol(valueBucketListBucketListItem["StorageUsageByte"].asString());
		bucketList_.push_back(bucketListObject);
	}

}

std::vector<GetOssStorageAndAccByBucketsResult::BucketListItem> GetOssStorageAndAccByBucketsResult::getBucketList()const
{
	return bucketList_;
}

