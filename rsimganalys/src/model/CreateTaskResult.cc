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

#include <alibabacloud/rsimganalys/model/CreateTaskResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rsimganalys;
using namespace AlibabaCloud::Rsimganalys::Model;

CreateTaskResult::CreateTaskResult() :
	ServiceResult()
{}

CreateTaskResult::CreateTaskResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateTaskResult::~CreateTaskResult()
{}

void CreateTaskResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Appkey"].isNull())
		data_.appkey = dataNode["Appkey"].asString();
	if(!dataNode["UserId"].isNull())
		data_.userId = dataNode["UserId"].asString();
	if(!dataNode["JobId"].isNull())
		data_.jobId = dataNode["JobId"].asString();
	if(!dataNode["Status"].isNull())
		data_.status = dataNode["Status"].asString();
	if(!dataNode["Request"].isNull())
		data_.request = dataNode["Request"].asString();
	if(!dataNode["Progress"].isNull())
		data_.progress = std::stoi(dataNode["Progress"].asString());
	if(!dataNode["Namespace"].isNull())
		data_._namespace = dataNode["Namespace"].asString();
	if(!dataNode["Version"].isNull())
		data_.version = dataNode["Version"].asString();
	if(!value["ResultCode"].isNull())
		resultCode_ = std::stoi(value["ResultCode"].asString());
	if(!value["ResultMessage"].isNull())
		resultMessage_ = value["ResultMessage"].asString();

}

CreateTaskResult::Data CreateTaskResult::getData()const
{
	return data_;
}

std::string CreateTaskResult::getResultMessage()const
{
	return resultMessage_;
}

int CreateTaskResult::getResultCode()const
{
	return resultCode_;
}

