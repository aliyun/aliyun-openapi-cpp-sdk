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

#include <alibabacloud/foas/model/GetClusterDetailsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Foas;
using namespace AlibabaCloud::Foas::Model;

GetClusterDetailsResult::GetClusterDetailsResult() :
	ServiceResult()
{}

GetClusterDetailsResult::GetClusterDetailsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetClusterDetailsResult::~GetClusterDetailsResult()
{}

void GetClusterDetailsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto detailsNode = value["Details"];
	if(!detailsNode["ClusterId"].isNull())
		details_.clusterId = detailsNode["ClusterId"].asString();
	if(!detailsNode["RegionId"].isNull())
		details_.regionId = detailsNode["RegionId"].asString();
	if(!detailsNode["ZoneId"].isNull())
		details_.zoneId = detailsNode["ZoneId"].asString();
	if(!detailsNode["State"].isNull())
		details_.state = detailsNode["State"].asString();
	if(!detailsNode["Description"].isNull())
		details_.description = detailsNode["Description"].asString();
	if(!detailsNode["DisplayName"].isNull())
		details_.displayName = detailsNode["DisplayName"].asString();
	if(!detailsNode["OwnerId"].isNull())
		details_.ownerId = detailsNode["OwnerId"].asString();
	if(!detailsNode["Operator"].isNull())
		details_._operator = detailsNode["Operator"].asString();
	if(!detailsNode["StorageType"].isNull())
		details_.storageType = detailsNode["StorageType"].asString();
	if(!detailsNode["GmtCreate"].isNull())
		details_.gmtCreate = std::stol(detailsNode["GmtCreate"].asString());
	if(!detailsNode["GmtModified"].isNull())
		details_.gmtModified = std::stol(detailsNode["GmtModified"].asString());
	if(!detailsNode["UserOssInfo"].isNull())
		details_.userOssInfo = detailsNode["UserOssInfo"].asString();
	if(!detailsNode["UserVpcId"].isNull())
		details_.userVpcId = detailsNode["UserVpcId"].asString();
	if(!detailsNode["UserSGId"].isNull())
		details_.userSGId = detailsNode["UserSGId"].asString();
	if(!detailsNode["UserVSwitchList"].isNull())
		details_.userVSwitchList = detailsNode["UserVSwitchList"].asString();
	if(!detailsNode["IsMixDeploy"].isNull())
		details_.isMixDeploy = detailsNode["IsMixDeploy"].asString() == "true";
	if(!detailsNode["InstanceInfos"].isNull())
		details_.instanceInfos = detailsNode["InstanceInfos"].asString();

}

GetClusterDetailsResult::Details GetClusterDetailsResult::getDetails()const
{
	return details_;
}

