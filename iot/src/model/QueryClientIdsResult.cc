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

#include <alibabacloud/iot/model/QueryClientIdsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Iot;
using namespace AlibabaCloud::Iot::Model;

QueryClientIdsResult::QueryClientIdsResult() :
	ServiceResult()
{}

QueryClientIdsResult::QueryClientIdsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryClientIdsResult::~QueryClientIdsResult()
{}

void QueryClientIdsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["IotId"].isNull())
		data_.iotId = dataNode["IotId"].asString();
	auto allDynamicRegClientIdsNode = dataNode["DynamicRegClientIds"]["DynamicRegClientId"];
	for (auto dataNodeDynamicRegClientIdsDynamicRegClientId : allDynamicRegClientIdsNode)
	{
		Data::DynamicRegClientId dynamicRegClientIdObject;
		if(!dataNodeDynamicRegClientIdsDynamicRegClientId["ClientId"].isNull())
			dynamicRegClientIdObject.clientId = dataNodeDynamicRegClientIdsDynamicRegClientId["ClientId"].asString();
		if(!dataNodeDynamicRegClientIdsDynamicRegClientId["CreateTime"].isNull())
			dynamicRegClientIdObject.createTime = std::stol(dataNodeDynamicRegClientIdsDynamicRegClientId["CreateTime"].asString());
		data_.dynamicRegClientIds.push_back(dynamicRegClientIdObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();

}

QueryClientIdsResult::Data QueryClientIdsResult::getData()const
{
	return data_;
}

std::string QueryClientIdsResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string QueryClientIdsResult::getCode()const
{
	return code_;
}

bool QueryClientIdsResult::getSuccess()const
{
	return success_;
}

