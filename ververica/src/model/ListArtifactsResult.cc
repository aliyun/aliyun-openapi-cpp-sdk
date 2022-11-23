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

#include <alibabacloud/ververica/model/ListArtifactsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ververica;
using namespace AlibabaCloud::Ververica::Model;

ListArtifactsResult::ListArtifactsResult() :
	ServiceResult()
{}

ListArtifactsResult::ListArtifactsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListArtifactsResult::~ListArtifactsResult()
{}

void ListArtifactsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["success"].isNull())
		success_ = value["success"].asString() == "true";
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();
	if(!value["data"].isNull())
		data_ = value["data"].asString();

}

std::string ListArtifactsResult::getRequestId()const
{
	return requestId_;
}

std::string ListArtifactsResult::getData()const
{
	return data_;
}

bool ListArtifactsResult::getSuccess()const
{
	return success_;
}

