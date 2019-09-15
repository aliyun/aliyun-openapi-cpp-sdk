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

#include <alibabacloud/aegis/model/DescribeLogstoreStorageResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Aegis;
using namespace AlibabaCloud::Aegis::Model;

DescribeLogstoreStorageResult::DescribeLogstoreStorageResult() :
	ServiceResult()
{}

DescribeLogstoreStorageResult::DescribeLogstoreStorageResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeLogstoreStorageResult::~DescribeLogstoreStorageResult()
{}

void DescribeLogstoreStorageResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Logstore"].isNull())
		logstore_ = value["Logstore"].asString();
	if(!value["Ttl"].isNull())
		ttl_ = std::stoi(value["Ttl"].asString());
	if(!value["Preserve"].isNull())
		preserve_ = std::stol(value["Preserve"].asString());
	if(!value["Used"].isNull())
		used_ = std::stol(value["Used"].asString());

}

long DescribeLogstoreStorageResult::getUsed()const
{
	return used_;
}

std::string DescribeLogstoreStorageResult::getLogstore()const
{
	return logstore_;
}

int DescribeLogstoreStorageResult::getTtl()const
{
	return ttl_;
}

long DescribeLogstoreStorageResult::getPreserve()const
{
	return preserve_;
}

