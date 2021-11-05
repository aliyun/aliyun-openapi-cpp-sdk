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

#include <alibabacloud/iot/model/QueryJobResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Iot;
using namespace AlibabaCloud::Iot::Model;

QueryJobResult::QueryJobResult() :
	ServiceResult()
{}

QueryJobResult::QueryJobResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryJobResult::~QueryJobResult()
{}

void QueryJobResult::parse(const std::string &payload)
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
	if(!dataNode["UtcCreate"].isNull())
		data_.utcCreate = dataNode["UtcCreate"].asString();
	if(!dataNode["Status"].isNull())
		data_.status = dataNode["Status"].asString();
	if(!dataNode["Description"].isNull())
		data_.description = dataNode["Description"].asString();
	if(!dataNode["Type"].isNull())
		data_.type = dataNode["Type"].asString();
	if(!dataNode["JobDocument"].isNull())
		data_.jobDocument = dataNode["JobDocument"].asString();
	if(!dataNode["UtcModified"].isNull())
		data_.utcModified = dataNode["UtcModified"].asString();
	if(!dataNode["ScheduledTime"].isNull())
		data_.scheduledTime = std::stol(dataNode["ScheduledTime"].asString());
	auto rolloutConfigNode = dataNode["RolloutConfig"];
	if(!rolloutConfigNode["MaximumPerMinute"].isNull())
		data_.rolloutConfig.maximumPerMinute = std::stoi(rolloutConfigNode["MaximumPerMinute"].asString());
	if(!rolloutConfigNode["MessageQoS"].isNull())
		data_.rolloutConfig.messageQoS = rolloutConfigNode["MessageQoS"].asString();
	auto timeoutConfigNode = dataNode["TimeoutConfig"];
	if(!timeoutConfigNode["InProgressTimeoutInMinutes"].isNull())
		data_.timeoutConfig.inProgressTimeoutInMinutes = std::stoi(timeoutConfigNode["InProgressTimeoutInMinutes"].asString());
	auto jobFileNode = dataNode["JobFile"];
	if(!jobFileNode["FileUrl"].isNull())
		data_.jobFile.fileUrl = jobFileNode["FileUrl"].asString();
	if(!jobFileNode["SignMethod"].isNull())
		data_.jobFile.signMethod = jobFileNode["SignMethod"].asString();
	if(!jobFileNode["Sign"].isNull())
		data_.jobFile.sign = jobFileNode["Sign"].asString();
	auto targetConfigNode = dataNode["TargetConfig"];
	if(!targetConfigNode["TargetGroup"].isNull())
		data_.targetConfig.targetGroup = targetConfigNode["TargetGroup"].asString();
	if(!targetConfigNode["TargetProduct"].isNull())
		data_.targetConfig.targetProduct = targetConfigNode["TargetProduct"].asString();
	if(!targetConfigNode["TargetType"].isNull())
		data_.targetConfig.targetType = targetConfigNode["TargetType"].asString();
	auto allTargetDevicesNode = targetConfigNode["TargetDevices"]["targetDevicesItem"];
	for (auto targetConfigNodeTargetDevicestargetDevicesItem : allTargetDevicesNode)
	{
		Data::TargetConfig::TargetDevicesItem targetDevicesItemObject;
		if(!targetConfigNodeTargetDevicestargetDevicesItem["ProductKey"].isNull())
			targetDevicesItemObject.productKey = targetConfigNodeTargetDevicestargetDevicesItem["ProductKey"].asString();
		if(!targetConfigNodeTargetDevicestargetDevicesItem["DeviceName"].isNull())
			targetDevicesItemObject.deviceName = targetConfigNodeTargetDevicestargetDevicesItem["DeviceName"].asString();
		data_.targetConfig.targetDevices.push_back(targetDevicesItemObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();

}

QueryJobResult::Data QueryJobResult::getData()const
{
	return data_;
}

std::string QueryJobResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string QueryJobResult::getCode()const
{
	return code_;
}

bool QueryJobResult::getSuccess()const
{
	return success_;
}

