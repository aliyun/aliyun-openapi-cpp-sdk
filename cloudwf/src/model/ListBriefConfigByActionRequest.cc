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

#include <alibabacloud/cloudwf/model/ListBriefConfigByActionRequest.h>

using AlibabaCloud::Cloudwf::Model::ListBriefConfigByActionRequest;

ListBriefConfigByActionRequest::ListBriefConfigByActionRequest() :
	RpcServiceRequest("cloudwf", "2017-03-28", "ListBriefConfigByAction")
{}

ListBriefConfigByActionRequest::~ListBriefConfigByActionRequest()
{}

long ListBriefConfigByActionRequest::getAncestorApgroupId()const
{
	return ancestorApgroupId_;
}

void ListBriefConfigByActionRequest::setAncestorApgroupId(long ancestorApgroupId)
{
	ancestorApgroupId_ = ancestorApgroupId;
	setCoreParameter("AncestorApgroupId", ancestorApgroupId);
}

int ListBriefConfigByActionRequest::getLimit()const
{
	return limit_;
}

void ListBriefConfigByActionRequest::setLimit(int limit)
{
	limit_ = limit;
	setCoreParameter("Limit", limit);
}

std::string ListBriefConfigByActionRequest::getFuzzySearch()const
{
	return fuzzySearch_;
}

void ListBriefConfigByActionRequest::setFuzzySearch(const std::string& fuzzySearch)
{
	fuzzySearch_ = fuzzySearch;
	setCoreParameter("FuzzySearch", fuzzySearch);
}

std::string ListBriefConfigByActionRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListBriefConfigByActionRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

