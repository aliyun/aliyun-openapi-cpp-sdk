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

#include <alibabacloud/elasticsearch/model/UpdateAliwsDictResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Elasticsearch;
using namespace AlibabaCloud::Elasticsearch::Model;

UpdateAliwsDictResult::UpdateAliwsDictResult() :
	ServiceResult()
{}

UpdateAliwsDictResult::UpdateAliwsDictResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

UpdateAliwsDictResult::~UpdateAliwsDictResult()
{}

void UpdateAliwsDictResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allResult = value["Result"]["DictList"];
	for (auto value : allResult)
	{
		DictList resultObject;
		if(!value["name"].isNull())
			resultObject.name = value["name"].asString();
		if(!value["fileSize"].isNull())
			resultObject.fileSize = std::stol(value["fileSize"].asString());
		if(!value["type"].isNull())
			resultObject.type = value["type"].asString();
		if(!value["sourceType"].isNull())
			resultObject.sourceType = value["sourceType"].asString();
		auto ossObjectNode = value["ossObject"];
		if(!ossObjectNode["bucketName"].isNull())
			resultObject.ossObject.bucketName = ossObjectNode["bucketName"].asString();
		if(!ossObjectNode["key"].isNull())
			resultObject.ossObject.key = ossObjectNode["key"].asString();
		if(!ossObjectNode["etag"].isNull())
			resultObject.ossObject.etag = ossObjectNode["etag"].asString();
		result_.push_back(resultObject);
	}

}

std::vector<UpdateAliwsDictResult::DictList> UpdateAliwsDictResult::getResult()const
{
	return result_;
}

