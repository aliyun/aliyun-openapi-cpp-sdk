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

#include <alibabacloud/mse/model/GetServiceListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mse;
using namespace AlibabaCloud::Mse::Model;

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
	auto allDataNode = value["Data"]["MscServiceDetailResponse"];
	for (auto valueDataMscServiceDetailResponse : allDataNode)
	{
		MscServiceDetailResponse dataObject;
		if(!valueDataMscServiceDetailResponse["EdasAppName"].isNull())
			dataObject.edasAppName = valueDataMscServiceDetailResponse["EdasAppName"].asString();
		if(!valueDataMscServiceDetailResponse["DubboApplicationName"].isNull())
			dataObject.dubboApplicationName = valueDataMscServiceDetailResponse["DubboApplicationName"].asString();
		if(!valueDataMscServiceDetailResponse["Version"].isNull())
			dataObject.version = valueDataMscServiceDetailResponse["Version"].asString();
		if(!valueDataMscServiceDetailResponse["SpringApplicationName"].isNull())
			dataObject.springApplicationName = valueDataMscServiceDetailResponse["SpringApplicationName"].asString();
		if(!valueDataMscServiceDetailResponse["RegistryType"].isNull())
			dataObject.registryType = valueDataMscServiceDetailResponse["RegistryType"].asString();
		if(!valueDataMscServiceDetailResponse["ServiceType"].isNull())
			dataObject.serviceType = valueDataMscServiceDetailResponse["ServiceType"].asString();
		if(!valueDataMscServiceDetailResponse["ServiceName"].isNull())
			dataObject.serviceName = valueDataMscServiceDetailResponse["ServiceName"].asString();
		if(!valueDataMscServiceDetailResponse["Metadata"].isNull())
			dataObject.metadata = valueDataMscServiceDetailResponse["Metadata"].asString();
		if(!valueDataMscServiceDetailResponse["Group"].isNull())
			dataObject.group = valueDataMscServiceDetailResponse["Group"].asString();
		auto allMethodsNode = valueDataMscServiceDetailResponse["Methods"]["Method"];
		for (auto valueDataMscServiceDetailResponseMethodsMethod : allMethodsNode)
		{
			MscServiceDetailResponse::Method methodsObject;
			if(!valueDataMscServiceDetailResponseMethodsMethod["Name"].isNull())
				methodsObject.name = valueDataMscServiceDetailResponseMethodsMethod["Name"].asString();
			if(!valueDataMscServiceDetailResponseMethodsMethod["MethodController"].isNull())
				methodsObject.methodController = valueDataMscServiceDetailResponseMethodsMethod["MethodController"].asString();
			if(!valueDataMscServiceDetailResponseMethodsMethod["ReturnType"].isNull())
				methodsObject.returnType = valueDataMscServiceDetailResponseMethodsMethod["ReturnType"].asString();
			auto allPaths = value["Paths"]["Path"];
			for (auto value : allPaths)
				methodsObject.paths.push_back(value.asString());
			auto allParameterTypes = value["ParameterTypes"]["ParameterType"];
			for (auto value : allParameterTypes)
				methodsObject.parameterTypes.push_back(value.asString());
			auto allRequestMethods = value["RequestMethods"]["RequestMethod"];
			for (auto value : allRequestMethods)
				methodsObject.requestMethods.push_back(value.asString());
			dataObject.methods.push_back(methodsObject);
		}
		data_.push_back(dataObject);
	}
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string GetServiceListResult::getMessage()const
{
	return message_;
}

int GetServiceListResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::vector<GetServiceListResult::MscServiceDetailResponse> GetServiceListResult::getData()const
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

