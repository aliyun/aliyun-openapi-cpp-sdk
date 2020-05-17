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

#include <alibabacloud/vcs/model/SearchFaceRequest.h>

using AlibabaCloud::Vcs::Model::SearchFaceRequest;

SearchFaceRequest::SearchFaceRequest() :
	RpcServiceRequest("vcs", "2020-05-15", "SearchFace")
{
	setMethod(HttpRequest::Method::Post);
}

SearchFaceRequest::~SearchFaceRequest()
{}

std::string SearchFaceRequest::getCorpId()const
{
	return corpId_;
}

void SearchFaceRequest::setCorpId(const std::string& corpId)
{
	corpId_ = corpId;
	setBodyParameter("CorpId", corpId);
}

std::string SearchFaceRequest::getGbId()const
{
	return gbId_;
}

void SearchFaceRequest::setGbId(const std::string& gbId)
{
	gbId_ = gbId;
	setBodyParameter("GbId", gbId);
}

long SearchFaceRequest::getStartTimeStamp()const
{
	return startTimeStamp_;
}

void SearchFaceRequest::setStartTimeStamp(long startTimeStamp)
{
	startTimeStamp_ = startTimeStamp;
	setBodyParameter("StartTimeStamp", std::to_string(startTimeStamp));
}

long SearchFaceRequest::getEndTimeStamp()const
{
	return endTimeStamp_;
}

void SearchFaceRequest::setEndTimeStamp(long endTimeStamp)
{
	endTimeStamp_ = endTimeStamp;
	setBodyParameter("EndTimeStamp", std::to_string(endTimeStamp));
}

int SearchFaceRequest::getPageNo()const
{
	return pageNo_;
}

void SearchFaceRequest::setPageNo(int pageNo)
{
	pageNo_ = pageNo;
	setBodyParameter("PageNo", std::to_string(pageNo));
}

int SearchFaceRequest::getPageSize()const
{
	return pageSize_;
}

void SearchFaceRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setBodyParameter("PageSize", std::to_string(pageSize));
}

std::string SearchFaceRequest::getOptionList()const
{
	return optionList_;
}

void SearchFaceRequest::setOptionList(const std::string& optionList)
{
	optionList_ = optionList;
	setBodyParameter("OptionList", optionList);
}

