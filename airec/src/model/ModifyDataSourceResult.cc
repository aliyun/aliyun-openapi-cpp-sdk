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
	auto resultNode = value["Result"];
	if(!resultNode["TableName"].isNull())
		result_.tableName = resultNode["TableName"].asString();
	if(!resultNode["GmtCreate"].isNull())
		result_.gmtCreate = resultNode["GmtCreate"].asString();
	if(!resultNode["GmtModified"].isNull())
		result_.gmtModified = resultNode["GmtModified"].asString();
	auto metaNode = resultNode["Meta"];
	if(!metaNode["AccessKeyId"].isNull())
		result_.meta.accessKeyId = metaNode["AccessKeyId"].asString();
	if(!metaNode["ProjectName"].isNull())
		result_.meta.projectName = metaNode["ProjectName"].asString();
	if(!metaNode["TableName"].isNull())
		result_.meta.tableName = metaNode["TableName"].asString();
	if(!metaNode["Partition"].isNull())
		result_.meta.partition = metaNode["Partition"].asString();
	if(!metaNode["Timestamp"].isNull())
		result_.meta.timestamp = std::stol(metaNode["Timestamp"].asString());
	if(!metaNode["BucketName"].isNull())
		result_.meta.bucketName = metaNode["BucketName"].asString();
	if(!metaNode["Path"].isNull())
		result_.meta.path = metaNode["Path"].asString();
	if(!metaNode["Type"].isNull())
		result_.meta.type = metaNode["Type"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string ModifyDataSourceResult::getMessage()const
{
	return message_;
}

std::string ModifyDataSourceResult::getCode()const
{
	return code_;
}

ModifyDataSourceResult::Result ModifyDataSourceResult::getResult()const
{
	return result_;
}

