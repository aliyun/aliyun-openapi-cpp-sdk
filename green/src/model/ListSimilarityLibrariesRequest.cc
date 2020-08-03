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

#include <alibabacloud/green/model/ListSimilarityLibrariesRequest.h>

using AlibabaCloud::Green::Model::ListSimilarityLibrariesRequest;

ListSimilarityLibrariesRequest::ListSimilarityLibrariesRequest() :
	RoaServiceRequest("green", "2018-05-09")
{
	setResourcePath("/green/similarity/library/list");
	setMethod(HttpRequest::Method::Post);
}

ListSimilarityLibrariesRequest::~ListSimilarityLibrariesRequest()
{}

std::string ListSimilarityLibrariesRequest::getClientInfo()const
{
	return clientInfo_;
}

void ListSimilarityLibrariesRequest::setClientInfo(const std::string& clientInfo)
{
	clientInfo_ = clientInfo;
	setParameter("ClientInfo", clientInfo);
}

