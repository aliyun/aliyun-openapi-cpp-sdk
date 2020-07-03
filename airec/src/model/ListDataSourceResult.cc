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
	auto allResultNode = value["Result"]["ResultItem"];
	for (auto valueResultResultItem : allResultNode)
	{
		ResultItem resultObject;
		if(!valueResultResultItem["TableName"].isNull())
			resultObject.tableName = valueResultResultItem["TableName"].asString();
		if(!valueResultResultItem["GmtCreate"].isNull())
			resultObject.gmtCreate = valueResultResultItem["GmtCreate"].asString();
		if(!valueResultResultItem["GmtModified"].isNull())
			resultObject.gmtModified = valueResultResultItem["GmtModified"].asString();
		auto metaNode = value["Meta"];
		if(!metaNode["AccessKeyId"].isNull())
			resultObject.meta.accessKeyId = metaNode["AccessKeyId"].asString();
		if(!metaNode["ProjectName"].isNull())
			resultObject.meta.projectName = metaNode["ProjectName"].asString();
		if(!metaNode["TableName"].isNull())
			resultObject.meta.tableName = metaNode["TableName"].asString();
		if(!metaNode["Partition"].isNull())
			resultObject.meta.partition = metaNode["Partition"].asString();
		if(!metaNode["Timestamp"].isNull())
			resultObject.meta.timestamp = std::stol(metaNode["Timestamp"].asString());
		if(!metaNode["BucketName"].isNull())
			resultObject.meta.bucketName = metaNode["BucketName"].asString();
		if(!metaNode["Path"].isNull())
			resultObject.meta.path = metaNode["Path"].asString();
		if(!metaNode["Type"].isNull())
			resultObject.meta.type = metaNode["Type"].asString();
		result_.push_back(resultObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string ListDataSourceResult::getMessage()const
{
	return message_;
}

std::string ListDataSourceResult::getCode()const
{
	return code_;
}

std::vector<ListDataSourceResult::ResultItem> ListDataSourceResult::getResult()const
{
	return result_;
}

