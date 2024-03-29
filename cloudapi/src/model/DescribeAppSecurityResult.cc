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

#include <alibabacloud/cloudapi/model/DescribeAppSecurityResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CloudAPI;
using namespace AlibabaCloud::CloudAPI::Model;

DescribeAppSecurityResult::DescribeAppSecurityResult() :
	ServiceResult()
{}

DescribeAppSecurityResult::DescribeAppSecurityResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeAppSecurityResult::~DescribeAppSecurityResult()
{}

void DescribeAppSecurityResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["AppSecret"].isNull())
		appSecret_ = value["AppSecret"].asString();
	if(!value["AppKey"].isNull())
		appKey_ = value["AppKey"].asString();
	if(!value["ModifiedTime"].isNull())
		modifiedTime_ = value["ModifiedTime"].asString();
	if(!value["AppCode"].isNull())
		appCode_ = value["AppCode"].asString();
	if(!value["CreatedTime"].isNull())
		createdTime_ = value["CreatedTime"].asString();

}

std::string DescribeAppSecurityResult::getAppCode()const
{
	return appCode_;
}

std::string DescribeAppSecurityResult::getCreatedTime()const
{
	return createdTime_;
}

std::string DescribeAppSecurityResult::getModifiedTime()const
{
	return modifiedTime_;
}

std::string DescribeAppSecurityResult::getAppKey()const
{
	return appKey_;
}

std::string DescribeAppSecurityResult::getAppSecret()const
{
	return appSecret_;
}

