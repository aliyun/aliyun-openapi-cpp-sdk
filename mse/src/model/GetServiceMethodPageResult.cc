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

#include <alibabacloud/mse/model/GetServiceMethodPageResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mse;
using namespace AlibabaCloud::Mse::Model;

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
	if(!dataNode["TotalSize"].isNull())
		data_.totalSize = std::stoi(dataNode["TotalSize"].asString());
	if(!dataNode["PageNumber"].isNull())
		data_.pageNumber = std::stoi(dataNode["PageNumber"].asString());
	if(!dataNode["PageSize"].isNull())
		data_.pageSize = std::stoi(dataNode["PageSize"].asString());
	auto allResultNode = dataNode["Result"]["Method"];
	for (auto dataNodeResultMethod : allResultNode)
	{
		Data::Method methodObject;
		if(!dataNodeResultMethod["NameDetail"].isNull())
			methodObject.nameDetail = dataNodeResultMethod["NameDetail"].asString();
		if(!dataNodeResultMethod["ReturnDetails"].isNull())
			methodObject.returnDetails = dataNodeResultMethod["ReturnDetails"].asString();
		if(!dataNodeResultMethod["Name"].isNull())
			methodObject.name = dataNodeResultMethod["Name"].asString();
		if(!dataNodeResultMethod["MethodController"].isNull())
			methodObject.methodController = dataNodeResultMethod["MethodController"].asString();
		if(!dataNodeResultMethod["ReturnType"].isNull())
			methodObject.returnType = dataNodeResultMethod["ReturnType"].asString();
		auto allParameterDefinitionsNode = dataNodeResultMethod["ParameterDefinitions"]["ParameterDefinition"];
		for (auto dataNodeResultMethodParameterDefinitionsParameterDefinition : allParameterDefinitionsNode)
		{
			Data::Method::ParameterDefinition parameterDefinitionsObject;
			if(!dataNodeResultMethodParameterDefinitionsParameterDefinition["Type"].isNull())
				parameterDefinitionsObject.type = dataNodeResultMethodParameterDefinitionsParameterDefinition["Type"].asString();
			if(!dataNodeResultMethodParameterDefinitionsParameterDefinition["Description"].isNull())
				parameterDefinitionsObject.description = dataNodeResultMethodParameterDefinitionsParameterDefinition["Description"].asString();
			if(!dataNodeResultMethodParameterDefinitionsParameterDefinition["Name"].isNull())
				parameterDefinitionsObject.name = dataNodeResultMethodParameterDefinitionsParameterDefinition["Name"].asString();
			methodObject.parameterDefinitions.push_back(parameterDefinitionsObject);
		}
		auto allParameterDetails = value["ParameterDetails"]["ParameterDetail"];
		for (auto value : allParameterDetails)
			methodObject.parameterDetails.push_back(value.asString());
		auto allPaths = value["Paths"]["Path"];
		for (auto value : allPaths)
			methodObject.paths.push_back(value.asString());
		auto allParameterTypes = value["ParameterTypes"]["ParameterType"];
		for (auto value : allParameterTypes)
			methodObject.parameterTypes.push_back(value.asString());
		auto allRequestMethods = value["RequestMethods"]["RequestMethod"];
		for (auto value : allRequestMethods)
			methodObject.requestMethods.push_back(value.asString());
		data_.result.push_back(methodObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());

}

std::string GetServiceMethodPageResult::getMessage()const
{
	return message_;
}

int GetServiceMethodPageResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

GetServiceMethodPageResult::Data GetServiceMethodPageResult::getData()const
{
	return data_;
}

int GetServiceMethodPageResult::getCode()const
{
	return code_;
}

bool GetServiceMethodPageResult::getSuccess()const
{
	return success_;
}

