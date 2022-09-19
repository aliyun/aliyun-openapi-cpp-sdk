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

#include <alibabacloud/viapi-regen/model/GetServiceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Viapi_regen;
using namespace AlibabaCloud::Viapi_regen::Model;

GetServiceResult::GetServiceResult() :
	ServiceResult()
{}

GetServiceResult::GetServiceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetServiceResult::~GetServiceResult()
{}

void GetServiceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Id"].isNull())
		data_.id = std::stol(dataNode["Id"].asString());
	if(!dataNode["GmtCreate"].isNull())
		data_.gmtCreate = std::stol(dataNode["GmtCreate"].asString());
	if(!dataNode["ServiceName"].isNull())
		data_.serviceName = dataNode["ServiceName"].asString();
	if(!dataNode["ServiceDescription"].isNull())
		data_.serviceDescription = dataNode["ServiceDescription"].asString();
	if(!dataNode["Status"].isNull())
		data_.status = dataNode["Status"].asString();
	if(!dataNode["ServiceId"].isNull())
		data_.serviceId = dataNode["ServiceId"].asString();
	if(!dataNode["InputParams"].isNull())
		data_.inputParams = dataNode["InputParams"].asString();
	if(!dataNode["OutputParams"].isNull())
		data_.outputParams = dataNode["OutputParams"].asString();
	if(!dataNode["Errorcodes"].isNull())
		data_.errorcodes = dataNode["Errorcodes"].asString();
	if(!dataNode["InputExample"].isNull())
		data_.inputExample = dataNode["InputExample"].asString();
	if(!dataNode["OutputExample"].isNull())
		data_.outputExample = dataNode["OutputExample"].asString();
	auto dataReflowInfoNode = dataNode["DataReflowInfo"];
	if(!dataReflowInfoNode["DataReflowCount"].isNull())
		data_.dataReflowInfo.dataReflowCount = std::stol(dataReflowInfoNode["DataReflowCount"].asString());
	if(!dataReflowInfoNode["DataReflowRate"].isNull())
		data_.dataReflowInfo.dataReflowRate = std::stol(dataReflowInfoNode["DataReflowRate"].asString());
	if(!dataReflowInfoNode["DataReflowOssPath"].isNull())
		data_.dataReflowInfo.dataReflowOssPath = dataReflowInfoNode["DataReflowOssPath"].asString();
	if(!dataReflowInfoNode["EnableDataReflowFlag"].isNull())
		data_.dataReflowInfo.enableDataReflowFlag = dataReflowInfoNode["EnableDataReflowFlag"].asString() == "true";
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();

}

std::string GetServiceResult::getMessage()const
{
	return message_;
}

GetServiceResult::Data GetServiceResult::getData()const
{
	return data_;
}

std::string GetServiceResult::getCode()const
{
	return code_;
}

