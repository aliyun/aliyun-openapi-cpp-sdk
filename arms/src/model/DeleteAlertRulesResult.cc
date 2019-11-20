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

#include <alibabacloud/arms/model/DeleteAlertRulesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ARMS;
using namespace AlibabaCloud::ARMS::Model;

DeleteAlertRulesResult::DeleteAlertRulesResult() :
	ServiceResult()
{}

DeleteAlertRulesResult::DeleteAlertRulesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DeleteAlertRulesResult::~DeleteAlertRulesResult()
{}

void DeleteAlertRulesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["IsSuccess"].isNull())
		isSuccess_ = value["IsSuccess"].asString() == "true";

}

bool DeleteAlertRulesResult::getIsSuccess()const
{
	return isSuccess_;
}

