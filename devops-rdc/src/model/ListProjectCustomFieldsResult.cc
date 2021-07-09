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

#include <alibabacloud/devops-rdc/model/ListProjectCustomFieldsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Devops_rdc;
using namespace AlibabaCloud::Devops_rdc::Model;

ListProjectCustomFieldsResult::ListProjectCustomFieldsResult() :
	ServiceResult()
{}

ListProjectCustomFieldsResult::ListProjectCustomFieldsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListProjectCustomFieldsResult::~ListProjectCustomFieldsResult()
{}

void ListProjectCustomFieldsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allObjectNode = value["Object"]["CustomField"];
	for (auto valueObjectCustomField : allObjectNode)
	{
		CustomField objectObject;
		if(!valueObjectCustomField["Type"].isNull())
			objectObject.type = valueObjectCustomField["Type"].asString();
		if(!valueObjectCustomField["CustomFieldId"].isNull())
			objectObject.customFieldId = valueObjectCustomField["CustomFieldId"].asString();
		if(!valueObjectCustomField["Subtype"].isNull())
			objectObject.subtype = valueObjectCustomField["Subtype"].asString();
		if(!valueObjectCustomField["Name"].isNull())
			objectObject.name = valueObjectCustomField["Name"].asString();
		auto allValuesNode = valueObjectCustomField["Values"]["Value"];
		for (auto valueObjectCustomFieldValuesValue : allValuesNode)
		{
			CustomField::Value valuesObject;
			if(!valueObjectCustomFieldValuesValue["Value"].isNull())
				valuesObject.value = valueObjectCustomFieldValuesValue["Value"].asString();
			if(!valueObjectCustomFieldValuesValue["Id"].isNull())
				valuesObject.id = valueObjectCustomFieldValuesValue["Id"].asString();
			objectObject.values.push_back(valuesObject);
		}
		object_.push_back(objectObject);
	}
	if(!value["ErrorMsg"].isNull())
		errorMsg_ = value["ErrorMsg"].asString();
	if(!value["Successful"].isNull())
		successful_ = value["Successful"].asString() == "true";
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();

}

std::string ListProjectCustomFieldsResult::getErrorMsg()const
{
	return errorMsg_;
}

std::vector<ListProjectCustomFieldsResult::CustomField> ListProjectCustomFieldsResult::getObject()const
{
	return object_;
}

std::string ListProjectCustomFieldsResult::getErrorCode()const
{
	return errorCode_;
}

bool ListProjectCustomFieldsResult::getSuccessful()const
{
	return successful_;
}

