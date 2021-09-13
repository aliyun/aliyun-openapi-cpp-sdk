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

#include <alibabacloud/linkwan/model/UpdateGatewayRequest.h>

using AlibabaCloud::LinkWAN::Model::UpdateGatewayRequest;

UpdateGatewayRequest::UpdateGatewayRequest() :
	RpcServiceRequest("linkwan", "2019-03-01", "UpdateGateway")
{
	setMethod(HttpRequest::Method::Post);
}

UpdateGatewayRequest::~UpdateGatewayRequest()
{}

std::string UpdateGatewayRequest::getCity()const
{
	return city_;
}

void UpdateGatewayRequest::setCity(const std::string& city)
{
	city_ = city;
	setParameter("City", city);
}

float UpdateGatewayRequest::getLatitude()const
{
	return latitude_;
}

void UpdateGatewayRequest::setLatitude(float latitude)
{
	latitude_ = latitude;
	setParameter("Latitude", std::to_string(latitude));
}

std::string UpdateGatewayRequest::getDescription()const
{
	return description_;
}

void UpdateGatewayRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

long UpdateGatewayRequest::getAddressCode()const
{
	return addressCode_;
}

void UpdateGatewayRequest::setAddressCode(long addressCode)
{
	addressCode_ = addressCode;
	setParameter("AddressCode", std::to_string(addressCode));
}

std::string UpdateGatewayRequest::getGisCoordinateSystem()const
{
	return gisCoordinateSystem_;
}

void UpdateGatewayRequest::setGisCoordinateSystem(const std::string& gisCoordinateSystem)
{
	gisCoordinateSystem_ = gisCoordinateSystem;
	setParameter("GisCoordinateSystem", gisCoordinateSystem);
}

std::string UpdateGatewayRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void UpdateGatewayRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setParameter("IotInstanceId", iotInstanceId);
}

float UpdateGatewayRequest::getLongitude()const
{
	return longitude_;
}

void UpdateGatewayRequest::setLongitude(float longitude)
{
	longitude_ = longitude;
	setParameter("Longitude", std::to_string(longitude));
}

std::string UpdateGatewayRequest::getAddress()const
{
	return address_;
}

void UpdateGatewayRequest::setAddress(const std::string& address)
{
	address_ = address;
	setParameter("Address", address);
}

std::string UpdateGatewayRequest::getGwEui()const
{
	return gwEui_;
}

void UpdateGatewayRequest::setGwEui(const std::string& gwEui)
{
	gwEui_ = gwEui;
	setParameter("GwEui", gwEui);
}

long UpdateGatewayRequest::getFreqBandPlanGroupId()const
{
	return freqBandPlanGroupId_;
}

void UpdateGatewayRequest::setFreqBandPlanGroupId(long freqBandPlanGroupId)
{
	freqBandPlanGroupId_ = freqBandPlanGroupId;
	setParameter("FreqBandPlanGroupId", std::to_string(freqBandPlanGroupId));
}

std::string UpdateGatewayRequest::getDistrict()const
{
	return district_;
}

void UpdateGatewayRequest::setDistrict(const std::string& district)
{
	district_ = district;
	setParameter("District", district);
}

std::string UpdateGatewayRequest::getApiProduct()const
{
	return apiProduct_;
}

void UpdateGatewayRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string UpdateGatewayRequest::getName()const
{
	return name_;
}

void UpdateGatewayRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

std::string UpdateGatewayRequest::getApiRevision()const
{
	return apiRevision_;
}

void UpdateGatewayRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

std::string UpdateGatewayRequest::getCommunicationMode()const
{
	return communicationMode_;
}

void UpdateGatewayRequest::setCommunicationMode(const std::string& communicationMode)
{
	communicationMode_ = communicationMode;
	setParameter("CommunicationMode", communicationMode);
}

