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

#include <alibabacloud/devops/model/ListWorkItemAllFieldsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Devops;
using namespace AlibabaCloud::Devops::Model;

ListWorkItemAllFieldsResult::ListWorkItemAllFieldsResult() :
	ServiceResult()
{}

ListWorkItemAllFieldsResult::ListWorkItemAllFieldsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListWorkItemAllFieldsResult::~ListWorkItemAllFieldsResult()
{}

void ListWorkItemAllFieldsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allfieldsNode = value["fields"]["field"];
	for (auto valuefieldsfield : allfieldsNode)
	{
		Field fieldsObject;
		if(!valuefieldsfield["creator"].isNull())
			fieldsObject.creator = valuefieldsfield["creator"].asString();
		if(!valuefieldsfield["description"].isNull())
			fieldsObject.description = valuefieldsfield["description"].asString();
		if(!valuefieldsfield["gmtCreate"].isNull())
			fieldsObject.gmtCreate = std::stol(valuefieldsfield["gmtCreate"].asString());
		if(!valuefieldsfield["gmtModified"].isNull())
			fieldsObject.gmtModified = std::stol(valuefieldsfield["gmtModified"].asString());
		if(!valuefieldsfield["type"].isNull())
			fieldsObject.type = valuefieldsfield["type"].asString();
		if(!valuefieldsfield["identifier"].isNull())
			fieldsObject.identifier = valuefieldsfield["identifier"].asString();
		if(!valuefieldsfield["modifier"].isNull())
			fieldsObject.modifier = valuefieldsfield["modifier"].asString();
		if(!valuefieldsfield["name"].isNull())
			fieldsObject.name = valuefieldsfield["name"].asString();
		if(!valuefieldsfield["format"].isNull())
			fieldsObject.format = valuefieldsfield["format"].asString();
		if(!valuefieldsfield["className"].isNull())
			fieldsObject.className = valuefieldsfield["className"].asString();
		if(!valuefieldsfield["resourceType"].isNull())
			fieldsObject.resourceType = valuefieldsfield["resourceType"].asString();
		if(!valuefieldsfield["defaultValue"].isNull())
			fieldsObject.defaultValue = valuefieldsfield["defaultValue"].asString();
		if(!valuefieldsfield["isRequired"].isNull())
			fieldsObject.isRequired = valuefieldsfield["isRequired"].asString() == "true";
		if(!valuefieldsfield["isSystemRequired"].isNull())
			fieldsObject.isSystemRequired = valuefieldsfield["isSystemRequired"].asString() == "true";
		if(!valuefieldsfield["linkWithService"].isNull())
			fieldsObject.linkWithService = valuefieldsfield["linkWithService"].asString();
		if(!valuefieldsfield["isShowWhenCreate"].isNull())
			fieldsObject.isShowWhenCreate = valuefieldsfield["isShowWhenCreate"].asString() == "true";
		auto alloptionsNode = valuefieldsfield["options"]["option"];
		for (auto valuefieldsfieldoptionsoption : alloptionsNode)
		{
			Field::Option optionsObject;
			if(!valuefieldsfieldoptionsoption["identifier"].isNull())
				optionsObject.identifier = valuefieldsfieldoptionsoption["identifier"].asString();
			if(!valuefieldsfieldoptionsoption["fieldIdentifier"].isNull())
				optionsObject.fieldIdentifier = valuefieldsfieldoptionsoption["fieldIdentifier"].asString();
			if(!valuefieldsfieldoptionsoption["value"].isNull())
				optionsObject.value = valuefieldsfieldoptionsoption["value"].asString();
			if(!valuefieldsfieldoptionsoption["valueEn"].isNull())
				optionsObject.valueEn = valuefieldsfieldoptionsoption["valueEn"].asString();
			if(!valuefieldsfieldoptionsoption["displayValue"].isNull())
				optionsObject.displayValue = valuefieldsfieldoptionsoption["displayValue"].asString();
			if(!valuefieldsfieldoptionsoption["position"].isNull())
				optionsObject.position = std::stol(valuefieldsfieldoptionsoption["position"].asString());
			if(!valuefieldsfieldoptionsoption["level"].isNull())
				optionsObject.level = std::stol(valuefieldsfieldoptionsoption["level"].asString());
			fieldsObject.options.push_back(optionsObject);
		}
		fields_.push_back(fieldsObject);
	}
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();
	if(!value["errorMsg"].isNull())
		errorMsg_ = value["errorMsg"].asString();
	if(!value["errorCode"].isNull())
		errorCode_ = value["errorCode"].asString();
	if(!value["success"].isNull())
		success_ = value["success"].asString() == "true";

}

std::string ListWorkItemAllFieldsResult::getRequestId()const
{
	return requestId_;
}

std::string ListWorkItemAllFieldsResult::getErrorMsg()const
{
	return errorMsg_;
}

std::string ListWorkItemAllFieldsResult::getErrorCode()const
{
	return errorCode_;
}

std::vector<ListWorkItemAllFieldsResult::Field> ListWorkItemAllFieldsResult::getfields()const
{
	return fields_;
}

bool ListWorkItemAllFieldsResult::getSuccess()const
{
	return success_;
}

