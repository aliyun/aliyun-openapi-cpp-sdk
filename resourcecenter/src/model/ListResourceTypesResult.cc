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

#include <alibabacloud/resourcecenter/model/ListResourceTypesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ResourceCenter;
using namespace AlibabaCloud::ResourceCenter::Model;

ListResourceTypesResult::ListResourceTypesResult() :
	ServiceResult()
{}

ListResourceTypesResult::ListResourceTypesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListResourceTypesResult::~ListResourceTypesResult()
{}

void ListResourceTypesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allResourceTypesNode = value["ResourceTypes"]["ResourceType"];
	for (auto valueResourceTypesResourceType : allResourceTypesNode)
	{
		ResourceType resourceTypesObject;
		if(!valueResourceTypesResourceType["Authorized"].isNull())
			resourceTypesObject.authorized = valueResourceTypesResourceType["Authorized"].asString() == "true";
		if(!valueResourceTypesResourceType["ProductName"].isNull())
			resourceTypesObject.productName = valueResourceTypesResourceType["ProductName"].asString();
		if(!valueResourceTypesResourceType["ResourceType"].isNull())
			resourceTypesObject.resourceType = valueResourceTypesResourceType["ResourceType"].asString();
		if(!valueResourceTypesResourceType["ResourceTypeName"].isNull())
			resourceTypesObject.resourceTypeName = valueResourceTypesResourceType["ResourceTypeName"].asString();
		auto codeMappingNode = value["CodeMapping"];
		if(!codeMappingNode["ResourceGroup"].isNull())
			resourceTypesObject.codeMapping.resourceGroup = codeMappingNode["ResourceGroup"].asString();
		if(!codeMappingNode["Tag"].isNull())
			resourceTypesObject.codeMapping.tag = codeMappingNode["Tag"].asString();
		auto urlsNode = value["Urls"];
		if(!urlsNode["ProductConsoleUrl"].isNull())
			resourceTypesObject.urls.productConsoleUrl = urlsNode["ProductConsoleUrl"].asString();
		if(!urlsNode["ResourceConsoleUrl"].isNull())
			resourceTypesObject.urls.resourceConsoleUrl = urlsNode["ResourceConsoleUrl"].asString();
		auto allFilterKeys = value["FilterKeys"]["FilterKey"];
		for (auto value : allFilterKeys)
			resourceTypesObject.filterKeys.push_back(value.asString());
		auto allRelatedResourceTypes = value["RelatedResourceTypes"]["RelatedResourceType"];
		for (auto value : allRelatedResourceTypes)
			resourceTypesObject.relatedResourceTypes.push_back(value.asString());
		resourceTypes_.push_back(resourceTypesObject);
	}
	if(!value["DynamicCode"].isNull())
		dynamicCode_ = value["DynamicCode"].asString();
	if(!value["DynamicMessage"].isNull())
		dynamicMessage_ = value["DynamicMessage"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::vector<ListResourceTypesResult::ResourceType> ListResourceTypesResult::getResourceTypes()const
{
	return resourceTypes_;
}

std::string ListResourceTypesResult::getDynamicCode()const
{
	return dynamicCode_;
}

std::string ListResourceTypesResult::getDynamicMessage()const
{
	return dynamicMessage_;
}

std::string ListResourceTypesResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListResourceTypesResult::getErrorMessage()const
{
	return errorMessage_;
}

bool ListResourceTypesResult::getSuccess()const
{
	return success_;
}

