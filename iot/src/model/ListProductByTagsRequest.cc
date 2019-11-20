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

#include <alibabacloud/iot/model/ListProductByTagsRequest.h>

using AlibabaCloud::Iot::Model::ListProductByTagsRequest;

ListProductByTagsRequest::ListProductByTagsRequest() :
	RpcServiceRequest("iot", "2018-01-20", "ListProductByTags")
{
	setMethod(HttpRequest::Method::Post);
}

ListProductByTagsRequest::~ListProductByTagsRequest()
{}

int ListProductByTagsRequest::getCurrentPage()const
{
	return currentPage_;
}

void ListProductByTagsRequest::setCurrentPage(int currentPage)
{
	currentPage_ = currentPage;
	setCoreParameter("CurrentPage", std::to_string(currentPage));
}

std::string ListProductByTagsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListProductByTagsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::vector<ListProductByTagsRequest::ProductTag> ListProductByTagsRequest::getProductTag()const
{
	return productTag_;
}

void ListProductByTagsRequest::setProductTag(const std::vector<ProductTag>& productTag)
{
	productTag_ = productTag;
	for(int dep1 = 0; dep1!= productTag.size(); dep1++) {
		auto productTagObj = productTag.at(dep1);
		std::string productTagObjStr = "ProductTag." + std::to_string(dep1);
		setCoreParameter(productTagObjStr + ".TagValue", productTagObj.tagValue);
		setCoreParameter(productTagObjStr + ".TagKey", productTagObj.tagKey);
	}
}

std::string ListProductByTagsRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void ListProductByTagsRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setCoreParameter("IotInstanceId", iotInstanceId);
}

int ListProductByTagsRequest::getPageSize()const
{
	return pageSize_;
}

void ListProductByTagsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

