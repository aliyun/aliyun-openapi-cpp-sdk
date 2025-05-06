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

#include <alibabacloud/itag/model/GetMarkResultResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Itag;
using namespace AlibabaCloud::Itag::Model;

GetMarkResultResult::GetMarkResultResult() :
	ServiceResult()
{}

GetMarkResultResult::GetMarkResultResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetMarkResultResult::~GetMarkResultResult()
{}

void GetMarkResultResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["Result"];
	if(!resultNode["PageNum"].isNull())
		result_.pageNum = std::stol(resultNode["PageNum"].asString());
	if(!resultNode["PageSize"].isNull())
		result_.pageSize = std::stol(resultNode["PageSize"].asString());
	if(!resultNode["Total"].isNull())
		result_.total = std::stol(resultNode["Total"].asString());
	if(!resultNode["TotalPage"].isNull())
		result_.totalPage = std::stol(resultNode["TotalPage"].asString());
	auto allListNode = resultNode["List"]["ITagMarkResultReport"];
	for (auto resultNodeListITagMarkResultReport : allListNode)
	{
		Result::ITagMarkResultReport iTagMarkResultReportObject;
		if(!resultNodeListITagMarkResultReport["UpdateTime"].isNull())
			iTagMarkResultReportObject.updateTime = resultNodeListITagMarkResultReport["UpdateTime"].asString();
		if(!resultNodeListITagMarkResultReport["LabelType"].isNull())
			iTagMarkResultReportObject.labelType = resultNodeListITagMarkResultReport["LabelType"].asString();
		if(!resultNodeListITagMarkResultReport["MarkTitle"].isNull())
			iTagMarkResultReportObject.markTitle = resultNodeListITagMarkResultReport["MarkTitle"].asString();
		auto allLabelListNode = resultNodeListITagMarkResultReport["LabelList"]["ITagMarkResultDetail"];
		for (auto resultNodeListITagMarkResultReportLabelListITagMarkResultDetail : allLabelListNode)
		{
			Result::ITagMarkResultReport::ITagMarkResultDetail labelListObject;
			if(!resultNodeListITagMarkResultReportLabelListITagMarkResultDetail["LabelName"].isNull())
				labelListObject.labelName = resultNodeListITagMarkResultReportLabelListITagMarkResultDetail["LabelName"].asString();
			if(!resultNodeListITagMarkResultReportLabelListITagMarkResultDetail["LabelRate"].isNull())
				labelListObject.labelRate = resultNodeListITagMarkResultReportLabelListITagMarkResultDetail["LabelRate"].asString();
			if(!resultNodeListITagMarkResultReportLabelListITagMarkResultDetail["LabelCount"].isNull())
				labelListObject.labelCount = std::stoi(resultNodeListITagMarkResultReportLabelListITagMarkResultDetail["LabelCount"].asString());
			iTagMarkResultReportObject.labelList.push_back(labelListObject);
		}
		result_.list.push_back(iTagMarkResultReportObject);
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

std::string GetMarkResultResult::getMsg()const
{
	return msg_;
}

bool GetMarkResultResult::getSucc()const
{
	return succ_;
}

std::string GetMarkResultResult::getErrorCode()const
{
	return errorCode_;
}

std::string GetMarkResultResult::getErrInfo()const
{
	return errInfo_;
}

std::string GetMarkResultResult::getCode()const
{
	return code_;
}

GetMarkResultResult::Result GetMarkResultResult::getResult()const
{
	return result_;
}

