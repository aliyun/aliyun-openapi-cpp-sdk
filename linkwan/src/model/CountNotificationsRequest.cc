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

#include <alibabacloud/linkwan/model/CountNotificationsRequest.h>

using AlibabaCloud::LinkWAN::Model::CountNotificationsRequest;

CountNotificationsRequest::CountNotificationsRequest() :
	RpcServiceRequest("linkwan", "2019-03-01", "CountNotifications")
{
	setMethod(HttpRequest::Method::Post);
}

CountNotificationsRequest::~CountNotificationsRequest()
{}

long CountNotificationsRequest::getEndMillis()const
{
	return endMillis_;
}

void CountNotificationsRequest::setEndMillis(long endMillis)
{
	endMillis_ = endMillis;
	setParameter("EndMillis", std::to_string(endMillis));
}

std::string CountNotificationsRequest::getHandleState()const
{
	return handleState_;
}

void CountNotificationsRequest::setHandleState(const std::string& handleState)
{
	handleState_ = handleState;
	setParameter("HandleState", handleState);
}

std::string CountNotificationsRequest::getApiProduct()const
{
	return apiProduct_;
}

void CountNotificationsRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string CountNotificationsRequest::getApiRevision()const
{
	return apiRevision_;
}

void CountNotificationsRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

std::vector<std::string> CountNotificationsRequest::getCategory()const
{
	return category_;
}

void CountNotificationsRequest::setCategory(const std::vector<std::string>& category)
{
	category_ = category;
	for(int dep1 = 0; dep1!= category.size(); dep1++) {
		setParameter("Category."+ std::to_string(dep1), category.at(dep1));
	}
}

long CountNotificationsRequest::getBeginMillis()const
{
	return beginMillis_;
}

void CountNotificationsRequest::setBeginMillis(long beginMillis)
{
	beginMillis_ = beginMillis;
	setParameter("BeginMillis", std::to_string(beginMillis));
}

