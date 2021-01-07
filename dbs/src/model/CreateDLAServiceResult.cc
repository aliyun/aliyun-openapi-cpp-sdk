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

#include <alibabacloud/dbs/model/CreateDLAServiceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dbs;
using namespace AlibabaCloud::Dbs::Model;

CreateDLAServiceResult::CreateDLAServiceResult() :
	ServiceResult()
{}

CreateDLAServiceResult::CreateDLAServiceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateDLAServiceResult::~CreateDLAServiceResult()
{}

void CreateDLAServiceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrCode"].isNull())
		errCode_ = value["ErrCode"].asString();
	if(!value["ErrMessage"].isNull())
		errMessage_ = value["ErrMessage"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());

}

int CreateDLAServiceResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string CreateDLAServiceResult::getErrMessage()const
{
	return errMessage_;
}

bool CreateDLAServiceResult::getSuccess()const
{
	return success_;
}

std::string CreateDLAServiceResult::getErrCode()const
{
	return errCode_;
}

