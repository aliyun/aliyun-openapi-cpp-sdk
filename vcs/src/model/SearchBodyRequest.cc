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

#include <alibabacloud/vcs/model/SearchBodyRequest.h>

using AlibabaCloud::Vcs::Model::SearchBodyRequest;

SearchBodyRequest::SearchBodyRequest() :
	RpcServiceRequest("vcs", "2020-05-15", "SearchBody")
{
	setMethod(HttpRequest::Method::Post);
}

SearchBodyRequest::~SearchBodyRequest()
{}

std::string SearchBodyRequest::getCorpId()const
{
	return corpId_;
}

void SearchBodyRequest::setCorpId(const std::string& corpId)
{
	corpId_ = corpId;
	setBodyParameter("CorpId", corpId);
}

std::string SearchBodyRequest::getGbId()const
{
	return gbId_;
}

void SearchBodyRequest::setGbId(const std::string& gbId)
{
	gbId_ = gbId;
	setBodyParameter("GbId", gbId);
}

long SearchBodyRequest::getStartTimeStamp()const
{
	return startTimeStamp_;
}

void SearchBodyRequest::setStartTimeStamp(long startTimeStamp)
{
	startTimeStamp_ = startTimeStamp;
	setBodyParameter("StartTimeStamp", std::to_string(startTimeStamp));
}

long SearchBodyRequest::getEndTimeStamp()const
{
	return endTimeStamp_;
}

void SearchBodyRequest::setEndTimeStamp(long endTimeStamp)
{
	endTimeStamp_ = endTimeStamp;
	setBodyParameter("EndTimeStamp", std::to_string(endTimeStamp));
}

int SearchBodyRequest::getPageNo()const
{
	return pageNo_;
}

void SearchBodyRequest::setPageNo(int pageNo)
{
	pageNo_ = pageNo;
	setBodyParameter("PageNo", std::to_string(pageNo));
}

int SearchBodyRequest::getPageSize()const
{
	return pageSize_;
}

void SearchBodyRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setBodyParameter("PageSize", std::to_string(pageSize));
}

std::string SearchBodyRequest::getOptionList()const
{
	return optionList_;
}

void SearchBodyRequest::setOptionList(const std::string& optionList)
{
	optionList_ = optionList;
	setBodyParameter("OptionList", optionList);
}

