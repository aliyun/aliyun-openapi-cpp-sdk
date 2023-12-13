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

#include <alibabacloud/cloud-siem/model/ListAccountAccessIdResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cloud_siem;
using namespace AlibabaCloud::Cloud_siem::Model;

ListAccountAccessIdResult::ListAccountAccessIdResult() :
	ServiceResult()
{}

ListAccountAccessIdResult::ListAccountAccessIdResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListAccountAccessIdResult::~ListAccountAccessIdResult()
{}

void ListAccountAccessIdResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["DataItem"];
	for (auto valueDataDataItem : allDataNode)
	{
		DataItem dataObject;
		if(!valueDataDataItem["SubUserId"].isNull())
			dataObject.subUserId = std::stol(valueDataDataItem["SubUserId"].asString());
		if(!valueDataDataItem["AccessIdMd5"].isNull())
			dataObject.accessIdMd5 = valueDataDataItem["AccessIdMd5"].asString();
		if(!valueDataDataItem["AccountStr"].isNull())
			dataObject.accountStr = valueDataDataItem["AccountStr"].asString();
		if(!valueDataDataItem["Bound"].isNull())
			dataObject.bound = std::stoi(valueDataDataItem["Bound"].asString());
		if(!valueDataDataItem["AccessId"].isNull())
			dataObject.accessId = valueDataDataItem["AccessId"].asString();
		if(!valueDataDataItem["AccountId"].isNull())
			dataObject.accountId = valueDataDataItem["AccountId"].asString();
		if(!valueDataDataItem["CloudCode"].isNull())
			dataObject.cloudCode = valueDataDataItem["CloudCode"].asString();
		data_.push_back(dataObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string ListAccountAccessIdResult::getMessage()const
{
	return message_;
}

std::vector<ListAccountAccessIdResult::DataItem> ListAccountAccessIdResult::getData()const
{
	return data_;
}

int ListAccountAccessIdResult::getCode()const
{
	return code_;
}

bool ListAccountAccessIdResult::getSuccess()const
{
	return success_;
}

