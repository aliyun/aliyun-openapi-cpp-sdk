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

#include <alibabacloud/linkvisual/model/DeletePictureResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Linkvisual;
using namespace AlibabaCloud::Linkvisual::Model;

DeletePictureResult::DeletePictureResult() :
	ServiceResult()
{}

DeletePictureResult::DeletePictureResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DeletePictureResult::~DeletePictureResult()
{}

void DeletePictureResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["DeletedCount"].isNull())
		data_.deletedCount = std::stoi(dataNode["DeletedCount"].asString());
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

DeletePictureResult::Data DeletePictureResult::getData()const
{
	return data_;
}

std::string DeletePictureResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string DeletePictureResult::getCode()const
{
	return code_;
}

bool DeletePictureResult::getSuccess()const
{
	return success_;
}

