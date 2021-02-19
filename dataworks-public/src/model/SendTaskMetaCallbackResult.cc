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

#include <alibabacloud/dataworks-public/model/SendTaskMetaCallbackResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dataworks_public;
using namespace AlibabaCloud::Dataworks_public::Model;

SendTaskMetaCallbackResult::SendTaskMetaCallbackResult() :
	ServiceResult()
{}

SendTaskMetaCallbackResult::SendTaskMetaCallbackResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

SendTaskMetaCallbackResult::~SendTaskMetaCallbackResult()
{}

void SendTaskMetaCallbackResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["ErrorCode"].isNull())
		errorCode_ = std::stol(value["ErrorCode"].asString());
	if(!value["ErrMsg"].isNull())
		errMsg_ = value["ErrMsg"].asString();
	if(!value["Data"].isNull())
		data_ = value["Data"].asString();

}

std::string SendTaskMetaCallbackResult::getErrMsg()const
{
	return errMsg_;
}

std::string SendTaskMetaCallbackResult::getData()const
{
	return data_;
}

long SendTaskMetaCallbackResult::getErrorCode()const
{
	return errorCode_;
}

