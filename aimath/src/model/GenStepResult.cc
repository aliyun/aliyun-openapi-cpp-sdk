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

#include <alibabacloud/aimath/model/GenStepResult.h>
#include <json/json.h>

using namespace AlibabaCloud::AIMath;
using namespace AlibabaCloud::AIMath::Model;

GenStepResult::GenStepResult() :
	ServiceResult()
{}

GenStepResult::GenStepResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GenStepResult::~GenStepResult()
{}

void GenStepResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["EventType"].isNull())
		eventType_ = value["EventType"].asString();
	if(!value["Content"].isNull())
		content_ = value["Content"].asString();
	if(!value["ErrCode"].isNull())
		errCode_ = value["ErrCode"].asString();
	if(!value["ErrMsg"].isNull())
		errMsg_ = value["ErrMsg"].asString();

}

std::string GenStepResult::getEventType()const
{
	return eventType_;
}

std::string GenStepResult::getErrMsg()const
{
	return errMsg_;
}

std::string GenStepResult::getContent()const
{
	return content_;
}

std::string GenStepResult::getErrCode()const
{
	return errCode_;
}

