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

#include <alibabacloud/adb/model/GetViewDDLResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Adb;
using namespace AlibabaCloud::Adb::Model;

GetViewDDLResult::GetViewDDLResult() :
	ServiceResult()
{}

GetViewDDLResult::GetViewDDLResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetViewDDLResult::~GetViewDDLResult()
{}

void GetViewDDLResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["SQL"].isNull())
		sQL_ = value["SQL"].asString();

}

std::string GetViewDDLResult::getSQL()const
{
	return sQL_;
}

