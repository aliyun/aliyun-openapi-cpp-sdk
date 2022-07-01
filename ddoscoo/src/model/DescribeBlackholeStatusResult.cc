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

#include <alibabacloud/ddoscoo/model/DescribeBlackholeStatusResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ddoscoo;
using namespace AlibabaCloud::Ddoscoo::Model;

DescribeBlackholeStatusResult::DescribeBlackholeStatusResult() :
	ServiceResult()
{}

DescribeBlackholeStatusResult::DescribeBlackholeStatusResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeBlackholeStatusResult::~DescribeBlackholeStatusResult()
{}

void DescribeBlackholeStatusResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allBlackholeStatusNode = value["BlackholeStatus"]["BlackholeStatusItem"];
	for (auto valueBlackholeStatusBlackholeStatusItem : allBlackholeStatusNode)
	{
		BlackholeStatusItem blackholeStatusObject;
		if(!valueBlackholeStatusBlackholeStatusItem["EndTime"].isNull())
			blackholeStatusObject.endTime = std::stol(valueBlackholeStatusBlackholeStatusItem["EndTime"].asString());
		if(!valueBlackholeStatusBlackholeStatusItem["StartTime"].isNull())
			blackholeStatusObject.startTime = std::stol(valueBlackholeStatusBlackholeStatusItem["StartTime"].asString());
		if(!valueBlackholeStatusBlackholeStatusItem["Ip"].isNull())
			blackholeStatusObject.ip = valueBlackholeStatusBlackholeStatusItem["Ip"].asString();
		if(!valueBlackholeStatusBlackholeStatusItem["BlackStatus"].isNull())
			blackholeStatusObject.blackStatus = valueBlackholeStatusBlackholeStatusItem["BlackStatus"].asString();
		blackholeStatus_.push_back(blackholeStatusObject);
	}

}

std::vector<DescribeBlackholeStatusResult::BlackholeStatusItem> DescribeBlackholeStatusResult::getBlackholeStatus()const
{
	return blackholeStatus_;
}

