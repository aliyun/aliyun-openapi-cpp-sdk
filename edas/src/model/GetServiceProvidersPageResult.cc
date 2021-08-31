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

#include <alibabacloud/edas/model/GetServiceProvidersPageResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Edas;
using namespace AlibabaCloud::Edas::Model;

GetServiceProvidersPageResult::GetServiceProvidersPageResult() :
	ServiceResult()
{}

GetServiceProvidersPageResult::GetServiceProvidersPageResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetServiceProvidersPageResult::~GetServiceProvidersPageResult()
{}

void GetServiceProvidersPageResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Size"].isNull())
		data_.size = std::stoi(dataNode["Size"].asString());
	if(!dataNode["TotalElements"].isNull())
		data_.totalElements = std::stoi(dataNode["TotalElements"].asString());
	if(!dataNode["TotalPages"].isNull())
		data_.totalPages = std::stoi(dataNode["TotalPages"].asString());
	auto allContentNode = dataNode["Content"]["Provider"];
	for (auto dataNodeContentProvider : allContentNode)
	{
		Data::Provider providerObject;
		if(!dataNodeContentProvider["Ip"].isNull())
			providerObject.ip = dataNodeContentProvider["Ip"].asString();
		if(!dataNodeContentProvider["Port"].isNull())
			providerObject.port = dataNodeContentProvider["Port"].asString();
		if(!dataNodeContentProvider["SerializeType"].isNull())
			providerObject.serializeType = dataNodeContentProvider["SerializeType"].asString();
		if(!dataNodeContentProvider["Timeout"].isNull())
			providerObject.timeout = dataNodeContentProvider["Timeout"].asString();
		data_.content.push_back(providerObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string GetServiceProvidersPageResult::getMessage()const
{
	return message_;
}

GetServiceProvidersPageResult::Data GetServiceProvidersPageResult::getData()const
{
	return data_;
}

int GetServiceProvidersPageResult::getCode()const
{
	return code_;
}

bool GetServiceProvidersPageResult::getSuccess()const
{
	return success_;
}

