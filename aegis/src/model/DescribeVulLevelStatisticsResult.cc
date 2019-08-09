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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allLevelStatistics = value["LevelStatistics"]["LevelStatistic"];
	for (auto value : allLevelStatistics)
	{
		LevelStatistic levelStatisticsObject;
		if(!value["Level"].isNull())
			levelStatisticsObject.level = value["Level"].asString();
		if(!value["CveNum"].isNull())
			levelStatisticsObject.cveNum = std::stoi(value["CveNum"].asString());
		if(!value["EmgNum"].isNull())
			levelStatisticsObject.emgNum = std::stoi(value["EmgNum"].asString());
		if(!value["SysNum"].isNull())
			levelStatisticsObject.sysNum = std::stoi(value["SysNum"].asString());
		if(!value["CmsNum"].isNull())
			levelStatisticsObject.cmsNum = std::stoi(value["CmsNum"].asString());
		if(!value["AppNum"].isNull())
			levelStatisticsObject.appNum = std::stoi(value["AppNum"].asString());
		if(!value["CmsDealedTotalNum"].isNull())
			levelStatisticsObject.cmsDealedTotalNum = std::stoi(value["CmsDealedTotalNum"].asString());
		if(!value["VulDealedTotalNum"].isNull())
			levelStatisticsObject.vulDealedTotalNum = std::stoi(value["VulDealedTotalNum"].asString());
		if(!value["VulAsapSum"].isNull())
			levelStatisticsObject.vulAsapSum = std::stoi(value["VulAsapSum"].asString());
		if(!value["VulLaterSum"].isNull())
			levelStatisticsObject.vulLaterSum = std::stoi(value["VulLaterSum"].asString());
		if(!value["VulNntfSum"].isNull())
			levelStatisticsObject.vulNntfSum = std::stoi(value["VulNntfSum"].asString());
		if(!value["VulSeriousTotal"].isNull())
			levelStatisticsObject.vulSeriousTotal = std::stoi(value["VulSeriousTotal"].asString());
		if(!value["VulHighTotal"].isNull())
			levelStatisticsObject.vulHighTotal = std::stoi(value["VulHighTotal"].asString());
		if(!value["VulMediumTotal"].isNull())
			levelStatisticsObject.vulMediumTotal = std::stoi(value["VulMediumTotal"].asString());
		if(!value["VulLowTotal"].isNull())
			levelStatisticsObject.vulLowTotal = std::stoi(value["VulLowTotal"].asString());
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

