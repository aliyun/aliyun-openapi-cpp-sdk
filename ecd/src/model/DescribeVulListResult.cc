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

#include <alibabacloud/ecd/model/DescribeVulListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecd;
using namespace AlibabaCloud::Ecd::Model;

DescribeVulListResult::DescribeVulListResult() :
	ServiceResult()
{}

DescribeVulListResult::DescribeVulListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeVulListResult::~DescribeVulListResult()
{}

void DescribeVulListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allVulRecordsNode = value["VulRecords"]["VulRecord"];
	for (auto valueVulRecordsVulRecord : allVulRecordsNode)
	{
		VulRecord vulRecordsObject;
		if(!valueVulRecordsVulRecord["Status"].isNull())
			vulRecordsObject.status = std::stoi(valueVulRecordsVulRecord["Status"].asString());
		if(!valueVulRecordsVulRecord["Type"].isNull())
			vulRecordsObject.type = valueVulRecordsVulRecord["Type"].asString();
		if(!valueVulRecordsVulRecord["ModifyTs"].isNull())
			vulRecordsObject.modifyTs = std::stol(valueVulRecordsVulRecord["ModifyTs"].asString());
		if(!valueVulRecordsVulRecord["DesktopName"].isNull())
			vulRecordsObject.desktopName = valueVulRecordsVulRecord["DesktopName"].asString();
		if(!valueVulRecordsVulRecord["ResultCode"].isNull())
			vulRecordsObject.resultCode = valueVulRecordsVulRecord["ResultCode"].asString();
		if(!valueVulRecordsVulRecord["Tag"].isNull())
			vulRecordsObject.tag = valueVulRecordsVulRecord["Tag"].asString();
		if(!valueVulRecordsVulRecord["DesktopId"].isNull())
			vulRecordsObject.desktopId = valueVulRecordsVulRecord["DesktopId"].asString();
		if(!valueVulRecordsVulRecord["Related"].isNull())
			vulRecordsObject.related = valueVulRecordsVulRecord["Related"].asString();
		if(!valueVulRecordsVulRecord["LastTs"].isNull())
			vulRecordsObject.lastTs = std::stol(valueVulRecordsVulRecord["LastTs"].asString());
		if(!valueVulRecordsVulRecord["FirstTs"].isNull())
			vulRecordsObject.firstTs = std::stol(valueVulRecordsVulRecord["FirstTs"].asString());
		if(!valueVulRecordsVulRecord["Necessity"].isNull())
			vulRecordsObject.necessity = valueVulRecordsVulRecord["Necessity"].asString();
		if(!valueVulRecordsVulRecord["RepairTs"].isNull())
			vulRecordsObject.repairTs = std::stol(valueVulRecordsVulRecord["RepairTs"].asString());
		if(!valueVulRecordsVulRecord["Online"].isNull())
			vulRecordsObject.online = valueVulRecordsVulRecord["Online"].asString() == "true";
		if(!valueVulRecordsVulRecord["ResultMessage"].isNull())
			vulRecordsObject.resultMessage = valueVulRecordsVulRecord["ResultMessage"].asString();
		if(!valueVulRecordsVulRecord["OsVersion"].isNull())
			vulRecordsObject.osVersion = valueVulRecordsVulRecord["OsVersion"].asString();
		if(!valueVulRecordsVulRecord["AliasName"].isNull())
			vulRecordsObject.aliasName = valueVulRecordsVulRecord["AliasName"].asString();
		if(!valueVulRecordsVulRecord["Name"].isNull())
			vulRecordsObject.name = valueVulRecordsVulRecord["Name"].asString();
		if(!valueVulRecordsVulRecord["Progress"].isNull())
			vulRecordsObject.progress = std::stoi(valueVulRecordsVulRecord["Progress"].asString());
		if(!valueVulRecordsVulRecord["DesktopGroupId"].isNull())
			vulRecordsObject.desktopGroupId = valueVulRecordsVulRecord["DesktopGroupId"].asString();
		auto extendContentJsonNode = value["ExtendContentJson"];
		auto allRpmEntityListNode = extendContentJsonNode["RpmEntityList"]["RpmEntity"];
		for (auto extendContentJsonNodeRpmEntityListRpmEntity : allRpmEntityListNode)
		{
			VulRecord::ExtendContentJson::RpmEntity rpmEntityObject;
			if(!extendContentJsonNodeRpmEntityListRpmEntity["Path"].isNull())
				rpmEntityObject.path = extendContentJsonNodeRpmEntityListRpmEntity["Path"].asString();
			if(!extendContentJsonNodeRpmEntityListRpmEntity["UpdateCmd"].isNull())
				rpmEntityObject.updateCmd = extendContentJsonNodeRpmEntityListRpmEntity["UpdateCmd"].asString();
			if(!extendContentJsonNodeRpmEntityListRpmEntity["Name"].isNull())
				rpmEntityObject.name = extendContentJsonNodeRpmEntityListRpmEntity["Name"].asString();
			if(!extendContentJsonNodeRpmEntityListRpmEntity["FullVersion"].isNull())
				rpmEntityObject.fullVersion = extendContentJsonNodeRpmEntityListRpmEntity["FullVersion"].asString();
			if(!extendContentJsonNodeRpmEntityListRpmEntity["MatchDetail"].isNull())
				rpmEntityObject.matchDetail = extendContentJsonNodeRpmEntityListRpmEntity["MatchDetail"].asString();
			vulRecordsObject.extendContentJson.rpmEntityList.push_back(rpmEntityObject);
		}
		vulRecords_.push_back(vulRecordsObject);
	}
	if(!value["CurrentPage"].isNull())
		currentPage_ = std::stoi(value["CurrentPage"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeVulListResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<DescribeVulListResult::VulRecord> DescribeVulListResult::getVulRecords()const
{
	return vulRecords_;
}

int DescribeVulListResult::getPageSize()const
{
	return pageSize_;
}

int DescribeVulListResult::getCurrentPage()const
{
	return currentPage_;
}

