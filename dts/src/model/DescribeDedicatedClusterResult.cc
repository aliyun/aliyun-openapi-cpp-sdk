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

#include <alibabacloud/dts/model/DescribeDedicatedClusterResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dts;
using namespace AlibabaCloud::Dts::Model;

DescribeDedicatedClusterResult::DescribeDedicatedClusterResult() :
	ServiceResult()
{}

DescribeDedicatedClusterResult::DescribeDedicatedClusterResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDedicatedClusterResult::~DescribeDedicatedClusterResult()
{}

void DescribeDedicatedClusterResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = value["HttpStatusCode"].asString();
	if(!value["ErrCode"].isNull())
		errCode_ = value["ErrCode"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString();
	if(!value["ErrMessage"].isNull())
		errMessage_ = value["ErrMessage"].asString();
	if(!value["DedicatedClusterId"].isNull())
		dedicatedClusterId_ = value["DedicatedClusterId"].asString();
	if(!value["DedicatedClusterName"].isNull())
		dedicatedClusterName_ = value["DedicatedClusterName"].asString();
	if(!value["Du"].isNull())
		du_ = std::stol(value["Du"].asString());
	if(!value["OversoldDu"].isNull())
		oversoldDu_ = std::stol(value["OversoldDu"].asString());
	if(!value["UsedDu"].isNull())
		usedDu_ = std::stol(value["UsedDu"].asString());
	if(!value["State"].isNull())
		state_ = value["State"].asString();
	if(!value["RegionId"].isNull())
		regionId_ = value["RegionId"].asString();
	if(!value["NodeCount"].isNull())
		nodeCount_ = std::stol(value["NodeCount"].asString());
	if(!value["DuUtilization"].isNull())
		duUtilization_ = std::stol(value["DuUtilization"].asString());
	if(!value["CpuUtilization"].isNull())
		cpuUtilization_ = std::stol(value["CpuUtilization"].asString());
	if(!value["TotalCpuCore"].isNull())
		totalCpuCore_ = std::stol(value["TotalCpuCore"].asString());
	if(!value["UsedCpuCore"].isNull())
		usedCpuCore_ = std::stol(value["UsedCpuCore"].asString());
	if(!value["MemUtilization"].isNull())
		memUtilization_ = std::stol(value["MemUtilization"].asString());
	if(!value["TotalMemGBSize"].isNull())
		totalMemGBSize_ = std::stol(value["TotalMemGBSize"].asString());
	if(!value["UsedMemGBSize"].isNull())
		usedMemGBSize_ = std::stol(value["UsedMemGBSize"].asString());
	if(!value["DiskUtilization"].isNull())
		diskUtilization_ = std::stol(value["DiskUtilization"].asString());
	if(!value["TotalDiskGBSize"].isNull())
		totalDiskGBSize_ = std::stol(value["TotalDiskGBSize"].asString());
	if(!value["UsedDiskGBSize"].isNull())
		usedDiskGBSize_ = std::stol(value["UsedDiskGBSize"].asString());
	if(!value["GmtCreated"].isNull())
		gmtCreated_ = std::stol(value["GmtCreated"].asString());
	if(!value["GmtFinished"].isNull())
		gmtFinished_ = std::stol(value["GmtFinished"].asString());
	if(!value["DtsInstanceID"].isNull())
		dtsInstanceID_ = value["DtsInstanceID"].asString();

}

long DescribeDedicatedClusterResult::getUsedDu()const
{
	return usedDu_;
}

long DescribeDedicatedClusterResult::getDuUtilization()const
{
	return duUtilization_;
}

long DescribeDedicatedClusterResult::getUsedDiskGBSize()const
{
	return usedDiskGBSize_;
}

long DescribeDedicatedClusterResult::getGmtCreated()const
{
	return gmtCreated_;
}

std::string DescribeDedicatedClusterResult::getDedicatedClusterName()const
{
	return dedicatedClusterName_;
}

std::string DescribeDedicatedClusterResult::getDtsInstanceID()const
{
	return dtsInstanceID_;
}

std::string DescribeDedicatedClusterResult::getSuccess()const
{
	return success_;
}

long DescribeDedicatedClusterResult::getTotalMemGBSize()const
{
	return totalMemGBSize_;
}

long DescribeDedicatedClusterResult::getMemUtilization()const
{
	return memUtilization_;
}

std::string DescribeDedicatedClusterResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

long DescribeDedicatedClusterResult::getUsedCpuCore()const
{
	return usedCpuCore_;
}

std::string DescribeDedicatedClusterResult::getDedicatedClusterId()const
{
	return dedicatedClusterId_;
}

long DescribeDedicatedClusterResult::getNodeCount()const
{
	return nodeCount_;
}

long DescribeDedicatedClusterResult::getOversoldDu()const
{
	return oversoldDu_;
}

long DescribeDedicatedClusterResult::getTotalDiskGBSize()const
{
	return totalDiskGBSize_;
}

long DescribeDedicatedClusterResult::getDiskUtilization()const
{
	return diskUtilization_;
}

long DescribeDedicatedClusterResult::getGmtFinished()const
{
	return gmtFinished_;
}

long DescribeDedicatedClusterResult::getUsedMemGBSize()const
{
	return usedMemGBSize_;
}

std::string DescribeDedicatedClusterResult::getErrMessage()const
{
	return errMessage_;
}

std::string DescribeDedicatedClusterResult::getErrCode()const
{
	return errCode_;
}

long DescribeDedicatedClusterResult::getDu()const
{
	return du_;
}

std::string DescribeDedicatedClusterResult::getState()const
{
	return state_;
}

long DescribeDedicatedClusterResult::getTotalCpuCore()const
{
	return totalCpuCore_;
}

std::string DescribeDedicatedClusterResult::getRegionId()const
{
	return regionId_;
}

long DescribeDedicatedClusterResult::getCpuUtilization()const
{
	return cpuUtilization_;
}

