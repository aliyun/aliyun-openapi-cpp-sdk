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

#include <alibabacloud/tdsr/model/SaveFileResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Tdsr;
using namespace AlibabaCloud::Tdsr::Model;

SaveFileResult::SaveFileResult() :
	ServiceResult()
{}

SaveFileResult::SaveFileResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

SaveFileResult::~SaveFileResult()
{}

void SaveFileResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrMessage"].isNull())
		errMessage_ = value["ErrMessage"].asString();
	if(!value["Data"].isNull())
		data_ = value["Data"].asString();
	if(!value["ObjectString"].isNull())
		objectString_ = value["ObjectString"].asString();

}

std::string SaveFileResult::getObjectString()const
{
	return objectString_;
}

std::string SaveFileResult::getData()const
{
	return data_;
}

std::string SaveFileResult::getErrMessage()const
{
	return errMessage_;
}

bool SaveFileResult::getSuccess()const
{
	return success_;
}

