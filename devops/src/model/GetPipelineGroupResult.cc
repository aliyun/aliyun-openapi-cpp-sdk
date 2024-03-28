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

#include <alibabacloud/devops/model/GetPipelineGroupResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Devops;
using namespace AlibabaCloud::Devops::Model;

GetPipelineGroupResult::GetPipelineGroupResult() :
	ServiceResult()
{}

GetPipelineGroupResult::GetPipelineGroupResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetPipelineGroupResult::~GetPipelineGroupResult()
{}

void GetPipelineGroupResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto pipelineGroupNode = value["pipelineGroup"];
	if(!pipelineGroupNode["createTime"].isNull())
		pipelineGroup_.createTime = std::stol(pipelineGroupNode["createTime"].asString());
	if(!pipelineGroupNode["id"].isNull())
		pipelineGroup_.id = std::stol(pipelineGroupNode["id"].asString());
	if(!pipelineGroupNode["name"].isNull())
		pipelineGroup_.name = pipelineGroupNode["name"].asString();
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();
	if(!value["errorMessage"].isNull())
		errorMessage_ = value["errorMessage"].asString();
	if(!value["success"].isNull())
		success_ = value["success"].asString() == "true";
	if(!value["errorCode"].isNull())
		errorCode_ = value["errorCode"].asString();

}

std::string GetPipelineGroupResult::getRequestId()const
{
	return requestId_;
}

GetPipelineGroupResult::PipelineGroup GetPipelineGroupResult::getPipelineGroup()const
{
	return pipelineGroup_;
}

std::string GetPipelineGroupResult::getErrorCode()const
{
	return errorCode_;
}

std::string GetPipelineGroupResult::getErrorMessage()const
{
	return errorMessage_;
}

bool GetPipelineGroupResult::getSuccess()const
{
	return success_;
}

