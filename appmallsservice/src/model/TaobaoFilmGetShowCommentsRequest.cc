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

#include <alibabacloud/appmallsservice/model/TaobaoFilmGetShowCommentsRequest.h>

using AlibabaCloud::AppMallsService::Model::TaobaoFilmGetShowCommentsRequest;

TaobaoFilmGetShowCommentsRequest::TaobaoFilmGetShowCommentsRequest() :
	RpcServiceRequest("appmallsservice", "2018-02-24", "TaobaoFilmGetShowComments")
{
	setMethod(HttpRequest::Method::Post);
}

TaobaoFilmGetShowCommentsRequest::~TaobaoFilmGetShowCommentsRequest()
{}

long TaobaoFilmGetShowCommentsRequest::getShowId()const
{
	return showId_;
}

void TaobaoFilmGetShowCommentsRequest::setShowId(long showId)
{
	showId_ = showId;
	setParameter("ShowId", std::to_string(showId));
}

long TaobaoFilmGetShowCommentsRequest::getPageIndex()const
{
	return pageIndex_;
}

void TaobaoFilmGetShowCommentsRequest::setPageIndex(long pageIndex)
{
	pageIndex_ = pageIndex;
	setParameter("PageIndex", std::to_string(pageIndex));
}

std::string TaobaoFilmGetShowCommentsRequest::getParamsJson()const
{
	return paramsJson_;
}

void TaobaoFilmGetShowCommentsRequest::setParamsJson(const std::string& paramsJson)
{
	paramsJson_ = paramsJson;
	setParameter("ParamsJson", paramsJson);
}

