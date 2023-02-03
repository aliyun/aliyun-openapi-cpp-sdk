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

#include <alibabacloud/mse/model/ListGatewayRouteResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mse;
using namespace AlibabaCloud::Mse::Model;

ListGatewayRouteResult::ListGatewayRouteResult() :
	ServiceResult()
{}

ListGatewayRouteResult::ListGatewayRouteResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListGatewayRouteResult::~ListGatewayRouteResult()
{}

void ListGatewayRouteResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["TotalSize"].isNull())
		data_.totalSize = std::stol(dataNode["TotalSize"].asString());
	if(!dataNode["PageNumber"].isNull())
		data_.pageNumber = std::stoi(dataNode["PageNumber"].asString());
	if(!dataNode["PageSize"].isNull())
		data_.pageSize = std::stoi(dataNode["PageSize"].asString());
	auto allResultNode = dataNode["Result"]["Routes"];
	for (auto dataNodeResultRoutes : allResultNode)
	{
		Data::Routes routesObject;
		if(!dataNodeResultRoutes["Id"].isNull())
			routesObject.id = std::stol(dataNodeResultRoutes["Id"].asString());
		if(!dataNodeResultRoutes["Name"].isNull())
			routesObject.name = dataNodeResultRoutes["Name"].asString();
		if(!dataNodeResultRoutes["GatewayUniqueId"].isNull())
			routesObject.gatewayUniqueId = dataNodeResultRoutes["GatewayUniqueId"].asString();
		if(!dataNodeResultRoutes["GatewayId"].isNull())
			routesObject.gatewayId = std::stol(dataNodeResultRoutes["GatewayId"].asString());
		if(!dataNodeResultRoutes["Status"].isNull())
			routesObject.status = std::stoi(dataNodeResultRoutes["Status"].asString());
		if(!dataNodeResultRoutes["RouteOrder"].isNull())
			routesObject.routeOrder = std::stoi(dataNodeResultRoutes["RouteOrder"].asString());
		if(!dataNodeResultRoutes["DefaultServiceName"].isNull())
			routesObject.defaultServiceName = dataNodeResultRoutes["DefaultServiceName"].asString();
		if(!dataNodeResultRoutes["DefaultServiceId"].isNull())
			routesObject.defaultServiceId = std::stol(dataNodeResultRoutes["DefaultServiceId"].asString());
		if(!dataNodeResultRoutes["Predicates"].isNull())
			routesObject.predicates = dataNodeResultRoutes["Predicates"].asString();
		if(!dataNodeResultRoutes["GmtCreate"].isNull())
			routesObject.gmtCreate = dataNodeResultRoutes["GmtCreate"].asString();
		if(!dataNodeResultRoutes["GmtModified"].isNull())
			routesObject.gmtModified = dataNodeResultRoutes["GmtModified"].asString();
		if(!dataNodeResultRoutes["Services"].isNull())
			routesObject.services = dataNodeResultRoutes["Services"].asString();
		if(!dataNodeResultRoutes["DomainId"].isNull())
			routesObject.domainId = std::stol(dataNodeResultRoutes["DomainId"].asString());
		if(!dataNodeResultRoutes["DomainName"].isNull())
			routesObject.domainName = dataNodeResultRoutes["DomainName"].asString();
		if(!dataNodeResultRoutes["DestinationType"].isNull())
			routesObject.destinationType = dataNodeResultRoutes["DestinationType"].asString();
		if(!dataNodeResultRoutes["Type"].isNull())
			routesObject.type = dataNodeResultRoutes["Type"].asString();
		if(!dataNodeResultRoutes["EnableWaf"].isNull())
			routesObject.enableWaf = dataNodeResultRoutes["EnableWaf"].asString();
		if(!dataNodeResultRoutes["Fallback"].isNull())
			routesObject.fallback = dataNodeResultRoutes["Fallback"].asString() == "true";
		auto allRouteServicesNode = dataNodeResultRoutes["RouteServices"]["RouteServicesItem"];
		for (auto dataNodeResultRoutesRouteServicesRouteServicesItem : allRouteServicesNode)
		{
			Data::Routes::RouteServicesItem routeServicesObject;
			if(!dataNodeResultRoutesRouteServicesRouteServicesItem["ServiceId"].isNull())
				routeServicesObject.serviceId = std::stol(dataNodeResultRoutesRouteServicesRouteServicesItem["ServiceId"].asString());
			if(!dataNodeResultRoutesRouteServicesRouteServicesItem["ServiceName"].isNull())
				routeServicesObject.serviceName = dataNodeResultRoutesRouteServicesRouteServicesItem["ServiceName"].asString();
			if(!dataNodeResultRoutesRouteServicesRouteServicesItem["Percent"].isNull())
				routeServicesObject.percent = std::stoi(dataNodeResultRoutesRouteServicesRouteServicesItem["Percent"].asString());
			if(!dataNodeResultRoutesRouteServicesRouteServicesItem["Version"].isNull())
				routeServicesObject.version = dataNodeResultRoutesRouteServicesRouteServicesItem["Version"].asString();
			if(!dataNodeResultRoutesRouteServicesRouteServicesItem["Name"].isNull())
				routeServicesObject.name = dataNodeResultRoutesRouteServicesRouteServicesItem["Name"].asString();
			if(!dataNodeResultRoutesRouteServicesRouteServicesItem["SourceType"].isNull())
				routeServicesObject.sourceType = dataNodeResultRoutesRouteServicesRouteServicesItem["SourceType"].asString();
			if(!dataNodeResultRoutesRouteServicesRouteServicesItem["Namespace"].isNull())
				routeServicesObject._namespace = dataNodeResultRoutesRouteServicesRouteServicesItem["Namespace"].asString();
			if(!dataNodeResultRoutesRouteServicesRouteServicesItem["GroupName"].isNull())
				routeServicesObject.groupName = dataNodeResultRoutesRouteServicesRouteServicesItem["GroupName"].asString();
			if(!dataNodeResultRoutesRouteServicesRouteServicesItem["AgreementType"].isNull())
				routeServicesObject.agreementType = dataNodeResultRoutesRouteServicesRouteServicesItem["AgreementType"].asString();
			if(!dataNodeResultRoutesRouteServicesRouteServicesItem["ServicePort"].isNull())
				routeServicesObject.servicePort = std::stoi(dataNodeResultRoutesRouteServicesRouteServicesItem["ServicePort"].asString());
			auto httpDubboTranscoderNode = value["HttpDubboTranscoder"];
			if(!httpDubboTranscoderNode["DubboServiceName"].isNull())
				routeServicesObject.httpDubboTranscoder.dubboServiceName = httpDubboTranscoderNode["DubboServiceName"].asString();
			if(!httpDubboTranscoderNode["DubboServiceVersion"].isNull())
				routeServicesObject.httpDubboTranscoder.dubboServiceVersion = httpDubboTranscoderNode["DubboServiceVersion"].asString();
			if(!httpDubboTranscoderNode["DubboServiceGroup"].isNull())
				routeServicesObject.httpDubboTranscoder.dubboServiceGroup = httpDubboTranscoderNode["DubboServiceGroup"].asString();
			auto allMothedMapListNode = httpDubboTranscoderNode["MothedMapList"]["MothedMapListItem"];
			for (auto httpDubboTranscoderNodeMothedMapListMothedMapListItem : allMothedMapListNode)
			{
				Data::Routes::RouteServicesItem::HttpDubboTranscoder::MothedMapListItem mothedMapListItemObject;
				if(!httpDubboTranscoderNodeMothedMapListMothedMapListItem["DubboMothedName"].isNull())
					mothedMapListItemObject.dubboMothedName = httpDubboTranscoderNodeMothedMapListMothedMapListItem["DubboMothedName"].asString();
				if(!httpDubboTranscoderNodeMothedMapListMothedMapListItem["HttpMothed"].isNull())
					mothedMapListItemObject.httpMothed = httpDubboTranscoderNodeMothedMapListMothedMapListItem["HttpMothed"].asString();
				if(!httpDubboTranscoderNodeMothedMapListMothedMapListItem["Mothedpath"].isNull())
					mothedMapListItemObject.mothedpath = httpDubboTranscoderNodeMothedMapListMothedMapListItem["Mothedpath"].asString();
				if(!httpDubboTranscoderNodeMothedMapListMothedMapListItem["PassThroughAllHeaders"].isNull())
					mothedMapListItemObject.passThroughAllHeaders = httpDubboTranscoderNodeMothedMapListMothedMapListItem["PassThroughAllHeaders"].asString();
				auto allParamMapsListNode = httpDubboTranscoderNodeMothedMapListMothedMapListItem["ParamMapsList"]["ParamMapsListItem"];
				for (auto httpDubboTranscoderNodeMothedMapListMothedMapListItemParamMapsListParamMapsListItem : allParamMapsListNode)
				{
					Data::Routes::RouteServicesItem::HttpDubboTranscoder::MothedMapListItem::ParamMapsListItem paramMapsListObject;
					if(!httpDubboTranscoderNodeMothedMapListMothedMapListItemParamMapsListParamMapsListItem["ExtractKeySpec"].isNull())
						paramMapsListObject.extractKeySpec = httpDubboTranscoderNodeMothedMapListMothedMapListItemParamMapsListParamMapsListItem["ExtractKeySpec"].asString();
					if(!httpDubboTranscoderNodeMothedMapListMothedMapListItemParamMapsListParamMapsListItem["ExtractKey"].isNull())
						paramMapsListObject.extractKey = httpDubboTranscoderNodeMothedMapListMothedMapListItemParamMapsListParamMapsListItem["ExtractKey"].asString();
					if(!httpDubboTranscoderNodeMothedMapListMothedMapListItemParamMapsListParamMapsListItem["MappingType"].isNull())
						paramMapsListObject.mappingType = httpDubboTranscoderNodeMothedMapListMothedMapListItemParamMapsListParamMapsListItem["MappingType"].asString();
					mothedMapListItemObject.paramMapsList.push_back(paramMapsListObject);
				}
				auto allPassThroughList = value["PassThroughList"]["PassThroughList"];
				for (auto value : allPassThroughList)
					mothedMapListItemObject.passThroughList.push_back(value.asString());
				routeServicesObject.httpDubboTranscoder.mothedMapList.push_back(mothedMapListItemObject);
			}
			routesObject.routeServices.push_back(routeServicesObject);
		}
		auto allFallbackServicesNode = dataNodeResultRoutes["FallbackServices"]["FallbackServicesItem"];
		for (auto dataNodeResultRoutesFallbackServicesFallbackServicesItem : allFallbackServicesNode)
		{
			Data::Routes::FallbackServicesItem fallbackServicesObject;
			if(!dataNodeResultRoutesFallbackServicesFallbackServicesItem["ServiceId"].isNull())
				fallbackServicesObject.serviceId = std::stol(dataNodeResultRoutesFallbackServicesFallbackServicesItem["ServiceId"].asString());
			if(!dataNodeResultRoutesFallbackServicesFallbackServicesItem["ServiceName"].isNull())
				fallbackServicesObject.serviceName = dataNodeResultRoutesFallbackServicesFallbackServicesItem["ServiceName"].asString();
			if(!dataNodeResultRoutesFallbackServicesFallbackServicesItem["Percent"].isNull())
				fallbackServicesObject.percent = std::stoi(dataNodeResultRoutesFallbackServicesFallbackServicesItem["Percent"].asString());
			if(!dataNodeResultRoutesFallbackServicesFallbackServicesItem["Version"].isNull())
				fallbackServicesObject.version = dataNodeResultRoutesFallbackServicesFallbackServicesItem["Version"].asString();
			if(!dataNodeResultRoutesFallbackServicesFallbackServicesItem["Name"].isNull())
				fallbackServicesObject.name = dataNodeResultRoutesFallbackServicesFallbackServicesItem["Name"].asString();
			if(!dataNodeResultRoutesFallbackServicesFallbackServicesItem["SourceType"].isNull())
				fallbackServicesObject.sourceType = dataNodeResultRoutesFallbackServicesFallbackServicesItem["SourceType"].asString();
			if(!dataNodeResultRoutesFallbackServicesFallbackServicesItem["Namespace"].isNull())
				fallbackServicesObject._namespace = dataNodeResultRoutesFallbackServicesFallbackServicesItem["Namespace"].asString();
			if(!dataNodeResultRoutesFallbackServicesFallbackServicesItem["GroupName"].isNull())
				fallbackServicesObject.groupName = dataNodeResultRoutesFallbackServicesFallbackServicesItem["GroupName"].asString();
			if(!dataNodeResultRoutesFallbackServicesFallbackServicesItem["AgreementType"].isNull())
				fallbackServicesObject.agreementType = dataNodeResultRoutesFallbackServicesFallbackServicesItem["AgreementType"].asString();
			if(!dataNodeResultRoutesFallbackServicesFallbackServicesItem["ServicePort"].isNull())
				fallbackServicesObject.servicePort = std::stoi(dataNodeResultRoutesFallbackServicesFallbackServicesItem["ServicePort"].asString());
			routesObject.fallbackServices.push_back(fallbackServicesObject);
		}
		auto routePredicatesNode = value["RoutePredicates"];
		auto allHeaderPredicatesNode = routePredicatesNode["HeaderPredicates"]["HeaderPredicatesItem"];
		for (auto routePredicatesNodeHeaderPredicatesHeaderPredicatesItem : allHeaderPredicatesNode)
		{
			Data::Routes::RoutePredicates::HeaderPredicatesItem headerPredicatesItemObject;
			if(!routePredicatesNodeHeaderPredicatesHeaderPredicatesItem["Key"].isNull())
				headerPredicatesItemObject.key = routePredicatesNodeHeaderPredicatesHeaderPredicatesItem["Key"].asString();
			if(!routePredicatesNodeHeaderPredicatesHeaderPredicatesItem["Value"].isNull())
				headerPredicatesItemObject.value = routePredicatesNodeHeaderPredicatesHeaderPredicatesItem["Value"].asString();
			if(!routePredicatesNodeHeaderPredicatesHeaderPredicatesItem["Type"].isNull())
				headerPredicatesItemObject.type = routePredicatesNodeHeaderPredicatesHeaderPredicatesItem["Type"].asString();
			routesObject.routePredicates.headerPredicates.push_back(headerPredicatesItemObject);
		}
		auto allQueryPredicatesNode = routePredicatesNode["QueryPredicates"]["QueryPredicatesItem"];
		for (auto routePredicatesNodeQueryPredicatesQueryPredicatesItem : allQueryPredicatesNode)
		{
			Data::Routes::RoutePredicates::QueryPredicatesItem queryPredicatesItemObject;
			if(!routePredicatesNodeQueryPredicatesQueryPredicatesItem["Key"].isNull())
				queryPredicatesItemObject.key = routePredicatesNodeQueryPredicatesQueryPredicatesItem["Key"].asString();
			if(!routePredicatesNodeQueryPredicatesQueryPredicatesItem["Value"].isNull())
				queryPredicatesItemObject.value = routePredicatesNodeQueryPredicatesQueryPredicatesItem["Value"].asString();
			if(!routePredicatesNodeQueryPredicatesQueryPredicatesItem["Type"].isNull())
				queryPredicatesItemObject.type = routePredicatesNodeQueryPredicatesQueryPredicatesItem["Type"].asString();
			routesObject.routePredicates.queryPredicates.push_back(queryPredicatesItemObject);
		}
		auto pathPredicatesNode = routePredicatesNode["PathPredicates"];
		if(!pathPredicatesNode["Path"].isNull())
			routesObject.routePredicates.pathPredicates.path = pathPredicatesNode["Path"].asString();
		if(!pathPredicatesNode["Type"].isNull())
			routesObject.routePredicates.pathPredicates.type = pathPredicatesNode["Type"].asString();
		if(!pathPredicatesNode["IgnoreCase"].isNull())
			routesObject.routePredicates.pathPredicates.ignoreCase = pathPredicatesNode["IgnoreCase"].asString() == "true";
			auto allMethodPredicates = routePredicatesNode["MethodPredicates"]["MethodPredicates"];
			for (auto value : allMethodPredicates)
				routesObject.routePredicates.methodPredicates.push_back(value.asString());
		auto directResponseNode = value["DirectResponse"];
		if(!directResponseNode["Code"].isNull())
			routesObject.directResponse.code = std::stoi(directResponseNode["Code"].asString());
		if(!directResponseNode["Body"].isNull())
			routesObject.directResponse.body = directResponseNode["Body"].asString();
		auto redirectNode = value["Redirect"];
		if(!redirectNode["Code"].isNull())
			routesObject.redirect.code = std::stoi(redirectNode["Code"].asString());
		if(!redirectNode["Host"].isNull())
			routesObject.redirect.host = redirectNode["Host"].asString();
		if(!redirectNode["Path"].isNull())
			routesObject.redirect.path = redirectNode["Path"].asString();
		auto commentNode = value["Comment"];
		if(!commentNode["Status"].isNull())
			routesObject.comment.status = commentNode["Status"].asString();
		auto allDomainIdList = value["DomainIdList"]["DomainIdList"];
		for (auto value : allDomainIdList)
			routesObject.domainIdList.push_back(value.asString());
		auto allDomainNameList = value["DomainNameList"]["DomainNameList"];
		for (auto value : allDomainNameList)
			routesObject.domainNameList.push_back(value.asString());
		data_.result.push_back(routesObject);
	}
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string ListGatewayRouteResult::getMessage()const
{
	return message_;
}

int ListGatewayRouteResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

ListGatewayRouteResult::Data ListGatewayRouteResult::getData()const
{
	return data_;
}

int ListGatewayRouteResult::getCode()const
{
	return code_;
}

bool ListGatewayRouteResult::getSuccess()const
{
	return success_;
}

