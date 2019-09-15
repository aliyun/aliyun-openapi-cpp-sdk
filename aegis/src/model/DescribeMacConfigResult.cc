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

#include <alibabacloud/aegis/model/DescribeMacConfigResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Aegis;
using namespace AlibabaCloud::Aegis::Model;

DescribeMacConfigResult::DescribeMacConfigResult() :
	ServiceResult()
{}

DescribeMacConfigResult::DescribeMacConfigResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeMacConfigResult::~DescribeMacConfigResult()
{}

void DescribeMacConfigResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allConfigs = value["Configs"]["Config"];
	for (auto value : allConfigs)
	{
		Config configsObject;
		if(!value["StartTime"].isNull())
			configsObject.startTime = value["StartTime"].asString();
		if(!value["EndTime"].isNull())
			configsObject.endTime = value["EndTime"].asString();
		if(!value["Ip"].isNull())
			configsObject.ip = value["Ip"].asString();
		if(!value["StrategyId"].isNull())
			configsObject.strategyId = std::stol(value["StrategyId"].asString());
		if(!value["Account"].isNull())
			configsObject.account = value["Account"].asString();
		if(!value["Location"].isNull())
			configsObject.location = value["Location"].asString();
		if(!value["Switcher"].isNull())
			configsObject.switcher = value["Switcher"].asString();
		if(!value["VulType"].isNull())
			configsObject.vulType = value["VulType"].asString();
		if(!value["UuidCount"].isNull())
			configsObject.uuidCount = std::stoi(value["UuidCount"].asString());
		if(!value["TotalCount"].isNull())
			configsObject.totalCount = std::stoi(value["TotalCount"].asString());
		auto allTargetList = value["TargetList"]["Target"];
		for (auto value : allTargetList)
		{
			Config::Target targetListObject;
			if(!value["Flag"].isNull())
				targetListObject.flag = value["Flag"].asString();
			if(!value["TargetType"].isNull())
				targetListObject.targetType = value["TargetType"].asString();
			if(!value["Target"].isNull())
				targetListObject.target = value["Target"].asString();
			configsObject.targetList.push_back(targetListObject);
		}
		configs_.push_back(configsObject);
	}
	if(!value["Count"].isNull())
		count_ = std::stoi(value["Count"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["CurrentPage"].isNull())
		currentPage_ = std::stoi(value["CurrentPage"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeMacConfigResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeMacConfigResult::getPageSize()const
{
	return pageSize_;
}

int DescribeMacConfigResult::getCurrentPage()const
{
	return currentPage_;
}

std::vector<DescribeMacConfigResult::Config> DescribeMacConfigResult::getConfigs()const
{
	return configs_;
}

int DescribeMacConfigResult::getCount()const
{
	return count_;
}

