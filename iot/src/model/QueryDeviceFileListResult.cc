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

#include <alibabacloud/iot/model/QueryDeviceFileListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Iot;
using namespace AlibabaCloud::Iot::Model;

QueryDeviceFileListResult::QueryDeviceFileListResult() :
	ServiceResult()
{}

QueryDeviceFileListResult::QueryDeviceFileListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryDeviceFileListResult::~QueryDeviceFileListResult()
{}

void QueryDeviceFileListResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allData = value["Data"]["FileSummary"];
	for (auto value : allData)
	{
		FileSummary dataObject;
		if(!value["FileId"].isNull())
			dataObject.fileId = value["FileId"].asString();
		if(!value["Name"].isNull())
			dataObject.name = value["Name"].asString();
		if(!value["Size"].isNull())
			dataObject.size = value["Size"].asString();
		if(!value["UtcCreatedOn"].isNull())
			dataObject.utcCreatedOn = value["UtcCreatedOn"].asString();
		data_.push_back(dataObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["CurrentPage"].isNull())
		currentPage_ = std::stoi(value["CurrentPage"].asString());
	if(!value["PageCount"].isNull())
		pageCount_ = std::stoi(value["PageCount"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["Total"].isNull())
		total_ = std::stoi(value["Total"].asString());

}

int QueryDeviceFileListResult::getPageCount()const
{
	return pageCount_;
}

int QueryDeviceFileListResult::getPageSize()const
{
	return pageSize_;
}

int QueryDeviceFileListResult::getCurrentPage()const
{
	return currentPage_;
}

int QueryDeviceFileListResult::getTotal()const
{
	return total_;
}

std::vector<QueryDeviceFileListResult::FileSummary> QueryDeviceFileListResult::getData()const
{
	return data_;
}

std::string QueryDeviceFileListResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string QueryDeviceFileListResult::getCode()const
{
	return code_;
}

bool QueryDeviceFileListResult::getSuccess()const
{
	return success_;
}

