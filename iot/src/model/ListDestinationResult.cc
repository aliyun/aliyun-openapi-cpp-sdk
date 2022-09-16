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

#include <alibabacloud/iot/model/ListDestinationResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Iot;
using namespace AlibabaCloud::Iot::Model;

ListDestinationResult::ListDestinationResult() :
	ServiceResult()
{}

ListDestinationResult::ListDestinationResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListDestinationResult::~ListDestinationResult()
{}

void ListDestinationResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDestinationsNode = value["Destinations"]["destinationsItem"];
	for (auto valueDestinationsdestinationsItem : allDestinationsNode)
	{
		DestinationsItem destinationsObject;
		if(!valueDestinationsdestinationsItem["DestinationId"].isNull())
			destinationsObject.destinationId = std::stol(valueDestinationsdestinationsItem["DestinationId"].asString());
		if(!valueDestinationsdestinationsItem["Name"].isNull())
			destinationsObject.name = valueDestinationsdestinationsItem["Name"].asString();
		if(!valueDestinationsdestinationsItem["Type"].isNull())
			destinationsObject.type = valueDestinationsdestinationsItem["Type"].asString();
		if(!valueDestinationsdestinationsItem["Configuration"].isNull())
			destinationsObject.configuration = valueDestinationsdestinationsItem["Configuration"].asString();
		if(!valueDestinationsdestinationsItem["IsFailover"].isNull())
			destinationsObject.isFailover = valueDestinationsdestinationsItem["IsFailover"].asString() == "true";
		if(!valueDestinationsdestinationsItem["UtcCreated"].isNull())
			destinationsObject.utcCreated = valueDestinationsdestinationsItem["UtcCreated"].asString();
		if(!valueDestinationsdestinationsItem["Description"].isNull())
			destinationsObject.description = valueDestinationsdestinationsItem["Description"].asString();
		if(!valueDestinationsdestinationsItem["Status"].isNull())
			destinationsObject.status = valueDestinationsdestinationsItem["Status"].asString();
		destinations_.push_back(destinationsObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Page"].isNull())
		page_ = std::stoi(value["Page"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["Total"].isNull())
		total_ = std::stoi(value["Total"].asString());

}

int ListDestinationResult::getPageSize()const
{
	return pageSize_;
}

int ListDestinationResult::getTotal()const
{
	return total_;
}

std::vector<ListDestinationResult::DestinationsItem> ListDestinationResult::getDestinations()const
{
	return destinations_;
}

int ListDestinationResult::getPage()const
{
	return page_;
}

std::string ListDestinationResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string ListDestinationResult::getCode()const
{
	return code_;
}

bool ListDestinationResult::getSuccess()const
{
	return success_;
}

