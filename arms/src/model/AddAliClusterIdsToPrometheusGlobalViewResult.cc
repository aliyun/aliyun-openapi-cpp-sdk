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

#include <alibabacloud/arms/model/AddAliClusterIdsToPrometheusGlobalViewResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ARMS;
using namespace AlibabaCloud::ARMS::Model;

AddAliClusterIdsToPrometheusGlobalViewResult::AddAliClusterIdsToPrometheusGlobalViewResult() :
	ServiceResult()
{}

AddAliClusterIdsToPrometheusGlobalViewResult::AddAliClusterIdsToPrometheusGlobalViewResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

AddAliClusterIdsToPrometheusGlobalViewResult::~AddAliClusterIdsToPrometheusGlobalViewResult()
{}

void AddAliClusterIdsToPrometheusGlobalViewResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Success"].isNull())
		data_.success = dataNode["Success"].asString() == "true";
	if(!dataNode["Msg"].isNull())
		data_.msg = dataNode["Msg"].asString();
	if(!dataNode["Info"].isNull())
		data_.info = dataNode["Info"].asString();
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string AddAliClusterIdsToPrometheusGlobalViewResult::getMessage()const
{
	return message_;
}

AddAliClusterIdsToPrometheusGlobalViewResult::Data AddAliClusterIdsToPrometheusGlobalViewResult::getData()const
{
	return data_;
}

int AddAliClusterIdsToPrometheusGlobalViewResult::getCode()const
{
	return code_;
}

