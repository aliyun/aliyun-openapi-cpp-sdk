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

#include <alibabacloud/smartag/model/DescribeSagRemoteAccessResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Smartag;
using namespace AlibabaCloud::Smartag::Model;

DescribeSagRemoteAccessResult::DescribeSagRemoteAccessResult() :
	ServiceResult()
{}

DescribeSagRemoteAccessResult::DescribeSagRemoteAccessResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSagRemoteAccessResult::~DescribeSagRemoteAccessResult()
{}

void DescribeSagRemoteAccessResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allRemoteAccessesNode = value["RemoteAccesses"]["RemoteAccess"];
	for (auto valueRemoteAccessesRemoteAccess : allRemoteAccessesNode)
	{
		RemoteAccess remoteAccessesObject;
		if(!valueRemoteAccessesRemoteAccess["SerialNumber"].isNull())
			remoteAccessesObject.serialNumber = valueRemoteAccessesRemoteAccess["SerialNumber"].asString();
		if(!valueRemoteAccessesRemoteAccess["RemoteAccessIp"].isNull())
			remoteAccessesObject.remoteAccessIp = valueRemoteAccessesRemoteAccess["RemoteAccessIp"].asString();
		remoteAccesses_.push_back(remoteAccessesObject);
	}
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["SmartAGId"].isNull())
		smartAGId_ = value["SmartAGId"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::vector<DescribeSagRemoteAccessResult::RemoteAccess> DescribeSagRemoteAccessResult::getRemoteAccesses()const
{
	return remoteAccesses_;
}

std::string DescribeSagRemoteAccessResult::getMessage()const
{
	return message_;
}

std::string DescribeSagRemoteAccessResult::getSmartAGId()const
{
	return smartAGId_;
}

std::string DescribeSagRemoteAccessResult::getCode()const
{
	return code_;
}

bool DescribeSagRemoteAccessResult::getSuccess()const
{
	return success_;
}

