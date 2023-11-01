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

#include <alibabacloud/cloud-siem/model/DescribeEventDisposeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cloud_siem;
using namespace AlibabaCloud::Cloud_siem::Model;

DescribeEventDisposeResult::DescribeEventDisposeResult() :
	ServiceResult()
{}

DescribeEventDisposeResult::DescribeEventDisposeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeEventDisposeResult::~DescribeEventDisposeResult()
{}

void DescribeEventDisposeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Status"].isNull())
		data_.status = std::stoi(dataNode["Status"].asString());
	if(!dataNode["Remark"].isNull())
		data_.remark = dataNode["Remark"].asString();
	auto receiverInfoNode = dataNode["ReceiverInfo"];
	if(!receiverInfoNode["Id"].isNull())
		data_.receiverInfo.id = std::stol(receiverInfoNode["Id"].asString());
	if(!receiverInfoNode["GmtCreate"].isNull())
		data_.receiverInfo.gmtCreate = receiverInfoNode["GmtCreate"].asString();
	if(!receiverInfoNode["GmtModified"].isNull())
		data_.receiverInfo.gmtModified = receiverInfoNode["GmtModified"].asString();
	if(!receiverInfoNode["IncidentUuid"].isNull())
		data_.receiverInfo.incidentUuid = receiverInfoNode["IncidentUuid"].asString();
	if(!receiverInfoNode["MessageTitle"].isNull())
		data_.receiverInfo.messageTitle = receiverInfoNode["MessageTitle"].asString();
	if(!receiverInfoNode["Receiver"].isNull())
		data_.receiverInfo.receiver = receiverInfoNode["Receiver"].asString();
	if(!receiverInfoNode["Channel"].isNull())
		data_.receiverInfo.channel = receiverInfoNode["Channel"].asString();
	if(!receiverInfoNode["Status"].isNull())
		data_.receiverInfo.status = std::stoi(receiverInfoNode["Status"].asString());
		auto allEventDispose = dataNode["EventDispose"]["EventDispose"];
		for (auto value : allEventDispose)
			data_.eventDispose.push_back(value.asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string DescribeEventDisposeResult::getMessage()const
{
	return message_;
}

DescribeEventDisposeResult::Data DescribeEventDisposeResult::getData()const
{
	return data_;
}

int DescribeEventDisposeResult::getCode()const
{
	return code_;
}

bool DescribeEventDisposeResult::getSuccess()const
{
	return success_;
}

