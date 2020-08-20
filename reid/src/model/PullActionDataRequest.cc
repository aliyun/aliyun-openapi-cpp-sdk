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

#include <alibabacloud/reid/model/PullActionDataRequest.h>

using AlibabaCloud::Reid::Model::PullActionDataRequest;

PullActionDataRequest::PullActionDataRequest() :
	RpcServiceRequest("reid", "2019-09-28", "PullActionData")
{
	setMethod(HttpRequest::Method::Post);
}

PullActionDataRequest::~PullActionDataRequest()
{}

int PullActionDataRequest::getPartitionIndex()const
{
	return partitionIndex_;
}

void PullActionDataRequest::setPartitionIndex(int partitionIndex)
{
	partitionIndex_ = partitionIndex;
	setBodyParameter("PartitionIndex", std::to_string(partitionIndex));
}

long PullActionDataRequest::getStoreId()const
{
	return storeId_;
}

void PullActionDataRequest::setStoreId(long storeId)
{
	storeId_ = storeId;
	setBodyParameter("StoreId", std::to_string(storeId));
}

long PullActionDataRequest::getEndMessageId()const
{
	return endMessageId_;
}

void PullActionDataRequest::setEndMessageId(long endMessageId)
{
	endMessageId_ = endMessageId;
	setBodyParameter("EndMessageId", std::to_string(endMessageId));
}

int PullActionDataRequest::getLimit()const
{
	return limit_;
}

void PullActionDataRequest::setLimit(int limit)
{
	limit_ = limit;
	setBodyParameter("Limit", std::to_string(limit));
}

long PullActionDataRequest::getStartMessageId()const
{
	return startMessageId_;
}

void PullActionDataRequest::setStartMessageId(long startMessageId)
{
	startMessageId_ = startMessageId;
	setBodyParameter("StartMessageId", std::to_string(startMessageId));
}

