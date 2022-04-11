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

#include <alibabacloud/vod/model/DeleteMezzaninesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vod;
using namespace AlibabaCloud::Vod::Model;

DeleteMezzaninesResult::DeleteMezzaninesResult() :
	ServiceResult()
{}

DeleteMezzaninesResult::DeleteMezzaninesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DeleteMezzaninesResult::~DeleteMezzaninesResult()
{}

void DeleteMezzaninesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allUnRemoveableVideoIds = value["UnRemoveableVideoIds"]["VideoId"];
	for (const auto &item : allUnRemoveableVideoIds)
		unRemoveableVideoIds_.push_back(item.asString());
	auto allNonExistVideoIds = value["NonExistVideoIds"]["VideoId"];
	for (const auto &item : allNonExistVideoIds)
		nonExistVideoIds_.push_back(item.asString());

}

std::vector<std::string> DeleteMezzaninesResult::getNonExistVideoIds()const
{
	return nonExistVideoIds_;
}

std::vector<std::string> DeleteMezzaninesResult::getUnRemoveableVideoIds()const
{
	return unRemoveableVideoIds_;
}

