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

#include <alibabacloud/smartag/model/ModifySagRemoteAccessResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Smartag;
using namespace AlibabaCloud::Smartag::Model;

ModifySagRemoteAccessResult::ModifySagRemoteAccessResult() :
	ServiceResult()
{}

ModifySagRemoteAccessResult::ModifySagRemoteAccessResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ModifySagRemoteAccessResult::~ModifySagRemoteAccessResult()
{}

void ModifySagRemoteAccessResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["SerialNumber"].isNull())
		serialNumber_ = value["SerialNumber"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["RemoteAccessIp"].isNull())
		remoteAccessIp_ = value["RemoteAccessIp"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string ModifySagRemoteAccessResult::getSerialNumber()const
{
	return serialNumber_;
}

std::string ModifySagRemoteAccessResult::getMessage()const
{
	return message_;
}

std::string ModifySagRemoteAccessResult::getRemoteAccessIp()const
{
	return remoteAccessIp_;
}

std::string ModifySagRemoteAccessResult::getCode()const
{
	return code_;
}

bool ModifySagRemoteAccessResult::getSuccess()const
{
	return success_;
}

