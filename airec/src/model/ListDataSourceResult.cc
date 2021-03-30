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

#include <alibabacloud/airec/model/ListDataSourceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Airec;
using namespace AlibabaCloud::Airec::Model;

ListDataSourceResult::ListDataSourceResult() :
	ServiceResult()
{}

ListDataSourceResult::ListDataSourceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListDataSourceResult::~ListDataSourceResult()
{}

void ListDataSourceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allresultNode = value["result"]["ResultItem"];
	for (auto valueresultResultItem : allresultNode)
	{
		ResultItem resultObject;
		if(!valueresultResultItem["gmtCreate"].isNull())
			resultObject.gmtCreate = valueresultResultItem["gmtCreate"].asString();
		if(!valueresultResultItem["gmtModified"].isNull())
			resultObject.gmtModified = valueresultResultItem["gmtModified"].asString();
		if(!valueresultResultItem["tableName"].isNull())
			resultObject.tableName = valueresultResultItem["tableName"].asString();
		auto metaNode = value["meta"];
		if(!metaNode["accessKeyId"].isNull())
			resultObject.meta.accessKeyId = metaNode["accessKeyId"].asString();
		if(!metaNode["bucketName"].isNull())
			resultObject.meta.bucketName = metaNode["bucketName"].asString();
		if(!metaNode["partition"].isNull())
			resultObject.meta.partition = metaNode["partition"].asString();
		if(!metaNode["path"].isNull())
			resultObject.meta.path = metaNode["path"].asString();
		if(!metaNode["projectName"].isNull())
			resultObject.meta.projectName = metaNode["projectName"].asString();
		if(!metaNode["tableName"].isNull())
			resultObject.meta.tableName = metaNode["tableName"].asString();
		if(!metaNode["timestamp"].isNull())
			resultObject.meta.timestamp = std::stol(metaNode["timestamp"].asString());
		if(!metaNode["type"].isNull())
			resultObject.meta.type = metaNode["type"].asString();
		result_.push_back(resultObject);
	}
	if(!value["code"].isNull())
		code_ = value["code"].asString();
	if(!value["message"].isNull())
		message_ = value["message"].asString();
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();

}

std::vector<ListDataSourceResult::ResultItem> ListDataSourceResult::getresult()const
{
	return result_;
}

std::string ListDataSourceResult::getMessage()const
{
	return message_;
}

std::string ListDataSourceResult::getRequestId()const
{
	return requestId_;
}

std::string ListDataSourceResult::getCode()const
{
	return code_;
}

