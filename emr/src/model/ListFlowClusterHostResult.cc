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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allHostList = value["HostList"]["Host"];
	for (auto value : allHostList)
	{
		Host hostListObject;
		if(!value["HostId"].isNull())
			hostListObject.hostId = value["HostId"].asString();
		if(!value["HostName"].isNull())
			hostListObject.hostName = value["HostName"].asString();
		if(!value["PublicIp"].isNull())
			hostListObject.publicIp = value["PublicIp"].asString();
		if(!value["PrivateIp"].isNull())
			hostListObject.privateIp = value["PrivateIp"].asString();
		if(!value["Role"].isNull())
			hostListObject.role = value["Role"].asString();
		if(!value["InstanceType"].isNull())
			hostListObject.instanceType = value["InstanceType"].asString();
		if(!value["Cpu"].isNull())
			hostListObject.cpu = std::stoi(value["Cpu"].asString());
		if(!value["Memory"].isNull())
			hostListObject.memory = std::stoi(value["Memory"].asString());
		if(!value["Status"].isNull())
			hostListObject.status = value["Status"].asString();
		if(!value["Type"].isNull())
			hostListObject.type = value["Type"].asString();
		if(!value["HostInstanceId"].isNull())
			hostListObject.hostInstanceId = value["HostInstanceId"].asString();
		if(!value["SerialNumber"].isNull())
			hostListObject.serialNumber = value["SerialNumber"].asString();
		hostList_.push_back(hostListObject);
	}

}

std::vector<ListFlowClusterHostResult::Host> ListFlowClusterHostResult::getHostList()const
{
	return hostList_;
}

