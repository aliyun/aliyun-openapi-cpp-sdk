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

#include <alibabacloud/ccc/model/GetServiceExtensionsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CCC;
using namespace AlibabaCloud::CCC::Model;

GetServiceExtensionsResult::GetServiceExtensionsResult() :
	ServiceResult()
{}

GetServiceExtensionsResult::GetServiceExtensionsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetServiceExtensionsResult::~GetServiceExtensionsResult()
{}

void GetServiceExtensionsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allServiceExtensions = value["ServiceExtensions"]["ServiceExtension"];
	for (auto value : allServiceExtensions)
	{
		ServiceExtension serviceExtensionsObject;
		if(!value["Name"].isNull())
			serviceExtensionsObject.name = value["Name"].asString();
		if(!value["Number"].isNull())
			serviceExtensionsObject.number = value["Number"].asString();
		serviceExtensions_.push_back(serviceExtensionsObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());

}

std::string GetServiceExtensionsResult::getMessage()const
{
	return message_;
}

int GetServiceExtensionsResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::vector<GetServiceExtensionsResult::ServiceExtension> GetServiceExtensionsResult::getServiceExtensions()const
{
	return serviceExtensions_;
}

std::string GetServiceExtensionsResult::getCode()const
{
	return code_;
}

bool GetServiceExtensionsResult::getSuccess()const
{
	return success_;
}

