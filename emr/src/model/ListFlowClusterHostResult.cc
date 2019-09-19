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

#include <alibabacloud/emr/model/ListFlowClusterHostResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

ListFlowClusterHostResult::ListFlowClusterHostResult() :
	ServiceResult()
{}

ListFlowClusterHostResult::ListFlowClusterHostResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListFlowClusterHostResult::~ListFlowClusterHostResult()
{}

void ListFlowClusterHostResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allHostListNode = value["HostList"]["Host"];
	for (auto valueHostListHost : allHostListNode)
	{
		Host hostListObject;
		if(!valueHostListHost["HostId"].isNull())
			hostListObject.hostId = valueHostListHost["HostId"].asString();
		if(!valueHostListHost["HostName"].isNull())
			hostListObject.hostName = valueHostListHost["HostName"].asString();
		if(!valueHostListHost["PublicIp"].isNull())
			hostListObject.publicIp = valueHostListHost["PublicIp"].asString();
		if(!valueHostListHost["PrivateIp"].isNull())
			hostListObject.privateIp = valueHostListHost["PrivateIp"].asString();
		if(!valueHostListHost["Role"].isNull())
			hostListObject.role = valueHostListHost["Role"].asString();
		if(!valueHostListHost["InstanceType"].isNull())
			hostListObject.instanceType = valueHostListHost["InstanceType"].asString();
		if(!valueHostListHost["Cpu"].isNull())
			hostListObject.cpu = std::stoi(valueHostListHost["Cpu"].asString());
		if(!valueHostListHost["Memory"].isNull())
			hostListObject.memory = std::stoi(valueHostListHost["Memory"].asString());
		if(!valueHostListHost["Status"].isNull())
			hostListObject.status = valueHostListHost["Status"].asString();
		if(!valueHostListHost["Type"].isNull())
			hostListObject.type = valueHostListHost["Type"].asString();
		if(!valueHostListHost["HostInstanceId"].isNull())
			hostListObject.hostInstanceId = valueHostListHost["HostInstanceId"].asString();
		if(!valueHostListHost["SerialNumber"].isNull())
			hostListObject.serialNumber = valueHostListHost["SerialNumber"].asString();
		hostList_.push_back(hostListObject);
	}

}

std::vector<ListFlowClusterHostResult::Host> ListFlowClusterHostResult::getHostList()const
{
	return hostList_;
}

