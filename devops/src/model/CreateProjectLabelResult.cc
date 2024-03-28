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

#include <alibabacloud/devops/model/CreateProjectLabelResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Devops;
using namespace AlibabaCloud::Devops::Model;

CreateProjectLabelResult::CreateProjectLabelResult() :
	ServiceResult()
{}

CreateProjectLabelResult::CreateProjectLabelResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateProjectLabelResult::~CreateProjectLabelResult()
{}

void CreateProjectLabelResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["result"];
	if(!resultNode["id"].isNull())
		result_.id = resultNode["id"].asString();
	if(!resultNode["name"].isNull())
		result_.name = resultNode["name"].asString();
	if(!resultNode["color"].isNull())
		result_.color = resultNode["color"].asString();
	if(!resultNode["description"].isNull())
		result_.description = resultNode["description"].asString();
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();
	if(!value["success"].isNull())
		success_ = value["success"].asString() == "true";
	if(!value["errorCode"].isNull())
		errorCode_ = value["errorCode"].asString();
	if(!value["errorMessage"].isNull())
		errorMessage_ = value["errorMessage"].asString();

}

std::string CreateProjectLabelResult::getRequestId()const
{
	return requestId_;
}

std::string CreateProjectLabelResult::getErrorCode()const
{
	return errorCode_;
}

std::string CreateProjectLabelResult::getErrorMessage()const
{
	return errorMessage_;
}

bool CreateProjectLabelResult::getSuccess()const
{
	return success_;
}

CreateProjectLabelResult::Result CreateProjectLabelResult::getResult()const
{
	return result_;
}

