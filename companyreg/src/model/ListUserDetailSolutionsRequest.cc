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

#include <alibabacloud/companyreg/model/ListUserDetailSolutionsRequest.h>

using AlibabaCloud::Companyreg::Model::ListUserDetailSolutionsRequest;

ListUserDetailSolutionsRequest::ListUserDetailSolutionsRequest() :
	RpcServiceRequest("companyreg", "2020-03-06", "ListUserDetailSolutions")
{
	setMethod(HttpRequest::Method::Post);
}

ListUserDetailSolutionsRequest::~ListUserDetailSolutionsRequest()
{}

std::string ListUserDetailSolutionsRequest::getBizType()const
{
	return bizType_;
}

void ListUserDetailSolutionsRequest::setBizType(const std::string& bizType)
{
	bizType_ = bizType;
	setParameter("BizType", bizType);
}

int ListUserDetailSolutionsRequest::getPageSize()const
{
	return pageSize_;
}

void ListUserDetailSolutionsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string ListUserDetailSolutionsRequest::getIntentionBizId()const
{
	return intentionBizId_;
}

void ListUserDetailSolutionsRequest::setIntentionBizId(const std::string& intentionBizId)
{
	intentionBizId_ = intentionBizId;
	setParameter("IntentionBizId", intentionBizId);
}

int ListUserDetailSolutionsRequest::getPageNum()const
{
	return pageNum_;
}

void ListUserDetailSolutionsRequest::setPageNum(int pageNum)
{
	pageNum_ = pageNum;
	setParameter("PageNum", std::to_string(pageNum));
}

