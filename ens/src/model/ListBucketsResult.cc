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

#include <alibabacloud/ens/model/ListBucketsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ens;
using namespace AlibabaCloud::Ens::Model;

ListBucketsResult::ListBucketsResult() :
	ServiceResult()
{}

ListBucketsResult::ListBucketsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListBucketsResult::~ListBucketsResult()
{}

void ListBucketsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allBucketInfosNode = value["BucketInfos"]["BucketInfo"];
	for (auto valueBucketInfosBucketInfo : allBucketInfosNode)
	{
		BucketInfo bucketInfosObject;
		if(!valueBucketInfosBucketInfo["BucketAcl"].isNull())
			bucketInfosObject.bucketAcl = valueBucketInfosBucketInfo["BucketAcl"].asString();
		if(!valueBucketInfosBucketInfo["BucketName"].isNull())
			bucketInfosObject.bucketName = valueBucketInfosBucketInfo["BucketName"].asString();
		if(!valueBucketInfosBucketInfo["City"].isNull())
			bucketInfosObject.city = valueBucketInfosBucketInfo["City"].asString();
		if(!valueBucketInfosBucketInfo["Comment"].isNull())
			bucketInfosObject.comment = valueBucketInfosBucketInfo["Comment"].asString();
		if(!valueBucketInfosBucketInfo["CORSRule"].isNull())
			bucketInfosObject.cORSRule = valueBucketInfosBucketInfo["CORSRule"].asString();
		if(!valueBucketInfosBucketInfo["CreateTime"].isNull())
			bucketInfosObject.createTime = valueBucketInfosBucketInfo["CreateTime"].asString();
		if(!valueBucketInfosBucketInfo["DataRedundancyType"].isNull())
			bucketInfosObject.dataRedundancyType = valueBucketInfosBucketInfo["DataRedundancyType"].asString();
		if(!valueBucketInfosBucketInfo["DispatcherType"].isNull())
			bucketInfosObject.dispatcherType = valueBucketInfosBucketInfo["DispatcherType"].asString();
		if(!valueBucketInfosBucketInfo["Endpoint"].isNull())
			bucketInfosObject.endpoint = valueBucketInfosBucketInfo["Endpoint"].asString();
		if(!valueBucketInfosBucketInfo["EngineInfo"].isNull())
			bucketInfosObject.engineInfo = valueBucketInfosBucketInfo["EngineInfo"].asString();
		if(!valueBucketInfosBucketInfo["IndexTableName"].isNull())
			bucketInfosObject.indexTableName = valueBucketInfosBucketInfo["IndexTableName"].asString();
		if(!valueBucketInfosBucketInfo["LifecycleRule"].isNull())
			bucketInfosObject.lifecycleRule = valueBucketInfosBucketInfo["LifecycleRule"].asString();
		if(!valueBucketInfosBucketInfo["LogicalBucketType"].isNull())
			bucketInfosObject.logicalBucketType = valueBucketInfosBucketInfo["LogicalBucketType"].asString();
		if(!valueBucketInfosBucketInfo["ModifyTime"].isNull())
			bucketInfosObject.modifyTime = valueBucketInfosBucketInfo["ModifyTime"].asString();
		if(!valueBucketInfosBucketInfo["Product"].isNull())
			bucketInfosObject.product = valueBucketInfosBucketInfo["Product"].asString();
		if(!valueBucketInfosBucketInfo["ResourceType"].isNull())
			bucketInfosObject.resourceType = valueBucketInfosBucketInfo["ResourceType"].asString();
		if(!valueBucketInfosBucketInfo["StorageClass"].isNull())
			bucketInfosObject.storageClass = valueBucketInfosBucketInfo["StorageClass"].asString();
		if(!valueBucketInfosBucketInfo["UserId"].isNull())
			bucketInfosObject.userId = std::stol(valueBucketInfosBucketInfo["UserId"].asString());
		if(!valueBucketInfosBucketInfo["EnsRegionId"].isNull())
			bucketInfosObject.ensRegionId = valueBucketInfosBucketInfo["EnsRegionId"].asString();
		bucketInfos_.push_back(bucketInfosObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());
	if(!value["NextMarker"].isNull())
		nextMarker_ = value["NextMarker"].asString();

}

std::vector<ListBucketsResult::BucketInfo> ListBucketsResult::getBucketInfos()const
{
	return bucketInfos_;
}

long ListBucketsResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListBucketsResult::getNextMarker()const
{
	return nextMarker_;
}

