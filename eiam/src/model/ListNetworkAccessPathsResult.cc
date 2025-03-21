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

#include <alibabacloud/eiam/model/ListNetworkAccessPathsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Eiam;
using namespace AlibabaCloud::Eiam::Model;

ListNetworkAccessPathsResult::ListNetworkAccessPathsResult() :
	ServiceResult()
{}

ListNetworkAccessPathsResult::ListNetworkAccessPathsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListNetworkAccessPathsResult::~ListNetworkAccessPathsResult()
{}

void ListNetworkAccessPathsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allNetworkAccessPathsNode = value["NetworkAccessPaths"]["NetworkAccessPath"];
	for (auto valueNetworkAccessPathsNetworkAccessPath : allNetworkAccessPathsNode)
	{
		NetworkAccessPath networkAccessPathsObject;
		if(!valueNetworkAccessPathsNetworkAccessPath["InstanceId"].isNull())
			networkAccessPathsObject.instanceId = valueNetworkAccessPathsNetworkAccessPath["InstanceId"].asString();
		if(!valueNetworkAccessPathsNetworkAccessPath["NetworkAccessEndpointId"].isNull())
			networkAccessPathsObject.networkAccessEndpointId = valueNetworkAccessPathsNetworkAccessPath["NetworkAccessEndpointId"].asString();
		if(!valueNetworkAccessPathsNetworkAccessPath["NetworkAccessPathId"].isNull())
			networkAccessPathsObject.networkAccessPathId = valueNetworkAccessPathsNetworkAccessPath["NetworkAccessPathId"].asString();
		if(!valueNetworkAccessPathsNetworkAccessPath["NetworkInterfaceId"].isNull())
			networkAccessPathsObject.networkInterfaceId = valueNetworkAccessPathsNetworkAccessPath["NetworkInterfaceId"].asString();
		if(!valueNetworkAccessPathsNetworkAccessPath["VSwitchId"].isNull())
			networkAccessPathsObject.vSwitchId = valueNetworkAccessPathsNetworkAccessPath["VSwitchId"].asString();
		if(!valueNetworkAccessPathsNetworkAccessPath["PrivateIpAddress"].isNull())
			networkAccessPathsObject.privateIpAddress = valueNetworkAccessPathsNetworkAccessPath["PrivateIpAddress"].asString();
		if(!valueNetworkAccessPathsNetworkAccessPath["Status"].isNull())
			networkAccessPathsObject.status = valueNetworkAccessPathsNetworkAccessPath["Status"].asString();
		if(!valueNetworkAccessPathsNetworkAccessPath["CreateTime"].isNull())
			networkAccessPathsObject.createTime = std::stol(valueNetworkAccessPathsNetworkAccessPath["CreateTime"].asString());
		if(!valueNetworkAccessPathsNetworkAccessPath["UpdateTime"].isNull())
			networkAccessPathsObject.updateTime = std::stol(valueNetworkAccessPathsNetworkAccessPath["UpdateTime"].asString());
		networkAccessPaths_.push_back(networkAccessPathsObject);
	}

}

std::vector<ListNetworkAccessPathsResult::NetworkAccessPath> ListNetworkAccessPathsResult::getNetworkAccessPaths()const
{
	return networkAccessPaths_;
}

