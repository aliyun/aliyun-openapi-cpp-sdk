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

#include <alibabacloud/emr/model/ListJobExecutionPlanParamsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

ListJobExecutionPlanParamsResult::ListJobExecutionPlanParamsResult() :
	ServiceResult()
{}

ListJobExecutionPlanParamsResult::ListJobExecutionPlanParamsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListJobExecutionPlanParamsResult::~ListJobExecutionPlanParamsResult()
{}

void ListJobExecutionPlanParamsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allParamInfoList = value["ParamInfoList"]["ParamInfo"];
	for (auto value : allParamInfoList)
	{
		ParamInfo paramInfoListObject;
		if(!value["ParamBizType"].isNull())
			paramInfoListObject.paramBizType = value["ParamBizType"].asString();
		if(!value["RelateId"].isNull())
			paramInfoListObject.relateId = value["RelateId"].asString();
		if(!value["ParamName"].isNull())
			paramInfoListObject.paramName = value["ParamName"].asString();
		if(!value["ParamValue"].isNull())
			paramInfoListObject.paramValue = value["ParamValue"].asString();
		if(!value["UtcCreateTimestamp"].isNull())
			paramInfoListObject.utcCreateTimestamp = std::stol(value["UtcCreateTimestamp"].asString());
		if(!value["UtcModifiedTimestamp"].isNull())
			paramInfoListObject.utcModifiedTimestamp = std::stol(value["UtcModifiedTimestamp"].asString());
		paramInfoList_.push_back(paramInfoListObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString();
	if(!value["ErrCode"].isNull())
		errCode_ = value["ErrCode"].asString();
	if(!value["ErrMsg"].isNull())
		errMsg_ = value["ErrMsg"].asString();

}

std::string ListJobExecutionPlanParamsResult::getErrMsg()const
{
	return errMsg_;
}

std::vector<ListJobExecutionPlanParamsResult::ParamInfo> ListJobExecutionPlanParamsResult::getParamInfoList()const
{
	return paramInfoList_;
}

std::string ListJobExecutionPlanParamsResult::getSuccess()const
{
	return success_;
}

std::string ListJobExecutionPlanParamsResult::getErrCode()const
{
	return errCode_;
}

