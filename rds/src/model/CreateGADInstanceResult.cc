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

#include <alibabacloud/rds/model/CreateGADInstanceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

CreateGADInstanceResult::CreateGADInstanceResult() :
	ServiceResult()
{}

CreateGADInstanceResult::CreateGADInstanceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateGADInstanceResult::~CreateGADInstanceResult()
{}

void CreateGADInstanceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["Result"];
	if(!resultNode["CreateMemberCount"].isNull())
		result_.createMemberCount = resultNode["CreateMemberCount"].asString();
	if(!resultNode["GadInstanceName"].isNull())
		result_.gadInstanceName = resultNode["GadInstanceName"].asString();
	if(!resultNode["TaskID"].isNull())
		result_.taskID = resultNode["TaskID"].asString();

}

CreateGADInstanceResult::Result CreateGADInstanceResult::getResult()const
{
	return result_;
}

