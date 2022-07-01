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

#include <alibabacloud/ddoscoo/model/DescribeBlockStatusResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ddoscoo;
using namespace AlibabaCloud::Ddoscoo::Model;

DescribeBlockStatusResult::DescribeBlockStatusResult() :
	ServiceResult()
{}

DescribeBlockStatusResult::DescribeBlockStatusResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeBlockStatusResult::~DescribeBlockStatusResult()
{}

void DescribeBlockStatusResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allStatusListNode = value["StatusList"]["StatusItem"];
	for (auto valueStatusListStatusItem : allStatusListNode)
	{
		StatusItem statusListObject;
		if(!valueStatusListStatusItem["Ip"].isNull())
			statusListObject.ip = valueStatusListStatusItem["Ip"].asString();
		auto allBlockStatusListNode = valueStatusListStatusItem["BlockStatusList"]["BlockStatusItem"];
		for (auto valueStatusListStatusItemBlockStatusListBlockStatusItem : allBlockStatusListNode)
		{
			StatusItem::BlockStatusItem blockStatusListObject;
			if(!valueStatusListStatusItemBlockStatusListBlockStatusItem["EndTime"].isNull())
				blockStatusListObject.endTime = std::stol(valueStatusListStatusItemBlockStatusListBlockStatusItem["EndTime"].asString());
			if(!valueStatusListStatusItemBlockStatusListBlockStatusItem["StartTime"].isNull())
				blockStatusListObject.startTime = std::stol(valueStatusListStatusItemBlockStatusListBlockStatusItem["StartTime"].asString());
			if(!valueStatusListStatusItemBlockStatusListBlockStatusItem["Line"].isNull())
				blockStatusListObject.line = valueStatusListStatusItemBlockStatusListBlockStatusItem["Line"].asString();
			if(!valueStatusListStatusItemBlockStatusListBlockStatusItem["BlockStatus"].isNull())
				blockStatusListObject.blockStatus = valueStatusListStatusItemBlockStatusListBlockStatusItem["BlockStatus"].asString();
			statusListObject.blockStatusList.push_back(blockStatusListObject);
		}
		statusList_.push_back(statusListObject);
	}

}

std::vector<DescribeBlockStatusResult::StatusItem> DescribeBlockStatusResult::getStatusList()const
{
	return statusList_;
}

