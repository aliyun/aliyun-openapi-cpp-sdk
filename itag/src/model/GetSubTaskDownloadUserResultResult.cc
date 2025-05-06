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

#include <alibabacloud/itag/model/GetSubTaskDownloadUserResultResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Itag;
using namespace AlibabaCloud::Itag::Model;

GetSubTaskDownloadUserResultResult::GetSubTaskDownloadUserResultResult() :
	ServiceResult()
{}

GetSubTaskDownloadUserResultResult::GetSubTaskDownloadUserResultResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetSubTaskDownloadUserResultResult::~GetSubTaskDownloadUserResultResult()
{}

void GetSubTaskDownloadUserResultResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["Result"];
	if(!resultNode["TaskId"].isNull())
		result_.taskId = resultNode["TaskId"].asString();
	if(!resultNode["SubTaskId"].isNull())
		result_.subTaskId = resultNode["SubTaskId"].asString();
	if(!resultNode["WorkNode"].isNull())
		result_.workNode = resultNode["WorkNode"].asString();
	if(!resultNode["UserMarkItemListMap"].isNull())
		result_.userMarkItemListMap = resultNode["UserMarkItemListMap"].asString();
	if(!resultNode["UserSubTaskMap"].isNull())
		result_.userSubTaskMap = resultNode["UserSubTaskMap"].asString();
	auto allMarkItemListNode = resultNode["MarkItemList"]["ITagSimpleMarkItemDTO"];
	for (auto resultNodeMarkItemListITagSimpleMarkItemDTO : allMarkItemListNode)
	{
		Result::ITagSimpleMarkItemDTO iTagSimpleMarkItemDTOObject;
		if(!resultNodeMarkItemListITagSimpleMarkItemDTO["MarkItemId"].isNull())
			iTagSimpleMarkItemDTOObject.markItemId = resultNodeMarkItemListITagSimpleMarkItemDTO["MarkItemId"].asString();
		if(!resultNodeMarkItemListITagSimpleMarkItemDTO["DataId"].isNull())
			iTagSimpleMarkItemDTOObject.dataId = resultNodeMarkItemListITagSimpleMarkItemDTO["DataId"].asString();
		if(!resultNodeMarkItemListITagSimpleMarkItemDTO["DatasetId"].isNull())
			iTagSimpleMarkItemDTOObject.datasetId = resultNodeMarkItemListITagSimpleMarkItemDTO["DatasetId"].asString();
		if(!resultNodeMarkItemListITagSimpleMarkItemDTO["State"].isNull())
			iTagSimpleMarkItemDTOObject.state = resultNodeMarkItemListITagSimpleMarkItemDTO["State"].asString();
		if(!resultNodeMarkItemListITagSimpleMarkItemDTO["Mine"].isNull())
			iTagSimpleMarkItemDTOObject.mine = std::stoi(resultNodeMarkItemListITagSimpleMarkItemDTO["Mine"].asString());
		if(!resultNodeMarkItemListITagSimpleMarkItemDTO["RejectFlag"].isNull())
			iTagSimpleMarkItemDTOObject.rejectFlag = std::stoi(resultNodeMarkItemListITagSimpleMarkItemDTO["RejectFlag"].asString());
		if(!resultNodeMarkItemListITagSimpleMarkItemDTO["FixedFlag"].isNull())
			iTagSimpleMarkItemDTOObject.fixedFlag = std::stoi(resultNodeMarkItemListITagSimpleMarkItemDTO["FixedFlag"].asString());
		if(!resultNodeMarkItemListITagSimpleMarkItemDTO["AbandonFlag"].isNull())
			iTagSimpleMarkItemDTOObject.abandonFlag = std::stoi(resultNodeMarkItemListITagSimpleMarkItemDTO["AbandonFlag"].asString());
		if(!resultNodeMarkItemListITagSimpleMarkItemDTO["Weight"].isNull())
			iTagSimpleMarkItemDTOObject.weight = std::stoi(resultNodeMarkItemListITagSimpleMarkItemDTO["Weight"].asString());
		if(!resultNodeMarkItemListITagSimpleMarkItemDTO["DataMeta"].isNull())
			iTagSimpleMarkItemDTOObject.dataMeta = resultNodeMarkItemListITagSimpleMarkItemDTO["DataMeta"].asString();
		auto allMarkResultListNode = resultNodeMarkItemListITagSimpleMarkItemDTO["MarkResultList"]["ITagSimpleUserMarkResultDTO"];
		for (auto resultNodeMarkItemListITagSimpleMarkItemDTOMarkResultListITagSimpleUserMarkResultDTO : allMarkResultListNode)
		{
			Result::ITagSimpleMarkItemDTO::ITagSimpleUserMarkResultDTO markResultListObject;
			if(!resultNodeMarkItemListITagSimpleMarkItemDTOMarkResultListITagSimpleUserMarkResultDTO["MarkResultId"].isNull())
				markResultListObject.markResultId = resultNodeMarkItemListITagSimpleMarkItemDTOMarkResultListITagSimpleUserMarkResultDTO["MarkResultId"].asString();
			if(!resultNodeMarkItemListITagSimpleMarkItemDTOMarkResultListITagSimpleUserMarkResultDTO["MarkTitle"].isNull())
				markResultListObject.markTitle = resultNodeMarkItemListITagSimpleMarkItemDTOMarkResultListITagSimpleUserMarkResultDTO["MarkTitle"].asString();
			if(!resultNodeMarkItemListITagSimpleMarkItemDTOMarkResultListITagSimpleUserMarkResultDTO["MarkResult"].isNull())
				markResultListObject.markResult = resultNodeMarkItemListITagSimpleMarkItemDTOMarkResultListITagSimpleUserMarkResultDTO["MarkResult"].asString();
			if(!resultNodeMarkItemListITagSimpleMarkItemDTOMarkResultListITagSimpleUserMarkResultDTO["QuestionId"].isNull())
				markResultListObject.questionId = resultNodeMarkItemListITagSimpleMarkItemDTOMarkResultListITagSimpleUserMarkResultDTO["QuestionId"].asString();
			if(!resultNodeMarkItemListITagSimpleMarkItemDTOMarkResultListITagSimpleUserMarkResultDTO["ResultType"].isNull())
				markResultListObject.resultType = resultNodeMarkItemListITagSimpleMarkItemDTOMarkResultListITagSimpleUserMarkResultDTO["ResultType"].asString();
			if(!resultNodeMarkItemListITagSimpleMarkItemDTOMarkResultListITagSimpleUserMarkResultDTO["Version"].isNull())
				markResultListObject.version = resultNodeMarkItemListITagSimpleMarkItemDTOMarkResultListITagSimpleUserMarkResultDTO["Version"].asString();
			if(!resultNodeMarkItemListITagSimpleMarkItemDTOMarkResultListITagSimpleUserMarkResultDTO["UserMarkResultId"].isNull())
				markResultListObject.userMarkResultId = resultNodeMarkItemListITagSimpleMarkItemDTOMarkResultListITagSimpleUserMarkResultDTO["UserMarkResultId"].asString();
			iTagSimpleMarkItemDTOObject.markResultList.push_back(markResultListObject);
		}
		result_.markItemList.push_back(iTagSimpleMarkItemDTOObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["ErrInfo"].isNull())
		errInfo_ = value["ErrInfo"].asString();
	if(!value["Msg"].isNull())
		msg_ = value["Msg"].asString();
	if(!value["Succ"].isNull())
		succ_ = value["Succ"].asString() == "true";
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();

}

std::string GetSubTaskDownloadUserResultResult::getMsg()const
{
	return msg_;
}

bool GetSubTaskDownloadUserResultResult::getSucc()const
{
	return succ_;
}

std::string GetSubTaskDownloadUserResultResult::getErrorCode()const
{
	return errorCode_;
}

std::string GetSubTaskDownloadUserResultResult::getErrInfo()const
{
	return errInfo_;
}

std::string GetSubTaskDownloadUserResultResult::getCode()const
{
	return code_;
}

GetSubTaskDownloadUserResultResult::Result GetSubTaskDownloadUserResultResult::getResult()const
{
	return result_;
}

