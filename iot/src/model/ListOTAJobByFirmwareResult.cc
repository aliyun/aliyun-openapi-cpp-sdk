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

#include <alibabacloud/iot/model/ListOTAJobByFirmwareResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Iot;
using namespace AlibabaCloud::Iot::Model;

ListOTAJobByFirmwareResult::ListOTAJobByFirmwareResult() :
	ServiceResult()
{}

ListOTAJobByFirmwareResult::ListOTAJobByFirmwareResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListOTAJobByFirmwareResult::~ListOTAJobByFirmwareResult()
{}

void ListOTAJobByFirmwareResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["SimpleOTAJobInfo"];
	for (auto valueDataSimpleOTAJobInfo : allDataNode)
	{
		SimpleOTAJobInfo dataObject;
		if(!valueDataSimpleOTAJobInfo["JobId"].isNull())
			dataObject.jobId = valueDataSimpleOTAJobInfo["JobId"].asString();
		if(!valueDataSimpleOTAJobInfo["UtcCreate"].isNull())
			dataObject.utcCreate = valueDataSimpleOTAJobInfo["UtcCreate"].asString();
		if(!valueDataSimpleOTAJobInfo["UtcModified"].isNull())
			dataObject.utcModified = valueDataSimpleOTAJobInfo["UtcModified"].asString();
		if(!valueDataSimpleOTAJobInfo["ProductKey"].isNull())
			dataObject.productKey = valueDataSimpleOTAJobInfo["ProductKey"].asString();
		if(!valueDataSimpleOTAJobInfo["FirmwareId"].isNull())
			dataObject.firmwareId = valueDataSimpleOTAJobInfo["FirmwareId"].asString();
		if(!valueDataSimpleOTAJobInfo["UtcStartTime"].isNull())
			dataObject.utcStartTime = valueDataSimpleOTAJobInfo["UtcStartTime"].asString();
		if(!valueDataSimpleOTAJobInfo["UtcEndTime"].isNull())
			dataObject.utcEndTime = valueDataSimpleOTAJobInfo["UtcEndTime"].asString();
		if(!valueDataSimpleOTAJobInfo["JobStatus"].isNull())
			dataObject.jobStatus = valueDataSimpleOTAJobInfo["JobStatus"].asString();
		if(!valueDataSimpleOTAJobInfo["JobType"].isNull())
			dataObject.jobType = valueDataSimpleOTAJobInfo["JobType"].asString();
		if(!valueDataSimpleOTAJobInfo["TargetSelection"].isNull())
			dataObject.targetSelection = valueDataSimpleOTAJobInfo["TargetSelection"].asString();
		if(!valueDataSimpleOTAJobInfo["SelectionType"].isNull())
			dataObject.selectionType = valueDataSimpleOTAJobInfo["SelectionType"].asString();
		data_.push_back(dataObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Total"].isNull())
		total_ = std::stoi(value["Total"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageCount"].isNull())
		pageCount_ = std::stoi(value["PageCount"].asString());
	if(!value["CurrentPage"].isNull())
		currentPage_ = std::stoi(value["CurrentPage"].asString());

}

int ListOTAJobByFirmwareResult::getPageSize()const
{
	return pageSize_;
}

int ListOTAJobByFirmwareResult::getPageCount()const
{
	return pageCount_;
}

int ListOTAJobByFirmwareResult::getCurrentPage()const
{
	return currentPage_;
}

int ListOTAJobByFirmwareResult::getTotal()const
{
	return total_;
}

std::vector<ListOTAJobByFirmwareResult::SimpleOTAJobInfo> ListOTAJobByFirmwareResult::getData()const
{
	return data_;
}

std::string ListOTAJobByFirmwareResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string ListOTAJobByFirmwareResult::getCode()const
{
	return code_;
}

bool ListOTAJobByFirmwareResult::getSuccess()const
{
	return success_;
}

