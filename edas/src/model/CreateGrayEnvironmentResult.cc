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

#include <alibabacloud/edas/model/CreateGrayEnvironmentResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Edas;
using namespace AlibabaCloud::Edas::Model;

CreateGrayEnvironmentResult::CreateGrayEnvironmentResult() :
	ServiceResult()
{}

CreateGrayEnvironmentResult::CreateGrayEnvironmentResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateGrayEnvironmentResult::~CreateGrayEnvironmentResult()
{}

void CreateGrayEnvironmentResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["AccountId"].isNull())
		data_.accountId = dataNode["AccountId"].asString();
	if(!dataNode["PointcutId"].isNull())
		data_.pointcutId = std::stol(dataNode["PointcutId"].asString());
	if(!dataNode["RegionId"].isNull())
		data_.regionId = dataNode["RegionId"].asString();
	if(!dataNode["TenantId"].isNull())
		data_.tenantId = dataNode["TenantId"].asString();
	auto metadataNode = dataNode["Metadata"];
	if(!metadataNode["Labels"].isNull())
		data_.metadata.labels = metadataNode["Labels"].asString();
	if(!metadataNode["Name"].isNull())
		data_.metadata.name = metadataNode["Name"].asString();
	if(!metadataNode["Namespace"].isNull())
		data_.metadata._namespace = metadataNode["Namespace"].asString();
	if(!metadataNode["Annotations"].isNull())
		data_.metadata.annotations = metadataNode["Annotations"].asString();
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string CreateGrayEnvironmentResult::getMessage()const
{
	return message_;
}

CreateGrayEnvironmentResult::Data CreateGrayEnvironmentResult::getData()const
{
	return data_;
}

int CreateGrayEnvironmentResult::getCode()const
{
	return code_;
}

