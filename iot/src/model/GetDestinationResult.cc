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

#include <alibabacloud/iot/model/GetDestinationResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Iot;
using namespace AlibabaCloud::Iot::Model;

GetDestinationResult::GetDestinationResult() :
	ServiceResult()
{}

GetDestinationResult::GetDestinationResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetDestinationResult::~GetDestinationResult()
{}

void GetDestinationResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto destinationNode = value["Destination"];
	if(!destinationNode["DestinationId"].isNull())
		destination_.destinationId = destinationNode["DestinationId"].asString();
	if(!destinationNode["Name"].isNull())
		destination_.name = destinationNode["Name"].asString();
	if(!destinationNode["Type"].isNull())
		destination_.type = destinationNode["Type"].asString();
	if(!destinationNode["Configuration"].isNull())
		destination_.configuration = destinationNode["Configuration"].asString();
	if(!destinationNode["IsFailover"].isNull())
		destination_.isFailover = destinationNode["IsFailover"].asString() == "true";
	if(!destinationNode["UtcCreated"].isNull())
		destination_.utcCreated = destinationNode["UtcCreated"].asString();
	if(!destinationNode["Status"].isNull())
		destination_.status = destinationNode["Status"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();

}

GetDestinationResult::Destination GetDestinationResult::getDestination()const
{
	return destination_;
}

std::string GetDestinationResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string GetDestinationResult::getCode()const
{
	return code_;
}

bool GetDestinationResult::getSuccess()const
{
	return success_;
}

