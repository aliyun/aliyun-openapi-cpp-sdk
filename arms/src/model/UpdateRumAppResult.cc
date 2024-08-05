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

#include <alibabacloud/arms/model/UpdateRumAppResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ARMS;
using namespace AlibabaCloud::ARMS::Model;

UpdateRumAppResult::UpdateRumAppResult() :
	ServiceResult()
{}

UpdateRumAppResult::UpdateRumAppResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

UpdateRumAppResult::~UpdateRumAppResult()
{}

void UpdateRumAppResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Config"].isNull())
		data_.config = dataNode["Config"].asString();
	if(!dataNode["Usage"].isNull())
		data_.usage = std::stoi(dataNode["Usage"].asString());
	if(!dataNode["Limit"].isNull())
		data_.limit = std::stoi(dataNode["Limit"].asString());
	if(!dataNode["Limited"].isNull())
		data_.limited = dataNode["Limited"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = value["HttpStatusCode"].asString();

}

std::string UpdateRumAppResult::getMessage()const
{
	return message_;
}

std::string UpdateRumAppResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

UpdateRumAppResult::Data UpdateRumAppResult::getData()const
{
	return data_;
}

std::string UpdateRumAppResult::getCode()const
{
	return code_;
}

std::string UpdateRumAppResult::getSuccess()const
{
	return success_;
}

