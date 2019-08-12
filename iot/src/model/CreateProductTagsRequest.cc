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

#include <alibabacloud/iot/model/CreateProductTagsRequest.h>

using AlibabaCloud::Iot::Model::CreateProductTagsRequest;

CreateProductTagsRequest::CreateProductTagsRequest() :
	RpcServiceRequest("iot", "2018-01-20", "CreateProductTags")
{}

CreateProductTagsRequest::~CreateProductTagsRequest()
{}

std::vector<CreateProductTagsRequest::ProductTag> CreateProductTagsRequest::getProductTag()const
{
	return productTag_;
}

void CreateProductTagsRequest::setProductTag(const std::vector<ProductTag>& productTag)
{
	productTag_ = productTag;
	int i = 0;
	for(int i = 0; i!= productTag.size(); i++)	{
		auto obj = productTag.at(i);
		std::string str ="ProductTag."+ std::to_string(i);
		setCoreParameter(str + ".TagValue", std::to_string(obj.tagValue));
		setCoreParameter(str + ".TagKey", std::to_string(obj.tagKey));
	}
}

std::string CreateProductTagsRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void CreateProductTagsRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setCoreParameter("IotInstanceId", iotInstanceId);
}

std::string CreateProductTagsRequest::getProductKey()const
{
	return productKey_;
}

void CreateProductTagsRequest::setProductKey(const std::string& productKey)
{
	productKey_ = productKey;
	setCoreParameter("ProductKey", productKey);
}

std::string CreateProductTagsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateProductTagsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

