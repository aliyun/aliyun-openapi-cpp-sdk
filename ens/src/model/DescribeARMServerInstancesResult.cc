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

#include <alibabacloud/ens/model/DescribeARMServerInstancesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ens;
using namespace AlibabaCloud::Ens::Model;

DescribeARMServerInstancesResult::DescribeARMServerInstancesResult() :
	ServiceResult()
{}

DescribeARMServerInstancesResult::DescribeARMServerInstancesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeARMServerInstancesResult::~DescribeARMServerInstancesResult()
{}

void DescribeARMServerInstancesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allServersNode = value["Servers"]["ServersItem"];
	for (auto valueServersServersItem : allServersNode)
	{
		ServersItem serversObject;
		if(!valueServersServersItem["CreationTime"].isNull())
			serversObject.creationTime = valueServersServersItem["CreationTime"].asString();
		if(!valueServersServersItem["ExpiredTime"].isNull())
			serversObject.expiredTime = valueServersServersItem["ExpiredTime"].asString();
		if(!valueServersServersItem["EnsRegionId"].isNull())
			serversObject.ensRegionId = valueServersServersItem["EnsRegionId"].asString();
		if(!valueServersServersItem["ServerId"].isNull())
			serversObject.serverId = valueServersServersItem["ServerId"].asString();
		if(!valueServersServersItem["SpecName"].isNull())
			serversObject.specName = valueServersServersItem["SpecName"].asString();
		if(!valueServersServersItem["State"].isNull())
			serversObject.state = valueServersServersItem["State"].asString();
		if(!valueServersServersItem["Status"].isNull())
			serversObject.status = valueServersServersItem["Status"].asString();
		if(!valueServersServersItem["Namespace"].isNull())
			serversObject._namespace = valueServersServersItem["Namespace"].asString();
		if(!valueServersServersItem["Name"].isNull())
			serversObject.name = valueServersServersItem["Name"].asString();
		if(!valueServersServersItem["PayType"].isNull())
			serversObject.payType = valueServersServersItem["PayType"].asString();
		if(!valueServersServersItem["LatestAction"].isNull())
			serversObject.latestAction = valueServersServersItem["LatestAction"].asString();
		auto allAICInstancesNode = valueServersServersItem["AICInstances"]["AICInstancesItem"];
		for (auto valueServersServersItemAICInstancesAICInstancesItem : allAICInstancesNode)
		{
			ServersItem::AICInstancesItem aICInstancesObject;
			if(!valueServersServersItemAICInstancesAICInstancesItem["Frequency"].isNull())
				aICInstancesObject.frequency = std::stol(valueServersServersItemAICInstancesAICInstancesItem["Frequency"].asString());
			if(!valueServersServersItemAICInstancesAICInstancesItem["ImageId"].isNull())
				aICInstancesObject.imageId = valueServersServersItemAICInstancesAICInstancesItem["ImageId"].asString();
			if(!valueServersServersItemAICInstancesAICInstancesItem["InstanceId"].isNull())
				aICInstancesObject.instanceId = valueServersServersItemAICInstancesAICInstancesItem["InstanceId"].asString();
			if(!valueServersServersItemAICInstancesAICInstancesItem["Resolution"].isNull())
				aICInstancesObject.resolution = valueServersServersItemAICInstancesAICInstancesItem["Resolution"].asString();
			if(!valueServersServersItemAICInstancesAICInstancesItem["Spec"].isNull())
				aICInstancesObject.spec = valueServersServersItemAICInstancesAICInstancesItem["Spec"].asString();
			if(!valueServersServersItemAICInstancesAICInstancesItem["State"].isNull())
				aICInstancesObject.state = valueServersServersItemAICInstancesAICInstancesItem["State"].asString();
			if(!valueServersServersItemAICInstancesAICInstancesItem["Status"].isNull())
				aICInstancesObject.status = valueServersServersItemAICInstancesAICInstancesItem["Status"].asString();
			if(!valueServersServersItemAICInstancesAICInstancesItem["Name"].isNull())
				aICInstancesObject.name = valueServersServersItemAICInstancesAICInstancesItem["Name"].asString();
			if(!valueServersServersItemAICInstancesAICInstancesItem["LatestAction"].isNull())
				aICInstancesObject.latestAction = valueServersServersItemAICInstancesAICInstancesItem["LatestAction"].asString();
			auto networkAttributesNode = value["NetworkAttributes"];
			if(!networkAttributesNode["IpAddress"].isNull())
				aICInstancesObject.networkAttributes.ipAddress = networkAttributesNode["IpAddress"].asString();
			if(!networkAttributesNode["NetworkId"].isNull())
				aICInstancesObject.networkAttributes.networkId = networkAttributesNode["NetworkId"].asString();
			if(!networkAttributesNode["VSwitchId"].isNull())
				aICInstancesObject.networkAttributes.vSwitchId = networkAttributesNode["VSwitchId"].asString();
			auto sdgDeployInfoNode = value["SdgDeployInfo"];
			if(!sdgDeployInfoNode["SDGId"].isNull())
				aICInstancesObject.sdgDeployInfo.sDGId = sdgDeployInfoNode["SDGId"].asString();
			if(!sdgDeployInfoNode["Status"].isNull())
				aICInstancesObject.sdgDeployInfo.status = sdgDeployInfoNode["Status"].asString();
			serversObject.aICInstances.push_back(aICInstancesObject);
		}
		servers_.push_back(serversObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeARMServerInstancesResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeARMServerInstancesResult::getPageSize()const
{
	return pageSize_;
}

int DescribeARMServerInstancesResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeARMServerInstancesResult::ServersItem> DescribeARMServerInstancesResult::getServers()const
{
	return servers_;
}

