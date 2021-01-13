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

#include <alibabacloud/iot/model/QueryTaskResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Iot;
using namespace AlibabaCloud::Iot::Model;

QueryTaskResult::QueryTaskResult() :
	ServiceResult()
{}

QueryTaskResult::QueryTaskResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryTaskResult::~QueryTaskResult()
{}

void QueryTaskResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["JobId"].isNull())
		data_.jobId = dataNode["JobId"].asString();
	if(!dataNode["JobName"].isNull())
		data_.jobName = dataNode["JobName"].asString();
	if(!dataNode["TaskId"].isNull())
		data_.taskId = dataNode["TaskId"].asString();
	if(!dataNode["ProductKey"].isNull())
		data_.productKey = dataNode["ProductKey"].asString();
	if(!dataNode["DeviceName"].isNull())
		data_.deviceName = dataNode["DeviceName"].asString();
	if(!dataNode["IotId"].isNull())
		data_.iotId = dataNode["IotId"].asString();
	if(!dataNode["Progress"].isNull())
		data_.progress = dataNode["Progress"].asString();
	if(!dataNode["UtcQueueTime"].isNull())
		data_.utcQueueTime = dataNode["UtcQueueTime"].asString();
	if(!dataNode["UtcModified"].isNull())
		data_.utcModified = dataNode["UtcModified"].asString();
	if(!dataNode["StatusDetail"].isNull())
		data_.statusDetail = dataNode["StatusDetail"].asString();
	if(!dataNode["Status"].isNull())
		data_.status = dataNode["Status"].asString();
	if(!dataNode["Message"].isNull())
		data_.message = dataNode["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();

}

QueryTaskResult::Data QueryTaskResult::getData()const
{
	return data_;
}

std::string QueryTaskResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string QueryTaskResult::getCode()const
{
	return code_;
}

bool QueryTaskResult::getSuccess()const
{
	return success_;
}

