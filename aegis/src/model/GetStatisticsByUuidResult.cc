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

#include <alibabacloud/aegis/model/GetStatisticsByUuidResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Aegis;
using namespace AlibabaCloud::Aegis::Model;

GetStatisticsByUuidResult::GetStatisticsByUuidResult() :
	ServiceResult()
{}

GetStatisticsByUuidResult::GetStatisticsByUuidResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetStatisticsByUuidResult::~GetStatisticsByUuidResult()
{}

void GetStatisticsByUuidResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["Entity"];
	for (auto valueDataEntity : allDataNode)
	{
		Entity dataObject;
		if(!valueDataEntity["Uuid"].isNull())
			dataObject.uuid = valueDataEntity["Uuid"].asString();
		if(!valueDataEntity["Account"].isNull())
			dataObject.account = std::stoi(valueDataEntity["Account"].asString());
		if(!valueDataEntity["Health"].isNull())
			dataObject.health = std::stoi(valueDataEntity["Health"].asString());
		if(!valueDataEntity["Patch"].isNull())
			dataObject.patch = std::stoi(valueDataEntity["Patch"].asString());
		if(!valueDataEntity["Trojan"].isNull())
			dataObject.trojan = std::stoi(valueDataEntity["Trojan"].asString());
		if(!valueDataEntity["Online"].isNull())
			dataObject.online = valueDataEntity["Online"].asString() == "true";
		data_.push_back(dataObject);
	}
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string GetStatisticsByUuidResult::getRequestId()const
{
	return requestId_;
}

std::string GetStatisticsByUuidResult::getMessage()const
{
	return message_;
}

std::vector<GetStatisticsByUuidResult::Entity> GetStatisticsByUuidResult::getData()const
{
	return data_;
}

std::string GetStatisticsByUuidResult::getCode()const
{
	return code_;
}

bool GetStatisticsByUuidResult::getSuccess()const
{
	return success_;
}

