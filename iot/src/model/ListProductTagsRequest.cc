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

#include <alibabacloud/iot/model/ListProductTagsRequest.h>

using AlibabaCloud::Iot::Model::ListProductTagsRequest;

ListProductTagsRequest::ListProductTagsRequest() :
	RpcServiceRequest("iot", "2018-01-20", "ListProductTags")
{}

ListProductTagsRequest::~ListProductTagsRequest()
{}

<<<<<<< HEAD
std::string ListProductTagsRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void ListProductTagsRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setCoreParameter("IotInstanceId", iotInstanceId);
}

std::string ListProductTagsRequest::getProductKey()const
{
	return productKey_;
}

void ListProductTagsRequest::setProductKey(const std::string& productKey)
{
	productKey_ = productKey;
	setCoreParameter("ProductKey", productKey);
}

std::string ListProductTagsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListProductTagsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

=======
std::string ListProductTagsRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void ListProductTagsRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setCoreParameter("IotInstanceId", iotInstanceId);
}

std::string ListProductTagsRequest::getProductKey()const
{
	return productKey_;
}

void ListProductTagsRequest::setProductKey(const std::string& productKey)
{
	productKey_ = productKey;
	setCoreParameter("ProductKey", productKey);
}

std::string ListProductTagsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListProductTagsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

>>>>>>> master
