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

#include <alibabacloud/airec/model/ModifyDataSourceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Airec;
using namespace AlibabaCloud::Airec::Model;

ModifyDataSourceResult::ModifyDataSourceResult() :
	ServiceResult()
{}

ModifyDataSourceResult::ModifyDataSourceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ModifyDataSourceResult::~ModifyDataSourceResult()
{}

void ModifyDataSourceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["result"];
	if(!resultNode["gmtCreate"].isNull())
		result_.gmtCreate = resultNode["gmtCreate"].asString();
	if(!resultNode["gmtModified"].isNull())
		result_.gmtModified = resultNode["gmtModified"].asString();
	if(!resultNode["tableName"].isNull())
		result_.tableName = resultNode["tableName"].asString();
	auto metaNode = resultNode["meta"];
	if(!metaNode["accessKeyId"].isNull())
		result_.meta.accessKeyId = metaNode["accessKeyId"].asString();
	if(!metaNode["bucketName"].isNull())
		result_.meta.bucketName = metaNode["bucketName"].asString();
	if(!metaNode["partition"].isNull())
		result_.meta.partition = metaNode["partition"].asString();
	if(!metaNode["path"].isNull())
		result_.meta.path = metaNode["path"].asString();
	if(!metaNode["projectName"].isNull())
		result_.meta.projectName = metaNode["projectName"].asString();
	if(!metaNode["tableName"].isNull())
		result_.meta.tableName = metaNode["tableName"].asString();
	if(!metaNode["timestamp"].isNull())
		result_.meta.timestamp = std::stol(metaNode["timestamp"].asString());
	if(!metaNode["type"].isNull())
		result_.meta.type = metaNode["type"].asString();
	if(!value["code"].isNull())
		code_ = value["code"].asString();
	if(!value["message"].isNull())
		message_ = value["message"].asString();
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();

}

std::string ModifyDataSourceResult::getMessage()const
{
	return message_;
}

std::string ModifyDataSourceResult::getRequestId()const
{
	return requestId_;
}

std::string ModifyDataSourceResult::getCode()const
{
	return code_;
}

ModifyDataSourceResult::Result ModifyDataSourceResult::getResult()const
{
	return result_;
}

