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

#include <alibabacloud/retailcloud/model/ListClusterResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Retailcloud;
using namespace AlibabaCloud::Retailcloud::Model;

ListClusterResult::ListClusterResult() :
	ServiceResult()
{}

ListClusterResult::ListClusterResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListClusterResult::~ListClusterResult()
{}

void ListClusterResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["ClusterInfo"];
	for (auto valueDataClusterInfo : allDataNode)
	{
		ClusterInfo dataObject;
		if(!valueDataClusterInfo["BusinessCode"].isNull())
			dataObject.businessCode = valueDataClusterInfo["BusinessCode"].asString();
		if(!valueDataClusterInfo["ClusterTitle"].isNull())
			dataObject.clusterTitle = valueDataClusterInfo["ClusterTitle"].asString();
		if(!valueDataClusterInfo["CreateStatus"].isNull())
			dataObject.createStatus = valueDataClusterInfo["CreateStatus"].asString();
		if(!valueDataClusterInfo["EnvType"].isNull())
			dataObject.envType = valueDataClusterInfo["EnvType"].asString();
		if(!valueDataClusterInfo["Id"].isNull())
			dataObject.id = std::stol(valueDataClusterInfo["Id"].asString());
		if(!valueDataClusterInfo["InstanceId"].isNull())
			dataObject.instanceId = valueDataClusterInfo["InstanceId"].asString();
		if(!valueDataClusterInfo["KeyPair"].isNull())
			dataObject.keyPair = valueDataClusterInfo["KeyPair"].asString();
		if(!valueDataClusterInfo["NetPlug"].isNull())
			dataObject.netPlug = valueDataClusterInfo["NetPlug"].asString();
		if(!valueDataClusterInfo["Password"].isNull())
			dataObject.password = valueDataClusterInfo["Password"].asString();
		if(!valueDataClusterInfo["PodCIDR"].isNull())
			dataObject.podCIDR = valueDataClusterInfo["PodCIDR"].asString();
		if(!valueDataClusterInfo["RegionId"].isNull())
			dataObject.regionId = valueDataClusterInfo["RegionId"].asString();
		if(!valueDataClusterInfo["RegionName"].isNull())
			dataObject.regionName = valueDataClusterInfo["RegionName"].asString();
		if(!valueDataClusterInfo["ServiceCIDR"].isNull())
			dataObject.serviceCIDR = valueDataClusterInfo["ServiceCIDR"].asString();
		if(!valueDataClusterInfo["Status"].isNull())
			dataObject.status = valueDataClusterInfo["Status"].asString();
		if(!valueDataClusterInfo["VpcId"].isNull())
			dataObject.vpcId = valueDataClusterInfo["VpcId"].asString();
		if(!valueDataClusterInfo["WorkLoadCpu"].isNull())
			dataObject.workLoadCpu = valueDataClusterInfo["WorkLoadCpu"].asString();
		if(!valueDataClusterInfo["WorkLoadMem"].isNull())
			dataObject.workLoadMem = valueDataClusterInfo["WorkLoadMem"].asString();
		auto allEcsIds = value["EcsIds"]["String"];
		for (auto value : allEcsIds)
			dataObject.ecsIds.push_back(value.asString());
		auto allVswitchIds = value["VswitchIds"]["String"];
		for (auto value : allVswitchIds)
			dataObject.vswitchIds.push_back(value.asString());
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

long ListClusterResult::getTotalCount()const
{
	return totalCount_;
}

int ListClusterResult::getPageSize()const
{
	return pageSize_;
}

int ListClusterResult::getPageNumber()const
{
	return pageNumber_;
}

std::string ListClusterResult::getErrorMsg()const
{
	return errorMsg_;
}

std::vector<ListClusterResult::ClusterInfo> ListClusterResult::getData()const
{
	return data_;
}

int ListClusterResult::getCode()const
{
	return code_;
}

