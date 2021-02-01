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

#include <alibabacloud/facebody/model/SearchBodyTraceRequest.h>

using AlibabaCloud::Facebody::Model::SearchBodyTraceRequest;

SearchBodyTraceRequest::SearchBodyTraceRequest() :
	RpcServiceRequest("facebody", "2019-12-30", "SearchBodyTrace")
{
	setMethod(HttpRequest::Method::Post);
}

SearchBodyTraceRequest::~SearchBodyTraceRequest()
{}

float SearchBodyTraceRequest::getMinScore()const
{
	return minScore_;
}

void SearchBodyTraceRequest::setMinScore(float minScore)
{
	minScore_ = minScore;
	setBodyParameter("MinScore", std::to_string(minScore));
}

long SearchBodyTraceRequest::getLimit()const
{
	return limit_;
}

void SearchBodyTraceRequest::setLimit(long limit)
{
	limit_ = limit;
	setBodyParameter("Limit", std::to_string(limit));
}

Array SearchBodyTraceRequest::getImages()const
{
	return images_;
}

void SearchBodyTraceRequest::setImages(const Array& images)
{
	images_ = images;
	setBodyParameter("Images", std::to_string(images));
}

long SearchBodyTraceRequest::getDbId()const
{
	return dbId_;
}

void SearchBodyTraceRequest::setDbId(long dbId)
{
	dbId_ = dbId;
	setBodyParameter("DbId", std::to_string(dbId));
}

