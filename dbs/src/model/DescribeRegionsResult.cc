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

#include <alibabacloud/dbs/model/DescribeRegionsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dbs;
using namespace AlibabaCloud::Dbs::Model;

DescribeRegionsResult::DescribeRegionsResult() :
	ServiceResult()
{}

DescribeRegionsResult::DescribeRegionsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeRegionsResult::~DescribeRegionsResult()
{}

void DescribeRegionsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allRegions = value["Regions"]["RegionCode"];
	for (const auto &item : allRegions)
		regions_.push_back(item.asString());
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["ErrCode"].isNull())
		errCode_ = value["ErrCode"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrMessage"].isNull())
		errMessage_ = value["ErrMessage"].asString();

}

int DescribeRegionsResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::vector<std::string> DescribeRegionsResult::getRegions()const
{
	return regions_;
}

std::string DescribeRegionsResult::getErrMessage()const
{
	return errMessage_;
}

bool DescribeRegionsResult::getSuccess()const
{
	return success_;
}

std::string DescribeRegionsResult::getErrCode()const
{
	return errCode_;
}

