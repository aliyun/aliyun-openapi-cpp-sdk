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

#include <alibabacloud/dts/model/DescribeClusterUsedUtilizationResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dts;
using namespace AlibabaCloud::Dts::Model;

DescribeClusterUsedUtilizationResult::DescribeClusterUsedUtilizationResult() :
	ServiceResult()
{}

DescribeClusterUsedUtilizationResult::DescribeClusterUsedUtilizationResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeClusterUsedUtilizationResult::~DescribeClusterUsedUtilizationResult()
{}

void DescribeClusterUsedUtilizationResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["DedicatedClusterId"].isNull())
		dedicatedClusterId_ = value["DedicatedClusterId"].asString();
	if(!value["CpuTotal"].isNull())
		cpuTotal_ = std::stof(value["CpuTotal"].asString());
	if(!value["MemoryUsed"].isNull())
		memoryUsed_ = std::stof(value["MemoryUsed"].asString());
	if(!value["MemoryTotal"].isNull())
		memoryTotal_ = std::stof(value["MemoryTotal"].asString());
	if(!value["DiskTotal"].isNull())
		diskTotal_ = std::stof(value["DiskTotal"].asString());
	if(!value["DiskUsed"].isNull())
		diskUsed_ = std::stof(value["DiskUsed"].asString());
	if(!value["DuTotal"].isNull())
		duTotal_ = std::stoi(value["DuTotal"].asString());
	if(!value["DuUsed"].isNull())
		duUsed_ = std::stoi(value["DuUsed"].asString());
	if(!value["TaskRunning"].isNull())
		taskRunning_ = std::stoi(value["TaskRunning"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["ErrCode"].isNull())
		errCode_ = value["ErrCode"].asString();
	if(!value["ErrMessage"].isNull())
		errMessage_ = value["ErrMessage"].asString();
	if(!value["DynamicMessage"].isNull())
		dynamicMessage_ = value["DynamicMessage"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["MemoryUsedPercentage"].isNull())
		memoryUsedPercentage_ = std::stof(value["MemoryUsedPercentage"].asString());

}

std::string DescribeClusterUsedUtilizationResult::getDedicatedClusterId()const
{
	return dedicatedClusterId_;
}

std::string DescribeClusterUsedUtilizationResult::getDynamicMessage()const
{
	return dynamicMessage_;
}

int DescribeClusterUsedUtilizationResult::getDuUsed()const
{
	return duUsed_;
}

std::string DescribeClusterUsedUtilizationResult::getErrMessage()const
{
	return errMessage_;
}

std::string DescribeClusterUsedUtilizationResult::getCode()const
{
	return code_;
}

bool DescribeClusterUsedUtilizationResult::getSuccess()const
{
	return success_;
}

std::string DescribeClusterUsedUtilizationResult::getErrCode()const
{
	return errCode_;
}

int DescribeClusterUsedUtilizationResult::getDuTotal()const
{
	return duTotal_;
}

float DescribeClusterUsedUtilizationResult::getDiskTotal()const
{
	return diskTotal_;
}

int DescribeClusterUsedUtilizationResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

float DescribeClusterUsedUtilizationResult::getMemoryUsedPercentage()const
{
	return memoryUsedPercentage_;
}

float DescribeClusterUsedUtilizationResult::getMemoryUsed()const
{
	return memoryUsed_;
}

int DescribeClusterUsedUtilizationResult::getTaskRunning()const
{
	return taskRunning_;
}

float DescribeClusterUsedUtilizationResult::getDiskUsed()const
{
	return diskUsed_;
}

float DescribeClusterUsedUtilizationResult::getMemoryTotal()const
{
	return memoryTotal_;
}

float DescribeClusterUsedUtilizationResult::getCpuTotal()const
{
	return cpuTotal_;
}

