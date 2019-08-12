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

#include <alibabacloud/ccc/model/CreateCabInstanceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CCC;
using namespace AlibabaCloud::CCC::Model;

CreateCabInstanceResult::CreateCabInstanceResult() :
	ServiceResult()
{}

CreateCabInstanceResult::CreateCabInstanceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateCabInstanceResult::~CreateCabInstanceResult()
{}

void CreateCabInstanceResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto instanceNode = value["Instance"];
	if(!instanceNode["InstanceId"].isNull())
		instance_.instanceId = instanceNode["InstanceId"].asString();
	if(!instanceNode["InstanceName"].isNull())
		instance_.instanceName = instanceNode["InstanceName"].asString();
	if(!instanceNode["InstanceDescription"].isNull())
		instance_.instanceDescription = instanceNode["InstanceDescription"].asString();
	if(!instanceNode["MaxConcurrentConversation"].isNull())
		instance_.maxConcurrentConversation = std::stoi(instanceNode["MaxConcurrentConversation"].asString());
	if(!instanceNode["Owner"].isNull())
		instance_.owner = instanceNode["Owner"].asString();
	if(!instanceNode["CreationTime"].isNull())
		instance_.creationTime = std::stol(instanceNode["CreationTime"].asString());
	if(!instanceNode["CallCenterInstanceId"].isNull())
		instance_.callCenterInstanceId = instanceNode["CallCenterInstanceId"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());

}

std::string CreateCabInstanceResult::getMessage()const
{
	return message_;
}

CreateCabInstanceResult::Instance CreateCabInstanceResult::getInstance()const
{
	return instance_;
}

int CreateCabInstanceResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string CreateCabInstanceResult::getCode()const
{
	return code_;
}

bool CreateCabInstanceResult::getSuccess()const
{
	return success_;
}

