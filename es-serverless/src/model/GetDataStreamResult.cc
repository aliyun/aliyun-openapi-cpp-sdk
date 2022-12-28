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

#include <alibabacloud/es-serverless/model/GetDataStreamResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Es_serverless;
using namespace AlibabaCloud::Es_serverless::Model;

GetDataStreamResult::GetDataStreamResult() :
	ServiceResult()
{}

GetDataStreamResult::GetDataStreamResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetDataStreamResult::~GetDataStreamResult()
{}

void GetDataStreamResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["result"];
	if(!resultNode["appName"].isNull())
		result_.appName = resultNode["appName"].asString();
	if(!resultNode["regionId"].isNull())
		result_.regionId = resultNode["regionId"].asString();
	if(!resultNode["deletePhase"].isNull())
		result_.deletePhase = resultNode["deletePhase"].asString();
	if(!resultNode["dataStreamId"].isNull())
		result_.dataStreamId = resultNode["dataStreamId"].asString();
	if(!resultNode["dataStreamName"].isNull())
		result_.dataStreamName = resultNode["dataStreamName"].asString();
	if(!resultNode["type"].isNull())
		result_.type = resultNode["type"].asString();
	if(!resultNode["createTime"].isNull())
		result_.createTime = resultNode["createTime"].asString();
	if(!resultNode["timeStampKey"].isNull())
		result_.timeStampKey = resultNode["timeStampKey"].asString();
	auto _templateNode = resultNode["template"];
	auto allmappingsNode = _templateNode["mappings"]["mappingsItem"];
	for (auto _templateNodemappingsmappingsItem : allmappingsNode)
	{
		Result::_Template::MappingsItem mappingsItemObject;
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
		result_._template.mappings.push_back(mappingsItemObject);
	}
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();

}

std::string GetDataStreamResult::getRequestId()const
{
	return requestId_;
}

GetDataStreamResult::Result GetDataStreamResult::getResult()const
{
	return result_;
}

