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

#include <alibabacloud/cms/model/NodeListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cms;
using namespace AlibabaCloud::Cms::Model;

NodeListResult::NodeListResult() :
	ServiceResult()
{}

NodeListResult::NodeListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

NodeListResult::~NodeListResult()
{}

void NodeListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allNodesNode = value["Nodes"]["Node"];
	for (auto valueNodesNode : allNodesNode)
	{
		Node nodesObject;
		if(!valueNodesNode["InstanceId"].isNull())
			nodesObject.instanceId = valueNodesNode["InstanceId"].asString();
		if(!valueNodesNode["SerialNumber"].isNull())
			nodesObject.serialNumber = valueNodesNode["SerialNumber"].asString();
		if(!valueNodesNode["HostName"].isNull())
			nodesObject.hostName = valueNodesNode["HostName"].asString();
		if(!valueNodesNode["AliUid"].isNull())
			nodesObject.aliUid = std::stol(valueNodesNode["AliUid"].asString());
		if(!valueNodesNode["OperatingSystem"].isNull())
			nodesObject.operatingSystem = valueNodesNode["OperatingSystem"].asString();
		if(!valueNodesNode["IpGroup"].isNull())
			nodesObject.ipGroup = valueNodesNode["IpGroup"].asString();
		if(!valueNodesNode["Region"].isNull())
			nodesObject.region = valueNodesNode["Region"].asString();
		if(!valueNodesNode["TianjimonVersion"].isNull())
			nodesObject.tianjimonVersion = valueNodesNode["TianjimonVersion"].asString();
		if(!valueNodesNode["EipAddress"].isNull())
			nodesObject.eipAddress = valueNodesNode["EipAddress"].asString();
		if(!valueNodesNode["EipId"].isNull())
			nodesObject.eipId = valueNodesNode["EipId"].asString();
		if(!valueNodesNode["AliyunHost"].isNull())
			nodesObject.aliyunHost = valueNodesNode["AliyunHost"].asString() == "true";
		if(!valueNodesNode["NatIp"].isNull())
			nodesObject.natIp = valueNodesNode["NatIp"].asString();
		if(!valueNodesNode["NetworkType"].isNull())
			nodesObject.networkType = valueNodesNode["NetworkType"].asString();
		if(!valueNodesNode["InstanceTypeFamily"].isNull())
			nodesObject.instanceTypeFamily = valueNodesNode["InstanceTypeFamily"].asString();
		nodes_.push_back(nodesObject);
	}
	if(!value["ErrorCode"].isNull())
		errorCode_ = std::stoi(value["ErrorCode"].asString());
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageTotal"].isNull())
		pageTotal_ = std::stoi(value["PageTotal"].asString());
	if(!value["Total"].isNull())
		total_ = std::stoi(value["Total"].asString());

}

int NodeListResult::getPageSize()const
{
	return pageSize_;
}

int NodeListResult::getPageNumber()const
{
	return pageNumber_;
}

int NodeListResult::getPageTotal()const
{
	return pageTotal_;
}

int NodeListResult::getTotal()const
{
	return total_;
}

int NodeListResult::getErrorCode()const
{
	return errorCode_;
}

std::string NodeListResult::getErrorMessage()const
{
	return errorMessage_;
}

std::vector<NodeListResult::Node> NodeListResult::getNodes()const
{
	return nodes_;
}

bool NodeListResult::getSuccess()const
{
	return success_;
}

