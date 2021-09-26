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

#include <alibabacloud/vs/model/GetBucketInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vs;
using namespace AlibabaCloud::Vs::Model;

GetBucketInfoResult::GetBucketInfoResult() :
	ServiceResult()
{}

GetBucketInfoResult::GetBucketInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetBucketInfoResult::~GetBucketInfoResult()
{}

void GetBucketInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto bucketInfoNode = value["BucketInfo"];
	if(!bucketInfoNode["BucketName"].isNull())
		bucketInfo_.bucketName = bucketInfoNode["BucketName"].asString();
	if(!bucketInfoNode["Comment"].isNull())
		bucketInfo_.comment = bucketInfoNode["Comment"].asString();
	if(!bucketInfoNode["BucketAcl"].isNull())
		bucketInfo_.bucketAcl = bucketInfoNode["BucketAcl"].asString();
	if(!bucketInfoNode["DataRedundancyType"].isNull())
		bucketInfo_.dataRedundancyType = bucketInfoNode["DataRedundancyType"].asString();
	if(!bucketInfoNode["StorageClass"].isNull())
		bucketInfo_.storageClass = bucketInfoNode["StorageClass"].asString();
	if(!bucketInfoNode["DispatcherType"].isNull())
		bucketInfo_.dispatcherType = bucketInfoNode["DispatcherType"].asString();
	if(!bucketInfoNode["ResourceType"].isNull())
		bucketInfo_.resourceType = bucketInfoNode["ResourceType"].asString();
	if(!bucketInfoNode["CreateTime"].isNull())
		bucketInfo_.createTime = bucketInfoNode["CreateTime"].asString();
	if(!bucketInfoNode["ModifyTime"].isNull())
		bucketInfo_.modifyTime = bucketInfoNode["ModifyTime"].asString();
	if(!bucketInfoNode["Endpoint"].isNull())
		bucketInfo_.endpoint = bucketInfoNode["Endpoint"].asString();

}

GetBucketInfoResult::BucketInfo GetBucketInfoResult::getBucketInfo()const
{
	return bucketInfo_;
}

