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

#include <alibabacloud/mse/model/CreateMseServiceApplicationResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mse;
using namespace AlibabaCloud::Mse::Model;

CreateMseServiceApplicationResult::CreateMseServiceApplicationResult() :
	ServiceResult()
{}

CreateMseServiceApplicationResult::CreateMseServiceApplicationResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateMseServiceApplicationResult::~CreateMseServiceApplicationResult()
{}

void CreateMseServiceApplicationResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Status"].isNull())
		data_.status = std::stoi(dataNode["Status"].asString());
	if(!dataNode["ExtraInfo"].isNull())
		data_.extraInfo = dataNode["ExtraInfo"].asString();
	if(!dataNode["AppName"].isNull())
		data_.appName = dataNode["AppName"].asString();
	if(!dataNode["UpdateTime"].isNull())
		data_.updateTime = std::stol(dataNode["UpdateTime"].asString());
	if(!dataNode["LicenseKey"].isNull())
		data_.licenseKey = dataNode["LicenseKey"].asString();
	if(!dataNode["CreateTime"].isNull())
		data_.createTime = std::stol(dataNode["CreateTime"].asString());
	if(!dataNode["AppId"].isNull())
		data_.appId = dataNode["AppId"].asString();
	if(!dataNode["UserId"].isNull())
		data_.userId = dataNode["UserId"].asString();
	if(!dataNode["Source"].isNull())
		data_.source = dataNode["Source"].asString();
	if(!dataNode["Language"].isNull())
		data_.language = dataNode["Language"].asString();
	if(!dataNode["RegionId"].isNull())
		data_.regionId = dataNode["RegionId"].asString();
	if(!dataNode["Version"].isNull())
		data_.version = dataNode["Version"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());

}

std::string CreateMseServiceApplicationResult::getMessage()const
{
	return message_;
}

int CreateMseServiceApplicationResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

CreateMseServiceApplicationResult::Data CreateMseServiceApplicationResult::getData()const
{
	return data_;
}

int CreateMseServiceApplicationResult::getCode()const
{
	return code_;
}

std::string CreateMseServiceApplicationResult::getSuccess()const
{
	return success_;
}

