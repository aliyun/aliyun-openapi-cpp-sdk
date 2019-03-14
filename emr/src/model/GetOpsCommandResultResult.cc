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

#include <alibabacloud/emr/model/GetOpsCommandResultResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

GetOpsCommandResultResult::GetOpsCommandResultResult() :
	ServiceResult()
{}

GetOpsCommandResultResult::GetOpsCommandResultResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetOpsCommandResultResult::~GetOpsCommandResultResult()
{}

void GetOpsCommandResultResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	if(!value["Content"].isNull())
		content_ = value["Content"].asString();
	if(!value["Cursor"].isNull())
		cursor_ = std::stol(value["Cursor"].asString());
	if(!value["Finished"].isNull())
		finished_ = value["Finished"].asString() == "true";

}

bool GetOpsCommandResultResult::getFinished()const
{
	return finished_;
}

std::string GetOpsCommandResultResult::getContent()const
{
	return content_;
}

long GetOpsCommandResultResult::getCursor()const
{
	return cursor_;
}

