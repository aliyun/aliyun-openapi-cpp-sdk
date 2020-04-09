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

#include <alibabacloud/retailcloud/model/CreateNodeLabelResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Retailcloud;
using namespace AlibabaCloud::Retailcloud::Model;

CreateNodeLabelResult::CreateNodeLabelResult() :
	ServiceResult()
{}

CreateNodeLabelResult::CreateNodeLabelResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateNodeLabelResult::~CreateNodeLabelResult()
{}

void CreateNodeLabelResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["Result"];
	if(!resultNode["ClusterId"].isNull())
		result_.clusterId = resultNode["ClusterId"].asString();
	if(!resultNode["Id"].isNull())
		result_.id = std::stol(resultNode["Id"].asString());
	if(!resultNode["LabelKey"].isNull())
		result_.labelKey = resultNode["LabelKey"].asString();
	if(!resultNode["LabelValue"].isNull())
		result_.labelValue = resultNode["LabelValue"].asString();
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["ErrMsg"].isNull())
		errMsg_ = value["ErrMsg"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string CreateNodeLabelResult::getErrMsg()const
{
	return errMsg_;
}

int CreateNodeLabelResult::getCode()const
{
	return code_;
}

bool CreateNodeLabelResult::getSuccess()const
{
	return success_;
}

CreateNodeLabelResult::Result CreateNodeLabelResult::getResult()const
{
	return result_;
}

