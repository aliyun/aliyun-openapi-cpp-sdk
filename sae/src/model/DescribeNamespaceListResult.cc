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

#include <alibabacloud/sae/model/DescribeNamespaceListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sae;
using namespace AlibabaCloud::Sae::Model;

DescribeNamespaceListResult::DescribeNamespaceListResult() :
	ServiceResult()
{}

DescribeNamespaceListResult::DescribeNamespaceListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeNamespaceListResult::~DescribeNamespaceListResult()
{}

void DescribeNamespaceListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["RegionList"];
	for (auto valueDataRegionList : allDataNode)
	{
		RegionList dataObject;
		if(!valueDataRegionList["VpcId"].isNull())
			dataObject.vpcId = valueDataRegionList["VpcId"].asString();
		if(!valueDataRegionList["VSwitchId"].isNull())
			dataObject.vSwitchId = valueDataRegionList["VSwitchId"].asString();
		if(!valueDataRegionList["Custom"].isNull())
			dataObject.custom = valueDataRegionList["Custom"].asString() == "true";
		if(!valueDataRegionList["AgentInstall"].isNull())
			dataObject.agentInstall = valueDataRegionList["AgentInstall"].asString();
		if(!valueDataRegionList["NamespaceId"].isNull())
			dataObject.namespaceId = valueDataRegionList["NamespaceId"].asString();
		if(!valueDataRegionList["HybridCloudEnable"].isNull())
			dataObject.hybridCloudEnable = valueDataRegionList["HybridCloudEnable"].asString() == "true";
		if(!valueDataRegionList["SecurityGroupId"].isNull())
			dataObject.securityGroupId = valueDataRegionList["SecurityGroupId"].asString();
		if(!valueDataRegionList["Current"].isNull())
			dataObject.current = valueDataRegionList["Current"].asString() == "true";
		if(!valueDataRegionList["NamespaceName"].isNull())
			dataObject.namespaceName = valueDataRegionList["NamespaceName"].asString();
		if(!valueDataRegionList["RegionId"].isNull())
			dataObject.regionId = valueDataRegionList["RegionId"].asString();
		if(!valueDataRegionList["NameSpaceShortId"].isNull())
			dataObject.nameSpaceShortId = valueDataRegionList["NameSpaceShortId"].asString();
		data_.push_back(dataObject);
	}
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["TraceId"].isNull())
		traceId_ = value["TraceId"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string DescribeNamespaceListResult::getMessage()const
{
	return message_;
}

std::string DescribeNamespaceListResult::getTraceId()const
{
	return traceId_;
}

std::vector<DescribeNamespaceListResult::RegionList> DescribeNamespaceListResult::getData()const
{
	return data_;
}

std::string DescribeNamespaceListResult::getErrorCode()const
{
	return errorCode_;
}

std::string DescribeNamespaceListResult::getCode()const
{
	return code_;
}

bool DescribeNamespaceListResult::getSuccess()const
{
	return success_;
}

