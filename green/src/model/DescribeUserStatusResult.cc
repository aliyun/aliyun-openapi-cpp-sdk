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

#include <alibabacloud/green/model/DescribeUserStatusResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Green;
using namespace AlibabaCloud::Green::Model;

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
	if(!value["Buyed"].isNull())
		buyed_ = value["Buyed"].asString() == "true";
	if(!value["InDept"].isNull())
		inDept_ = value["InDept"].asString() == "true";
	if(!value["OpenApiUsed"].isNull())
		openApiUsed_ = value["OpenApiUsed"].asString() == "true";
	if(!value["OpenApiBeginTime"].isNull())
		openApiBeginTime_ = value["OpenApiBeginTime"].asString();
	if(!value["OssCheckStatus"].isNull())
		ossCheckStatus_ = value["OssCheckStatus"].asString();
	if(!value["OssVideoSizeLimit"].isNull())
		ossVideoSizeLimit_ = std::stoi(value["OssVideoSizeLimit"].asString());
	if(!value["Uid"].isNull())
		uid_ = value["Uid"].asString();

}

std::string DescribeUserStatusResult::getOpenApiBeginTime()const
{
	return openApiBeginTime_;
}

std::string DescribeUserStatusResult::getUid()const
{
	return uid_;
}

bool DescribeUserStatusResult::getOpenApiUsed()const
{
	return openApiUsed_;
}

std::string DescribeUserStatusResult::getOssCheckStatus()const
{
	return ossCheckStatus_;
}

int DescribeUserStatusResult::getOssVideoSizeLimit()const
{
	return ossVideoSizeLimit_;
}

bool DescribeUserStatusResult::getInDept()const
{
	return inDept_;
}

bool DescribeUserStatusResult::getBuyed()const
{
	return buyed_;
}

