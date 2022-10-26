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

#include <alibabacloud/polardb/model/DescribeDBClusterExpireInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Polardb;
using namespace AlibabaCloud::Polardb::Model;

DescribeDBClusterExpireInfoResult::DescribeDBClusterExpireInfoResult() :
	ServiceResult()
{}

DescribeDBClusterExpireInfoResult::DescribeDBClusterExpireInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDBClusterExpireInfoResult::~DescribeDBClusterExpireInfoResult()
{}

void DescribeDBClusterExpireInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Expired"].isNull())
		expired_ = value["Expired"].asString();
	if(!value["ExpireTime"].isNull())
		expireTime_ = value["ExpireTime"].asString();

}

std::string DescribeDBClusterExpireInfoResult::getExpired()const
{
	return expired_;
}

std::string DescribeDBClusterExpireInfoResult::getExpireTime()const
{
	return expireTime_;
}

