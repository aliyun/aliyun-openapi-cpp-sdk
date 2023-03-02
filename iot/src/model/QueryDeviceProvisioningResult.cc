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

#include <alibabacloud/iot/model/QueryDeviceProvisioningResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Iot;
using namespace AlibabaCloud::Iot::Model;

QueryDeviceProvisioningResult::QueryDeviceProvisioningResult() :
	ServiceResult()
{}

QueryDeviceProvisioningResult::QueryDeviceProvisioningResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryDeviceProvisioningResult::~QueryDeviceProvisioningResult()
{}

void QueryDeviceProvisioningResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["GmtCreate"].isNull())
		data_.gmtCreate = std::stol(dataNode["GmtCreate"].asString());
	if(!dataNode["GmtModified"].isNull())
		data_.gmtModified = std::stol(dataNode["GmtModified"].asString());
	if(!dataNode["AliyunUid"].isNull())
		data_.aliyunUid = dataNode["AliyunUid"].asString();
	if(!dataNode["ProductKey"].isNull())
		data_.productKey = dataNode["ProductKey"].asString();
	if(!dataNode["DeviceName"].isNull())
		data_.deviceName = dataNode["DeviceName"].asString();
	if(!dataNode["SourceIotInstanceId"].isNull())
		data_.sourceIotInstanceId = dataNode["SourceIotInstanceId"].asString();
	if(!dataNode["TargetIotInstanceId"].isNull())
		data_.targetIotInstanceId = dataNode["TargetIotInstanceId"].asString();
	if(!dataNode["SourceRegion"].isNull())
		data_.sourceRegion = dataNode["SourceRegion"].asString();
	if(!dataNode["TargetRegion"].isNull())
		data_.targetRegion = dataNode["TargetRegion"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();

}

QueryDeviceProvisioningResult::Data QueryDeviceProvisioningResult::getData()const
{
	return data_;
}

std::string QueryDeviceProvisioningResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string QueryDeviceProvisioningResult::getCode()const
{
	return code_;
}

bool QueryDeviceProvisioningResult::getSuccess()const
{
	return success_;
}

