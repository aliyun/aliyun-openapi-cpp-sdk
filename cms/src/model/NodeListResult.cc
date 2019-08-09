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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allNodes = value["Nodes"]["Node"];
	for (auto value : allNodes)
	{
		Node nodesObject;
		if(!value["InstanceId"].isNull())
			nodesObject.instanceId = value["InstanceId"].asString();
		if(!value["SerialNumber"].isNull())
			nodesObject.serialNumber = value["SerialNumber"].asString();
		if(!value["HostName"].isNull())
			nodesObject.hostName = value["HostName"].asString();
		if(!value["AliUid"].isNull())
			nodesObject.aliUid = std::stol(value["AliUid"].asString());
		if(!value["OperatingSystem"].isNull())
			nodesObject.operatingSystem = value["OperatingSystem"].asString();
		if(!value["IpGroup"].isNull())
			nodesObject.ipGroup = value["IpGroup"].asString();
		if(!value["Region"].isNull())
			nodesObject.region = value["Region"].asString();
		if(!value["TianjimonVersion"].isNull())
			nodesObject.tianjimonVersion = value["TianjimonVersion"].asString();
		if(!value["EipAddress"].isNull())
			nodesObject.eipAddress = value["EipAddress"].asString();
		if(!value["EipId"].isNull())
			nodesObject.eipId = value["EipId"].asString();
		if(!value["AliyunHost"].isNull())
			nodesObject.aliyunHost = value["AliyunHost"].asString() == "true";
		if(!value["NatIp"].isNull())
			nodesObject.natIp = value["NatIp"].asString();
		if(!value["NetworkType"].isNull())
			nodesObject.networkType = value["NetworkType"].asString();
		if(!value["InstanceTypeFamily"].isNull())
			nodesObject.instanceTypeFamily = value["InstanceTypeFamily"].asString();
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

