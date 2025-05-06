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

#include <alibabacloud/itag/model/GetUserMarkItemInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Itag;
using namespace AlibabaCloud::Itag::Model;

GetUserMarkItemInfoResult::GetUserMarkItemInfoResult() :
	ServiceResult()
{}

GetUserMarkItemInfoResult::GetUserMarkItemInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetUserMarkItemInfoResult::~GetUserMarkItemInfoResult()
{}

void GetUserMarkItemInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto msgInfoNode = value["MsgInfo"];
	if(!msgInfoNode["Msg"].isNull())
		msgInfo_.msg = msgInfoNode["Msg"].asString();
	if(!msgInfoNode["MsgCn"].isNull())
		msgInfo_.msgCn = msgInfoNode["MsgCn"].asString();
	auto resultNode = value["Result"];
	if(!resultNode["UserMarkItemId"].isNull())
		result_.userMarkItemId = resultNode["UserMarkItemId"].asString();
	if(!resultNode["ConfirmRange"].isNull())
		result_.confirmRange = resultNode["ConfirmRange"].asString();
	if(!resultNode["IsConfirmed"].isNull())
		result_.isConfirmed = resultNode["IsConfirmed"].asString();
	if(!resultNode["NeedConfirm"].isNull())
		result_.needConfirm = resultNode["NeedConfirm"].asString();
	if(!resultNode["FeedbackRemark"].isNull())
		result_.feedbackRemark = resultNode["FeedbackRemark"].asString();
	if(!resultNode["FeedbackFlag"].isNull())
		result_.feedbackFlag = std::stoi(resultNode["FeedbackFlag"].asString());
	if(!resultNode["Operator"].isNull())
		result_._operator = resultNode["Operator"].asString();
	if(!resultNode["IsVoteEqual"].isNull())
		result_.isVoteEqual = resultNode["IsVoteEqual"].asString() == "true";
	if(!resultNode["MarkItemId"].isNull())
		result_.markItemId = resultNode["MarkItemId"].asString();
	if(!resultNode["DataId"].isNull())
		result_.dataId = resultNode["DataId"].asString();
	if(!resultNode["DatasetId"].isNull())
		result_.datasetId = resultNode["DatasetId"].asString();
	if(!resultNode["State"].isNull())
		result_.state = resultNode["State"].asString();
	if(!resultNode["Mine"].isNull())
		result_.mine = std::stoi(resultNode["Mine"].asString());
	if(!resultNode["SubTaskId"].isNull())
		result_.subTaskId = resultNode["SubTaskId"].asString();
	if(!resultNode["RejectFlag"].isNull())
		result_.rejectFlag = std::stoi(resultNode["RejectFlag"].asString());
	if(!resultNode["FixedFlag"].isNull())
		result_.fixedFlag = std::stoi(resultNode["FixedFlag"].asString());
	if(!resultNode["AbandonFlag"].isNull())
		result_.abandonFlag = std::stoi(resultNode["AbandonFlag"].asString());
	if(!resultNode["AbandonRemark"].isNull())
		result_.abandonRemark = resultNode["AbandonRemark"].asString();
	if(!resultNode["Weight"].isNull())
		result_.weight = std::stoi(resultNode["Weight"].asString());
	if(!resultNode["DataMeta"].isNull())
		result_.dataMeta = resultNode["DataMeta"].asString();
	auto allMarkResultListNode = resultNode["MarkResultList"]["MarkResultListItem"];
	for (auto resultNodeMarkResultListMarkResultListItem : allMarkResultListNode)
	{
		Result::MarkResultListItem markResultListItemObject;
		if(!resultNodeMarkResultListMarkResultListItem["UserMarkResultId"].isNull())
			markResultListItemObject.userMarkResultId = resultNodeMarkResultListMarkResultListItem["UserMarkResultId"].asString();
		if(!resultNodeMarkResultListMarkResultListItem["IsNeedVoteJudge"].isNull())
			markResultListItemObject.isNeedVoteJudge = resultNodeMarkResultListMarkResultListItem["IsNeedVoteJudge"].asString() == "true";
		if(!resultNodeMarkResultListMarkResultListItem["MarkResultId"].isNull())
			markResultListItemObject.markResultId = resultNodeMarkResultListMarkResultListItem["MarkResultId"].asString();
		if(!resultNodeMarkResultListMarkResultListItem["MarkTitle"].isNull())
			markResultListItemObject.markTitle = resultNodeMarkResultListMarkResultListItem["MarkTitle"].asString();
		if(!resultNodeMarkResultListMarkResultListItem["MarkResult"].isNull())
			markResultListItemObject.markResult = resultNodeMarkResultListMarkResultListItem["MarkResult"].asString();
		if(!resultNodeMarkResultListMarkResultListItem["QuestionId"].isNull())
			markResultListItemObject.questionId = resultNodeMarkResultListMarkResultListItem["QuestionId"].asString();
		if(!resultNodeMarkResultListMarkResultListItem["ResultType"].isNull())
			markResultListItemObject.resultType = resultNodeMarkResultListMarkResultListItem["ResultType"].asString();
		if(!resultNodeMarkResultListMarkResultListItem["Version"].isNull())
			markResultListItemObject.version = resultNodeMarkResultListMarkResultListItem["Version"].asString();
		if(!resultNodeMarkResultListMarkResultListItem["MarkTime"].isNull())
			markResultListItemObject.markTime = resultNodeMarkResultListMarkResultListItem["MarkTime"].asString();
		auto progressNode = value["Progress"];
		if(!progressNode["Total"].isNull())
			markResultListItemObject.progress.total = std::stoi(progressNode["Total"].asString());
		if(!progressNode["Finished"].isNull())
			markResultListItemObject.progress.finished = std::stoi(progressNode["Finished"].asString());
		result_.markResultList.push_back(markResultListItemObject);
	}
	auto allVoteInfoListNode = resultNode["VoteInfoList"]["VoteInfoListItem"];
	for (auto resultNodeVoteInfoListVoteInfoListItem : allVoteInfoListNode)
	{
		Result::VoteInfoListItem voteInfoListItemObject;
		if(!resultNodeVoteInfoListVoteInfoListItem["UserId"].isNull())
			voteInfoListItemObject.userId = resultNodeVoteInfoListVoteInfoListItem["UserId"].asString();
		if(!resultNodeVoteInfoListVoteInfoListItem["UserName"].isNull())
			voteInfoListItemObject.userName = resultNodeVoteInfoListVoteInfoListItem["UserName"].asString();
		if(!resultNodeVoteInfoListVoteInfoListItem["WorkFlow"].isNull())
			voteInfoListItemObject.workFlow = resultNodeVoteInfoListVoteInfoListItem["WorkFlow"].asString();
		if(!resultNodeVoteInfoListVoteInfoListItem["UserMarkItemId"].isNull())
			voteInfoListItemObject.userMarkItemId = resultNodeVoteInfoListVoteInfoListItem["UserMarkItemId"].asString();
		if(!resultNodeVoteInfoListVoteInfoListItem["IsAccept"].isNull())
			voteInfoListItemObject.isAccept = resultNodeVoteInfoListVoteInfoListItem["IsAccept"].asString() == "true";
		auto allMarkResultList1Node = resultNodeVoteInfoListVoteInfoListItem["MarkResultList"]["MarkResultListItem"];
		for (auto resultNodeVoteInfoListVoteInfoListItemMarkResultListMarkResultListItem : allMarkResultList1Node)
		{
			Result::VoteInfoListItem::MarkResultListItem2 markResultList1Object;
			if(!resultNodeVoteInfoListVoteInfoListItemMarkResultListMarkResultListItem["UserMarkResultId"].isNull())
				markResultList1Object.userMarkResultId = resultNodeVoteInfoListVoteInfoListItemMarkResultListMarkResultListItem["UserMarkResultId"].asString();
			if(!resultNodeVoteInfoListVoteInfoListItemMarkResultListMarkResultListItem["IsNeedVoteJudge"].isNull())
				markResultList1Object.isNeedVoteJudge = resultNodeVoteInfoListVoteInfoListItemMarkResultListMarkResultListItem["IsNeedVoteJudge"].asString() == "true";
			if(!resultNodeVoteInfoListVoteInfoListItemMarkResultListMarkResultListItem["MarkResultId"].isNull())
				markResultList1Object.markResultId = resultNodeVoteInfoListVoteInfoListItemMarkResultListMarkResultListItem["MarkResultId"].asString();
			if(!resultNodeVoteInfoListVoteInfoListItemMarkResultListMarkResultListItem["MarkTitle"].isNull())
				markResultList1Object.markTitle = resultNodeVoteInfoListVoteInfoListItemMarkResultListMarkResultListItem["MarkTitle"].asString();
			if(!resultNodeVoteInfoListVoteInfoListItemMarkResultListMarkResultListItem["MarkResult"].isNull())
				markResultList1Object.markResult = resultNodeVoteInfoListVoteInfoListItemMarkResultListMarkResultListItem["MarkResult"].asString();
			if(!resultNodeVoteInfoListVoteInfoListItemMarkResultListMarkResultListItem["QuestionId"].isNull())
				markResultList1Object.questionId = resultNodeVoteInfoListVoteInfoListItemMarkResultListMarkResultListItem["QuestionId"].asString();
			if(!resultNodeVoteInfoListVoteInfoListItemMarkResultListMarkResultListItem["ResultType"].isNull())
				markResultList1Object.resultType = resultNodeVoteInfoListVoteInfoListItemMarkResultListMarkResultListItem["ResultType"].asString();
			if(!resultNodeVoteInfoListVoteInfoListItemMarkResultListMarkResultListItem["Version"].isNull())
				markResultList1Object.version = resultNodeVoteInfoListVoteInfoListItemMarkResultListMarkResultListItem["Version"].asString();
			if(!resultNodeVoteInfoListVoteInfoListItemMarkResultListMarkResultListItem["MarkTime"].isNull())
				markResultList1Object.markTime = resultNodeVoteInfoListVoteInfoListItemMarkResultListMarkResultListItem["MarkTime"].asString();
			auto progress3Node = value["Progress"];
			if(!progress3Node["Total"].isNull())
				markResultList1Object.progress3.total = std::stoi(progress3Node["Total"].asString());
			if(!progress3Node["Finished"].isNull())
				markResultList1Object.progress3.finished = std::stoi(progress3Node["Finished"].asString());
			voteInfoListItemObject.markResultList1.push_back(markResultList1Object);
		}
		result_.voteInfoList.push_back(voteInfoListItemObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Msg"].isNull())
		msg_ = value["Msg"].asString();
	if(!value["Succ"].isNull())
		succ_ = value["Succ"].asString() == "true";
	if(!value["Rt"].isNull())
		rt_ = std::stol(value["Rt"].asString());
	if(!value["Host"].isNull())
		host_ = value["Host"].asString();
	if(!value["TraceId"].isNull())
		traceId_ = value["TraceId"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();

}

std::string GetUserMarkItemInfoResult::getMsg()const
{
	return msg_;
}

long GetUserMarkItemInfoResult::getRt()const
{
	return rt_;
}

GetUserMarkItemInfoResult::MsgInfo GetUserMarkItemInfoResult::getMsgInfo()const
{
	return msgInfo_;
}

bool GetUserMarkItemInfoResult::getSucc()const
{
	return succ_;
}

std::string GetUserMarkItemInfoResult::getTraceId()const
{
	return traceId_;
}

std::string GetUserMarkItemInfoResult::getHost()const
{
	return host_;
}

std::string GetUserMarkItemInfoResult::getErrorCode()const
{
	return errorCode_;
}

int GetUserMarkItemInfoResult::getCode()const
{
	return code_;
}

GetUserMarkItemInfoResult::Result GetUserMarkItemInfoResult::getResult()const
{
	return result_;
}

