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

#include <alibabacloud/rsimganalys/model/GetTaskResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rsimganalys;
using namespace AlibabaCloud::Rsimganalys::Model;

GetTaskResult::GetTaskResult() :
	ServiceResult()
{}

GetTaskResult::GetTaskResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetTaskResult::~GetTaskResult()
{}

void GetTaskResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["JobId"].isNull())
		data_.jobId = dataNode["JobId"].asString();
	if(!dataNode["Status"].isNull())
		data_.status = dataNode["Status"].asString();
	if(!dataNode["StatusCode"].isNull())
		data_.statusCode = dataNode["StatusCode"].asString();
	if(!dataNode["StatusMessage"].isNull())
		data_.statusMessage = dataNode["StatusMessage"].asString();
	if(!dataNode["Request"].isNull())
		data_.request = dataNode["Request"].asString();
	if(!dataNode["Response"].isNull())
		data_.response = dataNode["Response"].asString();
	if(!dataNode["Progress"].isNull())
		data_.progress = std::stoi(dataNode["Progress"].asString());
	if(!dataNode["Namespace"].isNull())
		data_._namespace = dataNode["Namespace"].asString();
	if(!dataNode["CreateTime"].isNull())
		data_.createTime = std::stol(dataNode["CreateTime"].asString());
	if(!dataNode["LastUpdateTime"].isNull())
		data_.lastUpdateTime = std::stol(dataNode["LastUpdateTime"].asString());
	if(!dataNode["Version"].isNull())
		data_.version = std::stoi(dataNode["Version"].asString());
	if(!dataNode["Appkey"].isNull())
		data_.appkey = dataNode["Appkey"].asString();
	if(!dataNode["UserId"].isNull())
		data_.userId = dataNode["UserId"].asString();
	if(!dataNode["PublishStatus"].isNull())
		data_.publishStatus = std::stoi(dataNode["PublishStatus"].asString());
	if(!dataNode["TaskCoordinateSystem"].isNull())
		data_.taskCoordinateSystem = dataNode["TaskCoordinateSystem"].asString();
	if(!dataNode["TaskStatistics"].isNull())
		data_.taskStatistics = dataNode["TaskStatistics"].asString();
	if(!dataNode["SourceCoordinateSystem"].isNull())
		data_.sourceCoordinateSystem = dataNode["SourceCoordinateSystem"].asString();
	if(!dataNode["DestinationCoordinateSystem"].isNull())
		data_.destinationCoordinateSystem = dataNode["DestinationCoordinateSystem"].asString();
	if(!value["ResultCode"].isNull())
		resultCode_ = value["ResultCode"].asString();
	if(!value["ResultMessage"].isNull())
		resultMessage_ = value["ResultMessage"].asString();

}

GetTaskResult::Data GetTaskResult::getData()const
{
	return data_;
}

std::string GetTaskResult::getResultMessage()const
{
	return resultMessage_;
}

std::string GetTaskResult::getResultCode()const
{
	return resultCode_;
}

