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

#include <alibabacloud/csb/model/FindInstanceListRequest.h>

using AlibabaCloud::CSB::Model::FindInstanceListRequest;

FindInstanceListRequest::FindInstanceListRequest() :
	RpcServiceRequest("csb", "2017-11-18", "FindInstanceList")
{}

FindInstanceListRequest::~FindInstanceListRequest()
{}

std::string FindInstanceListRequest::getRegionId()const
{
	return regionId_;
}

void FindInstanceListRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string FindInstanceListRequest::getSearchTxt()const
{
	return searchTxt_;
}

void FindInstanceListRequest::setSearchTxt(const std::string& searchTxt)
{
	searchTxt_ = searchTxt;
	setCoreParameter("SearchTxt", searchTxt);
}

long FindInstanceListRequest::getCsbId()const
{
	return csbId_;
}

void FindInstanceListRequest::setCsbId(long csbId)
{
	csbId_ = csbId;
	setCoreParameter("CsbId", std::to_string(csbId));
}

int FindInstanceListRequest::getPageNum()const
{
	return pageNum_;
}

void FindInstanceListRequest::setPageNum(int pageNum)
{
	pageNum_ = pageNum;
	setCoreParameter("PageNum", std::to_string(pageNum));
}

int FindInstanceListRequest::getStatus()const
{
	return status_;
}

void FindInstanceListRequest::setStatus(int status)
{
	status_ = status;
	setCoreParameter("Status", std::to_string(status));
}

