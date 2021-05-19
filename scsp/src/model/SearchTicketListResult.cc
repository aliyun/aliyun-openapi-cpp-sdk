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

#include <alibabacloud/scsp/model/SearchTicketListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Scsp;
using namespace AlibabaCloud::Scsp::Model;

SearchTicketListResult::SearchTicketListResult() :
	ServiceResult()
{}

SearchTicketListResult::SearchTicketListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

SearchTicketListResult::~SearchTicketListResult()
{}

void SearchTicketListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["DataItem"];
	for (auto valueDataDataItem : allDataNode)
	{
		DataItem dataObject;
		if(!valueDataDataItem["MemberName"].isNull())
			dataObject.memberName = valueDataDataItem["MemberName"].asString();
		if(!valueDataDataItem["CarbonCopy"].isNull())
			dataObject.carbonCopy = valueDataDataItem["CarbonCopy"].asString();
		if(!valueDataDataItem["CreateTime"].isNull())
			dataObject.createTime = std::stol(valueDataDataItem["CreateTime"].asString());
		if(!valueDataDataItem["ServiceId"].isNull())
			dataObject.serviceId = std::stol(valueDataDataItem["ServiceId"].asString());
		if(!valueDataDataItem["TicketId"].isNull())
			dataObject.ticketId = std::stol(valueDataDataItem["TicketId"].asString());
		if(!valueDataDataItem["Priority"].isNull())
			dataObject.priority = std::stoi(valueDataDataItem["Priority"].asString());
		if(!valueDataDataItem["CreatorId"].isNull())
			dataObject.creatorId = std::stol(valueDataDataItem["CreatorId"].asString());
		if(!valueDataDataItem["FormData"].isNull())
			dataObject.formData = valueDataDataItem["FormData"].asString();
		if(!valueDataDataItem["FromInfo"].isNull())
			dataObject.fromInfo = valueDataDataItem["FromInfo"].asString();
		if(!valueDataDataItem["ModifiedTime"].isNull())
			dataObject.modifiedTime = std::stol(valueDataDataItem["ModifiedTime"].asString());
		if(!valueDataDataItem["TaskStatus"].isNull())
			dataObject.taskStatus = valueDataDataItem["TaskStatus"].asString();
		if(!valueDataDataItem["CreatorName"].isNull())
			dataObject.creatorName = valueDataDataItem["CreatorName"].asString();
		if(!valueDataDataItem["CategoryId"].isNull())
			dataObject.categoryId = std::stol(valueDataDataItem["CategoryId"].asString());
		if(!valueDataDataItem["CreatorType"].isNull())
			dataObject.creatorType = std::stoi(valueDataDataItem["CreatorType"].asString());
		if(!valueDataDataItem["MemberId"].isNull())
			dataObject.memberId = std::stol(valueDataDataItem["MemberId"].asString());
		if(!valueDataDataItem["CaseStatus"].isNull())
			dataObject.caseStatus = std::stoi(valueDataDataItem["CaseStatus"].asString());
		if(!valueDataDataItem["TemplateId"].isNull())
			dataObject.templateId = std::stol(valueDataDataItem["TemplateId"].asString());
		data_.push_back(dataObject);
	}
	if(!value["OnePageSize"].isNull())
		onePageSize_ = std::stoi(value["OnePageSize"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["TotalPage"].isNull())
		totalPage_ = std::stoi(value["TotalPage"].asString());
	if(!value["TotalResults"].isNull())
		totalResults_ = std::stoi(value["TotalResults"].asString());
	if(!value["PageNo"].isNull())
		pageNo_ = std::stoi(value["PageNo"].asString());
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

int SearchTicketListResult::getOnePageSize()const
{
	return onePageSize_;
}

std::string SearchTicketListResult::getMessage()const
{
	return message_;
}

int SearchTicketListResult::getTotalPage()const
{
	return totalPage_;
}

int SearchTicketListResult::getTotalResults()const
{
	return totalResults_;
}

std::vector<SearchTicketListResult::DataItem> SearchTicketListResult::getData()const
{
	return data_;
}

int SearchTicketListResult::getPageNo()const
{
	return pageNo_;
}

std::string SearchTicketListResult::getCode()const
{
	return code_;
}

bool SearchTicketListResult::getSuccess()const
{
	return success_;
}

