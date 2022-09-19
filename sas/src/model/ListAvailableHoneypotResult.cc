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

#include <alibabacloud/sas/model/ListAvailableHoneypotResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

ListAvailableHoneypotResult::ListAvailableHoneypotResult() :
	ServiceResult()
{}

ListAvailableHoneypotResult::ListAvailableHoneypotResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListAvailableHoneypotResult::~ListAvailableHoneypotResult()
{}

void ListAvailableHoneypotResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["DataItem"];
	for (auto valueDataDataItem : allDataNode)
	{
		DataItem dataObject;
		if(!valueDataDataItem["HoneypotImageName"].isNull())
			dataObject.honeypotImageName = valueDataDataItem["HoneypotImageName"].asString();
		if(!valueDataDataItem["HoneypotImageDisplayName"].isNull())
			dataObject.honeypotImageDisplayName = valueDataDataItem["HoneypotImageDisplayName"].asString();
		if(!valueDataDataItem["HoneypotImageId"].isNull())
			dataObject.honeypotImageId = valueDataDataItem["HoneypotImageId"].asString();
		if(!valueDataDataItem["HoneypotImageVersion"].isNull())
			dataObject.honeypotImageVersion = valueDataDataItem["HoneypotImageVersion"].asString();
		if(!valueDataDataItem["HoneypotImageType"].isNull())
			dataObject.honeypotImageType = valueDataDataItem["HoneypotImageType"].asString();
		if(!valueDataDataItem["Proto"].isNull())
			dataObject.proto = valueDataDataItem["Proto"].asString();
		if(!valueDataDataItem["ServicePort"].isNull())
			dataObject.servicePort = valueDataDataItem["ServicePort"].asString();
		if(!valueDataDataItem["Multiports"].isNull())
			dataObject.multiports = valueDataDataItem["Multiports"].asString();
		if(!valueDataDataItem["Template"].isNull())
			dataObject._template = valueDataDataItem["Template"].asString();
		data_.push_back(dataObject);
	}
	if(!value["Count"].isNull())
		count_ = std::stoi(value["Count"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());

}

std::string ListAvailableHoneypotResult::getMessage()const
{
	return message_;
}

int ListAvailableHoneypotResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::vector<ListAvailableHoneypotResult::DataItem> ListAvailableHoneypotResult::getData()const
{
	return data_;
}

int ListAvailableHoneypotResult::getCount()const
{
	return count_;
}

std::string ListAvailableHoneypotResult::getCode()const
{
	return code_;
}

bool ListAvailableHoneypotResult::getSuccess()const
{
	return success_;
}

