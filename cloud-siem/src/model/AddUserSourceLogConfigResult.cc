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

#include <alibabacloud/cloud-siem/model/AddUserSourceLogConfigResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cloud_siem;
using namespace AlibabaCloud::Cloud_siem::Model;

AddUserSourceLogConfigResult::AddUserSourceLogConfigResult() :
	ServiceResult()
{}

AddUserSourceLogConfigResult::AddUserSourceLogConfigResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

AddUserSourceLogConfigResult::~AddUserSourceLogConfigResult()
{}

void AddUserSourceLogConfigResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["DiplayLine"].isNull())
		data_.diplayLine = dataNode["DiplayLine"].asString();
	if(!dataNode["SourceProdCode"].isNull())
		data_.sourceProdCode = dataNode["SourceProdCode"].asString();
	if(!dataNode["SourceLogCode"].isNull())
		data_.sourceLogCode = dataNode["SourceLogCode"].asString();
	if(!dataNode["Displayed"].isNull())
		data_.displayed = dataNode["Displayed"].asString() == "true";
	if(!dataNode["Imported"].isNull())
		data_.imported = dataNode["Imported"].asString() == "true";
	if(!dataNode["MainUserId"].isNull())
		data_.mainUserId = std::stol(dataNode["MainUserId"].asString());
	if(!dataNode["SubUserId"].isNull())
		data_.subUserId = std::stol(dataNode["SubUserId"].asString());
	if(!dataNode["SubUserName"].isNull())
		data_.subUserName = dataNode["SubUserName"].asString();

}

AddUserSourceLogConfigResult::Data AddUserSourceLogConfigResult::getData()const
{
	return data_;
}

