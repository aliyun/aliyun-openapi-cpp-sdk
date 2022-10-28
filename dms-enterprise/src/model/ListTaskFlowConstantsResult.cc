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

#include <alibabacloud/dms-enterprise/model/ListTaskFlowConstantsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dms_enterprise;
using namespace AlibabaCloud::Dms_enterprise::Model;

ListTaskFlowConstantsResult::ListTaskFlowConstantsResult() :
	ServiceResult()
{}

ListTaskFlowConstantsResult::ListTaskFlowConstantsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListTaskFlowConstantsResult::~ListTaskFlowConstantsResult()
{}

void ListTaskFlowConstantsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDagConstantsNode = value["DagConstants"]["DagConstant"];
	for (auto valueDagConstantsDagConstant : allDagConstantsNode)
	{
		DagConstant dagConstantsObject;
		if(!valueDagConstantsDagConstant["Key"].isNull())
			dagConstantsObject.key = valueDagConstantsDagConstant["Key"].asString();
		if(!valueDagConstantsDagConstant["Value"].isNull())
			dagConstantsObject.value = valueDagConstantsDagConstant["Value"].asString();
		dagConstants_.push_back(dagConstantsObject);
	}
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string ListTaskFlowConstantsResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListTaskFlowConstantsResult::getErrorMessage()const
{
	return errorMessage_;
}

bool ListTaskFlowConstantsResult::getSuccess()const
{
	return success_;
}

std::vector<ListTaskFlowConstantsResult::DagConstant> ListTaskFlowConstantsResult::getDagConstants()const
{
	return dagConstants_;
}

