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

#include <alibabacloud/dms-enterprise/model/GetPagedInstanceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dms_enterprise;
using namespace AlibabaCloud::Dms_enterprise::Model;

GetPagedInstanceResult::GetPagedInstanceResult() :
	ServiceResult()
{}

GetPagedInstanceResult::GetPagedInstanceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetPagedInstanceResult::~GetPagedInstanceResult()
{}

void GetPagedInstanceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	auto allInstanceNode = dataNode["Instance"]["instanceItem"];
	for (auto dataNodeInstanceinstanceItem : allInstanceNode)
	{
		Data::InstanceItem instanceItemObject;
		if(!dataNodeInstanceinstanceItem["BusinessTime"].isNull())
			instanceItemObject.businessTime = dataNodeInstanceinstanceItem["BusinessTime"].asString();
		if(!dataNodeInstanceinstanceItem["CheckStatus"].isNull())
			instanceItemObject.checkStatus = std::stol(dataNodeInstanceinstanceItem["CheckStatus"].asString());
		if(!dataNodeInstanceinstanceItem["DagId"].isNull())
			instanceItemObject.dagId = std::stol(dataNodeInstanceinstanceItem["DagId"].asString());
		if(!dataNodeInstanceinstanceItem["Delete"].isNull())
			instanceItemObject._delete = dataNodeInstanceinstanceItem["Delete"].asString();
		if(!dataNodeInstanceinstanceItem["EndTime"].isNull())
			instanceItemObject.endTime = dataNodeInstanceinstanceItem["EndTime"].asString();
		if(!dataNodeInstanceinstanceItem["GmtCreate"].isNull())
			instanceItemObject.gmtCreate = dataNodeInstanceinstanceItem["GmtCreate"].asString();
		if(!dataNodeInstanceinstanceItem["GmtModified"].isNull())
			instanceItemObject.gmtModified = dataNodeInstanceinstanceItem["GmtModified"].asString();
		if(!dataNodeInstanceinstanceItem["HistoryDagId"].isNull())
			instanceItemObject.historyDagId = std::stol(dataNodeInstanceinstanceItem["HistoryDagId"].asString());
		if(!dataNodeInstanceinstanceItem["Id"].isNull())
			instanceItemObject.id = std::stol(dataNodeInstanceinstanceItem["Id"].asString());
		if(!dataNodeInstanceinstanceItem["LastRunningContext"].isNull())
			instanceItemObject.lastRunningContext = dataNodeInstanceinstanceItem["LastRunningContext"].asString();
		if(!dataNodeInstanceinstanceItem["Msg"].isNull())
			instanceItemObject.msg = dataNodeInstanceinstanceItem["Msg"].asString();
		if(!dataNodeInstanceinstanceItem["Status"].isNull())
			instanceItemObject.status = std::stol(dataNodeInstanceinstanceItem["Status"].asString());
		if(!dataNodeInstanceinstanceItem["TaskType"].isNull())
			instanceItemObject.taskType = std::stol(dataNodeInstanceinstanceItem["TaskType"].asString());
		if(!dataNodeInstanceinstanceItem["TenantId"].isNull())
			instanceItemObject.tenantId = dataNodeInstanceinstanceItem["TenantId"].asString();
		if(!dataNodeInstanceinstanceItem["TriggerType"].isNull())
			instanceItemObject.triggerType = std::stol(dataNodeInstanceinstanceItem["TriggerType"].asString());
		if(!dataNodeInstanceinstanceItem["Version"].isNull())
			instanceItemObject.version = dataNodeInstanceinstanceItem["Version"].asString();
		data_.instance.push_back(instanceItemObject);
	}
	if(!value["TraceId"].isNull())
		traceId_ = value["TraceId"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["PageIndex"].isNull())
		pageIndex_ = std::stol(value["PageIndex"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stol(value["PageSize"].asString());
	if(!value["Total"].isNull())
		total_ = std::stol(value["Total"].asString());

}

long GetPagedInstanceResult::getPageSize()const
{
	return pageSize_;
}

long GetPagedInstanceResult::getTotal()const
{
	return total_;
}

std::string GetPagedInstanceResult::getTraceId()const
{
	return traceId_;
}

GetPagedInstanceResult::Data GetPagedInstanceResult::getData()const
{
	return data_;
}

std::string GetPagedInstanceResult::getErrorCode()const
{
	return errorCode_;
}

long GetPagedInstanceResult::getPageIndex()const
{
	return pageIndex_;
}

std::string GetPagedInstanceResult::getErrorMessage()const
{
	return errorMessage_;
}

bool GetPagedInstanceResult::getSuccess()const
{
	return success_;
}

