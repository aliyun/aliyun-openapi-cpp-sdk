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

#include <alibabacloud/iot/model/QueryDeviceDistributeJobResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Iot;
using namespace AlibabaCloud::Iot::Model;

QueryDeviceDistributeJobResult::QueryDeviceDistributeJobResult() :
	ServiceResult()
{}

QueryDeviceDistributeJobResult::QueryDeviceDistributeJobResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryDeviceDistributeJobResult::~QueryDeviceDistributeJobResult()
{}

void QueryDeviceDistributeJobResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["SourceUid"].isNull())
		data_.sourceUid = dataNode["SourceUid"].asString();
	if(!dataNode["TargetUid"].isNull())
		data_.targetUid = dataNode["TargetUid"].asString();
	if(!dataNode["SourceInstanceId"].isNull())
		data_.sourceInstanceId = dataNode["SourceInstanceId"].asString();
	if(!dataNode["JobId"].isNull())
		data_.jobId = dataNode["JobId"].asString();
	if(!dataNode["ProductKey"].isNull())
		data_.productKey = dataNode["ProductKey"].asString();
	if(!dataNode["Total"].isNull())
		data_.total = std::stoi(dataNode["Total"].asString());
	if(!dataNode["Status"].isNull())
		data_.status = std::stoi(dataNode["Status"].asString());
	if(!dataNode["GmtCreate"].isNull())
		data_.gmtCreate = std::stol(dataNode["GmtCreate"].asString());
	if(!dataNode["Strategy"].isNull())
		data_.strategy = std::stoi(dataNode["Strategy"].asString());
	auto allTargetInstanceConfigsNode = dataNode["TargetInstanceConfigs"]["targetInstanceConfigsItem"];
	for (auto dataNodeTargetInstanceConfigstargetInstanceConfigsItem : allTargetInstanceConfigsNode)
	{
		Data::TargetInstanceConfigsItem targetInstanceConfigsItemObject;
		if(!dataNodeTargetInstanceConfigstargetInstanceConfigsItem["TargetInstanceId"].isNull())
			targetInstanceConfigsItemObject.targetInstanceId = dataNodeTargetInstanceConfigstargetInstanceConfigsItem["TargetInstanceId"].asString();
		data_.targetInstanceConfigs.push_back(targetInstanceConfigsItemObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();

}

QueryDeviceDistributeJobResult::Data QueryDeviceDistributeJobResult::getData()const
{
	return data_;
}

std::string QueryDeviceDistributeJobResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string QueryDeviceDistributeJobResult::getCode()const
{
	return code_;
}

bool QueryDeviceDistributeJobResult::getSuccess()const
{
	return success_;
}

