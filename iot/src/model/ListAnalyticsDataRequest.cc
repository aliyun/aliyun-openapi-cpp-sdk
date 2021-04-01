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

#include <alibabacloud/iot/model/ListAnalyticsDataRequest.h>

using AlibabaCloud::Iot::Model::ListAnalyticsDataRequest;

ListAnalyticsDataRequest::ListAnalyticsDataRequest() :
	RpcServiceRequest("iot", "2018-01-20", "ListAnalyticsData")
{
	setMethod(HttpRequest::Method::Post);
}

ListAnalyticsDataRequest::~ListAnalyticsDataRequest()
{}

int ListAnalyticsDataRequest::getPageNum()const
{
	return pageNum_;
}

void ListAnalyticsDataRequest::setPageNum(int pageNum)
{
	pageNum_ = pageNum;
	setParameter("PageNum", std::to_string(pageNum));
}

std::string ListAnalyticsDataRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void ListAnalyticsDataRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setParameter("IotInstanceId", iotInstanceId);
}

int ListAnalyticsDataRequest::getPageSize()const
{
	return pageSize_;
}

void ListAnalyticsDataRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string ListAnalyticsDataRequest::getIsoId()const
{
	return isoId_;
}

void ListAnalyticsDataRequest::setIsoId(const std::string& isoId)
{
	isoId_ = isoId;
	setParameter("IsoId", isoId);
}

std::string ListAnalyticsDataRequest::getApiPath()const
{
	return apiPath_;
}

void ListAnalyticsDataRequest::setApiPath(const std::string& apiPath)
{
	apiPath_ = apiPath;
	setParameter("ApiPath", apiPath);
}

std::vector<ListAnalyticsDataRequest::Condition> ListAnalyticsDataRequest::getCondition()const
{
	return condition_;
}

void ListAnalyticsDataRequest::setCondition(const std::vector<Condition>& condition)
{
	condition_ = condition;
	for(int dep1 = 0; dep1!= condition.size(); dep1++) {
		auto conditionObj = condition.at(dep1);
		std::string conditionObjStr = "Condition." + std::to_string(dep1 + 1);
		setParameter(conditionObjStr + ".FieldName", conditionObj.fieldName);
		setParameter(conditionObjStr + ".Operate", conditionObj.operate);
		setParameter(conditionObjStr + ".BetweenStart", conditionObj.betweenStart);
		setParameter(conditionObjStr + ".BetweenEnd", conditionObj.betweenEnd);
		setParameter(conditionObjStr + ".Value", conditionObj.value);
	}
}

std::string ListAnalyticsDataRequest::getApiProduct()const
{
	return apiProduct_;
}

void ListAnalyticsDataRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string ListAnalyticsDataRequest::getApiRevision()const
{
	return apiRevision_;
}

void ListAnalyticsDataRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

