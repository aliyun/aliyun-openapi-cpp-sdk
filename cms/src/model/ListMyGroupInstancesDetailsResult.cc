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

#include <alibabacloud/cms/model/ListMyGroupInstancesDetailsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cms;
using namespace AlibabaCloud::Cms::Model;

ListMyGroupInstancesDetailsResult::ListMyGroupInstancesDetailsResult() :
	ServiceResult()
{}

ListMyGroupInstancesDetailsResult::ListMyGroupInstancesDetailsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListMyGroupInstancesDetailsResult::~ListMyGroupInstancesDetailsResult()
{}

void ListMyGroupInstancesDetailsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allResources = value["Resources"]["Resource"];
	for (auto value : allResources)
	{
		Resource resourcesObject;
		if(!value["AliUid"].isNull())
			resourcesObject.aliUid = std::stol(value["AliUid"].asString());
		if(!value["InstanceName"].isNull())
			resourcesObject.instanceName = value["InstanceName"].asString();
		if(!value["InstanceId"].isNull())
			resourcesObject.instanceId = value["InstanceId"].asString();
		if(!value["Desc"].isNull())
			resourcesObject.desc = value["Desc"].asString();
		if(!value["NetworkType"].isNull())
			resourcesObject.networkType = value["NetworkType"].asString();
		if(!value["Category"].isNull())
			resourcesObject.category = value["Category"].asString();
		auto allTags = value["Tags"]["Tag"];
		for (auto value : allTags)
		{
			Resource::Tag tagsObject;
			if(!value["Key"].isNull())
				tagsObject.key = value["Key"].asString();
			if(!value["Value"].isNull())
				tagsObject.value = value["Value"].asString();
			resourcesObject.tags.push_back(tagsObject);
		}
		auto allRegion = value["Region"];
		for (auto value : allRegion)
		{
			Resource::Region regionObject;
			if(!value["RegionId"].isNull())
				regionObject.regionId = value["RegionId"].asString();
			if(!value["AvailabilityZone"].isNull())
				regionObject.availabilityZone = value["AvailabilityZone"].asString();
			resourcesObject.region.push_back(regionObject);
		}
		auto allVpc = value["Vpc"];
		for (auto value : allVpc)
		{
			Resource::Vpc vpcObject;
			if(!value["VpcInstanceId"].isNull())
				vpcObject.vpcInstanceId = value["VpcInstanceId"].asString();
			if(!value["VswitchInstanceId"].isNull())
				vpcObject.vswitchInstanceId = value["VswitchInstanceId"].asString();
			resourcesObject.vpc.push_back(vpcObject);
		}
		resources_.push_back(resourcesObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrorCode"].isNull())
		errorCode_ = std::stoi(value["ErrorCode"].asString());
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["Total"].isNull())
		total_ = std::stoi(value["Total"].asString());

}

int ListMyGroupInstancesDetailsResult::getPageSize()const
{
	return pageSize_;
}

int ListMyGroupInstancesDetailsResult::getPageNumber()const
{
	return pageNumber_;
}

int ListMyGroupInstancesDetailsResult::getTotal()const
{
	return total_;
}

std::vector<ListMyGroupInstancesDetailsResult::Resource> ListMyGroupInstancesDetailsResult::getResources()const
{
	return resources_;
}

int ListMyGroupInstancesDetailsResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListMyGroupInstancesDetailsResult::getErrorMessage()const
{
	return errorMessage_;
}

bool ListMyGroupInstancesDetailsResult::getSuccess()const
{
	return success_;
}

