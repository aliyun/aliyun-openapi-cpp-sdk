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

#include <alibabacloud/emr/model/ModifyJobExecutionPlanFolderResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

ModifyJobExecutionPlanFolderResult::ModifyJobExecutionPlanFolderResult() :
	ServiceResult()
{}

ModifyJobExecutionPlanFolderResult::ModifyJobExecutionPlanFolderResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ModifyJobExecutionPlanFolderResult::~ModifyJobExecutionPlanFolderResult()
{}

void ModifyJobExecutionPlanFolderResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString();
	if(!value["ErrCode"].isNull())
		errCode_ = value["ErrCode"].asString();
	if(!value["ErrMsg"].isNull())
		errMsg_ = value["ErrMsg"].asString();
	if(!value["FolderId"].isNull())
		folderId_ = value["FolderId"].asString();

}

std::string ModifyJobExecutionPlanFolderResult::getErrMsg()const
{
	return errMsg_;
}

std::string ModifyJobExecutionPlanFolderResult::getFolderId()const
{
	return folderId_;
}

std::string ModifyJobExecutionPlanFolderResult::getSuccess()const
{
	return success_;
}

std::string ModifyJobExecutionPlanFolderResult::getErrCode()const
{
	return errCode_;
}

