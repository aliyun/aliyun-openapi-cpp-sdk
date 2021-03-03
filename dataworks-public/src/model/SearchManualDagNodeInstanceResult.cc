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

#include <alibabacloud/dataworks-public/model/SearchManualDagNodeInstanceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dataworks_public;
using namespace AlibabaCloud::Dataworks_public::Model;

SearchManualDagNodeInstanceResult::SearchManualDagNodeInstanceResult() :
	ServiceResult()
{}

SearchManualDagNodeInstanceResult::SearchManualDagNodeInstanceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

SearchManualDagNodeInstanceResult::~SearchManualDagNodeInstanceResult()
{}

void SearchManualDagNodeInstanceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["NodeInsInfo"];
	for (auto valueDataNodeInsInfo : allDataNode)
	{
		NodeInsInfo dataObject;
		if(!valueDataNodeInsInfo["InstanceId"].isNull())
			dataObject.instanceId = std::stol(valueDataNodeInsInfo["InstanceId"].asString());
		if(!valueDataNodeInsInfo["DagId"].isNull())
			dataObject.dagId = std::stol(valueDataNodeInsInfo["DagId"].asString());
		if(!valueDataNodeInsInfo["DagType"].isNull())
			dataObject.dagType = std::stoi(valueDataNodeInsInfo["DagType"].asString());
		if(!valueDataNodeInsInfo["Status"].isNull())
			dataObject.status = std::stoi(valueDataNodeInsInfo["Status"].asString());
		if(!valueDataNodeInsInfo["Bizdate"].isNull())
			dataObject.bizdate = valueDataNodeInsInfo["Bizdate"].asString();
		if(!valueDataNodeInsInfo["ParaValue"].isNull())
			dataObject.paraValue = valueDataNodeInsInfo["ParaValue"].asString();
		if(!valueDataNodeInsInfo["FinishTime"].isNull())
			dataObject.finishTime = valueDataNodeInsInfo["FinishTime"].asString();
		if(!valueDataNodeInsInfo["BeginWaitTimeTime"].isNull())
			dataObject.beginWaitTimeTime = valueDataNodeInsInfo["BeginWaitTimeTime"].asString();
		if(!valueDataNodeInsInfo["BeginWaitResTime"].isNull())
			dataObject.beginWaitResTime = valueDataNodeInsInfo["BeginWaitResTime"].asString();
		if(!valueDataNodeInsInfo["BeginRunningTime"].isNull())
			dataObject.beginRunningTime = valueDataNodeInsInfo["BeginRunningTime"].asString();
		if(!valueDataNodeInsInfo["CreateTime"].isNull())
			dataObject.createTime = valueDataNodeInsInfo["CreateTime"].asString();
		if(!valueDataNodeInsInfo["ModifyTime"].isNull())
			dataObject.modifyTime = valueDataNodeInsInfo["ModifyTime"].asString();
		if(!valueDataNodeInsInfo["NodeName"].isNull())
			dataObject.nodeName = valueDataNodeInsInfo["NodeName"].asString();
		data_.push_back(dataObject);
	}
	if(!value["ErrCode"].isNull())
		errCode_ = value["ErrCode"].asString();
	if(!value["ErrMsg"].isNull())
		errMsg_ = value["ErrMsg"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string SearchManualDagNodeInstanceResult::getErrMsg()const
{
	return errMsg_;
}

std::vector<SearchManualDagNodeInstanceResult::NodeInsInfo> SearchManualDagNodeInstanceResult::getData()const
{
	return data_;
}

bool SearchManualDagNodeInstanceResult::getSuccess()const
{
	return success_;
}

std::string SearchManualDagNodeInstanceResult::getErrCode()const
{
	return errCode_;
}

