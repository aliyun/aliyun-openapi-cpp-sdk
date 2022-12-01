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

#include <alibabacloud/opensearch/model/GetSortScriptFileResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OpenSearch;
using namespace AlibabaCloud::OpenSearch::Model;

GetSortScriptFileResult::GetSortScriptFileResult() :
	ServiceResult()
{}

GetSortScriptFileResult::GetSortScriptFileResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetSortScriptFileResult::~GetSortScriptFileResult()
{}

void GetSortScriptFileResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["result"];
	if(!resultNode["content"].isNull())
		result_.content = resultNode["content"].asString();
	if(!resultNode["createTime"].isNull())
		result_.createTime = resultNode["createTime"].asString();
	if(!resultNode["modifyTime"].isNull())
		result_.modifyTime = resultNode["modifyTime"].asString();
	if(!resultNode["version"].isNull())
		result_.version = std::stol(resultNode["version"].asString());
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();

}

std::string GetSortScriptFileResult::getRequestId()const
{
	return requestId_;
}

GetSortScriptFileResult::Result GetSortScriptFileResult::getResult()const
{
	return result_;
}

