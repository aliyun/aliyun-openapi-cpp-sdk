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

#include <alibabacloud/sddp/model/DescribeUserStatusResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sddp;
using namespace AlibabaCloud::Sddp::Model;

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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
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
	if(!userStatusNode["Trail"].isNull())
		userStatus_.trail = userStatusNode["Trail"].asString() == "true";
	if(!userStatusNode["InstanceStatus"].isNull())
		userStatus_.instanceStatus = std::stoi(userStatusNode["InstanceStatus"].asString());
	if(!userStatusNode["InstanceId"].isNull())
		userStatus_.instanceId = userStatusNode["InstanceId"].asString();
	if(!userStatusNode["RemainDays"].isNull())
		userStatus_.remainDays = std::stoi(userStatusNode["RemainDays"].asString());
	if(!userStatusNode["RenewStatus"].isNull())
		userStatus_.renewStatus = userStatusNode["RenewStatus"].asString() == "true";
	if(!userStatusNode["InstanceNum"].isNull())
		userStatus_.instanceNum = std::stoi(userStatusNode["InstanceNum"].asString());
	if(!userStatusNode["UseInstanceNum"].isNull())
		userStatus_.useInstanceNum = std::stoi(userStatusNode["UseInstanceNum"].asString());
	if(!userStatusNode["OssSize"].isNull())
		userStatus_.ossSize = std::stol(userStatusNode["OssSize"].asString());
	if(!userStatusNode["UseOssSize"].isNull())
		userStatus_.useOssSize = std::stol(userStatusNode["UseOssSize"].asString());

}

DescribeUserStatusResult::UserStatus DescribeUserStatusResult::getUserStatus()const
{
	return userStatus_;
}

