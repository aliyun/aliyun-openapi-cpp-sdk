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

#include <alibabacloud/datalake/model/GetFunctionResult.h>
#include <json/json.h>

using namespace AlibabaCloud::DataLake;
using namespace AlibabaCloud::DataLake::Model;

GetFunctionResult::GetFunctionResult() :
	ServiceResult()
{}

GetFunctionResult::GetFunctionResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetFunctionResult::~GetFunctionResult()
{}

void GetFunctionResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto functionNode = value["Function"];
	if(!functionNode["CatalogId"].isNull())
		function_.catalogId = functionNode["CatalogId"].asString();
	if(!functionNode["ClassName"].isNull())
		function_.className = functionNode["ClassName"].asString();
	if(!functionNode["CreateTime"].isNull())
		function_.createTime = std::stoi(functionNode["CreateTime"].asString());
	if(!functionNode["DatabaseName"].isNull())
		function_.databaseName = functionNode["DatabaseName"].asString();
	if(!functionNode["FunctionName"].isNull())
		function_.functionName = functionNode["FunctionName"].asString();
	if(!functionNode["FunctionType"].isNull())
		function_.functionType = functionNode["FunctionType"].asString();
	if(!functionNode["OwnerName"].isNull())
		function_.ownerName = functionNode["OwnerName"].asString();
	if(!functionNode["OwnerType"].isNull())
		function_.ownerType = functionNode["OwnerType"].asString();
	if(!functionNode["UpdateTime"].isNull())
		function_.updateTime = std::stoi(functionNode["UpdateTime"].asString());
	if(!functionNode["CreatedBy"].isNull())
		function_.createdBy = functionNode["CreatedBy"].asString();
	auto allResourceUriNode = functionNode["ResourceUri"]["ResourceUriItem"];
	for (auto functionNodeResourceUriResourceUriItem : allResourceUriNode)
	{
		Function::ResourceUriItem resourceUriItemObject;
		if(!functionNodeResourceUriResourceUriItem["ResourceType"].isNull())
			resourceUriItemObject.resourceType = functionNodeResourceUriResourceUriItem["ResourceType"].asString();
		if(!functionNodeResourceUriResourceUriItem["Uri"].isNull())
			resourceUriItemObject.uri = functionNodeResourceUriResourceUriItem["Uri"].asString();
		function_.resourceUri.push_back(resourceUriItemObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

GetFunctionResult::Function GetFunctionResult::getFunction()const
{
	return function_;
}

std::string GetFunctionResult::getMessage()const
{
	return message_;
}

std::string GetFunctionResult::getCode()const
{
	return code_;
}

bool GetFunctionResult::getSuccess()const
{
	return success_;
}

