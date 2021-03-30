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

#include <alibabacloud/airec/model/ListSceneItemsRequest.h>

using AlibabaCloud::Airec::Model::ListSceneItemsRequest;

ListSceneItemsRequest::ListSceneItemsRequest() :
	RoaServiceRequest("airec", "2020-11-26")
{
	setResourcePath("/v2/openapi/instances/[instanceId]/scenes/[sceneId]/items");
	setMethod(HttpRequest::Method::Get);
}

ListSceneItemsRequest::~ListSceneItemsRequest()
{}

std::string ListSceneItemsRequest::getSelectionRuleId()const
{
	return selectionRuleId_;
}

void ListSceneItemsRequest::setSelectionRuleId(const std::string& selectionRuleId)
{
	selectionRuleId_ = selectionRuleId;
	setParameter("SelectionRuleId", selectionRuleId);
}

std::string ListSceneItemsRequest::getInstanceId()const
{
	return instanceId_;
}

void ListSceneItemsRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

int ListSceneItemsRequest::getSize()const
{
	return size_;
}

void ListSceneItemsRequest::setSize(int size)
{
	size_ = size;
	setParameter("Size", std::to_string(size));
}

int ListSceneItemsRequest::getQueryCount()const
{
	return queryCount_;
}

void ListSceneItemsRequest::setQueryCount(int queryCount)
{
	queryCount_ = queryCount;
	setParameter("QueryCount", std::to_string(queryCount));
}

std::string ListSceneItemsRequest::getSceneId()const
{
	return sceneId_;
}

void ListSceneItemsRequest::setSceneId(const std::string& sceneId)
{
	sceneId_ = sceneId;
	setParameter("SceneId", sceneId);
}

std::string ListSceneItemsRequest::getOperationRuleId()const
{
	return operationRuleId_;
}

void ListSceneItemsRequest::setOperationRuleId(const std::string& operationRuleId)
{
	operationRuleId_ = operationRuleId;
	setParameter("OperationRuleId", operationRuleId);
}

std::string ListSceneItemsRequest::getPreviewType()const
{
	return previewType_;
}

void ListSceneItemsRequest::setPreviewType(const std::string& previewType)
{
	previewType_ = previewType;
	setParameter("PreviewType", previewType);
}

int ListSceneItemsRequest::getPage()const
{
	return page_;
}

void ListSceneItemsRequest::setPage(int page)
{
	page_ = page;
	setParameter("Page", std::to_string(page));
}

