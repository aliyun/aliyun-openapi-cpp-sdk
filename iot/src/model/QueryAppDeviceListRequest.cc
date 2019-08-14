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

#include <alibabacloud/iot/model/QueryAppDeviceListRequest.h>

using AlibabaCloud::Iot::Model::QueryAppDeviceListRequest;

QueryAppDeviceListRequest::QueryAppDeviceListRequest() :
	RpcServiceRequest("iot", "2018-01-20", "QueryAppDeviceList")
{}

QueryAppDeviceListRequest::~QueryAppDeviceListRequest()
{}

<<<<<<< HEAD
std::vector<std::string> QueryAppDeviceListRequest::getProductKeyList()const
{
	return productKeyList_;
}

void QueryAppDeviceListRequest::setProductKeyList(const std::vector<std::string>& productKeyList)
{
	productKeyList_ = productKeyList;
	for(int i = 0; i!= productKeyList.size(); i++)
		setCoreParameter("ProductKeyList."+ std::to_string(i), productKeyList.at(i));
}

std::vector<std::string> QueryAppDeviceListRequest::getCategoryKeyList()const
{
	return categoryKeyList_;
}

void QueryAppDeviceListRequest::setCategoryKeyList(const std::vector<std::string>& categoryKeyList)
{
	categoryKeyList_ = categoryKeyList;
	for(int i = 0; i!= categoryKeyList.size(); i++)
		setCoreParameter("CategoryKeyList."+ std::to_string(i), categoryKeyList.at(i));
}

std::string QueryAppDeviceListRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void QueryAppDeviceListRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setCoreParameter("IotInstanceId", iotInstanceId);
}

int QueryAppDeviceListRequest::getPageSize()const
{
	return pageSize_;
}

void QueryAppDeviceListRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

int QueryAppDeviceListRequest::getCurrentPage()const
{
	return currentPage_;
}

void QueryAppDeviceListRequest::setCurrentPage(int currentPage)
{
	currentPage_ = currentPage;
	setCoreParameter("CurrentPage", std::to_string(currentPage));
}

std::string QueryAppDeviceListRequest::getAppKey()const
{
	return appKey_;
}

void QueryAppDeviceListRequest::setAppKey(const std::string& appKey)
{
	appKey_ = appKey;
	setCoreParameter("AppKey", appKey);
}

std::vector<QueryAppDeviceListRequest::TagList> QueryAppDeviceListRequest::getTagList()const
{
	return tagList_;
}

void QueryAppDeviceListRequest::setTagList(const std::vector<TagList>& tagList)
{
	tagList_ = tagList;
	int i = 0;
	for(int i = 0; i!= tagList.size(); i++)	{
		auto obj = tagList.at(i);
		std::string str ="TagList."+ std::to_string(i);
		setCoreParameter(str + ".TagName", obj.tagName);
		setCoreParameter(str + ".TagValue", obj.tagValue);
	}
}

=======
std::vector<std::string> QueryAppDeviceListRequest::getProductKeyList()const
{
	return productKeyList_;
}

void QueryAppDeviceListRequest::setProductKeyList(const std::vector<std::string>& productKeyList)
{
	productKeyList_ = productKeyList;
	for(int i = 0; i!= productKeyList.size(); i++)
		setCoreParameter("ProductKeyList."+ std::to_string(i), productKeyList.at(i));
}

std::vector<std::string> QueryAppDeviceListRequest::getCategoryKeyList()const
{
	return categoryKeyList_;
}

void QueryAppDeviceListRequest::setCategoryKeyList(const std::vector<std::string>& categoryKeyList)
{
	categoryKeyList_ = categoryKeyList;
	for(int i = 0; i!= categoryKeyList.size(); i++)
		setCoreParameter("CategoryKeyList."+ std::to_string(i), categoryKeyList.at(i));
}

std::string QueryAppDeviceListRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void QueryAppDeviceListRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setCoreParameter("IotInstanceId", iotInstanceId);
}

int QueryAppDeviceListRequest::getPageSize()const
{
	return pageSize_;
}

void QueryAppDeviceListRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

int QueryAppDeviceListRequest::getCurrentPage()const
{
	return currentPage_;
}

void QueryAppDeviceListRequest::setCurrentPage(int currentPage)
{
	currentPage_ = currentPage;
	setCoreParameter("CurrentPage", std::to_string(currentPage));
}

std::string QueryAppDeviceListRequest::getAppKey()const
{
	return appKey_;
}

void QueryAppDeviceListRequest::setAppKey(const std::string& appKey)
{
	appKey_ = appKey;
	setCoreParameter("AppKey", appKey);
}

std::vector<QueryAppDeviceListRequest::TagList> QueryAppDeviceListRequest::getTagList()const
{
	return tagList_;
}

void QueryAppDeviceListRequest::setTagList(const std::vector<TagList>& tagList)
{
	tagList_ = tagList;
	int i = 0;
	for(int i = 0; i!= tagList.size(); i++)	{
		auto obj = tagList.at(i);
		std::string str ="TagList."+ std::to_string(i);
		setCoreParameter(str + ".TagName", obj.tagName);
		setCoreParameter(str + ".TagValue", obj.tagValue);
	}
}

>>>>>>> master
