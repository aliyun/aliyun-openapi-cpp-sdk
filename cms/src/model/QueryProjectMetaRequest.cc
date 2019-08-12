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

#include <alibabacloud/cms/model/QueryProjectMetaRequest.h>

using AlibabaCloud::Cms::Model::QueryProjectMetaRequest;

QueryProjectMetaRequest::QueryProjectMetaRequest() :
	RpcServiceRequest("cms", "2018-03-08", "QueryProjectMeta")
{}

QueryProjectMetaRequest::~QueryProjectMetaRequest()
{}

int QueryProjectMetaRequest::getPageSize()const
{
	return pageSize_;
}

void QueryProjectMetaRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

int QueryProjectMetaRequest::getPageNumber()const
{
	return pageNumber_;
}

void QueryProjectMetaRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", pageNumber);
}

std::string QueryProjectMetaRequest::getLabels()const
{
	return labels_;
}

void QueryProjectMetaRequest::setLabels(const std::string& labels)
{
	labels_ = labels;
	setCoreParameter("Labels", labels);
}

