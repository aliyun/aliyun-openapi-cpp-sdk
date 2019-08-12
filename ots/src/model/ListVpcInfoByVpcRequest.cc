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
{}

ListVpcInfoByVpcRequest::~ListVpcInfoByVpcRequest()
{}

std::string ListVpcInfoByVpcRequest::getAccess_key_id()const
{
	return access_key_id_;
}

void ListVpcInfoByVpcRequest::setAccess_key_id(const std::string& access_key_id)
{
	access_key_id_ = access_key_id;
	setCoreParameter("Access_key_id", std::to_string(access_key_id));
}

long ListVpcInfoByVpcRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ListVpcInfoByVpcRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string ListVpcInfoByVpcRequest::getVpcId()const
{
	return vpcId_;
}

void ListVpcInfoByVpcRequest::setVpcId(const std::string& vpcId)
{
	vpcId_ = vpcId;
	setCoreParameter("VpcId", std::to_string(vpcId));
}

long ListVpcInfoByVpcRequest::getPageSize()const
{
	return pageSize_;
}

void ListVpcInfoByVpcRequest::setPageSize(long pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

long ListVpcInfoByVpcRequest::getPageNum()const
{
	return pageNum_;
}

void ListVpcInfoByVpcRequest::setPageNum(long pageNum)
{
	pageNum_ = pageNum;
	setCoreParameter("PageNum", pageNum);
}

std::vector<ListVpcInfoByVpcRequest::TagInfo> ListVpcInfoByVpcRequest::getTagInfo()const
{
	return tagInfo_;
}

void ListVpcInfoByVpcRequest::setTagInfo(const std::vector<TagInfo>& tagInfo)
{
	tagInfo_ = tagInfo;
	int i = 0;
	for(int i = 0; i!= tagInfo.size(); i++)	{
		auto obj = tagInfo.at(i);
		std::string str ="TagInfo."+ std::to_string(i);
		setCoreParameter(str + ".TagValue", std::to_string(obj.tagValue));
		setCoreParameter(str + ".TagKey", std::to_string(obj.tagKey));
	}
}

