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

#include <alibabacloud/outboundbot/model/ListAllTenantBindNumberBindingResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OutboundBot;
using namespace AlibabaCloud::OutboundBot::Model;

ListAllTenantBindNumberBindingResult::ListAllTenantBindNumberBindingResult() :
	ServiceResult()
{}

ListAllTenantBindNumberBindingResult::ListAllTenantBindNumberBindingResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListAllTenantBindNumberBindingResult::~ListAllTenantBindNumberBindingResult()
{}

void ListAllTenantBindNumberBindingResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	auto allListNode = dataNode["List"]["ListItem"];
	for (auto dataNodeListListItem : allListNode)
	{
		Data::ListItem listItemObject;
		if(!dataNodeListListItem["BindingId"].isNull())
			listItemObject.bindingId = dataNodeListListItem["BindingId"].asString();
		if(!dataNodeListListItem["Number"].isNull())
			listItemObject.number = dataNodeListListItem["Number"].asString();
		if(!dataNodeListListItem["TrunkName"].isNull())
			listItemObject.trunkName = dataNodeListListItem["TrunkName"].asString();
		if(!dataNodeListListItem["SerializedParams"].isNull())
			listItemObject.serializedParams = dataNodeListListItem["SerializedParams"].asString();
		if(!dataNodeListListItem["BillingType"].isNull())
			listItemObject.billingType = dataNodeListListItem["BillingType"].asString();
		auto allInstanceNameList = value["InstanceNameList"]["InstanceNameList"];
		for (auto value : allInstanceNameList)
			listItemObject.instanceNameList.push_back(value.asString());
		data_.list.push_back(listItemObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());

}

std::string ListAllTenantBindNumberBindingResult::getMessage()const
{
	return message_;
}

int ListAllTenantBindNumberBindingResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

ListAllTenantBindNumberBindingResult::Data ListAllTenantBindNumberBindingResult::getData()const
{
	return data_;
}

std::string ListAllTenantBindNumberBindingResult::getCode()const
{
	return code_;
}

bool ListAllTenantBindNumberBindingResult::getSuccess()const
{
	return success_;
}

