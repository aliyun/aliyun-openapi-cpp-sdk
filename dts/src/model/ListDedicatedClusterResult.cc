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

#include <alibabacloud/dts/model/ListDedicatedClusterResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dts;
using namespace AlibabaCloud::Dts::Model;

ListDedicatedClusterResult::ListDedicatedClusterResult() :
	ServiceResult()
{}

ListDedicatedClusterResult::ListDedicatedClusterResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListDedicatedClusterResult::~ListDedicatedClusterResult()
{}

void ListDedicatedClusterResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDedicatedClusterStatusListNode = value["DedicatedClusterStatusList"]["DedicatedClusterStatus"];
	for (auto valueDedicatedClusterStatusListDedicatedClusterStatus : allDedicatedClusterStatusListNode)
	{
		DedicatedClusterStatus dedicatedClusterStatusListObject;
		if(!valueDedicatedClusterStatusListDedicatedClusterStatus["DtsInstanceID"].isNull())
			dedicatedClusterStatusListObject.dtsInstanceID = valueDedicatedClusterStatusListDedicatedClusterStatus["DtsInstanceID"].asString();
		if(!valueDedicatedClusterStatusListDedicatedClusterStatus["DedicatedClusterId"].isNull())
			dedicatedClusterStatusListObject.dedicatedClusterId = valueDedicatedClusterStatusListDedicatedClusterStatus["DedicatedClusterId"].asString();
		if(!valueDedicatedClusterStatusListDedicatedClusterStatus["DedicatedClusterName"].isNull())
			dedicatedClusterStatusListObject.dedicatedClusterName = valueDedicatedClusterStatusListDedicatedClusterStatus["DedicatedClusterName"].asString();
		if(!valueDedicatedClusterStatusListDedicatedClusterStatus["Du"].isNull())
			dedicatedClusterStatusListObject.du = std::stol(valueDedicatedClusterStatusListDedicatedClusterStatus["Du"].asString());
		if(!valueDedicatedClusterStatusListDedicatedClusterStatus["OversoldDu"].isNull())
			dedicatedClusterStatusListObject.oversoldDu = std::stol(valueDedicatedClusterStatusListDedicatedClusterStatus["OversoldDu"].asString());
		if(!valueDedicatedClusterStatusListDedicatedClusterStatus["UsedDu"].isNull())
			dedicatedClusterStatusListObject.usedDu = std::stol(valueDedicatedClusterStatusListDedicatedClusterStatus["UsedDu"].asString());
		if(!valueDedicatedClusterStatusListDedicatedClusterStatus["State"].isNull())
			dedicatedClusterStatusListObject.state = valueDedicatedClusterStatusListDedicatedClusterStatus["State"].asString();
		if(!valueDedicatedClusterStatusListDedicatedClusterStatus["RegionId"].isNull())
			dedicatedClusterStatusListObject.regionId = valueDedicatedClusterStatusListDedicatedClusterStatus["RegionId"].asString();
		if(!valueDedicatedClusterStatusListDedicatedClusterStatus["GmtCreated"].isNull())
			dedicatedClusterStatusListObject.gmtCreated = std::stol(valueDedicatedClusterStatusListDedicatedClusterStatus["GmtCreated"].asString());
		if(!valueDedicatedClusterStatusListDedicatedClusterStatus["NodeCount"].isNull())
			dedicatedClusterStatusListObject.nodeCount = std::stol(valueDedicatedClusterStatusListDedicatedClusterStatus["NodeCount"].asString());
		if(!valueDedicatedClusterStatusListDedicatedClusterStatus["DuUtilization"].isNull())
			dedicatedClusterStatusListObject.duUtilization = std::stol(valueDedicatedClusterStatusListDedicatedClusterStatus["DuUtilization"].asString());
		if(!valueDedicatedClusterStatusListDedicatedClusterStatus["CpuUtilization"].isNull())
			dedicatedClusterStatusListObject.cpuUtilization = std::stol(valueDedicatedClusterStatusListDedicatedClusterStatus["CpuUtilization"].asString());
		if(!valueDedicatedClusterStatusListDedicatedClusterStatus["TotalCpuCore"].isNull())
			dedicatedClusterStatusListObject.totalCpuCore = std::stol(valueDedicatedClusterStatusListDedicatedClusterStatus["TotalCpuCore"].asString());
		if(!valueDedicatedClusterStatusListDedicatedClusterStatus["UsedCpuCore"].isNull())
			dedicatedClusterStatusListObject.usedCpuCore = std::stol(valueDedicatedClusterStatusListDedicatedClusterStatus["UsedCpuCore"].asString());
		if(!valueDedicatedClusterStatusListDedicatedClusterStatus["MemUtilization"].isNull())
			dedicatedClusterStatusListObject.memUtilization = std::stol(valueDedicatedClusterStatusListDedicatedClusterStatus["MemUtilization"].asString());
		if(!valueDedicatedClusterStatusListDedicatedClusterStatus["TotalMemGBSize"].isNull())
			dedicatedClusterStatusListObject.totalMemGBSize = std::stol(valueDedicatedClusterStatusListDedicatedClusterStatus["TotalMemGBSize"].asString());
		if(!valueDedicatedClusterStatusListDedicatedClusterStatus["UsedMemGBSize"].isNull())
			dedicatedClusterStatusListObject.usedMemGBSize = std::stol(valueDedicatedClusterStatusListDedicatedClusterStatus["UsedMemGBSize"].asString());
		if(!valueDedicatedClusterStatusListDedicatedClusterStatus["DiskUtilization"].isNull())
			dedicatedClusterStatusListObject.diskUtilization = std::stol(valueDedicatedClusterStatusListDedicatedClusterStatus["DiskUtilization"].asString());
		if(!valueDedicatedClusterStatusListDedicatedClusterStatus["TotalDiskGBSize"].isNull())
			dedicatedClusterStatusListObject.totalDiskGBSize = std::stol(valueDedicatedClusterStatusListDedicatedClusterStatus["TotalDiskGBSize"].asString());
		if(!valueDedicatedClusterStatusListDedicatedClusterStatus["UsedDiskGBSize"].isNull())
			dedicatedClusterStatusListObject.usedDiskGBSize = std::stol(valueDedicatedClusterStatusListDedicatedClusterStatus["UsedDiskGBSize"].asString());
		dedicatedClusterStatusList_.push_back(dedicatedClusterStatusListObject);
	}
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = value["HttpStatusCode"].asString();
	if(!value["ErrCode"].isNull())
		errCode_ = value["ErrCode"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString();
	if(!value["ErrMessage"].isNull())
		errMessage_ = value["ErrMessage"].asString();
	if(!value["PageRecordCount"].isNull())
		pageRecordCount_ = std::stoi(value["PageRecordCount"].asString());
	if(!value["TotalRecordCount"].isNull())
		totalRecordCount_ = std::stoi(value["TotalRecordCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());

}

int ListDedicatedClusterResult::getTotalRecordCount()const
{
	return totalRecordCount_;
}

int ListDedicatedClusterResult::getPageRecordCount()const
{
	return pageRecordCount_;
}

int ListDedicatedClusterResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<ListDedicatedClusterResult::DedicatedClusterStatus> ListDedicatedClusterResult::getDedicatedClusterStatusList()const
{
	return dedicatedClusterStatusList_;
}

std::string ListDedicatedClusterResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string ListDedicatedClusterResult::getErrMessage()const
{
	return errMessage_;
}

std::string ListDedicatedClusterResult::getSuccess()const
{
	return success_;
}

std::string ListDedicatedClusterResult::getErrCode()const
{
	return errCode_;
}

