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

#include <alibabacloud/es-serverless/model/ListDataStreamsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Es_serverless;
using namespace AlibabaCloud::Es_serverless::Model;

ListDataStreamsResult::ListDataStreamsResult() :
	ServiceResult()
{}

ListDataStreamsResult::ListDataStreamsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListDataStreamsResult::~ListDataStreamsResult()
{}

void ListDataStreamsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allresultNode = value["result"]["dataStream"];
	for (auto valueresultdataStream : allresultNode)
	{
		DataStream resultObject;
		if(!valueresultdataStream["appName"].isNull())
			resultObject.appName = valueresultdataStream["appName"].asString();
		if(!valueresultdataStream["regionId"].isNull())
			resultObject.regionId = valueresultdataStream["regionId"].asString();
		if(!valueresultdataStream["deletePhase"].isNull())
			resultObject.deletePhase = valueresultdataStream["deletePhase"].asString();
		if(!valueresultdataStream["dataStreamName"].isNull())
			resultObject.dataStreamName = valueresultdataStream["dataStreamName"].asString();
		if(!valueresultdataStream["dataStreamId"].isNull())
			resultObject.dataStreamId = valueresultdataStream["dataStreamId"].asString();
		if(!valueresultdataStream["type"].isNull())
			resultObject.type = valueresultdataStream["type"].asString();
		if(!valueresultdataStream["createTime"].isNull())
			resultObject.createTime = valueresultdataStream["createTime"].asString();
		if(!valueresultdataStream["timeStampKey"].isNull())
			resultObject.timeStampKey = valueresultdataStream["timeStampKey"].asString();
		auto _templateNode = value["template"];
		auto allmappingsNode = _templateNode["mappings"]["mappingsItem"];
		for (auto _templateNodemappingsmappingsItem : allmappingsNode)
		{
			DataStream::_Template::MappingsItem mappingsItemObject;
			if(!_templateNodemappingsmappingsItem["type"].isNull())
				mappingsItemObject.type = _templateNodemappingsmappingsItem["type"].asString();
			if(!_templateNodemappingsmappingsItem["caseSensitive"].isNull())
				mappingsItemObject.caseSensitive = _templateNodemappingsmappingsItem["caseSensitive"].asString() == "true";
			if(!_templateNodemappingsmappingsItem["docValues"].isNull())
				mappingsItemObject.docValues = _templateNodemappingsmappingsItem["docValues"].asString() == "true";
			if(!_templateNodemappingsmappingsItem["index"].isNull())
				mappingsItemObject.index = _templateNodemappingsmappingsItem["index"].asString() == "true";
			if(!_templateNodemappingsmappingsItem["key"].isNull())
				mappingsItemObject.key = _templateNodemappingsmappingsItem["key"].asString();
			auto allTokenizeOnChars = value["tokenizeOnChars"]["null"];
			for (auto value : allTokenizeOnChars)
				mappingsItemObject.tokenizeOnChars.push_back(value.asString());
			auto allProperties = value["properties"]["null"];
			for (auto value : allProperties)
				mappingsItemObject.properties.push_back(value.asString());
			resultObject._template.mappings.push_back(mappingsItemObject);
		}
		result_.push_back(resultObject);
	}
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();
	if(!value["totalCount"].isNull())
		totalCount_ = std::stoi(value["totalCount"].asString());

}

std::vector<ListDataStreamsResult::DataStream> ListDataStreamsResult::getresult()const
{
	return result_;
}

int ListDataStreamsResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListDataStreamsResult::getRequestId()const
{
	return requestId_;
}

