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

#include <alibabacloud/iot/model/ListParserDestinationResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Iot;
using namespace AlibabaCloud::Iot::Model;

ListParserDestinationResult::ListParserDestinationResult() :
	ServiceResult()
{}

ListParserDestinationResult::ListParserDestinationResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListParserDestinationResult::~ListParserDestinationResult()
{}

void ListParserDestinationResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["destinations"];
	for (auto valueDatadestinations : allDataNode)
	{
		Destinations dataObject;
		if(!valueDatadestinations["DestinationId"].isNull())
			dataObject.destinationId = std::stol(valueDatadestinations["DestinationId"].asString());
		if(!valueDatadestinations["Name"].isNull())
			dataObject.name = valueDatadestinations["Name"].asString();
		if(!valueDatadestinations["Type"].isNull())
			dataObject.type = valueDatadestinations["Type"].asString();
		if(!valueDatadestinations["Configuration"].isNull())
			dataObject.configuration = valueDatadestinations["Configuration"].asString();
		if(!valueDatadestinations["IsFailover"].isNull())
			dataObject.isFailover = valueDatadestinations["IsFailover"].asString() == "true";
		if(!valueDatadestinations["UtcCreated"].isNull())
			dataObject.utcCreated = valueDatadestinations["UtcCreated"].asString();
		if(!valueDatadestinations["UtcModified"].isNull())
			dataObject.utcModified = valueDatadestinations["UtcModified"].asString();
		data_.push_back(dataObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();

}

std::vector<ListParserDestinationResult::Destinations> ListParserDestinationResult::getData()const
{
	return data_;
}

std::string ListParserDestinationResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string ListParserDestinationResult::getCode()const
{
	return code_;
}

bool ListParserDestinationResult::getSuccess()const
{
	return success_;
}

