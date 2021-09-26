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

#include <alibabacloud/vs/model/PrepareUploadResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vs;
using namespace AlibabaCloud::Vs::Model;

PrepareUploadResult::PrepareUploadResult() :
	ServiceResult()
{}

PrepareUploadResult::PrepareUploadResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

PrepareUploadResult::~PrepareUploadResult()
{}

void PrepareUploadResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["BucketName"].isNull())
		bucketName_ = value["BucketName"].asString();
	if(!value["Endpoint"].isNull())
		endpoint_ = value["Endpoint"].asString();
	if(!value["AdditionInfo"].isNull())
		additionInfo_ = value["AdditionInfo"].asString();

}

std::string PrepareUploadResult::getBucketName()const
{
	return bucketName_;
}

std::string PrepareUploadResult::getEndpoint()const
{
	return endpoint_;
}

std::string PrepareUploadResult::getAdditionInfo()const
{
	return additionInfo_;
}

