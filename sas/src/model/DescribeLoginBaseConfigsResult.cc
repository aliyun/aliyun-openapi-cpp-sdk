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

#include <alibabacloud/sas/model/DescribeLoginBaseConfigsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

DescribeLoginBaseConfigsResult::DescribeLoginBaseConfigsResult() :
	ServiceResult()
{}

DescribeLoginBaseConfigsResult::DescribeLoginBaseConfigsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeLoginBaseConfigsResult::~DescribeLoginBaseConfigsResult()
{}

void DescribeLoginBaseConfigsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allBaseConfigsNode = value["BaseConfigs"]["BaseConfig"];
	for (auto valueBaseConfigsBaseConfig : allBaseConfigsNode)
	{
		BaseConfig baseConfigsObject;
		if(!valueBaseConfigsBaseConfig["EndTime"].isNull())
			baseConfigsObject.endTime = valueBaseConfigsBaseConfig["EndTime"].asString();
		if(!valueBaseConfigsBaseConfig["Account"].isNull())
			baseConfigsObject.account = valueBaseConfigsBaseConfig["Account"].asString();
		if(!valueBaseConfigsBaseConfig["StartTime"].isNull())
			baseConfigsObject.startTime = valueBaseConfigsBaseConfig["StartTime"].asString();
		if(!valueBaseConfigsBaseConfig["Ip"].isNull())
			baseConfigsObject.ip = valueBaseConfigsBaseConfig["Ip"].asString();
		if(!valueBaseConfigsBaseConfig["TotalCount"].isNull())
			baseConfigsObject.totalCount = std::stoi(valueBaseConfigsBaseConfig["TotalCount"].asString());
		if(!valueBaseConfigsBaseConfig["UuidCount"].isNull())
			baseConfigsObject.uuidCount = std::stoi(valueBaseConfigsBaseConfig["UuidCount"].asString());
		if(!valueBaseConfigsBaseConfig["Location"].isNull())
			baseConfigsObject.location = valueBaseConfigsBaseConfig["Location"].asString();
		if(!valueBaseConfigsBaseConfig["Remark"].isNull())
			baseConfigsObject.remark = valueBaseConfigsBaseConfig["Remark"].asString();
		auto allTargetListNode = valueBaseConfigsBaseConfig["TargetList"]["Target"];
		for (auto valueBaseConfigsBaseConfigTargetListTarget : allTargetListNode)
		{
			BaseConfig::Target targetListObject;
			if(!valueBaseConfigsBaseConfigTargetListTarget["Target"].isNull())
				targetListObject.target = valueBaseConfigsBaseConfigTargetListTarget["Target"].asString();
			if(!valueBaseConfigsBaseConfigTargetListTarget["TargetType"].isNull())
				targetListObject.targetType = valueBaseConfigsBaseConfigTargetListTarget["TargetType"].asString();
			baseConfigsObject.targetList.push_back(targetListObject);
		}
		baseConfigs_.push_back(baseConfigsObject);
	}
	if(!value["CurrentPage"].isNull())
		currentPage_ = std::stoi(value["CurrentPage"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeLoginBaseConfigsResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeLoginBaseConfigsResult::getPageSize()const
{
	return pageSize_;
}

int DescribeLoginBaseConfigsResult::getCurrentPage()const
{
	return currentPage_;
}

std::vector<DescribeLoginBaseConfigsResult::BaseConfig> DescribeLoginBaseConfigsResult::getBaseConfigs()const
{
	return baseConfigs_;
}

