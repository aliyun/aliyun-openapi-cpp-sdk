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

#include <alibabacloud/iot/model/ImportDTDataRequest.h>

using AlibabaCloud::Iot::Model::ImportDTDataRequest;

ImportDTDataRequest::ImportDTDataRequest() :
	RpcServiceRequest("iot", "2018-01-20", "ImportDTData")
{
	setMethod(HttpRequest::Method::Post);
}

ImportDTDataRequest::~ImportDTDataRequest()
{}

std::string ImportDTDataRequest::getRealTenantId()const
{
	return realTenantId_;
}

void ImportDTDataRequest::setRealTenantId(const std::string& realTenantId)
{
	realTenantId_ = realTenantId;
	setBodyParameter("RealTenantId", realTenantId);
}

std::string ImportDTDataRequest::getDTInstanceId()const
{
	return dTInstanceId_;
}

void ImportDTDataRequest::setDTInstanceId(const std::string& dTInstanceId)
{
	dTInstanceId_ = dTInstanceId;
	setParameter("DTInstanceId", dTInstanceId);
}

std::string ImportDTDataRequest::getRealTripartiteKey()const
{
	return realTripartiteKey_;
}

void ImportDTDataRequest::setRealTripartiteKey(const std::string& realTripartiteKey)
{
	realTripartiteKey_ = realTripartiteKey;
	setParameter("RealTripartiteKey", realTripartiteKey);
}

std::string ImportDTDataRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void ImportDTDataRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setBodyParameter("IotInstanceId", iotInstanceId);
}

std::string ImportDTDataRequest::getProductKey()const
{
	return productKey_;
}

void ImportDTDataRequest::setProductKey(const std::string& productKey)
{
	productKey_ = productKey;
	setBodyParameter("ProductKey", productKey);
}

std::string ImportDTDataRequest::getApiProduct()const
{
	return apiProduct_;
}

void ImportDTDataRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string ImportDTDataRequest::getApiRevision()const
{
	return apiRevision_;
}

void ImportDTDataRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

std::vector<ImportDTDataRequest::Items> ImportDTDataRequest::getItems()const
{
	return items_;
}

void ImportDTDataRequest::setItems(const std::vector<Items>& items)
{
	items_ = items;
	for(int dep1 = 0; dep1!= items.size(); dep1++) {
		auto itemsObj = items.at(dep1);
		std::string itemsObjStr = "Items." + std::to_string(dep1 + 1);
		setParameter(itemsObjStr + ".DeviceName", itemsObj.deviceName);
		setParameter(itemsObjStr + ".Params", itemsObj.params);
	}
}

