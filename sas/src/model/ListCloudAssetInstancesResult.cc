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

#include <alibabacloud/sas/model/ListCloudAssetInstancesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

ListCloudAssetInstancesResult::ListCloudAssetInstancesResult() :
	ServiceResult()
{}

ListCloudAssetInstancesResult::ListCloudAssetInstancesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListCloudAssetInstancesResult::~ListCloudAssetInstancesResult()
{}

void ListCloudAssetInstancesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allInstancesNode = value["Instances"]["InstancesItem"];
	for (auto valueInstancesInstancesItem : allInstancesNode)
	{
		InstancesItem instancesObject;
		if(!valueInstancesInstancesItem["RegionId"].isNull())
			instancesObject.regionId = valueInstancesInstancesItem["RegionId"].asString();
		if(!valueInstancesInstancesItem["Vendor"].isNull())
			instancesObject.vendor = std::stoi(valueInstancesInstancesItem["Vendor"].asString());
		if(!valueInstancesInstancesItem["AssetType"].isNull())
			instancesObject.assetType = std::stoi(valueInstancesInstancesItem["AssetType"].asString());
		if(!valueInstancesInstancesItem["AssetSubType"].isNull())
			instancesObject.assetSubType = valueInstancesInstancesItem["AssetSubType"].asString();
		if(!valueInstancesInstancesItem["InstanceId"].isNull())
			instancesObject.instanceId = valueInstancesInstancesItem["InstanceId"].asString();
		if(!valueInstancesInstancesItem["InstanceName"].isNull())
			instancesObject.instanceName = valueInstancesInstancesItem["InstanceName"].asString();
		if(!valueInstancesInstancesItem["CreatedTime"].isNull())
			instancesObject.createdTime = std::stol(valueInstancesInstancesItem["CreatedTime"].asString());
		if(!valueInstancesInstancesItem["InternetIp"].isNull())
			instancesObject.internetIp = valueInstancesInstancesItem["InternetIp"].asString();
		if(!valueInstancesInstancesItem["AlarmStatus"].isNull())
			instancesObject.alarmStatus = valueInstancesInstancesItem["AlarmStatus"].asString();
		if(!valueInstancesInstancesItem["RiskStatus"].isNull())
			instancesObject.riskStatus = valueInstancesInstancesItem["RiskStatus"].asString();
		if(!valueInstancesInstancesItem["AssetTypeName"].isNull())
			instancesObject.assetTypeName = valueInstancesInstancesItem["AssetTypeName"].asString();
		if(!valueInstancesInstancesItem["AssetSubTypeName"].isNull())
			instancesObject.assetSubTypeName = valueInstancesInstancesItem["AssetSubTypeName"].asString();
		if(!valueInstancesInstancesItem["SecurityInfo"].isNull())
			instancesObject.securityInfo = valueInstancesInstancesItem["SecurityInfo"].asString();
		instances_.push_back(instancesObject);
	}
	auto pageInfoNode = value["PageInfo"];
	if(!pageInfoNode["CurrentPage"].isNull())
		pageInfo_.currentPage = std::stoi(pageInfoNode["CurrentPage"].asString());
	if(!pageInfoNode["PageSize"].isNull())
		pageInfo_.pageSize = std::stoi(pageInfoNode["PageSize"].asString());
	if(!pageInfoNode["TotalCount"].isNull())
		pageInfo_.totalCount = std::stoi(pageInfoNode["TotalCount"].asString());
	if(!pageInfoNode["Count"].isNull())
		pageInfo_.count = std::stoi(pageInfoNode["Count"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::vector<ListCloudAssetInstancesResult::InstancesItem> ListCloudAssetInstancesResult::getInstances()const
{
	return instances_;
}

ListCloudAssetInstancesResult::PageInfo ListCloudAssetInstancesResult::getPageInfo()const
{
	return pageInfo_;
}

bool ListCloudAssetInstancesResult::getSuccess()const
{
	return success_;
}

