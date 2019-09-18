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

#include <alibabacloud/green/model/DescribeWebsiteIndexPageBaselineResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Green;
using namespace AlibabaCloud::Green::Model;

DescribeWebsiteIndexPageBaselineResult::DescribeWebsiteIndexPageBaselineResult() :
	ServiceResult()
{}

DescribeWebsiteIndexPageBaselineResult::DescribeWebsiteIndexPageBaselineResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeWebsiteIndexPageBaselineResult::~DescribeWebsiteIndexPageBaselineResult()
{}

void DescribeWebsiteIndexPageBaselineResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["CreateTime"].isNull())
		createTime_ = value["CreateTime"].asString();
	if(!value["Snapshot"].isNull())
		snapshot_ = value["Snapshot"].asString();
	if(!value["BaseLineStatus"].isNull())
		baseLineStatus_ = value["BaseLineStatus"].asString();

}

std::string DescribeWebsiteIndexPageBaselineResult::getSnapshot()const
{
	return snapshot_;
}

std::string DescribeWebsiteIndexPageBaselineResult::getBaseLineStatus()const
{
	return baseLineStatus_;
}

std::string DescribeWebsiteIndexPageBaselineResult::getCreateTime()const
{
	return createTime_;
}

