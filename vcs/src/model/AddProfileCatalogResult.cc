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

#include <alibabacloud/vcs/model/AddProfileCatalogResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vcs;
using namespace AlibabaCloud::Vcs::Model;

AddProfileCatalogResult::AddProfileCatalogResult() :
	ServiceResult()
{}

AddProfileCatalogResult::AddProfileCatalogResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

AddProfileCatalogResult::~AddProfileCatalogResult()
{}

void AddProfileCatalogResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["CatalogId"].isNull())
		data_.catalogId = std::stol(dataNode["CatalogId"].asString());
	if(!dataNode["CatalogName"].isNull())
		data_.catalogName = dataNode["CatalogName"].asString();
	if(!dataNode["IsvSubId"].isNull())
		data_.isvSubId = dataNode["IsvSubId"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string AddProfileCatalogResult::getMessage()const
{
	return message_;
}

AddProfileCatalogResult::Data AddProfileCatalogResult::getData()const
{
	return data_;
}

std::string AddProfileCatalogResult::getCode()const
{
	return code_;
}

