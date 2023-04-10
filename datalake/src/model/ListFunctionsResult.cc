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

#include <alibabacloud/datalake/model/ListFunctionsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::DataLake;
using namespace AlibabaCloud::DataLake::Model;

ListFunctionsResult::ListFunctionsResult() :
	ServiceResult()
{}

ListFunctionsResult::ListFunctionsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListFunctionsResult::~ListFunctionsResult()
{}

void ListFunctionsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allFunctionsNode = value["Functions"]["Function"];
	for (auto valueFunctionsFunction : allFunctionsNode)
	{
		Function functionsObject;
		if(!valueFunctionsFunction["CatalogId"].isNull())
			functionsObject.catalogId = valueFunctionsFunction["CatalogId"].asString();
		if(!valueFunctionsFunction["ClassName"].isNull())
			functionsObject.className = valueFunctionsFunction["ClassName"].asString();
		if(!valueFunctionsFunction["CreateTime"].isNull())
			functionsObject.createTime = std::stoi(valueFunctionsFunction["CreateTime"].asString());
		if(!valueFunctionsFunction["DatabaseName"].isNull())
			functionsObject.databaseName = valueFunctionsFunction["DatabaseName"].asString();
		if(!valueFunctionsFunction["FunctionName"].isNull())
			functionsObject.functionName = valueFunctionsFunction["FunctionName"].asString();
		if(!valueFunctionsFunction["FunctionType"].isNull())
			functionsObject.functionType = valueFunctionsFunction["FunctionType"].asString();
		if(!valueFunctionsFunction["OwnerName"].isNull())
			functionsObject.ownerName = valueFunctionsFunction["OwnerName"].asString();
		if(!valueFunctionsFunction["OwnerType"].isNull())
			functionsObject.ownerType = valueFunctionsFunction["OwnerType"].asString();
		if(!valueFunctionsFunction["UpdateTime"].isNull())
			functionsObject.updateTime = std::stoi(valueFunctionsFunction["UpdateTime"].asString());
		if(!valueFunctionsFunction["CreatedBy"].isNull())
			functionsObject.createdBy = valueFunctionsFunction["CreatedBy"].asString();
		auto allResourceUriNode = valueFunctionsFunction["ResourceUri"]["ResourceUriItem"];
		for (auto valueFunctionsFunctionResourceUriResourceUriItem : allResourceUriNode)
		{
			Function::ResourceUriItem resourceUriObject;
			if(!valueFunctionsFunctionResourceUriResourceUriItem["ResourceType"].isNull())
				resourceUriObject.resourceType = valueFunctionsFunctionResourceUriResourceUriItem["ResourceType"].asString();
			if(!valueFunctionsFunctionResourceUriResourceUriItem["Uri"].isNull())
				resourceUriObject.uri = valueFunctionsFunctionResourceUriResourceUriItem["Uri"].asString();
			functionsObject.resourceUri.push_back(resourceUriObject);
		}
		functions_.push_back(functionsObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["NextPageToken"].isNull())
		nextPageToken_ = value["NextPageToken"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string ListFunctionsResult::getMessage()const
{
	return message_;
}

std::string ListFunctionsResult::getNextPageToken()const
{
	return nextPageToken_;
}

std::vector<ListFunctionsResult::Function> ListFunctionsResult::getFunctions()const
{
	return functions_;
}

std::string ListFunctionsResult::getCode()const
{
	return code_;
}

bool ListFunctionsResult::getSuccess()const
{
	return success_;
}

