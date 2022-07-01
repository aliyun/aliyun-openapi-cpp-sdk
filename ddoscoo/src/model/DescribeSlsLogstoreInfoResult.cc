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

#include <alibabacloud/ddoscoo/model/DescribeSlsLogstoreInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ddoscoo;
using namespace AlibabaCloud::Ddoscoo::Model;

DescribeSlsLogstoreInfoResult::DescribeSlsLogstoreInfoResult() :
	ServiceResult()
{}

DescribeSlsLogstoreInfoResult::DescribeSlsLogstoreInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSlsLogstoreInfoResult::~DescribeSlsLogstoreInfoResult()
{}

void DescribeSlsLogstoreInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Ttl"].isNull())
		ttl_ = std::stoi(value["Ttl"].asString());
	if(!value["Quota"].isNull())
		quota_ = std::stol(value["Quota"].asString());
	if(!value["LogStore"].isNull())
		logStore_ = value["LogStore"].asString();
	if(!value["Used"].isNull())
		used_ = std::stol(value["Used"].asString());
	if(!value["Project"].isNull())
		project_ = value["Project"].asString();

}

std::string DescribeSlsLogstoreInfoResult::getProject()const
{
	return project_;
}

long DescribeSlsLogstoreInfoResult::getQuota()const
{
	return quota_;
}

std::string DescribeSlsLogstoreInfoResult::getLogStore()const
{
	return logStore_;
}

long DescribeSlsLogstoreInfoResult::getUsed()const
{
	return used_;
}

int DescribeSlsLogstoreInfoResult::getTtl()const
{
	return ttl_;
}

