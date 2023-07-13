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

#include <alibabacloud/mse/model/ExportZookeeperDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mse;
using namespace AlibabaCloud::Mse::Model;

ExportZookeeperDataResult::ExportZookeeperDataResult() :
	ServiceResult()
{}

ExportZookeeperDataResult::ExportZookeeperDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ExportZookeeperDataResult::~ExportZookeeperDataResult()
{}

void ExportZookeeperDataResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["InstanceId"].isNull())
		data_.instanceId = dataNode["InstanceId"].asString();
	if(!dataNode["ExportType"].isNull())
		data_.exportType = dataNode["ExportType"].asString();
	if(!dataNode["ContentMap"].isNull())
		data_.contentMap = dataNode["ContentMap"].asString();
	if(!dataNode["Extend"].isNull())
		data_.extend = dataNode["Extend"].asString();
	if(!dataNode["Status"].isNull())
		data_.status = dataNode["Status"].asString();
	if(!dataNode["KubeoneTaskIds"].isNull())
		data_.kubeoneTaskIds = dataNode["KubeoneTaskIds"].asString();
	if(!dataNode["Id"].isNull())
		data_.id = std::stoi(dataNode["Id"].asString());
	if(!dataNode["CreateTime"].isNull())
		data_.createTime = std::stol(dataNode["CreateTime"].asString());
	if(!dataNode["UpdateTime"].isNull())
		data_.updateTime = std::stol(dataNode["UpdateTime"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["DynamicMessage"].isNull())
		dynamicMessage_ = value["DynamicMessage"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = value["HttpStatusCode"].asString();

}

std::string ExportZookeeperDataResult::getMessage()const
{
	return message_;
}

std::string ExportZookeeperDataResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

ExportZookeeperDataResult::Data ExportZookeeperDataResult::getData()const
{
	return data_;
}

std::string ExportZookeeperDataResult::getDynamicMessage()const
{
	return dynamicMessage_;
}

std::string ExportZookeeperDataResult::getErrorCode()const
{
	return errorCode_;
}

bool ExportZookeeperDataResult::getSuccess()const
{
	return success_;
}

