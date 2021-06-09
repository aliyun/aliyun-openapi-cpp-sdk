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

#include <alibabacloud/iot/model/ListDeviceDistributeJobResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Iot;
using namespace AlibabaCloud::Iot::Model;

ListDeviceDistributeJobResult::ListDeviceDistributeJobResult() :
	ServiceResult()
{}

ListDeviceDistributeJobResult::ListDeviceDistributeJobResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListDeviceDistributeJobResult::~ListDeviceDistributeJobResult()
{}

void ListDeviceDistributeJobResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Total"].isNull())
		data_.total = std::stoi(dataNode["Total"].asString());
	if(!dataNode["NextToken"].isNull())
		data_.nextToken = dataNode["NextToken"].asString();
	auto allJobInfoNode = dataNode["JobInfo"]["items"];
	for (auto dataNodeJobInfoitems : allJobInfoNode)
	{
		Data::Items itemsObject;
		if(!dataNodeJobInfoitems["GmtCreate"].isNull())
			itemsObject.gmtCreate = std::stol(dataNodeJobInfoitems["GmtCreate"].asString());
		if(!dataNodeJobInfoitems["SourceUid"].isNull())
			itemsObject.sourceUid = dataNodeJobInfoitems["SourceUid"].asString();
		if(!dataNodeJobInfoitems["TargetUid"].isNull())
			itemsObject.targetUid = dataNodeJobInfoitems["TargetUid"].asString();
		if(!dataNodeJobInfoitems["JobId"].isNull())
			itemsObject.jobId = dataNodeJobInfoitems["JobId"].asString();
		if(!dataNodeJobInfoitems["SourceInstanceId"].isNull())
			itemsObject.sourceInstanceId = dataNodeJobInfoitems["SourceInstanceId"].asString();
		if(!dataNodeJobInfoitems["ProductKey"].isNull())
			itemsObject.productKey = dataNodeJobInfoitems["ProductKey"].asString();
		if(!dataNodeJobInfoitems["Total"].isNull())
			itemsObject.total = std::stoi(dataNodeJobInfoitems["Total"].asString());
		if(!dataNodeJobInfoitems["Status"].isNull())
			itemsObject.status = std::stoi(dataNodeJobInfoitems["Status"].asString());
		if(!dataNodeJobInfoitems["Strategy"].isNull())
			itemsObject.strategy = std::stoi(dataNodeJobInfoitems["Strategy"].asString());
		if(!dataNodeJobInfoitems["SourceRegion"].isNull())
			itemsObject.sourceRegion = dataNodeJobInfoitems["SourceRegion"].asString();
		if(!dataNodeJobInfoitems["SourceInstanceName"].isNull())
			itemsObject.sourceInstanceName = dataNodeJobInfoitems["SourceInstanceName"].asString();
		auto allTargetInstanceConfigsNode = dataNodeJobInfoitems["TargetInstanceConfigs"]["targetInstanceConfigsItem"];
		for (auto dataNodeJobInfoitemsTargetInstanceConfigstargetInstanceConfigsItem : allTargetInstanceConfigsNode)
		{
			Data::Items::TargetInstanceConfigsItem targetInstanceConfigsObject;
			if(!dataNodeJobInfoitemsTargetInstanceConfigstargetInstanceConfigsItem["TargetInstanceId"].isNull())
				targetInstanceConfigsObject.targetInstanceId = dataNodeJobInfoitemsTargetInstanceConfigstargetInstanceConfigsItem["TargetInstanceId"].asString();
			if(!dataNodeJobInfoitemsTargetInstanceConfigstargetInstanceConfigsItem["TargetRegion"].isNull())
				targetInstanceConfigsObject.targetRegion = dataNodeJobInfoitemsTargetInstanceConfigstargetInstanceConfigsItem["TargetRegion"].asString();
			if(!dataNodeJobInfoitemsTargetInstanceConfigstargetInstanceConfigsItem["TargetInstanceName"].isNull())
				targetInstanceConfigsObject.targetInstanceName = dataNodeJobInfoitemsTargetInstanceConfigstargetInstanceConfigsItem["TargetInstanceName"].asString();
			itemsObject.targetInstanceConfigs.push_back(targetInstanceConfigsObject);
		}
		data_.jobInfo.push_back(itemsObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();

}

ListDeviceDistributeJobResult::Data ListDeviceDistributeJobResult::getData()const
{
	return data_;
}

std::string ListDeviceDistributeJobResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string ListDeviceDistributeJobResult::getCode()const
{
	return code_;
}

bool ListDeviceDistributeJobResult::getSuccess()const
{
	return success_;
}

