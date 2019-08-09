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

#include <alibabacloud/emr/model/ListOpsOperationResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

ListOpsOperationResult::ListOpsOperationResult() :
	ServiceResult()
{}

ListOpsOperationResult::ListOpsOperationResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListOpsOperationResult::~ListOpsOperationResult()
{}

void ListOpsOperationResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allOpsOperationList = value["OpsOperationList"]["OpsOperationListItem"];
	for (auto value : allOpsOperationList)
	{
		OpsOperationListItem opsOperationListObject;
		if(!value["Id"].isNull())
			opsOperationListObject.id = std::stol(value["Id"].asString());
		if(!value["StartTime"].isNull())
			opsOperationListObject.startTime = value["StartTime"].asString();
		if(!value["EndTime"].isNull())
			opsOperationListObject.endTime = value["EndTime"].asString();
		if(!value["OpsCommandId"].isNull())
			opsOperationListObject.opsCommandId = std::stol(value["OpsCommandId"].asString());
		if(!value["OpsCommandName"].isNull())
			opsOperationListObject.opsCommandName = value["OpsCommandName"].asString();
		if(!value["Status"].isNull())
			opsOperationListObject.status = value["Status"].asString();
		if(!value["TotalTaskNum"].isNull())
			opsOperationListObject.totalTaskNum = std::stol(value["TotalTaskNum"].asString());
		if(!value["FailedTaskNum"].isNull())
			opsOperationListObject.failedTaskNum = std::stol(value["FailedTaskNum"].asString());
		if(!value["FinishedTaskNum"].isNull())
			opsOperationListObject.finishedTaskNum = std::stol(value["FinishedTaskNum"].asString());
		if(!value["ClusterId"].isNull())
			opsOperationListObject.clusterId = value["ClusterId"].asString();
		if(!value["RegionId"].isNull())
			opsOperationListObject.regionId = value["RegionId"].asString();
		if(!value["Params"].isNull())
			opsOperationListObject.params = value["Params"].asString();
		if(!value["Remark"].isNull())
			opsOperationListObject.remark = value["Remark"].asString();
		if(!value["RunningTime"].isNull())
			opsOperationListObject.runningTime = std::stol(value["RunningTime"].asString());
		if(!value["Category"].isNull())
			opsOperationListObject.category = value["Category"].asString();
		opsOperationList_.push_back(opsOperationListObject);
	}
	if(!value["Total"].isNull())
		total_ = std::stoi(value["Total"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

int ListOpsOperationResult::getPageSize()const
{
	return pageSize_;
}

int ListOpsOperationResult::getPageNumber()const
{
	return pageNumber_;
}

int ListOpsOperationResult::getTotal()const
{
	return total_;
}

std::vector<ListOpsOperationResult::OpsOperationListItem> ListOpsOperationResult::getOpsOperationList()const
{
	return opsOperationList_;
}

