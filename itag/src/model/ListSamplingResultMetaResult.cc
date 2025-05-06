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

#include <alibabacloud/itag/model/ListSamplingResultMetaResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Itag;
using namespace AlibabaCloud::Itag::Model;

ListSamplingResultMetaResult::ListSamplingResultMetaResult() :
	ServiceResult()
{}

ListSamplingResultMetaResult::ListSamplingResultMetaResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListSamplingResultMetaResult::~ListSamplingResultMetaResult()
{}

void ListSamplingResultMetaResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["Result"];
	auto iTagSamplingStatsDTONode = resultNode["ITagSamplingStatsDTO"];
	if(!iTagSamplingStatsDTONode["HasNonCompleteTask"].isNull())
		result_.iTagSamplingStatsDTO.hasNonCompleteTask = std::stoi(iTagSamplingStatsDTONode["HasNonCompleteTask"].asString());
	if(!iTagSamplingStatsDTONode["SubUserTaskId"].isNull())
		result_.iTagSamplingStatsDTO.subUserTaskId = iTagSamplingStatsDTONode["SubUserTaskId"].asString();
	if(!iTagSamplingStatsDTONode["WorkUserMap"].isNull())
		result_.iTagSamplingStatsDTO.workUserMap = iTagSamplingStatsDTONode["WorkUserMap"].asString();
	if(!iTagSamplingStatsDTONode["MarkResultKVMap"].isNull())
		result_.iTagSamplingStatsDTO.markResultKVMap = iTagSamplingStatsDTONode["MarkResultKVMap"].asString();
	if(!iTagSamplingStatsDTONode["TotalSubTaskCount"].isNull())
		result_.iTagSamplingStatsDTO.totalSubTaskCount = iTagSamplingStatsDTONode["TotalSubTaskCount"].asString();
	if(!iTagSamplingStatsDTONode["TotalMarkItemCount"].isNull())
		result_.iTagSamplingStatsDTO.totalMarkItemCount = iTagSamplingStatsDTONode["TotalMarkItemCount"].asString();
	if(!iTagSamplingStatsDTONode["SubTaskAndMarkItemMap"].isNull())
		result_.iTagSamplingStatsDTO.subTaskAndMarkItemMap = iTagSamplingStatsDTONode["SubTaskAndMarkItemMap"].asString();
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

std::string ListSamplingResultMetaResult::getMsg()const
{
	return msg_;
}

bool ListSamplingResultMetaResult::getSucc()const
{
	return succ_;
}

std::string ListSamplingResultMetaResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListSamplingResultMetaResult::getErrInfo()const
{
	return errInfo_;
}

std::string ListSamplingResultMetaResult::getCode()const
{
	return code_;
}

ListSamplingResultMetaResult::Result ListSamplingResultMetaResult::getResult()const
{
	return result_;
}

