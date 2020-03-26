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

#include <alibabacloud/ots/model/ListVpcInfoByVpcRequest.h>

using AlibabaCloud::Ots::Model::ListVpcInfoByVpcRequest;

ListVpcInfoByVpcRequest::ListVpcInfoByVpcRequest() :
	RpcServiceRequest("ots", "2016-06-20", "ListVpcInfoByVpc")
{
	setMethod(HttpRequest::Method::Get);
}

ListVpcInfoByVpcRequest::~ListVpcInfoByVpcRequest()
{}

long ListVpcInfoByVpcRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ListVpcInfoByVpcRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

long ListVpcInfoByVpcRequest::getPageNum()const
{
	return pageNum_;
}

void ListVpcInfoByVpcRequest::setPageNum(long pageNum)
{
	pageNum_ = pageNum;
	setParameter("PageNum", std::to_string(pageNum));
}

std::string ListVpcInfoByVpcRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListVpcInfoByVpcRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ListVpcInfoByVpcRequest::getVpcId()const
{
	return vpcId_;
}

void ListVpcInfoByVpcRequest::setVpcId(const std::string& vpcId)
{
	vpcId_ = vpcId;
	setParameter("VpcId", vpcId);
}

long ListVpcInfoByVpcRequest::getPageSize()const
{
	return pageSize_;
}

void ListVpcInfoByVpcRequest::setPageSize(long pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::vector<ListVpcInfoByVpcRequest::TagInfo> ListVpcInfoByVpcRequest::getTagInfo()const
{
	return tagInfo_;
}

void ListVpcInfoByVpcRequest::setTagInfo(const std::vector<TagInfo>& tagInfo)
{
	tagInfo_ = tagInfo;
	for(int dep1 = 0; dep1!= tagInfo.size(); dep1++) {
		auto tagInfoObj = tagInfo.at(dep1);
		std::string tagInfoObjStr = "TagInfo." + std::to_string(dep1 + 1);
		setParameter(tagInfoObjStr + ".TagValue", tagInfoObj.tagValue);
		setParameter(tagInfoObjStr + ".TagKey", tagInfoObj.tagKey);
	}
}

