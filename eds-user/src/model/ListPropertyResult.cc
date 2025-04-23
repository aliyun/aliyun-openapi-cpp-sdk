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

#include <alibabacloud/eds-user/model/ListPropertyResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Eds_user;
using namespace AlibabaCloud::Eds_user::Model;

ListPropertyResult::ListPropertyResult() :
	ServiceResult()
{}

ListPropertyResult::ListPropertyResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListPropertyResult::~ListPropertyResult()
{}

void ListPropertyResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allPropertiesNode = value["Properties"]["data"];
	for (auto valuePropertiesdata : allPropertiesNode)
	{
		Data propertiesObject;
		if(!valuePropertiesdata["PropertyId"].isNull())
			propertiesObject.propertyId = std::stol(valuePropertiesdata["PropertyId"].asString());
		if(!valuePropertiesdata["PropertyKey"].isNull())
			propertiesObject.propertyKey = valuePropertiesdata["PropertyKey"].asString();
		auto allPropertyValuesNode = valuePropertiesdata["PropertyValues"]["propertyValuesItem"];
		for (auto valuePropertiesdataPropertyValuespropertyValuesItem : allPropertyValuesNode)
		{
			Data::PropertyValuesItem propertyValuesObject;
			if(!valuePropertiesdataPropertyValuespropertyValuesItem["PropertyValueId"].isNull())
				propertyValuesObject.propertyValueId = std::stol(valuePropertiesdataPropertyValuespropertyValuesItem["PropertyValueId"].asString());
			if(!valuePropertiesdataPropertyValuespropertyValuesItem["PropertyValue"].isNull())
				propertyValuesObject.propertyValue = valuePropertiesdataPropertyValuespropertyValuesItem["PropertyValue"].asString();
			propertiesObject.propertyValues.push_back(propertyValuesObject);
		}
		properties_.push_back(propertiesObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();

}

std::string ListPropertyResult::getNextToken()const
{
	return nextToken_;
}

std::vector<ListPropertyResult::Data> ListPropertyResult::getProperties()const
{
	return properties_;
}

