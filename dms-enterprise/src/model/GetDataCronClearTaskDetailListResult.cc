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

#include <alibabacloud/dms-enterprise/model/GetDataCronClearTaskDetailListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dms_enterprise;
using namespace AlibabaCloud::Dms_enterprise::Model;

GetDataCronClearTaskDetailListResult::GetDataCronClearTaskDetailListResult() :
	ServiceResult()
{}

GetDataCronClearTaskDetailListResult::GetDataCronClearTaskDetailListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetDataCronClearTaskDetailListResult::~GetDataCronClearTaskDetailListResult()
{}

void GetDataCronClearTaskDetailListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataCronClearTaskDetailListNode = value["DataCronClearTaskDetailList"]["DataCronClearTaskDetail"];
	for (auto valueDataCronClearTaskDetailListDataCronClearTaskDetail : allDataCronClearTaskDetailListNode)
	{
		DataCronClearTaskDetail dataCronClearTaskDetailListObject;
		if(!valueDataCronClearTaskDetailListDataCronClearTaskDetail["DBTaskGroupId"].isNull())
			dataCronClearTaskDetailListObject.dBTaskGroupId = std::stol(valueDataCronClearTaskDetailListDataCronClearTaskDetail["DBTaskGroupId"].asString());
		if(!valueDataCronClearTaskDetailListDataCronClearTaskDetail["jobStatus"].isNull())
			dataCronClearTaskDetailListObject.jobStatus = valueDataCronClearTaskDetailListDataCronClearTaskDetail["jobStatus"].asString();
		if(!valueDataCronClearTaskDetailListDataCronClearTaskDetail["ActualAffectRows"].isNull())
			dataCronClearTaskDetailListObject.actualAffectRows = std::stol(valueDataCronClearTaskDetailListDataCronClearTaskDetail["ActualAffectRows"].asString());
		if(!valueDataCronClearTaskDetailListDataCronClearTaskDetail["CreateTime"].isNull())
			dataCronClearTaskDetailListObject.createTime = valueDataCronClearTaskDetailListDataCronClearTaskDetail["CreateTime"].asString();
		dataCronClearTaskDetailList_.push_back(dataCronClearTaskDetailListObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());

}

long GetDataCronClearTaskDetailListResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<GetDataCronClearTaskDetailListResult::DataCronClearTaskDetail> GetDataCronClearTaskDetailListResult::getDataCronClearTaskDetailList()const
{
	return dataCronClearTaskDetailList_;
}

std::string GetDataCronClearTaskDetailListResult::getErrorCode()const
{
	return errorCode_;
}

std::string GetDataCronClearTaskDetailListResult::getErrorMessage()const
{
	return errorMessage_;
}

bool GetDataCronClearTaskDetailListResult::getSuccess()const
{
	return success_;
}

