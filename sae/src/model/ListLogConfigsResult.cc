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

#include <alibabacloud/sae/model/ListLogConfigsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sae;
using namespace AlibabaCloud::Sae::Model;

ListLogConfigsResult::ListLogConfigsResult() :
	ServiceResult()
{}

ListLogConfigsResult::ListLogConfigsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListLogConfigsResult::~ListLogConfigsResult()
{}

void ListLogConfigsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["CurrentPage"].isNull())
		data_.currentPage = std::stoi(dataNode["CurrentPage"].asString());
	if(!dataNode["TotalSize"].isNull())
		data_.totalSize = std::stoi(dataNode["TotalSize"].asString());
	if(!dataNode["PageSize"].isNull())
		data_.pageSize = std::stoi(dataNode["PageSize"].asString());
	auto allLogConfigsNode = dataNode["LogConfigs"]["LogConfig"];
	for (auto dataNodeLogConfigsLogConfig : allLogConfigsNode)
	{
		Data::LogConfig logConfigObject;
		if(!dataNodeLogConfigsLogConfig["ConfigName"].isNull())
			logConfigObject.configName = dataNodeLogConfigsLogConfig["ConfigName"].asString();
		if(!dataNodeLogConfigsLogConfig["LogDir"].isNull())
			logConfigObject.logDir = dataNodeLogConfigsLogConfig["LogDir"].asString();
		if(!dataNodeLogConfigsLogConfig["SlsLogStore"].isNull())
			logConfigObject.slsLogStore = dataNodeLogConfigsLogConfig["SlsLogStore"].asString();
		if(!dataNodeLogConfigsLogConfig["CreateTime"].isNull())
			logConfigObject.createTime = dataNodeLogConfigsLogConfig["CreateTime"].asString();
		if(!dataNodeLogConfigsLogConfig["StoreType"].isNull())
			logConfigObject.storeType = dataNodeLogConfigsLogConfig["StoreType"].asString();
		if(!dataNodeLogConfigsLogConfig["SlsProject"].isNull())
			logConfigObject.slsProject = dataNodeLogConfigsLogConfig["SlsProject"].asString();
		if(!dataNodeLogConfigsLogConfig["LogType"].isNull())
			logConfigObject.logType = dataNodeLogConfigsLogConfig["LogType"].asString();
		if(!dataNodeLogConfigsLogConfig["RegionId"].isNull())
			logConfigObject.regionId = dataNodeLogConfigsLogConfig["RegionId"].asString();
		data_.logConfigs.push_back(logConfigObject);
	}
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

std::string ListLogConfigsResult::getMessage()const
{
	return message_;
}

std::string ListLogConfigsResult::getTraceId()const
{
	return traceId_;
}

ListLogConfigsResult::Data ListLogConfigsResult::getData()const
{
	return data_;
}

std::string ListLogConfigsResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListLogConfigsResult::getCode()const
{
	return code_;
}

bool ListLogConfigsResult::getSuccess()const
{
	return success_;
}

