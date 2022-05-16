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

#include <alibabacloud/sae/model/DescribeApplicationGroupsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sae;
using namespace AlibabaCloud::Sae::Model;

DescribeApplicationGroupsResult::DescribeApplicationGroupsResult() :
	ServiceResult()
{}

DescribeApplicationGroupsResult::DescribeApplicationGroupsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeApplicationGroupsResult::~DescribeApplicationGroupsResult()
{}

void DescribeApplicationGroupsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["ApplicationGroup"];
	for (auto valueDataApplicationGroup : allDataNode)
	{
		ApplicationGroup dataObject;
		if(!valueDataApplicationGroup["Jdk"].isNull())
			dataObject.jdk = valueDataApplicationGroup["Jdk"].asString();
		if(!valueDataApplicationGroup["ImageUrl"].isNull())
			dataObject.imageUrl = valueDataApplicationGroup["ImageUrl"].asString();
		if(!valueDataApplicationGroup["PackageUrl"].isNull())
			dataObject.packageUrl = valueDataApplicationGroup["PackageUrl"].asString();
		if(!valueDataApplicationGroup["PackageType"].isNull())
			dataObject.packageType = valueDataApplicationGroup["PackageType"].asString();
		if(!valueDataApplicationGroup["PackageVersion"].isNull())
			dataObject.packageVersion = valueDataApplicationGroup["PackageVersion"].asString();
		if(!valueDataApplicationGroup["GroupName"].isNull())
			dataObject.groupName = valueDataApplicationGroup["GroupName"].asString();
		if(!valueDataApplicationGroup["GroupId"].isNull())
			dataObject.groupId = valueDataApplicationGroup["GroupId"].asString();
		if(!valueDataApplicationGroup["WebContainer"].isNull())
			dataObject.webContainer = valueDataApplicationGroup["WebContainer"].asString();
		if(!valueDataApplicationGroup["Replicas"].isNull())
			dataObject.replicas = std::stoi(valueDataApplicationGroup["Replicas"].asString());
		if(!valueDataApplicationGroup["EdasContainerVersion"].isNull())
			dataObject.edasContainerVersion = valueDataApplicationGroup["EdasContainerVersion"].asString();
		if(!valueDataApplicationGroup["RunningInstances"].isNull())
			dataObject.runningInstances = std::stoi(valueDataApplicationGroup["RunningInstances"].asString());
		if(!valueDataApplicationGroup["GroupType"].isNull())
			dataObject.groupType = std::stoi(valueDataApplicationGroup["GroupType"].asString());
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

std::string DescribeApplicationGroupsResult::getMessage()const
{
	return message_;
}

std::string DescribeApplicationGroupsResult::getTraceId()const
{
	return traceId_;
}

std::vector<DescribeApplicationGroupsResult::ApplicationGroup> DescribeApplicationGroupsResult::getData()const
{
	return data_;
}

std::string DescribeApplicationGroupsResult::getErrorCode()const
{
	return errorCode_;
}

std::string DescribeApplicationGroupsResult::getCode()const
{
	return code_;
}

bool DescribeApplicationGroupsResult::getSuccess()const
{
	return success_;
}

