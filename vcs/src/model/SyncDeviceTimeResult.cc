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

#include <alibabacloud/vcs/model/SyncDeviceTimeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vcs;
using namespace AlibabaCloud::Vcs::Model;

SyncDeviceTimeResult::SyncDeviceTimeResult() :
	ServiceResult()
{}

SyncDeviceTimeResult::SyncDeviceTimeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

SyncDeviceTimeResult::~SyncDeviceTimeResult()
{}

void SyncDeviceTimeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["NTPServer"].isNull())
		nTPServer_ = value["NTPServer"].asString();
	if(!value["RetryInterval"].isNull())
		retryInterval_ = value["RetryInterval"].asString();
	if(!value["SyncInterval"].isNull())
		syncInterval_ = value["SyncInterval"].asString();
	if(!value["TimeStamp"].isNull())
		timeStamp_ = value["TimeStamp"].asString();

}

std::string SyncDeviceTimeResult::getSyncInterval()const
{
	return syncInterval_;
}

std::string SyncDeviceTimeResult::getMessage()const
{
	return message_;
}

std::string SyncDeviceTimeResult::getNTPServer()const
{
	return nTPServer_;
}

std::string SyncDeviceTimeResult::getRetryInterval()const
{
	return retryInterval_;
}

std::string SyncDeviceTimeResult::getCode()const
{
	return code_;
}

std::string SyncDeviceTimeResult::getTimeStamp()const
{
	return timeStamp_;
}

