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

#include <alibabacloud/edas/model/GetServiceMethodPageResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Edas;
using namespace AlibabaCloud::Edas::Model;

GetServiceMethodPageResult::GetServiceMethodPageResult() :
	ServiceResult()
{}

GetServiceMethodPageResult::GetServiceMethodPageResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetServiceMethodPageResult::~GetServiceMethodPageResult()
{}

void GetServiceMethodPageResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["PageNumber"].isNull())
		data_.pageNumber = std::stoi(dataNode["PageNumber"].asString());
	if(!dataNode["TotalSize"].isNull())
		data_.totalSize = std::stoi(dataNode["TotalSize"].asString());
	if(!dataNode["PageSize"].isNull())
		data_.pageSize = std::stoi(dataNode["PageSize"].asString());
	auto allResultNode = dataNode["Result"]["Method"];
	for (auto dataNodeResultMethod : allResultNode)
	{
		Data::Method methodObject;
		if(!dataNodeResultMethod["Name"].isNull())
			methodObject.name = dataNodeResultMethod["Name"].asString();
		if(!dataNodeResultMethod["ReturnType"].isNull())
			methodObject.returnType = dataNodeResultMethod["ReturnType"].asString();
		if(!dataNodeResultMethod["MethodController"].isNull())
			methodObject.methodController = dataNodeResultMethod["MethodController"].asString();
		if(!dataNodeResultMethod["NameDetail"].isNull())
			methodObject.nameDetail = dataNodeResultMethod["NameDetail"].asString();
		if(!dataNodeResultMethod["ReturnDetails"].isNull())
			methodObject.returnDetails = dataNodeResultMethod["ReturnDetails"].asString();
		if(!dataNodeResultMethod["ParameterTypes"].isNull())
			methodObject.parameterTypes = dataNodeResultMethod["ParameterTypes"].asString();
		if(!dataNodeResultMethod["ParameterNames"].isNull())
			methodObject.parameterNames = dataNodeResultMethod["ParameterNames"].asString();
		if(!dataNodeResultMethod["ParameterDetails"].isNull())
			methodObject.parameterDetails = dataNodeResultMethod["ParameterDetails"].asString();
		if(!dataNodeResultMethod["RequestMethods"].isNull())
			methodObject.requestMethods = dataNodeResultMethod["RequestMethods"].asString();
		if(!dataNodeResultMethod["Paths"].isNull())
			methodObject.paths = dataNodeResultMethod["Paths"].asString();
		if(!dataNodeResultMethod["ParameterDefinitions"].isNull())
			methodObject.parameterDefinitions = dataNodeResultMethod["ParameterDefinitions"].asString();
		auto returnDefinitionNode = value["ReturnDefinition"];
		if(!returnDefinitionNode["Id"].isNull())
			methodObject.returnDefinition.id = returnDefinitionNode["Id"].asString();
		if(!returnDefinitionNode["Type"].isNull())
			methodObject.returnDefinition.type = returnDefinitionNode["Type"].asString();
		data_.result.push_back(methodObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["HttpCode"].isNull())
		httpCode_ = value["HttpCode"].asString();

}

std::string GetServiceMethodPageResult::getHttpCode()const
{
	return httpCode_;
}

std::string GetServiceMethodPageResult::getMessage()const
{
	return message_;
}

GetServiceMethodPageResult::Data GetServiceMethodPageResult::getData()const
{
	return data_;
}

std::string GetServiceMethodPageResult::getCode()const
{
	return code_;
}

bool GetServiceMethodPageResult::getSuccess()const
{
	return success_;
}

