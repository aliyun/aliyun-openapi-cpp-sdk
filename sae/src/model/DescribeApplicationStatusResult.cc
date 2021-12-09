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

#include <alibabacloud/sae/model/DescribeApplicationStatusResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sae;
using namespace AlibabaCloud::Sae::Model;

DescribeApplicationStatusResult::DescribeApplicationStatusResult() :
	ServiceResult()
{}

DescribeApplicationStatusResult::DescribeApplicationStatusResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeApplicationStatusResult::~DescribeApplicationStatusResult()
{}

void DescribeApplicationStatusResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["ArmsAdvancedEnabled"].isNull())
		data_.armsAdvancedEnabled = dataNode["ArmsAdvancedEnabled"].asString();
	if(!dataNode["LastChangeOrderId"].isNull())
		data_.lastChangeOrderId = dataNode["LastChangeOrderId"].asString();
	if(!dataNode["ArmsApmInfo"].isNull())
		data_.armsApmInfo = dataNode["ArmsApmInfo"].asString();
	if(!dataNode["CreateTime"].isNull())
		data_.createTime = dataNode["CreateTime"].asString();
	if(!dataNode["CurrentStatus"].isNull())
		data_.currentStatus = dataNode["CurrentStatus"].asString();
	if(!dataNode["AppId"].isNull())
		data_.appId = dataNode["AppId"].asString();
	if(!dataNode["LastChangeOrderRunning"].isNull())
		data_.lastChangeOrderRunning = dataNode["LastChangeOrderRunning"].asString() == "true";
	if(!dataNode["RunningInstances"].isNull())
		data_.runningInstances = std::stoi(dataNode["RunningInstances"].asString());
	if(!dataNode["LastChangeOrderStatus"].isNull())
		data_.lastChangeOrderStatus = dataNode["LastChangeOrderStatus"].asString();
	if(!dataNode["SubStatus"].isNull())
		data_.subStatus = dataNode["SubStatus"].asString();
	if(!dataNode["EnableAgent"].isNull())
		data_.enableAgent = dataNode["EnableAgent"].asString() == "true";
	if(!dataNode["FileSizeLimit"].isNull())
		data_.fileSizeLimit = std::stol(dataNode["FileSizeLimit"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["TraceId"].isNull())
		traceId_ = value["TraceId"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string DescribeApplicationStatusResult::getMessage()const
{
	return message_;
}

std::string DescribeApplicationStatusResult::getTraceId()const
{
	return traceId_;
}

DescribeApplicationStatusResult::Data DescribeApplicationStatusResult::getData()const
{
	return data_;
}

std::string DescribeApplicationStatusResult::getErrorCode()const
{
	return errorCode_;
}

std::string DescribeApplicationStatusResult::getCode()const
{
	return code_;
}

bool DescribeApplicationStatusResult::getSuccess()const
{
	return success_;
}

