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

#include <alibabacloud/ccc/model/ListContactFlowsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CCC;
using namespace AlibabaCloud::CCC::Model;

ListContactFlowsResult::ListContactFlowsResult() :
	ServiceResult()
{}

ListContactFlowsResult::ListContactFlowsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListContactFlowsResult::~ListContactFlowsResult()
{}

void ListContactFlowsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["PageNumber"].isNull())
		data_.pageNumber = std::stoi(dataNode["PageNumber"].asString());
	if(!dataNode["PageSize"].isNull())
		data_.pageSize = std::stoi(dataNode["PageSize"].asString());
	if(!dataNode["TotalCount"].isNull())
		data_.totalCount = std::stoi(dataNode["TotalCount"].asString());
	auto allListNode = dataNode["List"]["ContactFlow"];
	for (auto dataNodeListContactFlow : allListNode)
	{
		Data::ContactFlow contactFlowObject;
		if(!dataNodeListContactFlow["Type"].isNull())
			contactFlowObject.type = dataNodeListContactFlow["Type"].asString();
		if(!dataNodeListContactFlow["Definition"].isNull())
			contactFlowObject.definition = dataNodeListContactFlow["Definition"].asString();
		if(!dataNodeListContactFlow["DraftId"].isNull())
			contactFlowObject.draftId = dataNodeListContactFlow["DraftId"].asString();
		if(!dataNodeListContactFlow["Description"].isNull())
			contactFlowObject.description = dataNodeListContactFlow["Description"].asString();
		if(!dataNodeListContactFlow["UpdatedTime"].isNull())
			contactFlowObject.updatedTime = dataNodeListContactFlow["UpdatedTime"].asString();
		if(!dataNodeListContactFlow["Editor"].isNull())
			contactFlowObject.editor = dataNodeListContactFlow["Editor"].asString();
		if(!dataNodeListContactFlow["Published"].isNull())
			contactFlowObject.published = dataNodeListContactFlow["Published"].asString() == "true";
		if(!dataNodeListContactFlow["InstanceId"].isNull())
			contactFlowObject.instanceId = dataNodeListContactFlow["InstanceId"].asString();
		if(!dataNodeListContactFlow["Name"].isNull())
			contactFlowObject.name = dataNodeListContactFlow["Name"].asString();
		if(!dataNodeListContactFlow["ContactFlowId"].isNull())
			contactFlowObject.contactFlowId = dataNodeListContactFlow["ContactFlowId"].asString();
		if(!dataNodeListContactFlow["CreatedTime"].isNull())
			contactFlowObject.createdTime = dataNodeListContactFlow["CreatedTime"].asString();
		auto allNumberList = value["NumberList"]["NumberList"];
		for (auto value : allNumberList)
			contactFlowObject.numberList.push_back(value.asString());
		data_.list.push_back(contactFlowObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string ListContactFlowsResult::getMessage()const
{
	return message_;
}

int ListContactFlowsResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

ListContactFlowsResult::Data ListContactFlowsResult::getData()const
{
	return data_;
}

std::string ListContactFlowsResult::getCode()const
{
	return code_;
}

