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

#include <alibabacloud/vcs/model/AddDataSourceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vcs;
using namespace AlibabaCloud::Vcs::Model;

AddDataSourceResult::AddDataSourceResult() :
	ServiceResult()
{}

AddDataSourceResult::AddDataSourceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

AddDataSourceResult::~AddDataSourceResult()
{}

void AddDataSourceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["DataSourceId"].isNull())
		data_.dataSourceId = dataNode["DataSourceId"].asString();
	if(!dataNode["KafkaTopic"].isNull())
		data_.kafkaTopic = dataNode["KafkaTopic"].asString();
	if(!dataNode["OssPath"].isNull())
		data_.ossPath = dataNode["OssPath"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string AddDataSourceResult::getMessage()const
{
	return message_;
}

AddDataSourceResult::Data AddDataSourceResult::getData()const
{
	return data_;
}

std::string AddDataSourceResult::getCode()const
{
	return code_;
}

