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

#include <alibabacloud/r-kvstore/model/DescribeRedisLogConfigResult.h>
#include <json/json.h>

using namespace AlibabaCloud::R_kvstore;
using namespace AlibabaCloud::R_kvstore::Model;

DescribeRedisLogConfigResult::DescribeRedisLogConfigResult() :
	ServiceResult()
{}

DescribeRedisLogConfigResult::DescribeRedisLogConfigResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeRedisLogConfigResult::~DescribeRedisLogConfigResult()
{}

void DescribeRedisLogConfigResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["IsEtlMetaExist"].isNull())
		isEtlMetaExist_ = std::stoi(value["IsEtlMetaExist"].asString());
	if(!value["IsUserProjectLogstoreExist"].isNull())
		isUserProjectLogstoreExist_ = std::stoi(value["IsUserProjectLogstoreExist"].asString());
	if(!value["UserProjectName"].isNull())
		userProjectName_ = std::stoi(value["UserProjectName"].asString());
	if(!value["UserLogstoreName"].isNull())
		userLogstoreName_ = value["UserLogstoreName"].asString();

}

std::string DescribeRedisLogConfigResult::getUserLogstoreName()const
{
	return userLogstoreName_;
}

int DescribeRedisLogConfigResult::getUserProjectName()const
{
	return userProjectName_;
}

int DescribeRedisLogConfigResult::getIsUserProjectLogstoreExist()const
{
	return isUserProjectLogstoreExist_;
}

int DescribeRedisLogConfigResult::getIsEtlMetaExist()const
{
	return isEtlMetaExist_;
}

