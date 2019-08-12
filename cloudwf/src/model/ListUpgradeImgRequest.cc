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

#include <alibabacloud/cloudwf/model/ListUpgradeImgRequest.h>

using AlibabaCloud::Cloudwf::Model::ListUpgradeImgRequest;

ListUpgradeImgRequest::ListUpgradeImgRequest() :
	RpcServiceRequest("cloudwf", "2017-03-28", "ListUpgradeImg")
{}

ListUpgradeImgRequest::~ListUpgradeImgRequest()
{}

int ListUpgradeImgRequest::getLength()const
{
	return length_;
}

void ListUpgradeImgRequest::setLength(int length)
{
	length_ = length;
	setCoreParameter("Length", length);
}

int ListUpgradeImgRequest::getPageIndex()const
{
	return pageIndex_;
}

void ListUpgradeImgRequest::setPageIndex(int pageIndex)
{
	pageIndex_ = pageIndex;
	setCoreParameter("PageIndex", pageIndex);
}

std::string ListUpgradeImgRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListUpgradeImgRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

