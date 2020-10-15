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

#include <alibabacloud/dataworks-public/model/ListHiveColumnLineagesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dataworks_public;
using namespace AlibabaCloud::Dataworks_public::Model;

ListHiveColumnLineagesResult::ListHiveColumnLineagesResult() :
	ServiceResult()
{}

ListHiveColumnLineagesResult::ListHiveColumnLineagesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListHiveColumnLineagesResult::~ListHiveColumnLineagesResult()
{}

void ListHiveColumnLineagesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["UpstreamNumber"].isNull())
		data_.upstreamNumber = std::stoi(dataNode["UpstreamNumber"].asString());
	if(!dataNode["DownstreamNumber"].isNull())
		data_.downstreamNumber = std::stoi(dataNode["DownstreamNumber"].asString());
	auto allUpstreamLineagesNode = dataNode["UpstreamLineages"]["ColumnLineage"];
	for (auto dataNodeUpstreamLineagesColumnLineage : allUpstreamLineagesNode)
	{
		Data::ColumnLineage columnLineageObject;
		if(!dataNodeUpstreamLineagesColumnLineage["ModifiedTime"].isNull())
			columnLineageObject.modifiedTime = dataNodeUpstreamLineagesColumnLineage["ModifiedTime"].asString();
		if(!dataNodeUpstreamLineagesColumnLineage["DirectDownColumnNumber"].isNull())
			columnLineageObject.directDownColumnNumber = std::stoi(dataNodeUpstreamLineagesColumnLineage["DirectDownColumnNumber"].asString());
		if(!dataNodeUpstreamLineagesColumnLineage["DatabaseName"].isNull())
			columnLineageObject.databaseName = dataNodeUpstreamLineagesColumnLineage["DatabaseName"].asString();
		if(!dataNodeUpstreamLineagesColumnLineage["ClusterId"].isNull())
			columnLineageObject.clusterId = dataNodeUpstreamLineagesColumnLineage["ClusterId"].asString();
		if(!dataNodeUpstreamLineagesColumnLineage["Source"].isNull())
			columnLineageObject.source = dataNodeUpstreamLineagesColumnLineage["Source"].asString();
		if(!dataNodeUpstreamLineagesColumnLineage["TableName"].isNull())
			columnLineageObject.tableName = dataNodeUpstreamLineagesColumnLineage["TableName"].asString();
		if(!dataNodeUpstreamLineagesColumnLineage["DirectDownTableNumber"].isNull())
			columnLineageObject.directDownTableNumber = std::stoi(dataNodeUpstreamLineagesColumnLineage["DirectDownTableNumber"].asString());
		if(!dataNodeUpstreamLineagesColumnLineage["DirectUpperTableNumber"].isNull())
			columnLineageObject.directUpperTableNumber = std::stoi(dataNodeUpstreamLineagesColumnLineage["DirectUpperTableNumber"].asString());
		if(!dataNodeUpstreamLineagesColumnLineage["CreateTime"].isNull())
			columnLineageObject.createTime = dataNodeUpstreamLineagesColumnLineage["CreateTime"].asString();
		if(!dataNodeUpstreamLineagesColumnLineage["DirectUpperColumnNumber"].isNull())
			columnLineageObject.directUpperColumnNumber = std::stoi(dataNodeUpstreamLineagesColumnLineage["DirectUpperColumnNumber"].asString());
		if(!dataNodeUpstreamLineagesColumnLineage["ColumnName"].isNull())
			columnLineageObject.columnName = dataNodeUpstreamLineagesColumnLineage["ColumnName"].asString();
		data_.upstreamLineages.push_back(columnLineageObject);
	}
	auto allDownstreamLineagesNode = dataNode["DownstreamLineages"]["ColumnLineage"];
	for (auto dataNodeDownstreamLineagesColumnLineage : allDownstreamLineagesNode)
	{
		Data::ColumnLineage columnLineageObject;
		if(!dataNodeDownstreamLineagesColumnLineage["ModifiedTime"].isNull())
			columnLineageObject.modifiedTime = dataNodeDownstreamLineagesColumnLineage["ModifiedTime"].asString();
		if(!dataNodeDownstreamLineagesColumnLineage["DirectDownColumnNumber"].isNull())
			columnLineageObject.directDownColumnNumber = std::stoi(dataNodeDownstreamLineagesColumnLineage["DirectDownColumnNumber"].asString());
		if(!dataNodeDownstreamLineagesColumnLineage["DatabaseName"].isNull())
			columnLineageObject.databaseName = dataNodeDownstreamLineagesColumnLineage["DatabaseName"].asString();
		if(!dataNodeDownstreamLineagesColumnLineage["ClusterId"].isNull())
			columnLineageObject.clusterId = dataNodeDownstreamLineagesColumnLineage["ClusterId"].asString();
		if(!dataNodeDownstreamLineagesColumnLineage["Source"].isNull())
			columnLineageObject.source = dataNodeDownstreamLineagesColumnLineage["Source"].asString();
		if(!dataNodeDownstreamLineagesColumnLineage["TableName"].isNull())
			columnLineageObject.tableName = dataNodeDownstreamLineagesColumnLineage["TableName"].asString();
		if(!dataNodeDownstreamLineagesColumnLineage["DirectDownTableNumber"].isNull())
			columnLineageObject.directDownTableNumber = std::stoi(dataNodeDownstreamLineagesColumnLineage["DirectDownTableNumber"].asString());
		if(!dataNodeDownstreamLineagesColumnLineage["DirectUpperTableNumber"].isNull())
			columnLineageObject.directUpperTableNumber = std::stoi(dataNodeDownstreamLineagesColumnLineage["DirectUpperTableNumber"].asString());
		if(!dataNodeDownstreamLineagesColumnLineage["CreateTime"].isNull())
			columnLineageObject.createTime = dataNodeDownstreamLineagesColumnLineage["CreateTime"].asString();
		if(!dataNodeDownstreamLineagesColumnLineage["DirectUpperColumnNumber"].isNull())
			columnLineageObject.directUpperColumnNumber = std::stoi(dataNodeDownstreamLineagesColumnLineage["DirectUpperColumnNumber"].asString());
		if(!dataNodeDownstreamLineagesColumnLineage["ColumnName"].isNull())
			columnLineageObject.columnName = dataNodeDownstreamLineagesColumnLineage["ColumnName"].asString();
		data_.downstreamLineages.push_back(columnLineageObject);
	}
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();

}

ListHiveColumnLineagesResult::Data ListHiveColumnLineagesResult::getData()const
{
	return data_;
}

std::string ListHiveColumnLineagesResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListHiveColumnLineagesResult::getErrorMessage()const
{
	return errorMessage_;
}

