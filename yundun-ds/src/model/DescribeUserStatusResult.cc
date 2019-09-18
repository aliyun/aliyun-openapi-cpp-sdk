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

#include <alibabacloud/yundun-ds/model/DescribeUserStatusResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Yundun_ds;
using namespace AlibabaCloud::Yundun_ds::Model;

DescribeUserStatusResult::DescribeUserStatusResult() :
	ServiceResult()
{}

DescribeUserStatusResult::DescribeUserStatusResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeUserStatusResult::~DescribeUserStatusResult()
{}

void DescribeUserStatusResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto userStatusNode = value["UserStatus"];
	if(!userStatusNode["Authed"].isNull())
		userStatus_.authed = userStatusNode["Authed"].asString() == "true";
	if(!userStatusNode["Buyed"].isNull())
		userStatus_.buyed = userStatusNode["Buyed"].asString() == "true";
	if(!userStatusNode["OssBucketSet"].isNull())
		userStatus_.ossBucketSet = userStatusNode["OssBucketSet"].asString() == "true";
	if(!userStatusNode["OdpsSet"].isNull())
		userStatus_.odpsSet = userStatusNode["OdpsSet"].asString() == "true";
	if(!userStatusNode["RdsSet"].isNull())
		userStatus_.rdsSet = userStatusNode["RdsSet"].asString() == "true";
	if(!userStatusNode["AccessKeyId"].isNull())
		userStatus_.accessKeyId = userStatusNode["AccessKeyId"].asString();

}

DescribeUserStatusResult::UserStatus DescribeUserStatusResult::getUserStatus()const
{
	return userStatus_;
}

