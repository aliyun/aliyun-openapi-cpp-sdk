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

#include <alibabacloud/airec/model/AttachDatasetResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Airec;
using namespace AlibabaCloud::Airec::Model;

AttachDatasetResult::AttachDatasetResult() :
	ServiceResult()
{}

AttachDatasetResult::AttachDatasetResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

AttachDatasetResult::~AttachDatasetResult()
{}

void AttachDatasetResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["result"];
	if(!resultNode["gmtCreate"].isNull())
		result_.gmtCreate = std::stol(resultNode["gmtCreate"].asString());
	if(!resultNode["gmtModified"].isNull())
		result_.gmtModified = std::stol(resultNode["gmtModified"].asString());
	if(!resultNode["instanceId"].isNull())
		result_.instanceId = resultNode["instanceId"].asString();
	if(!resultNode["state"].isNull())
		result_.state = resultNode["state"].asString();
	if(!resultNode["versionId"].isNull())
		result_.versionId = resultNode["versionId"].asString();
	if(!value["code"].isNull())
		code_ = value["code"].asString();
	if(!value["message"].isNull())
		message_ = value["message"].asString();
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();

}

std::string AttachDatasetResult::getMessage()const
{
	return message_;
}

std::string AttachDatasetResult::getRequestId()const
{
	return requestId_;
}

std::string AttachDatasetResult::getCode()const
{
	return code_;
}

AttachDatasetResult::Result AttachDatasetResult::getResult()const
{
	return result_;
}

