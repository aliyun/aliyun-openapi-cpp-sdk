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

#include <alibabacloud/ddoscoo/model/DescribeDefenseCountStatisticsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ddoscoo;
using namespace AlibabaCloud::Ddoscoo::Model;

DescribeDefenseCountStatisticsResult::DescribeDefenseCountStatisticsResult() :
	ServiceResult()
{}

DescribeDefenseCountStatisticsResult::DescribeDefenseCountStatisticsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDefenseCountStatisticsResult::~DescribeDefenseCountStatisticsResult()
{}

void DescribeDefenseCountStatisticsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto defenseCountStatisticsNode = value["DefenseCountStatistics"];
	if(!defenseCountStatisticsNode["FlowPackCountRemain"].isNull())
		defenseCountStatistics_.flowPackCountRemain = std::stoi(defenseCountStatisticsNode["FlowPackCountRemain"].asString());
	if(!defenseCountStatisticsNode["MaxUsableDefenseCountCurrentMonth"].isNull())
		defenseCountStatistics_.maxUsableDefenseCountCurrentMonth = std::stoi(defenseCountStatisticsNode["MaxUsableDefenseCountCurrentMonth"].asString());
	if(!defenseCountStatisticsNode["DefenseCountTotalUsageOfCurrentMonth"].isNull())
		defenseCountStatistics_.defenseCountTotalUsageOfCurrentMonth = std::stoi(defenseCountStatisticsNode["DefenseCountTotalUsageOfCurrentMonth"].asString());
	if(!defenseCountStatisticsNode["SecHighSpeedCountRemain"].isNull())
		defenseCountStatistics_.secHighSpeedCountRemain = std::stoi(defenseCountStatisticsNode["SecHighSpeedCountRemain"].asString());
	auto allHkPackageDetailNode = defenseCountStatisticsNode["HkPackageDetail"]["hkResourcePackageDetail"];
	for (auto defenseCountStatisticsNodeHkPackageDetailhkResourcePackageDetail : allHkPackageDetailNode)
	{
		DefenseCountStatistics::HkResourcePackageDetail hkResourcePackageDetailObject;
		if(!defenseCountStatisticsNodeHkPackageDetailhkResourcePackageDetail["EndTime"].isNull())
			hkResourcePackageDetailObject.endTime = std::stol(defenseCountStatisticsNodeHkPackageDetailhkResourcePackageDetail["EndTime"].asString());
		if(!defenseCountStatisticsNodeHkPackageDetailhkResourcePackageDetail["StartTime"].isNull())
			hkResourcePackageDetailObject.startTime = std::stol(defenseCountStatisticsNodeHkPackageDetailhkResourcePackageDetail["StartTime"].asString());
		if(!defenseCountStatisticsNodeHkPackageDetailhkResourcePackageDetail["BuyNum"].isNull())
			hkResourcePackageDetailObject.buyNum = std::stol(defenseCountStatisticsNodeHkPackageDetailhkResourcePackageDetail["BuyNum"].asString());
		if(!defenseCountStatisticsNodeHkPackageDetailhkResourcePackageDetail["UsedNum"].isNull())
			hkResourcePackageDetailObject.usedNum = std::stol(defenseCountStatisticsNodeHkPackageDetailhkResourcePackageDetail["UsedNum"].asString());
		defenseCountStatistics_.hkPackageDetail.push_back(hkResourcePackageDetailObject);
	}
	auto allUnlimitedPackageDetailNode = defenseCountStatisticsNode["UnlimitedPackageDetail"]["unlimitedResourcePackageDetail"];
	for (auto defenseCountStatisticsNodeUnlimitedPackageDetailunlimitedResourcePackageDetail : allUnlimitedPackageDetailNode)
	{
		DefenseCountStatistics::UnlimitedResourcePackageDetail unlimitedResourcePackageDetailObject;
		if(!defenseCountStatisticsNodeUnlimitedPackageDetailunlimitedResourcePackageDetail["EndTime"].isNull())
			unlimitedResourcePackageDetailObject.endTime = std::stol(defenseCountStatisticsNodeUnlimitedPackageDetailunlimitedResourcePackageDetail["EndTime"].asString());
		if(!defenseCountStatisticsNodeUnlimitedPackageDetailunlimitedResourcePackageDetail["StartTime"].isNull())
			unlimitedResourcePackageDetailObject.startTime = std::stol(defenseCountStatisticsNodeUnlimitedPackageDetailunlimitedResourcePackageDetail["StartTime"].asString());
		if(!defenseCountStatisticsNodeUnlimitedPackageDetailunlimitedResourcePackageDetail["BuyNum"].isNull())
			unlimitedResourcePackageDetailObject.buyNum = std::stol(defenseCountStatisticsNodeUnlimitedPackageDetailunlimitedResourcePackageDetail["BuyNum"].asString());
		if(!defenseCountStatisticsNodeUnlimitedPackageDetailunlimitedResourcePackageDetail["UsedNum"].isNull())
			unlimitedResourcePackageDetailObject.usedNum = std::stol(defenseCountStatisticsNodeUnlimitedPackageDetailunlimitedResourcePackageDetail["UsedNum"].asString());
		defenseCountStatistics_.unlimitedPackageDetail.push_back(unlimitedResourcePackageDetailObject);
	}

}

DescribeDefenseCountStatisticsResult::DefenseCountStatistics DescribeDefenseCountStatisticsResult::getDefenseCountStatistics()const
{
	return defenseCountStatistics_;
}

