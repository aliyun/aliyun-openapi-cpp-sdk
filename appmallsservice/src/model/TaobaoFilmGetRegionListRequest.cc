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

#include <alibabacloud/appmallsservice/model/TaobaoFilmGetRegionListRequest.h>

using AlibabaCloud::AppMallsService::Model::TaobaoFilmGetRegionListRequest;

TaobaoFilmGetRegionListRequest::TaobaoFilmGetRegionListRequest() :
	RpcServiceRequest("appmallsservice", "2018-02-24", "TaobaoFilmGetRegionList")
{
	setMethod(HttpRequest::Method::Post);
}

TaobaoFilmGetRegionListRequest::~TaobaoFilmGetRegionListRequest()
{}

std::string TaobaoFilmGetRegionListRequest::getParamsJson()const
{
	return paramsJson_;
}

void TaobaoFilmGetRegionListRequest::setParamsJson(const std::string& paramsJson)
{
	paramsJson_ = paramsJson;
	setParameter("ParamsJson", paramsJson);
}

