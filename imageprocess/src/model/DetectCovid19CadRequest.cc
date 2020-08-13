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

#include <alibabacloud/imageprocess/model/DetectCovid19CadRequest.h>

using AlibabaCloud::Imageprocess::Model::DetectCovid19CadRequest;

DetectCovid19CadRequest::DetectCovid19CadRequest() :
	RpcServiceRequest("imageprocess", "2020-03-20", "DetectCovid19Cad")
{
	setMethod(HttpRequest::Method::Post);
}

DetectCovid19CadRequest::~DetectCovid19CadRequest()
{}

std::vector<DetectCovid19CadRequest::URLList> DetectCovid19CadRequest::getURLList()const
{
	return uRLList_;
}

void DetectCovid19CadRequest::setURLList(const std::vector<URLList>& uRLList)
{
	uRLList_ = uRLList;
	for(int dep1 = 0; dep1!= uRLList.size(); dep1++) {
		auto uRLListObj = uRLList.at(dep1);
		std::string uRLListObjStr = "URLList." + std::to_string(dep1 + 1);
		setParameter(uRLListObjStr + ".URL", uRLListObj.uRL);
	}
}

bool DetectCovid19CadRequest::getAsync()const
{
	return async_;
}

void DetectCovid19CadRequest::setAsync(bool async)
{
	async_ = async;
	setBodyParameter("Async", async ? "true" : "false");
}

