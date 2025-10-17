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

#include <alibabacloud/polardb/model/DescribeUpgradeReportResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Polardb;
using namespace AlibabaCloud::Polardb::Model;

DescribeUpgradeReportResult::DescribeUpgradeReportResult() :
	ServiceResult()
{}

DescribeUpgradeReportResult::DescribeUpgradeReportResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeUpgradeReportResult::~DescribeUpgradeReportResult()
{}

void DescribeUpgradeReportResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allUpgradeReportListNode = value["UpgradeReportList"]["Report"];
	for (auto valueUpgradeReportListReport : allUpgradeReportListNode)
	{
		Report upgradeReportListObject;
		if(!valueUpgradeReportListReport["TaskId"].isNull())
			upgradeReportListObject.taskId = valueUpgradeReportListReport["TaskId"].asString();
		if(!valueUpgradeReportListReport["CheckTime"].isNull())
			upgradeReportListObject.checkTime = valueUpgradeReportListReport["CheckTime"].asString();
		if(!valueUpgradeReportListReport["DstVersion"].isNull())
			upgradeReportListObject.dstVersion = valueUpgradeReportListReport["DstVersion"].asString();
		if(!valueUpgradeReportListReport["SrcInsName"].isNull())
			upgradeReportListObject.srcInsName = valueUpgradeReportListReport["SrcInsName"].asString();
		if(!valueUpgradeReportListReport["SrcVersion"].isNull())
			upgradeReportListObject.srcVersion = valueUpgradeReportListReport["SrcVersion"].asString();
		if(!valueUpgradeReportListReport["UpgradeMode"].isNull())
			upgradeReportListObject.upgradeMode = valueUpgradeReportListReport["UpgradeMode"].asString();
		if(!valueUpgradeReportListReport["Result"].isNull())
			upgradeReportListObject.result = valueUpgradeReportListReport["Result"].asString();
		if(!valueUpgradeReportListReport["EffectiveTime"].isNull())
			upgradeReportListObject.effectiveTime = valueUpgradeReportListReport["EffectiveTime"].asString();
		if(!valueUpgradeReportListReport["StartTime"].isNull())
			upgradeReportListObject.startTime = valueUpgradeReportListReport["StartTime"].asString();
		if(!valueUpgradeReportListReport["EndTime"].isNull())
			upgradeReportListObject.endTime = valueUpgradeReportListReport["EndTime"].asString();
		upgradeReportList_.push_back(upgradeReportListObject);
	}
	auto allItemsNode = value["Items"]["SQLReport"];
	for (auto valueItemsSQLReport : allItemsNode)
	{
		SQLReport itemsObject;
		if(!valueItemsSQLReport["Schema"].isNull())
			itemsObject.schema = valueItemsSQLReport["Schema"].asString();
		if(!valueItemsSQLReport["Type"].isNull())
			itemsObject.type = valueItemsSQLReport["Type"].asString();
		if(!valueItemsSQLReport["Name"].isNull())
			itemsObject.name = valueItemsSQLReport["Name"].asString();
		if(!valueItemsSQLReport["Status"].isNull())
			itemsObject.status = valueItemsSQLReport["Status"].asString();
		if(!valueItemsSQLReport["DDL"].isNull())
			itemsObject.dDL = valueItemsSQLReport["DDL"].asString();
		items_.push_back(itemsObject);
	}
	if(!value["SourceDBClusterId"].isNull())
		sourceDBClusterId_ = value["SourceDBClusterId"].asString();
	if(!value["TotalSize"].isNull())
		totalSize_ = std::stol(value["TotalSize"].asString());
	if(!value["ItemsSize"].isNull())
		itemsSize_ = std::stol(value["ItemsSize"].asString());
	if(!value["Details"].isNull())
		details_ = value["Details"].asString();
	if(!value["SrcDBType"].isNull())
		srcDBType_ = value["SrcDBType"].asString();
	if(!value["DstDBType"].isNull())
		dstDBType_ = value["DstDBType"].asString();
	if(!value["SrcDeleted"].isNull())
		srcDeleted_ = value["SrcDeleted"].asString();
	if(!value["Type"].isNull())
		type_ = value["Type"].asString();

}

std::string DescribeUpgradeReportResult::getSourceDBClusterId()const
{
	return sourceDBClusterId_;
}

std::string DescribeUpgradeReportResult::getType()const
{
	return type_;
}

std::string DescribeUpgradeReportResult::getDetails()const
{
	return details_;
}

std::string DescribeUpgradeReportResult::getSrcDeleted()const
{
	return srcDeleted_;
}

std::string DescribeUpgradeReportResult::getDstDBType()const
{
	return dstDBType_;
}

std::vector<DescribeUpgradeReportResult::Report> DescribeUpgradeReportResult::getUpgradeReportList()const
{
	return upgradeReportList_;
}

std::vector<DescribeUpgradeReportResult::SQLReport> DescribeUpgradeReportResult::getItems()const
{
	return items_;
}

long DescribeUpgradeReportResult::getTotalSize()const
{
	return totalSize_;
}

long DescribeUpgradeReportResult::getItemsSize()const
{
	return itemsSize_;
}

std::string DescribeUpgradeReportResult::getSrcDBType()const
{
	return srcDBType_;
}

