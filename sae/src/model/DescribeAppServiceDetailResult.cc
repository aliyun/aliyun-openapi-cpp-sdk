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

#include <alibabacloud/sae/model/DescribeAppServiceDetailResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sae;
using namespace AlibabaCloud::Sae::Model;

DescribeAppServiceDetailResult::DescribeAppServiceDetailResult() :
	ServiceResult()
{}

DescribeAppServiceDetailResult::DescribeAppServiceDetailResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeAppServiceDetailResult::~DescribeAppServiceDetailResult()
{}

void DescribeAppServiceDetailResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Group"].isNull())
		data_.group = dataNode["Group"].asString();
	if(!dataNode["ServiceName"].isNull())
		data_.serviceName = dataNode["ServiceName"].asString();
	if(!dataNode["Version"].isNull())
		data_.version = dataNode["Version"].asString();
	if(!dataNode["ServiceType"].isNull())
		data_.serviceType = dataNode["ServiceType"].asString();
	if(!dataNode["EdasAppName"].isNull())
		data_.edasAppName = dataNode["EdasAppName"].asString();
	if(!dataNode["Metadata"].isNull())
		data_.metadata = dataNode["Metadata"].asString();
	if(!dataNode["SpringApplicationName"].isNull())
		data_.springApplicationName = dataNode["SpringApplicationName"].asString();
	if(!dataNode["DubboApplicationName"].isNull())
		data_.dubboApplicationName = dataNode["DubboApplicationName"].asString();
	auto allMethodsNode = dataNode["Methods"]["Method"];
	for (auto dataNodeMethodsMethod : allMethodsNode)
	{
		Data::Method methodObject;
		if(!dataNodeMethodsMethod["MethodController"].isNull())
			methodObject.methodController = dataNodeMethodsMethod["MethodController"].asString();
		if(!dataNodeMethodsMethod["ReturnType"].isNull())
			methodObject.returnType = dataNodeMethodsMethod["ReturnType"].asString();
		if(!dataNodeMethodsMethod["ReturnDetails"].isNull())
			methodObject.returnDetails = dataNodeMethodsMethod["ReturnDetails"].asString();
		if(!dataNodeMethodsMethod["Name"].isNull())
			methodObject.name = dataNodeMethodsMethod["Name"].asString();
		if(!dataNodeMethodsMethod["NameDetail"].isNull())
			methodObject.nameDetail = dataNodeMethodsMethod["NameDetail"].asString();
		auto allParameterDefinitionsNode = dataNodeMethodsMethod["ParameterDefinitions"]["ParameterDefinition"];
		for (auto dataNodeMethodsMethodParameterDefinitionsParameterDefinition : allParameterDefinitionsNode)
		{
			Data::Method::ParameterDefinition parameterDefinitionsObject;
			if(!dataNodeMethodsMethodParameterDefinitionsParameterDefinition["Type"].isNull())
				parameterDefinitionsObject.type = dataNodeMethodsMethodParameterDefinitionsParameterDefinition["Type"].asString();
			if(!dataNodeMethodsMethodParameterDefinitionsParameterDefinition["Description"].isNull())
				parameterDefinitionsObject.description = dataNodeMethodsMethodParameterDefinitionsParameterDefinition["Description"].asString();
			if(!dataNodeMethodsMethodParameterDefinitionsParameterDefinition["Name"].isNull())
				parameterDefinitionsObject.name = dataNodeMethodsMethodParameterDefinitionsParameterDefinition["Name"].asString();
			methodObject.parameterDefinitions.push_back(parameterDefinitionsObject);
		}
		auto allParameterDetails = value["ParameterDetails"]["ParameterDetail"];
		for (auto value : allParameterDetails)
			methodObject.parameterDetails.push_back(value.asString());
		auto allRequestMethods = value["RequestMethods"]["RequestMethod"];
		for (auto value : allRequestMethods)
			methodObject.requestMethods.push_back(value.asString());
		auto allParameterTypes = value["ParameterTypes"]["ParameterType"];
		for (auto value : allParameterTypes)
			methodObject.parameterTypes.push_back(value.asString());
		auto allPaths = value["Paths"]["Path"];
		for (auto value : allPaths)
			methodObject.paths.push_back(value.asString());
		data_.methods.push_back(methodObject);
	}
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["TraceId"].isNull())
		traceId_ = value["TraceId"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string DescribeAppServiceDetailResult::getMessage()const
{
	return message_;
}

std::string DescribeAppServiceDetailResult::getTraceId()const
{
	return traceId_;
}

DescribeAppServiceDetailResult::Data DescribeAppServiceDetailResult::getData()const
{
	return data_;
}

std::string DescribeAppServiceDetailResult::getErrorCode()const
{
	return errorCode_;
}

std::string DescribeAppServiceDetailResult::getCode()const
{
	return code_;
}

bool DescribeAppServiceDetailResult::getSuccess()const
{
	return success_;
}

