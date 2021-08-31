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

#include <alibabacloud/edas/model/GetServiceListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Edas;
using namespace AlibabaCloud::Edas::Model;

GetServiceListResult::GetServiceListResult() :
	ServiceResult()
{}

GetServiceListResult::GetServiceListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetServiceListResult::~GetServiceListResult()
{}

void GetServiceListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["MseServiceResponse"];
	for (auto valueDataMseServiceResponse : allDataNode)
	{
		MseServiceResponse dataObject;
		if(!valueDataMseServiceResponse["ServiceName"].isNull())
			dataObject.serviceName = valueDataMseServiceResponse["ServiceName"].asString();
		if(!valueDataMseServiceResponse["EdasAppName"].isNull())
			dataObject.edasAppName = valueDataMseServiceResponse["EdasAppName"].asString();
		if(!valueDataMseServiceResponse["DubboApplicationName"].isNull())
			dataObject.dubboApplicationName = valueDataMseServiceResponse["DubboApplicationName"].asString();
		if(!valueDataMseServiceResponse["SpringApplicationName"].isNull())
			dataObject.springApplicationName = valueDataMseServiceResponse["SpringApplicationName"].asString();
		if(!valueDataMseServiceResponse["ServiceType"].isNull())
			dataObject.serviceType = valueDataMseServiceResponse["ServiceType"].asString();
		if(!valueDataMseServiceResponse["RegistryType"].isNull())
			dataObject.registryType = valueDataMseServiceResponse["RegistryType"].asString();
		if(!valueDataMseServiceResponse["Version"].isNull())
			dataObject.version = valueDataMseServiceResponse["Version"].asString();
		if(!valueDataMseServiceResponse["Group"].isNull())
			dataObject.group = valueDataMseServiceResponse["Group"].asString();
		if(!valueDataMseServiceResponse["Metadata"].isNull())
			dataObject.metadata = valueDataMseServiceResponse["Metadata"].asString();
		auto allMethodsNode = valueDataMseServiceResponse["Methods"]["Method"];
		for (auto valueDataMseServiceResponseMethodsMethod : allMethodsNode)
		{
			MseServiceResponse::Method methodsObject;
			if(!valueDataMseServiceResponseMethodsMethod["Name"].isNull())
				methodsObject.name = valueDataMseServiceResponseMethodsMethod["Name"].asString();
			if(!valueDataMseServiceResponseMethodsMethod["ReturnType"].isNull())
				methodsObject.returnType = valueDataMseServiceResponseMethodsMethod["ReturnType"].asString();
			if(!valueDataMseServiceResponseMethodsMethod["MethodController"].isNull())
				methodsObject.methodController = valueDataMseServiceResponseMethodsMethod["MethodController"].asString();
			if(!valueDataMseServiceResponseMethodsMethod["ParameterNames"].isNull())
				methodsObject.parameterNames = valueDataMseServiceResponseMethodsMethod["ParameterNames"].asString();
			if(!valueDataMseServiceResponseMethodsMethod["NameDetail"].isNull())
				methodsObject.nameDetail = valueDataMseServiceResponseMethodsMethod["NameDetail"].asString();
			if(!valueDataMseServiceResponseMethodsMethod["ReturnDetails"].isNull())
				methodsObject.returnDetails = valueDataMseServiceResponseMethodsMethod["ReturnDetails"].asString();
			if(!valueDataMseServiceResponseMethodsMethod["ParameterTypes"].isNull())
				methodsObject.parameterTypes = valueDataMseServiceResponseMethodsMethod["ParameterTypes"].asString();
			if(!valueDataMseServiceResponseMethodsMethod["ParameterDetails"].isNull())
				methodsObject.parameterDetails = valueDataMseServiceResponseMethodsMethod["ParameterDetails"].asString();
			if(!valueDataMseServiceResponseMethodsMethod["RequestMethods"].isNull())
				methodsObject.requestMethods = valueDataMseServiceResponseMethodsMethod["RequestMethods"].asString();
			if(!valueDataMseServiceResponseMethodsMethod["ParameterDetails"].isNull())
				methodsObject.parameterDetails1 = valueDataMseServiceResponseMethodsMethod["ParameterDetails"].asString();
			if(!valueDataMseServiceResponseMethodsMethod["RequestMethods"].isNull())
				methodsObject.requestMethods2 = valueDataMseServiceResponseMethodsMethod["RequestMethods"].asString();
			if(!valueDataMseServiceResponseMethodsMethod["Paths"].isNull())
				methodsObject.paths = valueDataMseServiceResponseMethodsMethod["Paths"].asString();
			if(!valueDataMseServiceResponseMethodsMethod["ParameterDefinitions"].isNull())
				methodsObject.parameterDefinitions = valueDataMseServiceResponseMethodsMethod["ParameterDefinitions"].asString();
			dataObject.methods.push_back(methodsObject);
		}
		data_.push_back(dataObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string GetServiceListResult::getMessage()const
{
	return message_;
}

std::vector<GetServiceListResult::MseServiceResponse> GetServiceListResult::getData()const
{
	return data_;
}

int GetServiceListResult::getCode()const
{
	return code_;
}

bool GetServiceListResult::getSuccess()const
{
	return success_;
}

