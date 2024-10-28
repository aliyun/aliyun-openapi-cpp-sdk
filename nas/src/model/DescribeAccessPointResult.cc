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

#include <alibabacloud/nas/model/DescribeAccessPointResult.h>
#include <json/json.h>

using namespace AlibabaCloud::NAS;
using namespace AlibabaCloud::NAS::Model;

DescribeAccessPointResult::DescribeAccessPointResult() :
	ServiceResult()
{}

DescribeAccessPointResult::DescribeAccessPointResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeAccessPointResult::~DescribeAccessPointResult()
{}

void DescribeAccessPointResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto accessPointNode = value["AccessPoint"];
	if(!accessPointNode["ARN"].isNull())
		accessPoint_.aRN = accessPointNode["ARN"].asString();
	if(!accessPointNode["AccessGroup"].isNull())
		accessPoint_.accessGroup = accessPointNode["AccessGroup"].asString();
	if(!accessPointNode["AccessPointId"].isNull())
		accessPoint_.accessPointId = accessPointNode["AccessPointId"].asString();
	if(!accessPointNode["AccessPointName"].isNull())
		accessPoint_.accessPointName = accessPointNode["AccessPointName"].asString();
	if(!accessPointNode["CreateTime"].isNull())
		accessPoint_.createTime = accessPointNode["CreateTime"].asString();
	if(!accessPointNode["DomainName"].isNull())
		accessPoint_.domainName = accessPointNode["DomainName"].asString();
	if(!accessPointNode["EnabledRam"].isNull())
		accessPoint_.enabledRam = accessPointNode["EnabledRam"].asString() == "true";
	if(!accessPointNode["FileSystemId"].isNull())
		accessPoint_.fileSystemId = accessPointNode["FileSystemId"].asString();
	if(!accessPointNode["ModifyTime"].isNull())
		accessPoint_.modifyTime = accessPointNode["ModifyTime"].asString();
	if(!accessPointNode["RootPath"].isNull())
		accessPoint_.rootPath = accessPointNode["RootPath"].asString();
	if(!accessPointNode["RootPathStatus"].isNull())
		accessPoint_.rootPathStatus = accessPointNode["RootPathStatus"].asString();
	if(!accessPointNode["Status"].isNull())
		accessPoint_.status = accessPointNode["Status"].asString();
	if(!accessPointNode["VSwitchId"].isNull())
		accessPoint_.vSwitchId = accessPointNode["VSwitchId"].asString();
	if(!accessPointNode["VpcId"].isNull())
		accessPoint_.vpcId = accessPointNode["VpcId"].asString();
	if(!accessPointNode["RegionId"].isNull())
		accessPoint_.regionId = accessPointNode["RegionId"].asString();
	auto allTagsNode = accessPointNode["Tags"]["Tag"];
	for (auto accessPointNodeTagsTag : allTagsNode)
	{
		AccessPoint::Tag tagObject;
		if(!accessPointNodeTagsTag["Key"].isNull())
			tagObject.key = accessPointNodeTagsTag["Key"].asString();
		if(!accessPointNodeTagsTag["Value"].isNull())
			tagObject.value = accessPointNodeTagsTag["Value"].asString();
		accessPoint_.tags.push_back(tagObject);
	}
	auto rootPathPermissionNode = accessPointNode["RootPathPermission"];
	if(!rootPathPermissionNode["OwnerGroupId"].isNull())
		accessPoint_.rootPathPermission.ownerGroupId = std::stoi(rootPathPermissionNode["OwnerGroupId"].asString());
	if(!rootPathPermissionNode["OwnerUserId"].isNull())
		accessPoint_.rootPathPermission.ownerUserId = std::stoi(rootPathPermissionNode["OwnerUserId"].asString());
	if(!rootPathPermissionNode["Permission"].isNull())
		accessPoint_.rootPathPermission.permission = rootPathPermissionNode["Permission"].asString();
	auto posixUserNode = accessPointNode["PosixUser"];
	if(!posixUserNode["PosixGroupId"].isNull())
		accessPoint_.posixUser.posixGroupId = std::stoi(posixUserNode["PosixGroupId"].asString());
	if(!posixUserNode["PosixUserId"].isNull())
		accessPoint_.posixUser.posixUserId = std::stoi(posixUserNode["PosixUserId"].asString());
		auto allPosixSecondaryGroupIds = posixUserNode["PosixSecondaryGroupIds"]["posixSecondaryGid"];
		for (auto value : allPosixSecondaryGroupIds)
			accessPoint_.posixUser.posixSecondaryGroupIds.push_back(value.asString());

}

DescribeAccessPointResult::AccessPoint DescribeAccessPointResult::getAccessPoint()const
{
	return accessPoint_;
}

