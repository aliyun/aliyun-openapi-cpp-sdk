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

#include <alibabacloud/dcdn/model/CreateSlrAndSlsProjectResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dcdn;
using namespace AlibabaCloud::Dcdn::Model;

CreateSlrAndSlsProjectResult::CreateSlrAndSlsProjectResult() :
	ServiceResult()
{}

CreateSlrAndSlsProjectResult::CreateSlrAndSlsProjectResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateSlrAndSlsProjectResult::~CreateSlrAndSlsProjectResult()
{}

void CreateSlrAndSlsProjectResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto slsInfoNode = value["SlsInfo"];
	if(!slsInfoNode["Project"].isNull())
		slsInfo_.project = slsInfoNode["Project"].asString();
	if(!slsInfoNode["LogStore"].isNull())
		slsInfo_.logStore = slsInfoNode["LogStore"].asString();
	if(!slsInfoNode["EndPoint"].isNull())
		slsInfo_.endPoint = slsInfoNode["EndPoint"].asString();
	if(!slsInfoNode["Region"].isNull())
		slsInfo_.region = slsInfoNode["Region"].asString();

}

CreateSlrAndSlsProjectResult::SlsInfo CreateSlrAndSlsProjectResult::getSlsInfo()const
{
	return slsInfo_;
}

