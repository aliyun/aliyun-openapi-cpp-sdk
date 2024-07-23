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

#include <alibabacloud/mts/model/ListFpShotDBResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mts;
using namespace AlibabaCloud::Mts::Model;

ListFpShotDBResult::ListFpShotDBResult() :
	ServiceResult()
{}

ListFpShotDBResult::ListFpShotDBResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListFpShotDBResult::~ListFpShotDBResult()
{}

void ListFpShotDBResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allFpShotDBListNode = value["FpShotDBList"]["FpShotDB"];
	for (auto valueFpShotDBListFpShotDB : allFpShotDBListNode)
	{
		FpShotDB fpShotDBListObject;
		if(!valueFpShotDBListFpShotDB["Status"].isNull())
			fpShotDBListObject.status = valueFpShotDBListFpShotDB["Status"].asString();
		if(!valueFpShotDBListFpShotDB["Description"].isNull())
			fpShotDBListObject.description = valueFpShotDBListFpShotDB["Description"].asString();
		if(!valueFpShotDBListFpShotDB["Name"].isNull())
			fpShotDBListObject.name = valueFpShotDBListFpShotDB["Name"].asString();
		if(!valueFpShotDBListFpShotDB["ModelId"].isNull())
			fpShotDBListObject.modelId = std::stoi(valueFpShotDBListFpShotDB["ModelId"].asString());
		if(!valueFpShotDBListFpShotDB["FpDBId"].isNull())
			fpShotDBListObject.fpDBId = valueFpShotDBListFpShotDB["FpDBId"].asString();
		if(!valueFpShotDBListFpShotDB["InstanceId"].isNull())
			fpShotDBListObject.instanceId = valueFpShotDBListFpShotDB["InstanceId"].asString();
		fpShotDBList_.push_back(fpShotDBListObject);
	}
	auto allNonExistIds = value["NonExistIds"]["String"];
	for (const auto &item : allNonExistIds)
		nonExistIds_.push_back(item.asString());

}

std::vector<ListFpShotDBResult::FpShotDB> ListFpShotDBResult::getFpShotDBList()const
{
	return fpShotDBList_;
}

std::vector<std::string> ListFpShotDBResult::getNonExistIds()const
{
	return nonExistIds_;
}

