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

#include <alibabacloud/avatar/model/CancelVideoTaskResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Avatar;
using namespace AlibabaCloud::Avatar::Model;

CancelVideoTaskResult::CancelVideoTaskResult() :
	ServiceResult()
{}

CancelVideoTaskResult::CancelVideoTaskResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CancelVideoTaskResult::~CancelVideoTaskResult()
{}

void CancelVideoTaskResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["TaskUuid"].isNull())
		data_.taskUuid = dataNode["TaskUuid"].asString();
	if(!dataNode["IsCancel"].isNull())
		data_.isCancel = dataNode["IsCancel"].asString() == "true";
	if(!dataNode["FailReason"].isNull())
		data_.failReason = dataNode["FailReason"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string CancelVideoTaskResult::getMessage()const
{
	return message_;
}

CancelVideoTaskResult::Data CancelVideoTaskResult::getData()const
{
	return data_;
}

std::string CancelVideoTaskResult::getCode()const
{
	return code_;
}

bool CancelVideoTaskResult::getSuccess()const
{
	return success_;
}

