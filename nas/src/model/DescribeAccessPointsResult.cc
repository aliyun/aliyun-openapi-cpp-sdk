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

#include <alibabacloud/nas/model/DescribeAccessPointsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::NAS;
using namespace AlibabaCloud::NAS::Model;

DescribeAccessPointsResult::DescribeAccessPointsResult() :
	ServiceResult()
{}

DescribeAccessPointsResult::DescribeAccessPointsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeAccessPointsResult::~DescribeAccessPointsResult()
{}

void DescribeAccessPointsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allAccessPointsNode = value["AccessPoints"]["AccessPoint"];
	for (auto valueAccessPointsAccessPoint : allAccessPointsNode)
	{
		AccessPoint accessPointsObject;
		if(!valueAccessPointsAccessPoint["ARN"].isNull())
			accessPointsObject.aRN = valueAccessPointsAccessPoint["ARN"].asString();
		if(!valueAccessPointsAccessPoint["AccessGroup"].isNull())
			accessPointsObject.accessGroup = valueAccessPointsAccessPoint["AccessGroup"].asString();
		if(!valueAccessPointsAccessPoint["AccessPointId"].isNull())
			accessPointsObject.accessPointId = valueAccessPointsAccessPoint["AccessPointId"].asString();
		if(!valueAccessPointsAccessPoint["AccessPointName"].isNull())
			accessPointsObject.accessPointName = valueAccessPointsAccessPoint["AccessPointName"].asString();
		if(!valueAccessPointsAccessPoint["CreateTime"].isNull())
			accessPointsObject.createTime = valueAccessPointsAccessPoint["CreateTime"].asString();
		if(!valueAccessPointsAccessPoint["DomainName"].isNull())
			accessPointsObject.domainName = valueAccessPointsAccessPoint["DomainName"].asString();
		if(!valueAccessPointsAccessPoint["EnabledRam"].isNull())
			accessPointsObject.enabledRam = valueAccessPointsAccessPoint["EnabledRam"].asString() == "true";
		if(!valueAccessPointsAccessPoint["FileSystemId"].isNull())
			accessPointsObject.fileSystemId = valueAccessPointsAccessPoint["FileSystemId"].asString();
		if(!valueAccessPointsAccessPoint["ModifyTime"].isNull())
			accessPointsObject.modifyTime = valueAccessPointsAccessPoint["ModifyTime"].asString();
		if(!valueAccessPointsAccessPoint["RootPath"].isNull())
			accessPointsObject.rootPath = valueAccessPointsAccessPoint["RootPath"].asString();
		if(!valueAccessPointsAccessPoint["RootPathStatus"].isNull())
			accessPointsObject.rootPathStatus = valueAccessPointsAccessPoint["RootPathStatus"].asString();
		if(!valueAccessPointsAccessPoint["Status"].isNull())
			accessPointsObject.status = valueAccessPointsAccessPoint["Status"].asString();
		if(!valueAccessPointsAccessPoint["VSwitchId"].isNull())
			accessPointsObject.vSwitchId = valueAccessPointsAccessPoint["VSwitchId"].asString();
		if(!valueAccessPointsAccessPoint["VpcId"].isNull())
			accessPointsObject.vpcId = valueAccessPointsAccessPoint["VpcId"].asString();
		auto posixUserNode = value["PosixUser"];
		if(!posixUserNode["PosixGroupId"].isNull())
			accessPointsObject.posixUser.posixGroupId = std::stoi(posixUserNode["PosixGroupId"].asString());
		if(!posixUserNode["PosixUserId"].isNull())
			accessPointsObject.posixUser.posixUserId = std::stoi(posixUserNode["PosixUserId"].asString());
			auto allPosixSecondaryGroupIds = posixUserNode["PosixSecondaryGroupIds"]["posixSecondaryGid"];
			for (auto value : allPosixSecondaryGroupIds)
				accessPointsObject.posixUser.posixSecondaryGroupIds.push_back(value.asString());
		auto rootPathPermissionNode = value["RootPathPermission"];
		if(!rootPathPermissionNode["OwnerGroupId"].isNull())
			accessPointsObject.rootPathPermission.ownerGroupId = std::stol(rootPathPermissionNode["OwnerGroupId"].asString());
		if(!rootPathPermissionNode["OwnerUserId"].isNull())
			accessPointsObject.rootPathPermission.ownerUserId = std::stol(rootPathPermissionNode["OwnerUserId"].asString());
		if(!rootPathPermissionNode["Permission"].isNull())
			accessPointsObject.rootPathPermission.permission = rootPathPermissionNode["Permission"].asString();
		accessPoints_.push_back(accessPointsObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

std::vector<DescribeAccessPointsResult::AccessPoint> DescribeAccessPointsResult::getAccessPoints()const
{
	return accessPoints_;
}

int DescribeAccessPointsResult::getTotalCount()const
{
	return totalCount_;
}

std::string DescribeAccessPointsResult::getNextToken()const
{
	return nextToken_;
}

