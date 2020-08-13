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

#include <alibabacloud/imageprocess/model/DetectLungNoduleRequest.h>

using AlibabaCloud::Imageprocess::Model::DetectLungNoduleRequest;

DetectLungNoduleRequest::DetectLungNoduleRequest() :
	RpcServiceRequest("imageprocess", "2020-03-20", "DetectLungNodule")
{
	setMethod(HttpRequest::Method::Post);
}

DetectLungNoduleRequest::~DetectLungNoduleRequest()
{}

std::vector<DetectLungNoduleRequest::URLList> DetectLungNoduleRequest::getURLList()const
{
	return uRLList_;
}

void DetectLungNoduleRequest::setURLList(const std::vector<URLList>& uRLList)
{
	uRLList_ = uRLList;
	for(int dep1 = 0; dep1!= uRLList.size(); dep1++) {
		auto uRLListObj = uRLList.at(dep1);
		std::string uRLListObjStr = "URLList." + std::to_string(dep1 + 1);
		setParameter(uRLListObjStr + ".URL", uRLListObj.uRL);
	}
}

bool DetectLungNoduleRequest::getAsync()const
{
	return async_;
}

void DetectLungNoduleRequest::setAsync(bool async)
{
	async_ = async;
	setBodyParameter("Async", async ? "true" : "false");
}

