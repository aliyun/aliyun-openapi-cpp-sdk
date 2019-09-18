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

#include <alibabacloud/mts/model/DeleteMcuJobResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mts;
using namespace AlibabaCloud::Mts::Model;

DeleteMcuJobResult::DeleteMcuJobResult() :
	ServiceResult()
{}

DeleteMcuJobResult::DeleteMcuJobResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DeleteMcuJobResult::~DeleteMcuJobResult()
{}

void DeleteMcuJobResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allNonExistJobIds = value["NonExistJobIds"]["String"];
	for (const auto &item : allNonExistJobIds)
		nonExistJobIds_.push_back(item.asString());
	auto allDeletedJobIds = value["DeletedJobIds"]["String"];
	for (const auto &item : allDeletedJobIds)
		deletedJobIds_.push_back(item.asString());

}

std::vector<std::string> DeleteMcuJobResult::getNonExistJobIds()const
{
	return nonExistJobIds_;
}

std::vector<std::string> DeleteMcuJobResult::getDeletedJobIds()const
{
	return deletedJobIds_;
}

