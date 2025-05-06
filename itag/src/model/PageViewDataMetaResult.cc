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

#include <alibabacloud/itag/model/PageViewDataMetaResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Itag;
using namespace AlibabaCloud::Itag::Model;

PageViewDataMetaResult::PageViewDataMetaResult() :
	ServiceResult()
{}

PageViewDataMetaResult::PageViewDataMetaResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

PageViewDataMetaResult::~PageViewDataMetaResult()
{}

void PageViewDataMetaResult::parse(const std::string &payload)
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
	auto allListNode = resultNode["List"]["ListItem"];
	for (auto resultNodeListListItem : allListNode)
	{
		Result::ListItem listItemObject;
		if(!resultNodeListListItem["DatasetId"].isNull())
			listItemObject.datasetId = resultNodeListListItem["DatasetId"].asString();
		if(!resultNodeListListItem["Id"].isNull())
			listItemObject.id = resultNodeListListItem["Id"].asString();
		if(!resultNodeListListItem["OutDataId"].isNull())
			listItemObject.outDataId = resultNodeListListItem["OutDataId"].asString();
		if(!resultNodeListListItem["OutGroupKey"].isNull())
			listItemObject.outGroupKey = resultNodeListListItem["OutGroupKey"].asString();
		if(!resultNodeListListItem["BatchNo"].isNull())
			listItemObject.batchNo = resultNodeListListItem["BatchNo"].asString();
		if(!resultNodeListListItem["MetaInfos"].isNull())
			listItemObject.metaInfos = resultNodeListListItem["MetaInfos"].asString();
		result_.list.push_back(listItemObject);
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

std::string PageViewDataMetaResult::getMsg()const
{
	return msg_;
}

bool PageViewDataMetaResult::getSucc()const
{
	return succ_;
}

std::string PageViewDataMetaResult::getErrorCode()const
{
	return errorCode_;
}

std::string PageViewDataMetaResult::getErrInfo()const
{
	return errInfo_;
}

std::string PageViewDataMetaResult::getCode()const
{
	return code_;
}

PageViewDataMetaResult::Result PageViewDataMetaResult::getResult()const
{
	return result_;
}

