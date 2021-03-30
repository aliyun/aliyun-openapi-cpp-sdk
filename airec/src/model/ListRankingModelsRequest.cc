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

#include <alibabacloud/airec/model/ListRankingModelsRequest.h>

using AlibabaCloud::Airec::Model::ListRankingModelsRequest;

ListRankingModelsRequest::ListRankingModelsRequest() :
	RoaServiceRequest("airec", "2020-11-26")
{
	setResourcePath("/v2/openapi/instances/[instanceId]/ranking-models");
	setMethod(HttpRequest::Method::Get);
}

ListRankingModelsRequest::~ListRankingModelsRequest()
{}

std::string ListRankingModelsRequest::getInstanceId()const
{
	return instanceId_;
}

void ListRankingModelsRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

int ListRankingModelsRequest::getSize()const
{
	return size_;
}

void ListRankingModelsRequest::setSize(int size)
{
	size_ = size;
	setParameter("Size", std::to_string(size));
}

std::string ListRankingModelsRequest::getRankingModelId()const
{
	return rankingModelId_;
}

void ListRankingModelsRequest::setRankingModelId(const std::string& rankingModelId)
{
	rankingModelId_ = rankingModelId;
	setParameter("RankingModelId", rankingModelId);
}

int ListRankingModelsRequest::getPage()const
{
	return page_;
}

void ListRankingModelsRequest::setPage(int page)
{
	page_ = page;
	setParameter("Page", std::to_string(page));
}

