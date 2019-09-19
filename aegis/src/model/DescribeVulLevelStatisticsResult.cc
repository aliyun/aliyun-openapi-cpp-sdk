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

#include <alibabacloud/aegis/model/DescribeVulLevelStatisticsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Aegis;
using namespace AlibabaCloud::Aegis::Model;

DescribeVulLevelStatisticsResult::DescribeVulLevelStatisticsResult() :
	ServiceResult()
{}

DescribeVulLevelStatisticsResult::DescribeVulLevelStatisticsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeVulLevelStatisticsResult::~DescribeVulLevelStatisticsResult()
{}

void DescribeVulLevelStatisticsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allLevelStatisticsNode = value["LevelStatistics"]["LevelStatistic"];
	for (auto valueLevelStatisticsLevelStatistic : allLevelStatisticsNode)
	{
		LevelStatistic levelStatisticsObject;
		if(!valueLevelStatisticsLevelStatistic["Level"].isNull())
			levelStatisticsObject.level = valueLevelStatisticsLevelStatistic["Level"].asString();
		if(!valueLevelStatisticsLevelStatistic["CveNum"].isNull())
			levelStatisticsObject.cveNum = std::stoi(valueLevelStatisticsLevelStatistic["CveNum"].asString());
		if(!valueLevelStatisticsLevelStatistic["EmgNum"].isNull())
			levelStatisticsObject.emgNum = std::stoi(valueLevelStatisticsLevelStatistic["EmgNum"].asString());
		if(!valueLevelStatisticsLevelStatistic["SysNum"].isNull())
			levelStatisticsObject.sysNum = std::stoi(valueLevelStatisticsLevelStatistic["SysNum"].asString());
		if(!valueLevelStatisticsLevelStatistic["CmsNum"].isNull())
			levelStatisticsObject.cmsNum = std::stoi(valueLevelStatisticsLevelStatistic["CmsNum"].asString());
		if(!valueLevelStatisticsLevelStatistic["AppNum"].isNull())
			levelStatisticsObject.appNum = std::stoi(valueLevelStatisticsLevelStatistic["AppNum"].asString());
		if(!valueLevelStatisticsLevelStatistic["CmsDealedTotalNum"].isNull())
			levelStatisticsObject.cmsDealedTotalNum = std::stoi(valueLevelStatisticsLevelStatistic["CmsDealedTotalNum"].asString());
		if(!valueLevelStatisticsLevelStatistic["VulDealedTotalNum"].isNull())
			levelStatisticsObject.vulDealedTotalNum = std::stoi(valueLevelStatisticsLevelStatistic["VulDealedTotalNum"].asString());
		if(!valueLevelStatisticsLevelStatistic["VulAsapSum"].isNull())
			levelStatisticsObject.vulAsapSum = std::stoi(valueLevelStatisticsLevelStatistic["VulAsapSum"].asString());
		if(!valueLevelStatisticsLevelStatistic["VulLaterSum"].isNull())
			levelStatisticsObject.vulLaterSum = std::stoi(valueLevelStatisticsLevelStatistic["VulLaterSum"].asString());
		if(!valueLevelStatisticsLevelStatistic["VulNntfSum"].isNull())
			levelStatisticsObject.vulNntfSum = std::stoi(valueLevelStatisticsLevelStatistic["VulNntfSum"].asString());
		if(!valueLevelStatisticsLevelStatistic["VulSeriousTotal"].isNull())
			levelStatisticsObject.vulSeriousTotal = std::stoi(valueLevelStatisticsLevelStatistic["VulSeriousTotal"].asString());
		if(!valueLevelStatisticsLevelStatistic["VulHighTotal"].isNull())
			levelStatisticsObject.vulHighTotal = std::stoi(valueLevelStatisticsLevelStatistic["VulHighTotal"].asString());
		if(!valueLevelStatisticsLevelStatistic["VulMediumTotal"].isNull())
			levelStatisticsObject.vulMediumTotal = std::stoi(valueLevelStatisticsLevelStatistic["VulMediumTotal"].asString());
		if(!valueLevelStatisticsLevelStatistic["VulLowTotal"].isNull())
			levelStatisticsObject.vulLowTotal = std::stoi(valueLevelStatisticsLevelStatistic["VulLowTotal"].asString());
		levelStatistics_.push_back(levelStatisticsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeVulLevelStatisticsResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<DescribeVulLevelStatisticsResult::LevelStatistic> DescribeVulLevelStatisticsResult::getLevelStatistics()const
{
	return levelStatistics_;
}

