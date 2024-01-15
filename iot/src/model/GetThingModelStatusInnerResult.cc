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

#include <alibabacloud/iot/model/GetThingModelStatusInnerResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Iot;
using namespace AlibabaCloud::Iot::Model;

GetThingModelStatusInnerResult::GetThingModelStatusInnerResult() :
	ServiceResult()
{}

GetThingModelStatusInnerResult::GetThingModelStatusInnerResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetThingModelStatusInnerResult::~GetThingModelStatusInnerResult()
{}

void GetThingModelStatusInnerResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["ModifiedTime"].isNull())
		data_.modifiedTime = std::stol(dataNode["ModifiedTime"].asString());
	if(!dataNode["ProductKey"].isNull())
		data_.productKey = dataNode["ProductKey"].asString();
	if(!dataNode["InstanceId"].isNull())
		data_.instanceId = dataNode["InstanceId"].asString();
	if(!dataNode["RbacTenantId"].isNull())
		data_.rbacTenantId = dataNode["RbacTenantId"].asString();
	if(!dataNode["Status"].isNull())
		data_.status = std::stoi(dataNode["Status"].asString());
	if(!dataNode["Info"].isNull())
		data_.info = dataNode["Info"].asString();
	if(!dataNode["OutTime"].isNull())
		data_.outTime = std::stol(dataNode["OutTime"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["LocalizedMsg"].isNull())
		localizedMsg_ = value["LocalizedMsg"].asString();

}

std::string GetThingModelStatusInnerResult::getLocalizedMsg()const
{
	return localizedMsg_;
}

std::string GetThingModelStatusInnerResult::getMessage()const
{
	return message_;
}

GetThingModelStatusInnerResult::Data GetThingModelStatusInnerResult::getData()const
{
	return data_;
}

int GetThingModelStatusInnerResult::getCode()const
{
	return code_;
}

