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

#include <alibabacloud/cloudwf/model/ListBusinessesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cloudwf;
using namespace AlibabaCloud::Cloudwf::Model;

ListBusinessesResult::ListBusinessesResult() :
	ServiceResult()
{}

ListBusinessesResult::ListBusinessesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListBusinessesResult::~ListBusinessesResult()
{}

void ListBusinessesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto alldataNode = value["data"]["BusinessInfo"];
	for (auto valuedataBusinessInfo : alldataNode)
	{
		BusinessInfo dataObject;
		if(!valuedataBusinessInfo["text"].isNull())
			dataObject.text = valuedataBusinessInfo["text"].asString();
		if(!valuedataBusinessInfo["value"].isNull())
			dataObject.value = valuedataBusinessInfo["value"].asString();
		data_.push_back(dataObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = std::stoi(value["ErrorCode"].asString());

}

std::vector<ListBusinessesResult::BusinessInfo> ListBusinessesResult::getdata()const
{
	return data_;
}

std::string ListBusinessesResult::getMessage()const
{
	return message_;
}

int ListBusinessesResult::getErrorCode()const
{
	return errorCode_;
}

bool ListBusinessesResult::getSuccess()const
{
	return success_;
}

