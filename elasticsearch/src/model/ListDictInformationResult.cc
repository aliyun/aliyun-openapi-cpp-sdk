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

#include <alibabacloud/elasticsearch/model/ListDictInformationResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Elasticsearch;
using namespace AlibabaCloud::Elasticsearch::Model;

ListDictInformationResult::ListDictInformationResult() :
	ServiceResult()
{}

ListDictInformationResult::ListDictInformationResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListDictInformationResult::~ListDictInformationResult()
{}

void ListDictInformationResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["Result"];
	if(!resultNode["type"].isNull())
		result_.type = resultNode["type"].asString();
	if(!resultNode["fileSize"].isNull())
		result_.fileSize = std::stol(resultNode["fileSize"].asString());
	auto ossObjectNode = resultNode["ossObject"];
	if(!ossObjectNode["key"].isNull())
		result_.ossObject.key = ossObjectNode["key"].asString();
	if(!ossObjectNode["bucketName"].isNull())
		result_.ossObject.bucketName = ossObjectNode["bucketName"].asString();
	if(!ossObjectNode["etag"].isNull())
		result_.ossObject.etag = ossObjectNode["etag"].asString();

}

ListDictInformationResult::Result ListDictInformationResult::getResult()const
{
	return result_;
}

