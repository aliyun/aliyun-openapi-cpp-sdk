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

#ifndef ALIBABACLOUD_CLOUDAPI_MODEL_QUERYREQUESTLOGSRESULT_H_
#define ALIBABACLOUD_CLOUDAPI_MODEL_QUERYREQUESTLOGSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/cloudapi/CloudAPIExport.h>

namespace AlibabaCloud
{
	namespace CloudAPI
	{
		namespace Model
		{
			class ALIBABACLOUD_CLOUDAPI_EXPORT QueryRequestLogsResult : public ServiceResult
			{
			public:
				struct RequestLog
				{
					std::string groupName;
					std::string initialRequestId;
					std::string httpPath;
					std::string jwtClaims;
					std::string consumerAppId;
					std::string stageId;
					std::string requestProtocol;
					std::string customTraceId;
					std::string statusCode;
					std::string clientIp;
					std::string requestQueryString;
					std::string responseSize;
					std::string serviceLatency;
					std::string clientNonce;
					std::string requestHeaders;
					std::string requestBody;
					std::string totalLatency;
					std::string requestId;
					std::string apiName;
					std::string instanceId;
					std::string stageName;
					std::string requestSize;
					std::string requestTime;
					std::string responseHeaders;
					std::string exception;
					std::string groupId;
					std::string responseBody;
					std::string consumerAppKey;
					std::string region;
					std::string errorCode;
					std::string domain;
					std::string errorMessage;
					std::string apiId;
					std::string httpMethod;
					std::string plugin;
				};


				QueryRequestLogsResult();
				explicit QueryRequestLogsResult(const std::string &payload);
				~QueryRequestLogsResult();
				std::vector<RequestLog> getRequestLogs()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<RequestLog> requestLogs_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CLOUDAPI_MODEL_QUERYREQUESTLOGSRESULT_H_