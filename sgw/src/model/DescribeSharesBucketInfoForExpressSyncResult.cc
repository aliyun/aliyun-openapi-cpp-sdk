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

#include <alibabacloud/sgw/model/DescribeSharesBucketInfoForExpressSyncResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sgw;
using namespace AlibabaCloud::Sgw::Model;

DescribeSharesBucketInfoForExpressSyncResult::DescribeSharesBucketInfoForExpressSyncResult() :
	ServiceResult()
{}

DescribeSharesBucketInfoForExpressSyncResult::DescribeSharesBucketInfoForExpressSyncResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSharesBucketInfoForExpressSyncResult::~DescribeSharesBucketInfoForExpressSyncResult()
{}

void DescribeSharesBucketInfoForExpressSyncResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allBucketInfosNode = value["BucketInfos"]["BucketInfo"];
	for (auto valueBucketInfosBucketInfo : allBucketInfosNode)
	{
		BucketInfo bucketInfosObject;
		if(!valueBucketInfosBucketInfo["BucketRegion"].isNull())
			bucketInfosObject.bucketRegion = valueBucketInfosBucketInfo["BucketRegion"].asString();
		if(!valueBucketInfosBucketInfo["BucketName"].isNull())
			bucketInfosObject.bucketName = valueBucketInfosBucketInfo["BucketName"].asString();
		if(!valueBucketInfosBucketInfo["BucketPrefix"].isNull())
			bucketInfosObject.bucketPrefix = valueBucketInfosBucketInfo["BucketPrefix"].asString();
		bucketInfos_.push_back(bucketInfosObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::vector<DescribeSharesBucketInfoForExpressSyncResult::BucketInfo> DescribeSharesBucketInfoForExpressSyncResult::getBucketInfos()const
{
	return bucketInfos_;
}

std::string DescribeSharesBucketInfoForExpressSyncResult::getMessage()const
{
	return message_;
}

std::string DescribeSharesBucketInfoForExpressSyncResult::getCode()const
{
	return code_;
}

bool DescribeSharesBucketInfoForExpressSyncResult::getSuccess()const
{
	return success_;
}

