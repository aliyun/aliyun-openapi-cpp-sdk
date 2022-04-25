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

#include <alibabacloud/dataworks-public/model/UpdateConnectionResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dataworks_public;
using namespace AlibabaCloud::Dataworks_public::Model;

UpdateConnectionResult::UpdateConnectionResult() :
	ServiceResult()
{}

UpdateConnectionResult::UpdateConnectionResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

UpdateConnectionResult::~UpdateConnectionResult()
{}

void UpdateConnectionResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = value["HttpStatusCode"].asString();
	if(!value["Data"].isNull())
		data_ = value["Data"].asString() == "true";
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string UpdateConnectionResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

bool UpdateConnectionResult::getData()const
{
	return data_;
}

bool UpdateConnectionResult::getSuccess()const
{
	return success_;
}

