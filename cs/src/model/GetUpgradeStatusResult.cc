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

#include <alibabacloud/cs/model/GetUpgradeStatusResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CS;
using namespace AlibabaCloud::CS::Model;

GetUpgradeStatusResult::GetUpgradeStatusResult() :
	ServiceResult()
{}

GetUpgradeStatusResult::GetUpgradeStatusResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetUpgradeStatusResult::~GetUpgradeStatusResult()
{}

void GetUpgradeStatusResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["error_message"].isNull())
		error_message_ = value["error_message"].asString();
	if(!value["precheck_report_id"].isNull())
		precheck_report_id_ = value["precheck_report_id"].asString();
	if(!value["upgrade_step"].isNull())
		upgrade_step_ = value["upgrade_step"].asString();
	if(!value["status"].isNull())
		status_ = value["status"].asString();

}

std::string GetUpgradeStatusResult::getError_message()const
{
	return error_message_;
}

std::string GetUpgradeStatusResult::getStatus()const
{
	return status_;
}

std::string GetUpgradeStatusResult::getPrecheck_report_id()const
{
	return precheck_report_id_;
}

std::string GetUpgradeStatusResult::getUpgrade_step()const
{
	return upgrade_step_;
}

