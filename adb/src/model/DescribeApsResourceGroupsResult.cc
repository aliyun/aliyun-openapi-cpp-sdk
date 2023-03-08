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

#include <alibabacloud/adb/model/DescribeApsResourceGroupsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Adb;
using namespace AlibabaCloud::Adb::Model;

DescribeApsResourceGroupsResult::DescribeApsResourceGroupsResult() :
	ServiceResult()
{}

DescribeApsResourceGroupsResult::DescribeApsResourceGroupsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeApsResourceGroupsResult::~DescribeApsResourceGroupsResult()
{}

void DescribeApsResourceGroupsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Step"].isNull())
		data_.step = std::stol(dataNode["Step"].asString());
	auto allResourceGroupsNode = dataNode["ResourceGroups"]["validPoolsInfo"];
	for (auto dataNodeResourceGroupsvalidPoolsInfo : allResourceGroupsNode)
	{
		Data::ValidPoolsInfo validPoolsInfoObject;
		if(!dataNodeResourceGroupsvalidPoolsInfo["MaxComputeResource"].isNull())
			validPoolsInfoObject.maxComputeResource = std::stoi(dataNodeResourceGroupsvalidPoolsInfo["MaxComputeResource"].asString());
		if(!dataNodeResourceGroupsvalidPoolsInfo["MinComputeResource"].isNull())
			validPoolsInfoObject.minComputeResource = std::stoi(dataNodeResourceGroupsvalidPoolsInfo["MinComputeResource"].asString());
		if(!dataNodeResourceGroupsvalidPoolsInfo["GroupName"].isNull())
			validPoolsInfoObject.groupName = dataNodeResourceGroupsvalidPoolsInfo["GroupName"].asString();
		if(!dataNodeResourceGroupsvalidPoolsInfo["GroupType"].isNull())
			validPoolsInfoObject.groupType = dataNodeResourceGroupsvalidPoolsInfo["GroupType"].asString();
		if(!dataNodeResourceGroupsvalidPoolsInfo["Available"].isNull())
			validPoolsInfoObject.available = dataNodeResourceGroupsvalidPoolsInfo["Available"].asString() == "true";
		auto allCuOptions = value["CuOptions"]["cuOptions"];
		for (auto value : allCuOptions)
			validPoolsInfoObject.cuOptions.push_back(value.asString());
		data_.resourceGroups.push_back(validPoolsInfoObject);
	}
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stol(value["HttpStatusCode"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string DescribeApsResourceGroupsResult::getMessage()const
{
	return message_;
}

long DescribeApsResourceGroupsResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

DescribeApsResourceGroupsResult::Data DescribeApsResourceGroupsResult::getData()const
{
	return data_;
}

bool DescribeApsResourceGroupsResult::getSuccess()const
{
	return success_;
}

