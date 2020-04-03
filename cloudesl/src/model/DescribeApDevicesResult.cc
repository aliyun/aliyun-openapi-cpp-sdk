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

#include <alibabacloud/cloudesl/model/DescribeApDevicesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cloudesl;
using namespace AlibabaCloud::Cloudesl::Model;

DescribeApDevicesResult::DescribeApDevicesResult() :
	ServiceResult()
{}

DescribeApDevicesResult::DescribeApDevicesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeApDevicesResult::~DescribeApDevicesResult()
{}

void DescribeApDevicesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allApDevicesNode = value["ApDevices"]["ApInfo"];
	for (auto valueApDevicesApInfo : allApDevicesNode)
	{
		ApInfo apDevicesObject;
		if(!valueApDevicesApInfo["Mac"].isNull())
			apDevicesObject.mac = valueApDevicesApInfo["Mac"].asString();
		if(!valueApDevicesApInfo["Status"].isNull())
			apDevicesObject.status = valueApDevicesApInfo["Status"].asString() == "true";
		if(!valueApDevicesApInfo["Model"].isNull())
			apDevicesObject.model = valueApDevicesApInfo["Model"].asString();
		if(!valueApDevicesApInfo["Remark"].isNull())
			apDevicesObject.remark = valueApDevicesApInfo["Remark"].asString();
		if(!valueApDevicesApInfo["StoreId"].isNull())
			apDevicesObject.storeId = valueApDevicesApInfo["StoreId"].asString();
		if(!valueApDevicesApInfo["BeActivate"].isNull())
			apDevicesObject.beActivate = valueApDevicesApInfo["BeActivate"].asString() == "true";
		apDevices_.push_back(apDevicesObject);
	}
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["DynamicCode"].isNull())
		dynamicCode_ = value["DynamicCode"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["DynamicMessage"].isNull())
		dynamicMessage_ = value["DynamicMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());

}

int DescribeApDevicesResult::getTotalCount()const
{
	return totalCount_;
}

std::string DescribeApDevicesResult::getMessage()const
{
	return message_;
}

int DescribeApDevicesResult::getPageSize()const
{
	return pageSize_;
}

int DescribeApDevicesResult::getPageNumber()const
{
	return pageNumber_;
}

std::string DescribeApDevicesResult::getDynamicCode()const
{
	return dynamicCode_;
}

std::vector<DescribeApDevicesResult::ApInfo> DescribeApDevicesResult::getApDevices()const
{
	return apDevices_;
}

std::string DescribeApDevicesResult::getErrorCode()const
{
	return errorCode_;
}

std::string DescribeApDevicesResult::getDynamicMessage()const
{
	return dynamicMessage_;
}

std::string DescribeApDevicesResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string DescribeApDevicesResult::getCode()const
{
	return code_;
}

bool DescribeApDevicesResult::getSuccess()const
{
	return success_;
}

