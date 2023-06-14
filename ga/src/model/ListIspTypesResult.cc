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

#include <alibabacloud/ga/model/ListIspTypesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ga;
using namespace AlibabaCloud::Ga::Model;

ListIspTypesResult::ListIspTypesResult() :
	ServiceResult()
{}

ListIspTypesResult::ListIspTypesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListIspTypesResult::~ListIspTypesResult()
{}

void ListIspTypesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allIspTypeList = value["IspTypeList"]["IspTypeList"];
	for (const auto &item : allIspTypeList)
		ispTypeList_.push_back(item.asString());

}

std::vector<std::string> ListIspTypesResult::getIspTypeList()const
{
	return ispTypeList_;
}

