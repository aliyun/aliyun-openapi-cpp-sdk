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
	auto allConfigsNode = value["Configs"]["Config"];
	for (auto valueConfigsConfig : allConfigsNode)
	{
		Config configsObject;
		if(!valueConfigsConfig["StartTime"].isNull())
			configsObject.startTime = valueConfigsConfig["StartTime"].asString();
		if(!valueConfigsConfig["EndTime"].isNull())
			configsObject.endTime = valueConfigsConfig["EndTime"].asString();
		if(!valueConfigsConfig["Ip"].isNull())
			configsObject.ip = valueConfigsConfig["Ip"].asString();
		if(!valueConfigsConfig["StrategyId"].isNull())
			configsObject.strategyId = std::stol(valueConfigsConfig["StrategyId"].asString());
		if(!valueConfigsConfig["Account"].isNull())
			configsObject.account = valueConfigsConfig["Account"].asString();
		if(!valueConfigsConfig["Location"].isNull())
			configsObject.location = valueConfigsConfig["Location"].asString();
		if(!valueConfigsConfig["Switcher"].isNull())
			configsObject.switcher = valueConfigsConfig["Switcher"].asString();
		if(!valueConfigsConfig["VulType"].isNull())
			configsObject.vulType = valueConfigsConfig["VulType"].asString();
		if(!valueConfigsConfig["UuidCount"].isNull())
			configsObject.uuidCount = std::stoi(valueConfigsConfig["UuidCount"].asString());
		if(!valueConfigsConfig["TotalCount"].isNull())
			configsObject.totalCount = std::stoi(valueConfigsConfig["TotalCount"].asString());
		auto allTargetListNode = allConfigsNode["TargetList"]["Target"];
		for (auto allConfigsNodeTargetListTarget : allTargetListNode)
		{
			Config::Target targetListObject;
			if(!allConfigsNodeTargetListTarget["Flag"].isNull())
				targetListObject.flag = allConfigsNodeTargetListTarget["Flag"].asString();
			if(!allConfigsNodeTargetListTarget["TargetType"].isNull())
				targetListObject.targetType = allConfigsNodeTargetListTarget["TargetType"].asString();
			if(!allConfigsNodeTargetListTarget["Target"].isNull())
				targetListObject.target = allConfigsNodeTargetListTarget["Target"].asString();
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

