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

#include <alibabacloud/edas/model/GetServiceDetailResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Edas;
using namespace AlibabaCloud::Edas::Model;

GetServiceDetailResult::GetServiceDetailResult() :
	ServiceResult()
{}

GetServiceDetailResult::GetServiceDetailResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetServiceDetailResult::~GetServiceDetailResult()
{}

void GetServiceDetailResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["ServiceName"].isNull())
		data_.serviceName = dataNode["ServiceName"].asString();
	if(!dataNode["EdasAppName"].isNull())
		data_.edasAppName = dataNode["EdasAppName"].asString();
	if(!dataNode["DubboApplicationName"].isNull())
		data_.dubboApplicationName = dataNode["DubboApplicationName"].asString();
	if(!dataNode["SpringApplicationName"].isNull())
		data_.springApplicationName = dataNode["SpringApplicationName"].asString();
	if(!dataNode["ServiceType"].isNull())
		data_.serviceType = dataNode["ServiceType"].asString();
	if(!dataNode["RegistryType"].isNull())
		data_.registryType = dataNode["RegistryType"].asString();
	if(!dataNode["Version"].isNull())
		data_.version = dataNode["Version"].asString();
	if(!dataNode["Group"].isNull())
		data_.group = dataNode["Group"].asString();
	if(!dataNode["Metadata"].isNull())
		data_.metadata = dataNode["Metadata"].asString();
	auto allMethodsNode = dataNode["Methods"]["Method"];
	for (auto dataNodeMethodsMethod : allMethodsNode)
	{
		Data::Method methodObject;
		if(!dataNodeMethodsMethod["Name"].isNull())
			methodObject.name = dataNodeMethodsMethod["Name"].asString();
		if(!dataNodeMethodsMethod["ReturnType"].isNull())
			methodObject.returnType = dataNodeMethodsMethod["ReturnType"].asString();
		if(!dataNodeMethodsMethod["MethodController"].isNull())
			methodObject.methodController = dataNodeMethodsMethod["MethodController"].asString();
		if(!dataNodeMethodsMethod["ParameterNames"].isNull())
			methodObject.parameterNames = dataNodeMethodsMethod["ParameterNames"].asString();
		if(!dataNodeMethodsMethod["NameDetail"].isNull())
			methodObject.nameDetail = dataNodeMethodsMethod["NameDetail"].asString();
		if(!dataNodeMethodsMethod["ReturnDetails"].isNull())
			methodObject.returnDetails = dataNodeMethodsMethod["ReturnDetails"].asString();
		if(!dataNodeMethodsMethod["ParameterTypes"].isNull())
			methodObject.parameterTypes = dataNodeMethodsMethod["ParameterTypes"].asString();
		if(!dataNodeMethodsMethod["ParameterDetails"].isNull())
			methodObject.parameterDetails = dataNodeMethodsMethod["ParameterDetails"].asString();
		if(!dataNodeMethodsMethod["RequestMethods"].isNull())
			methodObject.requestMethods = dataNodeMethodsMethod["RequestMethods"].asString();
		if(!dataNodeMethodsMethod["Paths"].isNull())
			methodObject.paths = dataNodeMethodsMethod["Paths"].asString();
		if(!dataNodeMethodsMethod["ParameterDefinitions"].isNull())
			methodObject.parameterDefinitions = dataNodeMethodsMethod["ParameterDefinitions"].asString();
		auto returnDefinitionNode = value["ReturnDefinition"];
		if(!returnDefinitionNode["Id"].isNull())
			methodObject.returnDefinition.id = returnDefinitionNode["Id"].asString();
		if(!returnDefinitionNode["Type"].isNull())
			methodObject.returnDefinition.type = returnDefinitionNode["Type"].asString();
		data_.methods.push_back(methodObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string GetServiceDetailResult::getMessage()const
{
	return message_;
}

GetServiceDetailResult::Data GetServiceDetailResult::getData()const
{
	return data_;
}

int GetServiceDetailResult::getCode()const
{
	return code_;
}

bool GetServiceDetailResult::getSuccess()const
{
	return success_;
}

