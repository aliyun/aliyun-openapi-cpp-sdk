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

#include <alibabacloud/mse/model/GetGatewayRouteDetailResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mse;
using namespace AlibabaCloud::Mse::Model;

GetGatewayRouteDetailResult::GetGatewayRouteDetailResult() :
	ServiceResult()
{}

GetGatewayRouteDetailResult::GetGatewayRouteDetailResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetGatewayRouteDetailResult::~GetGatewayRouteDetailResult()
{}

void GetGatewayRouteDetailResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Id"].isNull())
		data_.id = std::stol(dataNode["Id"].asString());
	if(!dataNode["Name"].isNull())
		data_.name = dataNode["Name"].asString();
	if(!dataNode["GatewayUniqueId"].isNull())
		data_.gatewayUniqueId = dataNode["GatewayUniqueId"].asString();
	if(!dataNode["GatewayId"].isNull())
		data_.gatewayId = std::stol(dataNode["GatewayId"].asString());
	if(!dataNode["DefaultServiceId"].isNull())
		data_.defaultServiceId = std::stol(dataNode["DefaultServiceId"].asString());
	if(!dataNode["DefaultServiceName"].isNull())
		data_.defaultServiceName = dataNode["DefaultServiceName"].asString();
	if(!dataNode["Status"].isNull())
		data_.status = std::stoi(dataNode["Status"].asString());
	if(!dataNode["GmtCreate"].isNull())
		data_.gmtCreate = dataNode["GmtCreate"].asString();
	if(!dataNode["GmtModified"].isNull())
		data_.gmtModified = dataNode["GmtModified"].asString();
	if(!dataNode["RouteOrder"].isNull())
		data_.routeOrder = std::stoi(dataNode["RouteOrder"].asString());
	if(!dataNode["Predicates"].isNull())
		data_.predicates = dataNode["Predicates"].asString();
	if(!dataNode["DomainId"].isNull())
		data_.domainId = std::stol(dataNode["DomainId"].asString());
	if(!dataNode["DomainName"].isNull())
		data_.domainName = dataNode["DomainName"].asString();
	if(!dataNode["Services"].isNull())
		data_.services = dataNode["Services"].asString();
	if(!dataNode["DestinationType"].isNull())
		data_.destinationType = dataNode["DestinationType"].asString();
	if(!dataNode["EnableWaf"].isNull())
		data_.enableWaf = dataNode["EnableWaf"].asString() == "true";
	if(!dataNode["AhasStatus"].isNull())
		data_.ahasStatus = std::stoi(dataNode["AhasStatus"].asString());
	if(!dataNode["Fallback"].isNull())
		data_.fallback = dataNode["Fallback"].asString() == "true";
	if(!dataNode["Policies"].isNull())
		data_.policies = dataNode["Policies"].asString();
	auto allRouteServicesNode = dataNode["RouteServices"]["RouteServicesItem"];
	for (auto dataNodeRouteServicesRouteServicesItem : allRouteServicesNode)
	{
		Data::RouteServicesItem routeServicesItemObject;
		if(!dataNodeRouteServicesRouteServicesItem["ServiceId"].isNull())
			routeServicesItemObject.serviceId = std::stol(dataNodeRouteServicesRouteServicesItem["ServiceId"].asString());
		if(!dataNodeRouteServicesRouteServicesItem["ServiceName"].isNull())
			routeServicesItemObject.serviceName = dataNodeRouteServicesRouteServicesItem["ServiceName"].asString();
		if(!dataNodeRouteServicesRouteServicesItem["Percent"].isNull())
			routeServicesItemObject.percent = std::stoi(dataNodeRouteServicesRouteServicesItem["Percent"].asString());
		if(!dataNodeRouteServicesRouteServicesItem["Version"].isNull())
			routeServicesItemObject.version = dataNodeRouteServicesRouteServicesItem["Version"].asString();
		if(!dataNodeRouteServicesRouteServicesItem["Name"].isNull())
			routeServicesItemObject.name = dataNodeRouteServicesRouteServicesItem["Name"].asString();
		if(!dataNodeRouteServicesRouteServicesItem["SourceType"].isNull())
			routeServicesItemObject.sourceType = dataNodeRouteServicesRouteServicesItem["SourceType"].asString();
		if(!dataNodeRouteServicesRouteServicesItem["Namespace"].isNull())
			routeServicesItemObject._namespace = dataNodeRouteServicesRouteServicesItem["Namespace"].asString();
		if(!dataNodeRouteServicesRouteServicesItem["GroupName"].isNull())
			routeServicesItemObject.groupName = dataNodeRouteServicesRouteServicesItem["GroupName"].asString();
		if(!dataNodeRouteServicesRouteServicesItem["AgreementType"].isNull())
			routeServicesItemObject.agreementType = dataNodeRouteServicesRouteServicesItem["AgreementType"].asString();
		if(!dataNodeRouteServicesRouteServicesItem["ServicePort"].isNull())
			routeServicesItemObject.servicePort = std::stoi(dataNodeRouteServicesRouteServicesItem["ServicePort"].asString());
		data_.routeServices.push_back(routeServicesItemObject);
	}
	auto allFallbackServicesNode = dataNode["FallbackServices"]["FallbackServicesItem"];
	for (auto dataNodeFallbackServicesFallbackServicesItem : allFallbackServicesNode)
	{
		Data::FallbackServicesItem fallbackServicesItemObject;
		if(!dataNodeFallbackServicesFallbackServicesItem["ServiceId"].isNull())
			fallbackServicesItemObject.serviceId = std::stol(dataNodeFallbackServicesFallbackServicesItem["ServiceId"].asString());
		if(!dataNodeFallbackServicesFallbackServicesItem["ServiceName"].isNull())
			fallbackServicesItemObject.serviceName = dataNodeFallbackServicesFallbackServicesItem["ServiceName"].asString();
		if(!dataNodeFallbackServicesFallbackServicesItem["Percent"].isNull())
			fallbackServicesItemObject.percent = std::stoi(dataNodeFallbackServicesFallbackServicesItem["Percent"].asString());
		if(!dataNodeFallbackServicesFallbackServicesItem["Version"].isNull())
			fallbackServicesItemObject.version = dataNodeFallbackServicesFallbackServicesItem["Version"].asString();
		if(!dataNodeFallbackServicesFallbackServicesItem["Name"].isNull())
			fallbackServicesItemObject.name = dataNodeFallbackServicesFallbackServicesItem["Name"].asString();
		if(!dataNodeFallbackServicesFallbackServicesItem["SourceType"].isNull())
			fallbackServicesItemObject.sourceType = dataNodeFallbackServicesFallbackServicesItem["SourceType"].asString();
		if(!dataNodeFallbackServicesFallbackServicesItem["Namespace"].isNull())
			fallbackServicesItemObject._namespace = dataNodeFallbackServicesFallbackServicesItem["Namespace"].asString();
		if(!dataNodeFallbackServicesFallbackServicesItem["GroupName"].isNull())
			fallbackServicesItemObject.groupName = dataNodeFallbackServicesFallbackServicesItem["GroupName"].asString();
		if(!dataNodeFallbackServicesFallbackServicesItem["AgreementType"].isNull())
			fallbackServicesItemObject.agreementType = dataNodeFallbackServicesFallbackServicesItem["AgreementType"].asString();
		if(!dataNodeFallbackServicesFallbackServicesItem["ServicePort"].isNull())
			fallbackServicesItemObject.servicePort = std::stoi(dataNodeFallbackServicesFallbackServicesItem["ServicePort"].asString());
		data_.fallbackServices.push_back(fallbackServicesItemObject);
	}
	auto routePredicatesNode = dataNode["RoutePredicates"];
	auto allHeaderPredicatesNode = routePredicatesNode["HeaderPredicates"]["HeaderPredicatesItem"];
	for (auto routePredicatesNodeHeaderPredicatesHeaderPredicatesItem : allHeaderPredicatesNode)
	{
		Data::RoutePredicates::HeaderPredicatesItem headerPredicatesItemObject;
		if(!routePredicatesNodeHeaderPredicatesHeaderPredicatesItem["Key"].isNull())
			headerPredicatesItemObject.key = routePredicatesNodeHeaderPredicatesHeaderPredicatesItem["Key"].asString();
		if(!routePredicatesNodeHeaderPredicatesHeaderPredicatesItem["Value"].isNull())
			headerPredicatesItemObject.value = routePredicatesNodeHeaderPredicatesHeaderPredicatesItem["Value"].asString();
		if(!routePredicatesNodeHeaderPredicatesHeaderPredicatesItem["Type"].isNull())
			headerPredicatesItemObject.type = routePredicatesNodeHeaderPredicatesHeaderPredicatesItem["Type"].asString();
		data_.routePredicates.headerPredicates.push_back(headerPredicatesItemObject);
	}
	auto allQueryPredicatesNode = routePredicatesNode["QueryPredicates"]["QueryPredicatesItem"];
	for (auto routePredicatesNodeQueryPredicatesQueryPredicatesItem : allQueryPredicatesNode)
	{
		Data::RoutePredicates::QueryPredicatesItem queryPredicatesItemObject;
		if(!routePredicatesNodeQueryPredicatesQueryPredicatesItem["Key"].isNull())
			queryPredicatesItemObject.key = routePredicatesNodeQueryPredicatesQueryPredicatesItem["Key"].asString();
		if(!routePredicatesNodeQueryPredicatesQueryPredicatesItem["Value"].isNull())
			queryPredicatesItemObject.value = routePredicatesNodeQueryPredicatesQueryPredicatesItem["Value"].asString();
		if(!routePredicatesNodeQueryPredicatesQueryPredicatesItem["Type"].isNull())
			queryPredicatesItemObject.type = routePredicatesNodeQueryPredicatesQueryPredicatesItem["Type"].asString();
		data_.routePredicates.queryPredicates.push_back(queryPredicatesItemObject);
	}
	auto pathPredicatesNode = routePredicatesNode["PathPredicates"];
	if(!pathPredicatesNode["Path"].isNull())
		data_.routePredicates.pathPredicates.path = pathPredicatesNode["Path"].asString();
	if(!pathPredicatesNode["Type"].isNull())
		data_.routePredicates.pathPredicates.type = pathPredicatesNode["Type"].asString();
	if(!pathPredicatesNode["IgnoreCase"].isNull())
		data_.routePredicates.pathPredicates.ignoreCase = pathPredicatesNode["IgnoreCase"].asString() == "true";
		auto allMethodPredicates = routePredicatesNode["MethodPredicates"]["MethodPredicates"];
		for (auto value : allMethodPredicates)
			data_.routePredicates.methodPredicates.push_back(value.asString());
	auto hTTPRewriteNode = dataNode["HTTPRewrite"];
	if(!hTTPRewriteNode["Status"].isNull())
		data_.hTTPRewrite.status = hTTPRewriteNode["Status"].asString();
	if(!hTTPRewriteNode["Path"].isNull())
		data_.hTTPRewrite.path = hTTPRewriteNode["Path"].asString();
	if(!hTTPRewriteNode["Host"].isNull())
		data_.hTTPRewrite.host = hTTPRewriteNode["Host"].asString();
	if(!hTTPRewriteNode["PathType"].isNull())
		data_.hTTPRewrite.pathType = hTTPRewriteNode["PathType"].asString();
	if(!hTTPRewriteNode["Pattern"].isNull())
		data_.hTTPRewrite.pattern = hTTPRewriteNode["Pattern"].asString();
	if(!hTTPRewriteNode["Substitution"].isNull())
		data_.hTTPRewrite.substitution = hTTPRewriteNode["Substitution"].asString();
	auto headerOpNode = dataNode["HeaderOp"];
	if(!headerOpNode["Status"].isNull())
		data_.headerOp.status = headerOpNode["Status"].asString();
	auto allHeaderOpItemsNode = headerOpNode["HeaderOpItems"]["HeaderOpItemsItem"];
	for (auto headerOpNodeHeaderOpItemsHeaderOpItemsItem : allHeaderOpItemsNode)
	{
		Data::HeaderOp::HeaderOpItemsItem headerOpItemsItemObject;
		if(!headerOpNodeHeaderOpItemsHeaderOpItemsItem["DirectionType"].isNull())
			headerOpItemsItemObject.directionType = headerOpNodeHeaderOpItemsHeaderOpItemsItem["DirectionType"].asString();
		if(!headerOpNodeHeaderOpItemsHeaderOpItemsItem["OpType"].isNull())
			headerOpItemsItemObject.opType = headerOpNodeHeaderOpItemsHeaderOpItemsItem["OpType"].asString();
		if(!headerOpNodeHeaderOpItemsHeaderOpItemsItem["Key"].isNull())
			headerOpItemsItemObject.key = headerOpNodeHeaderOpItemsHeaderOpItemsItem["Key"].asString();
		if(!headerOpNodeHeaderOpItemsHeaderOpItemsItem["Value"].isNull())
			headerOpItemsItemObject.value = headerOpNodeHeaderOpItemsHeaderOpItemsItem["Value"].asString();
		data_.headerOp.headerOpItems.push_back(headerOpItemsItemObject);
	}
	auto directResponseNode = dataNode["DirectResponse"];
	if(!directResponseNode["Code"].isNull())
		data_.directResponse.code = std::stoi(directResponseNode["Code"].asString());
	if(!directResponseNode["Body"].isNull())
		data_.directResponse.body = directResponseNode["Body"].asString();
	auto corsNode = dataNode["Cors"];
	if(!corsNode["Status"].isNull())
		data_.cors.status = corsNode["Status"].asString();
	if(!corsNode["AllowOrigins"].isNull())
		data_.cors.allowOrigins = corsNode["AllowOrigins"].asString();
	if(!corsNode["AllowMethods"].isNull())
		data_.cors.allowMethods = corsNode["AllowMethods"].asString();
	if(!corsNode["AllowHeaders"].isNull())
		data_.cors.allowHeaders = corsNode["AllowHeaders"].asString();
	if(!corsNode["ExposeHeaders"].isNull())
		data_.cors.exposeHeaders = corsNode["ExposeHeaders"].asString();
	if(!corsNode["TimeUnit"].isNull())
		data_.cors.timeUnit = corsNode["TimeUnit"].asString();
	if(!corsNode["UnitNum"].isNull())
		data_.cors.unitNum = std::stol(corsNode["UnitNum"].asString());
	if(!corsNode["AllowCredentials"].isNull())
		data_.cors.allowCredentials = corsNode["AllowCredentials"].asString() == "true";
	auto timeoutNode = dataNode["Timeout"];
	if(!timeoutNode["UnitNum"].isNull())
		data_.timeout.unitNum = std::stoi(timeoutNode["UnitNum"].asString());
	if(!timeoutNode["TimeUnit"].isNull())
		data_.timeout.timeUnit = timeoutNode["TimeUnit"].asString();
	if(!timeoutNode["Status"].isNull())
		data_.timeout.status = timeoutNode["Status"].asString();
	auto retryNode = dataNode["Retry"];
	if(!retryNode["Attempts"].isNull())
		data_.retry.attempts = std::stoi(retryNode["Attempts"].asString());
	if(!retryNode["Status"].isNull())
		data_.retry.status = retryNode["Status"].asString();
		auto allRetryOn = retryNode["RetryOn"]["retryOn"];
		for (auto value : allRetryOn)
			data_.retry.retryOn.push_back(value.asString());
		auto allHttpCodes = retryNode["HttpCodes"]["httpCodes"];
		for (auto value : allHttpCodes)
			data_.retry.httpCodes.push_back(value.asString());
	auto redirectNode = dataNode["Redirect"];
	if(!redirectNode["Code"].isNull())
		data_.redirect.code = std::stoi(redirectNode["Code"].asString());
	if(!redirectNode["Host"].isNull())
		data_.redirect.host = redirectNode["Host"].asString();
	if(!redirectNode["Path"].isNull())
		data_.redirect.path = redirectNode["Path"].asString();
		auto allDomainIdList = dataNode["DomainIdList"]["DomainIdList"];
		for (auto value : allDomainIdList)
			data_.domainIdList.push_back(value.asString());
		auto allDomainNameList = dataNode["DomainNameList"]["DomainNameList"];
		for (auto value : allDomainNameList)
			data_.domainNameList.push_back(value.asString());
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string GetGatewayRouteDetailResult::getMessage()const
{
	return message_;
}

int GetGatewayRouteDetailResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

GetGatewayRouteDetailResult::Data GetGatewayRouteDetailResult::getData()const
{
	return data_;
}

int GetGatewayRouteDetailResult::getCode()const
{
	return code_;
}

bool GetGatewayRouteDetailResult::getSuccess()const
{
	return success_;
}

