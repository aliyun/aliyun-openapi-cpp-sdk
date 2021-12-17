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

#include <alibabacloud/nas/model/DescribeTagsRequest.h>

using AlibabaCloud::NAS::Model::DescribeTagsRequest;

DescribeTagsRequest::DescribeTagsRequest() :
	RpcServiceRequest("nas", "2017-06-26", "DescribeTags")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeTagsRequest::~DescribeTagsRequest()
{}

int DescribeTagsRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeTagsRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

int DescribeTagsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeTagsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::vector<DescribeTagsRequest::Tag> DescribeTagsRequest::getTag()const
{
	return tag_;
}

void DescribeTagsRequest::setTag(const std::vector<Tag>& tag)
{
	tag_ = tag;
	for(int dep1 = 0; dep1!= tag.size(); dep1++) {
		auto tagObj = tag.at(dep1);
		std::string tagObjStr = "Tag." + std::to_string(dep1 + 1);
		setParameter(tagObjStr + ".Value", tagObj.value);
		setParameter(tagObjStr + ".Key", tagObj.key);
	}
}

std::string DescribeTagsRequest::getFileSystemId()const
{
	return fileSystemId_;
}

void DescribeTagsRequest::setFileSystemId(const std::string& fileSystemId)
{
	fileSystemId_ = fileSystemId;
	setParameter("FileSystemId", fileSystemId);
}

