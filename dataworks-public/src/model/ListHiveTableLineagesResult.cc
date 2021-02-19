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

#include <alibabacloud/dataworks-public/model/ListHiveTableLineagesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dataworks_public;
using namespace AlibabaCloud::Dataworks_public::Model;

ListHiveTableLineagesResult::ListHiveTableLineagesResult() :
	ServiceResult()
{}

ListHiveTableLineagesResult::ListHiveTableLineagesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListHiveTableLineagesResult::~ListHiveTableLineagesResult()
{}

void ListHiveTableLineagesResult::parse(const std::string &payload)
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
	auto allUpstreamLineagesNode = dataNode["UpstreamLineages"]["TableLineage"];
	for (auto dataNodeUpstreamLineagesTableLineage : allUpstreamLineagesNode)
	{
		Data::TableLineage tableLineageObject;
		if(!dataNodeUpstreamLineagesTableLineage["ModifiedTime"].isNull())
			tableLineageObject.modifiedTime = dataNodeUpstreamLineagesTableLineage["ModifiedTime"].asString();
		if(!dataNodeUpstreamLineagesTableLineage["DatabaseName"].isNull())
			tableLineageObject.databaseName = dataNodeUpstreamLineagesTableLineage["DatabaseName"].asString();
		if(!dataNodeUpstreamLineagesTableLineage["Engine"].isNull())
			tableLineageObject.engine = dataNodeUpstreamLineagesTableLineage["Engine"].asString();
		if(!dataNodeUpstreamLineagesTableLineage["CreateTime"].isNull())
			tableLineageObject.createTime = dataNodeUpstreamLineagesTableLineage["CreateTime"].asString();
		if(!dataNodeUpstreamLineagesTableLineage["ClusterId"].isNull())
			tableLineageObject.clusterId = dataNodeUpstreamLineagesTableLineage["ClusterId"].asString();
		if(!dataNodeUpstreamLineagesTableLineage["Source"].isNull())
			tableLineageObject.source = dataNodeUpstreamLineagesTableLineage["Source"].asString();
		if(!dataNodeUpstreamLineagesTableLineage["TableName"].isNull())
			tableLineageObject.tableName = dataNodeUpstreamLineagesTableLineage["TableName"].asString();
		if(!dataNodeUpstreamLineagesTableLineage["JobId"].isNull())
			tableLineageObject.jobId = dataNodeUpstreamLineagesTableLineage["JobId"].asString();
		if(!dataNodeUpstreamLineagesTableLineage["QueryText"].isNull())
			tableLineageObject.queryText = dataNodeUpstreamLineagesTableLineage["QueryText"].asString();
		data_.upstreamLineages.push_back(tableLineageObject);
	}
	auto allDownstreamLineagesNode = dataNode["DownstreamLineages"]["TableLineage"];
	for (auto dataNodeDownstreamLineagesTableLineage : allDownstreamLineagesNode)
	{
		Data::TableLineage tableLineageObject;
		if(!dataNodeDownstreamLineagesTableLineage["ModifiedTime"].isNull())
			tableLineageObject.modifiedTime = dataNodeDownstreamLineagesTableLineage["ModifiedTime"].asString();
		if(!dataNodeDownstreamLineagesTableLineage["DatabaseName"].isNull())
			tableLineageObject.databaseName = dataNodeDownstreamLineagesTableLineage["DatabaseName"].asString();
		if(!dataNodeDownstreamLineagesTableLineage["Engine"].isNull())
			tableLineageObject.engine = dataNodeDownstreamLineagesTableLineage["Engine"].asString();
		if(!dataNodeDownstreamLineagesTableLineage["CreateTime"].isNull())
			tableLineageObject.createTime = dataNodeDownstreamLineagesTableLineage["CreateTime"].asString();
		if(!dataNodeDownstreamLineagesTableLineage["ClusterId"].isNull())
			tableLineageObject.clusterId = dataNodeDownstreamLineagesTableLineage["ClusterId"].asString();
		if(!dataNodeDownstreamLineagesTableLineage["Source"].isNull())
			tableLineageObject.source = dataNodeDownstreamLineagesTableLineage["Source"].asString();
		if(!dataNodeDownstreamLineagesTableLineage["TableName"].isNull())
			tableLineageObject.tableName = dataNodeDownstreamLineagesTableLineage["TableName"].asString();
		if(!dataNodeDownstreamLineagesTableLineage["JobId"].isNull())
			tableLineageObject.jobId = dataNodeDownstreamLineagesTableLineage["JobId"].asString();
		if(!dataNodeDownstreamLineagesTableLineage["QueryText"].isNull())
			tableLineageObject.queryText = dataNodeDownstreamLineagesTableLineage["QueryText"].asString();
		data_.downstreamLineages.push_back(tableLineageObject);
	}
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();

}

ListHiveTableLineagesResult::Data ListHiveTableLineagesResult::getData()const
{
	return data_;
}

std::string ListHiveTableLineagesResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListHiveTableLineagesResult::getErrorMessage()const
{
	return errorMessage_;
}

