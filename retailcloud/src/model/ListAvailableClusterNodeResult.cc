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

#include <alibabacloud/retailcloud/model/ListAvailableClusterNodeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Retailcloud;
using namespace AlibabaCloud::Retailcloud::Model;

ListAvailableClusterNodeResult::ListAvailableClusterNodeResult() :
	ServiceResult()
{}

ListAvailableClusterNodeResult::ListAvailableClusterNodeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListAvailableClusterNodeResult::~ListAvailableClusterNodeResult()
{}

void ListAvailableClusterNodeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["ClusterNodeInfo"];
	for (auto valueDataClusterNodeInfo : allDataNode)
	{
		ClusterNodeInfo dataObject;
		if(!valueDataClusterNodeInfo["OSName"].isNull())
			dataObject.oSName = valueDataClusterNodeInfo["OSName"].asString();
		if(!valueDataClusterNodeInfo["BusinessCode"].isNull())
			dataObject.businessCode = valueDataClusterNodeInfo["BusinessCode"].asString();
		if(!valueDataClusterNodeInfo["EcsConfiguration"].isNull())
			dataObject.ecsConfiguration = valueDataClusterNodeInfo["EcsConfiguration"].asString();
		if(!valueDataClusterNodeInfo["EcsCpu"].isNull())
			dataObject.ecsCpu = valueDataClusterNodeInfo["EcsCpu"].asString();
		if(!valueDataClusterNodeInfo["EcsEip"].isNull())
			dataObject.ecsEip = valueDataClusterNodeInfo["EcsEip"].asString();
		if(!valueDataClusterNodeInfo["EcsExpiredTime"].isNull())
			dataObject.ecsExpiredTime = valueDataClusterNodeInfo["EcsExpiredTime"].asString();
		if(!valueDataClusterNodeInfo["EcsLocalStorageCapacity"].isNull())
			dataObject.ecsLocalStorageCapacity = valueDataClusterNodeInfo["EcsLocalStorageCapacity"].asString();
		if(!valueDataClusterNodeInfo["EcsMemory"].isNull())
			dataObject.ecsMemory = valueDataClusterNodeInfo["EcsMemory"].asString();
		if(!valueDataClusterNodeInfo["EcsOsType"].isNull())
			dataObject.ecsOsType = valueDataClusterNodeInfo["EcsOsType"].asString();
		if(!valueDataClusterNodeInfo["EcsPrivateIp"].isNull())
			dataObject.ecsPrivateIp = valueDataClusterNodeInfo["EcsPrivateIp"].asString();
		if(!valueDataClusterNodeInfo["EcsPublicIp"].isNull())
			dataObject.ecsPublicIp = valueDataClusterNodeInfo["EcsPublicIp"].asString();
		if(!valueDataClusterNodeInfo["EcsZone"].isNull())
			dataObject.ecsZone = valueDataClusterNodeInfo["EcsZone"].asString();
		if(!valueDataClusterNodeInfo["InstanceId"].isNull())
			dataObject.instanceId = valueDataClusterNodeInfo["InstanceId"].asString();
		if(!valueDataClusterNodeInfo["InstanceName"].isNull())
			dataObject.instanceName = valueDataClusterNodeInfo["InstanceName"].asString();
		if(!valueDataClusterNodeInfo["InstanceNetworkType"].isNull())
			dataObject.instanceNetworkType = valueDataClusterNodeInfo["InstanceNetworkType"].asString();
		if(!valueDataClusterNodeInfo["InstanceType"].isNull())
			dataObject.instanceType = valueDataClusterNodeInfo["InstanceType"].asString();
		if(!valueDataClusterNodeInfo["InternetMaxBandwidthIn"].isNull())
			dataObject.internetMaxBandwidthIn = valueDataClusterNodeInfo["InternetMaxBandwidthIn"].asString();
		if(!valueDataClusterNodeInfo["InternetMaxBandwidthOut"].isNull())
			dataObject.internetMaxBandwidthOut = valueDataClusterNodeInfo["InternetMaxBandwidthOut"].asString();
		if(!valueDataClusterNodeInfo["RegionId"].isNull())
			dataObject.regionId = valueDataClusterNodeInfo["RegionId"].asString();
		if(!valueDataClusterNodeInfo["VpcId"].isNull())
			dataObject.vpcId = valueDataClusterNodeInfo["VpcId"].asString();
		data_.push_back(dataObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["ErrorMsg"].isNull())
		errorMsg_ = value["ErrorMsg"].asString();
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());

}

long ListAvailableClusterNodeResult::getTotalCount()const
{
	return totalCount_;
}

int ListAvailableClusterNodeResult::getPageSize()const
{
	return pageSize_;
}

int ListAvailableClusterNodeResult::getPageNumber()const
{
	return pageNumber_;
}

std::string ListAvailableClusterNodeResult::getErrorMsg()const
{
	return errorMsg_;
}

std::vector<ListAvailableClusterNodeResult::ClusterNodeInfo> ListAvailableClusterNodeResult::getData()const
{
	return data_;
}

int ListAvailableClusterNodeResult::getCode()const
{
	return code_;
}

