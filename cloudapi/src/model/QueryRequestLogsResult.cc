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

#include <alibabacloud/cloudapi/model/QueryRequestLogsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CloudAPI;
using namespace AlibabaCloud::CloudAPI::Model;

QueryRequestLogsResult::QueryRequestLogsResult() :
	ServiceResult()
{}

QueryRequestLogsResult::QueryRequestLogsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryRequestLogsResult::~QueryRequestLogsResult()
{}

void QueryRequestLogsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allRequestLogsNode = value["RequestLogs"]["RequestLog"];
	for (auto valueRequestLogsRequestLog : allRequestLogsNode)
	{
		RequestLog requestLogsObject;
		if(!valueRequestLogsRequestLog["ApiId"].isNull())
			requestLogsObject.apiId = valueRequestLogsRequestLog["ApiId"].asString();
		if(!valueRequestLogsRequestLog["ApiName"].isNull())
			requestLogsObject.apiName = valueRequestLogsRequestLog["ApiName"].asString();
		if(!valueRequestLogsRequestLog["ConsumerAppKey"].isNull())
			requestLogsObject.consumerAppKey = valueRequestLogsRequestLog["ConsumerAppKey"].asString();
		if(!valueRequestLogsRequestLog["TotalLatency"].isNull())
			requestLogsObject.totalLatency = valueRequestLogsRequestLog["TotalLatency"].asString();
		if(!valueRequestLogsRequestLog["HttpMethod"].isNull())
			requestLogsObject.httpMethod = valueRequestLogsRequestLog["HttpMethod"].asString();
		if(!valueRequestLogsRequestLog["Domain"].isNull())
			requestLogsObject.domain = valueRequestLogsRequestLog["Domain"].asString();
		if(!valueRequestLogsRequestLog["ErrorMessage"].isNull())
			requestLogsObject.errorMessage = valueRequestLogsRequestLog["ErrorMessage"].asString();
		if(!valueRequestLogsRequestLog["ConsumerAppId"].isNull())
			requestLogsObject.consumerAppId = valueRequestLogsRequestLog["ConsumerAppId"].asString();
		if(!valueRequestLogsRequestLog["InstanceId"].isNull())
			requestLogsObject.instanceId = valueRequestLogsRequestLog["InstanceId"].asString();
		if(!valueRequestLogsRequestLog["ClientNonce"].isNull())
			requestLogsObject.clientNonce = valueRequestLogsRequestLog["ClientNonce"].asString();
		if(!valueRequestLogsRequestLog["RequestSize"].isNull())
			requestLogsObject.requestSize = valueRequestLogsRequestLog["RequestSize"].asString();
		if(!valueRequestLogsRequestLog["StageId"].isNull())
			requestLogsObject.stageId = valueRequestLogsRequestLog["StageId"].asString();
		if(!valueRequestLogsRequestLog["StageName"].isNull())
			requestLogsObject.stageName = valueRequestLogsRequestLog["StageName"].asString();
		if(!valueRequestLogsRequestLog["HttpPath"].isNull())
			requestLogsObject.httpPath = valueRequestLogsRequestLog["HttpPath"].asString();
		if(!valueRequestLogsRequestLog["RequestId"].isNull())
			requestLogsObject.requestId = valueRequestLogsRequestLog["RequestId"].asString();
		if(!valueRequestLogsRequestLog["GroupId"].isNull())
			requestLogsObject.groupId = valueRequestLogsRequestLog["GroupId"].asString();
		if(!valueRequestLogsRequestLog["GroupName"].isNull())
			requestLogsObject.groupName = valueRequestLogsRequestLog["GroupName"].asString();
		if(!valueRequestLogsRequestLog["ErrorCode"].isNull())
			requestLogsObject.errorCode = valueRequestLogsRequestLog["ErrorCode"].asString();
		if(!valueRequestLogsRequestLog["ResponseSize"].isNull())
			requestLogsObject.responseSize = valueRequestLogsRequestLog["ResponseSize"].asString();
		if(!valueRequestLogsRequestLog["Region"].isNull())
			requestLogsObject.region = valueRequestLogsRequestLog["Region"].asString();
		if(!valueRequestLogsRequestLog["StatusCode"].isNull())
			requestLogsObject.statusCode = valueRequestLogsRequestLog["StatusCode"].asString();
		if(!valueRequestLogsRequestLog["ClientIp"].isNull())
			requestLogsObject.clientIp = valueRequestLogsRequestLog["ClientIp"].asString();
		if(!valueRequestLogsRequestLog["ServiceLatency"].isNull())
			requestLogsObject.serviceLatency = valueRequestLogsRequestLog["ServiceLatency"].asString();
		if(!valueRequestLogsRequestLog["RequestTime"].isNull())
			requestLogsObject.requestTime = valueRequestLogsRequestLog["RequestTime"].asString();
		if(!valueRequestLogsRequestLog["Exception"].isNull())
			requestLogsObject.exception = valueRequestLogsRequestLog["Exception"].asString();
		if(!valueRequestLogsRequestLog["CustomTraceId"].isNull())
			requestLogsObject.customTraceId = valueRequestLogsRequestLog["CustomTraceId"].asString();
		if(!valueRequestLogsRequestLog["JwtClaims"].isNull())
			requestLogsObject.jwtClaims = valueRequestLogsRequestLog["JwtClaims"].asString();
		if(!valueRequestLogsRequestLog["RequestProtocol"].isNull())
			requestLogsObject.requestProtocol = valueRequestLogsRequestLog["RequestProtocol"].asString();
		if(!valueRequestLogsRequestLog["RequestHeaders"].isNull())
			requestLogsObject.requestHeaders = valueRequestLogsRequestLog["RequestHeaders"].asString();
		if(!valueRequestLogsRequestLog["RequestQueryString"].isNull())
			requestLogsObject.requestQueryString = valueRequestLogsRequestLog["RequestQueryString"].asString();
		if(!valueRequestLogsRequestLog["RequestBody"].isNull())
			requestLogsObject.requestBody = valueRequestLogsRequestLog["RequestBody"].asString();
		if(!valueRequestLogsRequestLog["ResponseHeaders"].isNull())
			requestLogsObject.responseHeaders = valueRequestLogsRequestLog["ResponseHeaders"].asString();
		if(!valueRequestLogsRequestLog["ResponseBody"].isNull())
			requestLogsObject.responseBody = valueRequestLogsRequestLog["ResponseBody"].asString();
		if(!valueRequestLogsRequestLog["plugin"].isNull())
			requestLogsObject.plugin = valueRequestLogsRequestLog["plugin"].asString();
		if(!valueRequestLogsRequestLog["InitialRequestId"].isNull())
			requestLogsObject.initialRequestId = valueRequestLogsRequestLog["InitialRequestId"].asString();
		if(!valueRequestLogsRequestLog["AppName"].isNull())
			requestLogsObject.appName = valueRequestLogsRequestLog["AppName"].asString();
		if(!valueRequestLogsRequestLog["FrontRequestStart"].isNull())
			requestLogsObject.frontRequestStart = std::stol(valueRequestLogsRequestLog["FrontRequestStart"].asString());
		if(!valueRequestLogsRequestLog["FrontRequestEnd"].isNull())
			requestLogsObject.frontRequestEnd = std::stol(valueRequestLogsRequestLog["FrontRequestEnd"].asString());
		if(!valueRequestLogsRequestLog["BackendRequestStart"].isNull())
			requestLogsObject.backendRequestStart = std::stol(valueRequestLogsRequestLog["BackendRequestStart"].asString());
		if(!valueRequestLogsRequestLog["BackendRequestEnd"].isNull())
			requestLogsObject.backendRequestEnd = std::stol(valueRequestLogsRequestLog["BackendRequestEnd"].asString());
		if(!valueRequestLogsRequestLog["BackendResponseStart"].isNull())
			requestLogsObject.backendResponseStart = std::stol(valueRequestLogsRequestLog["BackendResponseStart"].asString());
		if(!valueRequestLogsRequestLog["BackendResponseEnd"].isNull())
			requestLogsObject.backendResponseEnd = std::stol(valueRequestLogsRequestLog["BackendResponseEnd"].asString());
		if(!valueRequestLogsRequestLog["FrontResponseStart"].isNull())
			requestLogsObject.frontResponseStart = std::stol(valueRequestLogsRequestLog["FrontResponseStart"].asString());
		if(!valueRequestLogsRequestLog["FrontResponseEnd"].isNull())
			requestLogsObject.frontResponseEnd = std::stol(valueRequestLogsRequestLog["FrontResponseEnd"].asString());
		requestLogs_.push_back(requestLogsObject);
	}

}

std::vector<QueryRequestLogsResult::RequestLog> QueryRequestLogsResult::getRequestLogs()const
{
	return requestLogs_;
}

