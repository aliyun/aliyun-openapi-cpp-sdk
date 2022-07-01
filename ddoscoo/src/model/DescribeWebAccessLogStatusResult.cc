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

#include <alibabacloud/ddoscoo/model/DescribeWebAccessLogStatusResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ddoscoo;
using namespace AlibabaCloud::Ddoscoo::Model;

DescribeWebAccessLogStatusResult::DescribeWebAccessLogStatusResult() :
	ServiceResult()
{}

DescribeWebAccessLogStatusResult::DescribeWebAccessLogStatusResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeWebAccessLogStatusResult::~DescribeWebAccessLogStatusResult()
{}

void DescribeWebAccessLogStatusResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["SlsLogstore"].isNull())
		slsLogstore_ = value["SlsLogstore"].asString();
	if(!value["SlsStatus"].isNull())
		slsStatus_ = value["SlsStatus"].asString() == "true";
	if(!value["SlsProject"].isNull())
		slsProject_ = value["SlsProject"].asString();

}

std::string DescribeWebAccessLogStatusResult::getSlsProject()const
{
	return slsProject_;
}

bool DescribeWebAccessLogStatusResult::getSlsStatus()const
{
	return slsStatus_;
}

std::string DescribeWebAccessLogStatusResult::getSlsLogstore()const
{
	return slsLogstore_;
}

