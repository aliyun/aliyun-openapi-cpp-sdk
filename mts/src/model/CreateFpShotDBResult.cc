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

#include <alibabacloud/mts/model/CreateFpShotDBResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mts;
using namespace AlibabaCloud::Mts::Model;

CreateFpShotDBResult::CreateFpShotDBResult() :
	ServiceResult()
{}

CreateFpShotDBResult::CreateFpShotDBResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateFpShotDBResult::~CreateFpShotDBResult()
{}

void CreateFpShotDBResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto fpShotDBNode = value["FpShotDB"];
	if(!fpShotDBNode["Description"].isNull())
		fpShotDB_.description = fpShotDBNode["Description"].asString();
	if(!fpShotDBNode["State"].isNull())
		fpShotDB_.state = fpShotDBNode["State"].asString();
	if(!fpShotDBNode["Name"].isNull())
		fpShotDB_.name = fpShotDBNode["Name"].asString();
	if(!fpShotDBNode["FpDBId"].isNull())
		fpShotDB_.fpDBId = fpShotDBNode["FpDBId"].asString();
	if(!fpShotDBNode["ModelId"].isNull())
		fpShotDB_.modelId = std::stoi(fpShotDBNode["ModelId"].asString());
	if(!fpShotDBNode["Config"].isNull())
		fpShotDB_.config = fpShotDBNode["Config"].asString();
	if(!fpShotDBNode["InstanceId"].isNull())
		fpShotDB_.instanceId = fpShotDBNode["InstanceId"].asString();

}

CreateFpShotDBResult::FpShotDB CreateFpShotDBResult::getFpShotDB()const
{
	return fpShotDB_;
}

