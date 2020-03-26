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

#include <alibabacloud/dds/model/DescribeMongoDBLogConfigResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dds;
using namespace AlibabaCloud::Dds::Model;

DescribeMongoDBLogConfigResult::DescribeMongoDBLogConfigResult() :
	ServiceResult()
{}

DescribeMongoDBLogConfigResult::DescribeMongoDBLogConfigResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeMongoDBLogConfigResult::~DescribeMongoDBLogConfigResult()
{}

void DescribeMongoDBLogConfigResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["UserProjectName"].isNull())
		userProjectName_ = value["UserProjectName"].asString();
	if(!value["IsUserProjectLogstoreExist"].isNull())
		isUserProjectLogstoreExist_ = std::stoi(value["IsUserProjectLogstoreExist"].asString());
	if(!value["IsEtlMetaExist"].isNull())
		isEtlMetaExist_ = std::stoi(value["IsEtlMetaExist"].asString());

}

std::string DescribeMongoDBLogConfigResult::getUserProjectName()const
{
	return userProjectName_;
}

int DescribeMongoDBLogConfigResult::getIsUserProjectLogstoreExist()const
{
	return isUserProjectLogstoreExist_;
}

int DescribeMongoDBLogConfigResult::getIsEtlMetaExist()const
{
	return isEtlMetaExist_;
}

