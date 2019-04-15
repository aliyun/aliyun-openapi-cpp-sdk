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

#include <alibabacloud/aegis/model/DescribeVulListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Aegis;
using namespace AlibabaCloud::Aegis::Model;

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
	auto allVulRecords = value["VulRecords"]["VulRecord"];
	for (auto value : allVulRecords)
	{
		VulRecord vulRecordsObject;
		if(!value["PrimaryId"].isNull())
			vulRecordsObject.primaryId = std::stol(value["PrimaryId"].asString());
		if(!value["Uuid"].isNull())
			vulRecordsObject.uuid = value["Uuid"].asString();
		if(!value["Name"].isNull())
			vulRecordsObject.name = value["Name"].asString();
		if(!value["Tag"].isNull())
			vulRecordsObject.tag = value["Tag"].asString();
		if(!value["AliasName"].isNull())
			vulRecordsObject.aliasName = value["AliasName"].asString();
		if(!value["RecordId"].isNull())
			vulRecordsObject.recordId = std::stol(value["RecordId"].asString());
		if(!value["Type"].isNull())
			vulRecordsObject.type = value["Type"].asString();
		if(!value["Level"].isNull())
			vulRecordsObject.level = value["Level"].asString();
		if(!value["Product"].isNull())
			vulRecordsObject.product = value["Product"].asString();
		if(!value["FirstTs"].isNull())
			vulRecordsObject.firstTs = std::stol(value["FirstTs"].asString());
		if(!value["LastTs"].isNull())
			vulRecordsObject.lastTs = std::stol(value["LastTs"].asString());
		if(!value["RepairTs"].isNull())
			vulRecordsObject.repairTs = std::stol(value["RepairTs"].asString());
		if(!value["Status"].isNull())
			vulRecordsObject.status = std::stoi(value["Status"].asString());
		if(!value["Related"].isNull())
			vulRecordsObject.related = value["Related"].asString();
		if(!value["ResultCode"].isNull())
			vulRecordsObject.resultCode = value["ResultCode"].asString();
		if(!value["ResultMessage"].isNull())
			vulRecordsObject.resultMessage = value["ResultMessage"].asString();
		if(!value["ModifyTs"].isNull())
			vulRecordsObject.modifyTs = std::stol(value["ModifyTs"].asString());
		if(!value["Necessity"].isNull())
			vulRecordsObject.necessity = value["Necessity"].asString();
		if(!value["GroupId"].isNull())
			vulRecordsObject.groupId = std::stoi(value["GroupId"].asString());
		if(!value["InstanceId"].isNull())
			vulRecordsObject.instanceId = value["InstanceId"].asString();
		if(!value["InstanceName"].isNull())
			vulRecordsObject.instanceName = value["InstanceName"].asString();
		if(!value["InternetIp"].isNull())
			vulRecordsObject.internetIp = value["InternetIp"].asString();
		if(!value["IntranetIp"].isNull())
			vulRecordsObject.intranetIp = value["IntranetIp"].asString();
		if(!value["Ip"].isNull())
			vulRecordsObject.ip = value["Ip"].asString();
		if(!value["OsVersion"].isNull())
			vulRecordsObject.osVersion = value["OsVersion"].asString();
		if(!value["NeedReboot"].isNull())
			vulRecordsObject.needReboot = value["NeedReboot"].asString();
		auto extendContentJsonNode = value["ExtendContentJson"];
		if(!extendContentJsonNode["Os"].isNull())
			vulRecordsObject.extendContentJson.os = extendContentJsonNode["Os"].asString();
		if(!extendContentJsonNode["OsRelease"].isNull())
			vulRecordsObject.extendContentJson.osRelease = extendContentJsonNode["OsRelease"].asString();
		if(!extendContentJsonNode["Status"].isNull())
			vulRecordsObject.extendContentJson.status = std::stoi(extendContentJsonNode["Status"].asString());
		if(!extendContentJsonNode["LastTs"].isNull())
			vulRecordsObject.extendContentJson.lastTs = std::stol(extendContentJsonNode["LastTs"].asString());
		if(!extendContentJsonNode["AliasName"].isNull())
			vulRecordsObject.extendContentJson.aliasName = extendContentJsonNode["AliasName"].asString();
		if(!extendContentJsonNode["Tag"].isNull())
			vulRecordsObject.extendContentJson.tag = extendContentJsonNode["Tag"].asString();
		if(!extendContentJsonNode["PrimaryId"].isNull())
			vulRecordsObject.extendContentJson.primaryId = std::stol(extendContentJsonNode["PrimaryId"].asString());
		if(!extendContentJsonNode["Level"].isNull())
			vulRecordsObject.extendContentJson.level = extendContentJsonNode["Level"].asString();
		if(!extendContentJsonNode["AbsolutePath"].isNull())
			vulRecordsObject.extendContentJson.absolutePath = extendContentJsonNode["AbsolutePath"].asString();
		if(!extendContentJsonNode["Target"].isNull())
			vulRecordsObject.extendContentJson.target = extendContentJsonNode["Target"].asString();
		if(!extendContentJsonNode["Proof"].isNull())
			vulRecordsObject.extendContentJson.proof = extendContentJsonNode["Proof"].asString();
		if(!extendContentJsonNode["Reason"].isNull())
			vulRecordsObject.extendContentJson.reason = extendContentJsonNode["Reason"].asString();
		auto allRpmEntityList = value["RpmEntityList"]["RpmEntityListItem"];
		for (auto value : allRpmEntityList)
		{
			VulRecord::ExtendContentJson::RpmEntityListItem rpmEntityListItemObject;
			if(!value["FullVersion"].isNull())
				rpmEntityListItemObject.fullVersion = value["FullVersion"].asString();
			if(!value["MatchDetail"].isNull())
				rpmEntityListItemObject.matchDetail = value["MatchDetail"].asString();
			if(!value["Name"].isNull())
				rpmEntityListItemObject.name = value["Name"].asString();
			if(!value["Path"].isNull())
				rpmEntityListItemObject.path = value["Path"].asString();
			if(!value["UpdateCmd"].isNull())
				rpmEntityListItemObject.updateCmd = value["UpdateCmd"].asString();
			if(!value["Version"].isNull())
				rpmEntityListItemObject.version = value["Version"].asString();
			vulRecordsObject.extendContentJson.rpmEntityList.push_back(rpmEntityListItemObject);
		}
		auto necessityNode = extendContentJsonNode["Necessity"];
		if(!necessityNode["Cvss_factor"].isNull())
			vulRecordsObject.extendContentJson.necessity.cvss_factor = necessityNode["Cvss_factor"].asString();
		if(!necessityNode["Gmt_create"].isNull())
			vulRecordsObject.extendContentJson.necessity.gmt_create = necessityNode["Gmt_create"].asString();
		if(!necessityNode["Status"].isNull())
			vulRecordsObject.extendContentJson.necessity.status = necessityNode["Status"].asString();
		if(!necessityNode["Enviroment_factor"].isNull())
			vulRecordsObject.extendContentJson.necessity.enviroment_factor = necessityNode["Enviroment_factor"].asString();
		if(!necessityNode["Assets_factor"].isNull())
			vulRecordsObject.extendContentJson.necessity.assets_factor = necessityNode["Assets_factor"].asString();
		if(!necessityNode["Is_calc"].isNull())
			vulRecordsObject.extendContentJson.necessity.is_calc = necessityNode["Is_calc"].asString();
		if(!necessityNode["Total_score"].isNull())
			vulRecordsObject.extendContentJson.necessity.total_score = necessityNode["Total_score"].asString();
		if(!necessityNode["Time_factor"].isNull())
			vulRecordsObject.extendContentJson.necessity.time_factor = necessityNode["Time_factor"].asString();
			auto allCveList = extendContentJsonNode["cveList"]["CveList"];
			for (auto value : allCveList)
				vulRecordsObject.extendContentJson.cveList.push_back(value.asString());
		vulRecords_.push_back(vulRecordsObject);
	}
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["CurrentPage"].isNull())
		currentPage_ = std::stoi(value["CurrentPage"].asString());
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

