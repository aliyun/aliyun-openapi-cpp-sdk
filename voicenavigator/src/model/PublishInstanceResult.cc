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

#include <alibabacloud/voicenavigator/model/PublishInstanceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::VoiceNavigator;
using namespace AlibabaCloud::VoiceNavigator::Model;

PublishInstanceResult::PublishInstanceResult() :
	ServiceResult()
{}

PublishInstanceResult::PublishInstanceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

PublishInstanceResult::~PublishInstanceResult()
{}

void PublishInstanceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();
	if(!value["Version"].isNull())
		version_ = value["Version"].asString();

}

std::string PublishInstanceResult::getStatus()const
{
	return status_;
}

std::string PublishInstanceResult::getVersion()const
{
	return version_;
}

