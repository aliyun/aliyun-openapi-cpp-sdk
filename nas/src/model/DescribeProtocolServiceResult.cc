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

#include <alibabacloud/nas/model/DescribeProtocolServiceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::NAS;
using namespace AlibabaCloud::NAS::Model;

DescribeProtocolServiceResult::DescribeProtocolServiceResult() :
	ServiceResult()
{}

DescribeProtocolServiceResult::DescribeProtocolServiceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeProtocolServiceResult::~DescribeProtocolServiceResult()
{}

void DescribeProtocolServiceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allProtocolServicesNode = value["ProtocolServices"]["protocolService"];
	for (auto valueProtocolServicesprotocolService : allProtocolServicesNode)
	{
		ProtocolService protocolServicesObject;
		if(!valueProtocolServicesprotocolService["FileSystemId"].isNull())
			protocolServicesObject.fileSystemId = valueProtocolServicesprotocolService["FileSystemId"].asString();
		if(!valueProtocolServicesprotocolService["ProtocolServiceId"].isNull())
			protocolServicesObject.protocolServiceId = valueProtocolServicesprotocolService["ProtocolServiceId"].asString();
		if(!valueProtocolServicesprotocolService["ProtocolSpec"].isNull())
			protocolServicesObject.protocolSpec = valueProtocolServicesprotocolService["ProtocolSpec"].asString();
		if(!valueProtocolServicesprotocolService["ProtocolThroughput"].isNull())
			protocolServicesObject.protocolThroughput = std::stoi(valueProtocolServicesprotocolService["ProtocolThroughput"].asString());
		if(!valueProtocolServicesprotocolService["InstanceRAM"].isNull())
			protocolServicesObject.instanceRAM = std::stoi(valueProtocolServicesprotocolService["InstanceRAM"].asString());
		if(!valueProtocolServicesprotocolService["InstanceBaseThroughput"].isNull())
			protocolServicesObject.instanceBaseThroughput = std::stoi(valueProtocolServicesprotocolService["InstanceBaseThroughput"].asString());
		if(!valueProtocolServicesprotocolService["InstanceBurstThroughput"].isNull())
			protocolServicesObject.instanceBurstThroughput = std::stoi(valueProtocolServicesprotocolService["InstanceBurstThroughput"].asString());
		if(!valueProtocolServicesprotocolService["MountTargetCount"].isNull())
			protocolServicesObject.mountTargetCount = std::stoi(valueProtocolServicesprotocolService["MountTargetCount"].asString());
		if(!valueProtocolServicesprotocolService["ProtocolType"].isNull())
			protocolServicesObject.protocolType = valueProtocolServicesprotocolService["ProtocolType"].asString();
		if(!valueProtocolServicesprotocolService["Status"].isNull())
			protocolServicesObject.status = valueProtocolServicesprotocolService["Status"].asString();
		if(!valueProtocolServicesprotocolService["Description"].isNull())
			protocolServicesObject.description = valueProtocolServicesprotocolService["Description"].asString();
		if(!valueProtocolServicesprotocolService["CreateTime"].isNull())
			protocolServicesObject.createTime = valueProtocolServicesprotocolService["CreateTime"].asString();
		if(!valueProtocolServicesprotocolService["ModifyTime"].isNull())
			protocolServicesObject.modifyTime = valueProtocolServicesprotocolService["ModifyTime"].asString();
		protocolServices_.push_back(protocolServicesObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();

}

std::vector<DescribeProtocolServiceResult::ProtocolService> DescribeProtocolServiceResult::getProtocolServices()const
{
	return protocolServices_;
}

std::string DescribeProtocolServiceResult::getNextToken()const
{
	return nextToken_;
}

