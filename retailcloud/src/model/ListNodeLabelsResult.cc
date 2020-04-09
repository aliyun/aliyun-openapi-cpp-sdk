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

#include <alibabacloud/retailcloud/model/ListNodeLabelsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Retailcloud;
using namespace AlibabaCloud::Retailcloud::Model;

ListNodeLabelsResult::ListNodeLabelsResult() :
	ServiceResult()
{}

ListNodeLabelsResult::ListNodeLabelsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListNodeLabelsResult::~ListNodeLabelsResult()
{}

void ListNodeLabelsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["ListNodeLabelResponse"];
	for (auto valueDataListNodeLabelResponse : allDataNode)
	{
		ListNodeLabelResponse dataObject;
		if(!valueDataListNodeLabelResponse["ClusterId"].isNull())
			dataObject.clusterId = valueDataListNodeLabelResponse["ClusterId"].asString();
		if(!valueDataListNodeLabelResponse["Id"].isNull())
			dataObject.id = std::stol(valueDataListNodeLabelResponse["Id"].asString());
		if(!valueDataListNodeLabelResponse["LabelKey"].isNull())
			dataObject.labelKey = valueDataListNodeLabelResponse["LabelKey"].asString();
		if(!valueDataListNodeLabelResponse["LabelValue"].isNull())
			dataObject.labelValue = valueDataListNodeLabelResponse["LabelValue"].asString();
		data_.push_back(dataObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["ErrorMsg"].isNull())
		errorMsg_ = value["ErrorMsg"].asString();
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());

}

long ListNodeLabelsResult::getTotalCount()const
{
	return totalCount_;
}

int ListNodeLabelsResult::getPageSize()const
{
	return pageSize_;
}

int ListNodeLabelsResult::getPageNumber()const
{
	return pageNumber_;
}

std::string ListNodeLabelsResult::getErrorMsg()const
{
	return errorMsg_;
}

std::vector<ListNodeLabelsResult::ListNodeLabelResponse> ListNodeLabelsResult::getData()const
{
	return data_;
}

int ListNodeLabelsResult::getCode()const
{
	return code_;
}

