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

#include <alibabacloud/cloudphoto/model/ListRegisteredTagsRequest.h>

using AlibabaCloud::CloudPhoto::Model::ListRegisteredTagsRequest;

ListRegisteredTagsRequest::ListRegisteredTagsRequest() :
	RpcServiceRequest("cloudphoto", "2017-07-11", "ListRegisteredTags")
{}

ListRegisteredTagsRequest::~ListRegisteredTagsRequest()
{}

std::string ListRegisteredTagsRequest::getStoreName()const
{
	return storeName_;
}

void ListRegisteredTagsRequest::setStoreName(const std::string& storeName)
{
	storeName_ = storeName;
	setParameter("StoreName", storeName);
}

std::vector<std::string> ListRegisteredTagsRequest::getLang()const
{
	return lang_;
}

void ListRegisteredTagsRequest::setLang(const std::vector<std::string>& lang)
{
	lang_ = lang;
	for(int i = 0; i!= lang.size(); i++)
		setParameter("Lang."+ std::to_string(i), lang.at(i));
}

