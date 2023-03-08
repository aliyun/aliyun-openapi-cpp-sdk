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

#include <alibabacloud/adb/model/DescribeSparkCodeOutputResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Adb;
using namespace AlibabaCloud::Adb::Model;

DescribeSparkCodeOutputResult::DescribeSparkCodeOutputResult() :
	ServiceResult()
{}

DescribeSparkCodeOutputResult::DescribeSparkCodeOutputResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSparkCodeOutputResult::~DescribeSparkCodeOutputResult()
{}

void DescribeSparkCodeOutputResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Output"].isNull())
		output_ = value["Output"].asString();

}

std::string DescribeSparkCodeOutputResult::getMessage()const
{
	return message_;
}

std::string DescribeSparkCodeOutputResult::getOutput()const
{
	return output_;
}

bool DescribeSparkCodeOutputResult::getSuccess()const
{
	return success_;
}

